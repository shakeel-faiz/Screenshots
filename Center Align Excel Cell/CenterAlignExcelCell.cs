// Create empty Workbook object.
Aspose.Cells.Workbook wb = new Aspose.Cells.Workbook();

// Access first worksheet.
Worksheet ws = wb.Worksheets[0];

// Access cell C4 and some text inside it.
Cell c4 = ws.Cells["C4"];
c4.PutValue("Aspose File Format APIs");

// Access cell style
Style st = c4.GetStyle();

// Set the horizontal and vertical alignment of the cell style.
st.HorizontalAlignment = TextAlignmentType.Center;
st.VerticalAlignment = TextAlignmentType.Center;

// Set the font color to red.
st.Font.Color = Color.Red;

// Set the cell style
c4.SetStyle(st);

//Set the cell's column width and row height.
ws.Cells.SetColumnWidth(c4.Column, 30);
ws.Cells.SetRowHeight(c4.Row, 40);

// Save the workbook in output Excel format.
wb.Save("outputCenterAlignExcelCell.xlsx", SaveFormat.Xlsx);