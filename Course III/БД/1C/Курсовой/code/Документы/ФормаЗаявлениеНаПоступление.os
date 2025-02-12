//Подсчет предметов для табличной части
Функция ВернутьКолвоПредметов()
	Возврат Перечисления.ПеречислениеПредметыПоступленияАбитуриентов.Количество(); 
КонецФункции
Функция ВернутьКолвоДокументов()
	Возврат Перечисления.ПеречислениеДокументыАбитуриента.Количество(); 
КонецФункции
Функция ВернутьЗначениеПредметаПоИндексу(индекс_номер)
	Возврат Перечисления.ПеречислениеПредметыПоступленияАбитуриентов.Получить(индекс_номер);
КонецФункции
Функция ВернутьЗначениеДокументаПоИндексу(индекс_номер)
	Возврат Перечисления.ПеречислениеДокументыАбитуриента.Получить(индекс_номер);
КонецФункции

//Отображение табличной части
&НаКлиенте
Процедура ПриОткрытии(Отказ)
	СчетчикОценок = 0;
 	Если (Объект.ОценкиАбитуриента.Количество() < ВернутьКолвоПредметов()) Тогда
		Пока (СчетчикОценок < ВернутьКолвоПредметов()) Цикл
			НоваяCтрока = Объект.ОценкиАбитуриента.Добавить();
			НоваяCтрока.Предмет = ВернутьЗначениеПредметаПоИндексу(СчетчикОценок);
			СчетчикОценок = СчетчикОценок + 1;
		КонецЦикла;
	КонецЕсли;
	
	СчетчикДокументов = 0;
	Если (Объект.ДокументыАбитуриента.Количество() < ВернутьКолвоДокументов()) Тогда
		Пока (СчетчикДокументов < ВернутьКолвоДокументов()) Цикл
			НоваяCтрока = Объект.ДокументыАбитуриента.Добавить();
			НоваяCтрока.Документ = ВернутьЗначениеДокументаПоИндексу(СчетчикДокументов);
			СчетчикДокументов = СчетчикДокументов + 1;
		КонецЦикла;	
	КонецЕсли
КонецПроцедуры

//Высчитваем сред. балл
&НаКлиенте
Процедура ОценкиАбитуриентаОценкаПриИзменении(Элемент)
	СуммаЗначений = 0;
	КоличествоЗначений = 0;
	Для пацана = 0 По Объект.ОценкиАбитуриента.Количество()-1 Цикл
		Если ЗначениеЗаполнено(Объект.ОценкиАбитуриента[пацана].Оценка) Тогда
			ТекущаяОценка = Объект.ОценкиАбитуриента[пацана].Оценка;
			Если ((ТекущаяОценка < 2) или (ТекущаяОценка > 5)) Тогда
				Сообщить("Некорректный ввод оценки по дисциплине '"+Объект.ОценкиАбитуриента[пацана].Предмет+"'!");
			КонецЕсли;	
			КоличествоЗначений = КоличествоЗначений + 1;
			СуммаЗначений = СуммаЗначений + ТекущаяОценка;
		КонецЕсли;
	КонецЦикла;
	СреднееЗначение = СуммаЗначений / КоличествоЗначений;
	Объект.СреднийБаллАбитуриента = СреднееЗначение;
КонецПроцедуры

//Запись данных в справочники
&НаСервере
Процедура ЗаписьВСправочникиПослеЗаписи()
	Если Справочники.РодителиАбитуриентов.НайтиПоНаименованию(Объект.ФИОРодительАбитуриента).Пустая() Тогда
		//Работа со справочником РодителиАбитуриентов
		НоваяЗаписьРодителя = Справочники.РодителиАбитуриентов.СоздатьЭлемент();
		НоваяЗаписьРодителя.Наименование = Объект.ФИОРодительАбитуриента;
		НоваяЗаписьРодителя.ГодРождения = Объект.ДатаРожденияРодительАбитуриента;
		НоваяЗаписьРодителя.Email = Объект.EmailРодительАбитуриента;
		НоваяЗаписьРодителя.Телефон = Объект.ТелефонРодительАбитуриента;
		НоваяЗаписьРодителя.Адрес = Объект.АдресРодительАбитуриента;
		НоваяЗаписьРодителя.Записать();
		
		//Дубликат функции ПроверкаОтчетTelegram т.к. не хочу выносить в общий модуль
		Если Справочники.Уведомления.НайтиПоРеквизиту("ФИО",Объект.ФИОРодительАбитуриента).Пустая() Тогда
			
			Сообщение = "<b>*Добавление нового родителя абитуриента*</b>"+Символы.ПС+Символы.ПС+
					"<b>Основная информация</b>"+Символы.ПС+
					"ФИО: "+Объект.ФИОРодительАбитуриента+Символы.ПС+
					"Дата рождения: "+Формат(Объект.ДатаРожденияРодительАбитуриента, "ДФ=dd.MM.yyyy")+Символы.ПС+Символы.ПС+
					"<b>Дополнительная информация</b>"+Символы.ПС+
					"E-mail: "+Объект.EmailРодительАбитуриента+Символы.ПС+
					"Телефон: "+Объект.ТелефонРодительАбитуриента+Символы.ПС+
					"Адрес: "+Объект.АдресРодительАбитуриента;
		СоздатьОтчетTelegram(Сообщение,Объект.ФИОРодительАбитуриента,"Добавление нового родителя абитуриента",1);
		КонецЕсли
	КонецЕсли;
	Если Справочники.Абитуриенты.НайтиПоНаименованию(Объект.ФИОАбитуриента).Пустая() Тогда
		//Работа со справочником Абитуриенты
		
		НоваяЗаписьАбитуриента = Справочники.Абитуриенты.СоздатьЭлемент();
		НоваяЗаписьАбитуриента.Наименование = Объект.ФИОАбитуриента;
		НоваяЗаписьАбитуриента.СреднийБаллАбитуриента = Объект.СреднийБаллАбитуриента;
		НоваяЗаписьАбитуриента.СпециальностьАбитурента = Объект.СпециальностьАбитуриента;
		НоваяЗаписьАбитуриента.ФормаОплатыАбитуриента = Объект.ФормаОплатыАбитуриента;
		НоваяЗаписьАбитуриента.ТипАттестатаАбитуриента = Объект.ТипАттестатаАбитуриента;
		НоваяЗаписьАбитуриента.ПриоритетЗачисленияАбитуриента = Объект.ПриоритетЗачисленияАбитуриента;
		НоваяЗаписьАбитуриента.РодительАбитуриента = Справочники.РодителиАбитуриентов.НайтиПоНаименованию(Объект.ФИОРодительАбитуриента);
		НоваяЗаписьАбитуриента.АдресАбитуриента = Объект.АдресАбитуриента;
		НоваяЗаписьАбитуриента.EmailАбитуриента = Объект.EmailАбитуриента;
		НоваяЗаписьАбитуриента.ТелефонАбитуриента = Объект.ТелефонАбитуриента;
		НоваяЗаписьАбитуриента.ДатаРожденияАбитуриента = Объект.ДатаРожденияАбитуриента;

		Для предмет = 0 По Объект.ОценкиАбитуриента.Количество()-1 Цикл
			НоваяСтрокаЗаписи = НоваяЗаписьАбитуриента.ОценкиАбитуриента.Добавить();
			НоваяСтрокаЗаписи.Предмет = Объект.ОценкиАбитуриента[предмет].Предмет;
			НоваяСтрокаЗаписи.Оценка = Объект.ОценкиАбитуриента[предмет].Оценка;
		КонецЦикла;
		
		Для документ = 0 По Объект.ДокументыАбитуриента.Количество()-1 Цикл
			НоваяСтрокаЗаписи = НоваяЗаписьАбитуриента.ДокументыАбитуриента.Добавить();
			НоваяСтрокаЗаписи.Документ = Перечисления.ПеречислениеДокументыАбитуриента.Получить(документ);			
			НоваяСтрокаЗаписи.Номер = Объект.ДокументыАбитуриента[документ].Номер;
		КонецЦикла;
		
		НоваяЗаписьАбитуриента.Записать();
		//Дубликат функции ПроверкаОтчетTelegram т.к. не хочу выносить в общий модуль
		Если Справочники.Уведомления.НайтиПоРеквизиту("ФИО",Объект.ФИОАбитуриента).Пустая() Тогда
			Сообщение = "<b>*Добавление нового абитуриента*</b>"+Символы.ПС+Символы.ПС+
					"<b>Основная информация</b>"+Символы.ПС+
					"ФИО: "+Объект.ФИОАбитуриента+Символы.ПС+
					"Дата рождения: "+Формат(Объект.ДатаРожденияАбитуриента, "ДФ=dd.MM.yyyy")+Символы.ПС+
					"Сред. балл: "+Объект.СреднийБаллАбитуриента+Символы.ПС+
					"Специальность: "+Объект.СпециальностьАбитуриента+Символы.ПС+Символы.ПС+
					"<b>Дополнительная информация</b>"+Символы.ПС+
					"Форма оплаты: "+Объект.ФормаОплатыАбитуриента+Символы.ПС+
					"Тип аттестата: "+Объект.ТипАттестатаАбитуриента+Символы.ПС+
					"Приоритет зачисления: "+Объект.ПриоритетЗачисленияАбитуриента+Символы.ПС+Символы.ПС+
					"<b>Контактная информация</b>"+Символы.ПС+
					"Родитель: "+Объект.ФИОРодительАбитуриента+Символы.ПС+
					"Адрес: "+Объект.АдресАбитуриента+Символы.ПС+
					"Email: "+Объект.EmailАбитуриента+Символы.ПС+
					"Телефон: "+Объект.ТелефонАбитуриента+Символы.ПС;
	СоздатьОтчетTelegram(Сообщение,Объект.ФИОАбитуриента,"Добавление нового абитуриента",1);
		КонецЕсли
	КонецЕсли;
КонецПроцедуры

//После записи формы
&НаКлиенте
Процедура ПослеЗаписи(ПараметрыЗаписи)
	ЗаписьВСправочникиПослеЗаписи();
КонецПроцедуры

