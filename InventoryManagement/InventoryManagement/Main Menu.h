#pragma once

namespace InventoryManagementSystem {

	using namespace System;
       using namespace System::ComponentModel;
       using namespace System::Collections;
       using namespace System::Windows::Forms;
       using namespace System::Data;
       using namespace System::Drawing;

       /// <summary>
       /// Summary for Form1
       /// </summary>
       public ref class Form1 : public System::Windows::Forms::Form
       {
       public:
              Form1(void)
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
              ~Form1()
              {
                     if (components)
                     {
                           delete components;
                     }
              }

	   protected: 

	   protected: 

       private: System::Windows::Forms::Button^  button1;
       private: System::Windows::Forms::Button^  button2;





       private: System::Windows::Forms::Label^  label1;

       private: System::Windows::Forms::MenuStrip^  menuStrip1;
	   private: System::Windows::Forms::Label^  label2;
	   private: System::Windows::Forms::Label^  label3;
	   private: System::Windows::Forms::Button^  button3;
	   private: System::Windows::Forms::Button^  button4;
	   private: System::Windows::Forms::Button^  button5;
	   private: System::Windows::Forms::Button^  button6;
	   private: System::Windows::Forms::Label^  label4;

	   private: System::Windows::Forms::Label^  label6;
	   private: System::Windows::Forms::Button^  button7;
	   private: System::Windows::Forms::Button^  button8;
	   private: System::Windows::Forms::Label^  label5;
	   private: System::Windows::Forms::Button^  button9;
	   private: System::Windows::Forms::Button^  button10;









       protected:

       protected:

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
				  this->button1 = (gcnew System::Windows::Forms::Button());
				  this->button2 = (gcnew System::Windows::Forms::Button());
				  this->label1 = (gcnew System::Windows::Forms::Label());
				  this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
				  this->label2 = (gcnew System::Windows::Forms::Label());
				  this->label3 = (gcnew System::Windows::Forms::Label());
				  this->button3 = (gcnew System::Windows::Forms::Button());
				  this->button4 = (gcnew System::Windows::Forms::Button());
				  this->button5 = (gcnew System::Windows::Forms::Button());
				  this->button6 = (gcnew System::Windows::Forms::Button());
				  this->label4 = (gcnew System::Windows::Forms::Label());
				  this->label6 = (gcnew System::Windows::Forms::Label());
				  this->button7 = (gcnew System::Windows::Forms::Button());
				  this->button8 = (gcnew System::Windows::Forms::Button());
				  this->label5 = (gcnew System::Windows::Forms::Label());
				  this->button9 = (gcnew System::Windows::Forms::Button());
				  this->button10 = (gcnew System::Windows::Forms::Button());
				  this->SuspendLayout();
				  // 
				  // button1
				  // 
				  this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button1->Location = System::Drawing::Point(154, 55);
				  this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button1->Name = L"button1";
				  this->button1->Size = System::Drawing::Size(70, 26);
				  this->button1->TabIndex = 1;
				  this->button1->Text = L"Insert";
				  this->button1->UseVisualStyleBackColor = true;
				  this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
				  // 
				  // button2
				  // 
				  this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button2->Location = System::Drawing::Point(228, 55);
				  this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button2->Name = L"button2";
				  this->button2->Size = System::Drawing::Size(90, 26);
				  this->button2->TabIndex = 2;
				  this->button2->Text = L"Edit";
				  this->button2->UseVisualStyleBackColor = true;
				  this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
				  // 
				  // label1
				  // 
				  this->label1->AutoSize = true;
				  this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
				  this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
				  this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
				  this->label1->Location = System::Drawing::Point(8, 9);
				  this->label1->Name = L"label1";
				  this->label1->Size = System::Drawing::Size(342, 31);
				  this->label1->TabIndex = 8;
				  this->label1->Text = L"Inventory Management System";
				  this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
				  // 
				  // menuStrip1
				  // 
				  this->menuStrip1->GripStyle = System::Windows::Forms::ToolStripGripStyle::Visible;
				  this->menuStrip1->LayoutStyle = System::Windows::Forms::ToolStripLayoutStyle::Flow;
				  this->menuStrip1->Location = System::Drawing::Point(0, 0);
				  this->menuStrip1->Name = L"menuStrip1";
				  this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
				  this->menuStrip1->Size = System::Drawing::Size(408, 4);
				  this->menuStrip1->TabIndex = 10;
				  this->menuStrip1->Text = L"menuStrip1";
				  this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
				  // 
				  // label2
				  // 
				  this->label2->AutoSize = true;
				  this->label2->BackColor = System::Drawing::SystemColors::ButtonShadow;
				  this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
				  this->label2->Location = System::Drawing::Point(12, 108);
				  this->label2->Name = L"label2";
				  this->label2->Size = System::Drawing::Size(107, 29);
				  this->label2->TabIndex = 13;
				  this->label2->Text = L"Product:";
				  this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
				  // 
				  // label3
				  // 
				  this->label3->AutoSize = true;
				  this->label3->BackColor = System::Drawing::SystemColors::ButtonShadow;
				  this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
				  this->label3->Location = System::Drawing::Point(12, 52);
				  this->label3->Name = L"label3";
				  this->label3->Size = System::Drawing::Size(122, 29);
				  this->label3->TabIndex = 14;
				  this->label3->Text = L"Category:";
				  // 
				  // button3
				  // 
				  this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button3->Location = System::Drawing::Point(154, 113);
				  this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button3->Name = L"button3";
				  this->button3->Size = System::Drawing::Size(70, 26);
				  this->button3->TabIndex = 15;
				  this->button3->Text = L"Insert";
				  this->button3->UseVisualStyleBackColor = true;
				  // 
				  // button4
				  // 
				  this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button4->Location = System::Drawing::Point(228, 113);
				  this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button4->Name = L"button4";
				  this->button4->Size = System::Drawing::Size(90, 26);
				  this->button4->TabIndex = 16;
				  this->button4->Text = L"Edit";
				  this->button4->UseVisualStyleBackColor = true;
				  // 
				  // button5
				  // 
				  this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button5->Location = System::Drawing::Point(154, 167);
				  this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button5->Name = L"button5";
				  this->button5->Size = System::Drawing::Size(70, 26);
				  this->button5->TabIndex = 18;
				  this->button5->Text = L"Insert";
				  this->button5->UseVisualStyleBackColor = true;
				  // 
				  // button6
				  // 
				  this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button6->Location = System::Drawing::Point(228, 167);
				  this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button6->Name = L"button6";
				  this->button6->Size = System::Drawing::Size(90, 26);
				  this->button6->TabIndex = 19;
				  this->button6->Text = L"Edit";
				  this->button6->UseVisualStyleBackColor = true;
				  // 
				  // label4
				  // 
				  this->label4->AutoSize = true;
				  this->label4->BackColor = System::Drawing::SystemColors::ButtonShadow;
				  this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
				  this->label4->Location = System::Drawing::Point(12, 160);
				  this->label4->Name = L"label4";
				  this->label4->Size = System::Drawing::Size(84, 29);
				  this->label4->TabIndex = 17;
				  this->label4->Text = L"Sales:";
				  // 
				  // label6
				  // 
				  this->label6->AutoSize = true;
				  this->label6->BackColor = System::Drawing::SystemColors::ButtonShadow;
				  this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
				  this->label6->Location = System::Drawing::Point(12, 212);
				  this->label6->Name = L"label6";
				  this->label6->Size = System::Drawing::Size(100, 29);
				  this->label6->TabIndex = 21;
				  this->label6->Text = L"Invoice:";
				  // 
				  // button7
				  // 
				  this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button7->Location = System::Drawing::Point(154, 219);
				  this->button7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button7->Name = L"button7";
				  this->button7->Size = System::Drawing::Size(70, 26);
				  this->button7->TabIndex = 22;
				  this->button7->Text = L"Insert";
				  this->button7->UseVisualStyleBackColor = true;
				  // 
				  // button8
				  // 
				  this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button8->Location = System::Drawing::Point(228, 219);
				  this->button8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button8->Name = L"button8";
				  this->button8->Size = System::Drawing::Size(90, 26);
				  this->button8->TabIndex = 23;
				  this->button8->Text = L"Edit";
				  this->button8->UseVisualStyleBackColor = true;
				  // 
				  // label5
				  // 
				  this->label5->AutoSize = true;
				  this->label5->BackColor = System::Drawing::SystemColors::ButtonShadow;
				  this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.25F));
				  this->label5->Location = System::Drawing::Point(12, 266);
				  this->label5->Name = L"label5";
				  this->label5->Size = System::Drawing::Size(101, 29);
				  this->label5->TabIndex = 24;
				  this->label5->Text = L"Reports";
				  // 
				  // button9
				  // 
				  this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button9->Location = System::Drawing::Point(154, 270);
				  this->button9->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button9->Name = L"button9";
				  this->button9->Size = System::Drawing::Size(105, 26);
				  this->button9->TabIndex = 25;
				  this->button9->Text = L"Sales Report";
				  this->button9->UseVisualStyleBackColor = true;
				  // 
				  // button10
				  // 
				  this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.75F));
				  this->button10->Location = System::Drawing::Point(263, 269);
				  this->button10->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->button10->Name = L"button10";
				  this->button10->Size = System::Drawing::Size(137, 26);
				  this->button10->TabIndex = 26;
				  this->button10->Text = L"Summary Report";
				  this->button10->UseVisualStyleBackColor = true;
				  // 
				  // Form1
				  // 
				  this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				  this->AutoSize = true;
				  this->BackColor = System::Drawing::SystemColors::ButtonShadow;
				  this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				  this->ClientSize = System::Drawing::Size(408, 324);
				  this->Controls->Add(this->button10);
				  this->Controls->Add(this->button9);
				  this->Controls->Add(this->label5);
				  this->Controls->Add(this->button8);
				  this->Controls->Add(this->button7);
				  this->Controls->Add(this->label6);
				  this->Controls->Add(this->button6);
				  this->Controls->Add(this->button5);
				  this->Controls->Add(this->label4);
				  this->Controls->Add(this->button4);
				  this->Controls->Add(this->button3);
				  this->Controls->Add(this->label3);
				  this->Controls->Add(this->label2);
				  this->Controls->Add(this->label1);
				  this->Controls->Add(this->button2);
				  this->Controls->Add(this->button1);
				  this->Controls->Add(this->menuStrip1);
				  this->DoubleBuffered = true;
				  this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					  static_cast<System::Byte>(0)));
				  this->ForeColor = System::Drawing::Color::Black;
				  this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
				  this->Location = System::Drawing::Point(12, 55);
				  this->MainMenuStrip = this->menuStrip1;
				  this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
				  this->Name = L"Form1";
				  this->Text = L"Inventory Management System";
				  this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				  this->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
				  this->ResumeLayout(false);
				  this->PerformLayout();

			  }
#pragma endregion
       private: System::Void txtb_TextChanged(System::Object^  sender, System::EventArgs^  e) {
                        
                      }
       private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

                           

                      }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
                     
               }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
                           

                      }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
                     
               }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
                      

               }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
                
               }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
                     
               }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
                     
               }
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
                      Application::Exit();
               }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
               }
private: System::Void menuToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
               }

private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
               }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}


