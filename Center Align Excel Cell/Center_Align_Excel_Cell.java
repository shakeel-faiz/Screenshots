// Create empty Workbook object.
com.aspose.cells.Workbook wb = new com.aspose.cells.Workbook();

// Access first worksheet.
Worksheet ws = wb.getWorksheets().get(0);

// Access cell C4 and add some text inside it.
Cell c4 = ws.getCells().get("C4");
c4.putValue("Aspose File Format APIs");

// Access cell style.
Style st = c4.getStyle();

// Set the horizontal and vertical alignment of the cell style.
st.setHorizontalAlignment(TextAlignmentType.CENTER);
st.setVerticalAlignment(TextAlignmentType.CENTER);

// Set the font color to red.
st.getFont().setColor(Color.getRed());

// Set the cell style.
c4.setStyle(st);

// Set the cell's column width and row height.
ws.getCells().setColumnWidth(c4.getColumn(), 30);
ws.getCells().setRowHeight(c4.getRow(), 40);

// Save the workbook in output Excel format.
wb.save("outputCenterAlignExcelCell.xlsx", SaveFormat.XLSX);
