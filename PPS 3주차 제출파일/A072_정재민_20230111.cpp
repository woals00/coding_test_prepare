// pps 72번 leetcode day of the year

// 2023.01.11 수

//정답


#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s;

    string year, month, day;

    // int year, month, day;

    cin >> s;

    year = s.substr(0, 4);
    month = s.substr(5, 2);
    day = s.substr(8, 2);

    int sum = 0;
    int y = stoi(year);
    int d = stoi(day);


    if (stoi(year) % 4 != 0 || (stoi(year) % 100 == 0 && stoi(year) % 400 != 0))
    {
        if (month == "01")
            sum = sum + d;
        else if (month == "02")
            sum = 31 + d;
        else if (month == "03")
            sum = 59 + d;
        else if (month == "04")
            sum = 90 + d;
        else if (month == "05")
            sum = 120 + d;
        else if (month == "06")
            sum = 151 + d;
        else if (month == "07")
            sum = 181 + d;
        else if (month == "08")
            sum = 212 + d;
        else if (month == "09")
            sum = 243 + d;
        else if (month == "10")
            sum = 273 + d;
        else if (month == "11")
            sum = 304 + d;
        else
            sum = 334 + d;
    }
    else
    {
        if (month == "01")
            sum = sum + d;
        else if (month == "02")
            sum = 31 + d;
        else if (month == "03")
            sum = 60 + d;
        else if (month == "04")
            sum = 91 + d;
        else if (month == "05")
            sum = 121 + d;
        else if (month == "06")
            sum = 152 + d;
        else if (month == "07")
            sum = 182 + d;
        else if (month == "08")
            sum = 213 + d;
        else if (month == "09")
            sum = 244 + d;
        else if (month == "10")
            sum = 274 + d;
        else if (month == "11")
            sum = 305 + d;
        else
            sum = 335 + d;
    }


    cout << sum;


    // cout << month << endl;
    // cout << day << endl;
}



// vector<string> split(string str, char Delimiter) //문자열을 구분자를 기준으로 분리해주는 함수
// {
//     istringstream iss(str); // istringstream에 str을 담는다.
//     string buffer;          // 구분자를 기준으로 절삭된 문자열이 담겨지는 버퍼

//     vector<string> result;

//     // istringstream은 istream을 상속받으므로 getline을 사용할 수 있다.
//     while (getline(iss, buffer, Delimiter))
//     {
//         result.push_back(buffer); // 절삭된 문자열을 vector에 저장
//     }

//     return result;
// }
