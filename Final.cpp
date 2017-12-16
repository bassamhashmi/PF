#include <iostream>
using namespace std;
main () {
	int math, eng, phy, chem, urdu, pkst, isl, bio, total;
	
	//Getting input
	cout << "Enter Your Obtained Marks..." << endl;
	cout << "Mathematics: "; 
	cin >> math;
	cout << "English: "; 
	cin >> eng;
	cout << "Physics: "; 
	cin >> phy;
	cout << "Chemistry: "; 
	cin >> chem;
	cout << "Urdu: "; 
	cin >> urdu;
	cout << "Pak Studies: "; 
	cin >> pkst;
	cout << "Islamiat: "; 
	cin >> isl;
	cout << "Biology: "; 
	cin >> bio;
	//Printing some blank lines
	cout << "\n";
	cout << "\n";
	cout << "\n";
	
	
	
	cout << "\t Subject" << " \t|\t " << "Obtained Marks" << " \t|\t " << "Marks" << " \t\t|\t " << "Grade\n ";
    cout<<"\n";
    
	//Mathematics
	if (math <= 100 && math >= 95){
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (math <= 94 && math >= 90) {
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (math <= 89 && math >= 85) {
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (math <= 84 && math >= 80) {
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (math <= 79 && math >= 75) {
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (math <= 74 && math >= 70) {
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (math <= 69 && math >= 65) {
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (math <= 64 && math >= 60) {
	cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (math <= 59 && math >= 0) {
    cout << "\tMathematics" << " \t|\t\t" << math << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
    
    //English
	if (eng <= 100 && eng >= 95) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (eng <= 94 && eng >= 90) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (eng <= 89 && eng >= 85) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (eng <= 84 && eng >= 80) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (eng <= 79 && eng >= 75) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (eng <= 74 && eng >= 70) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (eng <= 69 && eng >= 65) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (eng <= 64 && eng >= 60) {
	cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (eng <= 59 && eng >= 0) {
    cout << "\tEnglish" << " \t|\t\t" << eng << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
	
    //Physics
	if (phy <= 100 && phy >= 95) {
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (phy <= 94 && phy >= 90) { 
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (phy <= 89 && phy >= 85) {
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (phy <= 84 && phy >= 80) {
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (phy <= 79 && phy >= 75) {
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (phy <= 74 && phy >= 70) {
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (phy <= 69 && phy >= 65) {
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (phy <= 64 && phy >= 60) {
	cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (phy <= 59 && phy >= 0) {
    cout << "\tPhysics" << " \t|\t\t" << phy << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
    
	//Chemistry
	if (chem <= 100 && chem >= 95) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	}else if (chem <= 94 && chem >= 90) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (chem <= 89 && chem >= 85) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (chem <= 84 && chem >= 80) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (chem <= 79 && chem >= 75) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (chem <= 74 && chem >= 70) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (chem <= 69 && chem >= 65) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (chem <= 64 && chem >= 60) {
	cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (chem <= 59 && chem >= 0) {
    cout << "\tChemistry" << " \t|\t\t" << chem << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
    
	//Urdu
	if (urdu <= 100 && urdu >= 95) {
	cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (urdu <= 94 && urdu >= 90) {
	cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (urdu <= 89 && urdu >= 85) {
	cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (urdu <= 84 && urdu >= 80) {
	cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (urdu <= 79 && urdu >= 75) {
	cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (urdu <= 74 && urdu >= 70) {
	cout << "\tURD\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (urdu <= 69 && urdu >= 65) {
	cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (urdu <= 64 && urdu >= 60) {
	cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (urdu <= 59 && urdu >= 0) {
    cout << "\tUrdu\t" << " \t|\t\t" << urdu << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
    
	//Pak Studies
	if (pkst <= 100 && pkst >= 95) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (pkst <= 94 && pkst >= 90) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (pkst <= 89 && pkst >= 85) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (pkst <= 84 && pkst >= 80) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (pkst <= 79 && pkst >= 75) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (pkst <= 74 && pkst >= 70) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (pkst <= 69 && pkst >= 65) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (pkst <= 64 && pkst >= 60) {
	cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (pkst <= 59 && pkst >= 0) {
    cout << "\tPak Studies" << " \t|\t\t" << pkst << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
    
	//Islamiat
	if (isl <= 100 && isl >= 95) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (isl <= 94 && isl >= 90) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (isl <= 89 && isl >= 85) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (isl <= 84 && isl >= 80) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (isl <= 79 && isl >= 75) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (isl <= 74 && isl >= 70) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (isl <= 69 && isl >= 65) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (isl <= 64 && isl >= 60) {
	cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (isl <= 59 && isl >= 0) {
    cout << "\tIslamiat" << " \t|\t\t" << isl << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
    
	//Biology
	if (bio <= 100 && bio >= 95) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (bio <= 94 && bio >= 90) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"A,A- " << endl;
	} else if (bio <= 89 && bio >= 85) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (bio <= 84 && bio >= 80) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"B,B- " << endl;
	} else if (bio <= 79 && bio >= 75) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (bio <= 74 && bio >= 70) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"C,C- " << endl;
	} else if (bio <= 69 && bio >= 65) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (bio <= 64 && bio >= 60) {
	cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"D,D- " << endl;
	} else if (bio <= 59 && bio >= 0) {
    cout << "\tBiology" << " \t|\t\t" << bio << " \t\t|\t " << 100 << " \t\t|\t " <<"FAIL " << endl;
	}
	cout << " \n";
    
    //Total Marks
	total = math + eng + phy + chem + urdu + pkst + isl + bio;
    if (total <= 800 && total >= 760) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"A,A+ " << endl;
	} else if (total <= 759 && total >= 720) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"A,A- " << endl;
	} else if (total <= 719 && total >= 680) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"B,B+ " << endl;
	} else if (total <= 679 && total >= 640) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"B,B- " << endl;
	} else if (total <= 639 && total >= 600) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"C,C+ " << endl;
	} else if (total <= 599 && total >= 560) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"C,C- " << endl;
	} else if (total <= 559 && total >= 520) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"D,D+ " << endl;
	} else if (total <= 519 && total >= 480) {
	cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"D,D- " << endl;
	} else if (total <= 479 && total >= 0) {
    cout << "\tTotal Marks" << " \t|\t\t" << total << " \t\t|\t " << 800 << " \t\t|\t " <<"FAIL " << endl;
	}
	cout << " \n";
    


	//Degree & Classification
    if (total <= 800 && total >= 760) {
    	cout << "\tDegree\t\t : " << " 1:1" << endl;   
    	cout << "\tClassification   : " << " First Class First Division" << endl;
	} else if (total < 760 && total >= 680) {
    	cout << "\tDegree\t\t : " << " 1:2" << endl;   
    	cout << "\tClassification   : " << " First Class Second Division" << endl;
	} else if (total < 680 && total >= 600) {
		cout << "\tDegree\t\t : " << " 2:1" << endl;   
    	cout << "\tClassification   : " << " Second Class First Division" << endl;
	} else if (total < 600 && total >= 520) {
		cout << "\tDegree\t\t : " << " 2:2" << endl;   
    	cout << "\tClassification   : " << " Second Class Second Division" << endl;
	} else if (total < 520 && total >= 480) {
		cout << "\tDegree\t\t : " << " 3:1" << endl;   
    	cout << "\tClassification   : " << " Third Class First Division" << endl;
	}
   cout<<"\n";	     
    
   
     
   cout<<"                                             THANK YOU";
    
}
	
    
