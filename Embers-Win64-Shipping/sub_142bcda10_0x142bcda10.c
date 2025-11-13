// 函数: sub_142bcda10
// 地址: 0x142bcda10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15 = zx.q(arg4)
int64_t rbp = arg3
int64_t rsi = sx.q(arg2)

if (arg2 s< 0 || rsi.d s>= *(arg1 + 0x1c))
    return 6

int64_t i = arg1[2]
int64_t rcx_1 = arg1[1] + r15

if (rcx_1 u> i)
    int64_t rdi_2 = arg3 - *arg1
    
    if (arg3 - *arg1 s< 0 || rdi_2 u>= i)
        rdi_2 = -1
    
    for (; i u< rcx_1; i = (i + 0x400 + (i u>> 2)) & 0xfffffffffffffc00)
    
    int32_t result = sub_142bd8340(arg1, i)
    
    if (result != 0)
        return result
    
    if (rdi_2 s>= 0)
        rbp = *arg1 + rdi_2

*(arg1[5] + (rsi << 3)) = *arg1 + arg1[1]
*(arg1[6] + (rsi << 2)) = r15.d
memcpy(*arg1 + arg1[1], rbp, r15.d)
arg1[1] += r15
return 0
