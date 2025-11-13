// 函数: sub_142677940
// 地址: 0x142677940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
(*(*arg1 + 0x18))()
int128_t* result = sub_1426075d0()

if (result == 0)
    result.b = 0
else
    arg1[0x52].d += 1
    int32_t zmm1 = *(arg1 + 0x284)
    void* rcx = arg1[0x1d]
    int32_t var_30 = arg1[0x50].d.d
    int32_t var_28_1 = arg1[0x51].d.d
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg1[4].d))
    int32_t var_18_1 = 0
    int32_t var_38 = 0xffffffff
    int32_t var_2c_1 = zmm1
    zmm0.d = zmm0.d f* arg1[5].d
    int32_t var_34 = 0xffffffff
    int32_t var_24_1 = zmm0.d
    int32_t var_20_1 = zmm0.d
    sub_142676a20(rcx, &var_38, &var_34)
    int32_t rbp_1 = 1 << var_38.b
    void* rcx_2 = arg1[0x1d]
    int32_t rax_4
    
    if ((1 & not.b(*(rcx_2 + 0x408))) == 0)
        rax_4 = *(rcx_2 + 0x40c)
    else
        float zmm2[0x4] = *(arg1 + 0xb4)
        float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(arg1[4].d))
        temp0_2[0] = temp0_2[0] f* arg1[5].d
        rax_4 = sub_1426760e0(&arg1[0x1b], temp0_2, zmm2)
    
    if (rax_4 s< 0 || rax_4 s> rbp_1)
        rax_4 = rbp_1
    
    int32_t rcx_4 = var_34
    int32_t rdi_1
    
    if (rcx_4 s< 0x20)
        rdi_1 = 1 << rcx_4.b
    else
        rdi_1 = 0x7fffffff
    
    int32_t var_18_2 = rdi_1
    *(arg1 + 0x8c) = rdi_1
    int32_t var_1c_1 = rax_4
    uint8_t rax_6
    
    if (rax_4 != 0)
        rax_6 = (sub_142611820(result, &var_30) u>> 0x1f).b
    
    if (rax_4 == 0 || rax_6 != 0)
        sub_142609270(result)
        result.b = 0
    else
        int32_t rax_7 = sub_142688b80(result)
        void* rcx_7 = arg1[0x1d]
        *(arg1 + 0xac) = rax_7
        sub_142696230(*(rcx_7 + 0x4a8), result)
        result.b = 1

__security_check_cookie(rax_1 ^ &var_58)
return result
