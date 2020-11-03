#pragma once
using namespace System;


//������� 2.
//1. ������� ����� ������� : ��������, ��������.
//2. ���������� ��������� � ������� ��� ���� ������ ��������� � �������� : ���������� �
//��������.���������� ���������� ������� � �������� �������.
//3. �� ����� �� ������ �������������� ����������� ��������� � ����������, ��� �������
//��������� ����� � �����������, �� ���� ��� ��� ������.
//4. ������������ ��� ������ ����������� PictireBox


interface class IWhat_is
{// ������ ���������� �� ����� ����������.
public:		
	virtual void Show(System::Windows::Forms::PictureBox^ Pic); // ��������
	virtual void Bring_Out(System::Windows::Forms::ListBox^); // �������
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


