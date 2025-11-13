// 函数: sub_141fad110
// 地址: 0x141fad110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg1[5].b != 0)
    float arg_8
    (*(*arg1 + 0x268))(arg3, &arg_8, &arg1[6], arg2)
    void* r15_1 = &arg1[7]
    float arg_18
    (*(*arg1 + 0x268))(arg1, &arg_18, r15_1, arg2)
    void var_f8
    sub_140acc920(&var_f8, &arg1[0x13])
    float zmm1 = arg5 - arg4
    int64_t r8_3 = data_143f10dc8
    float arg_20 = arg_18 - arg_8
    void var_e8
    sub_1423fad30(&var_e8, &arg_8, r8_3, &arg_20, &var_f8)
    int32_t var_d4_1 = 2
    uint32_t zmm0_1[0x4] = sub_142409890(arg2, &var_e8)
    int32_t rcx_4 = *(arg1 + 0x8c)
    
    if (rcx_4 == 0)
        sub_141fae0c0(arg1, arg2, sub_141fad420(arg1, arg2))
    else if (rcx_4 == 1)
        sub_141fae0c0(arg1, arg2, zmm0_1)
        sub_141fad420(arg1, arg2)
    
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    zmm6_1, zmm7_1, zmm8_1 = sub_141fae8f0(arg1, arg2)
    
    if ((arg1[0x14].b & 2) == 0)
        result = sub_1423de050()
    else
        result = sub_1423de320()
    
    int32_t i = 0
    void* const* result_1 = result
    
    if (arg1[0xb].d s> 0)
        float* rdi_1 = nullptr
        int128_t var_48_1 = zmm6_1
        zmm6_1 = zx.o(0)
        int128_t var_58_1 = zmm7_1
        zmm7_1 = 0x3f800000
        int128_t var_68_1 = zmm8_1
        zmm8_1 = 0xbf800000
        
        do
            int64_t rcx_10 = arg1[0xa]
            float zmm2_1 = *(arg1 + 0x4c)
            float zmm4_1 = *(rdi_1 + rcx_10)
            
            if (zmm4_1 >= zmm2_1)
                break
            
            float zmm5_1 = zmm8_1.d / (arg1[9].d f- arg1[8].d) f* arg1[8].d
            
            if (zmm5_1 f>= zmm6_1.d)
                zmm5_1 = _mm_min_ss(zmm5_1, zmm7_1.d)
            else
                zmm5_1 = zmm6_1.d
            
            zmm4_1 = (zmm4_1 f- *(arg1 + 0x44)) / (zmm2_1 f- *(arg1 + 0x44))
            
            if (zmm4_1 f>= zmm6_1.d)
                zmm4_1 = _mm_min_ss(zmm4_1, zmm7_1.d)
            else
                zmm4_1 = zmm6_1.d
            
            float zmm3_1 = *r15_1
            float zmm0_3 = *(arg1 + 0x3c) f- *(arg1 + 0x34)
            zmm2_1 = zmm3_1 f- arg1[6].d
            int32_t var_110_1 = 1
            arg_8 = zmm3_1
            int64_t r15_2 = sx.q(i) * 5
            zmm0_3 = zmm0_3 * zmm4_1 f+ *(arg1 + 0x34)
            arg5 = zmm0_3
            arg4 = zmm0_3
            arg_18 = zmm2_1 * zmm5_1 f+ arg1[6].d
            zmm8_1 = sub_141faed40(arg1, arg2, &arg_18, &arg_8, rcx_10.d + 4 + (r15_2 << 3).d)
            (*(*arg1 + 0x268))(arg1, &arg_20, &arg_8, arg2)
            int64_t rax_6 = arg1[0xa]
            int16_t* r9_6
            
            if (*(rdi_1 + rax_6 + 0x20) == 0)
                r9_6 = &data_142d40450
            else
                r9_6 = *(rdi_1 + rax_6 + 0x18)
            
            var_110_1.q = rax_6 + (r15_2 << 3) + 4
            result, zmm6_1, zmm7_1 =
                sub_142409910(*(arg2 + 0x260), arg_20, zmm1, r9_6, result_1, 1, &data_14399f5e0)
            i += 1
            r15_1 = &arg1[7]
            rdi_1 = &rdi_1[0xa]
        while (i s< arg1[0xb].d)

return result
