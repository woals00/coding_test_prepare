""" 
점심시간에 도둑이 들어, 일부 학생이 체육복을 도난당했습니다. 다행히 여벌 체육복이 있는 학생이 이들에게 체육복을 빌려주려 합니다. 
학생들의 번호는 체격 순으로 매겨져 있어, 바로 앞번호의 학생이나 바로 뒷번호의 학생에게만 체육복을 빌려줄 수 있습니다. 
예를 들어, 4번 학생은 3번 학생이나 5번 학생에게만 체육복을 빌려줄 수 있습니다. 체육복이 없으면 수업을 들을 수 없기 때문에 체육복을 적절히 빌려 
최대한 많은 학생이 체육수업을 들어야 합니다.

전체 학생의 수 n, 체육복을 도난당한 학생들의 번호가 담긴 배열 lost, 여벌의 체육복을 가져온 학생들의 번호가 담긴 배열 reserve가 매개변수로 주어질 때, 
체육수업을 들을 수 있는 학생의 최댓값을 return 하도록 solution 함수를 작성해주세요.
"""

def solution(n, lost, reserve):
    answer = n
    
    if lost == reserve:
        return answer
    else:
        answer -= len(lost)
    
        for i in reserve:
            if i in lost:
                lost.remove(i)
            if i-1 in lost or i+1 in lost:
                answer += 1
                
        if answer > n:
            answer = n

        return answer

    
test_cases = [
    (5, [2, 4], [1, 3, 5], 5),
    (5, [2, 4], [2, 3], 4),
    (7, [2, 3, 4], [1, 7], 5),
    (10, [1,2,3,4,5,6,7,8,9,10], [1,2,3,4,5,6,7,8,9,10], 10),
    (5, [2, 3], [3, 4], 4),
    (2, [1], [2], 2),
    (30, [2,4,6,8,10,12,14,16,18,20], [1,3,5,7,9,11,13,15,17,19], 30),
]

for i, (n, lost, reserve, expected) in enumerate(test_cases):
    result = solution(n, lost, reserve)
    print(f"TC {i+1}: {'PASS' if result == expected else 'FAIL'} (Expected: {expected}, Got: {result})")
