// 函数: sub_142c6ca70
// 地址: 0x142c6ca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char i = *arg1

if (i != 0)
    while (i != 0x3a)
        i = arg1[1]
        arg1 = &arg1[1]
        
        if (i == 0)
            break

char* string = &arg1[1]

if (*arg1 == 0)
    string = arg1

char i_1 = *string

while (i_1 != 0)
    if (isspace(zx.d(i_1)) == 0)
        break
    
    i_1 = string[1]
    string = &string[1]

char* i_3 = strchr(string, 0xd)
char* i_2 = i_3

if (i_3 == 0)
    char* i_4 = strchr(string, (&i_3[0xa]).d)
    i_2 = i_4
    
    if (i_4 == 0)
        char* i_5 = strchr(string, 0)
        i_2 = i_5
        
        if (i_5 == 0)
            return i_5

for (; i_2 u> string; i_2 -= 1)
    if (isspace(zx.d(*i_2)) == 0)
        break

int64_t rbx = i_2 - string
int64_t rax_2 = data_143ccb898(rbx + 2)

if (rax_2 == 0)
    return rax_2

memcpy(rax_2, string, rbx.d + 1)
*(rax_2 + rbx + 1) = 0
return rax_2
