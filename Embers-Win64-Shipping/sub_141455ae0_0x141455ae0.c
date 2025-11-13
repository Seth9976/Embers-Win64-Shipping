// 函数: sub_141455ae0
// 地址: 0x141455ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(data_143ed61e8 + 4)
int32_t rax

if (r9 s>= 0)
    rax = 4
    
    if (r9 s< 4)
        rax = r9
else
    rax = 0

int32_t zmm0 = *(arg1 + 0x12d0)

if (not(zmm0 f< 80f) && rax s>= 4)
    *arg2 = 4
    *(arg3 + 4) = 0xc
    return rax

if (not(zmm0 f< 60f) && rax s>= 3)
    *arg2 = 3
    *(arg3 + 4) = 4
    return rax

int32_t rax_1

if (not(zmm0 f< 40f))
    rax_1 = 2

if (zmm0 f< 40f || rax s< 2)
    rax_1 = 1

*arg2 = rax_1
*(arg3 + 4) = 1
return rax_1
