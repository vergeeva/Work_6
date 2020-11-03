#include "Header.h"
Boy::Boy()
{
	Property = gcnew array <String^>(25);
}

void Boy::Show(System::Windows::Forms::PictureBox^ Pic)
{
	Random^ rand = gcnew Random();
	Threading::Thread::Sleep(5);
	int i = rand->Next(1, 6);
	String^ pn = System::String::Format("Pictures\\boy\\{0}.jpg", i);
	Pic->ImageLocation = pn;
}

void Boy::Bring_Out(System::Windows::Forms::ListBox^ lb)
{
	lb->Items->Clear();
	for (int i = 0; i < Count; i++)
	{
		lb->Items->Add(Property[i]);
	}
}


Girl::Girl()
{
	Property = gcnew array <String^>(25);
}

void Girl::Show(System::Windows::Forms::PictureBox^ Pic)
{
	Random^ rand = gcnew Random();
	Threading::Thread::Sleep(5);
	int i = rand->Next(1, 6);
	String^ pn = System::String::Format("Pictures\\girl\\{0}.jpg", i);
	Pic->ImageLocation = pn;
}


void Girl::Bring_Out(System::Windows::Forms::ListBox^ lb)
{
	lb->Items->Clear();
	for (int i = 0; i < Count; i++)
	{
		lb->Items->Add(Property[i]);
	}
}


