// 函数: sub_14099c090
// 地址: 0x14099c090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t result = __security_cookie ^ &var_118
int64_t result_1 = result
int64_t rsi = sx.q(arg2)
int32_t rdx = **arg1

if (rdx == 0)
    sub_1409a4950(arg1, rsi.d, arg3, arg4)
    sub_1409a4790(arg1, rsi.d, arg3, arg4)
    int32_t i = 0
    void* r15_1 = *(*(*arg1 + 0x40) + (rsi << 3) - 8)
    void* rsi_1 = *(r15_1 + 8)
    int32_t rbp_2 = *(rsi_1 + 0x14) * 2
    void var_d8
    void* var_e8_1 = &var_d8
    int32_t var_e0_1 = rbp_2
    int64_t rax_2 = 0
    int32_t var_dc_1 = 0x20
    int64_t var_58_1 = 0
    
    if (rbp_2 u> 0x20)
        rax_2 = j_sub_140a82f30(zx.q(rbp_2) << 2)
        var_58_1 = rax_2
        int64_t var_e8_2 = rax_2
        int32_t var_dc_2 = rbp_2
    
    if (*(rsi_1 + 8) s> 0)
        float (* r9_5)[0x4] = nullptr
        void* r8_5 = nullptr
        
        do
            int64_t rcx_12 = sx.q(*(r8_5 + *(r15_1 + 0xf0)))
            
            if (rcx_12.d != 0xffffffff)
                int64_t rdx_10 = rcx_12 * 3
                int32_t var_f0_1 = 0
                int64_t rcx_13 = *arg4
                *(rcx_13 + (rdx_10 << 2)) = (_mm_unpacklo_ps(zx.o(0), 0)).q
                *(rcx_13 + (rdx_10 << 2) + 8) = 0
                int64_t rax_4 = *arg3
                int64_t rcx_14 = *arg4
                float zmm1_1 = *(r9_5 + rax_4 + 4)
                float zmm2_1 = *(r9_5 + rax_4 + 8)
                float zmm0_1[0x4] = *(r9_5 + rax_4)
                zmm0_1[0] = zmm0_1[0] f+ *(rcx_14 + (rdx_10 << 2))
                zmm1_1 = zmm1_1 f+ *(rcx_14 + (rdx_10 << 2) + 4)
                zmm2_1 = zmm2_1 f+ *(rcx_14 + (rdx_10 << 2) + 8)
                *(rcx_14 + (rdx_10 << 2)) = zmm0_1[0]
                *(rcx_14 + (rdx_10 << 2) + 4) = zmm1_1
                *(rcx_14 + (rdx_10 << 2) + 8) = zmm2_1
            
            i += 1
            r8_5 += 4
            r9_5 = &(*r9_5)[3]
        while (i s< *(rsi_1 + 8))
        
        rax_2 = var_58_1
    
    result = j_sub_140a74f90(rax_2)
else if (rdx == 1)
    sub_1409a4950(arg1, rsi.d, arg3, arg4)
    sub_1409a3ef0(arg1, rsi.d, arg3, arg4)
    result = sub_1409a4d80(arg1, rsi.d, arg3, arg4)
else if (rdx == 2)
    sub_1409a4950(arg1, rsi.d, arg3, arg4)
    sub_1409a4340(arg1, rsi.d, arg3, arg4)
    result = sub_1409a55d0(arg1, rsi.d, arg3, arg4)

__security_check_cookie(result_1 ^ &var_118)
return result
