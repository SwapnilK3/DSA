def maxOperations(s: str) -> int:
        one_count=0
        result=0
        i=0
        while i < len(s):
            if s[i] == "1":
                one_count +=1
            else:
                while i+1 < len(s) and s[i+1] == "0":
                    i+=1
                result+=one_count
            i+=1

        return result
num = str(input("give number string: "))
print(maxOperations(s=num))