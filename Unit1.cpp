//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
typedef struct ar{
    int num;
    int val;
} ar;
int k, n, c, max, pro, q;  bool abcd;
ar a[30], p[30];
int itmp[30], valsum[30];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
Image1->Picture->LoadFromFile("\image.bmp" );
abcd = false;
}
//---------------------------------------------------------------------------

int __fastcall TForm1::factorial (int n)
{
    if (n <= 0)
    return 1;
    else
	return n*factorial(n-1);
}

void __fastcall TForm1::cnk(int m,int l)
{
 //m-сколько осталоась выбрать,l - номер элемента с которого начниаем
    int i, j, q, y, x, z, sum;
    if (m == 0){ //Здесь - обработка комбинации
	//printf ("\n");
	x = 0; y = 0; z = 0; sum = 0;
	for (j = 0; j < k; j++){
	    sum += p[j].val;
	    itmp[j] = p[j].num;
		while (x < sum){
    		x = y + z;
    		y = x;
    		z++;
    	    }
		//printf ("%d ",p[j].val);
	}
	//printf("Sum = %d", sum);
	if (sum == x){
		//printf("\t-->Совпадение!");
	    if(sum > max){
		max = sum;
		for (j = 0; j < k; j++){
		    valsum[j] = itmp[j];
		}
	    }
	}
    }else 
	for (i=l;i<=n-m;i++){
	    p[k-m].val=a[i].val;
	    p[k-m].num=a[i].num;
	    cnk(m-1,i+1);
	}
}

//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
randomize();
pro = StrToInt(Edit2->Text);
q = StrToInt(Edit1->Text);
n = StrToInt(Edit3->Text);
k = StrToInt(Edit4->Text);
 if (n > 30)
 {
 ShowMessage("[ESP] Es prohibido tener mas que 30 elementos debido a largo tiempo de procesamiento / [ENG] It's prohibited to have more than 30 elements due to a large time of processing");
 }
 else if (k > n)
 {
 ShowMessage("[ESP] Es imposible encontrar un resultado si k>n / [ENG] It's impossible to find a result if k>n");
 }
 else
 {
    for (int i = 0; i < n; i++)
    {
		a[i].val = random(pro - q + 1) + q;
		a[i].num = i+1;
		StringGrid1->RowCount = n;
		StringGrid1->Cells[0][i] = a[i].val;
	}
abcd = true;
TStringList *list = new TStringList;
list->Add(StringGrid1->Cols[0]->DelimitedText);
list->SaveToFile("create.txt");
delete list;
for (int i = 1;i<StringGrid1->ColCount; i++)
StringGrid1->Cols[i]->Clear();
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	if (abcd == false)
   {
	 ShowMessage("[ESP] Es necesitado crear una matriz / [ENG] It's needed to create an array");
   }
   else
   {
	int x,y,z;
	x = 0; y = 0; z = 0;
	for (int i = 0; i < n; i++)
	{
	x = y + z;
	y = x;
	z++;
	StringGrid1->Cells[1][i] = x;
	}
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if (abcd == false)
   {
	 ShowMessage("[ESP] Es necesitado crear una matriz / [ENG] It's needed to create an array");
   }
   else
   {
	max = 0; 
	cnk(k,0);
	if(max == 0)
	ShowMessage("[ESP] No hay convergencias / [ENG] There's no convergences");
		else
		{
			StringGrid1->Cells[3][0] = max;
			for (int i = 0; i < k; i++)
			{
			StringGrid1->Cells[2][i] = a[valsum[i]-1].val;
			}
				TStringList *list = new TStringList;
				list->Add(StringGrid1->Cols[2]->DelimitedText);
				list->SaveToFile("sequence.txt");
				delete list;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if (abcd == false)
   {
	 ShowMessage("[ESP] Es necesitado crear una matriz / [ENG] It's needed to create an array");
   }
   else
   {
	srand(time(NULL));

	for (int i = n - 1; i >= 1; i--)
	{
		int j = rand() % (i + 1);

		int tmp = a[j].val;
		//int num =  a[j].num;
		a[j].val = a[i].val;
		//a[j].num = a[i].num;
		a[i].val = tmp;
		//a[i].num = num;
	}
		for (int i = 0; i < n; i++)
		{
		StringGrid1->Cells[0][i] = a[i].val;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
   if (abcd == false)
   {
	 ShowMessage("[ESP] Es necesitado crear una matriz / [ENG] It's needed to create an array");
   }
   else
   {
	for (int i = 0; i < n; i++)
	{
	int minPosition;
		minPosition = i;
		for (int j = i + 1; j < n; j++)
			if (a[minPosition].val > a[j].val)
			minPosition = j;
    int tmp = a[minPosition].val;
	//int num = a[minPosition].num;
		a[minPosition].val = a[i].val;
		//a[minPosition].num = a[i].num;
		a[i].val = tmp;
		//a[i].num = num;
	}

	 for (int i = 0; i < n; i++)
	{
	StringGrid1->Cells[0][i] = a[i].val;
	}
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
int num;

TStringList *list = new TStringList;
list->LoadFromFile("create.txt");
for (int i = 0;i<StringGrid1->ColCount; i++)
 StringGrid1->Cols[i]->Clear();

for(int i = 0; i<list->Count; i++){
 StringGrid1->Cols[i]->DelimitedText = list->Strings[i];
}


delete list;

num = StringGrid1->RowCount;
n = 0;
for (int i = 0; i < num; i++) {
   if(StringGrid1->Cells[0][i].Length() > 0) n++;
}

for(int i=0 ;i<30;i++){
   a[i].val =0;
   a[i].num = i+1;
}


for (int i = 0; i < n; i++)
{
 try{
 a[i].val = StrToInt(StringGrid1->Cells[0][i]);
 }catch(...){
   ShowMessage ("Произошла ошибка. - "+StringGrid1->Cells[0][i]+ n);
 }
}

abcd = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid1SelectCell(TObject *Sender, int ACol,
      int ARow, bool &CanSelect)
{
StringGrid1->Options = StringGrid1->Options << goEditing;
CanSelect = ACol == 0;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::StringGrid1GetEditText(TObject *Sender, int ACol,
      int ARow, AnsiString &Value)
{
for (int i = 1;i<StringGrid1->ColCount; i++)
StringGrid1->Cols[i]->Clear();
n = StringGrid1->RowCount;
for (int i = 0; i < n; i++)
{
  a[i].val = StrToInt(StringGrid1->Cells[0][i]);
}
}
//---------------------------------------------------------------------------

