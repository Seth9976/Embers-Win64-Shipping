// 函数: sub_142416c50
// 地址: 0x142416c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint128_t zmm6 = zx.o(arg4)
int128_t zmm7
int128_t var_28 = zmm7

if (not(zmm6.d f<= 0f) && not(zmm6.q:4.d[0] <= 0f))
    int32_t* rbx_1 = *(arg1 + 0x260)
    
    if (rbx_1 != 0)
        int64_t rax
        
        if (arg2 == 0)
            rax = data_143f10dc8
        else
            rax = *(arg2 + 0x78)
        
        float zmm1[0x4] = arg5
        int64_t zmm2 = arg6
        float zmm4 = zmm1[0] + arg7
        int32_t var_68_1 = 0x3f800000
        int64_t var_50_1 = rax
        int64_t var_64_1 = (_mm_unpacklo_ps(zmm1, zmm2)).q
        float zmm0[0x4] = *arg9
        void** const var_a8 = &data_1433443d0
        float var_80_1[0x4] = zmm0
        int64_t var_a0_1 = arg3
        float var_5c_1 = zmm4
        int64_t var_40_1 = (_mm_unpacklo_ps(zx.o(0), arg11[0].q)).q
        int64_t var_34_1 = arg12
        float var_58_1 = zmm2.d + arg8
        int32_t var_98_1 = 0
        char var_90_1 = 0
        int64_t var_88_1 = 0
        uint64_t var_70_1 = zmm6.q
        int64_t var_48_1 = 0
        int32_t var_b0_1 = 0
        int32_t var_38_1 = 0
        int32_t var_94_1 = sub_142402aa0(arg10)
        result = sub_142408260(&var_a8, rbx_1)
        
        if (rbx_1[0x28] == 1)
            return sub_14240e030(rbx_1, 0)

return result
