// 函数: sub_141f7f880
// 地址: 0x141f7f880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x80))
int32_t rbx = 0

if (rax.d s> 0)
    int64_t r8_1 = 0
    int32_t* rax_1 = *(arg1 + 0x78)
    
    while (not(arg3.d f<= *rax_1))
        rbx += 1
        r8_1 += 1
        rax_1 = &rax_1[2]
        
        if (r8_1 s>= rax)
            break

int32_t rsi = *(arg1 + 0x80)
*(arg1 + 0x80) = rsi + 1

if (rsi + 1 s> *(arg1 + 0x84))
    sub_1405a4d70(arg1 + 0x78)

int64_t rbp = sx.q(rbx)
int64_t rdx_1 = *(arg1 + 0x78) + (rbp << 3)
memmove(rdx_1 + 8, rdx_1, (rsi - rbx) << 3)
int64_t rax_4 = *(arg1 + 0x78)
*(rax_4 + (rbp << 3)) = arg3.d
*(rax_4 + (rbp << 3) + 4) = arg4.d

if (rbx s> 0 && arg5 != 0)
    int64_t rax_5 = *(arg1 + 0x78)
    float zmm1 = *(rax_5 + (rbp << 3) + 4)
    arg3 = *(rax_5 + (rbp << 3) - 4)
    
    if (not(zmm1 f- arg3.d <= 180f))
        do
            zmm1 = zmm1 + -360f
        while (zmm1 f- arg3.d > 180f)
    
    if (not(zmm1 f- arg3.d >= -180f))
        do
            zmm1 = zmm1 + 360f
        while (zmm1 f- arg3.d < -180f)
    
    *(rax_5 + (rbp << 3) + 4) = zmm1

int32_t arg_30
sub_141f7f180(arg1 + 8, &arg_30, rbx)
*arg2 = arg_30
return arg2
