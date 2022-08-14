#pragma once
/*
File: MyForm.h

Name: Levi Finney 

Date: 8/13/22

Description: Basic GUI calculator that allows the user to add, subtract, multiply, and divide numbers. 
Application is created using Visual Studio based on a .Net Framework. Application is totally functional and includes all basic 
features of a calculator. Calculator has the ability to change the sign of a number, clear the text box, backspace a number, and add in a decimal. 

PS, My code begins at #pragma endregion due to project type used









*/
namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ backspace;
	protected:
	private: System::Windows::Forms::TextBox^ txtDisplay;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Button^ clearE;
	private: System::Windows::Forms::Button^ sign;
	private: System::Windows::Forms::Button^ add;




	private: System::Windows::Forms::Button^ num9;

	private: System::Windows::Forms::Button^ num8;

	private: System::Windows::Forms::Button^ num7;
	private: System::Windows::Forms::Button^ subtract;
	private: System::Windows::Forms::Button^ num6;
	private: System::Windows::Forms::Button^ num5;
	private: System::Windows::Forms::Button^ num4;





	private: System::Windows::Forms::Button^ multiply;
	private: System::Windows::Forms::Button^ num3;
	private: System::Windows::Forms::Button^ num2;
	private: System::Windows::Forms::Button^ num1;





	private: System::Windows::Forms::Button^ divide;
	private: System::Windows::Forms::Button^ equal;
	private: System::Windows::Forms::Button^ decimal;
	private: System::Windows::Forms::Button^ num0;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->clearE = (gcnew System::Windows::Forms::Button());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->add = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->subtract = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->equal = (gcnew System::Windows::Forms::Button());
			this->decimal = (gcnew System::Windows::Forms::Button());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// backspace
			// 
			this->backspace->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->Location = System::Drawing::Point(12, 73);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(70, 70);
			this->backspace->TabIndex = 0;
			this->backspace->Text = L"⌫";
			this->backspace->UseVisualStyleBackColor = true;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::backspace_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisplay->Location = System::Drawing::Point(12, 12);
			this->txtDisplay->Multiline = true;
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(313, 37);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->Text = L"0";
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// clear
			// 
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->Location = System::Drawing::Point(93, 73);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(70, 70);
			this->clear->TabIndex = 2;
			this->clear->Text = L"C";
			this->clear->UseVisualStyleBackColor = true;
			this->clear->Click += gcnew System::EventHandler(this, &MyForm::clear_Click);
			// 
			// clearE
			// 
			this->clearE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearE->Location = System::Drawing::Point(174, 73);
			this->clearE->Name = L"clearE";
			this->clearE->Size = System::Drawing::Size(70, 70);
			this->clearE->TabIndex = 3;
			this->clearE->Text = L"CE";
			this->clearE->UseVisualStyleBackColor = true;
			this->clearE->Click += gcnew System::EventHandler(this, &MyForm::clearE_Click);
			// 
			// sign
			// 
			this->sign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign->Location = System::Drawing::Point(255, 73);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(70, 70);
			this->sign->TabIndex = 4;
			this->sign->Text = L"± ";
			this->sign->UseVisualStyleBackColor = true;
			this->sign->Click += gcnew System::EventHandler(this, &MyForm::sign_Click);
			// 
			// add
			// 
			this->add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add->Location = System::Drawing::Point(255, 149);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(70, 70);
			this->add->TabIndex = 8;
			this->add->Text = L"+";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// num9
			// 
			this->num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num9->Location = System::Drawing::Point(174, 149);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(70, 70);
			this->num9->TabIndex = 7;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = true;
			this->num9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// num8
			// 
			this->num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num8->Location = System::Drawing::Point(93, 149);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(70, 70);
			this->num8->TabIndex = 6;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = true;
			this->num8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// num7
			// 
			this->num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num7->Location = System::Drawing::Point(12, 149);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(70, 70);
			this->num7->TabIndex = 5;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = true;
			this->num7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// subtract
			// 
			this->subtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subtract->Location = System::Drawing::Point(255, 225);
			this->subtract->Name = L"subtract";
			this->subtract->Size = System::Drawing::Size(70, 70);
			this->subtract->TabIndex = 12;
			this->subtract->Text = L"-";
			this->subtract->UseVisualStyleBackColor = true;
			this->subtract->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// num6
			// 
			this->num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num6->Location = System::Drawing::Point(174, 225);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(70, 70);
			this->num6->TabIndex = 11;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = true;
			this->num6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// num5
			// 
			this->num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num5->Location = System::Drawing::Point(93, 225);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(70, 70);
			this->num5->TabIndex = 10;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = true;
			this->num5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// num4
			// 
			this->num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num4->Location = System::Drawing::Point(12, 225);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(70, 70);
			this->num4->TabIndex = 9;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = true;
			this->num4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// multiply
			// 
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->multiply->Location = System::Drawing::Point(255, 300);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(70, 70);
			this->multiply->TabIndex = 16;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// num3
			// 
			this->num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num3->Location = System::Drawing::Point(174, 301);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(70, 70);
			this->num3->TabIndex = 15;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = true;
			this->num3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// num2
			// 
			this->num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num2->Location = System::Drawing::Point(93, 300);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(70, 70);
			this->num2->TabIndex = 14;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = true;
			this->num2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// num1
			// 
			this->num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num1->Location = System::Drawing::Point(12, 301);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(70, 70);
			this->num1->TabIndex = 13;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = true;
			this->num1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// divide
			// 
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->divide->Location = System::Drawing::Point(255, 376);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(70, 70);
			this->divide->TabIndex = 20;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MyForm::Operators);
			// 
			// equal
			// 
			this->equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->equal->Location = System::Drawing::Point(174, 376);
			this->equal->Name = L"equal";
			this->equal->Size = System::Drawing::Size(70, 70);
			this->equal->TabIndex = 19;
			this->equal->Text = L"=";
			this->equal->UseVisualStyleBackColor = true;
			this->equal->Click += gcnew System::EventHandler(this, &MyForm::equal_Click);
			// 
			// decimal
			// 
			this->decimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->decimal->Location = System::Drawing::Point(93, 376);
			this->decimal->Name = L"decimal";
			this->decimal->Size = System::Drawing::Size(70, 70);
			this->decimal->TabIndex = 18;
			this->decimal->Text = L".";
			this->decimal->UseVisualStyleBackColor = true;
			this->decimal->Click += gcnew System::EventHandler(this, &MyForm::decimal_Click);
			// 
			// num0
			// 
			this->num0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->num0->Location = System::Drawing::Point(12, 376);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(70, 70);
			this->num0->TabIndex = 17;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = true;
			this->num0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 465);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->equal);
			this->Controls->Add(this->decimal);
			this->Controls->Add(this->num0);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->num3);
			this->Controls->Add(this->num2);
			this->Controls->Add(this->num1);
			this->Controls->Add(this->subtract);
			this->Controls->Add(this->num6);
			this->Controls->Add(this->num5);
			this->Controls->Add(this->num4);
			this->Controls->Add(this->add);
			this->Controls->Add(this->num9);
			this->Controls->Add(this->num8);
			this->Controls->Add(this->num7);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->clearE);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->backspace);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Click += gcnew System::EventHandler(this, &MyForm::EnterNumbers);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		//Start of my code 
#pragma endregion 

		
		
		
		//Variable Declaration
		double firstDigit, secondDigit, result;
		String^ operators;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   //Allows user to select any number on the keypad 
	private: System::Void EnterNumbers(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^> (sender);

		if (txtDisplay->Text == "0") { //argument in place since display will always initialize with the number 0

			txtDisplay->Text = Numbers->Text;
		}
		else {
			txtDisplay->Text = txtDisplay->Text + Numbers->Text; //add whatever number the user clicks behind the number on txt display 
		}
	}

		   //+, -, /, * operators 
	private: System::Void Operators(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers_Operators = safe_cast<Button^> (sender);

		firstDigit = Double::Parse(txtDisplay->Text); //Assign wahtever is in disaply to first digit variable 

		txtDisplay->Text = "";
		operators = Numbers_Operators->Text;

	}
		   //Decimal Operator 
	private: System::Void decimal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!txtDisplay->Text->Contains(".")) {
			txtDisplay->Text = txtDisplay->Text + ".";
		}
	}

		   //Allows for equals button to either +, -, *, or /
	private: System::Void equal_Click(System::Object^ sender, System::EventArgs^ e) {

		secondDigit = Double::Parse(txtDisplay->Text);

		if (operators == "+") //Addition 
		{
			result = firstDigit + secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "-") // Subtraction
		{
			result = firstDigit - secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);
		}
		else if (operators == "*") // Multiplication 
		{
			result = firstDigit * secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);

		}
		else if (operators == "/") //Division 
		{
			result = firstDigit / secondDigit;
			txtDisplay->Text = System::Convert::ToString(result);

		}
	}
		// Clear Function
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0"; 
}

	   //Clear Entry Funtion
private: System::Void clearE_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDisplay->Text = "0";
}

	   //Sign Change 
	private: System::Void sign_Click(System::Object^ sender, System::EventArgs^ e) {
		//Number is negative remove negative to turn positive

		if (txtDisplay->Text->Contains("-")) // Contains used for identifying what's inside of calculator text box 
		{
			txtDisplay->Text = txtDisplay->Text->Remove(0, 1);
		}
		//The number is positive so add a negative sign in front of it 
		else
		{
			txtDisplay->Text = "-" + txtDisplay->Text;
		}
	

}

		//Backspace Function 
private: System::Void backspace_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (txtDisplay->Text->Length > 0) //Reomve one letter starting from the end of number as long as a number exist 
	{
		txtDisplay->Text = txtDisplay->Text->Remove(txtDisplay->Text->Length - 1, 1);
	}
	else //text box returns to 0 when backspace is entered and no number is present 
	{
		txtDisplay->Text = "0"; 
	}
}
};
}
