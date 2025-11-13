// 函数: sub_141349e20
// 地址: 0x141349e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(data_143eba330 + 4)

if (rcx s< 0)
    __builtin_memset(arg1, 0, 0x18)
else
    int32_t r10_1 = 3
    
    if (rcx s< 3)
        r10_1 = rcx
    
    if (r10_1 == 0)
        __builtin_memset(arg1, 0, 0x18)
    else
        uint128_t zmm0 = *(arg3 + 0x1138)
        zmm0.d = zmm0.d f* zmm0.d
        
        if (zmm0.d f>= 9.99999975e-06f)
        label_141349eae:
            int32_t zmm2 = *(arg3 + 0x1148)
            
            if (zmm2 f<= 9.99999994e-09f)
                __builtin_memset(arg1, 0, 0x18)
            else
                int32_t zmm3 = *(arg3 + 0x1134)
                
                if (zmm3 f<= 9.99999994e-09f)
                    __builtin_memset(arg1, 0, 0x18)
                else
                    int64_t r9 = *(data_143f10dc8 + 0x10)
                    void* rcx_1 = *(data_143f5b298 + 0x330)
                    
                    if (rcx_1 != 0)
                        void* rax_3 = *(rcx_1 + 0x78)
                        
                        if (rax_3 != 0)
                            int64_t rax_4 = *(rax_3 + 0x10)
                            
                            if (rax_4 != 0)
                                r9 = rax_4
                    
                    void* rax_5 = *(arg3 + 0x1150)
                    
                    if (rax_5 != 0)
                        void* rax_6 = *(rax_5 + 0x78)
                        
                        if (rax_6 != 0)
                            int64_t rax_7 = *(rax_6 + 0x10)
                            
                            if (rax_7 != 0)
                                r9 = rax_7
                    
                    int64_t rdx = *arg4
                    int32_t r15_1 = arg4[1].d
                    int32_t r14_1 = *(arg4 + 0xc)
                    uint64_t rcx_2 = zx.q(3 - r10_1) * 3
                    uint128_t zmm1 = *(arg5 + (rcx_2 << 3))
                    int32_t r11_1 = arg4[2].d
                    uint64_t var_98_1 = *(arg5 + (rcx_2 << 3) + 0x10)
                    int32_t var_74_1 = *(arg4 + 0x14)
                    uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 8)
                    int64_t var_70_1 = zmm1.q
                    int64_t rax_9 = _mm_bsrli_si128(zmm1, 8).q
                    int32_t var_68_1 = temp0_1.d
                    zmm1 = *(arg3 + 0x1138)
                    uint32_t var_64_1 = (rax_9 u>> 0x20).d
                    int32_t var_60_1 = var_98_1.d
                    uint32_t var_5c_1 = (var_98_1 u>> 0x20).d
                    int32_t var_a0_1 = 8
                    int32_t var_28_1 = zmm2
                    int32_t var_24_1 = zmm3
                    int32_t var_50_1 = 8
                    char var_1c_1 = 1
                    int64_t var_88 = rdx
                    int32_t var_80_1 = r15_1
                    int32_t var_7c_1 = r14_1
                    int32_t var_78_1 = r11_1
                    int64_t var_58_1 = r9
                    uint128_t var_38_1 = zmm1
                    uint128_t var_48_1 = (arg3 + 0x1158).o
                    int32_t var_20_1 = (*(arg3 + 0x114c)).d
                    
                    if (rdx == 0)
                    label_14134a00f:
                        zmm1 = *arg5
                        char var_1c_2 = 0
                        uint64_t var_98_2 = arg5[1].q
                        var_88 = zmm1.q
                        uint32_t var_7c_2 = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
                        int32_t var_78_2 = var_98_2.d
                        uint32_t var_74_2 = (var_98_2 u>> 0x20).d
                        int32_t var_80_2 = _mm_bsrli_si128(zmm1, 8).d
                    else if (r11_1 == r15_1 && *(arg4 + 0x14) == r14_1)
                        goto label_14134a00f
                    
                    sub_141349300(arg1, arg2, arg3, &var_88)
        else
            zmm0 = *(arg3 + 0x113c)
            zmm0.d = zmm0.d f* zmm0.d
            
            if (zmm0.d f>= 9.99999975e-06f)
                goto label_141349eae
            
            zmm0 = *(arg3 + 0x1140)
            zmm0.d = zmm0.d f* zmm0.d
            
            if (not(zmm0.d f< 9.99999975e-06f))
                goto label_141349eae
            
            __builtin_memset(arg1, 0, 0x18)

return arg1
