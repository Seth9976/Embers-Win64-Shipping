// 函数: sub_14213ee00
// 地址: 0x14213ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x410)
uint128_t zmm2

if (r10 == 0)
    zmm2 = arg3[1]
    int32_t var_60_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    *arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
    arg2[1].d = var_60_1
    *(arg2 + 0xc) = data_143dbb1f8.q
    *(arg2 + 0x14) = data_143dbb200
    arg2[3].d = 0
else
    int32_t zmm4 = data_143dbb1f8
    char r9 = 0
    zmm2 = data_143dbb1fc
    int32_t zmm3 = zmm4
    uint128_t zmm1 = data_143dbb200
    int32_t zmm5 = zmm2.d
    int64_t i_1 = sx.q(*(arg1 + 0x430))
    uint128_t zmm6 = zmm1
    int32_t var_4c_1 = zmm4
    int32_t var_48_1 = zmm2.d
    int32_t var_44_1 = zmm1.d
    int32_t var_58 = zmm4
    int32_t var_54_1 = zmm2.d
    int32_t var_50_1 = zmm1.d
    char var_40_1 = 0
    
    if (i_1 s> 0)
        int16_t* r11_1 = *(arg1 + 0x428)
        int64_t i
        
        do
            int32_t j = 0
            void* r8_2 = (zx.q(*r11_1) << 6) + *(r10 + 0x28)
            
            if (*(r8_2 + 0x36) u> 0)
                do
                    int64_t rax_5 = sx.q(*(*(r10 + 0x38) + sx.q(*(r8_2 + 0x10) + j) * 0x18)) * 3
                    int64_t rcx_2 = *(r10 + 0x58)
                    
                    if (r9 == 0)
                        r9 = 1
                        var_4c_1.q = *(rcx_2 + (rax_5 << 2))
                        zmm4 = var_4c_1
                        zmm2 = var_48_1
                        zmm3 = zmm4
                        zmm5 = zmm2.d
                        zmm1 = *(rcx_2 + (rax_5 << 2) + 8)
                        int32_t var_50_3 = zmm1.d
                        zmm6 = zmm1
                        var_58 = zmm4
                        int32_t var_54_3 = zmm2.d
                        char var_40_2 = 1
                    else
                        uint128_t zmm0 = *(rcx_2 + (rax_5 << 2))
                        
                        if (not(zmm3 f<= zmm0.d))
                            var_58 = zmm0.d
                            zmm3 = zmm0.d
                        
                        zmm0 = *(rcx_2 + (rax_5 << 2) + 4)
                        
                        if (not(zmm5 f<= zmm0.d))
                            int32_t var_54_2 = zmm0.d
                            zmm5 = zmm0.d
                        
                        zmm0 = *(rcx_2 + (rax_5 << 2) + 8)
                        
                        if (not(zmm6.d f<= zmm0.d))
                            int32_t var_50_2 = zmm0.d
                            zmm6 = zmm0
                        
                        zmm0 = *(rcx_2 + (rax_5 << 2))
                        
                        if (not(zmm4 f>= zmm0.d))
                            var_4c_1 = zmm0.d
                            zmm4 = zmm0.d
                        
                        zmm0 = *(rcx_2 + (rax_5 << 2) + 4)
                        
                        if (not(zmm2.d f>= zmm0.d))
                            var_48_1 = zmm0.d
                            zmm2 = zmm0
                        
                        zmm0 = *(rcx_2 + (rax_5 << 2) + 8)
                        
                        if (not(zmm1.d f>= zmm0.d))
                            int32_t var_44_2 = zmm0.d
                            zmm1 = zmm0
                    
                    j += 1
                while (j s< zx.d(*(r8_2 + 0x36)))
            
            r11_1 = &r11_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    uint64_t var_38[0x4]
    sub_1419ead80(arg2, sub_140ae2c60(&var_58, &var_38, arg3))
return arg2
