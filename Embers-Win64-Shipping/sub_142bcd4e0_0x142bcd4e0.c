// 函数: sub_142bcd4e0
// 地址: 0x142bcd4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0x3e8)
memset(arg1, 0, 0x448)
sub_142bcf000(arg1, arg2, arg3, arg4, arg5)
arg1[0x16] = rbp
int32_t rcx_1 = *(rbp + 0xa0)
*(arg1 + 0x3fc) = rcx_1
arg1[0x82] = *(rbp + 0x5b8)
int32_t rax_2

if (*(rbp + 0x60c) == 1)
    rax_2 = 0
else if (rcx_1 u>= 0x4d8)
    rax_2 = 0x8000
    
    if (rcx_1 u< 0x846c)
        rax_2 = 0x46b
else
    rax_2 = 0x6b

*(arg1 + 0x404) = rax_2
*(arg1 + 0x424) = arg6
arg1[0x87] = arg7
arg1[0x88] = arg8
return arg8
