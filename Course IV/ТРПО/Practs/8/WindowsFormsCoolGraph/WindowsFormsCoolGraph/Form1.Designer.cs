﻿namespace WindowsFormsCoolGraph
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.Windows.Forms.DataVisualization.Charting.ChartArea chartArea1 = new System.Windows.Forms.DataVisualization.Charting.ChartArea();
            System.Windows.Forms.DataVisualization.Charting.Legend legend1 = new System.Windows.Forms.DataVisualization.Charting.Legend();
            System.Windows.Forms.DataVisualization.Charting.Series series1 = new System.Windows.Forms.DataVisualization.Charting.Series();
            this.chart1 = new System.Windows.Forms.DataVisualization.Charting.Chart();
            this.textBoxStep = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.textBoxXmax = new System.Windows.Forms.TextBox();
            this.XmaxLabel = new System.Windows.Forms.Label();
            this.textBoxXmin = new System.Windows.Forms.TextBox();
            this.XminLabel = new System.Windows.Forms.Label();
            this.buttonCalc = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).BeginInit();
            this.SuspendLayout();
            // 
            // chart1
            // 
            chartArea1.Name = "ChartArea1";
            this.chart1.ChartAreas.Add(chartArea1);
            legend1.Name = "Legend1";
            this.chart1.Legends.Add(legend1);
            this.chart1.Location = new System.Drawing.Point(12, 12);
            this.chart1.Name = "chart1";
            this.chart1.Palette = System.Windows.Forms.DataVisualization.Charting.ChartColorPalette.EarthTones;
            series1.ChartArea = "ChartArea1";
            series1.ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            series1.Legend = "Legend1";
            series1.Name = "Series1";
            this.chart1.Series.Add(series1);
            this.chart1.Size = new System.Drawing.Size(609, 325);
            this.chart1.TabIndex = 18;
            this.chart1.Text = "chart1";
            this.chart1.Click += new System.EventHandler(this.chart1_Click);
            // 
            // textBoxStep
            // 
            this.textBoxStep.Location = new System.Drawing.Point(252, 362);
            this.textBoxStep.Name = "textBoxStep";
            this.textBoxStep.Size = new System.Drawing.Size(100, 20);
            this.textBoxStep.TabIndex = 25;
            this.textBoxStep.Text = "0,5";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(249, 349);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(27, 13);
            this.label1.TabIndex = 24;
            this.label1.Text = "Шаг";
            // 
            // textBoxXmax
            // 
            this.textBoxXmax.Location = new System.Drawing.Point(132, 362);
            this.textBoxXmax.Name = "textBoxXmax";
            this.textBoxXmax.Size = new System.Drawing.Size(100, 20);
            this.textBoxXmax.TabIndex = 23;
            this.textBoxXmax.Text = "-1,5";
            // 
            // XmaxLabel
            // 
            this.XmaxLabel.AutoSize = true;
            this.XmaxLabel.Location = new System.Drawing.Point(129, 349);
            this.XmaxLabel.Name = "XmaxLabel";
            this.XmaxLabel.Size = new System.Drawing.Size(33, 13);
            this.XmaxLabel.TabIndex = 22;
            this.XmaxLabel.Text = "Xmax";
            // 
            // textBoxXmin
            // 
            this.textBoxXmin.Location = new System.Drawing.Point(16, 362);
            this.textBoxXmin.Name = "textBoxXmin";
            this.textBoxXmin.Size = new System.Drawing.Size(100, 20);
            this.textBoxXmin.TabIndex = 21;
            this.textBoxXmin.Text = "-2,5";
            // 
            // XminLabel
            // 
            this.XminLabel.AutoSize = true;
            this.XminLabel.Location = new System.Drawing.Point(13, 349);
            this.XminLabel.Name = "XminLabel";
            this.XminLabel.Size = new System.Drawing.Size(30, 13);
            this.XminLabel.TabIndex = 20;
            this.XminLabel.Text = "Xmin";
            // 
            // buttonCalc
            // 
            this.buttonCalc.Location = new System.Drawing.Point(416, 359);
            this.buttonCalc.Name = "buttonCalc";
            this.buttonCalc.Size = new System.Drawing.Size(75, 23);
            this.buttonCalc.TabIndex = 19;
            this.buttonCalc.Text = "Рассчет";
            this.buttonCalc.UseVisualStyleBackColor = true;
            this.buttonCalc.Click += new System.EventHandler(this.buttonCalc_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(694, 406);
            this.Controls.Add(this.textBoxStep);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.textBoxXmax);
            this.Controls.Add(this.XmaxLabel);
            this.Controls.Add(this.textBoxXmin);
            this.Controls.Add(this.XminLabel);
            this.Controls.Add(this.buttonCalc);
            this.Controls.Add(this.chart1);
            this.Name = "Form1";
            this.Text = "Работа с графиками";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.chart1)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.DataVisualization.Charting.Chart chart1;
        private System.Windows.Forms.TextBox textBoxStep;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox textBoxXmax;
        private System.Windows.Forms.Label XmaxLabel;
        private System.Windows.Forms.TextBox textBoxXmin;
        private System.Windows.Forms.Label XminLabel;
        private System.Windows.Forms.Button buttonCalc;
    }
}

