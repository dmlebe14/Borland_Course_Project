object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 789
  ClientWidth = 687
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 416
    Top = 459
    Width = 27
    Height = 13
    Caption = 'Min ='
  end
  object Label2: TLabel
    Left = 416
    Top = 486
    Width = 31
    Height = 13
    Caption = 'Max ='
  end
  object Label3: TLabel
    Left = 416
    Top = 513
    Width = 57
    Height = 13
    Caption = 'Cantidad = '
  end
  object Label4: TLabel
    Left = 416
    Top = 540
    Width = 17
    Height = 13
    Caption = 'K ='
  end
  object Image1: TImage
    Left = 56
    Top = 56
    Width = 561
    Height = 201
    Stretch = True
  end
  object StringGrid1: TStringGrid
    Left = 56
    Top = 384
    Width = 337
    Height = 281
    Color = clMoneyGreen
    ColCount = 4
    DefaultColWidth = 84
    FixedCols = 0
    RowCount = 10
    FixedRows = 0
    TabOrder = 0
    OnGetEditText = StringGrid1GetEditText
    OnSelectCell = StringGrid1SelectCell
  end
  object Button2: TButton
    Left = 142
    Top = 352
    Width = 86
    Height = 33
    Caption = 'FORMULA'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 228
    Top = 352
    Width = 86
    Height = 33
    Caption = 'SECUENCIA'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Edit1: TEdit
    Left = 496
    Top = 456
    Width = 121
    Height = 21
    TabOrder = 3
    Text = '0'
  end
  object Edit2: TEdit
    Left = 496
    Top = 483
    Width = 121
    Height = 21
    TabOrder = 4
    Text = '10'
  end
  object Edit3: TEdit
    Left = 496
    Top = 510
    Width = 121
    Height = 21
    TabOrder = 5
    Text = '6'
  end
  object Button4: TButton
    Left = 56
    Top = 696
    Width = 86
    Height = 33
    Caption = 'SORT'
    TabOrder = 6
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 148
    Top = 696
    Width = 86
    Height = 33
    Caption = 'MIX'
    TabOrder = 7
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 240
    Top = 696
    Width = 86
    Height = 33
    Caption = 'DESCARGAR'
    TabOrder = 8
    OnClick = Button6Click
  end
  object Button1: TButton
    Left = 56
    Top = 352
    Width = 86
    Height = 33
    Caption = 'CREAR'
    TabOrder = 9
    OnClick = Button1Click
  end
  object Edit4: TEdit
    Left = 496
    Top = 537
    Width = 121
    Height = 21
    TabOrder = 10
    Text = '3'
  end
  object Panel1: TPanel
    Left = 314
    Top = 352
    Width = 78
    Height = 33
    Caption = 'SUMA'
    TabOrder = 11
  end
end
