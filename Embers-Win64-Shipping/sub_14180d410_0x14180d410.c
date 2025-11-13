// 函数: sub_14180d410
// 地址: 0x14180d410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0x100
void* r12 = arg1
char result = EnterCriticalSection(lpCriticalSection)

if (*(r12 + 0xf8) s> 1)
    int64_t* arg_10
    int64_t* rax
    int512_t zmm1_1
    int128_t zmm6_1
    rax, zmm1_1, zmm6_1 = sub_140b58170(&arg_10, "HTTP", 1)
    j_sub_140b3db50()
    result = sub_140b404d0(&data_143de7d78, *rax, zmm1_1)
    
    if (result != 0)
        int64_t var_178 = 0
        int64_t var_170_1 = 0
        int64_t var_168
        sub_140b29d90(&var_168)
        int32_t i_11 = 0
        void* i_5 = nullptr
        void* i_8 = nullptr
        int32_t i_9 = 0
        int64_t var_1d0_1 = 0
        int64_t* var_258
        char var_288
        int64_t* var_278
        int64_t var_268
        void* var_248
        int64_t* var_238
        int64_t* var_228
        void*** var_218
        int64_t* var_208
        int64_t* var_1f8
        void*** var_1e8
        int64_t var_1c8
        int32_t var_1c0
        int64_t* var_1a8
        int64_t* var_190
        int32_t var_188
        int64_t var_148
        int64_t var_138
        int64_t var_128
        uint128_t var_118
        uint128_t var_108
        void var_f8
        uint128_t var_e8
        
        if (*(r12 + 0x78) != 0)
            int64_t* r13_2 = *(r12 + 0xf0)
            int64_t rax_98 = sx.q(*(r12 + 0xf8))
            arg_10 = r13_2
            void* rax_101 = &r13_2[rax_98 * 6]
            
            if (r13_2 != rax_101)
                int128_t var_58_1 = zmm6_1
                zmm6_1 = zx.o(0)
                
                do
                    if ((r13_2[5].b & 2) == 0)
                        var_258 = nullptr
                        int32_t i = 0
                        int32_t var_250_3 = 0
                        
                        if (i_11 s> 0)
                            while (i s< 0x28)
                                int64_t* rsi_14 = sx.q(i) * 0x30 + i_5
                                int64_t var_c8
                                int64_t var_b8
                                int64_t* rax_105 =
                                    sub_14180a750(&var_c8, sub_141812310(rsi_14, &var_b8))
                                int16_t* const rdi_26
                                
                                if (rax_105[1].d == 0)
                                    rdi_26 = &data_142d40450
                                else
                                    rdi_26 = *rax_105
                                
                                int64_t var_d8
                                int64_t* rax_106 = sub_14180a750(&var_d8, rsi_14)
                                
                                if (rax_106[1].d != 0)
                                    *rax_106
                                
                                int16_t* const var_280_1 = rdi_26
                                var_288.d = i
                                sub_140a2e390(&var_190, &AttributeName%d=%s&AttributeValue%d=%s", 
                                    zx.q(i))
                                int32_t r8_30
                                
                                if (var_188 == 0)
                                    r8_30 = 0
                                else
                                    r8_30 = var_188 - 1
                                
                                sub_140a20ba0(&var_258, var_190, r8_30)
                                int64_t* rcx_167 = var_190
                                
                                if (rcx_167 != 0)
                                    sub_140a74f90(rcx_167)
                                
                                int64_t rcx_168 = var_d8
                                
                                if (rcx_168 != 0)
                                    sub_140a74f90(rcx_168)
                                
                                int64_t rcx_169 = var_c8
                                
                                if (rcx_169 != 0)
                                    sub_140a74f90(rcx_169)
                                
                                int64_t rcx_170 = var_b8
                                
                                if (rcx_170 != 0)
                                    sub_140a74f90(rcx_170)
                                
                                i += 1
                                
                                if (i s>= i_11)
                                    break
                            
                            r13_2 = arg_10
                        
                        int32_t r12_4 = 0
                        
                        if (r13_2[3].d s> 0)
                            int64_t r15_9 = 0
                            
                            while (i s< 0x28)
                                void* rdx_92 = r13_2[2]
                                int32_t rcx_171 = *(r15_9 + rdx_92 + 0x2c)
                                
                                if (rcx_171 == 0)
                                    sub_140596d10(&var_248, rdx_92 + 0x10 + r15_9)
                                else if (rcx_171 == 1)
                                    uint128_t zmm2_1 = zx.o(*(r15_9 + rdx_92 + 0x20))
                                    int64_t rcx_182 = int.q(zmm2_1.q)
                                    uint128_t zmm1_2 = zmm2_1
                                    uint128_t zmm0_1
                                    
                                    if (rcx_182 != -0x8000000000000000)
                                        zmm0_1.q = float.d(rcx_182)
                                        
                                        if (not(zmm0_1.q f== zmm2_1.q))
                                            zmm1_2.q = float.d(rcx_182 - (zx.q(_mm_movemask_pd(
                                                _mm_unpacklo_pd(zmm1_2, zmm1_2.q))) & 1))
                                    
                                    void** rcx_184 = &var_248
                                    zmm0_1.q = zmm2_1.q f- zmm1_2.q
                                    
                                    if (zmm0_1.q f!= zmm6_1.q)
                                        sub_140a31300(rcx_184, zmm2_1.q, 1)
                                    else
                                        sub_140a2e390(rcx_184, u"%lld", int.q(zmm2_1.q))
                                else
                                    int32_t var_240
                                    int32_t var_23c
                                    
                                    if (rcx_171 == 2)
                                        bool cond:1_1 = *(r15_9 + rdx_92 + 0x28) != 0
                                        wchar16 const* const rsi_15 = u"false"
                                        int32_t rdx_94 = 0
                                        var_248 = nullptr
                                        
                                        if (cond:1_1)
                                            rsi_15 = u"true"
                                        
                                        var_240 = 0
                                        int32_t rcx_178 = 0
                                        var_23c = 0
                                        
                                        if (*rsi_15 != 0)
                                            int64_t rdi_27 = -1
                                            
                                            do
                                                rdi_27 += 1
                                            while (rsi_15[rdi_27] != 0)
                                            
                                            if (rdi_27.d + 1 s> 0)
                                                sub_1405947f0(&var_248, rdi_27.d + 1)
                                                rcx_178 = var_23c
                                                rdx_94 = var_240
                                            
                                            int32_t rax_108 = rdi_27.d + 1 + rdx_94
                                            var_240 = rax_108
                                            
                                            if (rax_108 s> rcx_178)
                                                sub_140594770(&var_248)
                                            
                                            UnDecorator::getReferenceType(var_248, rsi_15, 
                                                (rdi_27.d + 1) * 2)
                                    else if (rcx_171 == 3)
                                        var_248 = nullptr
                                        var_240.q = 0
                                        sub_1405947f0(&var_248, 5)
                                        int32_t rax_107 = var_240 + 5
                                        var_240 = rax_107
                                        
                                        if (rax_107 s> var_23c)
                                            sub_140594770(&var_248)
                                        
                                        UnDecorator::getReferenceType(var_248, u"null", 0xa)
                                    else if (rcx_171 == 4)
                                        sub_140596d10(&var_248, rdx_92 + 0x10 + r15_9)
                                    else
                                        var_248 = nullptr
                                        var_240.q = 0
                                
                                int64_t var_98
                                int64_t* rax_111 = sub_14180a750(&var_98, &var_248)
                                int16_t* const rdi_29
                                
                                if (rax_111[1].d == 0)
                                    rdi_29 = &data_142d40450
                                else
                                    rdi_29 = *rax_111
                                
                                int64_t var_a8
                                int64_t* rax_113 =
                                    sub_14180a750(&var_a8, sx.q(r12_4) * 0x30 + r13_2[2])
                                
                                if (rax_113[1].d != 0)
                                    *rax_113
                                
                                int16_t* const var_280_2 = rdi_29
                                var_288.d = i
                                sub_140a2e390(&var_1a8, &AttributeName%d=%s&AttributeValue%d=%s", 
                                    zx.q(i))
                                int32_t var_1a0
                                int32_t r8_36
                                
                                if (var_1a0 == 0)
                                    r8_36 = 0
                                else
                                    r8_36 = var_1a0 - 1
                                
                                sub_140a20ba0(&var_258, var_1a8, r8_36)
                                int64_t* rcx_190 = var_1a8
                                
                                if (rcx_190 != 0)
                                    sub_140a74f90(rcx_190)
                                
                                int64_t rcx_191 = var_a8
                                
                                if (rcx_191 != 0)
                                    sub_140a74f90(rcx_191)
                                
                                int64_t rcx_192 = var_98
                                
                                if (rcx_192 != 0)
                                    sub_140a74f90(rcx_192)
                                
                                void* rcx_193 = var_248
                                
                                if (rcx_193 != 0)
                                    sub_140a74f90(rcx_193)
                                
                                r12_4 += 1
                                r15_9 += 0x30
                                i += 1
                                
                                if (r12_4 s>= r13_2[3].d)
                                    break
                        
                        zmm6_1 = sub_14180c740(arg1, &var_1e8)
                        int64_t var_1b8 = 0
                        int32_t var_1b0_1 = 0
                        sub_1405947f0(&var_1b8, 0xb)
                        int32_t rax_114 = var_1b0_1 + 0xb
                        var_1b0_1 = rax_114
                        
                        if (rax_114 s> 0)
                            sub_140594770(&var_1b8)
                        
                        UnDecorator::getReferenceType(var_1b8, u"text/plain", 0x16)
                        var_238 = nullptr
                        int32_t var_230_1 = 0
                        sub_1405947f0(&var_238, 0xd)
                        int32_t rax_115 = var_230_1 + 0xd
                        var_230_1 = rax_115
                        
                        if (rax_115 s> 0)
                            sub_140594770(&var_238)
                        
                        UnDecorator::getReferenceType(var_238, u"Content-Type", 0x1a)
                        void*** r15_10 = var_1e8
                        (*r15_10)[0xf](r15_10, &var_238, &var_1b8)
                        int64_t* rcx_202 = var_238
                        
                        if (rcx_202 != 0)
                            sub_140a74f90(rcx_202)
                        
                        int64_t rcx_203 = var_1b8
                        
                        if (rcx_203 != 0)
                            sub_140a74f90(rcx_203)
                        
                        int64_t rsi_16 = *(arg1 + 0x48)
                        var_278 = nullptr
                        int32_t rdi_30 = *(arg1 + 0x50)
                        int64_t var_270
                        var_270.d = rdi_30
                        
                        if (rdi_30 != 0)
                            sub_1405a4c70(&var_278, rdi_30, 0)
                            memcpy(var_278, rsi_16, rdi_30 * 2)
                        else
                            var_270:4.d = 0
                        
                        int64_t var_88
                        int64_t* rax_117 = sub_14180a750(&var_88, arg1 + 0xb8)
                        int32_t rcx_207 = rax_117[1].d
                        var_1f8 = nullptr
                        int64_t* rsi_17 = nullptr
                        int64_t var_1f0_1 = 0
                        int32_t rdx_111 = 0
                        int32_t rdi_31 = rcx_207 - 1
                        int32_t rcx_208 = 0
                        
                        if (rcx_207 == 0)
                            rdi_31 = 0
                        
                        if (rdi_31 + 0x17 s> 0)
                            sub_1405947f0(&var_1f8, rdi_31 + 0x17)
                            rcx_208 = var_1f0_1:4.d
                            rdx_111 = var_1f0_1.d
                            rsi_17 = var_1f8
                        
                        int32_t r14_29 = rdi_31 + 0x17 + rdx_111
                        var_1f0_1.d = r14_29
                        
                        if (r14_29 s> rcx_208)
                            sub_140594770(&var_1f8)
                            r14_29 = var_1f0_1.d
                            rsi_17 = var_1f8
                        
                        int64_t rdi_32 = sx.q(rdi_31)
                        __builtin_memcpy(rsi_17, u"SendEvent.1?Sess", 0x20)
                        rsi_17[4] = 0x49006e006f0069
                        rsi_17[5].d = 0x3d0044
                        memcpy(rsi_17 + 0x2c, *rax_117, rdi_32.d * 2)
                        int32_t r8_41 = r14_29 - 1
                        *(rsi_17 + (rdi_32 << 1) + 0x2c) = 0
                        var_1f8 = nullptr
                        
                        if (r14_29 == 0)
                            r8_41 = 0
                        
                        int64_t var_1f0_2 = 0
                        sub_140a20ba0(&var_278, rsi_17, r8_41)
                        
                        if (rsi_17 != 0)
                            sub_140a74f90(rsi_17)
                        
                        int64_t rcx_214 = var_88
                        
                        if (rcx_214 != 0)
                            sub_140a74f90(rcx_214)
                        
                        int64_t var_78
                        int64_t* rax_119 = sub_14180a750(&var_78, arg1 + 0x38)
                        int32_t rcx_216 = rax_119[1].d
                        var_208 = nullptr
                        int64_t* rsi_18 = nullptr
                        int64_t var_200_1 = 0
                        int32_t rdx_117 = 0
                        int32_t rdi_33 = rcx_216 - 1
                        int32_t rcx_217 = 0
                        
                        if (rcx_216 == 0)
                            rdi_33 = 0
                        
                        if (rdi_33 + 8 s> 0)
                            sub_1405947f0(&var_208, rdi_33 + 8)
                            rcx_217 = var_200_1:4.d
                            rdx_117 = var_200_1.d
                            rsi_18 = var_208
                        
                        int32_t r14_32 = rdi_33 + 8 + rdx_117
                        var_200_1.d = r14_32
                        
                        if (r14_32 s> rcx_217)
                            sub_140594770(&var_208)
                            r14_32 = var_200_1.d
                            rsi_18 = var_208
                        
                        *rsi_18 = 0x70007000410026
                        rsi_18[1].d = 0x440049
                        *(rsi_18 + 0xc) = 0x3d
                        int64_t rdi_34 = sx.q(rdi_33)
                        memcpy(rsi_18 + 0xe, *rax_119, rdi_34.d * 2)
                        int32_t r8_43 = r14_32 - 1
                        *(rsi_18 + (rdi_34 << 1) + 0xe) = 0
                        var_208 = nullptr
                        
                        if (r14_32 == 0)
                            r8_43 = 0
                        
                        int64_t var_200_2 = 0
                        sub_140a20ba0(&var_278, rsi_18, r8_43)
                        
                        if (rsi_18 != 0)
                            sub_140a74f90(rsi_18)
                        
                        int64_t rcx_223 = var_78
                        
                        if (rcx_223 != 0)
                            sub_140a74f90(rcx_223)
                        
                        int64_t var_68
                        int64_t* rax_121 = sub_14180a750(&var_68, arg1 + 0x68)
                        int32_t rcx_225 = rax_121[1].d
                        var_218 = nullptr
                        void*** rsi_19 = nullptr
                        int64_t var_210_1 = 0
                        int32_t rdx_123 = 0
                        int32_t rdi_35 = rcx_225 - 1
                        int32_t rcx_226 = 0
                        
                        if (rcx_225 == 0)
                            rdi_35 = 0
                        
                        if (rdi_35 + 0xd s> 0)
                            sub_1405947f0(&var_218, rdi_35 + 0xd)
                            rcx_226 = var_210_1:4.d
                            rdx_123 = var_210_1.d
                            rsi_19 = var_218
                        
                        int32_t r14_35 = rdi_35 + 0xd + rdx_123
                        var_210_1.d = r14_35
                        
                        if (r14_35 s> rcx_226)
                            sub_140594770(&var_218)
                            r14_35 = var_210_1.d
                            rsi_19 = var_218
                        
                        int64_t rdi_36 = sx.q(rdi_35)
                        __builtin_memcpy(rsi_19, u"&AppVersion=", 0x18)
                        memcpy(&rsi_19[3], *rax_121, rdi_36.d * 2)
                        int32_t r8_45 = r14_35 - 1
                        *(rsi_19 + (rdi_36 << 1) + 0x18) = 0
                        var_218 = nullptr
                        
                        if (r14_35 == 0)
                            r8_45 = 0
                        
                        int64_t var_210_2 = 0
                        sub_140a20ba0(&var_278, rsi_19, r8_45)
                        
                        if (rsi_19 != 0)
                            sub_140a74f90(rsi_19)
                        
                        int64_t rcx_232 = var_68
                        
                        if (rcx_232 != 0)
                            sub_140a74f90(rcx_232)
                        
                        int64_t* rax_123 = sub_14180a750(&var_148, arg1 + 0xa8)
                        int32_t rcx_234 = rax_123[1].d
                        var_228 = nullptr
                        int64_t* rsi_20 = nullptr
                        int64_t var_220_1 = 0
                        int32_t rdx_129 = 0
                        int32_t rdi_37 = rcx_234 - 1
                        int32_t rcx_235 = 0
                        
                        if (rcx_234 == 0)
                            rdi_37 = 0
                        
                        if (rdi_37 + 9 s> 0)
                            sub_1405947f0(&var_228, rdi_37 + 9)
                            rcx_235 = var_220_1:4.d
                            rdx_129 = var_220_1.d
                            rsi_20 = var_228
                        
                        int32_t r14_38 = rdi_37 + 9 + rdx_129
                        var_220_1.d = r14_38
                        
                        if (r14_38 s> rcx_235)
                            sub_140594770(&var_228)
                            r14_38 = var_220_1.d
                            rsi_20 = var_228
                        
                        int64_t rdi_38 = sx.q(rdi_37)
                        *rsi_20 = (*u"&UserID=")[0].o
                        memcpy(&rsi_20[2], *rax_123, rdi_38.d * 2)
                        int32_t r8_47 = r14_38 - 1
                        *(rsi_20 + (rdi_38 << 1) + 0x10) = 0
                        var_228 = nullptr
                        
                        if (r14_38 == 0)
                            r8_47 = 0
                        
                        int64_t var_220_2 = 0
                        sub_140a20ba0(&var_278, rsi_20, r8_47)
                        
                        if (rsi_20 != 0)
                            sub_140a74f90(rsi_20)
                        
                        int64_t rcx_241 = var_148
                        
                        if (rcx_241 != 0)
                            sub_140a74f90(rcx_241)
                        
                        int64_t* rax_125 = sub_14180a750(&var_138, r13_2)
                        int32_t rcx_243 = rax_125[1].d
                        var_268 = 0
                        int64_t rsi_21 = 0
                        int64_t var_260_3 = 0
                        int32_t rdx_134 = 0
                        int32_t rdi_39 = rcx_243 - 1
                        int32_t rcx_244 = 0
                        
                        if (rcx_243 == 0)
                            rdi_39 = 0
                        
                        if (rdi_39 + 0xc s> 0)
                            sub_1405947f0(&var_268, rdi_39 + 0xc)
                            rcx_244 = var_260_3:4.d
                            rdx_134 = var_260_3.d
                            rsi_21 = var_268
                        
                        int32_t r14_41 = rdi_39 + 0xc + rdx_134
                        var_260_3.d = r14_41
                        
                        if (r14_41 s> rcx_244)
                            sub_140594770(&var_268)
                            r14_41 = var_260_3.d
                            rsi_21 = var_268
                        
                        int64_t rdi_40 = sx.q(rdi_39)
                        __builtin_memcpy(rsi_21, u"&EventName=", 0x16)
                        memcpy(rsi_21 + 0x16, *rax_125, rdi_40.d * 2)
                        int32_t r8_49 = r14_41 - 1
                        *(rsi_21 + (rdi_40 << 1) + 0x16) = 0
                        var_268 = 0
                        int64_t var_260_4 = 0
                        
                        if (r14_41 == 0)
                            r8_49 = 0
                        
                        sub_140a20ba0(&var_278, rsi_21, r8_49)
                        
                        if (rsi_21 != 0)
                            sub_140a74f90(rsi_21)
                        
                        int64_t rcx_250 = var_138
                        
                        if (rcx_250 != 0)
                            sub_140a74f90(rcx_250)
                        
                        int32_t r8_50 = var_250_3 - 1
                        
                        if (var_250_3 == 0)
                            r8_50 = 0
                        
                        sub_140a20ba0(&var_278, var_258, r8_50)
                        (*r15_10)[0xa](r15_10, &var_278)
                        (**r15_10)(r15_10, &var_128)
                        int64_t rcx_254 = var_128
                        
                        if (rcx_254 != 0)
                            sub_140a74f90(rcx_254)
                        
                        var_1c8 = 0
                        var_1c0.q = 0
                        sub_1405947f0(&var_1c8, 4)
                        int32_t rax_130 = var_1c0 + 4
                        var_1c0 = rax_130
                        int32_t var_1bc
                        
                        if (rax_130 s> var_1bc)
                            sub_140594770(&var_1c8)
                        
                        UnDecorator::getReferenceType(var_1c8, &data_142d85f90, 8)
                        (*r15_10)[9](r15_10, &var_1c8)
                        int64_t rcx_259 = var_1c8
                        
                        if (rcx_259 != 0)
                            sub_140a74f90(rcx_259)
                        
                        r12 = arg1
                        
                        if (*(r12 + 0xe8) == 0)
                            void** rax_132 = *r15_10
                            uint64_t (* var_158_1)(void* arg1, void* arg2, int64_t* arg3, 
                                uint64_t arg4) = sub_14180cae0
                            int32_t var_150_1 = 0
                            var_e8 = zx.o(0)
                            int64_t* rax_133 = rax_132[0x12](r15_10)
                            var_108 = var_158_1.o
                            var_118 = zx.o(0)
                            sub_1407473e0(rax_133, sub_14180b330(&var_f8, r12, &var_108, &var_118))
                            sub_140745b20(&var_f8)
                            sub_140597060(&var_e8)
                        
                        (*r15_10)[0x11](r15_10)
                        int64_t* rcx_266 = var_278
                        
                        if (rcx_266 != 0)
                            sub_140a74f90(rcx_266)
                        
                        int64_t* var_1e0
                        
                        if (var_1e0 != 0)
                            var_1e0[1].d -= 1
                            
                            if (var_1e0[1].d == 1)
                                (**var_1e0)(var_1e0)
                                int32_t temp16_1 = *(var_1e0 + 0xc)
                                *(var_1e0 + 0xc) -= 1
                                
                                if (temp16_1 == 1)
                                    (*(*var_1e0 + 8))(var_1e0, 1)
                        
                        int64_t* rcx_269 = var_258
                        
                        if (rcx_269 != 0)
                            sub_140a74f90(rcx_269)
                        
                        i_11 = i_9
                    else
                        sub_14180c530(&i_8, &r13_2[2])
                        i_11 = var_1d0_1.d
                        i_5 = i_8
                        i_9 = i_11
                    
                    r13_2 = &r13_2[6]
                    arg_10 = r13_2
                while (r13_2 != rax_101)
        else
            int64_t* r13_1 = nullptr
            var_208 = nullptr
            var_218 = nullptr
            
            if (*(r12 + 0x79) == 0)
                int64_t* rax_1 = j_sub_140a82f30(0x10)
                int64_t* rdi_2 = rax_1
                
                if (rax_1 == 0)
                    rdi_2 = nullptr
                else
                    *rax_1 = 0
                    rax_1[1] = 0
                
                var_258 = rdi_2
                void*** rax_2 = j_sub_140a82f30(0x18)
                
                if (rax_2 == 0)
                    rax_2 = nullptr
                else
                    rax_2[1].d = 1
                    *rax_2 = &data_142fe2f48
                    *(rax_2 + 0xc) = 1
                    rax_2[2] = rdi_2
                
                r13_1 = var_258
                int32_t rdx_3 = *(r12 + 0xf8)
                var_208 = r13_1
                var_218 = rax_2
                
                if (rdx_3 s> *(r13_1 + 0xc))
                    sub_1405a5220(r13_1, rdx_3)
                    var_218 = rax_2
            
            void*** rax_3 = j_sub_140a82f30(0x40)
            void*** rsi_1 = rax_3
            
            if (rax_3 == 0)
                rsi_1 = nullptr
            else
                void*** rax_4 = j_sub_140a82f30(0xa8)
                void*** r14_1 = rax_4
                
                if (rax_4 == 0)
                    r14_1 = nullptr
                else
                    arg_10 = nullptr
                    memset(rax_4, 0, 0x90)
                    sub_140b4c2a0(r14_1)
                    r14_1[0x12] = 0
                    *r14_1 = &data_142d6ad48
                    r14_1[0x13] = &rsi_1[5]
                    r14_1[0x14] = 0
                    sub_140b552b0(r14_1, 1)
                    (*r14_1)[0x1b](r14_1, 0)
                
                rsi_1[1] = r14_1
                rsi_1[2] = 0
                rsi_1[3] = 0
                *rsi_1 = &data_142d84f30
                __builtin_memset(&rsi_1[4], 0, 0x18)
                rsi_1[7] = &var_178
            
            void*** rax_6 = j_sub_140a82f30(0x18)
            
            if (rax_6 == 0)
                rax_6 = nullptr
            else
                rax_6[1].d = 1
                *rax_6 = &data_142d83c20
                *(rax_6 + 0xc) = 1
                rax_6[2] = rsi_1
            
            var_258 = rsi_1
            int64_t* rsi_2 = var_258
            
            if (rax_6 != 0)
                rax_6[1].d += 1
                
                if (rax_6 != 0)
                    rax_6[1].d -= 1
                    
                    if (rax_6[1].d == 1)
                        (**rax_6)(rax_6)
                        int32_t temp4_1 = *(rax_6 + 0xc)
                        *(rax_6 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*rax_6)[1](rax_6, 1)
            
            sub_140944dc0(rsi_2)
            var_278 = nullptr
            int32_t var_270_1 = 0
            sub_1405947f0(&var_278, 7)
            int32_t rax_9 = var_270_1 + 7
            var_270_1 = rax_9
            
            if (rax_9 s> 0)
                sub_140594770(&var_278)
            
            UnDecorator::getReferenceType(var_278, u"Events", 0xe)
            int32_t rcx_14 = rsi_2[4].d
            
            if (((rcx_14 - 2) & 0xfffffff5) != 0 || rcx_14 == 0xa)
                int64_t* rcx_15 = rsi_2[1]
                arg_10.w = 0x2c
                (*(*rcx_15 + 0x150))(rcx_15, &arg_10, 2)
            
            (*(*rsi_2 + 0x10))(rsi_2, &var_278)
            int64_t* rcx_17 = rsi_2[1]
            arg_10.w = 0x3a
            (*(*rcx_17 + 0x150))(rcx_17, &arg_10, 2)
            int64_t* rcx_18 = rsi_2[1]
            arg_10.w = 0x5b
            (*(*rcx_18 + 0x150))(rcx_18, &arg_10, 2)
            *(rsi_2 + 0x24) += 1
            void* r12_1 = &rsi_2[2]
            int64_t rdi_6 = sx.q(*(r12_1 + 8))
            int32_t rax_15 = (rdi_6 + 1).d
            *(r12_1 + 8) = rax_15
            
            if (rax_15 s> *(r12_1 + 0xc))
                sub_1406105e0(r12_1)
            
            *(*r12_1 + (rdi_6 << 2)) = 5
            rsi_2[4].d = 4
            int64_t* rcx_20 = var_278
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int64_t* rdi_7 = *(arg1 + 0xf0)
            int64_t rax_18 = sx.q(*(arg1 + 0xf8))
            var_228 = rdi_7
            void* rax_21 = &rdi_7[rax_18 * 6]
            var_248 = rax_21
            
            if (rdi_7 != rax_21)
                int64_t* r12_2 = &rdi_7[3]
                var_1f8 = r12_2
                void* rbx = &rsi_2[2]
                
                do
                    if ((r12_2[2].b & 2) == 0)
                        sub_140944dc0(rsi_2)
                        var_278 = nullptr
                        int32_t var_270_2 = 0
                        sub_1405947f0(&var_278, 0xa)
                        int32_t rax_37 = var_270_2 + 0xa
                        var_270_2 = rax_37
                        
                        if (rax_37 s> 0)
                            sub_140594770(&var_278)
                        
                        UnDecorator::getReferenceType(var_278, u"EventName", 0x14)
                        sub_140918ca0(rsi_2, &var_278, sub_140596d10(&var_e8, rdi_7))
                        int64_t* rcx_35 = var_278
                        
                        if (rcx_35 != 0)
                            sub_140a74f90(rcx_35)
                        
                        arg_10 = var_168 - r12_2[1]
                        sub_140b489f0(&arg_10, &var_1c8)
                        var_268 = 0
                        int32_t var_260_1 = 0
                        sub_1405947f0(&var_268, 0xb)
                        int32_t rax_41 = var_260_1 + 0xb
                        var_260_1 = rax_41
                        
                        if (rax_41 s> 0)
                            sub_140594770(&var_268)
                        
                        UnDecorator::getReferenceType(var_268, u"DateOffset", 0x16)
                        var_258 = nullptr
                        int64_t r14_4 = var_1c8
                        void*** var_250_2
                        var_250_2.d = var_1c0
                        
                        if (var_1c0 != 0)
                            sub_1405a4c70(&var_258, var_1c0, 0)
                            memcpy(var_258, r14_4, var_1c0 * 2)
                        else
                            var_250_2:4.d = 0
                        
                        sub_140918ca0(rsi_2, &var_268, &var_258)
                        int64_t rcx_43 = var_268
                        
                        if (rcx_43 != 0)
                            sub_140a74f90(rcx_43)
                        
                        void* i_1 = i_5
                        
                        for (void* r14_7 = sx.q(i_9) * 0x30 + i_1; i_1 != r14_7; i_1 += 0x30)
                            int32_t rcx_44 = *(i_1 + 0x2c)
                            
                            if (rcx_44 == 0)
                                sub_140918ca0(rsi_2, i_1, sub_140596d10(&var_118, i_1 + 0x10))
                            else if (rcx_44 == 1)
                                sub_140918ca0(rsi_2, i_1, sub_141812310(i_1, &var_108))
                            else if (rcx_44 == 2)
                                sub_140918ca0(rsi_2, i_1, sub_141812310(i_1, &var_f8))
                            else if (rcx_44 == 4)
                                sub_1418124d0(rsi_2, i_1, i_1 + 0x10)
                        
                        void* rdi_10 = r12_2[-1]
                        int64_t rcx_53 = sx.q(*r12_2) * 6
                        
                        if ((r12_2[2].b & 1) != 0)
                            void* r14_9 = rdi_10 + (rcx_53 << 3)
                            
                            if (rdi_10 != r14_9)
                                int32_t rcx_68 = rsi_2[4].d
                                
                                do
                                    if (((rcx_68 - 2) & 0xfffffff5) != 0 || rcx_68 == 0xa)
                                        int64_t* rcx_69 = rsi_2[1]
                                        arg_10.w = 0x2c
                                        (*(*rcx_69 + 0x150))(rcx_69, &arg_10, 2)
                                    
                                    (*(*rsi_2 + 0x10))(rsi_2, rdi_10)
                                    int64_t* rcx_71 = rsi_2[1]
                                    arg_10.w = 0x3a
                                    (*(*rcx_71 + 0x150))(rcx_71, &arg_10, 2)
                                    int32_t rax_62 = *(rdi_10 + 0x18)
                                    int64_t* r9_2 = rsi_2[1]
                                    int32_t rcx_72 = rax_62 - 1
                                    
                                    if (rax_62 == 0)
                                        rcx_72 = 0
                                    
                                    int16_t* const rdx_43
                                    
                                    if (rax_62 == 0)
                                        rdx_43 = &data_142d40450
                                    else
                                        rdx_43 = *(rdi_10 + 0x10)
                                    
                                    (*(*r9_2 + 0x150))(r9_2, rdx_43, sx.q(rcx_72) * 2)
                                    rdi_10 += 0x30
                                    rsi_2[4].d = 7
                                    rcx_68 = 7
                                while (rdi_10 != r14_9)
                                
                                r12_2 = var_1f8
                                rbx = &rsi_2[2]
                                r13_1 = var_208
                        else
                            void* r15_1 = rdi_10 + (rcx_53 << 3)
                            
                            if (rdi_10 != r15_1)
                                int64_t* r14_8 = rdi_10 + 0x10
                                
                                do
                                    int32_t rcx_54 = *(r14_8 + 0x1c)
                                    
                                    if (rcx_54 == 0)
                                        sub_140918ca0(rsi_2, rdi_10, sub_140596d10(&var_148, r14_8))
                                    else if (rcx_54 == 1)
                                        sub_140918ca0(rsi_2, rdi_10, 
                                            sub_141812310(rdi_10, &var_138))
                                    else if (rcx_54 == 2)
                                        sub_140918ca0(rsi_2, rdi_10, 
                                            sub_141812310(rdi_10, &var_128))
                                    else if (rcx_54 == 4)
                                        sub_1418124d0(rsi_2, rdi_10, r14_8)
                                    
                                    rdi_10 += 0x30
                                    r14_8 = &r14_8[6]
                                while (rdi_10 != r15_1)
                        
                        int64_t* rcx_62 = rsi_2[1]
                        *(rsi_2 + 0x24) -= 1
                        arg_10.w = 0x7d
                        (*(*rcx_62 + 0x150))(rcx_62, &arg_10, 2)
                        *(rbx + 8) -= 1
                        sub_140679af0(rbx)
                        rsi_2[4].d = 3
                        
                        if (r13_1 == 0)
                            rdi_7 = var_228
                        else
                            int64_t rdi_11 = sx.q(r13_1[1].d)
                            int32_t rax_47 = (rdi_11 + 1).d
                            r13_1[1].d = rax_47
                            
                            if (rax_47 s> *(r13_1 + 0xc))
                                sub_1405c4f50(r13_1)
                            
                            rdi_7 = var_228
                            int64_t* rdx_39 = rdi_11 * 0x30 + *r13_1
                            *rdx_39 = 0
                            *rdx_39 = *rdi_7
                            *rdi_7 = 0
                            rdx_39[1].d = r12_2[-2].d
                            *(rdx_39 + 0xc) = *(r12_2 - 0xc)
                            r12_2[-2] = 0
                            rdx_39[2] = 0
                            rdx_39[2] = r12_2[-1]
                            r12_2[-1] = 0
                            rdx_39[3].d = *r12_2
                            *(rdx_39 + 0x1c) = *(r12_2 + 4)
                            *r12_2 = 0
                            rdx_39[4] = r12_2[1]
                            rdx_39[5].d ^= (rdx_39[5].d ^ r12_2[2].d) & 1
                            rdx_39[5].d ^= (rdx_39[5].d ^ r12_2[2].d) & 2
                        
                        int64_t rcx_74 = var_1c8
                        
                        if (rcx_74 != 0)
                            sub_140a74f90(rcx_74)
                    else if (r13_1 == 0)
                        sub_14180c530(&i_8, &r12_2[-1])
                        i_9 = var_1d0_1.d
                        i_5 = i_8
                    else
                        if (&i_8 != &r12_2[-1])
                            int32_t i_6 = i_9
                            
                            if (i_6 != 0)
                                void* i_10 = i_5
                                int32_t i_2
                                
                                do
                                    int64_t rcx_21 = *(i_10 + 0x10)
                                    
                                    if (rcx_21 != 0)
                                        sub_140a74f90(rcx_21)
                                        i_6 = i_9
                                    
                                    int64_t rcx_22 = *i_10
                                    
                                    if (rcx_22 != 0)
                                        sub_140a74f90(rcx_22)
                                        i_6 = i_9
                                    
                                    i_10 += 0x30
                                    i_2 = i_6
                                    i_6 -= 1
                                    i_9 = i_6
                                while (i_2 != 1)
                            
                            var_288.d = 0
                            sub_14180b0d0(&i_8, r12_2[-1], *r12_2, var_1d0_1:4.d, 0)
                            i_9 = var_1d0_1.d
                            i_5 = i_8
                        
                        int64_t rdi_8 = sx.q(r13_1[1].d)
                        int32_t rax_24 = (rdi_8 + 1).d
                        r13_1[1].d = rax_24
                        
                        if (rax_24 s> *(r13_1 + 0xc))
                            sub_1405c4f50(r13_1)
                        
                        rdi_7 = var_228
                        int64_t* rdx_15 = rdi_8 * 0x30 + *r13_1
                        *rdx_15 = 0
                        *rdx_15 = *rdi_7
                        *rdi_7 = 0
                        rdx_15[1].d = r12_2[-2].d
                        *(rdx_15 + 0xc) = *(r12_2 - 0xc)
                        r12_2[-2] = 0
                        rdx_15[2] = 0
                        rdx_15[2] = r12_2[-1]
                        r12_2[-1] = 0
                        rdx_15[3].d = *r12_2
                        *(rdx_15 + 0x1c) = *(r12_2 + 4)
                        *r12_2 = 0
                        rdx_15[4] = r12_2[1]
                        rdx_15[5].d ^= (rdx_15[5].d ^ r12_2[2].d) & 1
                        rdx_15[5].d ^= (rdx_15[5].d ^ r12_2[2].d) & 2
                    
                    rdi_7 = &rdi_7[6]
                    r12_2 = &r12_2[6]
                    var_228 = rdi_7
                    var_1f8 = r12_2
                while (rdi_7 != var_248)
                
                r12_1 = &rsi_2[2]
            
            int64_t* rcx_75 = rsi_2[1]
            *(rsi_2 + 0x24) -= 1
            arg_10.w = 0x5d
            (*(*rcx_75 + 0x150))(rcx_75, &arg_10, 2)
            *(r12_1 + 8) -= 1
            sub_140679af0(r12_1)
            rsi_2[4].d = 5
            int64_t* rcx_77 = rsi_2[1]
            *(rsi_2 + 0x24) -= 1
            arg_10.w = 0x7d
            (*(*rcx_77 + 0x150))(rcx_77, &arg_10, 2)
            *(r12_1 + 8) -= 1
            sub_140679af0(r12_1)
            rsi_2[4].d = 3
            (*(*rsi_2 + 8))(rsi_2)
            
            if (rax_6 != 0)
                rax_6[1].d -= 1
                
                if (rax_6[1].d == 1)
                    (**rax_6)(rax_6)
                    int32_t temp8_1 = *(rax_6 + 0xc)
                    *(rax_6 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*rax_6)[1](rax_6, 1)
            
            int64_t* rax_69 = sub_14180a750(&var_1e8, arg1 + 0xb8)
            int32_t rcx_83 = rax_69[1].d
            var_278 = nullptr
            int64_t* rsi_3 = nullptr
            int64_t var_270_3 = 0
            int32_t rdx_48 = 0
            int32_t r14_10 = 0
            int32_t rdi_12 = rcx_83 - 1
            
            if (rcx_83 == 0)
                rdi_12 = 0
            
            if (rdi_12 + 0x29 s> 0)
                sub_1405947f0(&var_278, rdi_12 + 0x29)
                rdx_48 = var_270_3.d
                r14_10 = var_270_3:4.d
                rsi_3 = var_278
            
            int32_t r15_3 = rdi_12 + 0x29 + rdx_48
            var_270_3.d = r15_3
            
            if (r15_3 s> r14_10)
                sub_140594770(&var_278)
                r14_10 = var_270_3:4.d
                r15_3 = var_270_3.d
                rsi_3 = var_278
            
            int64_t rdi_13 = sx.q(rdi_12)
            __builtin_memcpy(rsi_3, u"datarouter/api/v1/public/data?SessionID=", 0x50)
            memcpy(&rsi_3[0xa], *rax_69, rdi_13.d * 2)
            *(rsi_3 + (rdi_13 << 1) + 0x50) = 0
            void*** rcx_87 = var_1e8
            var_238 = rsi_3
            int32_t var_230 = r15_3
            
            if (rcx_87 != 0)
                sub_140a74f90(rcx_87)
            
            r12 = arg1
            int64_t* rax_71 = sub_14180a750(&var_1e8, r12 + 0x38)
            int32_t rcx_89 = rax_71[1].d
            var_278 = nullptr
            int64_t* rsi_4 = nullptr
            int64_t var_270_4 = 0
            int32_t rdx_52 = 0
            int32_t rdi_14 = rcx_89 - 1
            int32_t rcx_90 = 0
            
            if (rcx_89 == 0)
                rdi_14 = 0
            
            if (rdi_14 + 8 s> 0)
                sub_1405947f0(&var_278, rdi_14 + 8)
                rcx_90 = var_270_4:4.d
                rdx_52 = var_270_4.d
                rsi_4 = var_278
            
            int32_t r14_13 = rdi_14 + 8 + rdx_52
            var_270_4.d = r14_13
            
            if (r14_13 s> rcx_90)
                sub_140594770(&var_278)
                r14_13 = var_270_4.d
                rsi_4 = var_278
            
            *rsi_4 = 0x70007000410026
            rsi_4[1].d = 0x440049
            *(rsi_4 + 0xc) = 0x3d
            int64_t rdi_15 = sx.q(rdi_14)
            memcpy(rsi_4 + 0xe, *rax_71, rdi_15.d * 2)
            *(rsi_4 + (rdi_15 << 1) + 0xe) = 0
            int32_t r8_15
            
            if (r14_13 == 0)
                r8_15 = 0
            else
                r8_15 = r14_13 - 1
            
            sub_140a20ba0(&var_238, rsi_4, r8_15)
            
            if (rsi_4 != 0)
                sub_140a74f90(rsi_4)
            
            void*** rcx_96 = var_1e8
            
            if (rcx_96 != 0)
                sub_140a74f90(rcx_96)
            
            int64_t* rax_73 = sub_14180a750(&var_1e8, r12 + 0x68)
            int32_t rdx_57 = 0
            var_278 = nullptr
            int64_t* rsi_5 = nullptr
            var_270_4.d = 0
            int32_t rcx_98 = rax_73[1].d
            int32_t rdi_16 = rcx_98 - 1
            int32_t rcx_99 = 0
            
            if (rcx_98 == 0)
                rdi_16 = 0
            
            var_270_4:4.d = 0
            
            if (rdi_16 + 0xd s> 0)
                sub_1405947f0(&var_278, rdi_16 + 0xd)
                rcx_99 = var_270_4:4.d
                rdx_57 = var_270_4.d
                rsi_5 = var_278
            
            int32_t r14_16 = rdi_16 + 0xd + rdx_57
            var_270_4.d = r14_16
            
            if (r14_16 s> rcx_99)
                sub_140594770(&var_278)
                r14_16 = var_270_4.d
                rsi_5 = var_278
            
            int64_t rdi_17 = sx.q(rdi_16)
            __builtin_memcpy(rsi_5, u"&AppVersion=", 0x18)
            memcpy(&rsi_5[3], *rax_73, rdi_17.d * 2)
            *(rsi_5 + (rdi_17 << 1) + 0x18) = 0
            int32_t r8_17
            
            if (r14_16 == 0)
                r8_17 = 0
            else
                r8_17 = r14_16 - 1
            
            sub_140a20ba0(&var_238, rsi_5, r8_17)
            
            if (rsi_5 != 0)
                sub_140a74f90(rsi_5)
            
            void*** rcx_105 = var_1e8
            
            if (rcx_105 != 0)
                sub_140a74f90(rcx_105)
            
            int64_t* rax_75 = sub_14180a750(&var_1e8, r12 + 0xa8)
            int32_t rdx_62 = 0
            var_278 = nullptr
            int64_t* rsi_6 = nullptr
            var_270_4.d = 0
            int32_t rcx_107 = rax_75[1].d
            int32_t rdi_18 = rcx_107 - 1
            int32_t rcx_108 = 0
            
            if (rcx_107 == 0)
                rdi_18 = 0
            
            var_270_4:4.d = 0
            
            if (rdi_18 + 9 s> 0)
                sub_1405947f0(&var_278, rdi_18 + 9)
                rcx_108 = var_270_4:4.d
                rdx_62 = var_270_4.d
                rsi_6 = var_278
            
            int32_t r14_19 = rdi_18 + 9 + rdx_62
            var_270_4.d = r14_19
            
            if (r14_19 s> rcx_108)
                sub_140594770(&var_278)
                r14_19 = var_270_4.d
                rsi_6 = var_278
            
            int64_t rdi_19 = sx.q(rdi_18)
            *rsi_6 = (*u"&UserID=")[0].o
            memcpy(&rsi_6[2], *rax_75, rdi_19.d * 2)
            *(rsi_6 + (rdi_19 << 1) + 0x10) = 0
            int32_t r8_19
            
            if (r14_19 == 0)
                r8_19 = 0
            else
                r8_19 = r14_19 - 1
            
            sub_140a20ba0(&var_238, rsi_6, r8_19)
            
            if (rsi_6 != 0)
                sub_140a74f90(rsi_6)
            
            void*** rcx_114 = var_1e8
            
            if (rcx_114 != 0)
                sub_140a74f90(rcx_114)
            
            int64_t* rax_77 = sub_14180a750(&var_1e8, r12 + 0x80)
            int32_t rdx_67 = 0
            var_278 = nullptr
            int64_t* rsi_7 = nullptr
            var_270_4.d = 0
            int32_t rcx_116 = rax_77[1].d
            int32_t rdi_20 = rcx_116 - 1
            int32_t rcx_117 = 0
            
            if (rcx_116 == 0)
                rdi_20 = 0
            
            var_270_4:4.d = 0
            
            if (rdi_20 + 0x11 s> 0)
                sub_1405947f0(&var_278, rdi_20 + 0x11)
                rcx_117 = var_270_4:4.d
                rdx_67 = var_270_4.d
                rsi_7 = var_278
            
            int32_t r14_22 = rdi_20 + 0x11 + rdx_67
            var_270_4.d = r14_22
            
            if (r14_22 s> rcx_117)
                sub_140594770(&var_278)
                r14_22 = var_270_4.d
                rsi_7 = var_278
            
            int64_t rdi_21 = sx.q(rdi_20)
            __builtin_memcpy(rsi_7, u"&AppEnvironment=", 0x20)
            memcpy(&rsi_7[4], *rax_77, rdi_21.d * 2)
            *(rsi_7 + (rdi_21 << 1) + 0x20) = 0
            int32_t r8_21
            
            if (r14_22 == 0)
                r8_21 = 0
            else
                r8_21 = r14_22 - 1
            
            sub_140a20ba0(&var_238, rsi_7, r8_21)
            
            if (rsi_7 != 0)
                sub_140a74f90(rsi_7)
            
            void*** rcx_123 = var_1e8
            
            if (rcx_123 != 0)
                sub_140a74f90(rcx_123)
            
            int64_t* rax_79 = sub_14180a750(&var_1e8, r12 + 0x90)
            int32_t rdx_72 = 0
            var_278 = nullptr
            int64_t* rsi_8 = nullptr
            var_270_4.d = 0
            int32_t rcx_125 = rax_79[1].d
            int32_t rdi_22 = rcx_125 - 1
            int32_t rcx_126 = 0
            
            if (rcx_125 == 0)
                rdi_22 = 0
            
            var_270_4:4.d = 0
            
            if (rdi_22 + 0xd s> 0)
                sub_1405947f0(&var_278, rdi_22 + 0xd)
                rcx_126 = var_270_4:4.d
                rdx_72 = var_270_4.d
                rsi_8 = var_278
            
            int32_t r14_25 = rdi_22 + 0xd + rdx_72
            var_270_4.d = r14_25
            
            if (r14_25 s> rcx_126)
                sub_140594770(&var_278)
                r14_25 = var_270_4.d
                rsi_8 = var_278
            
            int64_t rdi_23 = sx.q(rdi_22)
            __builtin_memcpy(rsi_8, u"&UploadType=", 0x18)
            memcpy(&rsi_8[3], *rax_79, rdi_23.d * 2)
            *(rsi_8 + (rdi_23 << 1) + 0x18) = 0
            int32_t r8_23
            
            if (r14_25 == 0)
                r8_23 = 0
            else
                r8_23 = r14_25 - 1
            
            sub_140a20ba0(&var_238, rsi_8, r8_23)
            
            if (rsi_8 != 0)
                sub_140a74f90(rsi_8)
            
            void*** rcx_132 = var_1e8
            
            if (rcx_132 != 0)
                sub_140a74f90(rcx_132)
            
            sub_14180c740(r12, &var_190)
            var_268 = 0
            int32_t var_260_2 = 0
            sub_1405947f0(&var_268, 0x20)
            int32_t rax_81 = var_260_2 + 0x20
            var_260_2 = rax_81
            
            if (rax_81 s> 0)
                sub_140594770(&var_268)
            
            UnDecorator::getReferenceType(var_268, u"application/json; charset=utf-8", 0x40)
            var_278 = nullptr
            int32_t var_270_5 = 0
            sub_1405947f0(&var_278, 0xd)
            int32_t rax_82 = var_270_5 + 0xd
            var_270_5 = rax_82
            
            if (rax_82 s> 0)
                sub_140594770(&var_278)
            
            UnDecorator::getReferenceType(var_278, u"Content-Type", 0x1a)
            int64_t* rdi_24 = var_190
            (*(*rdi_24 + 0x78))(rdi_24, &var_278, &var_268)
            int64_t* rcx_141 = var_278
            
            if (rcx_141 != 0)
                sub_140a74f90(rcx_141)
            
            int64_t rcx_142 = var_268
            
            if (rcx_142 != 0)
                sub_140a74f90(rcx_142)
            
            int32_t rsi_10
            
            if (r14_10 == 0)
                rsi_10 = 0
            else
                rsi_10 = r14_10 - 1
            
            int32_t r8_25 = *(r12 + 0x50)
            int32_t rax_85
            
            if (r8_25 != 0 || rsi_10 == 0xffffffff)
                rax_85 = 1
            else
                rax_85 = r8_25 + 2
            
            int64_t rdx_80 = *(r12 + 0x48)
            var_258 = nullptr
            var_288.d = rax_85 + rsi_10
            sub_140596860(&var_258, rdx_80, r8_25, 0, var_288)
            sub_140a2cf70(&var_258, var_238, rsi_10)
            (*(*rdi_24 + 0x50))(rdi_24, &var_258)
            int64_t* rcx_146 = var_258
            
            if (rcx_146 != 0)
                sub_140a74f90(rcx_146)
            
            var_278 = nullptr
            int32_t var_270_6 = 0
            sub_1405947f0(&var_278, 5)
            int32_t rax_88 = var_270_6 + 5
            var_270_6 = rax_88
            
            if (rax_88 s> 0)
                sub_140594770(&var_278)
            
            UnDecorator::getReferenceType(var_278, u"POST", 0xa)
            (*(*rdi_24 + 0x48))(rdi_24, &var_278)
            int64_t* rcx_151 = var_278
            
            if (rcx_151 != 0)
                sub_140a74f90(rcx_151)
            
            (*(*rdi_24 + 0x60))(rdi_24, &var_178)
            void*** rsi_11 = var_218
            
            if (*(r12 + 0xe8) == 0)
                int32_t var_1a0_1 = 0
                var_1a8 = sub_14180cae0
                var_1e8.o = var_1a8.o
                var_1a8 = r13_1
                var_1a0_1.q = rsi_11
                
                if (rsi_11 != 0)
                    rsi_11[1].d += 1
                
                sub_14180aff0((*(*rdi_24 + 0x90))(rdi_24), r12, &var_1e8, &var_1a8)
            
            (*(*rdi_24 + 0x88))(rdi_24)
            int64_t* rdi_25 = var_188.q
            
            if (rdi_25 != 0)
                rdi_25[1].d -= 1
                
                if (rdi_25[1].d == 1)
                    (**rdi_25)(rdi_25)
                    int32_t temp18_1 = *(rdi_25 + 0xc)
                    *(rdi_25 + 0xc) -= 1
                    
                    if (temp18_1 == 1)
                        (*(*rdi_25 + 8))(rdi_25, 1)
            
            int64_t* rcx_158 = var_238
            
            if (rcx_158 != 0)
                sub_140a74f90(rcx_158)
            
            if (rsi_11 != 0)
                rsi_11[1].d -= 1
                
                if (rsi_11[1].d == 1)
                    (**rsi_11)(rsi_11)
                    int32_t temp20_1 = *(rsi_11 + 0xc)
                    *(rsi_11 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*rsi_11)[1](rsi_11, 1)
        *(r12 + 0xe4) = *(r12 + 0xcc)
        int32_t rax_139 = *(r12 + 0xfc)
        int64_t* rdi_43 = *(r12 + 0xf0)
        int32_t i_7 = *(r12 + 0xf8)
        int32_t rdi_44
        
        if (rax_139 s< 0)
            if (i_7 != 0)
                int32_t i_3
                
                do
                    sub_14180c130(&rdi_43[2])
                    int64_t rcx_273 = *rdi_43
                    
                    if (rcx_273 != 0)
                        sub_140a74f90(rcx_273)
                    
                    rdi_43 = &rdi_43[6]
                    i_3 = i_7
                    i_7 -= 1
                while (i_3 != 1)
                rax_139 = *(r12 + 0xfc)
            
            *(r12 + 0xf8) = 0
            rdi_44 = 0
            
            if (rax_139 != 0)
                sub_1405a5220(r12 + 0xf0, 0)
                rdi_44 = *(r12 + 0xf8)
        else
            if (i_7 != 0)
                int32_t i_4
                
                do
                    sub_14180c130(&rdi_43[2])
                    int64_t rcx_271 = *rdi_43
                    
                    if (rcx_271 != 0)
                        sub_140a74f90(rcx_271)
                    
                    rdi_43 = &rdi_43[6]
                    i_4 = i_7
                    i_7 -= 1
                while (i_4 != 1)
            
            *(r12 + 0xf8) = 0
            rdi_44 = 0
        
        var_258 = nullptr
        int64_t var_250_4 = 0
        *(r12 + 0xf8) = rdi_44 + 1
        
        if (rdi_44 + 1 s> *(r12 + 0xfc))
            sub_1405c4f50(r12 + 0xf0)
        
        sub_14180b590(sx.q(rdi_44) * 0x30 + *(r12 + 0xf0), &var_258, &i_8, 0, 1)
        int64_t* rcx_279 = var_258
        
        if (rcx_279 != 0)
            sub_140a74f90(rcx_279)
        
        result = sub_14180c130(&i_8)
        int64_t rcx_281 = var_178
        
        if (rcx_281 != 0)
            result = sub_140a74f90(rcx_281)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
