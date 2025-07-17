"""
전화번호부에 적힌 전화번호 중, 한 번호가 다른 번호의 접두어인 경우가 있는지 확인하려 합니다.
전화번호가 다음과 같을 경우, 구조대 전화번호는 영석이의 전화번호의 접두사입니다.

구조대 : 119
박준영 : 97 674 223
지영석 : 11 9552 4421
전화번호부에 적힌 전화번호를 담은 배열 phone_book 이 solution 함수의 매개변수로 주어질 때, 
어떤 번호가 다른 번호의 접두어인 경우가 있으면 false를 그렇지 않으면 true를 return 하도록 solution 함수를 작성해주세요.
"""

def solution(phone_book):
    phone_book.sort()  # 사전순 정렬
    print(phone_book)
    for i in range(len(phone_book) - 1):
        # 앞 번호가 뒤 번호의 접두어인지 확인
        if phone_book[i + 1].startswith(phone_book[i]):
            return False
    return True

p1 = ["119", "97674223", "1195524421"]
p2 = ["123","456","789"]
p3 = ["12","123","1235","567","88"]

print("solution about input1 =>",solution(phone_book=p1))
print("solution about input2 =>",solution(phone_book=p2))
print("solution about input3 =>",solution(phone_book=p3))