//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AplOk.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
        Form2->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button2Click(TObject *Sender)
{
        ListBox1->DeleteSelected();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
        ComboBox1->Items->Add("Users");
        ComboBox1->Items->Add("Products");
        ComboBox1->Items->Add("Priviledges");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
        if(ComboBox1->ItemIndex == 0)
        {
             ListBox1->Items->Add("Mi�osz Piotr �ukaszek");
             ListBox1->Items->Add("Grzegorz Norbert Grzejdziak");
             ListBox1->Items->Add("Damian Mateusz Hytko");
             ListBox1->Items->Add("Krzysztof Kamil Karwecki");
        }
        else if(ComboBox1->ItemIndex == 1)
        {
             ListBox1->Items->Add("Immunitet");
             ListBox1->Items->Add("Abstrakcja");
             ListBox1->Items->Add("Lenistwo");
        }
        else if(ComboBox1->ItemIndex == 2)
        {
             ListBox1->Items->Add("Mleko");
             ListBox1->Items->Add("Woda");
             ListBox1->Items->Add("Sok 100%");
             ListBox1->Items->Add("Nekar");
             ListBox1->Items->Add("Nap�j");
        }
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button3Click(TObject *Sender)
{
                ListBox1->Sorted = true;
                ListBox1->Sorted = false;
}
//---------------------------------------------------------------------------



