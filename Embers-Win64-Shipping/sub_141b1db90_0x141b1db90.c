// 函数: sub_141b1db90
// 地址: 0x141b1db90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t* r12 = arg2
int64_t* var_338 = r12
int64_t* rax_3 = (*(*r12 + 0x78))(r12)
int64_t result = sub_1423de540(data_143f5b298, rax_3, 1)

if (result != 0)
    TEB* gsbase
    
    if (data_143f2c768
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2c768)
        
        if (data_143f2c768 == 0xffffffff)
            data_143f2c740 = 0
            __builtin_memset(&data_143f2c748, 0, 0x20)
            atexit(sub_142cf5530)
            _Init_thread_footer(&data_143f2c768)
    
    result = sub_142437350(result, *(arg1 + 8))
    int64_t result_1 = result
    
    if (result != 0)
        void* rcx_5 = *(arg1 + 0x28)
        void* rdi_1 = arg1 + 0x10
        
        if (rcx_5 != 0)
            rdi_1 = rcx_5
        
        int64_t* i_6 = nullptr
        int64_t var_370_1 = 0
        void* r15_1 = rdi_1 + sx.q(*(arg1 + 0x30)) * 0xc
        
        if (rdi_1 != r15_1)
            do
                int64_t i_10 = *rdi_1
                int64_t i_7 = i_10
                int64_t i_16 = i_10
                void** const var_2f8 = &data_143057178
                int32_t i
                
                do
                    i = data_143f2c740
                    data_143f2c740 = 1
                while (i != 0)
                int64_t* rdx_5 = data_143f2c758
                int64_t rbx_1 = sx.q(data_143f2c760)
                int64_t* rcx_7 = rdx_5
                int64_t i_1 = i_7
                void* r8_1 = &rdx_5[rbx_1]
                int32_t rcx_19
                
                if (rdx_5 != r8_1)
                    while (*rcx_7 != i_1)
                        rcx_7 = &rcx_7[1]
                        
                        if (rcx_7 == r8_1)
                            goto label_141b1dcf2
                    
                    rcx_19 = ((rcx_7 - rdx_5) s>> 3).d
                
                int64_t rsi_2
                
                if (rdx_5 == r8_1 || rcx_19 == 0xffffffff)
                label_141b1dcf2:
                    int32_t rcx_8 = (rbx_1 + 1).d
                    bool cond:1_1 = rcx_8 s<= data_143f2c764
                    data_143f2c760 = rcx_8
                    
                    if (not(cond:1_1))
                        sub_1405a4d70(&data_143f2c758)
                        i_1 = i_7
                        rdx_5 = data_143f2c758
                    
                    rdx_5[rbx_1] = i_1
                    int64_t rax_6 = sub_141a4fae0(&data_143f2c740, data_143f2c750)
                    int64_t rbx_2 = sx.q(data_143f2c750)
                    rsi_2 = rax_6
                    int32_t rax_7 = (rbx_2 + 1).d
                    bool cond:3_1 = rax_7 s<= data_143f2c754
                    data_143f2c750 = rax_7
                    
                    if (not(cond:3_1))
                        sub_1405a4d70(&data_143f2c748)
                    
                    *(data_143f2c748 + (rbx_2 << 3)) = rsi_2
                else
                    rsi_2 = *(data_143f2c748 + (sx.q(rcx_19) << 3))
                
                data_143f2c740 = 0
                int32_t var_310_1 = r12[0x5b].d
                int64_t var_318 = r12[0x5a]
                sub_1405c5900(&r12[0x1f], rsi_2, &var_2f8, result_1, *(r12 + 0x2dc), &var_318)
                int128_t zmm2_1 = *(rdi_1 + 8)
                int64_t i_12 = i_7
                var_2f8 = &data_142d4ba10
                
                if (sub_142155950(result_1, i_12, zmm2_1) == 0)
                    int64_t var_288
                    int64_t* rax_12 = sub_140b63b70(&i_7, &var_288)
                    int64_t rsi_3 = sx.q(var_370_1.d)
                    int32_t rcx_12 = (rsi_3 + 1).d
                    var_370_1.d = rcx_12
                    
                    if (rcx_12 s> var_370_1:4.d)
                        sub_1405a4f90(&i_6)
                    
                    int64_t* rcx_16 = &i_6[rsi_3 * 2]
                    *rcx_16 = 0
                    *rcx_16 = *rax_12
                    *rax_12 = 0
                    rcx_16[1].d = rax_12[1].d
                    *(rcx_16 + 0xc) = *(rax_12 + 0xc)
                    rax_12[1] = 0
                    int64_t rcx_17 = var_288
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                
                rdi_1 += 0xc
            while (rdi_1 != r15_1)
            
            r12 = var_338
        
        void* rax_17 = *(arg1 + 0xf8)
        void* rdi_2 = arg1 + 0xc8
        
        if (rax_17 != 0)
            rdi_2 = rax_17
        
        void* r15_2 = rdi_2 + sx.q(*(arg1 + 0x100)) * 0x18
        
        if (rdi_2 != r15_2)
            do
                int64_t i_11 = *rdi_2
                int64_t i_8 = i_11
                int64_t i_17 = i_11
                void** const var_2e8 = &data_1430571a0
                int32_t i_2
                
                do
                    i_2 = data_143f2c740
                    data_143f2c740 = 1
                while (i_2 != 0)
                int64_t* rdx_12 = data_143f2c758
                int64_t rbx_4 = sx.q(data_143f2c760)
                int64_t* rcx_23 = rdx_12
                int64_t i_3 = i_8
                void* r8_3 = &rdx_12[rbx_4]
                int32_t rcx_35
                
                if (rdx_12 != r8_3)
                    while (*rcx_23 != i_3)
                        rcx_23 = &rcx_23[1]
                        
                        if (rcx_23 == r8_3)
                            goto label_141b1df12
                    
                    rcx_35 = ((rcx_23 - rdx_12) s>> 3).d
                
                int64_t rsi_4
                
                if (rdx_12 == r8_3 || rcx_35 == 0xffffffff)
                label_141b1df12:
                    int32_t rcx_24 = (rbx_4 + 1).d
                    bool cond:2_1 = rcx_24 s<= data_143f2c764
                    data_143f2c760 = rcx_24
                    
                    if (not(cond:2_1))
                        sub_1405a4d70(&data_143f2c758)
                        i_3 = i_8
                        rdx_12 = data_143f2c758
                    
                    rdx_12[rbx_4] = i_3
                    int64_t rax_20 = sub_141a4fae0(&data_143f2c740, data_143f2c750)
                    int64_t rbx_5 = sx.q(data_143f2c750)
                    rsi_4 = rax_20
                    int32_t rax_21 = (rbx_5 + 1).d
                    bool cond:4_1 = rax_21 s<= data_143f2c754
                    data_143f2c750 = rax_21
                    
                    if (not(cond:4_1))
                        sub_1405a4d70(&data_143f2c748)
                    
                    *(data_143f2c748 + (rbx_5 << 3)) = rsi_4
                else
                    rsi_4 = *(data_143f2c748 + (sx.q(rcx_35) << 3))
                
                data_143f2c740 = 0
                int32_t var_300_1 = r12[0x5b].d
                int64_t var_308 = r12[0x5a]
                sub_1405c5900(&r12[0x1f], rsi_4, &var_2e8, result_1, *(r12 + 0x2dc), &var_308)
                int64_t i_13 = i_8
                var_2e8 = &data_142d4ba10
                
                if (sub_142155a60(result_1, i_13, rdi_2 + 8) == 0)
                    int64_t var_278
                    int64_t* rax_26 = sub_140b63b70(&i_8, &var_278)
                    int64_t rsi_5 = sx.q(var_370_1.d)
                    int32_t rcx_28 = (rsi_5 + 1).d
                    var_370_1.d = rcx_28
                    
                    if (rcx_28 s> var_370_1:4.d)
                        sub_1405a4f90(&i_6)
                    
                    int64_t* rcx_32 = &i_6[rsi_5 * 2]
                    *rcx_32 = 0
                    *rcx_32 = *rax_26
                    *rax_26 = 0
                    rcx_32[1].d = rax_26[1].d
                    *(rcx_32 + 0xc) = *(rax_26 + 0xc)
                    rax_26[1] = 0
                    int64_t rcx_33 = var_278
                    
                    if (rcx_33 != 0)
                        sub_140a74f90(rcx_33)
                
                rdi_2 += 0x18
            while (rdi_2 != r15_2)
            
            r12 = var_338
        
        result = sx.q(var_370_1.d)
        
        if (result.d != 0 && *(result_1 + 0x28) == 0)
            int64_t* i_4 = i_6
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x2c)
            int32_t var_84_1 = 0
            int64_t var_78_1 = 0
            int32_t var_70_1 = 0
            int64_t var_348 = 0
            char rsi_1 = 1
            int32_t var_8c_1 = 0x80
            int32_t var_88_1 = 0xffffffff
            int64_t var_340_1 = 0
            
            for (; i_4 != &i_4[result * 2]; i_4 = &i_4[2])
                if (rsi_1 == 0)
                    sub_140a20ba0(&var_348, &data_142d8adc4, 2)
                else
                    rsi_1 = 0
                
                int32_t rax_31 = i_4[1].d
                int32_t r8_6 = rax_31 - 1
                
                if (rax_31 == 0)
                    r8_6 = 0
                
                sub_140a20ba0(&var_348, *i_4, r8_6)
            
            void var_1b8
            int64_t* rax_32 = sub_140aae2f0(&var_1b8, &var_348)
            int32_t var_68 = 4
            int64_t var_58_1 = *rax_32
            int64_t* rcx_41 = rax_32[1]
            
            if (rcx_41 != 0)
                rcx_41[1].d += 1
            
            int32_t var_48_1 = rax_32[2].d
            char var_40_1 = 1
            int64_t var_368 = 0
            int32_t var_360_1 = 0
            sub_1405947f0(&var_368, 0xb)
            int32_t rax_34 = var_360_1 + 0xb
            var_360_1 = rax_34
            
            if (rax_34 s> 0)
                sub_140594770(&var_368)
            
            UnDecorator::getReferenceType(var_368, u"ParamNames", 0x16)
            sub_140acb5e0(&var_b8, &var_368, &var_68)
            int64_t rcx_46 = var_368
            
            if (rcx_46 != 0)
                sub_140a74f90(rcx_46)
            
            if (var_40_1 != 0 && rcx_41 != 0)
                rcx_41[1].d -= 1
                
                if (rcx_41[1].d == 1)
                    (**rcx_41)(rcx_41)
                    int32_t rax_37 = *(rcx_41 + 0xc)
                    *(rcx_41 + 0xc) -= 1
                    
                    if (rax_37 == 1)
                        (*(*rcx_41 + 8))(rcx_41, 1)
            
            int64_t* var_1b0
            
            if (var_1b0 != 0)
                var_1b0[1].d -= 1
                
                if (var_1b0[1].d == 1)
                    (**var_1b0)(var_1b0)
                    int32_t rax_41 = *(var_1b0 + 0xc)
                    *(var_1b0 + 0xc) -= 1
                    
                    if (rax_41 == 1)
                        (*(*var_1b0 + 8))(var_1b0, 1)
            
            int64_t rcx_52 = var_348
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
            
            void*** var_1c8
            void var_128
            void var_110
            char* var_f8
            void**** rax_46 = sub_140a005b0(&var_1c8, 
                sub_140aaca20(&var_128, 
                    sub_140a96390(&var_f8, 
                        _vfprintf_p_l(&var_110, 
                            with the following invalid parameters: {ParamNames}.", 
                        MaterialParameterCollectionTrack")), &var_b8))
            void*** var_298 = *rax_46
            int64_t* rcx_58 = rax_46[1]
            
            if (rcx_58 != 0)
                rcx_58[1].d += 1
            
            void var_140
            int64_t* rax_47 = sub_140a96170(&var_140)
            void*** var_1d8
            void**** rax_49 = sub_140b9e470(&var_1d8, *(arg1 + 8), rax_47)
            void*** var_2a8 = *rax_49
            int64_t* rcx_62 = rax_49[1]
            
            if (rcx_62 != 0)
                rcx_62[1].d += 1
            
            void*** var_1e8
            void var_158
            void**** rax_51 = sub_140a005b0(&var_1e8, 
                _vfprintf_p_l(&var_158, &data_142fdca48, MaterialParameterCollectionTrack"))
            void*** var_2b8 = *rax_51
            int64_t* rdx_28 = rax_51[1]
            
            if (rdx_28 != 0)
                rdx_28[1].d += 1
            
            void var_170
            int64_t* rax_52 = sub_140a96170(&var_170)
            int64_t rdx_29 = *r12
            void*** var_1f8
            void**** rax_55 = sub_140b9e470(&var_1f8, 
                sub_141a528b0((*(rdx_29 + 8))(r12, rdx_29), &data_143f2c430), rax_52)
            void*** var_2c8 = *rax_55
            int64_t* rcx_71 = rax_55[1]
            
            if (rcx_71 != 0)
                rcx_71[1].d += 1
            
            void*** var_208
            void var_188
            void**** rax_57 = sub_140a005b0(&var_208, 
                _vfprintf_p_l(&var_188, Invalid parameter name or type applied in sequence", 
                MaterialParameterCollectionTrack"))
            void*** var_2d8 = *rax_57
            int64_t* rcx_75 = rax_57[1]
            
            if (rcx_75 != 0)
                rcx_75[1].d += 1
            
            void var_328
            sub_140b58170(&var_328, "PIE", 1)
            void var_1a0
            int64_t* rax_58 = sub_140a96170(&var_1a0)
            void var_248
            void var_238
            void var_228
            void var_218
            void var_e8
            int64_t* rcx_83 = *sub_140aced10(
                *sub_140aced10(
                    *sub_140aced10(
                        *sub_140ae44d0(sub_140accdf0(&var_e8, &var_328), &var_218, rax_58), 
                        &var_228, &var_2d8), 
                    &var_238, &var_2c8), 
                &var_248, &var_2b8)
            void var_268
            void var_258
            sub_140aced10(*sub_140aced10(rcx_83, &var_258, &var_2a8), &var_268, &var_298)
            int64_t* var_260
            
            if (var_260 != 0)
                var_260[1].d -= 1
                
                if (var_260[1].d == 1)
                    (**var_260)(var_260)
                    int32_t temp4_1 = *(var_260 + 0xc)
                    *(var_260 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_260 + 8))(var_260, 1)
            
            int64_t* var_250
            
            if (var_250 != 0)
                var_250[1].d -= 1
                
                if (var_250[1].d == 1)
                    (**var_250)(var_250)
                    int32_t temp6_1 = *(var_250 + 0xc)
                    *(var_250 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_250 + 8))(var_250, 1)
            
            int64_t* var_240
            
            if (var_240 != 0)
                var_240[1].d -= 1
                
                if (var_240[1].d == 1)
                    (**var_240)(var_240)
                    int32_t temp8_1 = *(var_240 + 0xc)
                    *(var_240 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*var_240 + 8))(var_240, 1)
            
            int64_t* var_230
            
            if (var_230 != 0)
                var_230[1].d -= 1
                
                if (var_230[1].d == 1)
                    (**var_230)(var_230)
                    int32_t temp10_1 = *(var_230 + 0xc)
                    *(var_230 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*var_230 + 8))(var_230, 1)
            
            int64_t* var_220
            
            if (var_220 != 0)
                var_220[1].d -= 1
                
                if (var_220[1].d == 1)
                    (**var_220)(var_220)
                    int32_t temp12_1 = *(var_220 + 0xc)
                    *(var_220 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*var_220 + 8))(var_220, 1)
            
            int64_t* var_210
            
            if (var_210 != 0)
                var_210[1].d -= 1
                
                if (var_210[1].d == 1)
                    (**var_210)(var_210)
                    int32_t temp13_1 = *(var_210 + 0xc)
                    *(var_210 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*var_210 + 8))(var_210, 1)
            
            sub_140acd9c0(&var_e8)
            int64_t* var_198
            
            if (var_198 != 0)
                var_198[1].d -= 1
                
                if (var_198[1].d == 1)
                    (**var_198)(var_198)
                    int32_t rax_79 = *(var_198 + 0xc)
                    *(var_198 + 0xc) -= 1
                    
                    if (rax_79 == 1)
                        (*(*var_198 + 8))(var_198, 1)
            
            if (rcx_75 != 0)
                rcx_75[1].d -= 1
                
                if (rcx_75[1].d == 1)
                    (**rcx_75)(rcx_75)
                    int32_t temp16_1 = *(rcx_75 + 0xc)
                    *(rcx_75 + 0xc) -= 1
                    
                    if (temp16_1 == 1)
                        (*(*rcx_75 + 8))(rcx_75, 1)
            
            int64_t* var_200
            
            if (var_200 != 0)
                var_200[1].d -= 1
                
                if (var_200[1].d == 1)
                    (**var_200)(var_200)
                    int32_t temp17_1 = *(var_200 + 0xc)
                    *(var_200 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        (*(*var_200 + 8))(var_200, 1)
            
            int64_t* var_180
            
            if (var_180 != 0)
                var_180[1].d -= 1
                
                if (var_180[1].d == 1)
                    (**var_180)(var_180)
                    int32_t rax_87 = *(var_180 + 0xc)
                    *(var_180 + 0xc) -= 1
                    
                    if (rax_87 == 1)
                        (*(*var_180 + 8))(var_180, 1)
            
            if (rcx_71 != 0)
                rcx_71[1].d -= 1
                
                if (rcx_71[1].d == 1)
                    (**rcx_71)(rcx_71)
                    int32_t temp20_1 = *(rcx_71 + 0xc)
                    *(rcx_71 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        (*(*rcx_71 + 8))(rcx_71, 1)
            
            int64_t* var_1f0
            
            if (var_1f0 != 0)
                var_1f0[1].d -= 1
                
                if (var_1f0[1].d == 1)
                    (**var_1f0)(var_1f0)
                    int32_t temp21_1 = *(var_1f0 + 0xc)
                    *(var_1f0 + 0xc) -= 1
                    
                    if (temp21_1 == 1)
                        (*(*var_1f0 + 8))(var_1f0, 1)
            
            int64_t* var_168
            
            if (var_168 != 0)
                var_168[1].d -= 1
                
                if (var_168[1].d == 1)
                    (**var_168)(var_168)
                    int32_t rax_95 = *(var_168 + 0xc)
                    *(var_168 + 0xc) -= 1
                    
                    if (rax_95 == 1)
                        (*(*var_168 + 8))(var_168, 1)
            
            if (rdx_28 != 0)
                rdx_28[1].d -= 1
                
                if (rdx_28[1].d == 1)
                    (**rdx_28)(rdx_28)
                    int32_t temp24_1 = *(rdx_28 + 0xc)
                    *(rdx_28 + 0xc) -= 1
                    
                    if (temp24_1 == 1)
                        (*(*rdx_28 + 8))(rdx_28, 1)
            
            int64_t* var_1e0
            
            if (var_1e0 != 0)
                var_1e0[1].d -= 1
                
                if (var_1e0[1].d == 1)
                    (**var_1e0)(var_1e0)
                    int32_t temp25_1 = *(var_1e0 + 0xc)
                    *(var_1e0 + 0xc) -= 1
                    
                    if (temp25_1 == 1)
                        (*(*var_1e0 + 8))(var_1e0, 1)
            
            int64_t* var_150
            
            if (var_150 != 0)
                var_150[1].d -= 1
                
                if (var_150[1].d == 1)
                    (**var_150)(var_150)
                    int32_t rax_103 = *(var_150 + 0xc)
                    *(var_150 + 0xc) -= 1
                    
                    if (rax_103 == 1)
                        (*(*var_150 + 8))(var_150, 1)
            
            if (rcx_62 != 0)
                rcx_62[1].d -= 1
                
                if (rcx_62[1].d == 1)
                    (**rcx_62)(rcx_62)
                    int32_t temp28_1 = *(rcx_62 + 0xc)
                    *(rcx_62 + 0xc) -= 1
                    
                    if (temp28_1 == 1)
                        (*(*rcx_62 + 8))(rcx_62, 1)
            
            int64_t* var_1d0
            
            if (var_1d0 != 0)
                var_1d0[1].d -= 1
                
                if (var_1d0[1].d == 1)
                    (**var_1d0)(var_1d0)
                    int32_t temp29_1 = *(var_1d0 + 0xc)
                    *(var_1d0 + 0xc) -= 1
                    
                    if (temp29_1 == 1)
                        (*(*var_1d0 + 8))(var_1d0, 1)
            
            int64_t* var_138
            
            if (var_138 != 0)
                var_138[1].d -= 1
                
                if (var_138[1].d == 1)
                    (**var_138)(var_138)
                    int32_t rax_111 = *(var_138 + 0xc)
                    *(var_138 + 0xc) -= 1
                    
                    if (rax_111 == 1)
                        (*(*var_138 + 8))(var_138, 1)
            
            if (rcx_58 != 0)
                rcx_58[1].d -= 1
                
                if (rcx_58[1].d == 1)
                    (**rcx_58)(rcx_58)
                    int32_t temp32_1 = *(rcx_58 + 0xc)
                    *(rcx_58 + 0xc) -= 1
                    
                    if (temp32_1 == 1)
                        (*(*rcx_58 + 8))(rcx_58, 1)
            
            int64_t* var_1c0
            
            if (var_1c0 != 0)
                var_1c0[1].d -= 1
                
                if (var_1c0[1].d == 1)
                    (**var_1c0)(var_1c0)
                    int32_t temp33_1 = *(var_1c0 + 0xc)
                    *(var_1c0 + 0xc) -= 1
                    
                    if (temp33_1 == 1)
                        (*(*var_1c0 + 8))(var_1c0, 1)
            
            int64_t* var_120
            
            if (var_120 != 0)
                var_120[1].d -= 1
                
                if (var_120[1].d == 1)
                    (**var_120)(var_120)
                    int32_t rax_119 = *(var_120 + 0xc)
                    *(var_120 + 0xc) -= 1
                    
                    if (rax_119 == 1)
                        (*(*var_120 + 8))(var_120, 1)
            
            int64_t* var_108
            
            if (var_108 != 0)
                var_108[1].d -= 1
                
                if (var_108[1].d == 1)
                    (**var_108)(var_108)
                    int32_t rdi_3 = *(var_108 + 0xc)
                    *(var_108 + 0xc) -= 1
                    
                    if (rdi_3 == 1)
                        (*(*var_108 + 8))(var_108, zx.q(rdi_3))
            
            *(result_1 + 0x28) = 1
            int32_t var_70_2 = 0
            
            if (var_78_1 != 0)
                sub_140a74f90(var_78_1)
            
            result = sub_140acd610(&var_b8)
        
        int32_t i_9 = var_370_1.d
        int64_t* i_14 = i_6
        
        if (i_9 != 0)
            int32_t i_5
            
            do
                int64_t rcx_134 = *i_14
                
                if (rcx_134 != 0)
                    result = sub_140a74f90(rcx_134)
                
                i_14 = &i_14[2]
                i_5 = i_9
                i_9 -= 1
            while (i_5 != 1)
        
        int64_t* i_15 = i_6
        
        if (i_15 != 0)
            result = sub_140a74f90(i_15)

__security_check_cookie(rax_1 ^ &var_3a8)
return result
