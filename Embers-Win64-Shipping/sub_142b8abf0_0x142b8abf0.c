// 函数: sub_142b8abf0
// 地址: 0x142b8abf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
char* i_1 = arg3
char* j = arg1
int64_t r9
int64_t arg_20 = r9

if (arg1 == 0 || arg2 u< 1)
    return 0xffffffff

char* i = i_1
int64_t* r8_1 = &i_1

while (i != 0)
    for (; j != &arg1[-1 + zx.q(arg2)]; j = &j[1])
        char rdx = *i
        i = &i[1]
        
        if (rdx == 0)
            break
        
        *j = rdx
    
    i = r8_1[1]
    r8_1 = &r8_1[1]

*j = 0
return j - arg1
