// 函数: sub_141f7f6d0
// 地址: 0x141f7f6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg1 + 0x78))
int32_t rbx = 0

if (rax.d s> 0)
    int64_t r8_1 = 0
    int32_t* rax_2 = *(arg1 + 0x70) + 4
    
    while (not(arg3 f<= *rax_2))
        rbx += 1
        r8_1 += 1
        rax_2 = &rax_2[7]
        
        if (r8_1 s>= rax)
            break

int32_t rsi = *(arg1 + 0x78)
int32_t var_34 = arg3
int32_t zmm3
int32_t var_30 = zmm3
char var_36 = 0
int128_t var_2c = zx.o(0)
*(arg1 + 0x78) = rsi + 1

if (rsi + 1 s> *(arg1 + 0x7c))
    sub_1405c50f0(arg1 + 0x70)

int64_t r15 = sx.q(rbx)
int64_t r14 = r15 * 0x1c
int64_t rdx_2 = *(arg1 + 0x70) + r14
memmove(rdx_2 + 0x1c, rdx_2, (rsi - rbx) * 0x1c)
uint128_t* rcx_2 = *(arg1 + 0x70)
*(rcx_2 + r14) = 0.o
*(rcx_2 + r14 + 0x10) = 0
*(rcx_2 + r14 + 0x18) = 0

if (rbx s> 0 && arg4 != 0)
    int64_t rcx_3 = *(arg1 + 0x70)
    uint128_t zmm1 = *(r14 + rcx_3 + 8)
    arg3 = *(r15 * 0x1c + rcx_3 - 0x14)
    uint128_t zmm0
    zmm0.d = zmm1.d f- arg3
    
    if (not(zmm0.d f<= 180f))
        do
            zmm1.d = zmm1.d f+ -360f
            zmm0.d = zmm1.d f- arg3
        while (zmm0.d f> 180f)
    
    zmm0.d = zmm1.d f- arg3
    
    if (not(zmm0.d f>= -180f))
        do
            zmm1.d = zmm1.d f+ 360f
            zmm0.d = zmm1.d f- arg3
        while (zmm0.d f< -180f)
    
    *(r14 + rcx_3 + 8) = zmm1.d

int32_t arg_30
sub_141f7f180(arg1 + 8, &arg_30, rbx)
*arg2 = arg_30
return arg2
