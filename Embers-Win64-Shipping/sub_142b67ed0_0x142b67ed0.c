// 函数: sub_142b67ed0
// 地址: 0x142b67ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_10
sub_142a53cb0(arg1, &arg_10)
int64_t result = 0
int64_t rcx = 0
bool cond:0_1

while (true)
    char rdx_1 = *(&arg_10 + rcx)
    rcx += 1
    char temp0_1 = *(rcx + 0x143671d7f)
    cond:0_1 = rdx_1 u<= temp0_1
    
    if (rdx_1 != temp0_1)
        break
    
    if (rcx == 4)
        cond:0_1 = rdx_1 u<= *(rcx + 0x143671d7f)
        break

if (not(cond:0_1))
    bool cond:1_1
    
    while (true)
        char rcx_1 = *(&arg_10 + result)
        result += 1
        char temp1_1 = *(arg2 + result - 1)
        cond:1_1 = rcx_1 u> temp1_1
        
        if (rcx_1 != temp1_1)
            break
        
        if (result == 4)
            cond:1_1 = rcx_1 u> *(arg2 + result - 1)
            break
    
    if (not(cond:1_1))
        result.b = 1
        return result

result.b = 0
return result
