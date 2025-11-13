// 函数: sub_142c55200
// 地址: 0x142c55200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb0) == 0)
    *arg2 = 0xffffffff
    return 0

uint128_t var_28
uint64_t* rax = sub_142c59600(&var_28)
int64_t* rdx = *(arg1 + 0xb0)
uint128_t zmm6 = *rax
uint128_t var_38 = data_14401b080
int64_t* rax_1 = sub_142c6a240(&var_38, rdx)
*(arg1 + 0xb0) = rax_1
int64_t rcx_2 = zmm6.q
int64_t rax_2 = rax_1[4]

if (rax_2 s>= rcx_2)
    if (rax_2 s> rcx_2)
    label_142c55287:
        uint128_t zmm0 = *(rax_1 + 0x20)
        var_38 = zmm6
        var_28 = zmm0
        int32_t rax_4 = sub_142c595d0(&var_28, &var_38)
        *arg2 = rax_4
        
        if (rax_4 == 0)
            *arg2 = 1
        
        return 0
    
    int32_t rcx_3 = rax_1[5].d
    int32_t rdx_1 = _mm_bsrli_si128(zmm6, 8).d
    
    if (rcx_3 u>= rdx_1)
        int32_t rax_3
        rax_3.b = rcx_3 u> rdx_1
        
        if (rax_3 s> 0)
            goto label_142c55287

*arg2 = 0
return 0
