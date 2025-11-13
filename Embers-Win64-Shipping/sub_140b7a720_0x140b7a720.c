// 函数: sub_140b7a720
// 地址: 0x140b7a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
uint64_t result

if (*(arg1 + 0x78) != 0)
    result = zx.q(*(arg1 + 0x79))
else
    void var_238
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_238)
    *(arg1 + 0x78) = 1
    int64_t var_218
    __builtin_memset(&var_218, 0, 0x2c)
    int32_t var_1e4_1 = 0
    int64_t var_1d8_1 = 0
    int32_t var_1d0_1 = 0
    int64_t var_1c8
    __builtin_memset(&var_1c8, 0, 0x2c)
    int32_t var_194_1 = 0
    int64_t var_188_1 = 0
    int32_t var_180_1 = 0
    int64_t* var_3f8 = nullptr
    int32_t i_12 = 0
    int32_t var_1ec_1 = 0x80
    int32_t var_1e8_1 = 0xffffffff
    int32_t var_19c_1 = 0x80
    int32_t var_198_1 = 0xffffffff
    sub_140af2b60()
    int64_t* var_368
    int64_t var_360
    int64_t* r12_1
    int32_t i_11
    
    if (sub_140b21a10(&data_143dbb3f0, u"EnableAllPlugins") == 0)
        var_368 = nullptr
        var_360 = 0
        var_3f8 = nullptr
        i_12 = 0
        sub_140af2b60()
        sub_140b2acc0(&data_143dbb3f0, u"EnablePlugins=", &var_3f8, 0)
        sub_140a2ccb0(&var_3f8, &var_368, U",", 1)
        int64_t* rcx_3 = var_3f8
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        r12_1 = var_368
        i_11 = var_360.d
    else
        sub_140918550(arg1 + 8, &var_3f8)
        i_11 = i_12
        r12_1 = var_3f8
    
    int32_t var_3e0
    void* var_3a8
    int64_t* var_378
    int64_t var_178
    void* r13_1
    
    if (i_11 s> 0)
        var_378 = nullptr
        int32_t i_13 = 0
        var_3f8 = nullptr
        i_12 = 0
        sub_140af2b60()
        sub_140b2acc0(&data_143dbb3f0, u"ExceptPlugins=", &var_3f8, 0)
        sub_140a2ccb0(&var_3f8, &var_378, U",", 1)
        int64_t* rcx_5 = var_3f8
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t* rdi_1 = r12_1
        r13_1 = arg1
        void* r15_3 = &r12_1[sx.q(i_11) * 2]
        
        if (r12_1 == r15_3)
        label_140b7aaa3:
            int32_t i_9 = i_13
            int64_t* rbx_3 = var_378
            
            if (i_9 != 0)
                int32_t i
                
                do
                    int64_t rcx_12 = *rbx_3
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                    
                    rbx_3 = &rbx_3[2]
                    i = i_9
                    i_9 -= 1
                while (i != 1)
            
            int64_t* rcx_13 = var_378
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            goto label_140b7ab40
        
        while (true)
            if (*sub_140960120(&var_1c8, &var_3e0, rdi_1) == 0xffffffff)
                int64_t* rbx_1 = var_378
                void* rsi_3 = &rbx_1[sx.q(i_13) * 2]
                int32_t* rax_3
                
                if (rbx_1 == rsi_3)
                label_140b7a9aa:
                    rax_3.b = 0
                else
                    while (true)
                        int16_t* rdx_6
                        
                        if (rdi_1[1].d == 0)
                            rdx_6 = &data_142d40450
                        else
                            rdx_6 = *rdi_1
                        
                        int16_t* const rcx_7
                        
                        if (rbx_1[1].d == 0)
                            rcx_7 = &data_142d40450
                        else
                            rcx_7 = *rbx_1
                        
                        if (sub_140a54510(rcx_7, rdx_6).d == 0)
                            rax_3.b = 1
                            break
                        
                        rbx_1 = &rbx_1[2]
                        
                        if (rbx_1 == rsi_3)
                            goto label_140b7a9aa
                
                if (rax_3.b == 0)
                    sub_140596d10(&var_178, rdi_1)
                    int16_t var_168_1 = 1
                    int64_t var_160
                    __builtin_memset(&var_160, 0, 0x90)
                    char rax_4 = sub_140b7a090(r13_1, &var_178, &var_218)
                    sub_140b78c70(&var_178)
                    
                    if (rax_4 == 0)
                        int32_t i_10 = i_13
                        int64_t* rbx_4 = var_378
                        
                        if (i_10 != 0)
                            int32_t i_1
                            
                            do
                                int64_t rcx_14 = *rbx_4
                                
                                if (rcx_14 != 0)
                                    sub_140a74f90(rcx_14)
                                
                                rbx_4 = &rbx_4[2]
                                i_1 = i_10
                                i_10 -= 1
                            while (i_1 != 1)
                            rbx_4 = var_378
                        
                        if (rbx_4 != 0)
                            sub_140a74f90(rbx_4)
                        
                        int64_t* rbx_5 = r12_1
                        int32_t i_2
                        
                        do
                            int64_t rcx_16 = *rbx_5
                            
                            if (rcx_16 != 0)
                                sub_140a74f90(rcx_16)
                            
                            rbx_5 = &rbx_5[2]
                            i_2 = i_11
                            i_11 -= 1
                        while (i_2 != 1)
                        
                        if (r12_1 != 0)
                            sub_140a74f90(r12_1)
                        
                        break
                    
                    sub_1406b3860(&var_1c8, &var_3a8, rdi_1, nullptr)
            
            rdi_1 = &rdi_1[2]
            
            if (rdi_1 == r15_3)
                goto label_140b7aaa3
        
        goto label_140b7adbd
    
    r13_1 = arg1
label_140b7ab40:
    int64_t* rbx_6 = r12_1
    
    if (i_11 != 0)
        int32_t i_3
        
        do
            int64_t rcx_18 = *rbx_6
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            rbx_6 = &rbx_6[2]
            i_3 = i_11
            i_11 -= 1
        while (i_3 != 1)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    sub_140af2b60()
    int128_t var_3a0
    int128_t var_2d0
    int128_t zmm1_1
    int512_t zmm2
    
    if (sub_140b21a10(&data_143dbb3f0, u"NoEnginePlugins") != 0)
    label_140b7b13c:
        int32_t var_1f0
        int32_t r8_16 = var_1f0
        int32_t var_3c4_1 = 1
        int32_t var_3c8 = 0
        int64_t var_208
        int64_t* var_3c0_1 = &var_208
        int32_t var_3b8_2 = 0xffffffff
        int64_t var_3b4_1 = 0
        
        if (r8_16 != 0)
            sub_14059bdd0(&var_3c8)
            r8_16 = var_1f0
        
        zmm2.o = var_3b8_2.o
        int64_t* var_2d8_2 = &var_218
        int64_t var_2c0_2 = zmm2.q
        var_3b4_1.d = r8_16
        var_2d0 = var_3c8.o
        zmm1_1 = var_2d0
        zmm2.o = _mm_unpackhi_pd(zmm2.o, zmm2.q)
        var_3a0 = var_2d8_2.o
        int128_t var_390_2 = zmm1_1
        int64_t var_380_2 = (zmm2.o).q
        
        while (true)
            int64_t rcx_62 = sx.q(var_390_2:0xc.d)
            int64_t* rax_38 = var_3a0.q
            
            if (rcx_62.d == ((0xffffffff << (r8_16.b & 0x1f)).q u>> 0x20).d
                    && var_390_2.q == &var_208 && rax_38 == &var_218)
                break
            
            var_390_2:8.d &= not.d(var_3a0:0xc.d)
            *(*((rcx_62 << 5) + *rax_38 + 0x10) + 0x1e4) = 1
            sub_14059bdd0(&var_3a0:8)
        
        void* r13_3 = arg1 + 8
        var_3c8 = 0
        void* r8_17 = r13_3 + 0x10
        void* var_2b0_1 = r13_3
        void* var_3c0_2 = r8_17
        *(arg1 + 0x79) = 1
        int32_t rdx_33 = *(r13_3 + 0x28)
        int32_t var_3c4_2 = 1
        int32_t var_3b8_4 = 0xffffffff
        int64_t var_3b4_2 = 0
        
        if (rdx_33 != 0)
            sub_14059bdd0(&var_3c8)
            rdx_33 = *(r13_3 + 0x28)
            r8_17 = r13_3 + 0x10
        
        zmm2.o = var_3b8_4.o
        var_3a0.q = r13_3
        var_3b4_2.d = rdx_33
        var_3a0 = var_3c8.o
        int64_t* rcx_70 = (0xffffffff << (rdx_33.b & 0x1f)).q u>> 0x20
        int128_t zmm0_1 = var_3a0
        var_378 = rcx_70
        var_390_2 = zmm2.o
        zmm2.o = _mm_unpackhi_pd(zmm2.o, zmm2.q)
        var_2d8_2.o = zmm0_1
        var_2d0 = var_390_2
        var_2c0_2 = (zmm2.o).q
        int32_t var_428
        int16_t* var_3d8
        uint64_t var_348
        int32_t var_340
        uint64_t var_318
        int32_t var_310
        int16_t* var_308
        int32_t var_300
        int64_t** i_7
        int32_t var_2e0
        
        while (true)
            int64_t rax_43 = sx.q(var_2c0_2:4.d)
            
            if (rax_43.d == rcx_70.d && var_2d0:8.q == r8_17 && var_2d8_2 == r13_3)
                break
            
            void* rbx_12 = *(*var_2d8_2 + rax_43 * 0x28 + 0x10)
            
            if (*(rbx_12 + 0x1e4) != 0 && *(rbx_12 + 0x127) == 0)
                if (*(rbx_12 + 0x121) != 0)
                    int64_t* rax_45
                    rax_45, zmm2 = sub_140aefb30(data_143ddb400, &data_143de5780, 0)
                    
                    if (rax_45 != 0)
                        int64_t var_2f8 = 0
                        int32_t var_2f0_1 = 0
                        sub_1405947f0(&var_2f8, 0xc)
                        int32_t rcx_74 = var_2f0_1 + 0xc
                        var_2f0_1 = rcx_74
                        
                        if (rcx_74 s> 0)
                            sub_140594770(&var_2f8)
                        
                        int64_t rsi_6 = var_2f8
                        UnDecorator::getReferenceType(rsi_6, u"Core.System", 0x18)
                        sub_140a452d0(rax_45, &var_3e0, &var_2f8)
                        int64_t rax_46 = sx.q(var_3e0)
                        void* const rax_48
                        
                        if (rax_46.d == 0xffffffff)
                            rax_48 = nullptr
                        else
                            rax_48 = rax_46 * 0xb8 + *rax_45
                        
                        int64_t* rdi_8 = rax_48 + 0x10
                        
                        if (rax_48 == 0)
                            rdi_8 = nullptr
                        
                        if (rsi_6 != 0)
                            sub_140a74f90(rsi_6)
                        
                        if (rdi_8 != 0)
                            int64_t var_298
                            int64_t* rax_49
                            int32_t r8_19
                            rax_49, r8_19 = sub_140b1a780(&var_298, rbx_12 + 0x18)
                            sub_140596690(&var_368, rax_49, 
                                sbb.d(r8_19, r8_19, rax_49[1].d != 0) + 9)
                            sub_140a2cf70(&var_368, u"Content", 7)
                            int64_t rcx_82 = var_298
                            
                            if (rcx_82 != 0)
                                sub_140a74f90(rcx_82)
                            
                            var_3c8.q = var_368
                            var_3c0_2.d = var_360.d
                            var_3c0_2:4.d = var_360:4.d
                            var_360 = 0
                            var_368 = nullptr
                            int32_t var_3b8_5
                            var_3b8_5.q = 0
                            var_3b4_2 = 0
                            sub_140aef990(&var_3c8)
                            zmm2 = sub_140b58170(&var_3a8, "Paths", 1)
                            sub_140b76c60(rdi_8, &var_3a8, &var_3c8)
                            int64_t rcx_86 = var_3b8_5.q
                            
                            if (rcx_86 != 0)
                                sub_140a74f90(rcx_86)
                            
                            int64_t rcx_87 = var_3c8.q
                            
                            if (rcx_87 != 0)
                                sub_140a74f90(rcx_87)
                            
                            int64_t* rcx_88 = var_368
                            
                            if (rcx_88 != 0)
                                sub_140a74f90(rcx_88)
                
                int64_t var_288
                int64_t* rax_55
                int32_t r8_23
                rax_55, r8_23 = sub_140b1a780(&var_288, rbx_12 + 0x18)
                int64_t** i_15
                sub_140596690(&i_15, rax_55, sbb.d(r8_23, r8_23, rax_55[1].d != 0) + 9)
                sub_140a2cf70(&i_15, u"Config/", 7)
                int64_t rcx_92 = var_288
                
                if (rcx_92 != 0)
                    sub_140a74f90(rcx_92)
                
                sub_140b13890(&var_348)
                sub_140b24f00(&var_308)
                int16_t** rcx_95
                int32_t r9_5
                
                if (*(rbx_12 + 0x1e0) u> 1)
                    int32_t var_2fc
                    r9_5 = var_2fc
                    rcx_95 = &var_308
                else
                    int32_t var_33c
                    r9_5 = var_33c
                    rcx_95 = &var_348
                
                int32_t var_320
                sub_140596860(rcx_95, i_15, var_320, r9_5, 0)
                int16_t* const rdi_9
                
                if (*(rbx_12 + 0x10) == 0)
                    rdi_9 = &data_142d40450
                else
                    rdi_9 = *(rbx_12 + 8)
                
                sub_1405eb940(&var_178, "WindowsNoEditor")
                int64_t var_278
                int64_t* rax_58 = sub_140b17c60(&var_278)
                int16_t* const r8_27
                
                if (rax_58[1].d == 0)
                    r8_27 = &data_142d40450
                else
                    r8_27 = *rax_58
                
                var_428.q = rdi_9
                int64_t var_338
                sub_140a2e390(&var_338, u"%s%s/%s.ini", r8_27)
                int64_t rcx_99 = var_278
                
                if (rcx_99 != 0)
                    sub_140a74f90(rcx_99)
                
                int64_t var_78
                
                if (var_78 != 0)
                    sub_140a74f90(var_78)
                
                sub_140b20c40(&var_338)
                int64_t* rax_59 = sub_140ae6a10(&var_178)
                int64_t* rax_60 = sub_140ae4b00(data_143ddb400 + 8, &var_338, rax_59)
                sub_140ae7280(&var_178)
                int64_t var_268
                int64_t* rax_61 = sub_140b17c60(&var_268)
                int16_t* const rcx_107
                
                if (rax_61[1].d == 0)
                    rcx_107 = &data_142d40450
                else
                    rcx_107 = *rax_61
                
                int16_t* r9_7 = &data_142d40450
                uint64_t r8_29 = &data_142d40450
                
                if (var_300 != 0)
                    r9_7 = var_308
                
                if (var_340 != 0)
                    r8_29 = var_348
                
                int16_t* rdx_44
                
                if (*(rbx_12 + 0x10) == 0)
                    rdx_44 = &data_142d40450
                else
                    rdx_44 = *(rbx_12 + 8)
                
                int16_t* const var_400_1 = rcx_107
                var_428.b = 1
                char rax_62
                rax_62, zmm2 =
                    sub_140af8b90(rax_60, rdx_44, r8_29, r9_7, zmm2, var_428.b, nullptr, 0, 1, 1)
                int64_t rcx_109 = var_268
                rbx_12.b = rax_62 == 0
                
                if (rcx_109 != 0)
                    sub_140a74f90(rcx_109)
                
                if (rbx_12.b != 0)
                    sub_140afe520(data_143ddb400 + 8, &var_338)
                
                var_3f8 = nullptr
                int32_t var_3f0_1 = 0
                sub_140a464c0()
                int64_t** i_17 = &data_142d40450
                
                if (var_320 != 0)
                    i_17 = i_15
                
                (*(data_14399ea08 + 0x70))(&data_14399ea08, &var_3f8, i_17, &data_142e80610)
                int64_t* rbx_13 = var_3f8
                int64_t rdi_11 = sx.q(var_3f0_1)
                void* r12_5 = &rbx_13[rdi_11 * 2]
                
                if (rbx_13 != r12_5)
                    do
                        var_3d8 = nullptr
                        int32_t var_3d0_1 = 0
                        sub_1405947f0(&var_3d8, 0x10)
                        int32_t rdi_12 = var_3d0_1 + 0x10
                        
                        if (rdi_12 s> 0)
                            sub_140594770(&var_3d8)
                        
                        var_428.w = 0x3f
                        int16_t* r15_5 = var_3d8
                        sub_1405a7220(r15_5, 0x10, "WindowsNoEditor", 0x10, var_428.w)
                        int16_t** rax_63 = sub_140b17c60(&var_3a0)
                        int16_t* rsi_8
                        
                        if (rax_63[1].d == 0)
                            rsi_8 = &data_142d40450
                        else
                            rsi_8 = *rax_63
                        
                        int16_t* r14_4 = &data_142d40450
                        
                        if (rdi_12 != 0)
                            r14_4 = r15_5
                        
                        int64_t var_248
                        int64_t* rax_64 = sub_140b18720(&var_248, rbx_13, 1)
                        int16_t* rdx_49
                        
                        if (rax_64[1].d == 0)
                            rdx_49 = &data_142d40450
                        else
                            rdx_49 = *rax_64
                        
                        int64_t var_258
                        int64_t* rax_65 = sub_140af3690(&var_258, rdx_49, r14_4, rsi_8)
                        
                        if (&var_338 != rax_65)
                            int64_t rcx_118 = var_338
                            
                            if (rcx_118 != 0)
                                sub_140a74f90(rcx_118)
                            
                            var_338 = *rax_65
                            *rax_65 = 0
                            int32_t var_330_1 = rax_65[1].d
                            int32_t var_32c_1 = *(rax_65 + 0xc)
                            rax_65[1] = 0
                        
                        int64_t rcx_119 = var_258
                        
                        if (rcx_119 != 0)
                            sub_140a74f90(rcx_119)
                        
                        int64_t rcx_120 = var_248
                        
                        if (rcx_120 != 0)
                            sub_140a74f90(rcx_120)
                        
                        int64_t rcx_121 = var_3a0.q
                        
                        if (rcx_121 != 0)
                            sub_140a74f90(rcx_121)
                        
                        int64_t* rax_69
                        rax_69, zmm2 = sub_140aefb30(data_143ddb400, &var_338, 0)
                        
                        if (rax_69 != 0)
                            int64_t** i_14 = &data_142d40450
                            
                            if (var_320 != 0)
                                i_14 = i_15
                            
                            bool cond:20_1 = rbx_13[1].d == 0
                            i_7 = i_14
                            
                            if (cond:20_1)
                                var_2e0.q = &data_142d40450
                            else
                                var_2e0.q = *rbx_13
                            
                            var_318 = 0
                            var_310.q = 0
                            sub_140b0f5f0(&var_318, &i_7, 2)
                            zmm2 = sub_140ae9320(rax_69, &var_318)
                            uint64_t rcx_125 = var_318
                            
                            if (rcx_125 != 0)
                                sub_140a74f90(rcx_125)
                        
                        if (r15_5 != 0)
                            sub_140a74f90(r15_5)
                        
                        rbx_13 = &rbx_13[2]
                    while (rbx_13 != r12_5)
                    
                    rdi_11 = zx.q(var_3f0_1)
                    rbx_13 = var_3f8
                    r13_3 = var_2b0_1
                
                if (rdi_11.d != 0)
                    int32_t i_4
                    
                    do
                        int64_t rcx_127 = *rbx_13
                        
                        if (rcx_127 != 0)
                            sub_140a74f90(rcx_127)
                        
                        rbx_13 = &rbx_13[2]
                        i_4 = rdi_11.d
                        rdi_11 = zx.q(rdi_11.d - 1)
                    while (i_4 != 1)
                    rbx_13 = var_3f8
                
                if (rbx_13 != 0)
                    sub_140a74f90(rbx_13)
                
                int64_t rcx_129 = var_338
                
                if (rcx_129 != 0)
                    sub_140a74f90(rcx_129)
                
                int16_t* rcx_130 = var_308
                
                if (rcx_130 != 0)
                    sub_140a74f90(rcx_130)
                
                uint64_t rcx_131 = var_348
                
                if (rcx_131 != 0)
                    sub_140a74f90(rcx_131)
                
                int64_t** i_16 = i_15
                
                if (i_16 != 0)
                    sub_140a74f90(i_16)
            
            var_2c0_2.d &= not.d(var_2d0:4.d)
            sub_14059bdd0(&var_2d0)
            rcx_70 = var_378
            r8_17 = r13_3 + 0x10
        
        int64_t* var_358 = nullptr
        void** const var_2a8 = &data_142e80538
        int64_t* var_2a0_1 = &var_358
        int64_t var_350_1 = 0
        void* rbx = arg1
        var_378 = __crt_deferred_errno_cache::get(&data_143db7b00)
        sub_140b7d660(rbx, &i_7)
        int64_t** i_5 = i_7
        void* r12_8 = &i_5[sx.q(var_2e0) * 2]
        var_3a8 = r12_8
        
        for (; i_5 != r12_8; i_5 = &i_5[2])
            int64_t* rdi_15 = i_5[1]
            int64_t* r15_6 = *i_5
            var_3f8 = r15_6
            int64_t* var_3f0_2 = rdi_15
            
            if (rdi_15 != 0)
                rdi_15[1].d += 1
            
            if (*((*(*r15_6 + 0x60))(r15_6) + 0xff) == 0)
                void* r14_5 = rbx + 0xe8
                
                for (int64_t* j = *r14_5; j != &j[sx.q(*(r14_5 + 8)) * 2]; j = &j[2])
                    if (j[1].d != 0 && *j != 0)
                        *(r14_5 + 0x14) += 1
                        r12_8.b = 0
                        int32_t rax_78 = *(r14_5 + 8)
                        int32_t rcx_140 = *(r14_5 + 0x14)
                        int64_t rsi_9 = sx.q(rax_78 - 1)
                        
                        if (rax_78 - 1 s>= 0)
                            int64_t rbx_15 = rsi_9 << 4
                            int64_t temp16_1
                            
                            do
                                int64_t rax_80 = *r14_5
                                
                                if (*(rbx_15 + rax_80 + 8) == 0)
                                    r12_8.b = 1
                                else
                                    int64_t* rcx_141 = *(rbx_15 + rax_80)
                                    
                                    if (rcx_141 == 0)
                                        r12_8.b = 1
                                    else if ((*(*rcx_141 + 0x50))(rcx_141, r15_6) == 0)
                                        r12_8.b = 1
                                
                                rbx_15 -= 0x10
                                temp16_1 = rsi_9
                                rsi_9 -= 1
                            while (temp16_1 - 1 s>= 0)
                            rcx_140 = *(r14_5 + 0x14)
                            rbx = arg1
                        
                        *(r14_5 + 0x14) = rcx_140 - 1
                        
                        if (r12_8.b != 0)
                            sub_140599630(r14_5, 0)
                        
                        r12_8 = var_3a8
                        break
                
                if (*(rbx + 0x70) != 0)
                    int64_t* rcx_143 = *(rbx + 0x68)
                    
                    if (rcx_143 != 0 && (*(*rcx_143 + 0x28))(rcx_143) != 0)
                        (*(*r15_6 + 0x20))(r15_6, &var_318)
                        int64_t rax_88 = (*(*r15_6 + 0x28))(r15_6, &var_3a0)
                        int64_t* rcx_146
                        
                        if (*(rbx + 0x70) == 0)
                            rcx_146 = nullptr
                        else
                            rcx_146 = *(rbx + 0x68)
                        
                        (*(*rcx_146 + 0x48))(rcx_146, rax_88, &var_318)
                        int64_t rcx_147 = var_3a0.q
                        
                        if (rcx_147 != 0)
                            sub_140a74f90(rcx_147)
                        
                        if (var_350_1:4.d s< 0)
                            sub_14062c990(&var_358, 0)
                        else
                            int32_t j_2 = var_350_1.d
                            int64_t* rbx_16 = var_358
                            
                            if (j_2 != 0)
                                int32_t j_1
                                
                                do
                                    int64_t rcx_148 = *rbx_16
                                    
                                    if (rcx_148 != 0)
                                        sub_140a74f90(rcx_148)
                                    
                                    rbx_16 = &rbx_16[2]
                                    j_1 = j_2
                                    j_2 -= 1
                                while (j_1 != 1)
                            
                            var_350_1.d = 0
                        
                        var_3d8 = nullptr
                        int32_t var_3d0_2 = 0
                        sub_1405947f0(&var_3d8, 0x10)
                        int32_t rbx_17 = var_3d0_2 + 0x10
                        
                        if (rbx_17 s> 0)
                            sub_140594770(&var_3d8)
                        
                        int16_t* rsi_10 = var_3d8
                        var_428.w = 0x3f
                        int32_t rcx_153 =
                            sub_1405a7220(rsi_10, 0x10, "WindowsNoEditor", 0x10, var_428.w)
                        uint64_t rdx_59 = var_318
                        var_348 = 0
                        sub_140596860(&var_348, rdx_59, var_310, 0, 
                            sbb.d(rcx_153, rcx_153, var_310 != 0) + 6)
                        sub_140a2cf70(&var_348, u"Paks", 4)
                        int32_t rbx_18
                        
                        if (rbx_17 == 0)
                            rbx_18 = 0
                        else
                            rbx_18 = rbx_17 - 1
                        
                        int32_t rax_93
                        
                        if (var_340 == 0)
                            rax_93 = 2
                        
                        if (var_340 != 0 || rbx_18 == 0xffffffff)
                            rax_93 = 1
                        
                        sub_140596690(&var_308, &var_348, rbx_18 + rax_93)
                        sub_140a2cf70(&var_308, rsi_10, rbx_18)
                        int64_t* r14_6 = var_378
                        int16_t* rdx_62 = &data_142d40450
                        
                        if (var_300 != 0)
                            rdx_62 = var_308
                        
                        (*(*r14_6 + 0x148))(r14_6, rdx_62, &var_2a8)
                        int16_t* rcx_161 = var_308
                        
                        if (rcx_161 != 0)
                            sub_140a74f90(rcx_161)
                        
                        uint64_t rcx_162 = var_348
                        
                        if (rcx_162 != 0)
                            sub_140a74f90(rcx_162)
                        
                        if (rsi_10 != 0)
                            sub_140a74f90(rsi_10)
                        
                        int64_t* rbx_19 = var_358
                        void* rsi_13 = &rbx_19[sx.q(var_350_1.d) * 2]
                        
                        if (rbx_19 != rsi_13)
                            do
                                if (data_143de5680 != 0)
                                    int64_t* rcx_164 = data_143de5678
                                    
                                    if (rcx_164 != 0 && (*(*rcx_164 + 0x28))(rcx_164) != 0)
                                        int64_t* rcx_165 = nullptr
                                        
                                        if (data_143de5680 != 0)
                                            rcx_165 = data_143de5678
                                        
                                        (*(*rcx_165 + 0x48))(rcx_165, rbx_19, 0, 0)
                                        sub_140b76600(arg1 + 0x58, &var_3f8)
                                
                                rbx_19 = &rbx_19[2]
                            while (rbx_19 != rsi_13)
                            
                            r12_8 = var_3a8
                        
                        uint64_t rcx_167 = var_318
                        
                        if (rcx_167 != 0)
                            sub_140a74f90(rcx_167)
                        
                        rbx = arg1
                
                if (rdi_15 != 0)
                    rdi_15[1].d -= 1
                    
                    if (rdi_15[1].d == 1)
                        (**rdi_15)(rdi_15)
                        int32_t temp14_1 = *(rdi_15 + 0xc)
                        *(rdi_15 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*rdi_15 + 8))(rdi_15, 1)
            else if (rdi_15 != 0)
                rdi_15[1].d -= 1
                
                if (rdi_15[1].d == 1)
                    (**rdi_15)(rdi_15)
                    int32_t temp11_1 = *(rdi_15 + 0xc)
                    *(rdi_15 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rdi_15 + 8))(rdi_15, 1)
        
        sub_140596d80(&i_7)
        var_2a8 = &data_142d6ad38
        sub_140597000(&var_358)
        int32_t var_180_3 = 0
        
        if (var_188_1 != 0)
            sub_140a74f90(var_188_1)
        
        sub_140669e00(&var_1c8)
        int32_t var_1d0_3 = 0
        
        if (var_1d8_1 != 0)
            sub_140a74f90(var_1d8_1)
        
        sub_1405df330(&var_218)
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_238)
        result = zx.q(*(rbx + 0x79))
    else
        int64_t* rcx_20 = data_143e19fe8
        bool r12_2 = true
        
        if (rcx_20 == 0)
            pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_3a0)
            void*** rax_6 = j_sub_140a82f30(0x48)
            
            if (rax_6 == 0)
                rax_6 = nullptr
            else
                *rax_6 = &data_142e80388
                __builtin_memset(&rax_6[1], 0, 0x21)
                rax_6[6] = 0
                rax_6[7] = 0
                rax_6[8] = 2
            
            data_143e19fe8 = rax_6
            pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                &var_3a0)
            rcx_20 = data_143e19fe8
        
        void* rax_8 = (*(*rcx_20 + 8))(rcx_20)
        
        if (rax_8 == 0)
            goto label_140b7ad11
        
        int64_t* rbx_7 = nullptr
        int32_t i_8 = *(rax_8 + 0x50)
        int64_t* rdi_2 = *(rax_8 + 0x48)
        r12_2 = *(rax_8 + 0x111) == 0
        var_3f8 = nullptr
        i_12 = i_8
        
        if (i_8 != 0)
            sub_140976950(&var_3f8, i_8, 0)
            rbx_7 = var_3f8
            void* r14_2 = rbx_7 - rdi_2
            int32_t i_6
            
            do
                sub_140b78080(r14_2 + rdi_2, rdi_2)
                rdi_2 = &rdi_2[0x15]
                i_6 = i_8
                i_8 -= 1
            while (i_6 != 1)
            i_8 = i_12
        else
            i_12 = 0
        
        void* rdi_4 = sx.q(i_8) * 0xa8 + rbx_7
        
        if (rbx_7 == rdi_4)
        label_140b7ad0a:
            sub_140b786a0(&var_3f8)
        label_140b7ad11:
            var_3a0:4.d = 1
            var_3a0.d = 0
            int32_t rbx_8 = *(r13_1 + 0x30)
            var_3a0:8.q = r13_1 + 0x18
            int32_t rcx_29 = 0
            int128_t var_390
            var_390.d = 0xffffffff
            int32_t r8_9 = 0
            var_390:4.q = 0
            
            if (rbx_8 != 0)
                void* rax_12 = *(r13_1 + 0x28)
                void* r9_3 = r13_1 + 0x18
                
                if (rax_12 != 0)
                    r9_3 = rax_12
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rbx_8 - 1)
                int32_t rdx_18 = *r9_3
                
                if (rdx_18 != 0)
                label_140b7ad99:
                    int32_t rax_19 = neg.d(rdx_18) & rdx_18
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_19)
                    var_3a0:4.d = rax_19
                    int32_t rax_20
                    
                    if (rax_19 == 0)
                        rax_20 = 0x20
                    else
                        rax_20 = 0x1f - temp0_1
                    
                    var_390:4.d = r8_9 - rax_20 + 0x1f
                    
                    if (r8_9 - rax_20 + 0x1f s> rbx_8)
                        var_390:4.d = rbx_8
                else
                    while (true)
                        int64_t rdx_19 = sx.q(rcx_29)
                        r8_9 += 0x20
                        rcx_29 += 1
                        var_390:8.d = r8_9
                        var_3a0.d = rcx_29
                        
                        if (rdx_19.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_18 = *(r9_3 + (rdx_19 << 2) + 4)
                        var_390.d = 0xffffffff
                        
                        if (rdx_18 != 0)
                            goto label_140b7ad99
                    
                    var_390:4.d = rbx_8
            
            int32_t rdx_20 = *(r13_1 + 0x30)
            zmm2.o = var_390
            int64_t var_3b4
            var_3b4.d = rdx_20
            int32_t rdi_5 = 0xffffffff << (rdx_20.b & 0x1f)
            var_2d0 = var_3a0
            int32_t r8_12 = rdx_20 s>> 5
            int32_t rcx_40 = rdx_20 & 0xffffffe0
            int32_t var_3b8_1 = rdi_5
            int128_t var_2c0_1 = zmm2.o
            zmm2.o = _mm_unpackhi_pd(zmm2.o, zmm2.q)
            int64_t var_380_1 = (zmm2.o).q
            zmm1_1 = var_2d0
            var_3a0 = (r13_1 + 8).o
            int128_t var_390_1 = zmm1_1
            
            if (rdx_20 != rbx_8)
                void* rax_22 = *(r13_1 + 0x28)
                void* r9_4 = r13_1 + 0x18
                
                if (rax_22 != 0)
                    r9_4 = rax_22
                
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(rbx_8 - 1)
                int32_t rdx_24 = *(r9_4 + (sx.q(r8_12) << 2)) & rdi_5
                
                if (rdx_24 != 0)
                label_140b7aecf:
                    int32_t rax_28 = neg.d(rdx_24) & rdx_24
                    uint64_t rflags_2
                    int32_t temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rax_28)
                    int32_t r11_1
                    
                    if (rax_28 == 0)
                        r11_1 = 0x20
                    else
                        r11_1 = 0x1f - temp0_3
                    
                    var_3b4.d = rcx_40 - r11_1 + 0x1f
                    
                    if (rcx_40 - r11_1 + 0x1f s> rbx_8)
                        var_3b4.d = rbx_8
                else
                    while (true)
                        int64_t rdx_25 = sx.q(r8_12)
                        rcx_40 += 0x20
                        r8_12 += 1
                        
                        if (rdx_25.d s>= ((temp5_1 & 0x1f) + temp6_1) s>> 5)
                            break
                        
                        rdx_24 = *(r9_4 + (rdx_25 << 2) + 4)
                        var_3b8_1 = 0xffffffff
                        
                        if (rdx_24 != 0)
                            goto label_140b7aecf
                    
                    var_3b4.d = rbx_8
            
            while (true)
                int64_t rax_30 = sx.q(var_390_1:0xc.d)
                int64_t* rdx_27 = var_3a0.q
                
                if (rax_30.d == (var_3b8_1.q u>> 0x20).d && var_390_1.q == r13_1 + 0x18
                        && rdx_27 == r13_1 + 8)
                    goto label_140b7b13c
                
                int64_t rcx_42 = rax_30 * 5
                int64_t rax_31 = *rdx_27
                int64_t* rbx_9 = rax_31 + (rcx_42 << 3)
                uint64_t rcx_43 = *(rax_31 + (rcx_42 << 3) + 0x10)
                char rax_32 = *(rcx_43 + 0x120)
                
                if (rax_32 == 1)
                    bool cond:5_1 = *(rcx_43 + 0x1e0) u> 1
                    rcx_43 = zx.q(r12_2)
                    int32_t rax_33
                    rax_33.b = cond:5_1
                    
                    if (rax_33 == 1)
                        rcx_43 = 1
                    
                    goto label_140b7af69
                
                if (rax_32 != 2)
                    rcx_43.b = *(rcx_43 + 0x1e0) u> 1
                label_140b7af69:
                    
                    if (rcx_43.b != 0 && *sub_140960120(&var_1c8, &var_3a8, rbx_9) == 0xffffffff)
                        sub_140596d10(&var_178, rbx_9)
                        int16_t var_168_2 = 1
                        int64_t var_160_1
                        __builtin_memset(&var_160_1, 0, 0x90)
                        bool cond:7_1 = sub_140b7a090(arg1, &var_178, &var_218) == 0
                        int64_t var_e0
                        sub_140597000(&var_e0)
                        int64_t var_f0
                        
                        if (var_f0 != 0)
                            sub_140a74f90(var_f0)
                        
                        int64_t var_100
                        
                        if (var_100 != 0)
                            sub_140a74f90(var_100)
                        
                        int64_t var_110
                        
                        if (var_110 != 0)
                            sub_140a74f90(var_110)
                        
                        int64_t var_120
                        
                        if (var_120 != 0)
                            sub_140a74f90(var_120)
                        
                        int64_t var_130
                        sub_140597000(&var_130)
                        int64_t var_140
                        sub_140597000(&var_140)
                        int64_t var_150
                        
                        if (var_150 != 0)
                            sub_140a74f90(var_150)
                        
                        int64_t rcx_55 = var_160_1
                        
                        if (rcx_55 != 0)
                            sub_140a74f90(rcx_55)
                        
                        int64_t rcx_56 = var_178
                        
                        if (rcx_56 != 0)
                            sub_140a74f90(rcx_56)
                        
                        if (cond:7_1 != 0)
                            break
                        
                        sub_1406b3860(&var_1c8, &var_3e0, rbx_9, nullptr)
                
                var_390_1:8.d &= not.d(var_3a0:0xc.d)
                sub_14059bdd0(&var_3a0:8)
        else
            while (true)
                if (*sub_140960120(&var_1c8, &var_3a8, rbx_7) == 0xffffffff)
                    if (sub_140b7a090(r13_1, rbx_7, &var_218) == 0)
                        sub_140b786a0(&var_3f8)
                        break
                    
                    sub_1406b3860(&var_1c8, &var_3e0, rbx_7, nullptr)
                
                rbx_7 = &rbx_7[0x15]
                
                if (rbx_7 == rdi_4)
                    goto label_140b7ad0a
        
    label_140b7adbd:
        int32_t var_180_2 = 0
        
        if (var_188_1 != 0)
            sub_140a74f90(var_188_1)
        
        sub_140669e00(&var_1c8)
        int32_t var_1d0_2 = 0
        
        if (var_1d8_1 != 0)
            sub_140a74f90(var_1d8_1)
        
        sub_1405df330(&var_218)
        pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_238)
        result.b = 0

__security_check_cookie(rax_1 ^ &var_448)
return result
