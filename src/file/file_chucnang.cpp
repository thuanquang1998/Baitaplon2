#include <file_chucnang.h>
#include <Capnhat_file.h>
#include <biethieu.h>
using namespace std;

bool file_themchucnang(){
	system("cls");
	fstream FILE("themchucnang.txt");
	if(!FILE.is_open()){
		cout<<"Loi mo file"<<endl;
		return false;
	}


		fstream nhap("trong.txt");
		if(!nhap.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

	string bien;
	getline(FILE,bien);
	if(bien.empty()) {
		cout<<"Khong co chuc nang can duoc kich hoat"<<endl;
		system("pause");
		return true;
	}
	stringstream tach(bien);
	int bien1, bien2;
	tach>>bien1>>bien2;

	//biethieu
	
	biethieu(bien1);

		cout<<"	muon them chuc nang: ";
		if(bien2==1) cout<<"doc gia"<<endl;
		if(bien2==2) cout<<"thu thu"<<endl;
		if(bien2==3) cout<<"quan li"<<endl;

	

		
			cout<<"Ban co dong y kich hoat?(y/n)";
			string y;
			cin.ignore();
			getline(cin,y);
			if(y!="y"){
				//ham
				string doi;
				while(getline(FILE,doi)){
					if(doi.empty()) continue;
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("themchucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trong_chucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}

					////////doifilexong
			}

			else{
				fstream lay("chucnang.txt");
					if(!lay.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}

				fstream sua("trong.txt");
					if(!sua.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}
				string day;
				while(getline(lay,day)){
					if(day.empty()) continue;
					stringstream tach2(day);
					int ms,dg,tt,ql;
					tach2>>ms>>dg>>tt>>ql;
					if(ms!=bien1) sua<<day<<endl;
					else{
						if(bien2==1){
							sua<<ms<<"	"<<"1"<<"	"<<tt<<"	"<<ql<<endl;
						}
						if(bien2==2){
							sua<<ms<<"	"<<dg<<"	"<<"2"<<"	"<<ql<<endl;
						}
						if(bien2==3){
							sua<<ms<<"	"<<dg<<"	"<<tt<<"	"<<bien2<<endl;
						}
					}

				}
				
				sua.close();
				lay.close();
				ofstream xoachucnang("chucnang.txt");
					if (!xoachucnang.is_open()) {
						cout << "Loi mo file";
					}
				trongvao_chucnang();
				ofstream xoatrong("trong.txt");
					if (!xoatrong.is_open()) {
						cout << "Loi mo file";
					}

				////
				string doi;
				while(getline(FILE,doi)){
					if(doi.empty()) continue;
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("themchucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trong_chucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}
				/////
				cout<<"Them chuc nang thanh cong"<<endl;
				system("pause");
				
			}

			
			nhap.close();
			//file.close();
			FILE.close();
			return true;

}
bool file_huychucnang(){
	system("cls");
	fstream FILE("huychucnang.txt");
	if(!FILE.is_open()){
		cout<<"Loi mo file"<<endl;
		return false;
	}


		fstream nhap("trong.txt");
		if(!nhap.is_open()){
			cout<<"Loi mo file"<<endl;
			return false;
		}

	string bien;
	getline(FILE,bien);
	if(bien.empty()) {
		cout<<"Khong co chuc nang can duoc huy"<<endl;
		system("pause");
		return true;
	}
	stringstream tach(bien);
	int bien1, bien2;
	tach>>bien1>>bien2;


	
	biethieu(bien1);


		cout<<"	muon huy chuc nang: ";
		if(bien2==1) cout<<"doc gia"<<endl;
		if(bien2==2) cout<<"thu thu"<<endl;
		if(bien2==3) cout<<"quan li"<<endl;

	

		
			cout<<"Ban co dong y kich hoat?(y/n)";
			string y;
			cin.ignore();
			getline(cin,y);
			if(y!="y"){
				//ham
				string doi;
				while(getline(FILE,doi)){
					if(doi.empty()) continue;
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("huychucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trongchucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}

					////////doifilexong
			}

			else{
				fstream lay("chucnang.txt");
					if(!lay.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}

				fstream sua("trong.txt");
					if(!sua.is_open()){
						cout<<"Loi mo file"<<endl;
						return false;
					}
				string day;
				while(getline(lay,day)){
					if(day.empty()) continue;
					stringstream tach2(day);
					int ms,dg,tt,ql;
					tach2>>ms>>dg>>tt>>ql;
					if(ms!=bien1) sua<<day<<endl;
					else{
						if(bien2==1){
							sua<<ms<<"	"<<"0"<<"	"<<tt<<"	"<<ql<<endl;
						}
						if(bien2==2){
							sua<<ms<<"	"<<dg<<"	"<<"0"<<"	"<<ql<<endl;
						}
						if(bien2==3){
							sua<<ms<<"	"<<dg<<"	"<<tt<<"	"<<"0"<<endl;
						}
					}

				}
			
				sua.close();
				lay.close();
				////
				ofstream xoachucnang("chucnang.txt");
					if (!xoachucnang.is_open()) {
						cout << "Loi mo file";
					}
				trongvao_chucnang();
				ofstream xoatrong("trong.txt");
					if (!xoatrong.is_open()) {
						cout << "Loi mo file";
					}

				/////
				string doi;
				while(getline(FILE,doi)){
					if(doi.empty()) continue;
					stringstream tach_3(doi);
					int doi1,doi2;
					tach_3>>doi1>>doi2;
					if(doi1==bien1 & doi2==bien2) continue;
					else nhap<<doi1<<"	"<<doi2<<endl;
				}
				/////////
				ofstream xoa("huychucnang.txt");
					if (!xoa.is_open()) {
						cout << "Loi mo file";
					}
				
				trongchucnang();
				ofstream xoa1("trong.txt");
					if (!xoa1.is_open()) {
						cout << "Loi mo file";
					}
				/////
				
				cout<<"Huy chuc nang thanh cong"<<endl;
				system("pause");
			}

			
			nhap.close();
			//file.close();
			FILE.close();
			return true;

}

bool capnhat_themchucnang(Nguoidung& Ngdung_dangnhap, int chon){
	fstream FILE("themchucnang.txt");
	if(!FILE.is_open()){
		cout<<"loi mo file"<<endl;
		return false;
	}

	FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

	FILE.close();
	cout << "Yeu cau da duoc ghi lai"<<endl;
	system("pause");
	// kiem = true;
	// chỗ này để kiem = true chi? gì cũng return mà?
	return true;
}

bool capnhat_huychucnang(Nguoidung& Ngdung_dangnhap, int chon){
	fstream FILE("huychucnang.txt");
	if(!FILE.is_open()){
		cout<<"loi mo file"<<endl;
		return false;
	}

	FILE<<Ngdung_dangnhap.Maso<<" "<<chon;

	FILE.close();
	cout << "Yeu cau da duoc ghi lai"<<endl;
	system("pause");
	// kiem = true;
	// chỗ này để kiem = true chi? gì cũng return mà?
	return true;
}

