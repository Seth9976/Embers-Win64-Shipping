// 函数: sub_141c3fb70
// 地址: 0x141c3fb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2[1].d
int32_t rsi = 0
int64_t r12 = *arg2
int32_t rdx = *(arg3 + 0xc)
arg3[1].d = 0
int32_t r8 = 0

if (i s> rdx)
    sub_140775b10(arg3, i)
    r8 = arg3[1].d
    rdx = *(arg3 + 0xc)

int32_t result = r8 + i
arg3[1].d = result

if (result s> rdx)
    result = sub_140775270(arg3)

uint64_t r15 = *arg3

while (i s> 0)
    int32_t i_1 = i
    int64_t rax = sx.q(rsi)
    
    if (*arg1 s<= i)
        i_1 = *arg1
    
    result = sub_141c41490(arg1, r12 + (rax << 2), i_1, r15 + (rax << 2))
    i -= i_1
    rsi += i_1

return result
