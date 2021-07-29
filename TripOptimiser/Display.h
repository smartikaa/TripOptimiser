#pragma once

namespace TripOptimiser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Display
	/// </summary>
	public ref class Display : public System::Windows::Forms::Form
	{
	public:
		Display(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		Display(String ^ data1, String^  data2 , String^ data3,int x,String ^y, String^ z)
		{
			InitializeComponent();
			label1->Text = data1;
			label2->Text = data2;
			label3->Text = data3;
			label9->Text = x.ToString();
			label10->Text = y;
			label11->Text = z;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(563, 136);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(563, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 37);
			this->label2->TabIndex = 1;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(563, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(52, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 37);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Name:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(52, 195);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 37);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Age:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(52, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 37);
			this->label6->TabIndex = 5;
			this->label6->Text = L"no. of people:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::RosyBrown;
			this->label7->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkRed;
			this->label7->Location = System::Drawing::Point(51, 30);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(336, 46);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Optimal solution";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(52, 316);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(407, 37);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Min cost of your journey :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label9->Location = System::Drawing::Point(563, 316);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(110, 37);
			this->label9->TabIndex = 8;
			this->label9->Text = L"label9";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label10->Location = System::Drawing::Point(52, 396);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(632, 136);
			this->label10->TabIndex = 9;
			this->label10->Text = L"label10";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Arial", 16, System::Drawing::FontStyle::Bold));
			this->label11->Location = System::Drawing::Point(52, 564);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(632, 136);
			this->label11->TabIndex = 10;
			this->label11->Text = L"label11";
			// 
			// Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(911, 863);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Display";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Display";
			this->Load += gcnew System::EventHandler(this, &Display::Display_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Display_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
