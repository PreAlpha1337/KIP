<!DOCtype html>

<html>
	<head>
		<meta charset=“utf-8”> <title>Приют "Котикус"</title> 
		<meta name="viewport" content="width=device-width, initial-scale=1.0">
		<link href="css/bootstrap.min.css" rel="stylesheet"> 
		<style> [class*="col-"]
		{
			background-color: #eee; text-align: center; padding-top: 10px; padding-bottom: 10px; margin-bottom: 10px; font-size: 2rem;
		}
		</style> 

	</head>
	<body>
				<style>
			p {
    			font-size: 120%;
    		}			
			
			.col-lg-6:first-child {
  				background-color: white;
			}

			.table-responsive {
  				font-size: 120%;
  				background-color: #eee;
			}

			.label-default{
			  background-color: #337ab7;
			}

		</style>
		<script src="js/jquery.min.js"></script> 
		<script src="js/bootstrap.min.js"></script> 

		<?php
		if (isset($_COOKIE['logined']))
		{
			print('
					<ul class="nav nav-pills">
					<li role="presentation"><a href="#"><b>Добро пожаловать, '.base64_decode($_COOKIE['logined']).'</b></a></li>
					<li role="presentation"><a href="./index.php">Основное</a></li>
					<li role="presentation" class="active"><a href="#">История породы</a></li>
					<li role="presentation"><a href="./veterinary.php">Уход</a></li>
					<li role="presentation"><a href="./other.php">Спонсоры</a></li>
					<li role="presentation"><a href="./about.php">О нас</a></li>
					<li role="presentation"><a href="./canvas.php">Canvas</a></li>
					<li role="presentation"><a href="./js.php">Javascript</a></li>
					<li role="presentation"><a href="./php.php">PHP</a></li>
					<li role="presentation"><a href="./computergraph.php">Графика</a></li>
					<li class="dropdown">
					<a href="#" data-toggle="dropdown" class="dropdown-toggle">
						Игры 
						<b class="caret"></b>
					</a>
						<ul class="dropdown-menu">
							<li><a href="./citygame.php">Игра "Города" на PHP</a></li>
							<li><a href="./snakegame.php">Игра "Змейка" на JS</a></li>
						</ul>
					</li>
					</ul>'
				);
		}

		else if (isset($_COOKIE['registrated']))
			{
				print('
					<ul class="nav nav-pills">
					<li role="presentation"><a href="./login.php">Вход</a></li>
					<li role="presentation"><a href="./index.php">Основное</a></li>
					<li role="presentation" class="active"><a href="#">История породы</a></li>
					<li role="presentation"><a href="./veterinary.php">Уход</a></li>
					<li role="presentation"><a href="./other.php">Спонсоры</a></li>
					<li role="presentation"><a href="./about.php">О нас</a></li>
					<li role="presentation"><a href="./canvas.php">Canvas</a></li>
					<li role="presentation"><a href="./js.php">Javascript</a></li>
					<li role="presentation"><a href="./php.php">PHP</a></li>
					<li role="presentation"><a href="./computergraph.php">Графика</a></li>
					<li class="dropdown">
					<a href="#" data-toggle="dropdown" class="dropdown-toggle">
						Игры 
						<b class="caret"></b>
					</a>
						<ul class="dropdown-menu">
							<li><a href="./citygame.php">Игра "Города" на PHP</a></li>
							<li><a href="./snakegame.php">Игра "Змейка" на JS</a></li>
						</ul>
					</li>
					</ul>'
				);
			}

		else
		{
				print('
					<ul class="nav nav-pills">
					<li role="presentation"><a href="./login.php">Регистрация</a></li>
					<li role="presentation"><a href="./index.php">Основное</a></li>
					<li role="presentation" class="active"><a href="#">История породы</a></li>
					<li role="presentation"><a href="./veterinary.php">Уход</a></li>
					<li role="presentation"><a href="./other.php">Спонсоры</a></li>
					<li role="presentation"><a href="./about.php">О нас</a></li>
					<li role="presentation"><a href="./canvas.php">Canvas</a></li>
					<li role="presentation"><a href="./js.php">Javascript</a></li>
					<li role="presentation"><a href="./php.php">PHP</a></li>
					<li role="presentation"><a href="./computergraph.php">Графика</a></li>
					<li class="dropdown">
					<a href="#" data-toggle="dropdown" class="dropdown-toggle">
						Игры 
						<b class="caret"></b>
					</a>
						<ul class="dropdown-menu">
							<li><a href="./citygame.php">Игра "Города" на PHP</a></li>
							<li><a href="./snakegame.php">Игра "Змейка" на JS</a></li>
						</ul>
					</li>
					</ul>'
				);
		}
			
		?>
		
		<div class="page-header">
  <h1>Сиамская кошка<small>  &#8212; история породы</small></h1>
</div>
		<p>Родиной сиамских кошек является Таиланд. Там эта порода раньше считалась священной, ее уважали в храмах и охраняли законом. В королевской семье сиамская кошка использовалась для проведения некоторых ритуалов. Из-за всего этого вывозить этих котов за границу было запрещенная. Однако, со временем, она все равно попала в Европу.</p>
		<p>Сиамские кошки часто вспоминаются в таиландских легендах и сказаниях. Например, в одной из них говорится, что кошка этой породы всегда сопровождала тайскую принцессу во время купания в реке. Принцесса перед купанием снимала свои кольца и насаждала на хвост кошке, чтобы та оберегала их пока хозяйка купается. Однажды кошка потеряла обручальное кольцо и с того времени принцесса всегда завязывала ей узелки на кончике хвоста.</p>
		<div class="row">
  <div class="col-md-6">
    <div class="thumbnail">
        <img src="./img/cat_history1.jpg" alt="Fjords" style="width:100%">
        <div class="caption">
        </div>
    </div>
  </div>
    <div class="col-md-6">
    <div class="thumbnail">
        <img src="./img/cat_history2.jpg" alt="Fjords" style="width:100%">
        <div class="caption">
        </div>
    </div>
  </div>
</div>
		<h2>Происхождение сиамских кошек</h2>
		<p>Кстати об узелках, &#8212; когда-то в Таиланде наличие узелков и заломов на хвосте считалось характерным признаком особенности Сиамской кошки. Сейчас уже известно, что они образовывались в следствие скрещивания близких родственников. В наше время наличие узелков или заломов считается дефектом.</p> <p>Даже сейчас достоверно не известное происхождение сиамских кошек. Вероятнее всего, эта порода происходит от диких бенгальских котов. Доказательством потому служит тот факт, что у сиамских кошек, как и в диких бенгальских, срок беременности представляет не менее 65 дней. Это при том, что у всех других пород срок беременности представляет от 55 до 65 дней.</p>
		<h2>Сиамская кошка в Европе</h2>
		<p>В Европе сиамская порода начала распространяться в конце 19-го века, когда английский консул привез первых кошек, которые были подарком самого тайского короля Сиама. В Америку и другие страны порода добралась немного позже. Сегодня сиамские кошки бывают около 40 разновидностей, среди которых есть и монотонные (черные, лиловые, голубые, крему и другие).</p> <p>Породистые сиамские кошки имеют короткую, блестящую и плотную шерсть, утонченные формы тела. Последнее обеспечивается небольшим размерами и узким скелетом. В то же время сиамские коты владеют достаточно мощными и мускулистыми плечами и бедрами.</p> <p>Главным признаком сиамской породы является цвет и форма глаз. Представители породы почти всегда имеют ярко-голубые (иногда зеленые) глаза миндалевидной формы. Не менее важный признак сиамских кошек, о котором мы уже вспоминали выше, &#8212; это эта расцветка их конечностей и «маска» на лице. Объясняется такая особенная расцветка колебанием температуры кожи: в крайних точках она ниже, а потому шерсть там содержит больше темного пигмента.</p> 

<?php
		if (isset($_COOKIE['logined']))
		{
			print("
			<form action='./php/loginlogic/exitbutton.php' method='POST'>
			<button type='submit' class='btn btn-primary btn-lg'>Выход</button><br>
			</form>");
		}
?>
<small>Данная организация работает исключительно на деньги с ВАШИХ пожертвований</small>

</body>

</html>