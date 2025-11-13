// 函数: sub_142a68590
// 地址: 0x142a68590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
zmm6.q = arg2.q f+ arg3
int64_t* rax
int64_t r8
rax, r8 = sub_142a69b20(arg1)
int32_t arg_10
int32_t arg_18

if (rax != 0)
    int64_t rdx_1 = *rax
    int64_t r9 = 0xc
    int64_t r8_1 = 4
    
    if (*(arg1 + 0xf8) == 1)
        r9 = 4
    
    if (*(arg1 + 0xfc) == 1)
        r8_1 = 0xc
    
    (*(rdx_1 + 0x98))(rax, rdx_1, r8_1, r9, &arg_18, &arg_10, arg4)
    return zx.q(arg_18 + arg_10)

int64_t* rbx = *(arg1 + 0xf0)
r8.b = 1
(*(*rbx + 0x18))(rbx, zmm6, r8, &arg_18, &arg_10, arg4)
int32_t rcx_2 = arg_10
int32_t rax_4

if (*(arg1 + 0xf8) != 1)
    rax_4 = arg_18
label_142a686c6:
    int32_t result = rax_4 + rcx_2
    
    if (*(arg1 + 0xfc) != 1)
        return result
    
    int64_t rdx_7 = *rbx
    zmm6.q = zmm6.q f- _mm_cvtepi32_pd(zx.q(result))
    (*(rdx_7 + 0x18))(rbx, zmm6, 0, &arg_18, &arg_10, arg4)
else
    int64_t rdx_2 = *rbx
    _mm_cvtepi32_pd(zx.q(rcx_2 + arg_18))
    int32_t var_38
    int32_t var_34
    (*(rdx_2 + 0x18))(rbx, rdx_2, 0, &var_38, &var_34, arg4)
    rax_4 = arg_18
    int32_t rdx_5 = rax_4 - var_38 - var_34
    rcx_2 = arg_10
    
    if (rdx_5 + rcx_2 s>= 0)
        goto label_142a686c6
    
    int64_t rax_5 = *rbx
    int64_t r8_2
    r8_2.b = 1
    arg2.q = _mm_cvtepi32_pd(zx.q(rdx_5 + rcx_2)).q f+ zmm6.q
    (*(rax_5 + 0x18))(rbx, arg2, r8_2, &arg_18, &arg_10, arg4)
return arg_18 + arg_10
