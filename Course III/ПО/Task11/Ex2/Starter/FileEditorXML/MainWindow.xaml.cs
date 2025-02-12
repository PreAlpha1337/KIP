﻿using System.Windows;
using Microsoft.Win32;

namespace FileEditorXML
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        /// <summary>
        /// Name of file to edit.
        /// </summary>
        private string fileName = string.Empty;

        public MainWindow()
        {
            InitializeComponent();
        }

        /// <summary>
        /// Open the file after prompting the user for the file name.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void OpenButton_Click(object sender, RoutedEventArgs e)
        {
            fileName = GetFileName();
            if (fileName != string.Empty)
            {
                // TODO - Update the UI to use the new method.
                // Call the new read file contents method
                editor.Text = TextFileOperations.ReadAndFilterTextFileContents(fileName);
            }
        }

        /// <summary>
        /// Use the common dialog to get a valid file name.
        /// Filtering for .txt.
        /// Starting in predefined location.
        /// </summary>
        private string GetFileName()
        {
            // Initialize the filename
            string fname = string.Empty;

            // Configure open file dialog box
            OpenFileDialog openFileDlg = new OpenFileDialog();
            openFileDlg.InitialDirectory = @"W:\Projects\KIP\Course III\ПО\Task11\Ex2\Starter\";
            openFileDlg.DefaultExt = ".txt"; // Default file extension
            openFileDlg.Filter = "Text documents (.txt)|*.txt"; // Filter files by extension

            // Show open file dialog box
            bool? result = openFileDlg.ShowDialog();

            // Process open file dialog box results
            if (result == true)
            {
                // Open document
                fname = openFileDlg.FileName;
            }
            return fname;
        }

        private void SaveButton_Click(object sender, RoutedEventArgs e)
        {
            if (fileName != string.Empty)
                TextFileOperations.WriteTextFileContents(fileName, editor.Text);
        }
    }
}
