#pragma once
#include "display.h"
#include <string>
void ADD2WT(int weight);
void ADD2VAL(int value);
int minimumCostSimplePath(int u, int destination);
std::string printknapSack();
std::string printcity();

namespace TripOptimiser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for Src
	/// </summary>
	public ref class Src : public System::Windows::Forms::Form
	{
	public:
		Src(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		String^ a = "";
		String^ b = "";
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;


	public:
		String^ c = "";
		Src(String ^name, String^ age, String^ people)
		{
			InitializeComponent();
			a = name;
			b = age;
			c = people;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Src()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(624, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(304, 40);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Src::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 33);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Enter Source :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(44, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(265, 33);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Destination :";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(624, 108);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(304, 40);
			this->comboBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 12));
			this->button1->Location = System::Drawing::Point(808, 630);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 76);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Next=>";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Src::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(44, 223);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(518, 66);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Enter weight and value of your items:\r\n (if less items than 5 , leave blank)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(54, 421);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 33);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Weight(kg):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(51, 528);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(172, 33);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Cost(in Rs):";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(335, 415);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 40);
			this->textBox1->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(478, 414);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 39);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(612, 415);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 39);
			this->textBox3->TabIndex = 10;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->textBox4->Location = System::Drawing::Point(749, 414);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 39);
			this->textBox4->TabIndex = 11;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold));
			this->textBox5->Location = System::Drawing::Point(883, 414);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 39);
			this->textBox5->TabIndex = 12;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(332, 521);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 40);
			this->textBox6->TabIndex = 13;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(475, 521);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 40);
			this->textBox7->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(609, 521);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 40);
			this->textBox8->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(746, 521);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 40);
			this->textBox9->TabIndex = 16;
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(880, 521);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 40);
			this->textBox10->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DimGray;
			this->label6->Location = System::Drawing::Point(338, 343);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(94, 32);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Item 1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DimGray;
			this->label7->Location = System::Drawing::Point(476, 343);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 32);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Item 2";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DimGray;
			this->label8->Location = System::Drawing::Point(618, 343);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 32);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Item 3";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DimGray;
			this->label9->Location = System::Drawing::Point(755, 343);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 32);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Item 4";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DimGray;
			this->label10->Location = System::Drawing::Point(889, 343);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 32);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Item 5";
			// 
			// Src
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1060, 729);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Src";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Src";
			this->Load += gcnew System::EventHandler(this, &Src::Src_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Src_Load(System::Object^ sender, System::EventArgs^ e) {
		comboBox1->Items->Add("Agra");
		comboBox1->Items->Add("Delhi");
		comboBox1->Items->Add("Mumbai");
		comboBox1->Items->Add("Jaipur");
		comboBox1->Items->Add("Chennai");
		comboBox2->Items->Add("Agra");
		comboBox2->Items->Add("Delhi");
		comboBox2->Items->Add("Mumbai");
		comboBox2->Items->Add("Jaipur");
		comboBox2->Items->Add("Chennai");

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text !="")
		{
			ADD2WT(System::Convert::ToInt16(textBox1->Text));
		}
		if (textBox2->Text != "")
		{
			ADD2WT(System::Convert::ToInt16(textBox2->Text));
		}if (textBox3->Text != "")
		{
			ADD2WT(System::Convert::ToInt16(textBox3->Text));
		}if (textBox4->Text != "")
		{
			ADD2WT(System::Convert::ToInt16(textBox4->Text));
		}if (textBox5->Text != "")
		{
			ADD2WT(System::Convert::ToInt16(textBox5->Text));
		}if (textBox6->Text != "")
		{
			ADD2VAL(System::Convert::ToInt16(textBox6->Text));
		}
		if (textBox7->Text != "")
		{
			ADD2VAL(System::Convert::ToInt16(textBox7->Text));
		}if (textBox8->Text != "")
		{
			ADD2VAL(System::Convert::ToInt16(textBox8->Text));
		}if (textBox9->Text != "")
		{
			ADD2VAL(System::Convert::ToInt16(textBox9->Text));
		}if (textBox10->Text != "")
		{
			ADD2VAL(System::Convert::ToInt16(textBox10->Text));
		}
		int x=minimumCostSimplePath(comboBox1->SelectedIndex, comboBox2->SelectedIndex);
		String^ y = gcnew String(printknapSack().c_str());
		String^ z = gcnew String(printcity().c_str());
		Display^ output = gcnew Display(a,b,c,x,y,z);
		this->Hide();
		output->ShowDialog();
		this->Close();
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
