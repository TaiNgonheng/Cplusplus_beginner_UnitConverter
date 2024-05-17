#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
double distance();
    double kilometer();
    double meter();
    double centimeter();
    double millimeter();
    double micrometer();
    double nanometer();
    double mile();
double time();
    double year();
    double month();
    double week();
    double day();
    double hour();
    double minute();
    double second();
double temperature();
    double kelvin();
    double fahrenhiet();
    double celsius();
double currency();
    double dollar();
    double riel();
    double baht();
    double dong();
    double euro();
    double yuan();
    double swiss();
double mass();
    double ton();
    double kg();
    double g();
    double mg();
    double pound();   
int main (){
    system("cls");
    char menu;
    cout<<"/////////////////////////////////////////////////////////////   This is the converter version not finished \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n\n";
    do
    {
        cout<<"\t\t\t\t\n\n                                                                Read List Carefully.\n\n";
        cout<<"\t\t                                                T for Temperature \n\n";
        cout<<"\t\t                                                D for Distance\n\n";
        cout<<"\t\t                                                Y for Time\n\n";
        cout<<"\t\t                                                C for Currency\n\n";
        cout<<"\t\t                                                M for Mass\n\n";
        cout<<" \t\t\t                                        Enter 0 for Stop.\n ";
        cout<<"\n\n\t                                                Please select the option for the converter: ";
        cin >> menu;
        if (menu == 'T'||menu=='t')
        {
            temperature();   
        }
        if (menu=='d'||menu=='D')
        {
            distance();           
        }
        if (menu=='y'||menu=='Y'){
            time();
        }
        if (menu == 'c'||menu=='c')
        {
            currency();
        }       
        if (menu == 'm'||menu=='M')
        {
            mass();
        }       
    } while (menu != '0');
       return 0;
}
double mass(){
    char kdmv;
    cout<<"********************************************** Type of Mass you must convert ******************************************* \n\n";
    cout<<"\t\t\t\t\t\t\tT for Tonne\n";
    cout<<"\t\t\t\t\t\t\tK for Kilogram\n";
    cout<<"\t\t\t\t\t\t\tG for Gram\n";
    cout<<"\t\t\t\t\t\t\tM for Milligram\n";
    cout<<"\t\t\t\t\t\t\tP for Pound\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin>>kdmv;
    if (kdmv=='T' || kdmv=='t')
    {
        ton();
    }
    if (kdmv=='k' || kdmv=='K')
    {
        kg();
    }
    if (kdmv=='G' || kdmv=='g')
    {
        g();
    }
    if (kdmv=='M' || kdmv=='m')
    {
        mg();
    }
    if (kdmv=='P' || kdmv=='p')
    {
        pound();
    }
}
double ton(){
    char ach;
        cout<<"******************************************* Type of Mass you need ********************************************** \n";
    //  cout<<"T for Tonne\n";
    cout<<"\t\t\t\t\t\t\tK for Kilogram\n";
    cout<<"\t\t\t\t\t\t\tG for Gram\n";
    cout<<"\t\t\t\t\t\t\tM for Milligram\n";
    cout<<"\t\t\t\t\t\t\tP for Pound\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>ach;
    if (ach == 'k' ||ach == 'K')
    {
        long double ton;
           long double kg;
              cout<<"\t\t\t\t\t\t\tenter the Number of Tonne: ";
                cin>>ton;
                   kg = ton *1000;
                     cout<<ton<<" ton equal to " <<kg<< " kg\n\n"<<endl;
    }
    if (ach == 'G' ||ach == 'g')
    {
        long double ton;
           long double g;
              cout<<"\t\t\t\t\t\t\tenter the Number of Tonne: ";
                cin>>ton;
                   g = ton *1000000;
                     cout<<ton<<" ton equal to " <<g<< " g\n\n"<<endl;
    }
    if (ach == 'm' ||ach == 'M')
    {
        long double ton;
           long double m;
              cout<<"\t\t\t\t\t\t\tenter the Number of Tonne: ";
                cin>>ton;
                   m = ton *1000000000;
                     cout<<ton<<" ton equal to " <<m<< " mg\n\n"<<endl;
    }
    if (ach == 'p' ||ach == 'P')
    {
        long double ton;
           long double p;
              cout<<"\t\t\t\t\t\t\tenter the Number of Tonne: ";
                cin>>ton;
                   p = ton *2205;
                     cout<<ton<<" ton equal to " <<p<< " pound\n\n"<<endl;
    }
}
double kg(){
    char ach;
        cout<<"******************************************* Type of Mass you need ********************************************** \n";
    cout<<"\t\t\t\t\t\t\tT for Tonne\n";
    // cout<<"K for Kilogram\n";
    cout<<"\t\t\t\t\t\t\tG for Gram\n";
    cout<<"\t\t\t\t\t\t\tM for Milligram\n";
    cout<<"\t\t\t\t\t\t\tP for Pound\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>ach;
    if (ach == 'T' ||ach == 't')
    {
        long double kg;
           long double ton;
              cout<<"\t\t\t\t\t\t\tenter the Number of kg: ";
                cin>>kg;
                   ton = kg /1000;
                     cout<<kg<<" kg equal to " <<ton<< " ton\n\n"<<endl;
    }
    if (ach == 'G' ||ach == 'g')
    {
        long double kg;
           long double g;
              cout<<"\t\t\t\t\t\t\tenter the Number of kg: ";
                cin>>kg;
                   g = kg *1000;
                     cout<<kg<<" kg equal to " <<g<< " g\n\n"<<endl;
    }
    if (ach == 'M' ||ach == 'm')
    {
        long double kg;
           long double m;
              cout<<"\t\t\t\t\t\t\tenter the Number of kg: ";
                cin>>kg;
                   m = kg *1000000;
                     cout<<kg<<" kg equal to " <<m<< " mg\n\n"<<endl;
    }
    if (ach == 'p' ||ach == 'P')
    {
        long double kg;
           long double p;
              cout<<"\t\t\t\t\t\t\tenter the Number of kg: ";
                cin>>kg;
                   p = kg * 2.205;
                     cout<<kg<<" kg equal to " <<p<< " pound\n\n"<<endl;
    }
}
double g(){
    char ach;
        cout<<"******************************************* Type of Mass you need ********************************************** \n";
    cout<<"\t\t\t\t\t\t\tT for Tonne\n";
    cout<<"\t\t\t\t\t\t\tK for Kilogram\n";
    // cout<<"G for Gram\n";
    cout<<"\t\t\t\t\t\t\tM for Milligram\n";
    cout<<"\t\t\t\t\t\t\tP for Pound\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>ach;
    if (ach == 'T' ||ach == 't')
    {
        long double g;
           long double ton;
              cout<<"\t\t\t\t\t\t\tenter the Number of g: ";
                cin>>g;
                   ton = g /1000000;
                     cout<<g<<" g equal to " <<ton<< " ton\n\n"<<endl;
    }
    if (ach == 'k' ||ach == 'K')
    {
        long double g;
           long double kg;
              cout<<"\t\t\t\t\t\t\tenter the Number of g: ";
                cin>>g;
                   kg = g /1000;
                     cout<<g<<" g equal to " <<kg<< " kg\n\n"<<endl;
    }
    if (ach == 'M' ||ach == 'm')
    {
        long double g;
           long double m;
              cout<<"\t\t\t\t\t\t\tenter the Number of g: ";
                cin>>g;
                   m = g *1000;
                     cout<<g<<" g equal to " <<m<< " mg\n\n"<<endl;
    }
    if (ach == 'P' ||ach == 'p')
    {
        long double g;
           long double p;
              cout<<"\t\t\t\t\t\t\tenter the Number of g: ";
                cin>>g;
                   p = g /453.6;
                     cout<<g<<" g equal to " <<p<< " p\n\n"<<endl;
    }
}
double mg(){
     char ach;
        cout<<"******************************************* Type of Mass you need ********************************************** \n";
    cout<<"\t\t\t\t\t\t\tT for Tonne\n";
    cout<<"\t\t\t\t\t\t\tK for Kilogram\n";
    cout<<"\t\t\t\t\t\t\tG for Gram\n";
    // cout<<"M for Milligram\n";
    cout<<"\t\t\t\t\t\t\tP for Pound\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>ach;
    if (ach == 'T' ||ach == 't')
    {
        long double mg;
           long double ton;
              cout<<"\t\t\t\t\t\t\tenter the Number of mg: ";
                cin>>mg;
                   ton = mg /1000000000;
                     cout<<mg<<" mg equal to " <<ton<< " ton\n\n"<<endl;
    }
    if (ach == 'K' ||ach == 'k')
    {
        long double mg;
           long double kg;
              cout<<"\t\t\t\t\t\t\tenter the Number of mg: ";
                cin>>mg;
                   kg = mg /1000000;
                     cout<<mg<<" mg equal to " <<kg<< " kg\n\n"<<endl;
    }
    if (ach == 'G' ||ach == 'g')
    {
        long double mg;
           long double g;
              cout<<"\t\t\t\t\t\t\tenter the Number of mg: ";
                cin>>mg;
                   g = mg /1000;
                     cout<<mg<<" mg equal to " <<g<< " g\n\n"<<endl;
    }
    if (ach == 'p' ||ach == 'P')
    {
        long double mg;
           long double p;
              cout<<"\t\t\t\t\t\t\tenter the Number of mg: ";
                cin>>mg;
                   p = mg /453600;
                     cout<<mg<<" mg equal to " <<p<< " pound\n\n"<<endl;
    }
}
double pound(){
    char ach;
        cout<<"******************************************* Type of Mass you need ********************************************** \n";
    cout<<"\t\t\t\t\t\t\tT for Tonne\n";
    cout<<"\t\t\t\t\t\t\tK for Kilogram\n";
    cout<<"\t\t\t\t\t\t\tG for Gram\n";
    cout<<"\t\t\t\t\t\t\tM for Milligram\n";
    // cout<<"P for Pound\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>ach;
    if (ach == 'T' ||ach == 't')
    {
        long double p;
           long double ton;
              cout<<"\t\t\t\t\t\t\tenter the Number of pound: ";
                cin>>p;
                   ton = p /2205;
                     cout<<p<<" pound equal to " <<ton<< " ton\n\n"<<endl;
    }
    if (ach == 'K' ||ach == 'k')
    {
        long double p;
           long double K;
              cout<<"\t\t\t\t\t\t\tenter the Number of pound: ";
                cin>>p;
                   K = p /2.205;
                     cout<<p<<" pound equal to " <<K<< " kg\n\n"<<endl;
    }
    if (ach == 'g' ||ach == 'G')
    {
        long double p;
           long double g;
              cout<<"\t\t\t\t\t\t\tenter the Number of pound: ";
                cin>>p;
                   g = p *453.6;
                     cout<<p<<" pound equal to " <<g<< " g\n\n"<<endl;
    }
    if (ach == 'M' ||ach == 'm')
    {
        long double p;
           long double mg;
              cout<<"\t\t\t\t\t\t\tenter the Number of pound: ";
                cin>>p;
                   mg = p *453600;
                     cout<<p<<" pound equal to " <<mg<< " mg\n\n"<<endl;
    }
}
double time(){
    char time;
    cout<<"********************************************** Type of Time you must convert ******************************************* \n";
    cout<<"\t\t\t\t\t\t\tY for Year\n";
    cout<<"\t\t\t\t\t\t\tM for Month\n";
    cout<<"\t\t\t\t\t\t\tW for Week\n";
    cout<<"\t\t\t\t\t\t\tD for Day\n";
    cout<<"\t\t\t\t\t\t\tH for Hour\n";
    cout<<"\t\t\t\t\t\t\tN for Minute\n";
    cout<<"\t\t\t\t\t\t\tS for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin>>time;
    if (time == 'Y' || time == 'y')
    {
        year();
    }
    if (time == 'M' || time == 'm')
    {
        month();
    }
    if (time == 'W' || time == 'w')
    {
        week();
    }
    if (time == 'D' || time == 'd')
    {
        day();
    }
    if (time == 'H' || time == 'h')
    {
        hour();
    }
    if (time == 'N' || time == 'n')
    {
        minute();
    }
    if (time == 'S' || time == 's')
    {
       second();
    }
} 
double year(){
    char year;
        cout<<"******************************************* Type of Time you need ********************************************** \n";
    // cout<<"Y for Year\n";
    cout<<"\t\t\t\t\t\t\tM for Month\n";
    cout<<"\t\t\t\t\t\t\tW for Week\n";
    cout<<"\t\t\t\t\t\t\tD for Day\n";
    cout<<"\t\t\t\t\t\t\tH for Hour\n";
    cout<<"\t\t\t\t\t\t\tN for Minute\n";
    cout<<"\t\t\t\t\t\t\tS for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>year;
    if (year == 'M' ||year == 'm')
    {
        long double year1;
           long double month;
              cout<<"\t\t\t\t\t\t\tenter the value of year: ";
                cin>>year1;
                   month = year1 *12;
                     cout<<year1<<" y equal to " <<month<< " month\n\n"<<endl;
    }
    
    if (year == 'w' ||year == 'W')
    {
        long double year1;
           long double week;
              cout<<"\t\t\t\t\t\t\tenter the value of year: ";
                cin>>year1;
                   week  = year1 *52.143;
                     cout<<year1<<" y equal to " <<week<< " week\n\n"<<endl;
    }
    if (year == 'd' ||year == 'D')
    {
        long double year1;
           long double day;
              cout<<"\t\t\t\t\t\t\tenter the value of year: ";
                cin>>year1;
                   day = year1 *365;
                     cout<<year1<<" y equal to " <<day<< " day\n\n"<<endl;
    }
    if (year == 'H' ||year == 'h')
    {
        long double year1;
           long double hour;
              cout<<"\t\t\t\t\t\t\tenter the value of year: ";
                cin>>year1;
                   hour = year1 *8760;
                     cout<<year1<<" y equal to " <<hour<< " hour\n\n"<<endl;
    }
    if (year == 'n' ||year == 'N')
    {
        long double year1;
           long double minute;
              cout<<"\t\t\t\t\t\t\tenter the value of year: ";
                cin>>year1;
                   minute = year1 *525600;
                     cout<<year1<<" y equal to " <<minute<< " minute\n\n"<<endl;
    }
    if (year == 's' ||year == 'S')
    {
        long double year1;
           long double second;
              cout<<"\t\t\t\t\t\t\tenter the value of year: ";
                cin>>year1;
                   second = year1 *31540000;
                     cout<<year1<<" y equal to " <<second<< " second\n\n"<<endl;
    }
    
}
double month(){
    char year;
            cout<<"******************************************* Type of Time you need ****************************************** \n";
    cout<<"Y for Year\n";
    // cout<<"M for Month\n";
    cout<<"\t\t\t\t\t\t\tW for Week\n";
    cout<<"\t\t\t\t\t\t\tD for Day\n";
    cout<<"\t\t\t\t\t\t\tH for Hour\n";
    cout<<"\t\t\t\t\t\t\tN for Minute\n";
    cout<<"\t\t\t\t\t\t\tS for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>year;
    if (year == 'y' ||year == 'Y')
    {
        long double month;
           long double year1;
              cout<<"\t\t\t\t\t\t\tenter the value of month: ";
                cin>>month;
                  year1 =  month /12;
                     cout<<month<<" month equal to " <<year1<< " y\n\n"<<endl;
    }
    if (year == 'W' ||year == 'w')
    {
        long double month;
           long double week;
              cout<<"\t\t\t\t\t\t\tenter the value of month: ";
                cin>>month;
                  week =  month *4.345;
                     cout<<month<<" month equal to " <<week<< " week\n\n"<<endl;
    }
    if (year == 'D' ||year == 'd')
    {
        long double month;
           long double day;
              cout<<"\t\t\t\t\t\t\tenter the value of month: ";
                cin>>month;
                  day =  month *30.4167;
                     cout<<month<<" month equal to " <<day<< " day\n\n"<<endl;
    }
    if (year == 'H' ||year == 'h')
    {
        long double month;
           long double hour;
              cout<<"\t\t\t\t\t\t\tenter the value of month: ";
                cin>>month;
                  hour =  month *730;
                     cout<<month<<" month equal to " <<hour<< " hour\n\n"<<endl;
    }
    if (year == 'N' ||year == 'n')
    {
        long double month;
           long double minute;
              cout<<"\t\t\t\t\t\t\tenter the value of month: ";
                cin>>month;
                  minute =  month *43800;
                     cout<<month<<" month equal to " <<minute<< " minute\n\n"<<endl;
    }
    if (year == 'S' ||year == 's')
    {
        long double month;
           long double second;
              cout<<"\t\t\t\t\t\t\tenter the value of month: ";
                cin>>month;
                  second =  month *2628000;
                     cout<<month<<" month equal to " <<second<< " v\n\n"<<endl;
    }
}
double week(){
    char love;
            cout<<"************************************* Type of Time you need ********************************************** \n";

    cout<<"\t\t\t\t\t\t\tY for Year\n";
    cout<<"\t\t\t\t\t\t\tM for Month\n";
    // cout<<"W for Week\n";
    cout<<"\t\t\t\t\t\t\tD for Day\n";
    cout<<"\t\t\t\t\t\t\tH for Hour\n";
    cout<<"\t\t\t\t\t\t\tN for Minute\n";
    cout<<"\t\t\t\t\t\t\tS for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>love;
    if (love == 'y' ||love == 'Y')
    {
        long double week;
           long double year1;
              cout<<"\t\t\t\t\t\t\tenter the value of week: ";
                cin>>week;
                  year1 =  week /52.143;
                     cout<<week<<" week equal to " <<year1<< " y\n\n"<<endl;
    }
    if (love == 'M' ||love == 'm')
    {
        long double week;
           long double month;
              cout<<"\t\t\t\t\t\t\tenter the value of week: ";
                cin>>week;
                  month =  week /4.345;
                     cout<<week<<" week equal to " <<month<< " month\n\n"<<endl;
    }
    if (love == 'D' ||love == 'd')
    {
        long double week;
           long double day;
              cout<<"\t\t\t\t\t\t\tenter the value of week: ";
                cin>>week;
                  day =  week *7;
                     cout<<week<<" week equal to " <<day<< " day\n\n"<<endl;
    }
    if (love == 'H' ||love == 'h')
    {
        long double week;
           long double hour;
              cout<<"\t\t\t\t\t\t\tenter the value of week: ";
                cin>>week;
                  hour =  week *168;
                     cout<<week<<" week equal to " <<hour<< " hour\n\n"<<endl;
    }
    if (love == 'N' ||love == 'n')
    {
        long double week;
           long double minute;
              cout<<"\t\t\t\t\t\t\tenter the value of week: ";
                cin>>week;
                  minute =  week *10080;
                     cout<<week<<" week equal to " <<minute<< " minute\n\n"<<endl;
    }
    if (love == 's' ||love == 'S')
    {
        long double week;
           long double second;
              cout<<"\t\t\t\t\t\t\tenter the value of week: ";
                cin>>week;
                  second =  week *604800;
                     cout<<week<<" week equal to " <<second<< " second\n\n"<<endl;
    }
    
}
double day(){
    char love;
            cout<<"********************************************** Type of Time you need ***************************************** \n";

    cout<<"\t\t\t\t\t\t\tY for Year\n";
    cout<<"\t\t\t\t\t\t\tM for Month\n";
    cout<<"\t\t\t\t\t\t\tW for Week\n";
    // cout<<"D for Day\n";
    cout<<"\t\t\t\t\t\t\tH for Hour\n";
    cout<<"\t\t\t\t\t\t\tN for Minute\n";
    cout<<"\t\t\t\t\t\t\tS for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>love;
    if (love == 'y' ||love == 'Y')
    {
        long double day;
           long double year1;
              cout<<"\t\t\t\t\t\t\tenter the value of day: ";
                cin>>day;
                  year1 =  day /365;
                     cout<<day<<" day equal to " <<year1<< " y\n\n"<<endl;
    }
    if (love == 'm' ||love == 'M')
    {
        long double day;
           long double month;
              cout<<"\t\t\t\t\t\t\tenter the value of day: ";
                cin>>day;
                  month =  day /30.417;
                     cout<<day<<" day equal to " <<month<< " month\n\n"<<endl;
    }
    if (love == 'w' ||love == 'W')
    {
        long double day;
           long double week;
              cout<<"\t\t\t\t\t\t\tenter the value of day: ";
                cin>>day;
                  week =  day /7;
                     cout<<day<<" day equal to " <<week<< " week\n\n"<<endl;
    }
    if (love == 'h' ||love == 'H')
    {
        long double day;
           long double hour;
              cout<<"\t\t\t\t\t\t\tenter the value of day: ";
                cin>>day;
                  hour =  day *24;
                     cout<<day<<" day equal to " <<hour<< " hour\n\n"<<endl;
    }
    if (love == 'N' ||love == 'n')
    {
        long double day;
           long double minute;
              cout<<"\t\t\t\t\t\t\tenter the value of day: ";
                cin>>day;
                  minute =  day *1440;
                     cout<<day<<" day equal to " <<minute<< " mn\n\n"<<endl;
    }
    if (love == 's' ||love == 'S')
    {
        long double day;
           long double second;
              cout<<"\t\t\t\t\t\t\tenter the value of day: ";
                cin>>day;
                  second =  day *86400;
                     cout<<day<<" day equal to " <<second<< " s\n\n"<<endl;
    }
}
double hour(){
    char love;
            cout<<"************************************************ Type of Time you need ****************************************** \n";

    cout<<"\t\t\t\t\t\t\tY for Year\n";
    cout<<"\t\t\t\t\t\t\tM for Month\n";
    cout<<"\t\t\t\t\t\t\tW for Week\n";
    cout<<"\t\t\t\t\t\t\tD for Day\n";
    // cout<<"H for Hour\n";
    cout<<"\t\t\t\t\t\t\tN for Minute\n";
    cout<<"\t\t\t\t\t\t\tS for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>love;
    if (love == 'y' ||love == 'Y')
    {
        long double hour;
           long double year1;
              cout<<"\t\t\t\t\t\t\tenter the value of hour: ";
                cin>>hour;
                  year1 =  hour /8760;
                     cout<<hour<<" day equal to" <<year1<< " y\n\n"<<endl;
    }
    if (love == 'm' ||love == 'M')
    {
        long double hour;
           long double month;
              cout<<"\t\t\t\t\t\t\tenter the value of hour: ";
                cin>>hour;
                  month =  hour /730;
                     cout<<hour<<" day equal to" <<month<< " month\n\n"<<endl;
    }
    if (love == 'W' ||love == 'w')
    {
        long double hour;
           long double week;
              cout<<"\t\t\t\t\t\t\tenter the value of hour: ";
                cin>>hour;
                  week =  hour /168;
                     cout<<hour<<" day equal to" <<week<< " week\n\n"<<endl;
    }
    if (love == 'D' ||love == 'd')
    {
        long double hour;
           long double day;
              cout<<"\t\t\t\t\t\t\tenter the value of hour: ";
                cin>>hour;
                  day =  hour /24;
                     cout<<hour<<" day equal to" <<day<< " day\n\n"<<endl;
    }
    if (love == 'N' ||love == 'n')
    {
        long double hour;
           long double minute;
              cout<<"\t\t\t\t\t\t\tenter the value of hour: ";
                cin>>hour;
                  minute =  hour *60;
                     cout<<hour<<" day equal to" <<minute<< " mn\n\n"<<endl;
    }
    if (love == 's' ||love == 'S')
    {
        long double hour;
           long double second;
              cout<<"\t\t\t\t\t\t\tenter the value of hour: ";
                cin>>hour;
                  second =  hour *3600;
                     cout<<hour<<" day equal to" <<second<< " s\n\n"<<endl;
    }
}
double minute(){
    char love;
           cout<<"***************************************** Type of Time you need *************************************************** \n";

    cout<<"\t\t\t\t\t\t\tY for Year\n";
    cout<<"\t\t\t\t\t\t\tM for Month\n";
    cout<<"\t\t\t\t\t\t\tW for Week\n";
    cout<<"\t\t\t\t\t\t\tD for Day\n";
    cout<<"\t\t\t\t\t\t\tH for Hour\n";
    // cout<<"N for Minute\n";
    cout<<"\t\t\t\t\t\t\tS for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>love;
    if (love == 'y' ||love == 'Y')
    {
        long double Minute;
           long double year1;
              cout<<"\t\t\t\t\t\t\tenter the value of Minute: ";
                cin>>Minute;
                  year1 =  Minute /525600;
                     cout<<Minute<<" Minute equal to" <<year1<< " y\n\n"<<endl;
    }
    if (love == 'm' ||love == 'M')
    {
        long double Minute;
           long double month;
              cout<<"\t\t\t\t\t\t\tenter the value of Minute: ";
                cin>>Minute;
                  month =  Minute /43800;
                     cout<<Minute<<" Minute equal to" <<month<< " month\n\n"<<endl;
    }
    if (love == 'w' ||love == 'W')
    {
        long double Minute;
           long double week;
              cout<<"\t\t\t\t\t\t\tenter the value of Minute: ";
                cin>>Minute;
                  week =  Minute /10080;
                     cout<<Minute<<" Minute equal to" <<week<< " week\n\n"<<endl;
    }
    if (love == 'd' ||love == 'D')
    {
        long double Minute;
           long double day;
              cout<<"\t\t\t\t\t\t\tenter the value of Minute: ";
                cin>>Minute;
                  day =  Minute /1440;
                     cout<<Minute<<" Minute equal to" <<day<< " d\n\n"<<endl;
    }
    if (love == 'h' ||love == 'H')
    {
        long double Minute;
           long double hour;
              cout<<"\t\t\t\t\t\t\tenter the value of Minute: ";
                cin>>Minute;
                  hour =  Minute /60;
                     cout<<Minute<<" Minute equal to" <<hour<< " h\n\n"<<endl;
    }
    if (love == 's' ||love == 'S')
    {
        long double Minute;
           long double second;
              cout<<"\t\t\t\t\t\t\tenter the value of Minute: ";
                cin>>Minute;
                  second =  Minute *60;
                     cout<<Minute<<" Minute equal to" <<second<< " s\n\n"<<endl;
    }
}
double second(){
    char love;
        cout<<"***************************************** Type of Time you need *************************************************** \n";


    cout<<"\t\t\t\t\t\t\tY for Year\n";
    cout<<"\t\t\t\t\t\t\tM for Month\n";
    cout<<"\t\t\t\t\t\t\tW for Week\n";
    cout<<"\t\t\t\t\t\t\tD for Day\n";
    cout<<"\t\t\t\t\t\t\tH for Hour\n";
    cout<<"\t\t\t\t\t\t\tN for Minute\n";
    // cout<<"S for Second\n";
    cout<<"\t\t\t\t\t\t\tEnter a character: ";
    cin >>love;
    if (love == 'y' ||love == 'Y')
    {
        long double second;
           long double year1;
              cout<<"enter the value of second: ";
                cin>>second;
                  year1 =  second /31540000;
                     cout<<second<<" second equal to" <<year1<< " y\n\n"<<endl;
    }
    if (love == 'm' ||love == 'M')
    {
        long double second;
           long double month;
              cout<<"\t\t\t\t\t\t\tenter the value of second: ";
                cin>>second;
                  month =  second /2628000;
                     cout<<second<<" second equal to" <<month<< " month\n\n"<<endl;
    }
    if (love == 'w' ||love == 'W')
    {
        long double second;
           long double week;
              cout<<"\t\t\t\t\t\t\tenter the value of second: ";
                cin>>second;
                  week =  second /604800;
                     cout<<second<<" second equal to" <<week<< " week\n\n"<<endl;
    }
    if (love == 'D' ||love == 'd')
    {
        long double second;
           long double day;
              cout<<"\t\t\t\t\t\t\tenter the value of second: ";
                cin>>second;
                  day =  second /86400;
                     cout<<second<<" second equal to" <<day<< " d\n\n"<<endl;
    }
    if (love == 'h' ||love == 'H')
    {
        long double second;
           long double hour;
              cout<<"\t\t\t\t\t\t\tenter the value of second: ";
                cin>>second;
                  hour =  second /3600;
                     cout<<second<<" second equal to" <<hour<< " h\n\n"<<endl;
    }
    if (love == 'n' ||love == 'N')
    {
        long double second;
           long double minute;
              cout<<"\t\t\t\t\t\t\tenter the value of second: ";
                cin>>second;
                  minute =  second /60;
                     cout<<second<<" second equal to" <<minute<< " mn\n\n"<<endl;
    }
}
                                   //end of function
double distance(){
    char met;
    cout<<"****************************************** Type of distance u must convert *************************************** \n";
    cout<<"\t\t\t\t\t\t\tK for kilometer\n";
    cout<<"\t\t\t\t\t\t\tM for meter\n";
    cout<<"\t\t\t\t\t\t\tC for centimeter\n";
    cout<<"\t\t\t\t\t\t\tL for millimeter\n";
    cout<<"\t\t\t\t\t\t\tU for micrometer\n";
    cout<<"\t\t\t\t\t\t\tN for nanometer\n";
    cout<<"\t\t\t\t\t\t\tY for mile\n\n";
    cout<<"\t\t\t\t\t\t\tenter a character: ";
    cin >>met;
    if (met == 'K'||met=='k'){
        kilometer();   
    }
    if (met == 'm'||met=='M'){
        meter(); 
    }
    if (met == 'c'||met=='C'){
        centimeter(); 
    }
    if (met == 'L'||met=='l'){
        millimeter(); 
    }
    if (met == 'U'||met=='u'){
        micrometer(); 
    }
    if (met == 'N'||met=='n'){
        nanometer();
    }
    if (met == 'Y'||met=='y'){
        mile(); 
    }
}

double kilometer(){
    char baby;
    cout<<"******************* Type of distance u need ********************* \n";
    cout<<"\t\t\t\t\t\t\tM for meter\n";
    cout<<"\t\t\t\t\t\t\tC for centimeter\n";
    cout<<"\t\t\t\t\t\t\tL for millimeter\n";
    cout<<"\t\t\t\t\t\t\tU for micrometer\n";
    cout<<"\t\t\t\t\t\t\tN for nanometer\n";
    cout<<"\t\t\t\t\t\t\tY for mile\n\n";
    cout<<"\t\t\t\t\t\t\tenter a character: ";
    cin >>baby;
    if (baby == 'M'||baby == 'm')
    {
         double km;
            long double m;
                cout<<"\t\t\t\t\t\t\tenter the number of kilometer: ";
                    cin>>km;
                        m = km*1000;
                            cout<<km<<" km equal to "<<m<<" m.\n\n"<<endl;
    }
    if (baby == 'c'||baby == 'C')
    {
         double km;
             long double c;
                cout<<"\t\t\t\t\t\t\tenter the number of kilometer: ";
                    cin>>km;
                        c = km*100000;
                            cout<<km<<" km equal to "<<c<<" cm.\n\n"<<endl;
    }
    if (baby == 'L'||baby == 'l')
    {
         double km;
            long double l;
                cout<<"\t\t\t\t\t\t\tenter the number of kilometer: ";
                    cin>>km;
                        l = km*1000000;
                            cout<<km<<" km equal to "<<l<<" mm.\n\n"<<endl;
    }
    if (baby == 'U'||baby == 'u')
    {
         double km;
            long double u;
                cout<<"\t\t\t\t\t\t\tenter the number of kilometer: ";
                    cin>>km;
                        u = km*1000000000;
                            cout<<km<<" km equal to "<<u<<" micrometer.\n\n"<<endl;
    }
    if (baby == 'N'||baby == 'n')
    {
         double km;
            long double n;
                cout<<"\t\t\t\t\t\t\tenter the number of kilometer: ";
                    cin>>km;
                        n = km*1000000000000;
                            cout<<km<<" km equal to "<<n<<" nm.\n\n"<<endl;
    }
    if (baby == 'y'||baby == 'Y')
    {
         double km;
            double y;
                cout<<"\t\t\t\t\t\t\tenter the number of kilometer: ";
                    cin>>km;
                        y = km/1.609;
                            cout<<km<<" km equal to "<<y<<" mile.\n\n"<<endl;
    }
        
}   
double meter(){
    char baby;
        cout<<"******************* Type of distance u need ********************* \n";

    cout<<"\t\t\t\t\t\t\tk for kilometer\n";
    cout<<"\t\t\t\t\t\t\tC for centimeter\n";
    cout<<"\t\t\t\t\t\t\tL for millimeter\n";
    cout<<"\t\t\t\t\t\t\tU for micrometer\n";
    cout<<"\t\t\t\t\t\t\tN for nanometer\n";
    cout<<"\t\t\t\t\t\t\tY for mile\n";
    cout<<"\t\t\t\t\t\t\tenter a character: ";
    cin >>baby;
    if (baby == 'k'||baby == 'K')
    {
         double m;
            double km;
                cout<<"\t\t\t\t\t\t\tenter the number of meter: ";
                    cin>>m;
                        km = m /1000;
                            cout<<m<<" m equal to "<<km<<" km.\n\n"<<endl;
    }
    if (baby == 'c'||baby == 'C')
    {
         double m;
            double cm;
                cout<<"\t\t\t\t\t\t\tenter the number of meter: ";
                    cin>>m;
                        cm = m *100;
                            cout<<m<<" m equal to "<<cm<<" cm.\n\n"<<endl;
    }
    if (baby == 'L'||baby == 'l')
    {
         double m;
           long double mm;
                cout<<"\t\t\t\t\t\t\tenter the number of meter: ";
                    cin>>m;
                        mm = m *1000;
                            cout<<m<<" m equal to "<<mm<<" mm.\n\n"<<endl;
    }
    if (baby == 'u'||baby == 'U')
    {
         double m;
            long double u;
                cout<<"\t\t\t\t\t\t\tenter the number of meter: ";
                    cin>>m;
                        u = m *1000000;
                            cout<<m<<" m equal to "<<u<<" micrometer.\n\n"<<endl;
    }
    if (baby == 'n'||baby == 'N')
    {
         double m;
            long double n;
                cout<<"\t\t\t\t\t\t\tenter the number of meter: ";
                    cin>>m;
                        n = m *1000000000;
                            cout<<m<<" m equal to "<<n<<" nm.\n\n"<<endl;
    }
    if (baby == 'y'||baby == 'Y')
    {
         double m;
            long double y;
                cout<<"\t\t\t\t\t\t\tenter the number of meter: ";
                    cin>>m;
                        y = m /1609;
                            cout<<m<<" m equal to "<<y<<" mile.\n\n"<<endl;
    }
} 
double centimeter(){
    char baby;
        cout<<"******************* Type of distance u need ********************* \n";

    cout<<"\t\t\t\t\t\t\tk for kilometer\n";
    cout<<"\t\t\t\t\t\t\tm for meter\n";
    cout<<"\t\t\t\t\t\t\tL for millimeter\n";
    cout<<"\t\t\t\t\t\t\tU for micrometer\n";
    cout<<"\t\t\t\t\t\t\tN for nanometer\n";
    cout<<"\t\t\t\t\t\t\tY for mile\n";
    cout<<"\nenter a character: ";
    cin >>baby;
    if (baby == 'k'||baby == 'K')
    {
         long double cm;
            long double km;
                cout<<"\t\t\t\t\t\t\tenter the number of centimeter(cm): ";
                    cin>>cm;
                        km = cm /100000;
                            cout<<cm<<" cm equal to "<<km<<" km.\n\n"<<endl;
    }
    if (baby == 'm'||baby == 'M')
    {
         long double cm;
            long double m;
                cout<<"\t\t\t\t\t\t\tenter the number of centimeter(cm): ";
                    cin>>cm;
                        m = cm /100;
                            cout<<cm<<" cm equal to "<<m<<" m.\n\n"<<endl;
    }
    if (baby == 'l'||baby == 'L')
    {
         long double cm;
            long double mm;
                cout<<"\t\t\t\t\t\t\tenter the number of centimeter(cm): ";
                    cin>>cm;
                        mm = cm *10;
                            cout<<cm<<" cm equal to "<<mm<<" mm.\n\n"<<endl;
    }
    if (baby == 'u'||baby == 'U')
    {
         long double cm;
            long double u;
                cout<<"\t\t\t\t\t\t\tenter the number of centimeter(cm): ";
                    cin>>cm;
                        u = cm *10000;
                            cout<<cm<<" cm equal to "<<u<<" micrometer.\n\n"<<endl;
    }
    if (baby == 'n'||baby == 'N')
    {
         long double cm;
            long double n;
                cout<<"enter the number of centimeter(cm): ";
                    cin>>cm;
                        n = cm /10000000;
                            cout<<cm<<" cm equal to "<<n<<" nm.\n\n"<<endl;
    }
    if (baby == 'y'||baby == 'Y')
    {
         long double cm;
            long double y;
                cout<<"enter the number of centimeter(cm): ";
                    cin>>cm;
                        y = cm /160900;
                            cout<<cm<<" cm equal to "<<y<<" mile.\n\n"<<endl;
    }
} 
double millimeter(){
    char baby;
        cout<<"******************* Type of distance u need ********************* \n";

    cout<<"k for kilometer\n";
    cout<<"m for meter\n";
    cout<<"C for centimeter\n";
    cout<<"U for micrometer\n";
    cout<<"N for nanometer\n";
    cout<<"Y for mile\n";
    cout<<"\nenter a character: ";
    cin >>baby;
    if (baby == 'k'||baby == 'K')
    {
         long double mm;
            long double km;
                cout<<"enter the number of millimeter(mm): ";
                    cin>>mm;
                        km = mm /1000000;
                            cout<<mm<<" mm equal to "<<km<<" km.\n\n"<<endl;
    }
    if (baby == 'm'||baby == 'M')
    {
         long double mm;
            long double m;
                cout<<"enter the number of millimeter(mm): ";
                    cin>>mm;
                        m = mm /1000;
                            cout<<mm<<" mm equal to "<<m<<" m.\n\n"<<endl;
    }
    if (baby == 'c'||baby == 'C')
    {
         long double mm;
            long double cm;
                cout<<"enter the number of millimeter(mm): ";
                    cin>>mm;
                        cm = mm /10;
                            cout<<mm<<" mm equal to "<<cm<<" cm.\n\n"<<endl;
    }
    if (baby == 'u'||baby == 'U')
    {
         long double mm;
            long double um;
                cout<<"enter the number of millimeter(mm): ";
                    cin>>mm;
                        um = mm *1000;
                            cout<<mm<<" mm equal to "<<um<<" micrometer.\n\n"<<endl;
    }
    if (baby == 'n'||baby == 'N')
    {
         long double mm;
            long double nm;
                cout<<"enter the number of millimeter(mm): ";
                    cin>>mm;
                        nm = mm *1000000;
                            cout<<mm<<" mm equal to "<<nm<<" nm.\n\n"<<endl;
    }
    if (baby == 'y'||baby == 'Y')
    {
         long double mm;
            long double y;
                cout<<"enter the number of millimeter(mm): ";
                    cin>>mm;
                        y = mm /1609000;
                            cout<<mm<<" mm equal to "<<y<<" mile.\n\n"<<endl;
    }
} 
double micrometer(){
    char baby;
        cout<<"******************* Type of distance u need ********************* \n";

    cout<<"k for kilometer\n";
    cout<<"m for meter\n";
    cout<<"C for centimeter\n";
    cout<<"l for millimeter\n";
    cout<<"N for nanometer\n";
    cout<<"Y for mile\n";
    cout<<"\nenter a character: ";
    cin >>baby;
    if (baby == 'k'||baby == 'K')
    {
         long double um;
            long double km;
                cout<<"enter the number of micrometer(um): ";
                    cin>>um;
                        km = um /1000000000;
                            cout<<um<<" micrometer equal to "<<km<<" km.\n\n"<<endl;
    }
    if (baby == 'm'||baby == 'M')
    {
         long double um;
            long double m;
                cout<<"enter the number of micrometer(um): ";
                    cin>>um;
                        m = um /1000000;
                            cout<<um<<" micrometer equal to "<<m<<" m.\n\n"<<endl;
    }
    if (baby == 'c'||baby == 'C')
    {
         long double um;
            long double cm;
                cout<<"enter the number of micrometer(um): ";
                    cin>>um;
                        cm = um /10000;
                            cout<<um<<" micrometer equal to "<<cm<<" cm.\n\n"<<endl;
    }
    if (baby == 'l'||baby == 'L')
    {
         long double um;
            long double mm;
                cout<<"enter the number of micrometer(um): ";
                    cin>>um;
                        mm = um /1000;
                            cout<<um<<" micrometer equal to "<<mm<<" mm.\n\n"<<endl;
    }
    if (baby == 'n'||baby == 'N')
    {
         long double um;
            long double nm;
                cout<<"enter the number of micrometer(um): ";
                    cin>>um;
                        nm = um *1000;
                            cout<<um<<" micrometer equal to "<<nm<<" nm.\n\n"<<endl;
    }
    if (baby == 'y'||baby == 'Y')
    {
         long double um;
            long double y;
                cout<<"enter the number of micrometer(um): ";
                    cin>>um;
                        y = um /1609000000;
                            cout<<um<<" micrometer equal to "<<y<<" y.\n\n"<<endl;
    }
} 
double nanometer(){
    char baby;
        cout<<"******************* Type of distance u need ********************* \n";

    cout<<"k for kilometer\n";
    cout<<"m for meter\n";
    cout<<"C for centimeter\n";
    cout<<"l for millimeter\n";
    cout<<"U for micrometer\n";
    cout<<"Y for mile\n";
    cout<<"\nenter a character: ";
    cin >>baby;
    if (baby == 'k'||baby == 'K')
    {
         long double nm;
            long double km;
                cout<<"enter the number of nanometer(nm): ";
                    cin>>nm;
                        km = nm /1000000000000;
                            cout<<nm<<" nanometer equal to "<<km<<" km.\n\n"<<endl;
    }
    if (baby == 'm'||baby == 'M')
    {
         long double nm;
            long double m;
                cout<<"enter the number of nanometer(nm): ";
                    cin>>nm;
                        m = nm /1000000000;
                            cout<<nm<<" nanometer equal to "<<m<<" m.\n\n"<<endl;
    }
    if (baby == 'c'||baby == 'C')
    {
         long double nm;
            long double cm;
                cout<<"enter the number of nanometer(nm): ";
                    cin>>nm;
                        cm = nm /10000000;
                            cout<<nm<<" nanometer equal to "<<cm<<" cm.\n\n"<<endl;
    }
    if (baby == 'l'||baby == 'L')
    {
         long double nm;
            long double mm;
                cout<<"enter the number of nanometer(nm): ";
                    cin>>nm;
                        mm = nm /1000000;
                            cout<<nm<<" nanometer equal to "<<mm<<" mm.\n\n"<<endl;
    }
    if (baby == 'u'||baby == 'U')
    {
         long double nm;
            long double um;
                cout<<"enter the number of nanometer(nm): ";
                    cin>>nm;
                        um = nm /1000;
                            cout<<nm<<" nanometer equal to "<<um<<" um.\n\n"<<endl;
    }
    if (baby == 'y'||baby == 'Y')
    {
         long double nm;
            long double y;
                cout<<"enter the number of nanometer(nm): ";
                    cin>>nm;
                        y = nm /1609000000000;
                            cout<<nm<<" nanometer equal to "<<y<<" mile.\n\n"<<endl;
    }
}
double mile(){
    char baby;
       cout<<"******************* Type of distance u need ********************* \n";

    cout<<"k for kilometer\n";
    cout<<"m for meter\n";
    cout<<"C for centimeter\n";
    cout<<"l for millimeter\n";
    cout<<"U for micrometer\n";
    cout<<"N for nanometer\n";
    cout<<"\nenter a character: ";
    cin >>baby;
    if (baby == 'k'||baby == 'K')
    {
         long double mi;
            long double km;
                cout<<"enter the number of mile: ";
                    cin>>mi;
                    if (mi >= 2)
                    {
                       km = mi *1.609;
                            cout<<mi<<" miles equal to "<<km<<" km.\n\n"<<endl;
                    }else{
                        km = mi *1.609;
                            cout<<mi<<" mile equal to "<<km<<" km.\n\n"<<endl;
                    }

    }
    if (baby == 'm'||baby == 'M')
    {
         long double mi;
            long double m;
                cout<<"enter the number of mile: ";
                    cin>>mi;
                        m = mi *1609.34;
                            cout<<mi<<" mile equal to "<<m<<" m.\n\n"<<endl;
    }
    if (baby == 'c'||baby == 'C')
    {
         long double mi;
            long double cm;
                cout<<"enter the number of mile: ";
                    cin>>mi;
                        cm = mi *160900;
                            cout<<mi<<" mile equal to "<<cm<<" cm.\n\n"<<endl;
    }
    if (baby == 'l'||baby == 'L')
    {
         long double mi;
            long double mm;
                cout<<"enter the number of mile: ";
                    cin>>mi;
                        mm = mi *1609000;
                            cout<<mi<<" mile equal to "<<mm<<" mm.\n\n"<<endl;
    }
    if (baby == 'u'||baby == 'U')
    {
         long double mi;
            long double um;
                cout<<"enter the number of mile: ";
                    cin>>mi;
                        um = mi *1609000000;
                            cout<<mi<<" mile equal to "<<um<<" micrometer.\n\n"<<endl;
    }
    if (baby == 'n'||baby == 'N')
    {
         long double mi;
            long double nm;
                cout<<"enter the number of mile: ";
                    cin>>mi;
                        nm = mi *1609000000000;
                            cout<<mi<<" mile equal to "<<nm<<" nm.\n\n"<<endl;
    }
}                         
double temperature(){                                                             // start of temperature function**********************************
    char tem;
        cout<<"\n****************** Type of distance you must convert ********************* \n";
  
       cout <<"F for fahrenheit\n";
       cout <<"C for degreecelcius\n";
       cout <<"k for kelvin\n";
    cout<<"\nenter a character: ";
       cin>>tem;
       if ( tem == 'c' || tem =='C')
       {
          celsius();
       }
       if(tem == 'F' || tem =='f'){
         fahrenhiet();
       }
       if(tem == 'k' || tem =='K'){
         kelvin();
       }
}                         //end of function
double celsius(){
        char tem1;
           cout<<"\n****************** Type of distance you need ********************* \n";
   
       cout <<"F for fahrenheit\n";
       cout <<"C for degreecelcius\n";
       cout <<"k for kelvin\n";
    cout<<"\nenter a character: ";
       cin>>tem1;
       if (tem1 == 'f'||tem1=='F')
       {
          double fah;
            double cel;
                cout<<"enter the number of celsius: ";
                    cin>>cel;
                        fah = (cel * 9/5) + 32;
                            cout<<cel<<" celsius equal to "<<fah<<" kelvin.\n\n"<<endl;
       }
       if (tem1 == 'k'||tem1=='K')
       {
          double kel;
            double cel;
                cout<<"enter the number of celsius: ";
                    cin>>cel;
                        kel = cel + 273.15;
                            cout<<cel<<" celsius equal to "<<kel<<" fahrenheit.\n\n"<<endl;
       }
}                           //end of function
double fahrenhiet(){
     char tem1;
           cout<<"\n****************** Type of distance you need ********************* \n";
  
       cout <<"F for fahrenheit\n";
       cout <<"C for degreecelcius\n";
       cout <<"k for kelvin\n";
    cout<<"\nenter a character: ";
       cin>>tem1;
       if (tem1 == 'c'||tem1=='C')
       {
          double fah;
            double cel;
                cout<<"enter the number of fahrenheit: ";
                    cin>>fah;
                        cel = (fah - 32) * 5/9;
                            cout<<fah<<" fahrenheit equal to "<<cel<<" celsius.\n\n"<<endl;
       }
       if (tem1 == 'k'||tem1=='K')
       {
          double fah;
            double kel;
                cout<<"enter the number of fahrenheit: ";
                    cin>>fah;
                        kel = (fah - 32) *5/9 + 273.15;
                            cout<<fah<<" fahrenheit equal to "<<kel<<" kelvin.\n\n"<<endl;
       }
}
double kelvin(){
    char tem1;
               cout<<"\n****************** Type of distance you need ********************* \n";

       cout <<"F for fahrenheit\n";
       cout <<"C for degreecelcius\n";
       cout <<"k for kelvin\n";
       cin>>tem1;
       if (tem1 == 'c'||tem1=='C')
       {
          double kel;
            double cel;
                cout<<"enter the number of kelvin: ";
                    cin>>kel;
                        cel =kel  - 273.15;
                            cout<<kel<<" kelvin equal to "<<cel<<" celsius.\n\n"<<endl;
       }
       if (tem1 == 'F'||tem1=='f')
       {
        double kel;
            double fah;
                cout<<"enter the number of kelvin: ";
                    cin>>kel;
                        // fah = 32 + 9/5 * (kel - 273.15) ;
                        fah= (kel - 273.15) * 9/5 + 32  ;
                            cout<<kel<<" kelvin equal to "<<fah<<" fahrenheit.\n\n"<<endl;
       }
}                                                                                                 //end of temperature succes*********************

double currency(){
    char luy;
    cout<<"********************************************** Type of currency you must convert ******************************************* \n";
    cout<<"D for dollar\n";
    cout<<"R for riel\n";
    cout<<"B for baht\n";
    cout<<"V for dong\n";
    cout<<"E for euro\n";
    cout<<"Y for yuan\n";
    cout<<"S for swiss\n";
    cout<<"Enter a character: ";
    cin>>luy;
    if (luy == 'D'||luy == 'd')
    {
        dollar();
    }
    if (luy == 'R'||luy == 'r')
    {
       riel();
    }
    if (luy == 'b'||luy == 'B')
    {
       baht();
    }
    if (luy == 'V'||luy == 'v')
    {
       dong();
    }
    if (luy == 'e'||luy == 'E')
    {
       euro();
    }
    if (luy == 'y'||luy == 'Y')
    {
       yuan();
    }
} //end of function 
double dollar(){
    char luy1;
       cout<<"******************* Type of currency u need ********************* \n";
    cout<<"R for riel\n";
    cout<<"B for baht\n";
    cout<<"V for dong\n";
    cout<<"E for euro\n";
    cout<<"Y for yuan\n";
    cout<<"S for swiss\n";
    cout<<"\nenter a character: ";
    cin >>luy1;
    if(luy1 == 'r' || luy1 =='R'){
        long double dol;
            long double riel;
                cout<<"enter your dollar currency: ";
                    cin>>dol;
                        riel= dol * 4150;
                            cout<<dol<<" $ equal to "<<riel<<" riel.\n\n"<<endl;
    }
    if(luy1 == 'B' || luy1 =='b'){
        long double dol;
            long double baht;
                cout<<"enter your dollar currency: ";
                    cin>>dol;
                        baht= dol * 35.04;
                            cout<<dol<<" $ equal to "<<baht<<" baht.\n\n"<<endl;
    }
    if(luy1 == 'v' || luy1 =='V'){
        long double dol;
            long double dong;
                cout<<"enter your dollar currency: ";
                    cin>>dol;
                        dong= dol * 24265.00;
                            cout<<dol<<" $ equal to "<<dong<<" dong.\n\n"<<endl;
    }
    if(luy1 == 'E' || luy1 =='e'){
        long double dol;
            long double euro;
                cout<<"enter your dollar currency: ";
                    cin>>dol;
                        euro= dol * 0.92;
                            cout<<dol<<" $ equal to "<<euro<<" euro.\n\n"<<endl;
    }
    if(luy1 == 'Y' || luy1 =='y'){
        long double dol;
            long double yuan;
                cout<<"enter your dollar currency: ";
                    cin>>dol;
                        yuan= dol * 7.22;
                            cout<<dol<<" $ equal to "<<yuan<<" yuan.\n\n"<<endl;
    }
    if(luy1 == 'S' || luy1 =='s'){
        long double dol;
            long double swiss;
                cout<<"enter your dollar currency: ";
                    cin>>dol;
                        swiss= dol * 4150;
                            cout<<dol<<" $ equal to "<<swiss<<" swiss.\n\n"<<endl;
    }

}
double riel(){
    char luy1;
       cout<<"******************* Type of currency u need ********************* \n";
    cout<<"D for dollar\n";
    cout<<"B for baht\n";
    cout<<"V for dong\n";
    cout<<"E for euro\n";
    cout<<"Y for yuan\n";
    cout<<"S for swiss\n";
    cout<<"\nenter a character: ";
    cin >>luy1;
    if(luy1 == 'D' || luy1 =='d'){
        long double riel;
            long double dollar;
                cout<<"enter your riel currency: ";
                    cin>>riel;
                        dollar= riel * 0.00024;
                            cout<<riel<<" riel equal to "<<dollar<<" dollar.\n\n"<<endl;
    }
    if(luy1 == 'B' || luy1 =='b'){
        long double riel;
            long double baht;
                cout<<"enter your riel currency: ";
                    cin>>riel;
                        baht= riel * 0.0085;
                            cout<<riel<<" riel equal to "<<baht<<" baht.\n\n"<<endl;
    }
    if(luy1 == 'v' || luy1 =='V'){
        long double riel;
            long double dong;
                cout<<"enter your riel currency: ";
                    cin>>riel;
                        dong= riel * 5.89;
                            cout<<riel<<" riel equal to "<<dong<<" dong.\n\n"<<endl;
    }
    if(luy1 == 'E' || luy1 =='e'){
        long double riel;
            long double euro;
                cout<<"enter your riel currency: ";
                    cin>>riel;
                        euro= riel * 0.00022;
                            cout<<riel<<" riel equal to "<<euro<<" euro.\n\n"<<endl;
    }
    if(luy1 == 'Y' || luy1 =='y'){
        long double riel;
            long double yuan;
                cout<<"enter your riel currency: ";
                    cin>>riel;
                        yuan= riel * 0.0018;
                            cout<<riel<<" riel equal to "<<yuan<<" yuan.\n\n"<<endl;
    }
    if(luy1 == 'S' || luy1 =='s'){
        long double riel;
            long double swiss;
                cout<<"enter your riel currency: ";
                    cin>>riel;
                        swiss= riel * 0.00022;
                            cout<<riel<<" riel equal to "<<swiss<<" swiss.\n\n"<<endl;
    }

}
double baht(){
    char luy1;
       cout<<"******************* Type of currency u need ********************* \n";
    cout<<"D for dollar\n";
    cout<<"R for riel\n";
    cout<<"V for dong\n";
    cout<<"E for euro\n";
    cout<<"Y for yuan\n";
    cout<<"S for swiss\n";
    cout<<"\nenter a character: ";
    cin >>luy1;
    if(luy1 == 'D' || luy1 =='d'){
        long double baht;
            long double dollar;
                cout<<"enter your baht currency: ";
                    cin>>baht;
                        dollar= baht * 0.028;
                            cout<<baht<<" baht equal to "<<dollar<<" dollar.\n\n"<<endl;
    }
    if(luy1 == 'r' || luy1 =='R'){
        long double baht;
            long double riel;
                cout<<"enter your baht currency: ";
                    cin>>baht;
                        riel= baht * 117.44;
                            cout<<baht<<" baht equal to "<<riel<<" riel.\n\n"<<endl;
    }
    if(luy1 == 'v' || luy1 =='V'){
        long double baht;
            long double dong;
                cout<<"enter your baht currency: ";
                    cin>>baht;
                        dong= baht * 691.29;
                            cout<<baht<<" baht equal to "<<dong<<" dong.\n\n"<<endl;
    }
    if(luy1 == 'E' || luy1 =='e'){
        long double baht;
            long double euro;
                cout<<"enter your baht currency: ";
                    cin>>baht;
                        euro= baht * 0.026;
                            cout<<baht<<" baht equal to "<<euro<<" euro.\n\n"<<endl;
    }
    if(luy1 == 'Y' || luy1 =='y'){
        long double baht;
            long double yuan;
                cout<<"enter your baht currency: ";
                    cin>>baht;
                        yuan= baht * 0.20;
                            cout<<baht<<" baht equal to "<<yuan<<" yuan.\n\n"<<endl;
    }
    if(luy1 == 'S' || luy1 =='s'){
        long double baht;
            long double swiss;
                cout<<"enter your baht currency: ";
                    cin>>baht;
                        swiss= baht * 0.025;
                            cout<<baht<<" baht equal to "<<swiss<<" swiss.\n\n"<<endl;
    }
    

}
double dong(){
    char luy1;
       cout<<"******************* Type of currency u need ********************* \n";
    cout<<"D for dollar\n";
    cout<<"R for riel\n";
    cout<<"B for baht\n";
    cout<<"E for euro\n";
    cout<<"Y for yuan\n";
    cout<<"S for swiss\n";
    cout<<"\nenter a character: ";
    cin >>luy1;
     if(luy1 == 'D' || luy1 =='d'){
        long double dong;
            long double dollar;
                cout<<"enter your dong currency: ";
                    cin>>dong;
                        dollar= dong *0.000041;
                            cout<<dong<<" dong equal to "<<dollar<<" dollar.\n\n"<<endl;
    }
    if(luy1 == 'r' || luy1 =='R'){
        long double dong;
            long double riel;
                cout<<"enter your dong currency: ";
                    cin>>dong;
                        riel= dong * 0.17;
                            cout<<dong<<" dong equal to "<<riel<<" riel.\n\n"<<endl;
    }
    if(luy1 == 'b' || luy1 =='B'){
        long double dong;
            long double baht;
                cout<<"enter your dong currency: ";
                    cin>>dong;
                        baht= dong * 0.0014;
                            cout<<dong<<" dong equal to "<<baht<<" baht.\n\n"<<endl;
    }
    if(luy1 == 'E' || luy1 =='e'){
        long double dong;
            long double euro;
                cout<<"enter your dong currency: ";
                    cin>>dong;
                        euro= dong * 0.000038;
                            cout<<dong<<" dong equal to "<<euro<<" euro.\n\n"<<endl;
    }
    if(luy1 == 'Y' || luy1 =='y'){
        long double dong;
            long double yuan;
                cout<<"enter your dong currency: ";
                    cin>>dong;
                        yuan= dong * 0.00030;
                            cout<<dong<<" dong equal to "<<yuan<<" yuan.\n\n"<<endl;
    }
    if(luy1 == 'S' || luy1 =='s'){
        long double dong;
            long double swiss;
                cout<<"enter your dong currency: ";
                    cin>>dong;
                        swiss= dong * 0.000037;
                            cout<<dong<<" dong equal to "<<swiss<<" swiss.\n\n"<<endl;
    }
    

}
double euro(){
    char luy1;
       cout<<"******************* Type of currency u need ********************* \n";
    cout<<"D for dollar\n";
    cout<<"R for riel\n";
    cout<<"B for baht\n";
    cout<<"V for dong\n";
    cout<<"Y for yuan\n";
    cout<<"S for swiss\n";
    cout<<"\nenter a character: ";
    cin >>luy1;
    if(luy1 == 'D' || luy1 =='d'){
        long double euro;
            long double dollar;
                cout<<"enter your euro currency: ";
                    cin>>euro;
                        dollar= euro *1.09 ;
                            cout<<euro<<" euro equal to "<<dollar<<" dollar.\n\n"<<endl;
    }
    if(luy1 == 'r' || luy1 =='R'){
        long double euro;
            long double riel;
                cout<<"enter your euro currency: ";
                    cin>>euro;
                        riel= euro * 4,483.19;
                            cout<<euro<<" euro equal to "<<riel<<" riel.\n\n"<<endl;
    }
    if(luy1 == 'b' || luy1 =='B'){
        long double euro;
            long double baht;
                cout<<"enter your euro currency: ";
                    cin>>euro;
                        baht= euro * 38.16;
                            cout<<euro<<" euro equal to "<<baht<<" baht.\n\n"<<endl;
    }
    if(luy1 == 'v' || luy1 =='V'){
        long double euro;
            long double dong;
                cout<<"enter your euro currency: ";
                    cin>>euro;
                        dong= euro * 26410.63;
                            cout<<euro<<" euro equal to "<<dong<<" dong.\n\n"<<endl;
    }
    if(luy1 == 'Y' || luy1 =='y'){
        long double euro;
            long double yuan;
                cout<<"enter your euro currency: ";
                    cin>>euro;
                        yuan= euro *7.77;
                            cout<<euro<<" euro equal to "<<yuan<<" yuan.\n\n"<<endl;
    }
    if(luy1 == 'S' || luy1 =='s'){
        long double euro;
            long double swiss;
                cout<<"enter your euro currency: ";
                    cin>>euro;
                        swiss= euro * 0.96;
                            cout<<euro<<" euro equal to "<<swiss<<" swiss.\n\n"<<endl;
    }
}
double yuan(){
    char luy1;
       cout<<"******************* Type of currency u need ********************* \n";
    cout<<"D for dollar\n";
    cout<<"R for riel\n";
    cout<<"B for baht\n";
    cout<<"V for dong\n";
    cout<<"E for euro\n";
    cout<<"S for swiss\n";
    cout<<"\nenter a character: ";
    cin >>luy1;
    if(luy1 == 'D' || luy1 =='d'){
        long double yuan;
            long double dollar;
                cout<<"enter your yuan currency: ";
                    cin>>yuan;
                        dollar= yuan *0.14;
                            cout<<yuan<<" yuan equal to "<<dollar<<" dollar.\n\n"<<endl;
    }
    if(luy1 == 'r' || luy1 =='R'){
        long double yuan;
            long double riel;
                cout<<"enter your yuan currency: ";
                    cin>>yuan;
                        riel= yuan * 571.43;
                            cout<<yuan<<" yuan equal to "<<riel<<" riel.\n\n"<<endl;
    }
    if(luy1 == 'b' || luy1 =='B'){
        long double yuan;
            long double baht;
                cout<<"enter your yuan currency: ";
                    cin>>yuan;
                        baht= yuan * 4.98;
                            cout<<yuan<<" yuan equal to "<<baht<<" baht.\n\n"<<endl;
    }
    if(luy1 == 'v' || luy1 =='V'){
        long double yuan;
            long double dong;
                cout<<"enter your yuan currency: ";
                    cin>>yuan;
                        dong= yuan *3364.30;
                            cout<<yuan<<" yuan equal to "<<dong<<" dong.\n\n"<<endl;
    }
    if(luy1 == 'e' || luy1 =='E'){
        long double yuan;
            long double euro;
                cout<<"enter your yuan currency: ";
                    cin>>yuan;
                        euro= yuan *0.13;
                            cout<<yuan<<" yuan equal to "<<euro<<" euro.\n\n"<<endl;
    }
    if(luy1 == 'S' || luy1 =='s'){
        long double yuan;
            long double swiss;
                cout<<"enter your yuan currency: ";
                    cin>>yuan;
                        swiss= yuan * 0.12;
                            cout<<yuan<<" yuan equal to "<<swiss<<" swiss.\n\n"<<endl;
    }

}
double swiss(){
    char luy1;
       cout<<"******************* Type of currency u need ********************* \n";
    cout<<"D for dollar\n";
    cout<<"R for riel\n";
    cout<<"B for baht\n";
    cout<<"V for dong\n";
    cout<<"E for euro\n";
    cout<<"Y for yuan\n";
    cout<<"\nenter a character: ";
    cin >>luy1;
    if(luy1 == 'D' || luy1 =='d'){
        long double swiss;
            long double dollar;
                cout<<"enter your swiss currency: ";
                    cin>>swiss;
                        dollar= swiss *1.13;
                            cout<<swiss<<" swiss equal to "<<dollar<<" dollar.\n\n"<<endl;
    }
    if(luy1 == 'r' || luy1 =='R'){
        long double swiss;
            long double riel;
                cout<<"enter your swiss currency: ";
                    cin>>swiss;
                        riel= swiss * 4643.81;
                            cout<<swiss<<" swiss equal to "<<riel<<" riel.\n\n"<<endl;
    }
    if(luy1 == 'b' || luy1 =='B'){
        long double swiss;
            long double baht;
                cout<<"enter your swiss currency: ";
                    cin>>swiss;
                        baht= swiss * 39.50;
                            cout<<swiss<<" swiss equal to "<<baht<<" baht.\n\n"<<endl;
    }
    if(luy1 == 'v' || luy1 =='V'){
        long double swiss;
            long double dong;
                cout<<"enter your swiss currency: ";
                    cin>>swiss;
                        dong= swiss *27349.45;
                            cout<<swiss<<" swiss equal to "<<dong<<" dong.\n\n"<<endl;
    }
    if(luy1 == 'e' || luy1 =='E'){
        long double swiss;
            long double euro;
                cout<<"enter your swiss currency: ";
                    cin>>swiss;
                        euro= swiss *1.04;
                            cout<<swiss<<" swiss equal to "<<euro<<" euro.\n\n"<<endl;
    }
    if(luy1 == 'y' || luy1 =='Y'){
        long double swiss;
            long double yuan;
                cout<<"enter your swiss currency: ";
                    cin>>swiss;
                    if (swiss >= 2)
                    {
                        yuan= swiss * 8.13;
                            cout<<swiss<<" swisses equal to "<<yuan<<" yuans.\n\n"<<endl;
                    }
                        yuan= swiss * 8.13;
                            cout<<swiss<<" swiss equal to "<<yuan<<" yuan.\n\n"<<endl;
    }
}

