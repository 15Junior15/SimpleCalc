#pragma once

namespace SimpleCalculator1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� SimpleCalculatorform
	/// </summary>
	public ref class SimpleCalculatorform : public System::Windows::Forms::Form
	{
	public:
		SimpleCalculatorform(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~SimpleCalculatorform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(32, 134);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 82);
			this->button1->TabIndex = 0;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SimpleCalculatorform::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(111, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 87);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(172, 87);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(154, 134);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 82);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &SimpleCalculatorform::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(273, 134);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 82);
			this->button3->TabIndex = 5;
			this->button3->Text = L"x";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &SimpleCalculatorform::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(389, 134);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 82);
			this->button4->TabIndex = 6;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &SimpleCalculatorform::button4_Click);
			// 
			// SimpleCalculatorform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(518, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"SimpleCalculatorform";
			this->Text = L"SimpleCalculatorform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//1) Schityuvaem znachenie s poley vvoda

		double firstDigit = System::Convert::ToDouble(this->textBox1->Text);
		double SecondDigit = System::Convert::ToDouble(this->textBox2->Text);
		double finalsumm = firstDigit + SecondDigit;


		//2) konvertiruem v chislo iz stroki

		//3) vyuvodim summu

		System::String^ resultString = System::Convert::ToString(finalsumm);
		this->label1->Text = resultString;




	};
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double firstDigit = System::Convert::ToDouble(this->textBox1->Text);
		double SecondDigit = System::Convert::ToDouble(this->textBox2->Text);
		double finalsumm = firstDigit - SecondDigit;


		//2) konvertiruem v chislo iz stroki

		//3) vyuvodim summu

		System::String^ resultString = System::Convert::ToString(finalsumm);
		this->label1->Text = resultString;


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		double firstDigit = System::Convert::ToDouble(this->textBox1->Text);
		double SecondDigit = System::Convert::ToDouble(this->textBox2->Text);
		double finalsumm = firstDigit * SecondDigit;


		//2) konvertiruem v chislo iz stroki

		//3) vyuvodim summu

		System::String^ resultString = System::Convert::ToString(finalsumm);
		this->label1->Text = resultString;


	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		double firstDigit = System::Convert::ToDouble(this->textBox1->Text);
		double SecondDigit = System::Convert::ToDouble(this->textBox2->Text);
		double finalsumm = firstDigit / SecondDigit;
		if (SecondDigit == 0) {
			return;
		}


		//2) konvertiruem v chislo iz stroki

		//3) vyuvodim summu

		System::String^ resultString = System::Convert::ToString(finalsumm);
		this->label1->Text = resultString;


	}
	}
	
}