// 函数: sub_141231ec0
// 地址: 0x141231ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* r14 = arg5
int32_t r12 = 0
int512_t zmm0
zmm0.o = zx.o(0)
void* rdi = arg1
int64_t* var_220 = r14
int64_t var_10c
__builtin_memset(&var_10c, 0, 0x41)
void* r15 = arg3
int128_t var_168
__builtin_memset(&var_168, 0, 0x30)
int128_t var_120 = zx.o(0)
char var_ca = 0
int16_t var_c8 = 0
sub_140fdc870(arg2, &var_168)
int64_t var_138 = data_1439b54a0
int32_t var_110 = 0
float var_240
(*(**(r15 + 0x20) + 0x10))(zmm0, &var_240)
int32_t i = 0
int32_t i_1 = 0
uint64_t result = zx.q(*(*(r15 + 0x20) + 0x138))
char var_277 = result.b

if (*(rdi + 0xa8) s> 0)
    int64_t r9 = 0
    char r13_1 = arg6
    int128_t zmm10 = 0x3f800000
    uint128_t zmm11 = zx.o(0)
    int128_t zmm12 = 0x3f866666
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    uint128_t zmm8
    uint128_t var_78_1 = zmm8
    uint128_t zmm9
    uint128_t var_88_1 = zmm9
    int64_t var_260_1 = 0
    
    do
        int64_t* rbx_2 = r9 * 0x5240 + *(rdi + 0xa0)
        
        if ((*(r15 + 0x64) & 2) != 0)
            result = rbx_2[0x31a]
        
        if ((*(r15 + 0x64) & 2) == 0 || (*(sx.q(*(r15 + 0x28)) * 0x78 + result + 0x40) & 1) != 0)
            if (*(rbx_2 + 0xd79) != 0)
                result = *(r15 + 0x20)
            
            if (*(rbx_2 + 0xd79) == 0 || (*(result + 0x138) & 8) != 0)
                void* rcx_3 = *(r15 + 0x20)
                
                if ((*(rcx_3 + 0x13d) & 1) != 0 || (*(rbx_2 + 0x497c) & 0x100) != 0)
                    if ((*(*rbx_2 + 0x28) & 0x8000000) != 0)
                        void* rax_7 = *(rcx_3 + 0x130)
                        int64_t rcx_4
                        
                        if (rax_7 == 0)
                            rcx_4 = 0
                        else
                            rcx_4 = *(rax_7 + 0x78)
                        
                        r12.b = rcx_4 != 0
                    
                    zmm7 = zx.o(rbx_2[0x2b4].d)
                    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    zmm8 = zx.o(*(rbx_2 + 0x159c))
                    zmm9 = zx.o(rbx_2[0x2b3].d)
                    zmm6 = _mm_cvtepi32_ps(zx.o(*(rbx_2 + 0x15a4)))
                    void* rax_8 = &rcx_7[5]
                    zmm7 = _mm_cvtepi32_ps(zmm7)
                    zmm8 = _mm_cvtepi32_ps(zmm8)
                    zmm9 = _mm_cvtepi32_ps(zmm9)
                    
                    if (rax_8 u> *(arg2 + 0x38))
                        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                        i = i_1
                        r9 = var_260_1
                        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_8 = &rcx_7[5]
                    
                    *(arg2 + 0x30) = rax_8
                    void**** rax_9 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_9 = rcx_7
                    *(arg2 + 8) = &rcx_7[1]
                    rcx_7[1] = 0
                    *rcx_7 = &data_142d54998
                    rcx_7[2].d = zmm9.d
                    *(rcx_7 + 0x14) = zmm8.d
                    *(rcx_7 + 0x1c) = zmm7.d
                    rcx_7[4].d = zmm6.d
                    rcx_7[3].d = 0
                    *(rcx_7 + 0x24) = 0x3f800000
                    int64_t var_1a8 = 0
                    int32_t var_1a0_1 = 0
                    int128_t var_198_1
                    __builtin_memset(&var_198_1, 0, 0x30)
                    int64_t rdx_3
                    
                    if (r14 != 0 && i s< r14[1].d)
                        rdx_3 = *(r9 * 0xe8 + *r14 + 0x28)
                    
                    if (r14 == 0 || i s>= r14[1].d || rdx_3 == 0)
                        r14 = nullptr
                    else
                        r14.b = 1
                        var_198_1.q = rdx_3
                    
                    char var_278_1 = r14.b
                    int32_t var_2c0
                    int128_t var_148_1
                    char var_cc_1
                    
                    if (*(*(r15 + 0x20) + 0x13c) != 0)
                        if (data_143f0f1c3 != 0)
                            var_cc_1 = 1
                        
                        if (data_143f0f1c3 == 0 || data_1439b634c == 0)
                            var_cc_1 = 0
                        
                        void* var_230
                        sub_1419a2ec0(rbx_2[0xa2a], &var_230, &data_143e879d0, 0)
                        uint128_t zmm0_2 = zx.o(*(rbx_2 + 0x60c))
                        float rax_41 = *(rbx_2 + 0x614)
                        int32_t zmm1 = rbx_2[0x1a6].d
                        float zmm3 = zmm0_2.d - var_240
                        int32_t var_23c
                        uint128_t zmm4_1
                        zmm4_1.d = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55).d f- var_23c
                        float var_238
                        float zmm2 = rax_41 - var_238
                        zmm4_1.d = zmm4_1.d f* zmm4_1.d
                        int32_t var_234
                        zmm0_2.d = var_234.d f* zmm12.d
                        zmm4_1.d = zmm4_1.d f+ zmm3 * zmm3
                        zmm1 = zmm1 f+ zmm1 f+ zmm0_2.d
                        zmm4_1.d = zmm4_1.d f+ zmm2 * zmm2
                        int64_t rax_43
                        
                        if (zmm4_1.d f< zmm1 f* zmm1 || zmm10.d f<= *(rbx_2 + 0x2bc))
                            int64_t rax_44 = data_1439b5500
                            
                            if (*(rbx_2 + 0xd34) != 0)
                                rax_44 = data_1439b54e8
                            
                            int64_t var_130_3 = rax_44
                            rax_43 = data_14395d9e8
                        else
                            int64_t rax_42 = data_1439b54e8
                            
                            if (*(rbx_2 + 0xd34) != 0)
                                rax_42 = data_1439b5500
                            
                            int64_t var_130_2 = rax_42
                            rax_43 = data_1439b53d0
                        
                        int64_t var_128_2 = rax_43
                        void* r15_3
                        void* var_228
                        
                        if (r13_1 == 0)
                            int64_t* rcx_40 = *(r15 + 0x20)
                            char rax_52 = (*(*rcx_40 + 0x38))(rcx_40)
                            int64_t* rcx_41 = *(r15 + 0x20)
                            int32_t r14_7
                            r14_7.b = rax_52 != 0
                            char rax_54 = (*(*rcx_41 + 0x38))(rcx_41)
                            char rax_56
                            int32_t r15_4
                            
                            if (rax_54 != 0)
                                int64_t* rcx_42 = *(r15 + 0x20)
                                rax_56 = (*(*rcx_42 + 0x40))(rcx_42)
                                r15_4 = 3
                            
                            if (rax_54 == 0 || rax_56 == 0)
                                r15_4 = 0
                            
                            int64_t* rcx_44 = *(arg3 + 0x20)
                            int32_t rax_58 = (*(*rcx_44 + 0x30))(rcx_44)
                            char temp0_10 = rax_58.b
                            rax_58.b = neg.b(rax_58.b)
                            uint64_t rcx_49 = zx.q((sbb.d(rax_58, rax_58, temp0_10 != 0) & 2) + r12
                                + (((*(rbx_2 + 0x497c) u>> 8 & 1)
                                + (((zx.d(var_277) u>> 7) + (zx.d(var_278_1) << 1)) << 1)) << 3))
                            void* var_1b8
                            sub_1419a2ec0(rbx_2[0xa2a], &var_1b8, &data_143e83290, 
                                r15_4 + ((rcx_49 * 3).d << 1) + r14_7 + 1)
                            r15_3 = var_230
                            r12 = 0
                            int64_t rax_63 = 0
                            var_168.q = data_1439c9410
                            
                            if (r15_3 != 0)
                                int64_t rdx_32 = sx.q(*(r15_3 + 0x10c))
                                int64_t* r14_9 = *(var_228 + 0x10)
                                int64_t rax_65 = r14_9[3]
                                
                                if (*(rax_65 + (rdx_32 << 3)) == 0)
                                    sub_1419ccf30(r14_9, rdx_32.d)
                                    rax_65 = r14_9[3]
                                
                                rax_63 = *(rax_65 + (rdx_32 << 3))
                                r12 = 0
                            
                            void* r13_4 = var_1b8
                            var_168:8.q = rax_63
                            int64_t rax_66 = 0
                            
                            if (r13_4 != 0)
                                int64_t rdx_33 = sx.q(*(r13_4 + 0x10c))
                                void* var_1b0
                                int64_t* r14_10 = *(var_1b0 + 0x10)
                                int64_t rax_68 = r14_10[3]
                                
                                if (*(rax_68 + (rdx_33 << 3)) == 0)
                                    sub_1419ccf30(r14_10, rdx_33.d)
                                    rax_68 = r14_10[3]
                                
                                rax_66 = *(rax_68 + (rdx_33 << 3))
                                r12 = 0
                            
                            var_148_1.q = rax_66
                            sub_1419870b0(arg2, &var_168, 2)
                            int64_t* rax_69 = &var_1a8
                            
                            if (var_278_1 == 0)
                                rax_69 = nullptr
                            
                            var_2c0.q = rax_69
                            zmm10, zmm11, zmm12 =
                                sub_141239bf0(r13_4, arg2, rbx_2, arg3, arg4, var_2c0)
                        else
                            void* var_1c8
                            sub_1419a2ec0(rbx_2[0xa2a], &var_1c8, &data_143e88110, 0)
                            r15_3 = var_230
                            r12 = 0
                            int64_t rax_45 = 0
                            var_168.q = data_1439c9410
                            
                            if (r15_3 != 0)
                                int64_t rdx_24 = sx.q(*(r15_3 + 0x10c))
                                int64_t* r14_5 = *(var_228 + 0x10)
                                int64_t rax_47 = r14_5[3]
                                
                                if (*(rax_47 + (rdx_24 << 3)) == 0)
                                    sub_1419ccf30(r14_5, rdx_24.d)
                                    rax_47 = r14_5[3]
                                
                                rax_45 = *(rax_47 + (rdx_24 << 3))
                                r12 = 0
                            
                            void* r13_3 = var_1c8
                            var_168:8.q = rax_45
                            int64_t rax_48 = 0
                            
                            if (r13_3 != 0)
                                int64_t rdx_25 = sx.q(*(r13_3 + 0x10c))
                                void* var_1c0
                                int64_t* r14_6 = *(var_1c0 + 0x10)
                                int64_t rax_50 = r14_6[3]
                                
                                if (*(rax_50 + (rdx_25 << 3)) == 0)
                                    sub_1419ccf30(r14_6, rdx_25.d)
                                    rax_50 = r14_6[3]
                                
                                rax_48 = *(rax_50 + (rdx_25 << 3))
                                r12 = 0
                            
                            var_148_1.q = rax_48
                            sub_1419870b0(arg2, &var_168, 2)
                            zmm10 = sub_1412397f0(r13_3, arg2, rbx_2, arg3)
                        float* r9_14 = sub_141238f00(r15_3 + 0x118, arg2, r15_3, rbx_2, 
                            sub_141080be0(r15_3, arg2, *(arg2 + 0x188), rbx_2[2]), arg3)
                        
                        if (var_cc_1 != 0)
                            float var_264
                            r9_14 = &var_264
                            float var_268 = 1f
                            var_264 = 0f
                            zmm10, zmm11, zmm12 = sub_14121e9a0(rbx_2, &var_240, &var_268, r9_14)
                            float zmm6_3 = var_268
                            zmm7 = var_264
                            
                            if (not(zmm6_3 f> zmm7.d))
                                zmm6_3 = zmm10.d
                                zmm7 = zmm11
                            
                            void*** rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_72 = &rcx_61[3]
                            
                            if (rax_72 u> *(arg2 + 0x38))
                                r9_14, zmm6_3 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_72 = &rcx_61[3]
                            
                            *(arg2 + 0x30) = rax_72
                            void**** rax_73 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_73 = rcx_61
                            *(arg2 + 8) = &rcx_61[1]
                            rcx_61[1] = 0
                            *rcx_61 = &data_142f115c8
                            rcx_61[2].d = zmm7.d
                            *(rcx_61 + 0x14) = zmm6_3
                        
                        r15 = arg3
                        char rcx_65 = *(*(r15 + 0x20) + 0x13c)
                        
                        if (((rcx_65 - 1) & 0xfd) == 0)
                            sub_141223ee0(arg2)
                        else if (rcx_65 == 2)
                            int64_t rbx_3 = data_1439b64b8
                            void*** rcx_68 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_77 = &rcx_68[5]
                            
                            if (rax_77 u> *(arg2 + 0x38))
                                r9_14 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                                rcx_68 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_77 = &rcx_68[5]
                            
                            *(arg2 + 0x30) = rax_77
                            *(arg2 + 0x14) += 1
                            **(arg2 + 8) = rcx_68
                            *(arg2 + 8) = &rcx_68[1]
                            rcx_68[3] = rbx_3
                            rcx_68[1] = 0
                            *rcx_68 = &data_142d56618
                            rcx_68[2].d = 0
                            rcx_68[4].d = 0
                            int32_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = muls.dp.d(0x55555556, data_1439b64d8)
                            int64_t r14_11 = data_1439b64d0
                            
                            if (r14_11 == 0)
                                sub_140af98a0("Unknown", 0xbc8, 
                                    Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_14)
                                sub_140afbb40()
                            
                            void*** rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_81 = &rcx_74[6]
                            
                            if (rax_81 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x38)
                                rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_81 = &rcx_74[6]
                            
                            *(arg2 + 0x30) = rax_81
                            int64_t* rax_82 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_82 = rcx_74
                            *(arg2 + 8) = &rcx_74[1]
                            rcx_74[1] = 0
                            *rcx_74 = &data_142f11598
                            rcx_74[2] = r14_11
                            rcx_74[3] = 0
                            rcx_74[4] = 0x1b0
                            rcx_74[5].d = (temp1_1 u>> 0x1f) + temp1_1
                            *(rcx_74 + 0x2c) = 1
                    else
                        var_cc_1 = 0
                        void* var_208
                        sub_1419a2ec0(rbx_2[0xa2a], &var_208, &data_143e87870, 0)
                        void* r13_2 = var_208
                        int64_t var_130_1 = data_14395da18
                        int64_t var_128_1 = data_14395d9e8
                        void* var_200
                        
                        if (arg6 == 0)
                            char rax_22
                            
                            if ((*(*(r15 + 0x20) + 0x13a) & 1) != 0)
                                rax_22 = sub_1414e0380(*(arg1 + 8), *rbx_2 + 0x28)
                            
                            int32_t rax_23
                            
                            if ((*(*(r15 + 0x20) + 0x13a) & 1) == 0 || rax_22 == 0)
                                rax_23 = 0
                            else
                                rax_23 = 3
                            
                            void* var_1e8
                            sub_1419a2ec0(rbx_2[0xa2a], &var_1e8, &data_143e83290, 
                                ((*(rbx_2 + 0x497c) u>> 8 & 1) +
                                    (((zx.d(var_277) u>> 7) + ((zx.d(r14.b) + rax_23) << 1)) << 1))
                                    * 0x30)
                            var_168.q = data_1439c9210
                            int64_t rax_31 = 0
                            
                            if (r13_2 != 0)
                                int64_t rdx_14 = sx.q(*(r13_2 + 0x10c))
                                int64_t* rdi_3 = *(var_200 + 0x10)
                                int64_t rax_32 = rdi_3[3]
                                
                                if (*(rax_32 + (rdx_14 << 3)) == 0)
                                    sub_1419ccf30(rdi_3, rdx_14.d)
                                    rax_32 = rdi_3[3]
                                
                                rax_31 = *(rax_32 + (rdx_14 << 3))
                            
                            void* r14_4 = var_1e8
                            var_168:8.q = rax_31
                            int64_t rax_33 = 0
                            
                            if (r14_4 != 0)
                                int64_t rdx_15 = sx.q(*(r14_4 + 0x10c))
                                void* var_1e0
                                int64_t* rdi_4 = *(var_1e0 + 0x10)
                                int64_t rax_35 = rdi_4[3]
                                
                                if (*(rax_35 + (rdx_15 << 3)) == 0)
                                    sub_1419ccf30(rdi_4, rdx_15.d)
                                    rax_35 = rdi_4[3]
                                
                                rax_33 = *(rax_35 + (rdx_15 << 3))
                                r15 = arg3
                            
                            var_148_1.q = rax_33
                            sub_1419870b0(arg2, &var_168, 2)
                            int64_t* rax_36 = &var_1a8
                            
                            if (var_278_1 == 0)
                                rax_36 = nullptr
                            
                            var_2c0.q = rax_36
                            zmm10, zmm11, zmm12 =
                                sub_141239bf0(r14_4, arg2, rbx_2, r15, arg4, var_2c0)
                        else
                            void* var_1f8
                            sub_1419a2ec0(rbx_2[0xa2a], &var_1f8, &data_143e88270, 0)
                            var_168.q = data_1439c9210
                            int64_t rax_16 = 0
                            
                            if (r13_2 != 0)
                                int64_t rdx_6 = sx.q(*(r13_2 + 0x10c))
                                int64_t* rdi_1 = *(var_200 + 0x10)
                                int64_t rax_17 = rdi_1[3]
                                
                                if (*(rax_17 + (rdx_6 << 3)) == 0)
                                    sub_1419ccf30(rdi_1, rdx_6.d)
                                    rax_17 = rdi_1[3]
                                
                                rax_16 = *(rax_17 + (rdx_6 << 3))
                            
                            void* r14_2 = var_1f8
                            var_168:8.q = rax_16
                            int64_t rax_18 = 0
                            
                            if (r14_2 != 0)
                                int64_t rdx_7 = sx.q(*(r14_2 + 0x10c))
                                void* var_1f0
                                int64_t* rdi_2 = *(var_1f0 + 0x10)
                                int64_t rax_20 = rdi_2[3]
                                
                                if (*(rax_20 + (rdx_7 << 3)) == 0)
                                    sub_1419ccf30(rdi_2, rdx_7.d)
                                    rax_20 = rdi_2[3]
                                
                                rax_18 = *(rax_20 + (rdx_7 << 3))
                                r15 = arg3
                            
                            var_148_1.q = rax_18
                            sub_1419870b0(arg2, &var_168, 2)
                            zmm10 = sub_1412397f0(r14_2, arg2, rbx_2, r15)
                        
                        void* r9_7
                        int512_t zmm2_1
                        int512_t zmm3_1
                        r9_7, zmm2_1, zmm3_1 = sub_141238f00(r13_2 + 0x118, arg2, r13_2, rbx_2, 
                            sub_141080be0(r13_2, arg2, *(arg2 + 0x188), rbx_2[2]), r15)
                        void* var_1d8 = r13_2
                        void* var_1d0_1 = var_200
                        int64_t* rax_38 = sub_14139bef0(arg2)
                        int32_t rcx_31 = *(rbx_2 + 0x15a4) - *(rbx_2 + 0x159c)
                        int32_t r8_4 = rbx_2[0x2b3].d
                        int64_t rax_39 = *(rax_38 + 0x37c)
                        uint128_t zmm0_1 = zx.o(*(rbx_2 + 0x159c))
                        int32_t rdx_21 = rbx_2[0x2b4].d - r8_4
                        int32_t var_280_1 = 1
                        int32_t var_288_1 = 1
                        zmm2_1.o = zx.o(rcx_31)
                        int32_t var_254_1 = rcx_31
                        void** var_290_1 = &var_1d8
                        zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
                        zmm3_1.o = zx.o(rdx_21)
                        int32_t var_2a8_1 = zmm2_1.d
                        zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
                        void* var_2c8_2
                        var_2c8_2.d = zmm2_1.d
                        zmm2_1.o = zmm11
                        sub_1413993b0(arg2, zmm11, zmm2_1, r9_7, zmm3_1, var_2c8_2.d, 
                            _mm_cvtepi32_ps(zx.o(r8_4)).d, _mm_cvtepi32_ps(zmm0_1).d, zmm3_1.d, 
                            var_2a8_1, rdx_21.q, rax_39, var_290_1, var_288_1, var_280_1)
                        r12 = 0
                    int128_t var_178
                    sub_1405ec8a0(&var_178)
                    int128_t var_188
                    sub_1405ec8a0(&var_188:8)
                    result = sub_1405ec8a0(&var_1a8)
                    i = i_1
                    r9 = var_260_1
                    rdi = arg1
                    r14 = var_220
                    r13_1 = arg6
        
        i += 1
        r9 += 1
        i_1 = i
        var_260_1 = r9
    while (i s< *(rdi + 0xa8))

__security_check_cookie(rax_1 ^ &var_2e8)
return result
