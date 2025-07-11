""" 

완주하지 못한 선수

수많은 마라톤 선수들이 마라톤에 참여하였습니다. 단 한 명의 선수를 제외하고는 모든 선수가 마라톤을 완주하였습니다.
마라톤에 참여한 선수들의 이름이 담긴 배열 participant와 완주한 선수들의 이름이 담긴 배열 completion이 주어질 때, 완주하지 못한 선수의 이름을
return 하도록 solution 함수를 작성해주세요.

"""

# 참가자 
p1 = ["leo", "kiki", "eden"]	
p2 = ["marina", "josipa", "nikola", "vinko", "filipa"]	
p3 = ["mislav", "stanko", "mislav", "ana"]	

# 완주자 
c1 = ["kiki", "eden"]
c2 = ["marina", "josipa", "nikola", "filipa"]	
c3 = ["mislav", "stanko", "ana"]	

def solution(participant, completion):
    dict_p = {}
    sum_hash = 0

    
    for part in participant:
        dict_p[hash(part)] = part
        sum_hash += hash(part)
    
    for comp in completion:
        sum_hash -= hash(comp)
    
    answer = dict_p[sum_hash]
    
    return answer
    
print(solution(participant=p1,completion=c1))