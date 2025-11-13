// 函数: sub_141948d30
// 地址: 0x141948d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* result = (*(*arg3 + 8))(arg3)
void* result_2 = result

if (result != 0)
    int64_t rdx = sx.q(*(arg3 + 0x3c))
    void* r9 = result + 0x70
    char r8 = 0
    uint32_t i_8 = 0
    result = rdx * 0x1c + &data_143efeda0
    void* var_e8 = r9
    char r10_1 = 0
    int32_t var_124 = 0
    int32_t var_120 = 0
    void* result_1 = result
    char var_127_1 = 0
    char var_128_1 = 0
    char var_126_1 = 0
    
    if (rdx.d - 1 u> 0x2a)
        goto label_141948e32
    
    result = zx.q(lookup_table_1419497d0[sx.q(rdx.d - 1)])
    int32_t rbx_1
    char r12_1
    
    switch (result)
        case nullptr
            var_127_1 = 1
        label_141948e3b:
            rbx_1 = 0x8ce0
            r12_1 = 0
        label_141948e43:
            bool cond:1_1 = *(r9 + 0x1c) != 0x8ce0
            int32_t var_118 = rbx_1
            uint32_t var_11c = zx.d(*(arg6 + 0x11))
            uint32_t* var_158_1
            void* var_150_1
            int32_t rdx_2
            int64_t* r8_1
            
            if (cond:1_1)
                r8_1 = nullptr
                var_150_1 = r9
                rdx_2 = 0
                var_158_1 = nullptr
            else
                var_150_1 = nullptr
                var_158_1 = &var_11c
                r8_1 = &var_e8
                rdx_2 = 1
            
            void* var_110
            var_110.d = sub_14193c970(arg1, rdx_2, r8_1, nullptr, var_158_1, var_150_1)
            int32_t var_148
            int32_t var_140
            int32_t var_138
            int32_t var_130
            
            if (arg3[7].d u> 1)
                data_143f00108(1, &var_124)
                data_143f000f8(0x8d40, zx.q(var_124))
                data_143f000d8(1, &var_120)
                data_143f000c8(0x8d41, zx.q(var_120))
                data_143f000e0(0x8d41, zx.q(*result_1), zx.q(*(result_2 + 0x60)), 
                    zx.q(*(result_2 + 0x64)))
                data_143f000c8(0x8d41, 0)
                data_143f00138(0x8d40, zx.q(rbx_1), 0x8d41, zx.q(var_120))
                data_143f000f8(0x8ca8, zx.q(var_110.d))
                int32_t rax_12
                
                if (var_128_1 == 0)
                    rax_12 = 0x4000
                else
                    rax_12 = (zx.d(r12_1) << 0xa) + 0x100
                
                var_130 = 0x2600
                var_138 = rax_12
                var_140 = *(result_2 + 0x64)
                var_148 = *(result_2 + 0x60)
                var_150_1.d = 0
                var_158_1.d = 0
                data_143f00150(0, 0)
                var_110.d = var_124
            
            int32_t rbx_2 = 0
            uint32_t rax_15 = arg4[3] - arg4[1]
            int32_t r12_3 = arg4[2] - *arg4
            int32_t rcx_4 = *(arg5 + 0xc)
            uint64_t rsi_1 = zx.q(rax_15 * r12_3)
            var_11c = rax_15
            arg5[1].d = 0
            uint64_t r14_1 = zx.q((rsi_1 << 2).d)
            
            if (rcx_4 != r14_1.d)
                sub_1405c5510(arg5, r14_1.d)
                rcx_4 = *(arg5 + 0xc)
                rbx_2 = arg5[1].d
            
            int32_t rax_16 = rbx_2 + r14_1.d
            arg5[1].d = rax_16
            
            if (rax_16 s> rcx_4)
                sub_1405daba0(arg5)
            
            char* rbx_4 = sx.q(rbx_2) + *arg5
            int32_t r13_1 = var_110.d
            data_143f000f8(0x8ca8, zx.q(r13_1))
            uint64_t rcx_7
            
            if (var_128_1 == 0 && var_126_1 == 0)
                rcx_7 = 0x405
            
            if (var_128_1 != 0 || var_126_1 != 0 || r13_1 != 0)
                rcx_7 = zx.q(var_118)
            
            float zmm6[0x4]
            float var_58_1[0x4] = zmm6
            data_143effae0(rcx_7)
            data_143effac0(0xd05, 1)
            float zmm1_1[0x4]
            float zmm2[0x4]
            float zmm3[0x4]
            
            if (var_128_1 != 0)
                float* rax_17 = sub_140a82f30(sx.q(r14_1.d), 0)
                var_148.q = rax_17
                var_150_1.d = 0x1406
                var_158_1.d = 0x1902
                data_143effae8(zx.q(*arg4), zx.q(arg4[1]), zx.q(r12_3), zx.q(var_11c), var_158_1, 
                    var_150_1, var_148, var_140, var_138, var_130, var_128_1)
                float zmm5_1[0x4] = 0x7f7fffff
                float (* rcx_10)[0x4] = rax_17
                zmm6 = 0x800000
                int32_t i = 0
                float zmm0_1[0x4]
                
                if (rsi_1.d s> 0)
                    float zmm4_1[0x4]
                    
                    if (rsi_1.d u>= 8)
                        int32_t rax_19 = rsi_1.d & 0x80000007
                        
                        if (rax_19 s< 0)
                            rax_19 = ((rax_19 - 1) | 0xfffffff8) + 1
                        
                        zmm2 = data_142ff88c0
                        zmm1_1 = data_142ff88b0
                        zmm3 = zmm2
                        zmm4_1 = zmm1_1
                        
                        do
                            zmm0_1 = *rcx_10
                            i += 8
                            zmm2 = _mm_min_ps(zmm2, zmm0_1)
                            zmm1_1 = _mm_max_ps(zmm1_1, zmm0_1)
                            zmm0_1 = rcx_10[1]
                            rcx_10 = &rcx_10[2]
                            zmm3 = _mm_min_ps(zmm3, zmm0_1)
                            zmm4_1 = _mm_max_ps(zmm4_1, zmm0_1)
                        while (i s< rsi_1.d - rax_19)
                        
                        float temp0_5[0x4] = _mm_max_ps(zmm1_1, zmm4_1)
                        float temp0_6[0x4] = _mm_min_ps(zmm2, zmm3)
                        temp0_5[0].q = temp0_5 u>> 0x40
                        float temp0_7[0x4] = _mm_max_ps(temp0_5, temp0_5)
                        temp0_6[0].q = temp0_6 u>> 0x40
                        float temp0_8[0x4] = _mm_min_ps(temp0_6, temp0_6)
                        float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xf5)
                        zmm6 = _mm_max_ss(temp0_7[0], temp0_9[0])
                        float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xf5)
                        zmm5_1 = _mm_min_ss(temp0_8[0], temp0_11[0])
                    
                    if (i s< rsi_1.d)
                        if (rsi_1.d - i s>= 4)
                            uint64_t rax_28 = zx.q(((rsi_1.d - i - 4) u>> 2) + 1)
                            uint64_t i_14 = zx.q(rax_28.d)
                            i += (rax_28 << 2).d
                            uint64_t i_1
                            
                            do
                                zmm4_1 = *rcx_10
                                zmm2 = (*rcx_10)[2]
                                float temp0_13[0x4] = _mm_min_ss(zmm4_1[0], zmm5_1[0])
                                float temp0_14[0x4] = _mm_max_ss(zmm4_1[0], zmm6[0])
                                float temp0_15[0x4] = __minss_xmmss_memss(temp0_13[0], (*rcx_10)[1])
                                float temp0_16[0x4] = __maxss_xmmss_memss(temp0_14[0], (*rcx_10)[1])
                                float temp0_17[0x4] = _mm_min_ss(temp0_15[0], zmm2[0])
                                float temp0_18[0x4] = _mm_max_ss(temp0_16[0], zmm2[0])
                                float temp0_19[0x4] = __minss_xmmss_memss(temp0_17[0], (*rcx_10)[3])
                                float temp0_20[0x4] = __maxss_xmmss_memss(temp0_18[0], (*rcx_10)[3])
                                rcx_10 = &rcx_10[1]
                                zmm5_1 = temp0_19
                                zmm6 = temp0_20
                                i_1 = i_14
                                i_14 -= 1
                            while (i_1 != 1)
                        
                        if (i s< rsi_1.d)
                            int64_t i_10 = sx.q(rsi_1.d - i)
                            int64_t i_2
                            
                            do
                                zmm1_1 = *rcx_10
                                rcx_10 = &(*rcx_10)[1]
                                zmm6 = _mm_max_ss(zmm1_1[0], zmm6[0])
                                zmm5_1 = _mm_min_ss(zmm1_1[0], zmm5_1[0])
                                i_2 = i_10
                                i_10 -= 1
                            while (i_2 != 1)
                
                zmm3 = 0x3f800000
                float temp0_23[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                bool cond:3_1 = temp0_23[0] < zx.o(0)[0]
                float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
                
                if (cond:3_1 || not(zmm6[0] <= 1f))
                    zmm6[0] = zmm6[0] - temp0_23[0]
                    float* rcx_11 = rax_17
                    int32_t i_3 = 0
                    float temp0_25[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                    
                    if (rsi_1.d s> 0)
                        if (rsi_1.d u>= 0x10)
                            int32_t rax_32 = rsi_1.d & 0x8000000f
                            
                            if (rax_32 s< 0)
                                rax_32 = ((rax_32 - 1) | 0xfffffff0) + 1
                            
                            float temp0_26[0x4] = _mm_rcp_ps(temp0_25)
                            float temp0_27[0x4] = _mm_mul_ps(temp0_26, temp0_26)
                            float temp0_30[0x4] = _mm_sub_ps(_mm_add_ps(temp0_26, temp0_26), 
                                _mm_mul_ps(temp0_27, temp0_25))
                            
                            do
                                i_3 += 0x10
                                *rcx_11 = _mm_mul_ps(_mm_sub_ps(*rcx_11, temp0_24), temp0_30)
                                *(rcx_11 + 0x10) =
                                    _mm_mul_ps(_mm_sub_ps(*(rcx_11 + 0x10), temp0_24), temp0_30)
                                *(rcx_11 + 0x20) =
                                    _mm_mul_ps(_mm_sub_ps(*(rcx_11 + 0x20), temp0_24), temp0_30)
                                *(rcx_11 + 0x30) =
                                    _mm_mul_ps(_mm_sub_ps(*(rcx_11 + 0x30), temp0_24), temp0_30)
                                rcx_11 = &rcx_11[0x10]
                            while (i_3 s< rsi_1.d - rax_32)
                        
                        if (i_3 s< rsi_1.d)
                            if (rsi_1.d - i_3 s>= 4)
                                zmm2 = 0x3f800000
                                zmm2[0] = 1f / zmm6[0]
                                uint64_t rax_41 = zx.q(((rsi_1.d - i_3 - 4) u>> 2) + 1)
                                uint64_t i_15 = zx.q(rax_41.d)
                                i_3 += (rax_41 << 2).d
                                float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                                uint64_t i_4
                                
                                do
                                    *rcx_11 = _mm_mul_ps(_mm_sub_ps(*rcx_11, temp0_23), temp0_39)
                                    rcx_11 = &rcx_11[4]
                                    i_4 = i_15
                                    i_15 -= 1
                                while (i_4 != 1)
                            
                            if (i_3 s< rsi_1.d)
                                int64_t i_11 = sx.q(rsi_1.d - i_3)
                                zmm3[0] = 1f / zmm6[0]
                                int64_t i_5
                                
                                do
                                    zmm0_1 = *rcx_11
                                    zmm0_1[0] = zmm0_1[0] - temp0_23[0]
                                    zmm0_1[0] = zmm0_1[0] * zmm3[0]
                                    *rcx_11 = zmm0_1[0]
                                    rcx_11 = &rcx_11[1]
                                    i_5 = i_11
                                    i_11 -= 1
                                while (i_5 != 1)
                
                float* rcx_12 = rax_17
                
                if (rsi_1.d s>= 4)
                    uint64_t rax_46 = zx.q(((rsi_1 - 4).d u>> 2) + 1)
                    uint64_t i_12 = zx.q(rax_46.d)
                    i_8 = (rax_46 << 2).d
                    uint64_t i_6
                    
                    do
                        zmm0_1 = *rcx_12
                        zmm0_1[0] = zmm0_1[0] * 255f
                        char rax_47 = (int.d(zmm0_1[0])).b
                        *rbx_4 = rax_47
                        rbx_4[1] = rax_47
                        rbx_4[2] = rax_47
                        rbx_4[3] = 0xff
                        zmm0_1 = rcx_12[1]
                        zmm0_1[0] = zmm0_1[0] * 255f
                        char rax_48 = (int.d(zmm0_1[0])).b
                        rbx_4[4] = rax_48
                        rbx_4[5] = rax_48
                        rbx_4[6] = rax_48
                        rbx_4[7] = 0xff
                        zmm0_1 = rcx_12[2]
                        zmm0_1[0] = zmm0_1[0] * 255f
                        char rax_49 = (int.d(zmm0_1[0])).b
                        rbx_4[8] = rax_49
                        rbx_4[9] = rax_49
                        rbx_4[0xa] = rax_49
                        rbx_4[0xb] = 0xff
                        zmm0_1 = rcx_12[3]
                        rcx_12 = &rcx_12[4]
                        zmm0_1[0] = zmm0_1[0] * 255f
                        char rax_50 = (int.d(zmm0_1[0])).b
                        rbx_4[0xc] = rax_50
                        rbx_4[0xd] = rax_50
                        rbx_4[0xe] = rax_50
                        rbx_4[0xf] = 0xff
                        rbx_4 = &rbx_4[0x10]
                        i_6 = i_12
                        i_12 -= 1
                    while (i_6 != 1)
                
                if (i_8 s< rsi_1.d)
                    uint64_t i_13 = zx.q(rsi_1.d - i_8)
                    uint64_t i_7
                    
                    do
                        zmm0_1 = *rcx_12
                        rbx_4 = &rbx_4[4]
                        zmm0_1[0] = zmm0_1[0] * 255f
                        rcx_12 = &rcx_12[1]
                        char rax_51 = (int.d(zmm0_1[0])).b
                        rbx_4[-4] = rax_51
                        rbx_4[-3] = rax_51
                        rbx_4[-2] = rax_51
                        rbx_4[-1] = 0xff
                        i_7 = i_13
                        i_13 -= 1
                    while (i_7 != 1)
                
                sub_140a74f90(rax_17)
            else if (var_127_1 == 0)
                var_148.q = rbx_4
                var_150_1.d = 0x8367
                var_158_1.d = 0x80e1
                data_143effae8(zx.q(*arg4), zx.q(arg4[1]), zx.q(r12_3), zx.q(var_11c), var_158_1, 
                    var_150_1, var_148, var_140, var_138, var_130, var_128_1)
            else
                char rax_53 = *(arg6 + 8)
                void* rax_55 = sub_140a82f30(sx.q((r14_1 << 2).d), 0)
                uint32_t r13_2 = var_11c
                var_148.q = rax_55
                var_150_1.d = 0x1406
                var_158_1.d = 0x80e1
                data_143effae8(zx.q(*arg4), zx.q(arg4[1]), zx.q(r12_3), zx.q(r13_2), var_158_1, 
                    var_150_1, var_148, var_140, var_138, var_130, var_128_1)
                
                if (data_143effa40() != 0)
                    var_148.q = rax_55
                    var_150_1.d = 0x1406
                    var_158_1.d = 0x1908
                    data_143effae8(zx.q(*arg4), zx.q(arg4[1]), zx.q(r12_3), zx.q(r13_2), var_158_1, 
                        var_150_1, var_148)
                    
                    if (data_143effa40() == 0)
                        void* rcx_17 = rax_55
                        void* rdx_16 = rax_55 + (sx.q(r14_1.d) << 2)
                        
                        if (rax_55 != rdx_16)
                            do
                                int32_t rax_59 = *(rcx_17 + 8)
                                *(rcx_17 + 8) = (*rcx_17)[0]
                                *rcx_17 = rax_59
                                rcx_17 += 0x10
                            while (rcx_17 != rdx_16)
                
                void* rcx_18 = rax_55
                var_e8.o = zx.o(0)
                result_1.o = data_142d3f670
                
                if (r14_1.d s>= 4)
                    int32_t rdx_17 = 2
                    
                    do
                        zmm1_1 = *rcx_18
                        zmm2 = *(rcx_18 + 4)
                        uint64_t rax_61 = zx.q(i_8) & 3
                        i_8 += 4
                        float temp0_42[0x4] =
                            __minss_xmmss_memss(zmm1_1[0], *(&var_e8 + (rax_61 << 2)))
                        float temp0_43[0x4] =
                            __maxss_xmmss_memss(zmm1_1[0], *(&result_1 + (rax_61 << 2)))
                        *(&var_e8 + (rax_61 << 2)) = temp0_42[0]
                        *(&result_1 + (rax_61 << 2)) = temp0_43[0]
                        zmm1_1 = *(rcx_18 + 8)
                        uint64_t rax_63 = zx.q(rdx_17 - 1) & 3
                        float temp0_44[0x4] =
                            __minss_xmmss_memss(zmm2[0], *(&var_e8 + (rax_63 << 2)))
                        float temp0_45[0x4] =
                            __maxss_xmmss_memss(zmm2[0], *(&result_1 + (rax_63 << 2)))
                        *(&var_e8 + (rax_63 << 2)) = temp0_44[0]
                        *(&result_1 + (rax_63 << 2)) = temp0_45[0]
                        zmm2 = *(rcx_18 + 0xc)
                        uint64_t rax_65 = zx.q(rdx_17) & 3
                        rcx_18 += 0x10
                        float temp0_46[0x4] =
                            __minss_xmmss_memss(zmm1_1[0], *(&var_e8 + (rax_65 << 2)))
                        float temp0_47[0x4] =
                            __maxss_xmmss_memss(zmm1_1[0], *(&result_1 + (rax_65 << 2)))
                        *(&var_e8 + (rax_65 << 2)) = temp0_46[0]
                        *(&result_1 + (rax_65 << 2)) = temp0_47[0]
                        uint64_t rax_67 = zx.q(rdx_17 + 1) & 3
                        rdx_17 += 4
                        float temp0_48[0x4] =
                            __minss_xmmss_memss(zmm2[0], *(&var_e8 + (rax_67 << 2)))
                        float temp0_49[0x4] =
                            __maxss_xmmss_memss(zmm2[0], *(&result_1 + (rax_67 << 2)))
                        *(&var_e8 + (rax_67 << 2)) = temp0_48[0]
                        *(&result_1 + (rax_67 << 2)) = temp0_49[0]
                    while (i_8 s< (r14_1 - 3).d)
                
                while (i_8 s< r14_1.d)
                    zmm1_1 = *rcx_18
                    rcx_18 += 4
                    uint64_t rax_69 = zx.q(i_8) & 3
                    i_8 += 1
                    float temp0_50[0x4] = __minss_xmmss_memss(zmm1_1[0], *(&var_e8 + (rax_69 << 2)))
                    float temp0_51[0x4] =
                        __maxss_xmmss_memss(zmm1_1[0], *(&result_1 + (rax_69 << 2)))
                    *(&var_e8 + (rax_69 << 2)) = temp0_50[0]
                    *(&result_1 + (rax_69 << 2)) = temp0_51[0]
                
                float zmm0_2[0x4] = result_1.d
                int128_t zmm10 = var_e8.d
                int32_t temp0_52
                int32_t temp1_1
                temp0_52:temp1_1 = sx.q(r14_1.d)
                zmm1_1 = result_1:4.d
                zmm0_2[0] = zmm0_2[0] f- zmm10.d
                int128_t zmm11 = var_e8:4.d
                int32_t var_f0
                zmm2 = var_f0
                zmm1_1[0] = zmm1_1[0] f- zmm11.d
                int32_t var_e0
                int128_t zmm12 = var_e0
                int32_t var_ec
                zmm3 = var_ec
                zmm2[0] = zmm2[0] f- zmm12.d
                int32_t var_dc
                int128_t zmm13 = var_dc
                int32_t i_17 = (temp1_1 + (temp0_52 & 3)) s>> 2
                zmm3[0] = zmm3[0] f- zmm13.d
                
                if (i_17 s> 0)
                    zmm6 = 0x3f800000
                    void* rdi_1 = rax_55 + 4
                    int128_t zmm9
                    zmm9.d = 1f / zmm0_2[0]
                    uint64_t i_16 = zx.q(i_17)
                    int128_t zmm7
                    zmm7.d = 1f / zmm2[0]
                    int128_t zmm8
                    zmm8.d = 1f / zmm1_1[0]
                    zmm6[0] = 1f / zmm3[0]
                    uint64_t i_9
                    
                    do
                        zmm3 = *(rdi_1 + 4)
                        zmm2 = *rdi_1
                        zmm3[0] = zmm3[0] f- zmm12.d
                        zmm1_1 = *(rdi_1 - 4)
                        zmm2[0] = zmm2[0] f- zmm11.d
                        zmm0_2 = *(rdi_1 + 8)
                        zmm1_1[0] = zmm1_1[0] f- zmm10.d
                        zmm0_2[0] = zmm0_2[0] f- zmm13.d
                        zmm3[0] = zmm3[0] f* zmm7.d
                        zmm2[0] = zmm2[0] f* zmm8.d
                        zmm1_1[0] = zmm1_1[0] f* zmm9.d
                        zmm0_2[0] = zmm0_2[0] * zmm6[0]
                        result_1.d = zmm3[0]
                        result_1:4.d = zmm2[0]
                        float var_f0_1 = zmm1_1[0]
                        float var_ec_1 = zmm0_2[0]
                        zmm6, zmm7, zmm8, zmm9 = sub_140ae16d0(&result_1, &var_118, rax_53)
                        rdi_1 += 0x10
                        *rbx_4 = var_118
                        rbx_4 = &rbx_4[4]
                        i_9 = i_16
                        i_16 -= 1
                    while (i_9 != 1)
                
                sub_140a74f90(rax_55)
            data_143effac0(0xd05, 4)
            
            if (var_124 != 0)
                data_143f000f8(0x8d40, 0)
                data_143f00100(1, &var_124)
            
            if (var_120 != 0)
                data_143f000d0(1, &var_120)
            
            result = arg2
            *(result + 0x188) = 0xffffffff
        case 1
            r10_1 = 1
        label_141948e32:
            
            if (r10_1 == 0)
                goto label_141948e3b
        case 2
            r8 = 1
            var_126_1 = 1
        label_141948e10:
            var_128_1 = 1
            rbx_1 = 0x821a
            
            if (r8 == 0)
                rbx_1 = 0x8d00
            
            r12_1 = r8
            goto label_141948e43
        case 3
            goto label_141948e10
        case 4
            goto label_141948e32

__security_check_cookie(rax_1 ^ &var_178)
return result
