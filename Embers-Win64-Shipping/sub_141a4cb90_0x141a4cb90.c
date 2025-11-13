// 函数: sub_141a4cb90
// 地址: 0x141a4cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int128_t* var_1f8 = arg3
int128_t* var_1c8 = arg2
int128_t* var_1e8 = arg1
int128_t* result = sub_141a52670()

if (result != arg2)
    result = arg2[0x11].q
    
    if (result != 0)
        int32_t i_5
        float zmm6_1 = sub_141a529c0(arg2, &i_5)
        void* r9 = *arg4
        int32_t r15_1 = 0
        int32_t rdi_1 = data_143f29fb0
        int64_t rcx_1 = sx.q(*(r9 + 0x28))
        int32_t i_12
        int32_t i_11
        
        if (rcx_1.d != 0)
            void* rax_3 = *(r9 + 0x20)
            int64_t r10_1 = rcx_1 << 2
            int64_t rbx_1 = 0
            
            if (rax_3 != 0)
                r9 = rax_3
            
            void* r11_1 = r9
            uint64_t r10_2 = r10_1 u>> 2
            
            if (r9 u> r10_1 + r9)
                r10_2 = 0
            
            if (r10_2 != 0)
                do
                    int32_t rax_5 = *r11_1
                    
                    if (rdi_1 != 0)
                        int32_t rdi_3 = (rdi_1 - rax_5) ^ rax_5 u>> 0xd
                        int32_t r8_2 = (0x9e3779b9 - rdi_3 - rax_5) ^ rdi_3 << 8
                        int32_t rdi_7 = (rax_5 - r8_2 - rdi_3) ^ r8_2 u>> 0xd
                        int32_t rdx_4 = (rdi_3 - r8_2 - rdi_7) ^ rdi_7 u>> 0xc
                        int32_t r8_5 = (r8_2 - rdx_4 - rdi_7) ^ rdx_4 << 0x10
                        int32_t rdi_10 = (rdi_7 - r8_5 - rdx_4) ^ r8_5 u>> 5
                        int32_t rdx_7 = (rdx_4 - r8_5 - rdi_10) ^ rdi_10 u>> 3
                        int32_t r8_8 = (r8_5 - rdx_7 - rdi_10) ^ rdx_7 << 0xa
                        rdi_1 = (rdi_10 - r8_8 - rdx_7) ^ r8_8 u>> 0xf
                    else
                        rdi_1 = rax_5
                    
                    r11_1 += 4
                    rbx_1 += 1
                while (rbx_1 != r10_2)
            
            i_11 = i_5
            i_12 = i_11
            int64_t r11_2 = 0
            
            if (r10_2 != 0)
                do
                    int32_t i_14 = *r9
                    
                    if (i_12 != 0)
                        int32_t rbx_3 = (i_12 - i_14) ^ i_14 u>> 0xd
                        int32_t r8_12 = (0x9e3779b9 - rbx_3 - i_14) ^ rbx_3 << 8
                        int32_t rbx_7 = (i_14 - r8_12 - rbx_3) ^ r8_12 u>> 0xd
                        int32_t rdx_11 = (rbx_3 - r8_12 - rbx_7) ^ rbx_7 u>> 0xc
                        int32_t r8_15 = (r8_12 - rdx_11 - rbx_7) ^ rdx_11 << 0x10
                        int32_t rbx_10 = (rbx_7 - r8_15 - rdx_11) ^ r8_15 u>> 5
                        int32_t rdx_14 = (rdx_11 - r8_15 - rbx_10) ^ rbx_10 u>> 3
                        int32_t r8_18 = (r8_15 - rdx_14 - rbx_10) ^ rdx_14 << 0xa
                        i_12 = (rbx_10 - r8_18 - rdx_14) ^ r8_18 u>> 0xf
                    else
                        i_12 = i_14
                    
                    r9 += 4
                    r11_2 += 1
                while (r11_2 != r10_2)
        else
            i_11 = i_5
            i_12 = i_11
        
        int128_t zmm0_1 = *(arg4 + 0x28)
        i_5 = 0xffffffff
        int32_t var_204_1 = 0
        int64_t r9_1 = i_5.q
        float var_58_1 = zmm6_1
        int128_t var_1d8 = zmm0_1
        int128_t* var_1a0_1 = &arg5[0xa]
        void** const var_1a8 = &data_14302f418
        int32_t i_13 = i_12
        sub_141a37e10(&arg5[0xa], &var_1d8, &var_1a8, r9_1)
        sub_141a5ef30(*arg4, i_11)
        void* rax_31 = sub_141a52000(i_12, rdi_1, arg2, var_1f8, arg4[1])
        int64_t var_188
        sub_1405ac190(&var_188, rax_31 + 0x18)
        uint128_t zmm8 = zx.o(var_188)
        uint128_t* i_2
        uint128_t* i = i_2
        int64_t var_170
        int32_t rsi_1 = var_170.d
        int32_t rbx_14 = *(rax_31 + 0x94)
        uint64_t var_b8 = zmm8.q
        int32_t var_180
        int32_t var_b0_1 = var_180
        uint128_t* i_3 = i
        int32_t var_a0_1 = rsi_1
        int32_t var_9c_1 = var_170:4.d
        int32_t var_98_1 = rbx_14
        char var_90_1 = 1
        void var_158
        int64_t var_e8
        int64_t var_d8
        int64_t rcx_51
        
        if (*(arg2 + 0xe4) == 0)
            int128_t zmm7 = *(arg4 + 0x28)
            int128_t zmm6_2 = *(arg4 + 0x18)
            var_1e8.o = zmm7
            var_1c8.o = zmm6_2
            sub_141a2ee20(&var_158, arg4)
            int32_t var_f0_1 = var_180
            uint64_t var_f8_1 = zmm8.q
            sub_140747360(&var_e8, &i_3)
            int32_t var_c8_1 = rbx_14
            int128_t var_140_1 = zmm6_2
            int128_t var_130_1 = zmm7
            int128_t var_120_1 = *sub_141a6aa80(&var_b8, &var_1f8, &var_1c8)
            int128_t var_110_1 = *sub_141a6aa80(&var_b8, &var_1c8, &var_1e8)
            sub_141a36ac0(&var_158)
            int32_t var_d0
            int64_t rbx_15 = sx.q(var_d0)
            
            if (rbx_15.d s> 0)
                int64_t rcx_21 = var_d8
                
                if (*(rcx_21 + (rbx_15 << 2) - 4) != 0xffffffff)
                    int32_t rax_36 = (rbx_15 + 1).d
                    int32_t var_d0_1 = rax_36
                    int32_t var_cc
                    
                    if (rax_36 s> var_cc)
                        sub_1405a4cf0(&var_d8)
                        rcx_21 = var_d8
                    
                    *(rcx_21 + (rbx_15 << 2)) = 0xffffffff
            
            sub_141a4e430(result, &var_158, arg5)
            int64_t rcx_24 = var_d8
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            rcx_51 = var_e8
            goto label_141a4d497
        
        var_1d8.q = arg4[0x10]
        var_1d8:8.d = arg4[0x11].d
        sub_141a57190(&arg4[0xc], &var_1f8, &var_1d8)
        uint128_t zmm0_4 = zx.o(var_1f8)
        double zmm1_1[0x2] = var_188.d
        float zmm6_3 = 1f
        int32_t var_1f0
        var_1a0_1.d = var_1f0
        var_1a8 = zmm0_4.q
        i_13.q = 0
        int64_t var_190_1 = 0
        
        for (void* rax_41 = i + sx.q(rsi_1) * 0x14; i != rax_41; i += 0x14)
            zmm0_4 = *i
            
            if (not(zmm0_4.d f== 1f))
                zmm1_1[0].d = zmm1_1[0].d f* zmm0_4.d
        
        if (not(zmm1_1[0].d f== 0f))
            zmm6_3 = 1f f/ zmm1_1[0].d
        
        void* rax_43 = (*(*result + 0x280))(zmm0_4)
        int32_t var_204_2 = 0
        double zmm4_1 = fconvert.d(zmm6_3)
        var_1d8.q = 1
        zmm0_4 = *(rax_43 + 0xf8)
        int32_t i_7 = (_mm_bsrli_si128(zmm0_4, 8).q u>> 0x20).d - (zmm0_4.q u>> 0x20).d
            - *(arg2 + 0xe8) - arg2[0xe].d
        i_5 = i_7
        var_1f8 = i_5.q
        double temp0_2[0x2] = _mm_cvtps_pd(var_1f8:4.d[0])
        zmm0_4 = _mm_cvtepi32_pd(zx.q(i_7))
        temp0_2[0] = temp0_2[0] f+ zmm0_4.q
        temp0_2[0] = temp0_2[0] * zmm4_1
        int64_t rcx_32 = int.q(temp0_2[0])
        zmm0_4 = temp0_2
        double zmm2_1[0x2]
        
        if (rcx_32 != -0x8000000000000000)
            zmm2_1 = zx.o(0)
            zmm2_1[0] = float.d(rcx_32)
            
            if (not(zmm2_1[0] == temp0_2[0]))
                zmm0_4.q =
                    float.d(rcx_32 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_4, zmm0_4.q))) & 1))
        
        temp0_2[0] = temp0_2[0] f- zmm0_4.q
        int32_t i_8 = int.d(zmm0_4.q)
        zmm1_1 = _mm_cvtpd_ps(temp0_2)
        i_5 = i_8
        int32_t var_204_3
        
        if (zmm1_1[0].d f>= 0f)
            zmm1_1 = _mm_min_ss(zmm1_1[0].d, 0x3f7fffff)
            
            if (zmm1_1[0].d f>= 0f)
                goto label_141a4d0f0
            
            var_204_3 = 0
        else
            zmm1_1 = zx.o(0)
        label_141a4d0f0:
            
            if (zmm1_1[0].d f>= 0.99999994f)
                var_204_3 = 0x3f7fffff
            else
                var_204_3 = zmm1_1[0].d
        
        int128_t* r14_1 = var_1d8.q
        int128_t* rax_49 = i_5.q
        var_1d8.q = r14_1
        var_1f8 = rax_49
        
        if (i_8 s> 1 || (i_8 == 1 && var_1f8:4.d.d f>= var_1d8:4.d))
            i_8.b = 1
        else
            i_8.b = 0
        
        zmm0_4 = _mm_cvtepi32_pd(zx.q(*(arg2 + 0xec)))
        
        if (i_8.b != 0)
            r14_1 = rax_49
        
        var_1f8 = 1
        zmm0_4.q = zmm0_4.q f* zmm4_1
        int64_t rcx_34 = int.q(zmm0_4.q)
        
        if (rcx_34 != -0x8000000000000000)
            zmm1_1 = zx.o(0)
            zmm1_1[0] = float.d(rcx_34)
            
            if (not(zmm1_1[0] f== zmm0_4.q))
                zmm0_4.q =
                    float.d(rcx_34 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_4, zmm0_4.q))) & 1))
        
        int32_t rdx_26 = int.d(zmm0_4.q)
        var_1d8:4.d = 0
        var_1d8.d = rdx_26
        i_5.q = var_1d8.q
        var_1d8.q = r14_1
        zmm2_1 = var_1d8:4.d
        zmm2_1[0].d = zmm2_1[0].d f- var_204_3
        zmm2_1[0].d = zmm2_1[0].d f+ zmm2_1[0].d
        zmm2_1[0].d = zmm2_1[0].d f- 0.5f
        int32_t rcx_37 = int.d(zmm2_1[0].d) s>> 1
        int32_t i_9 = r14_1.d - rdx_26 + rcx_37
        zmm0_4 = _mm_cvtepi32_ps(zx.o(rcx_37))
        i_5 = i_9
        zmm2_1[0].d = zmm2_1[0].d f- zmm0_4.d
        
        if (not(zmm2_1[0].d f>= 0f))
            int32_t var_204_4 = 0
        else if (zmm2_1[0].d f>= 0.99999994f)
            int32_t var_204_6 = 0x3f7fffff
        else
            int32_t var_204_5 = zmm2_1[0].d
        
        int128_t* rsi_2 = var_1f8
        int128_t* rax_55 = i_5.q
        var_1d8.q = rsi_2
        var_1f8 = rax_55
        
        if (i_9 s<= 1 && i_9 == 1)
            zmm0_4 = var_1f8:4.d
        
        if (i_9 s> 1 || (i_9 == 1 && zmm0_4.d f>= var_1d8:4.d))
            rcx_37.b = 1
        else
            rcx_37.b = 0
        
        int64_t r12_1 = *(arg2 + 0x98)
        
        if (rcx_37.b != 0)
            rsi_2 = rax_55
        
        int32_t r12_3
        
        if (r12_1.b != 2)
            int64_t rax_56 = 0
            
            if (r12_1.b == 1)
                rax_56 = 4
            
            r12_3 = (r12_1 u>> 0x20).d + *(rax_56 + &data_14302eb90)
            goto label_141a4d2cb
        
        void* rax_58 = (*(*var_1e8 + 0x280))(zmm0_4)
        
        if (rax_58 != 0)
            var_1e8.o = *(rax_58 + 0xf8)
            int64_t var_1e0
            
            if (var_1e0.b != 2)
                int64_t rcx_39 = 0
                
                if (var_1e0.b == 1)
                    rcx_39 = 4
                
                r12_3 = (var_1e0 u>> 0x20).d + *(rcx_39 + &data_14302eb90)
            label_141a4d2cb:
                int64_t rcx_40 = var_1c8[9].q
                
                if (rcx_40.b != 2)
                    var_1f8:4.d = 0
                    int64_t rax_63 = 0
                    
                    if (rcx_40.b == 0)
                        rax_63 = 4
                    
                    var_1f8.d = (rcx_40 u>> 0x20).d + *(rax_63 + &data_14302eb88)
                    float zmm6_4 = sub_141a34d30(&i_5, var_1f8, &var_1a8)
                    int128_t* rax_64 = i_5.q
                    int32_t i_10 = i_5
                    var_1e8 = rsi_2
                    var_1c8 = rax_64
                    float zmm1_2 = var_1c8:4.d f+ var_1e8:4.d
                    var_1f8.d = r12_3
                    var_1f8:4.d = 0
                    var_1e8.b = 1
                    var_1e8:4.d = i_10
                    var_1e0.b = 0
                    int32_t i_4 = (int.d(zmm1_2 + zmm1_2 - zmm6_4) s>> 1) + i_10 + rsi_2.d
                    var_1e0:4.d = i_4
                    int32_t* rax_65
                    rax_65, zmm6_3 = sub_141a34d30(&var_1c8, var_1f8, &var_1a8)
                    int32_t i_1 = *rax_65
                    
                    if (i_10 s< i_1)
                        var_1c8 = r14_1
                        int128_t zmm7_1 = var_1c8:4.d
                        int32_t var_204_7 = 0
                        
                        do
                            if (sub_141a5adc0(&var_1e8, &arg4[3]) != 0
                                    && sub_141a5adc0(&var_1e8, &arg4[5]) != 0)
                                var_1c8.o = var_1e8.o
                                var_1e8.o = *(arg4 + 0x18)
                                sub_141a415b0(arg4, &var_158, &var_b8, &var_1e8, &var_1c8, r15_1)
                                zmm6_3, zmm7_1 = sub_141a4e430(result, &var_158, arg5)
                                int64_t rcx_49 = var_d8
                                
                                if (rcx_49 != 0)
                                    sub_140a74f90(rcx_49)
                                
                                int64_t rcx_50 = var_e8
                                
                                if (rcx_50 != 0)
                                    sub_140a74f90(rcx_50)
                            
                            i_5 = i_4
                            var_1c8 = i_5.q
                            int128_t zmm1_3
                            zmm1_3.d = zmm7_1.d f+ var_1c8:4.d
                            var_1f8:4.d = i_4
                            var_1f8.b = 1
                            var_1f0.b = 0
                            zmm1_3.d = zmm1_3.d f+ zmm1_3.d
                            zmm1_3.d = zmm1_3.d f- zmm6_3
                            int32_t var_1ec_1 = (int.d(zmm1_3.d) s>> 1) + r14_1.d + i_4
                            uint128_t zmm0_5 = var_1f8.o
                            var_1e8.o = zmm0_5
                            i_4 = var_1e0:4.d
                            
                            if ((_mm_bsrli_si128(zmm0_5, 8).q u>> 0x20).d s> i_1)
                                i_4 = i_1
                            
                            r15_1 += 1
                            var_1e0:4.d = i_4
                        while ((var_1e8 u>> 0x20).d s< i_1)
                    
                    rcx_51 = i_13.q
                label_141a4d497:
                    
                    if (rcx_51 != 0)
                        sub_140a74f90(rcx_51)
        
        result = sub_141a5bb90(*arg4)
        
        if (var_90_1 != 0)
            uint128_t* i_6 = i_3
            
            if (i_6 != 0)
                result = sub_140a74f90(i_6)

__security_check_cookie(rax_1 ^ &var_238)
return result
