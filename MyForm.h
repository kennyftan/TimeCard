#pragma once
#include <string>
#include <cstdlib>
#include <ctime>

namespace $safeprojectname$ {

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
			// Initialize default variables
			wage = 0;
			shift_minutes = 0;
			lunch_minutes = 0;
			time_diff = 0;
		}
	private:
		// Text box pointers
		String^ day_start;
		String^ day_end;
		String^ lunch_start;
		String^ lunch_end;

		double wage;
		double shift_minutes;
		double lunch_minutes;
		double time_diff;
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Name_txt;
	private: System::Windows::Forms::TextBox^ name_box;
	private: System::Windows::Forms::TextBox^ wage_box;





	private: System::Windows::Forms::Label^ wage_txt;
	private: System::Windows::Forms::TextBox^ day1_time_in;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ day1_lunch_out;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ day1_time_out;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ day1_lunch_in;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ day2_time_out;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ day2_lunch_in;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ day2_lunch_out;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ day2_time_in;


	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ hours_output;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ salary_output;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ name_output;



	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ SubmitButton;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Name_txt = (gcnew System::Windows::Forms::Label());
			this->name_box = (gcnew System::Windows::Forms::TextBox());
			this->wage_box = (gcnew System::Windows::Forms::TextBox());
			this->wage_txt = (gcnew System::Windows::Forms::Label());
			this->day1_time_in = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->day1_lunch_out = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->day1_time_out = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->day1_lunch_in = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->day2_time_out = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->day2_lunch_in = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->day2_lunch_out = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->day2_time_in = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->hours_output = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->salary_output = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->name_output = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(244, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Time Card";
			// 
			// Name_txt
			// 
			this->Name_txt->AutoSize = true;
			this->Name_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name_txt->Location = System::Drawing::Point(48, 71);
			this->Name_txt->Name = L"Name_txt";
			this->Name_txt->Size = System::Drawing::Size(70, 25);
			this->Name_txt->TabIndex = 1;
			this->Name_txt->Text = L"Name:";
			this->Name_txt->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// name_box
			// 
			this->name_box->Location = System::Drawing::Point(124, 74);
			this->name_box->Name = L"name_box";
			this->name_box->Size = System::Drawing::Size(204, 22);
			this->name_box->TabIndex = 2;
			this->name_box->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// wage_box
			// 
			this->wage_box->Location = System::Drawing::Point(464, 74);
			this->wage_box->Name = L"wage_box";
			this->wage_box->Size = System::Drawing::Size(79, 22);
			this->wage_box->TabIndex = 4;
			this->wage_box->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// wage_txt
			// 
			this->wage_txt->AutoSize = true;
			this->wage_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wage_txt->Location = System::Drawing::Point(334, 71);
			this->wage_txt->Name = L"wage_txt";
			this->wage_txt->Size = System::Drawing::Size(124, 25);
			this->wage_txt->TabIndex = 3;
			this->wage_txt->Text = L"Wage ($/hr):";
			this->wage_txt->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// day1_time_in
			// 
			this->day1_time_in->Location = System::Drawing::Point(124, 165);
			this->day1_time_in->Name = L"day1_time_in";
			this->day1_time_in->Size = System::Drawing::Size(93, 22);
			this->day1_time_in->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(48, 162);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 25);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Day 1:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(121, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Time in:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(232, 147);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Lunch Out:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// day1_lunch_out
			// 
			this->day1_lunch_out->Location = System::Drawing::Point(235, 166);
			this->day1_lunch_out->Name = L"day1_lunch_out";
			this->day1_lunch_out->Size = System::Drawing::Size(93, 22);
			this->day1_lunch_out->TabIndex = 8;
			this->day1_lunch_out->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged_1);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(447, 148);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 16);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Time Out:";
			// 
			// day1_time_out
			// 
			this->day1_time_out->Location = System::Drawing::Point(450, 167);
			this->day1_time_out->Name = L"day1_time_out";
			this->day1_time_out->Size = System::Drawing::Size(93, 22);
			this->day1_time_out->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(336, 147);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Lunch In:";
			// 
			// day1_lunch_in
			// 
			this->day1_lunch_in->Location = System::Drawing::Point(339, 166);
			this->day1_lunch_in->Name = L"day1_lunch_in";
			this->day1_lunch_in->Size = System::Drawing::Size(93, 22);
			this->day1_lunch_in->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(448, 228);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 16);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Time Out:";
			// 
			// day2_time_out
			// 
			this->day2_time_out->Location = System::Drawing::Point(451, 247);
			this->day2_time_out->Name = L"day2_time_out";
			this->day2_time_out->Size = System::Drawing::Size(93, 22);
			this->day2_time_out->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(337, 227);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Lunch In:";
			// 
			// day2_lunch_in
			// 
			this->day2_lunch_in->Location = System::Drawing::Point(340, 246);
			this->day2_lunch_in->Name = L"day2_lunch_in";
			this->day2_lunch_in->Size = System::Drawing::Size(93, 22);
			this->day2_lunch_in->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(233, 227);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 16);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Lunch Out:";
			// 
			// day2_lunch_out
			// 
			this->day2_lunch_out->Location = System::Drawing::Point(236, 246);
			this->day2_lunch_out->Name = L"day2_lunch_out";
			this->day2_lunch_out->Size = System::Drawing::Size(93, 22);
			this->day2_lunch_out->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(122, 226);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 16);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Time in:";
			// 
			// day2_time_in
			// 
			this->day2_time_in->Location = System::Drawing::Point(125, 245);
			this->day2_time_in->Name = L"day2_time_in";
			this->day2_time_in->Size = System::Drawing::Size(93, 22);
			this->day2_time_in->TabIndex = 15;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(49, 242);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 25);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Day 2:";
			// 
			// hours_output
			// 
			this->hours_output->Enabled = false;
			this->hours_output->Location = System::Drawing::Point(293, 372);
			this->hours_output->Name = L"hours_output";
			this->hours_output->Size = System::Drawing::Size(114, 22);
			this->hours_output->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(288, 344);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(119, 25);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Total Hours:";
			// 
			// salary_output
			// 
			this->salary_output->Enabled = false;
			this->salary_output->Location = System::Drawing::Point(418, 372);
			this->salary_output->Name = L"salary_output";
			this->salary_output->Size = System::Drawing::Size(114, 22);
			this->salary_output->TabIndex = 26;
			this->salary_output->TextChanged += gcnew System::EventHandler(this, &MyForm::salary_output_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(413, 344);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(123, 25);
			this->label13->TabIndex = 25;
			this->label13->Text = L"Total Salary:";
			// 
			// name_output
			// 
			this->name_output->Enabled = false;
			this->name_output->Location = System::Drawing::Point(168, 372);
			this->name_output->Name = L"name_output";
			this->name_output->Size = System::Drawing::Size(114, 22);
			this->name_output->TabIndex = 28;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(163, 344);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(105, 25);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Employee:";
			// 
			// SubmitButton
			// 
			this->SubmitButton->Location = System::Drawing::Point(457, 284);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(87, 32);
			this->SubmitButton->TabIndex = 29;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &MyForm::SubmitButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 430);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->name_output);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->salary_output);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->hours_output);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->day2_time_out);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->day2_lunch_in);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->day2_lunch_out);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->day2_time_in);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->day1_time_out);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->day1_lunch_in);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->day1_lunch_out);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->day1_time_in);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->wage_box);
			this->Controls->Add(this->wage_txt);
			this->Controls->Add(this->name_box);
			this->Controls->Add(this->Name_txt);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"TimeCard - Kenny Tan";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void salary_output_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void SubmitButton_Click(System::Object^ sender, System::EventArgs^ e) {

	try
	{
		// Point to text
		this->name_output->Text = this->name_box->Text;
		wage = Convert::ToDouble(this->wage_box->Text);
		day_start = this->day1_time_in->Text;
		day_end = this->day1_time_out->Text;
		lunch_start = this->day1_lunch_out->Text;
		lunch_end = this->day1_lunch_in->Text;

		double shift_minutes1 = total_minutes(day_start, day_end);
		double lunch_minutes1 = total_minutes(lunch_start, lunch_end);

		day_start = this->day2_time_in->Text;
		day_end = this->day2_time_out->Text;
		lunch_start = this->day2_lunch_out->Text;
		lunch_end = this->day2_lunch_in->Text;

		// Run minute calculation functions
		double shift_minutes2 = total_minutes(day_start, day_end);
		double lunch_minutes2 = total_minutes(lunch_start, lunch_end);

		time_diff = (shift_minutes1 - lunch_minutes1 + shift_minutes2 - lunch_minutes2) / 60.0;
		time_diff = floor(time_diff * 100.00) / 100.0;

		double salary = floor(time_diff * wage * 100.00) / 100.00;
		this->hours_output->Text = Convert::ToString(time_diff);
		this->salary_output->Text = "$" + Convert::ToString(salary);
	}
	catch (FormatException^ myException) // Exceptions
	{
		MessageBox::Show("A field is missing or in the wrong format.");
	}
	catch (DivideByZeroException^ myException)
	{
		MessageBox::Show("You cannot divide by 0.");
	}
	catch (...)
	{
		MessageBox::Show("There has been an error.");
	}

}
// Function to calculate total minutes
public:	double total_minutes(String^ start_time_str, String^ end_time_str)
	{
		DateTime start_time = Convert::ToDateTime(start_time_str);
		DateTime end_time = Convert::ToDateTime(end_time_str);

		TimeSpan time_diff = end_time - start_time;
		
		double subtotal = (time_diff.Hours*60) + time_diff.Minutes;
		return subtotal;
	}

};
}
