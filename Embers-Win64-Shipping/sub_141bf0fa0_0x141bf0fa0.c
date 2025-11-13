// 函数: sub_141bf0fa0
// 地址: 0x141bf0fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int64_t* result = sub_1420faed0(arg1 + 0x390)
int64_t* result_1 = result
float var_2d8
void* var_2d0
int32_t var_2c8
int64_t var_2c4
float var_298[0x4]
float zmm3[0x4]

if (result == 0)
label_141bf189d:
    
    if (data_143e24361 != 0)
        int32_t var_2d4_6 = 1
        var_2d8 = 0f
        int32_t r11_2 = *(arg1 + 0x3d8)
        void* r9_11 = arg1 + 0x3c0
        var_2d0 = r9_11
        float rcx_43 = 0f
        var_2c8 = 0xffffffff
        int32_t r8_14 = 0
        var_2c4 = 0
        
        if (r11_2 != 0)
            void* rax_39 = *(r9_11 + 0x10)
            
            if (rax_39 != 0)
                r9_11 = rax_39
            
            int32_t temp0_11
            int32_t temp1_1
            temp0_11:temp1_1 = sx.q(r11_2 - 1)
            int32_t rdx_27 = *r9_11
            
            if (rdx_27 != 0)
            label_141bf192d:
                int32_t rax_46 = neg.d(rdx_27) & rdx_27
                uint64_t rflags_2
                int32_t temp0_12
                temp0_12, rflags_2 = _bit_scan_reverse(rax_46)
                int32_t var_2d4_7 = rax_46
                int32_t rax_47
                
                if (rax_46 == 0)
                    rax_47 = 0x20
                else
                    rax_47 = 0x1f - temp0_12
                
                var_2c4.d = r8_14 - rax_47 + 0x1f
                
                if (r8_14 - rax_47 + 0x1f s> r11_2)
                    var_2c4.d = r11_2
            else
                while (true)
                    int64_t rdx_28 = sx.q(rcx_43)
                    r8_14 += 0x20
                    rcx_43 += 1
                    var_2c4:4.d = r8_14
                    var_2d8 = rcx_43
                    
                    if (rdx_28.d s>= (temp1_1 + (temp0_11 & 0x1f)) s>> 5)
                        break
                    
                    rdx_27 = *(r9_11 + (rdx_28 << 2) + 4)
                    var_2c8 = 0xffffffff
                    
                    if (rdx_27 != 0)
                        goto label_141bf192d
                
                var_2c4.d = r11_2
        
        double zmm4_1[0x2] = var_2c8.o
        void* var_220_2 = arg1 + 0x3b0
        int16_t var_260_2 = 0
        zmm3 = var_2d8.o
        result = zmm3[0].q
        var_298 = (arg1 + 0x3b0).o
        double rcx_45 = zmm4_1[0]
        zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
        double var_278_2[0x2] = zmm4_1
        
        if ((rcx_45 u>> 0x20).d s< result[3].d)
            float i = zmm3[3]
            
            do
                var_2d8:1.b = 1
                var_2d0 = nullptr
                var_2c8 = 0
                var_2d8.b = data_1439ae51d
                int64_t* rcx_48 = *(*var_298[0].q + sx.q(i) * 0x50 + 0x20)
                (*(*rcx_48 + 0x1d8))(rcx_48, &var_2d8)
                zmm3[2] &= not.d(var_298[3])
                sub_14059bdd0(&var_298[2])
                result = zmm3[0].q
                i = zmm3[3]
            while (i s< result[3].d)
            
            if (var_260_2.b != 0 && var_260_2:1.b != 0)
                result = sub_141b99940(arg1 + 0x3b0, *(arg1 + 0x3b8) - *(arg1 + 0x3e4), 1)
else
    int64_t r8_1 = *result
    result = sub_142436920((*(r8_1 + 0x150))(result, arg3, r8_1))
    
    if (result == 0)
        goto label_141bf189d
    
    int64_t* rdi_1 = result[0x1e]
    
    if (rdi_1 != 0)
        int32_t rax_3 = rdi_1[1].d
        
        if (rax_3 != 0)
            rdi_1[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rdi_1 = nullptr
    
    int64_t* rcx_3 = nullptr
    
    if (rdi_1 != 0)
        rcx_3 = result[0x1d]
    
    void var_108
    (*(*rcx_3 + 8))(rcx_3, &var_108)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int128_t var_128
    __builtin_memset(&var_128, 0, 0x20)
    uint64_t r15
    r15.b = 0
    int64_t* rax_7 = sub_14226dd50(result_1)
    float var_1f8[0x4]
    int32_t var_1b8
    uint128_t zmm6
    float zmm7[0x4]
    double zmm8[0x2]
    float zmm9[0x4]
    double zmm10[0x2]
    int128_t zmm11
    float zmm12[0x4]
    int128_t zmm13
    int128_t zmm14
    
    if (rax_7 != 0 && rax_7[0xe] != 0)
        char rax_8 = (*(*rax_7 + 0x2b8))(rax_7, result[0x17], 0, &var_1b8)
        r15 = zx.q(rax_8)
        
        if (rax_8 != 0)
            float (* rax_9)[0x4]
            rax_9, zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
                sub_141b99680(&var_1b8, &var_298)
            var_1f8 = *rax_9
            double var_1e8_1[0x2] = rax_9[1]
            float var_1d8_1[0x4] = rax_9[2]
            double var_1c8_1[0x2] = rax_9[3]
    
    var_2d8 = 0f
    int32_t r11_1 = *(arg1 + 0x3d8)
    void* r9_2 = arg1 + 0x3c0
    int32_t var_2d4_1 = 1
    float rcx_9 = 0f
    var_2d0 = r9_2
    int32_t r8_2 = 0
    var_2c8 = 0xffffffff
    var_2c4 = 0
    
    if (r11_1 != 0)
        void* rax_10 = *(r9_2 + 0x10)
        
        if (rax_10 != 0)
            r9_2 = rax_10
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_5 = *r9_2
        
        if (rdx_5 != 0)
        label_141bf118b:
            int32_t rax_17 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_17)
            int32_t var_2d4_2 = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_1
            
            var_2c4.d = r8_2 - rax_18 + 0x1f
            
            if (r8_2 - rax_18 + 0x1f s> r11_1)
                var_2c4.d = r11_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_9)
                r8_2 += 0x20
                rcx_9 += 1
                var_2c4:4.d = r8_2
                var_2d8 = rcx_9
                
                if (rdx_6.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_2 + (rdx_6 << 2) + 4)
                var_2c8 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141bf118b
            
            var_2c4.d = r11_1
    
    double zmm4_2[0x2] = var_2c8.o
    void* var_220_1 = arg1 + 0x3b0
    int16_t var_260_1 = 0
    zmm3 = var_2d8.o
    float zmm0_2[0x4] = zmm4_2
    result = zmm3[0].q
    var_298 = (arg1 + 0x3b0).o
    double rcx_11 = zmm4_2[0]
    zmm0_2[0].q = (_mm_unpackhi_pd(zmm4_2, zmm4_2[0])).q
    float var_278_1[0x4] = zmm0_2
    
    if ((rcx_11 u>> 0x20).d s< result[3].d)
        float i_1 = zmm3[3]
        float var_68_1[0x4] = zmm9
        zmm9 = 0x3f000000
        int128_t var_a8_1 = zmm13
        zmm13 = zx.o(0)
        int128_t var_b8_1 = zmm14
        uint128_t var_38_1 = zmm6
        float var_48_1[0x4] = zmm7
        double var_58_1[0x2] = zmm8
        double var_78_1[0x2] = zmm10
        int128_t var_88_1 = zmm11
        float var_98_1[0x4] = zmm12
        
        do
            void* rsi_4 = sx.q(i_1) * 0x50 + *var_298[0].q
            void* rax_22 = sub_140d3c6e0(rsi_4 + 0xc)
            
            if (rax_22 == 0)
                sub_141bdb5f0(arg1, rsi_4 + 8)
                sub_141bdb1d0(var_278_1[2].q, i_1)
                var_260_1.b = 1
            else
                arg3 = *(rax_22 + 0x1d0)
                int32_t var_2a8 = arg3[0].d
                float temp0_3[0x4] = _mm_shuffle_ps(arg3, arg3, 0x55)
                int32_t var_2a0_1 = _mm_shuffle_ps(arg3, arg3, 0xaa)[0].d
                float var_2a4_1 = temp0_3[0]
                int32_t var_258
                char rax_23
                int128_t var_118
                
                if (r15.b != 0)
                    rax_23 = sub_1422f0230(&var_2a8, &var_118, &var_1f8, &var_258)
                
                if (r15.b == 0 || rax_23 == 0)
                    int64_t* rcx_40 = *(rsi_4 + 0x20)
                    var_2d8.b = data_1439ae51d
                    var_2d8:1.b = 1
                    var_2d0 = nullptr
                    var_2c8 = 0
                    (*(*rcx_40 + 0x1d8))(rcx_40, &var_2d8)
                else
                    arg3 = var_258
                    zmm7 = var_2a8
                    zmm8 = var_2a4_1
                    zmm7[0] = zmm7[0] f- var_1b8
                    int32_t var_1b4
                    zmm8[0].d = zmm8[0].d f- var_1b4
                    int32_t var_1b0
                    zmm6.d = var_2a0_1.d f- var_1b0
                    arg3[0].d = arg3[0].d f* 2f
                    arg3[0].d = arg3[0].d f+ zmm9[0]
                    int32_t rax_24 = int.d(arg3[0].d)
                    int32_t var_254
                    arg3 = var_254
                    arg3[0].d = arg3[0].d f* 2f
                    arg3[0].d = arg3[0].d f+ zmm9[0]
                    int64_t var_218
                    sub_141bdd090(result_1, 
                        _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(rax_24 s>> 1)), 
                            _mm_cvtepi32_ps(zx.o(int.d(arg3[0].d) s>> 1))[0])[0].q, 
                        &var_218, 0)
                    int32_t var_250
                    int32_t var_210
                    zmm6, zmm7, zmm8 = sub_141b8f080(result_1, var_218, &var_210, &var_250)
                    int64_t* rcx_17 = *(rsi_4 + 0x20)
                    zmm8[0].d = zmm8[0].d f* zmm8[0].d
                    var_2d8.b = data_1439ae520
                    var_2d8:1.b = 1
                    var_2d0 = nullptr
                    var_2c8 = 0
                    int64_t rax_29 = *rcx_17
                    zmm7[0] = zmm7[0] * zmm7[0]
                    zmm6.d = zmm6.d f* zmm6.d
                    zmm8[0].d = zmm8[0].d f+ zmm7[0]
                    zmm8[0].d = zmm8[0].d f+ zmm6.d
                    float temp0_8[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm8[0].d)
                    (*(rax_29 + 0x1d8))(rcx_17, &var_2d8)
                    void* rdi_3 = *(rsi_4 + 0x40)
                    
                    if (rdi_3 != 0)
                        zmm7 = 0x3f800000
                        int32_t var_ec
                        zmm11.d = var_ec.d f* var_250
                        int64_t* rcx_18 = *(rsi_4 + 0x18)
                        int32_t var_e4
                        zmm0_2 = var_e4
                        int32_t var_24c
                        zmm0_2[0] = zmm0_2[0] f* var_24c
                        int32_t var_e8
                        zmm10 = var_e8
                        zmm10[0].d = zmm10[0].d f* var_250
                        zmm8 = *(arg2 + 0x1c)
                        zmm11.d = zmm11.d f+ zmm0_2[0]
                        int32_t var_e0
                        zmm0_2 = var_e0
                        zmm0_2[0] = zmm0_2[0] f* var_24c
                        zmm8[0].d = zmm8[0].d f* *(arg2 + 0x28)
                        zmm9 = *(arg2 + 0x20)
                        zmm10[0].d = zmm10[0].d f+ zmm0_2[0]
                        zmm9[0] = zmm9[0] f* *(arg2 + 0x24)
                        int32_t var_dc
                        zmm11.d = zmm11.d f+ var_dc
                        int32_t var_d8
                        zmm10[0].d = zmm10[0].d f+ var_d8
                        zmm8[0].d = zmm8[0].d f- zmm9[0]
                        float zmm2_2 = zmm11.d f- *(arg2 + 0x2c)
                        zmm11.d = zmm11.d f- *(arg2 + 0x2c)
                        zmm7[0] = 1f f/ zmm8[0].d
                        zmm7[0] = zmm7[0] f* *(arg2 + 0x28)
                        zmm10[0].d = zmm10[0].d f- *(arg2 + 0x30)
                        zmm10[0].d = zmm10[0].d f- *(arg2 + 0x30)
                        zmm2_2 = zmm2_2 * zmm7[0]
                        zmm7[0] = zmm7[0] f* *(arg2 + 0x24)
                        zmm10[0].d = zmm10[0].d f* zmm7[0]
                        zmm7[0] = zmm7[0] f* zmm8[0].d
                        zmm7[0] = zmm7[0] * zmm9[0]
                        zmm10[0].d = zmm10[0].d f* zmm7[0]
                        zmm11.d = zmm11.d f* zmm7[0]
                        float var_2b0 = zmm2_2 f- zmm10[0].d
                        zmm10[0].d = zmm10[0].d f- zmm11.d
                        int32_t var_2ac_1 = zmm10[0].d
                        float var_2d4_4
                        
                        if (rcx_18 == 0)
                            char rax_30
                            
                            if (zmm13.d f!= *(arg1 + 0x3a0) || zmm13.d f!= *(arg1 + 0x3a4))
                                rax_30 = 0
                            else
                                rax_30 = 1
                            
                            var_2d8.b = rax_30
                            var_2d8:1.b = 1
                            var_2d0 = nullptr
                            var_2c8 = 0
                            sub_141b92620(rdi_3, &var_2d8)
                            sub_140745b20(&var_2d0)
                            zmm2_2 = *(arg1 + 0x3a0)
                            int32_t zmm3_1 = *(arg1 + 0x3a4)
                            var_2d8 = var_2b0
                            int32_t var_2d4_5 = var_2ac_1
                            var_2d0.d = zmm2_2
                            var_2d0:4.d = zmm3_1
                            var_2c8.b = 1
                            var_2c4 = 0
                            int32_t var_2b8_3 = 0
                            sub_141b780e0(rdi_3, rdi_3 + 0x20, &var_2d8, 1)
                            sub_140745b20(&var_2c4:4)
                            var_2c8.b = 1
                            var_2c4 = 0
                            int32_t var_2b8_4 = 0
                            var_2d8.o = zx.o(0)
                            sub_141b77f70(rdi_3, rdi_3 + 0x48, &var_2d8, 1)
                            sub_140745b20(&var_2c4:4)
                            float zmm1_2 = *(arg1 + 0x3ac)
                            var_2d8 = *(arg1 + 0x3a8)
                            var_2d4_4 = zmm1_2
                        else
                            void var_208
                            int64_t* rax_32 =
                                (*(*rcx_18 + 0x8e0))(rcx_18, &var_208, &var_108, &var_2b0)
                            void* rcx_19 = *(rsi_4 + 0x18)
                            var_2b0.q = *rax_32
                            int64_t rax_33 = *(rcx_19 + 0x440)
                            zmm8 = *(rcx_19 + 0x464)
                            zmm9 = *(rcx_19 + 0x468)
                            float temp0_9[0x4] = _mm_cvtepi32_ps(zx.o(rax_33.d))
                            bool cond:2_1 = temp0_9[0] f!= zmm13.d
                            zmm6 = _mm_cvtepi32_ps(zx.o((rax_33 u>> 0x20).d))
                            uint32_t rax_34
                            
                            if (cond:2_1)
                                if (*(rcx_19 + 0x460) != 0)
                                    rax_34.b = 1
                                else
                                    rax_34.b = 0
                            else if (zmm6.d f== zmm13.d || *(rcx_19 + 0x460) != 0)
                                rax_34.b = 1
                            else
                                rax_34.b = 0
                            
                            var_2d8.b = rax_34.b
                            var_2d8:1.b = 1
                            var_2d0 = nullptr
                            var_2c8 = 0
                            sub_141b92620(rdi_3, &var_2d8)
                            sub_140745b20(&var_2d0)
                            var_2d8 = var_2b0
                            int32_t var_2d4_3 = var_2ac_1
                            var_2d0.d = temp0_9[0]
                            var_2d0:4.d = zmm6.d
                            var_2c8.b = 1
                            var_2c4 = 0
                            int32_t var_2b8_1 = 0
                            sub_141b780e0(rdi_3, rdi_3 + 0x20, &var_2d8, 1)
                            sub_140745b20(&var_2c4:4)
                            var_2c8.b = 1
                            var_2c4 = 0
                            int32_t var_2b8_2 = 0
                            var_2d8.o = zx.o(0)
                            sub_141b77f70(rdi_3, rdi_3 + 0x48, &var_2d8, 1)
                            sub_140745b20(&var_2c4:4)
                            var_2d8 = zmm8[0].d
                            var_2d4_4 = zmm9[0]
                        
                        var_2d0.b = 1
                        var_2c8.q = 0
                        var_2c4:4.d = 0
                        sub_141b91c60(rdi_3, &var_2d8)
                        sub_140745b20(&var_2c8)
                        
                        if (data_1439ec464 != 0)
                            var_2d4_4.b = 1
                            var_2d8 = (temp0_8 ^ 0x80000000)[0]
                            var_2d0 = nullptr
                            var_2c8 = 0
                            sub_141b77cb0(rdi_3, rdi_3 + 0xa8, &var_2d8, 1)
                            sub_140745b20(&var_2d0)
                        
                        zmm9 = 0x3f000000
            
            zmm3[2] &= not.d(var_298[3])
            sub_14059bdd0(&var_298[2])
            result = zmm3[0].q
            i_1 = zmm3[3]
        while (i_1 s< result[3].d)
        
        if (var_260_1.b != 0 && var_260_1:1.b != 0)
            result = sub_141b99940(arg1 + 0x3b0, *(arg1 + 0x3b8) - *(arg1 + 0x3e4), 1)
__security_check_cookie(rax_1 ^ &var_2f8)
return result
