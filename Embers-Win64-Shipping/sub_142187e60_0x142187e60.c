// 函数: sub_142187e60
// 地址: 0x142187e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r15
r15.b = 0
uint128_t zmm6 = data_143dbb200
uint128_t zmm7 = data_143dbb1f8
uint128_t zmm8 = data_143dbb1fc
uint128_t zmm9 = zmm6
uint128_t zmm10 = zmm7
uint128_t zmm11 = zmm8
void* rax_1

if ((*(arg1 + 0x431) & 0x20) != 0 && *(arg1 + 0xc0) == 0)
    rax_1 = sub_140d3c6e0(arg1 + 0x550)

if ((*(arg1 + 0x431) & 0x20) != 0 && *(arg1 + 0xc0) == 0 && rax_1 != 0)
    *arg2 = *(rax_1 + 0x100)
    arg2[1].q = *(rax_1 + 0x110)
    *(arg2 + 0x18) = *(rax_1 + 0x118)
else
    uint128_t var_c0_1
    uint64_t var_b0_1
    uint64_t var_94_1
    int32_t rax_3
    uint128_t zmm0
    uint128_t zmm1
    float zmm2[0x4]
    uint128_t zmm3
    uint128_t zmm4
    uint128_t zmm5
    
    if (data_143a2ecdc != 0)
        void* rcx_1 = *(arg1 + 0x408)
        uint128_t var_a0
        
        if (rcx_1 != 0 && (*(rcx_1 + 0xb0) & 2) != 0)
            uint64_t* rax_4 = sub_140ae2c60(rcx_1 + 0x88, &var_a0, arg3)
            var_c0_1 = *rax_4
            var_b0_1 = rax_4[2]
            goto label_14218815f
        
        int32_t i = 0
        
        if (*(arg1 + 0x608) s> 0)
            int64_t* rsi_1 = nullptr
            
            do
                int64_t* rcx_3 = *(rsi_1 + *(arg1 + 0x600))
                
                if (rcx_3 != 0 && rcx_3[0x23].d s> 0)
                    float (* rax_7)[0x4] = (*(*rcx_3 + 0x60))(rcx_3, &var_a0)
                    
                    if (r15.b == 0)
                        if ((*rax_7)[6].b != 0)
                            zmm1 = zx.o(rax_7[1][0].q)
                            zmm2 = *rax_7
                            float rax_8 = (*rax_7)[6]
                            r15 = zx.q(rax_8.b)
                            zmm8 = zmm1.d
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            int96_t var_c0_2 = zmm2[0].12
                            float var_a8_1 = rax_8
                            zmm9 = var_c0_2:8.d
                            zmm6 = zmm0
                            zmm11 = var_c0_2:4.d
                            zmm0 = zmm2
                            zmm10 = var_c0_2.d
                            zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0xff)
                    else if ((*rax_7)[6].b != 0)
                        zmm0 = *rax_7
                        
                        if (not(zmm10.d f<= zmm0.d))
                            zmm10 = zmm0
                        
                        zmm0 = (*rax_7)[1]
                        
                        if (not(zmm11.d f<= zmm0.d))
                            zmm11 = zmm0
                        
                        zmm0 = (*rax_7)[2]
                        
                        if (not(zmm9.d f<= zmm0.d))
                            zmm9 = zmm0
                        
                        zmm0 = (*rax_7)[3]
                        
                        if (not(zmm7.d f>= zmm0.d))
                            zmm7 = zmm0
                        
                        zmm0 = rax_7[1][0]
                        
                        if (not(zmm8.d f>= zmm0.d))
                            zmm8 = zmm0
                        
                        zmm0 = (*rax_7)[5]
                        
                        if (not(zmm6.d f>= zmm0.d))
                            zmm6 = zmm0
                
                i += 1
                rsi_1 = &rsi_1[1]
            while (i s< *(arg1 + 0x608))
        
        if (*(arg1 + 0x608) s> 0 && r15.b != 0)
            zmm1.d = zmm6.d f- zmm9.d
            zmm5.d = zmm7.d f- zmm10.d
            zmm3.d = zmm8.d f- zmm11.d
            zmm1.d = zmm1.d f* 0.0500000007f
            zmm5.d = zmm5.d f* 0.0500000007f
            zmm3.d = zmm3.d f* 0.0500000007f
            zmm9.d = zmm9.d f- zmm1.d
            zmm10.d = zmm10.d f- zmm5.d
            zmm0.d = zmm1.d f+ zmm6.d
            zmm4.d = zmm5.d f+ zmm7.d
            zmm2 = zmm3
            zmm2[0] = zmm2[0] f+ zmm8.d
            zmm11.d = zmm11.d f- zmm3.d
            int32_t var_98_2 = zmm9.d
            rax_3 = zmm0.d
            var_94_1 = (_mm_unpacklo_ps(zmm4, zmm2[0].q)).q
            zmm0.q = (_mm_unpacklo_ps(zmm10, zmm11.q)).q
            goto label_142188142
        
        zmm2 = arg3[1]
        int32_t var_c4_5 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
        *arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
        *(arg2 + 8) = var_c4_5
        *(arg2 + 0xc) = data_143dbb1f8.q
        *(arg2 + 0x14) = data_143dbb200
        *(arg2 + 0x18) = 0
    else
        var_94_1 = (_mm_unpacklo_ps(0x49800000, 0x49800000)).q
        int32_t var_d0_1 = 0xc9800000
        int32_t var_98_1 = 0xc9800000
        int32_t var_c4_1 = 0x49800000
        rax_3 = 0x49800000
        zmm0.q = (_mm_unpacklo_ps(0xc9800000, 0xc9800000)).q
    label_142188142:
        var_c0_1 = zmm0
        int32_t var_8c_1 = rax_3
        var_b0_1 = var_94_1
        char var_88_1 = 1
    label_14218815f:
        zmm6 = var_c0_1.d
        zmm4 = var_c0_1:8.d
        zmm0.d = var_b0_1:4.d.d f- zmm4.d
        zmm2 = var_b0_1.d
        zmm3.d = var_c0_1:0xc.d.d f- zmm6.d
        zmm5 = var_c0_1:4.d
        zmm2[0] = zmm2[0] f- zmm5.d
        zmm0.d = zmm0.d f* 0.5f
        zmm3.d = zmm3.d f* 0.5f
        zmm2[0] = zmm2[0] * 0.5f
        *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
        *(arg2 + 0x14) = zmm0.d
        zmm6.d = zmm6.d f+ *(arg2 + 0xc)
        zmm5.d = zmm5.d f+ arg2[1].d
        zmm4.d = zmm4.d f+ *(arg2 + 0x14)
        *arg2 = (_mm_unpacklo_ps(zmm6, zmm5.q)).q
        *(arg2 + 8) = zmm4.d
        zmm0 = arg2[1].d
        zmm2 = *(arg2 + 0xc)
        zmm1 = *(arg2 + 0x14)
        zmm0.d = zmm0.d f* zmm0.d
        zmm2[0] = zmm2[0] * zmm2[0]
        zmm1.d = zmm1.d f* zmm1.d
        zmm2[0] = zmm2[0] f+ zmm0.d
        zmm2[0] = zmm2[0] f+ zmm1.d
        *(arg2 + 0x18) = _mm_sqrt_ss(0, zmm2[0]).d

return arg2
