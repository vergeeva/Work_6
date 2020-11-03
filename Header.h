#pragma once
using namespace System;


//Задание 2.
//1. Создать набор классов : «мальчик», «девочка».
//2. Определить интерфейс к ребенку «Из чего только сделаны…» с методами : «Показать» и
//«Вывести».Определить реализацию методов в дочерних классах.
//3. На форме из группы переключателей реализовать обращение к интерфейсу, при котором
//выводится текст и изображение, из чего там кто сделан.
//4. Использовать для вывода изображения PictireBox


interface class IWhat_is
{// Методы интерфейса не имеют реализации.
public:		
	virtual void Show(System::Windows::Forms::PictureBox^ Pic); // показать
	virtual void Bring_Out(System::Windows::Forms::ListBox^); // вывести
};


public ref class Boy : public IWhat_is
{
public:
	String^ Name;
	array <String^>^ Property;
	int Count;
	Boy();
	virtual void Show(System::Windows::Forms::PictureBox^ Pic) override;
	virtual void Bring_Out(System::Windows::Forms::ListBox^) override;
private:
	
};

public ref class Girl : public IWhat_is
{
public:
	array <String^>^ Property;
	int Count;
	Girl();
	virtual void Show(System::Windows::Forms::PictureBox^ Pic) override;
	virtual void Bring_Out(System::Windows::Forms::ListBox^) override;
private:

};


