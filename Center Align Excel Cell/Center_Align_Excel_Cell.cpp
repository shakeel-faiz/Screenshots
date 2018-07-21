// Path of output Excel file
intrusive_ptr<Aspose::Cells::System::String> outputCenterAlignExcelCell = new Aspose::Cells::System::String("D:\\Download\\outputCenterAlignExcelCell.xlsx");

// Create empty Workbook object.
intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook();

// Access first worksheet.
intrusive_ptr<Aspose::Cells::IWorksheet> ws = wb->GetIWorksheets()->GetObjectByIndex(0);

// Access cell C4. 
intrusive_ptr<Aspose::Cells::System::String> cellName = new Aspose::Cells::System::String("C4");
intrusive_ptr<Aspose::Cells::ICell> c4 = ws->GetICells()->GetObjectByIndex(cellName);

// Add some text inside it.
intrusive_ptr<Aspose::Cells::System::String> cellText = new Aspose::Cells::System::String("Aspose File Format APIs");
c4->PutValue(cellText);

// Access cell style.
intrusive_ptr<Aspose::Cells::IStyle>  st = c4->GetIStyle();

// Set the horizontal and vertical alignment of the cell style.
st->SetHorizontalAlignment(Aspose::Cells::TextAlignmentType::TextAlignmentType_Center);
st->SetVerticalAlignment(Aspose::Cells::TextAlignmentType::TextAlignmentType_Center);

// Set the font color to red.
st->GetIFont()->SetColor(Aspose::Cells::System::Drawing::Color::GetRed());

// Set the cell style.
c4->SetIStyle(st);

// Set the cell's column width and row height.
ws->GetICells()->SetColumnWidth(c4->GetColumn(), 30);
ws->GetICells()->SetRowHeight(c4->GetRow(), 40);

// Save the workbook in output Excel format.
wb->Save(outputCenterAlignExcelCell, SaveFormat_Xlsx);
