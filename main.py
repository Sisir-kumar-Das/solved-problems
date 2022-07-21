class ValidPassword:
    def __init__(self,password):
        self.password=password
    def characters_check(self,password):
        if len(password)<=5 and len(password)>=9:
            print("Please enter password that is 5 to 9charcters.")
    def small_case(self,password):
        str=password.lower()
        if password!=str:
            print("Please Enter all the character in lower")
    def digit_check(self,password):
        if password.isdigit()!=False:
            print("please enter atlease one digit in the string.")
class ConditionForPassword(ValidPassword):
    def checkpassword(self,password):
        self.password=password
        super().characters_check(password)
        super().small_case(password)
        super().digit_check(password)
p=input("please enter the password ")
s=ConditionForPassword(p)
s.checkpassword(p)

