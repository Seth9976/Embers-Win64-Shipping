// 函数: sub_1411eab80
// 地址: 0x1411eab80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_6e8
int64_t var_a8 = __security_cookie ^ &var_6e8
int64_t* result = arg1
void* rax_2 = arg4
*result = 0
result[1] = 0
int32_t i = 0
void* var_558 = rax_2
int64_t var_5a8 = arg2
int32_t i_1 = 0

if (*(arg4 + 8) s> 0)
    int64_t r14_1 = 0
    int128_t zmm10 = 0x3f800000
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    int64_t var_550_1 = 0
    
    do
        int64_t* r12_2 = r14_1 * 0x5240 + *rax_2
        
        if (*r12_2 != 0)
            void var_c0
            int32_t rcx_2 = sub_14118c8f0(&var_c0, arg2, r12_2)
            int64_t rbx_1 = sx.q(result[1].d)
            int32_t rax_3 = (rbx_1 + 1).d
            result[1].d = rax_3
            
            if (rax_3 s> *(result + 0xc))
                rcx_2 = sub_1411ec790(result, rbx_1.d)
            
            void* rsi_2 = rbx_1 * 0xe8 + *result
            __builtin_memset(rsi_2, 0, 0x88)
            *(rsi_2 + 0x88) = 8
            *(rsi_2 + 0x8c) = 0x20
            *(rsi_2 + 0x90) = 8
            __builtin_memset(rsi_2 + 0x98, 0, 0x3c)
            *(rsi_2 + 0xe0) = 0
            int32_t rcx_4
            
            if (sub_1419767d0() == 0)
                rcx_4 = sbb.d(rcx_2, rcx_2, sub_1419767f0() != 0) + 2
            else
                rcx_4 = 0
            
            int32_t rax_6
            
            if (rcx_4 != 0)
                rax_6 = 0x20
            
            if (rcx_4 == 0 || rcx_4 != 1)
                rax_6 = 0x40
            
            *(rsi_2 + 0xd0) = rax_6
            void*** r13_2 = r14_1 * 0x130 + *arg9
            void*** var_600 = r13_2
            
            if (r13_2[1].d != 0)
                int64_t* rcx_8 = *arg7
                int64_t rdi_1 = *((*(*rcx_8 + 0x10))(rcx_8) + 0x14)
                int64_t var_620 = rdi_1
                void var_338
                sub_1419928d0(&var_338, var_5a8)
                int64_t* var_4c8_1 = &data_143ec4c60
                void*** r15
                
                if (*arg5 == 0)
                    r15 = nullptr
                else
                    r15 = sub_1410fccd0(&var_338, arg5, u"SceneGBufferBTexture", 0)
                
                void*** var_568 = r15
                void*** r14_2
                
                if (*arg6 == 0)
                    r14_2 = nullptr
                else
                    r14_2 = sub_1410fccd0(&var_338, arg6, u"SceneColorTexture", 0)
                
                int64_t* rbx_3 = *arg7
                void*** var_570 = r14_2
                int32_t var_5d0
                int64_t var_278
                sub_140865c40(&var_278, &var_5d0, rbx_3)
                int64_t rax_15 = sx.q(var_5d0)
                void* const rcx_14
                
                if (rax_15.d == 0xffffffff)
                    rcx_14 = nullptr
                else
                    rcx_14 = var_278 + rax_15 * 0x18
                
                int64_t* rax_17 = rcx_14 + 8
                
                if (rcx_14 == 0)
                    rax_17 = nullptr
                
                int64_t* var_330
                void var_318
                void*** rax_18
                
                if (rax_17 == 0)
                    int128_t* rax_20 = (*(*rbx_3 + 0x10))(rbx_3)
                    void*** rax_21 = sub_14081d830(0x88, var_330, 1, 0)
                    void*** rcx_16 = rax_21
                    
                    if (rax_21 == 0)
                        rcx_16 = rax_21
                    else
                        rcx_16[1] = u"SceneDepthTexture"
                        rcx_16[2] = 0
                        rcx_16[3].b = 0
                        *(rcx_16 + 0x1c) = 0
                        rcx_16[4] = 0
                        rcx_16[5].w = 0x200
                        *rcx_16 = &data_142f11960
                        *(rcx_16 + 0x30) = *rax_20
                        *(rcx_16 + 0x40) = rax_20[1]
                        *(rcx_16 + 0x50) = rax_20[2]
                        *(rcx_16 + 0x60) = rax_20[3]
                        int128_t zmm0_1 = rax_20[4]
                        rcx_16[0x10] = 0
                        *(rcx_16 + 0x70) = zmm0_1
                    
                    void*** var_5f8 = rcx_16
                    int64_t* var_468_1 = arg7
                    rcx_16[0x10] = *arg7
                    var_5f8[2] = *(*arg7 + 0x10)
                    int64_t* var_470 = &var_5f8
                    void var_4d0
                    sub_14107bc20(&var_318, &var_4d0, &var_470, nullptr)
                    int64_t var_488 = *arg7
                    int64_t* var_460 = &var_488
                    int64_t* var_458_1 = &var_5f8
                    void var_480
                    sub_14107baa0(&var_278, &var_480, &var_460, nullptr)
                    rax_18 = var_5f8
                else
                    rax_18 = *rax_17
                
                void*** var_5b0 = rax_18
                void*** rax_27
                
                if (*arg8 == 0)
                    rax_27 = nullptr
                else
                    rax_27 = sub_1410fccd0(&var_338, arg8, u"SceneVelocityTexture", 0)
                
                void*** var_5b8 = rax_27
                char var_650_1
                
                if (r15 != 0)
                    var_650_1 = 1
                
                if (r15 == 0 || r14_2 == 0)
                    var_650_1 = 0
                
                int32_t rbx_6 = 0
                
                if (data_143e75968 s> 0)
                    rbx_6 = 2
                
                bool cond:2_1 = data_1439b60c0 s<= 0
                int128_t var_598_1
                __builtin_memset(&var_598_1, 0, 0x20)
                int64_t var_610
                void*** var_5c8_1
                void*** rax_30
                void*** r12_3
                int64_t* r14_4
                int128_t var_588_1
                
                if (cond:2_1 || rbx_6 == 2)
                    r12_3 = var_598_1.q
                    var_610 = var_588_1:8.q
                    var_5c8_1 = r12_3
                    r14_4 = r12_2
                    rax_30 = var_588_1.q
                else
                    void*** var_358
                    void*** rax_29 = sub_1411d31c0(&var_358, &var_338, arg3, r12_2, r13_2, 
                        &var_620, sub_14118cec0(), rax_18)
                    bool cond:4_1 = data_143e75974 s<= 0
                    int128_t zmm1_2 = *(rax_29 + 0x10)
                    var_598_1 = *rax_29
                    var_588_1 = zmm1_2
                    
                    if (cond:4_1)
                        r12_3 = var_598_1.q
                        var_5c8_1 = r12_3
                    else
                        rax_29 = sub_1411d12d0(&var_338, r12_2, &var_c0, var_598_1:8.q)
                        r12_3 = rax_29
                        var_5c8_1 = rax_29
                    
                    if (data_143e7596c s> 0)
                        rax_29 = sub_1419767f0()
                    
                    if (data_143e7596c s<= 0 || rax_29.b == 0 || data_143f0f1bd == 0)
                        rax_29.b = 0
                    else
                        rax_29.b = 1
                    
                    if (rax_29.b == 0)
                        var_610 = var_588_1:8.q
                        r14_4 = r12_2
                        rax_30 = var_588_1.q
                    else
                        r14_4 = r12_2
                        void var_388
                        zmm10 = sub_1411d8540(&var_388, &var_338, r14_4, r13_2, &var_620, rax_18)
                        void*** var_370
                        rax_30 = var_370
                        rdi_1 = var_620
                        int64_t var_368
                        var_610 = var_368
                void*** var_618 = rax_30
                void*** r8_8 = nullptr
                void*** var_628 = nullptr
                void*** r15_1 = nullptr
                void*** var_640 = nullptr
                void*** var_630 = nullptr
                void*** var_5e8 = nullptr
                char var_6b8
                int64_t var_1d8
                int32_t var_1d0
                int32_t var_1cc
                int64_t var_1c8
                int32_t var_1c0
                int32_t var_1bc
                int64_t* r13_6
                
                if (rbx_6 == 0)
                    void*** rbx_7 = var_600
                    r13_2.b = data_1439b60e8 s> rbx_6
                    void*** var_508 = sub_1411d36a0(&var_338, r14_4, &var_620, rbx_7, &var_5b0)
                    void* var_500
                    var_6b8.q = &var_500
                    int64_t var_4f8
                    int64_t var_4f0
                    int64_t var_4e8
                    sub_1411d3ab0(r13_2.b, &var_338, arg3, r14_4, rbx_7, &var_620, var_6b8, 
                        &var_4f8, &var_4f0, &var_4e8, &var_508)
                    void* rcx_28 = var_500
                    char var_658_1 = 1
                    *(rsi_2 + 0x90) = zx.d(*(rcx_28 + 0x58))
                    int64_t rbx_8 = sx.q(var_1d0)
                    void* var_660_1 = rsi_2 + 8
                    int32_t rax_35 = (rbx_8 + 1).d
                    
                    if (rax_35 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_8.d)
                    
                    int64_t rax_36 = var_1d8
                    int64_t rcx_30 = rbx_8 * 3
                    void* var_660_2 = rsi_2
                    *(rax_36 + (rcx_30 << 3)) = rcx_28.o
                    char var_658_2 = 1
                    *(rax_36 + (rcx_30 << 3) + 0x10) = var_658_1.q
                    int64_t rbx_9 = sx.q(rax_35)
                    void*** rax_37 = var_508
                    int32_t rax_38 = (rbx_9 + 1).d
                    int32_t var_1d0_2 = rax_38
                    
                    if (rax_38 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_9.d)
                    
                    int64_t rax_39 = var_1d8
                    int64_t rcx_32 = rbx_9 * 3
                    int64_t r15_2 = var_4e8
                    int64_t r12_4 = var_4f0
                    int64_t r14_5 = var_4f8
                    *(rax_39 + (rcx_32 << 3)) = rax_37.o
                    *(rax_39 + (rcx_32 << 3) + 0x10) = var_658_2.q
                    
                    if (r13_2.b == 0)
                        int64_t rbx_10 = sx.q(var_1d0_2)
                        void* var_660_3 = rsi_2 + 0x10
                        char var_658_3 = 1
                        int32_t rax_41 = (rbx_10 + 1).d
                        
                        if (rax_41 s> var_1cc)
                            sub_14119a720(&var_1d8, rbx_10.d)
                        
                        int64_t rax_42 = var_1d8
                        int64_t rcx_34 = rbx_10 * 3
                        *(rax_42 + (rcx_34 << 3)) = r14_5.o
                        char var_658_4 = 1
                        *(rax_42 + (rcx_34 << 3) + 0x10) = var_658_3.q
                        int64_t rbx_11 = sx.q(rax_41)
                        void* var_660_4 = rsi_2 + 0x18
                        int32_t rax_44 = (rbx_11 + 1).d
                        
                        if (rax_44 s> var_1cc)
                            sub_14119a720(&var_1d8, rbx_11.d)
                        
                        int64_t rax_45 = var_1d8
                        int64_t rcx_36 = rbx_11 * 3
                        *(rax_45 + (rcx_36 << 3)) = r12_4.o
                        char var_658_5 = 1
                        *(rax_45 + (rcx_36 << 3) + 0x10) = var_658_4.q
                        int64_t rbx_12 = sx.q(rax_44)
                        void* var_660_5 = rsi_2 + 0x20
                        int32_t rax_47 = (rbx_12 + 1).d
                        var_1d0_2 = rax_47
                        
                        if (rax_47 s> var_1cc)
                            sub_14119a720(&var_1d8, rbx_12.d)
                        
                        int64_t rax_48 = var_1d8
                        int64_t rcx_38 = rbx_12 * 3
                        *(rax_48 + (rcx_38 << 3)) = r15_2.o
                        *(rax_48 + (rcx_38 << 3) + 0x10) = var_658_5.q
                    
                    void* rax_49 = sub_14081d830(0xb0, var_330, 1, 0)
                    void* rbx_13 = rax_49
                    
                    if (rax_49 == 0)
                        rbx_13 = rax_49
                    else
                        __builtin_memset(rbx_13 + 0x50, 0, 0x18)
                        __builtin_memset(rbx_13 + 0x70, 0, 0x40)
                    
                    memset(rbx_13, 0, 0xb0)
                    *(rbx_13 + 0x28) = var_508
                    *(rbx_13 + 0x30) = var_500
                    *(rbx_13 + 0x68) = var_5c8_1
                    void*** var_578
                    void**** var_680_1 = &var_578
                    int64_t* var_688_1 = &var_5b8
                    void**** var_690_1 = &var_628
                    void* var_478
                    void** var_698_2 = &var_478
                    void** var_6a0_2 = &var_630
                    void**** var_6a8_2 = &var_640
                    void**** var_6b0_3 = &var_5e8
                    *(rbx_13 + 0x48) = r15_2
                    *(rbx_13 + 0x38) = r14_5
                    int64_t* r14_6 = var_600
                    *(rbx_13 + 0x40) = r12_4
                    var_6b8.q = rbx_13
                    int32_t* var_6c0_3
                    var_6c0_3.d = *(rsi_2 + 0xd0)
                    sub_1411d4470(0, r13_2.b, &var_338, r12_2, r14_6, var_6c0_3.d, var_6b8, 
                        var_6b0_3, var_6a8_2, var_6a0_2, var_698_2, var_690_1, var_688_1, 
                        var_680_1, rsi_2 + 0x94)
                    void* r12_5 = var_478
                    void*** r13_3 = var_640
                    
                    if (r13_2.b == 0)
                        r15_1 = var_630
                    else
                        rbx_13.b = data_143e75970 s> 0
                        var_6b8.d = *(rsi_2 + 0xd0)
                        int64_t* var_6c8_5
                        var_6c8_5.b = rbx_13.b
                        void var_3a8
                        int128_t zmm0_4 = *sub_1411d18f0(&var_3a8, &var_338, arg3, r12_2, 
                            var_6c8_5.b, r14_6, var_6b8, r13_3, var_630, r12_5, var_578)
                        var_6b8.q = &var_5b8
                        int128_t var_4e0
                        void** var_6c0_5 = &var_4e0:8
                        void**** var_6c8_6 = &var_630
                        var_4e0 = zmm0_4
                        sub_1411d2b70(&var_338, r12_2, r14_6, &var_640, r13_3, var_6c8_6, 
                            var_6c0_5, var_6b8)
                        
                        if (rbx_13.b == 0)
                            r15_1 = var_4e0.q
                            var_630 = r15_1
                        else
                            void*** rax_59 = sub_1411d65a0(&var_338, r12_2, r13_3, var_4e0.q)
                            r15_1 = rax_59
                            var_4e0.q = rax_59
                            var_630 = rax_59
                    
                    void*** r14_7 = var_5e8
                    void*** rax_60 = sub_1411cf5d0(&var_338, r12_2, *(rsi_2 + 0x94), r14_7)
                    char var_658_6 = 1
                    *(rsi_2 + 0xd4) = *(rax_60 + 0x44)
                    *(rsi_2 + 0xd8) = rax_60[9].d
                    int64_t rbx_14 = sx.q(var_1d0_2)
                    void* var_660_6 = rsi_2 + 0xe0
                    int32_t rax_62 = (rbx_14 + 1).d
                    
                    if (rax_62 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_14.d)
                    
                    int64_t rax_63 = var_1d8
                    int64_t rcx_47 = rbx_14 * 3
                    *(rax_63 + (rcx_47 << 3)) = rax_60.o
                    char var_658_7 = 1
                    *(rax_63 + (rcx_47 << 3) + 0x10) = var_658_6.q
                    int64_t rbx_15 = sx.q(rax_62)
                    void* var_660_7 = rsi_2 + 0xa0
                    int32_t rax_65 = (rbx_15 + 1).d
                    
                    if (rax_65 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_15.d)
                    
                    int64_t rax_66 = var_1d8
                    int64_t rcx_49 = rbx_15 * 3
                    void*** r13_4 = var_628
                    *(rax_66 + (rcx_49 << 3)) = r13_3.o
                    *(rax_66 + (rcx_49 << 3) + 0x10) = var_658_7.q
                    int64_t rbx_16 = sx.q(rax_65)
                    void* var_660_8 = rsi_2 + 0x28
                    char var_658_8 = 1
                    int32_t rax_68 = (rbx_16 + 1).d
                    
                    if (rax_68 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_16.d)
                    
                    int64_t rax_69 = var_1d8
                    int64_t rcx_51 = rbx_16 * 3
                    int64_t zmm1_4 = var_658_8.q
                    *(rax_69 + (rcx_51 << 3)) = r13_4.o
                    var_658_8.w = 0
                    *(rax_69 + (rcx_51 << 3) + 0x10) = zmm1_4
                    int64_t rbx_17 = sx.q(var_1c0)
                    void* var_660_9 = rsi_2 + 0xa8
                    int32_t rax_71 = (rbx_17 + 1).d
                    
                    if (rax_71 s> var_1bc)
                        sub_14119a720(&var_1c8, rbx_17.d)
                    
                    int64_t rax_72 = var_1c8
                    int64_t rcx_53 = rbx_17 * 3
                    zmm1_4 = var_658_8.q
                    *(rax_72 + (rcx_53 << 3)) = r15_1.o
                    var_658_8.w = 0
                    *(rax_72 + (rcx_53 << 3) + 0x10) = zmm1_4
                    int64_t rbx_18 = sx.q(rax_71)
                    void* var_660_10 = rsi_2 + 0xb8
                    int32_t rax_74 = (rbx_18 + 1).d
                    
                    if (rax_74 s> var_1bc)
                        sub_14119a720(&var_1c8, rbx_18.d)
                    
                    int64_t rax_75 = var_1c8
                    int64_t rcx_55 = rbx_18 * 3
                    zmm1_4 = var_658_8.q
                    *(rax_75 + (rcx_55 << 3)) = r12_5.o
                    var_658_8.w = 0x100
                    *(rax_75 + (rcx_55 << 3) + 0x10) = zmm1_4
                    void*** rax_76 = var_578
                    int64_t rbx_19 = sx.q(rax_74)
                    void* var_660_11 = rsi_2 + 0xc8
                    int32_t rax_78 = (rbx_19 + 1).d
                    var_1c0 = rax_78
                    
                    if (rax_78 s> var_1bc)
                        sub_14119a720(&var_1c8, rbx_19.d)
                    
                    int64_t rax_79 = var_1c8
                    int64_t rcx_57 = rbx_19 * 3
                    *(rax_79 + (rcx_57 << 3)) = rax_76.o
                    char var_658_9 = 1
                    *(rax_79 + (rcx_57 << 3) + 0x10) = var_658_8.q
                    int64_t rbx_20 = sx.q(rax_68)
                    void* var_660_12 = rsi_2 + 0x98
                    int32_t rax_81 = (rbx_20 + 1).d
                    var_1d0 = rax_81
                    
                    if (rax_81 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_20.d)
                    
                    int64_t rax_82 = var_1d8
                    int64_t rcx_59 = rbx_20 * 3
                    void* r12_6 = var_598_1:8.q
                    *(rax_82 + (rcx_59 << 3)) = r14_7.o
                    *(rax_82 + (rcx_59 << 3) + 0x10) = var_658_9.q
                    int64_t* r13_5
                    
                    if (r12_6 == 0)
                        r13_5 = r12_2
                    else
                        int32_t* rax_83 = sub_14081d830(0xb0, var_330, 1, 0)
                        int32_t* r14_8 = rax_83
                        
                        if (rax_83 == 0)
                            r14_8 = rax_83
                        else
                            __builtin_memset(&r14_8[2], 0, 0x18)
                            sub_14117af20(&r14_8[8])
                        
                        memset(r14_8, 0, 0xb0)
                        int32_t temp0_1 = _mm_max_ss(data_1439b60ec, zmm10.d)
                        *(r14_8 + 0x10) = r13_4
                        r13_5 = r12_2
                        *(r14_8 + 8) = rax_18
                        *r14_8 = temp0_1
                        sub_1405d16e0(&r14_8[6], r13_5[2])
                        int16_t var_520_1 = 1
                        char var_51e_1 = 0
                        int32_t var_51c_1 = 0xffffffff
                        *(r14_8 + 0x20) = r12_6.o
                        int128_t var_3e8
                        sub_1419a2ec0(r13_5[0xa2a], &var_3e8, &data_143ed5e80, 0)
                        zmm9 = var_3e8
                        int128_t var_3d8
                        char rcx_65 = sub_1419a2ec0(r13_5[0xa2a], &var_3d8, &data_143e77ec0, 0)
                        zmm8 = var_3d8
                        int128_t zmm7_1 = *(r13_5 + 0x1598)
                        int64_t rbx_21 = *(r12_6 + 0x44)
                        int128_t var_398_1 = zx.o(0)
                        int128_t var_3c8_1 = sub_1411e3120(rcx_65)
                        sub_141998c50(zmm8.q, &data_143e7d980, r14_8)
                        int64_t var_400_1 = rbx_21
                        void*** rax_85
                        char rcx_67
                        rax_85, rcx_67 = sub_14081d830(0x80, var_330, 1, 0)
                        void*** rbx_22 = rax_85
                        
                        if (rax_85 == 0)
                            rbx_22 = rax_85
                        else
                            sub_1411e3120(rcx_67)
                            void* var_440_1 = &data_143e7d9b0
                            int128_t var_3b8 = r14_8.o
                            void var_638
                            sub_141992bd0(rbx_22, &var_638, &var_3b8, 1)
                            *rbx_22 = &data_142f38978
                            *(rbx_22 + 0x38) = r14_8.o
                            *(rbx_22 + 0x48) = zmm9
                            *(rbx_22 + 0x58) = zmm8
                            *(rbx_22 + 0x68) = zmm7_1
                            rbx_22[0xf] = r13_5
                        
                        sub_1419968d0(&var_338, rbx_22)
                        int64_t rbx_23 = sx.q(var_1d0)
                        void* var_660_13 = rsi_2 + 0x30
                        char var_658_10 = 1
                        int32_t rax_87 = (rbx_23 + 1).d
                        var_1d0 = rax_87
                        
                        if (rax_87 s> var_1cc)
                            sub_14119a720(&var_1d8, rbx_23.d)
                        
                        int64_t rax_88 = var_1d8
                        int64_t rcx_71 = rbx_23 * 3
                        *(rax_88 + (rcx_71 << 3)) = r12_6.o
                        *(rax_88 + (rcx_71 << 3) + 0x10) = var_658_10.q
                    
                    void*** rax_89 = var_618
                    
                    if (rax_89 != 0)
                        int64_t rbx_24 = sx.q(var_1d0)
                        void* var_660_14 = rsi_2 + 0x38
                        char var_658_11 = 1
                        int32_t rax_91 = (rbx_24 + 1).d
                        var_1d0 = rax_91
                        
                        if (rax_91 s> var_1cc)
                            sub_14119a720(&var_1d8, rbx_24.d)
                        
                        int64_t rax_92 = var_1d8
                        int64_t rcx_73 = rbx_24 * 3
                        *(rax_92 + (rcx_73 << 3)) = rax_89.o
                        *(rax_92 + (rcx_73 << 3) + 0x10) = var_658_11.q
                    
                    int64_t rax_93 = var_610
                    
                    if (rax_93 != 0)
                        int64_t rbx_25 = sx.q(var_1d0)
                        void* var_660_15 = rsi_2 + 0x40
                        char var_658_12 = 1
                        int32_t rax_95 = (rbx_25 + 1).d
                        var_1d0 = rax_95
                        
                        if (rax_95 s> var_1cc)
                            sub_14119a720(&var_1d8, rbx_25.d)
                        
                        int64_t rax_96 = var_1d8
                        int64_t rcx_75 = rbx_25 * 3
                        *(rax_96 + (rcx_75 << 3)) = rax_93.o
                        *(rax_96 + (rcx_75 << 3) + 0x10) = var_658_12.q
                    
                    if (var_650_1 != 0)
                        sub_1411d3410(&var_338, r13_5, &var_628, &var_568, &var_570, &var_5b0)
                    
                    r8_8 = var_640
                    r13_6 = r12_2
                else if (rbx_6 != 2)
                    r13_6 = r12_2
                else
                    void*** var_4c0 = sub_1410fccd0(&var_338, &var_4c8_1[8], u"External", 0)
                    void* var_4a8
                    int64_t* var_6a8_4 = &var_4a8
                    int64_t var_4b8
                    var_6b8.q = &var_4b8
                    void* var_4b0
                    sub_1411d3fc0(&var_338, arg3, r14_4, r13_2, &var_620, &var_4c0, var_6b8, 
                        &var_4b0)
                    void* rax_123 = sub_1411b2ba0(&var_338)
                    void* r14_9 = var_4a8
                    *(rax_123 + 0x50) = var_4b8
                    *(rax_123 + 0x58) = var_4b0
                    int64_t var_510_1 = 1
                    
                    if ((*(r14_9 + 0x38) & 0x100) != 0)
                        var_510_1.d = 4
                        var_510_1:4.d = 0x1c
                    
                    void*** rax_124 = sub_14081d830(0x28, var_330, 1, 0)
                    
                    if (rax_124 == 0)
                        rax_124 = nullptr
                    else
                        rax_124[1] = *(r14_9 + 8)
                        *rax_124 = &data_142f285c0
                        rax_124[2] = 0
                        *(rax_124 + 0x18) = r14_9.o
                    
                    *(rax_123 + 0x60) = rax_124
                    *(rax_123 + 0x68) = r12_3
                    var_6b8.q = rax_123
                    void**** var_6c0_8
                    var_6c0_8.d = *(rsi_2 + 0xd0)
                    r13_6 = r12_2
                    void* var_4a0
                    void*** var_498
                    sub_1411d4470(1, 0, &var_338, r13_6, r13_2, var_6c0_8.d, var_6b8, &var_5e8, 
                        &var_640, &var_630, &var_4a0, &var_628, &var_5b8, &var_498, rsi_2 + 0x94)
                    *(rsi_2 + 0x90) = sub_1411e11d0()
                    void*** rax_127 = var_640
                    int64_t rbx_32 = sx.q(var_1d0)
                    void* var_660_20 = rsi_2 + 0xa0
                    char var_658_15 = 1
                    int32_t rax_129 = (rbx_32 + 1).d
                    
                    if (rax_129 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_32.d)
                    
                    int64_t rax_130 = var_1d8
                    int64_t rcx_99 = rbx_32 * 3
                    *(rax_130 + (rcx_99 << 3)) = rax_127.o
                    char var_658_16 = 1
                    *(rax_130 + (rcx_99 << 3) + 0x10) = var_658_15.q
                    void*** rax_131 = var_628
                    int64_t rbx_33 = sx.q(rax_129)
                    void* var_660_21 = rsi_2 + 0x28
                    int32_t rax_133 = (rbx_33 + 1).d
                    
                    if (rax_133 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_33.d)
                    
                    int64_t rax_134 = var_1d8
                    int64_t rcx_101 = rbx_33 * 3
                    r15_1 = var_630
                    *(rax_134 + (rcx_101 << 3)) = rax_131.o
                    *(rax_134 + (rcx_101 << 3) + 0x10) = var_658_16.q
                    int64_t rbx_34 = sx.q(var_1c0)
                    void* var_660_22 = rsi_2 + 0xa8
                    var_658_16.w = 0
                    int32_t rax_136 = (rbx_34 + 1).d
                    
                    if (rax_136 s> var_1bc)
                        sub_14119a720(&var_1c8, rbx_34.d)
                    
                    int64_t rax_137 = var_1c8
                    int64_t rcx_103 = rbx_34 * 3
                    int64_t zmm1_8 = var_658_16.q
                    *(rax_137 + (rcx_103 << 3)) = r15_1.o
                    var_658_16.w = 0
                    *(rax_137 + (rcx_103 << 3) + 0x10) = zmm1_8
                    void* rax_138 = var_4a0
                    int64_t rbx_35 = sx.q(rax_136)
                    void* var_660_23 = rsi_2 + 0xb8
                    int32_t rax_140 = (rbx_35 + 1).d
                    
                    if (rax_140 s> var_1bc)
                        sub_14119a720(&var_1c8, rbx_35.d)
                    
                    int64_t rax_141 = var_1c8
                    int64_t rcx_105 = rbx_35 * 3
                    zmm1_8 = var_658_16.q
                    *(rax_141 + (rcx_105 << 3)) = rax_138.o
                    var_658_16.w = 0x100
                    *(rax_141 + (rcx_105 << 3) + 0x10) = zmm1_8
                    void*** rax_142 = var_498
                    int64_t rbx_36 = sx.q(rax_140)
                    void* var_660_24 = rsi_2 + 0xc8
                    int32_t rax_144 = (rbx_36 + 1).d
                    var_1c0 = rax_144
                    
                    if (rax_144 s> var_1bc)
                        sub_14119a720(&var_1c8, rbx_36.d)
                    
                    int64_t rax_145 = var_1c8
                    int64_t rcx_107 = rbx_36 * 3
                    void*** r14_10 = var_5e8
                    *(rax_145 + (rcx_107 << 3)) = rax_142.o
                    *(rax_145 + (rcx_107 << 3) + 0x10) = var_658_16.q
                    int64_t rbx_37 = sx.q(rax_133)
                    void* var_660_25 = rsi_2 + 0x98
                    char var_658_17 = 1
                    int32_t rax_147 = (rbx_37 + 1).d
                    
                    if (rax_147 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_37.d)
                    
                    int64_t rcx_109 = rbx_37 * 3
                    int64_t rax_148 = var_1d8
                    *(rax_148 + (rcx_109 << 3)) = r14_10.o
                    *(rax_148 + (rcx_109 << 3) + 0x10) = var_658_17.q
                    
                    if (var_650_1 != 0)
                        sub_1411d3410(&var_338, r13_6, &var_628, &var_568, &var_570, &var_5b0)
                    
                    void*** rax_149 = sub_1411cf5d0(&var_338, r13_6, *(rsi_2 + 0x94), r14_10)
                    char var_658_18 = 1
                    *(rsi_2 + 0xd4) = *(rax_149 + 0x44)
                    *(rsi_2 + 0xd8) = rax_149[9].d
                    int64_t rbx_38 = sx.q(rax_147)
                    void* var_660_26 = rsi_2 + 0xe0
                    int32_t rax_151 = (rbx_38 + 1).d
                    var_1d0 = rax_151
                    
                    if (rax_151 s> var_1cc)
                        sub_14119a720(&var_1d8, rbx_38.d)
                    
                    int64_t rax_152 = var_1d8
                    int64_t rcx_115 = rbx_38 * 3
                    r8_8 = var_640
                    *(rax_152 + (rcx_115 << 3)) = rax_149.o
                    *(rax_152 + (rcx_115 << 3) + 0x10) = var_658_18.q
                
                if (data_143f0f21f != 0)
                    uint64_t rdx_44 = zx.q(data_143f0f1a0)
                    
                    if (((*(&data_143f025fc + sx.q(rdx_44.d) * 0x14) u>> 0x13).b & 1) != 0
                            && test_bit(data_143f13cd8, rdx_44))
                        void*** rax_101 = sub_1411d15d0(&var_338, r13_6, rdi_1, r15_1, r15_1, r8_8)
                        int64_t rbx_26 = sx.q(var_1d0)
                        void* var_660_16 = rsi_2 + 0x48
                        char var_658_13 = 1
                        int32_t rax_103 = (rbx_26 + 1).d
                        var_1d0 = rax_103
                        
                        if (rax_103 s> var_1cc)
                            sub_14119a720(&var_1d8, rbx_26.d)
                        
                        int64_t rax_104 = var_1d8
                        int64_t rcx_80 = rbx_26 * 3
                        *(rax_104 + (rcx_80 << 3)) = rax_101.o
                        *(rax_104 + (rcx_80 << 3) + 0x10) = var_658_13.q
                
                int32_t r9_13 = *(rsi_2 + 0x88)
                int32_t r8_20 = *(rsi_2 + 0x8c)
                void**** var_6b0_5 = &var_618
                var_600 = nullptr
                var_6b8.q = &var_610
                var_610 = 0
                void**** var_6c0_7 = &var_600
                int64_t* var_6c8_9 = &var_628
                var_618 = nullptr
                sub_1411d0cf0(&var_338, r13_6, r8_20, r9_13, var_6c8_9, var_6c0_7, var_6b8, 
                    var_6b0_5)
                void*** rax_105 = var_600
                int64_t rbx_27 = sx.q(var_1d0)
                void* var_660_17 = rsi_2 + 0x70
                char var_658_14 = 1
                int32_t rax_107 = (rbx_27 + 1).d
                var_1d0 = rax_107
                
                if (rax_107 s> var_1cc)
                    sub_14119a720(&var_1d8, rbx_27.d)
                
                int64_t rax_108 = var_1d8
                int64_t rcx_83 = rbx_27 * 3
                int64_t zmm1_7 = var_658_14.q
                *(rax_108 + (rcx_83 << 3)) = rax_105.o
                var_658_14.w = 0x100
                *(rax_108 + (rcx_83 << 3) + 0x10) = zmm1_7
                int64_t rax_109 = var_610
                int64_t rbx_28 = sx.q(var_1c0)
                void* var_660_18 = rsi_2 + 0x78
                int32_t rax_111 = (rbx_28 + 1).d
                
                if (rax_111 s> var_1bc)
                    sub_14119a720(&var_1c8, rbx_28.d)
                
                int64_t rax_112 = var_1c8
                int64_t rcx_85 = rbx_28 * 3
                zmm1_7 = var_658_14.q
                *(rax_112 + (rcx_85 << 3)) = rax_109.o
                var_658_14.w = 0x100
                *(rax_112 + (rcx_85 << 3) + 0x10) = zmm1_7
                void*** rax_113 = var_618
                int64_t rbx_29 = sx.q(rax_111)
                void* var_660_19 = rsi_2 + 0x80
                int32_t rax_115 = (rbx_29 + 1).d
                var_1c0 = rax_115
                
                if (rax_115 s> var_1bc)
                    sub_14119a720(&var_1c8, rbx_29.d)
                
                int64_t rax_116 = var_1c8
                int64_t rcx_87 = rbx_29 * 3
                *(rax_116 + (rcx_87 << 3)) = rax_113.o
                *(rax_116 + (rcx_87 << 3) + 0x10) = var_658_14.q
                sub_14199ef00(&var_338)
                void* r9_14 = *(rsi_2 + 0xa8)
                
                if (r9_14 != 0)
                    int64_t* rcx_89 = data_143f0f180
                    int64_t* var_5e0
                    (*(*rcx_89 + 0x5b0))(rcx_89, &var_5e0, &data_143f02b98, *(r9_14 + 0x10))
                    
                    if (rsi_2 + 0xb0 == &var_5e0)
                    label_1411ec389:
                        int64_t* rbx_39 = var_5e0
                        
                        if (rbx_39 != 0)
                            rbx_39[1].d -= 1
                            
                            if (rbx_39[1].d == 1)
                                char rax_155
                                
                                if (rbx_39[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_155 = sub_1405949a0()
                                
                                if (rbx_39[2].b != 0 || (data_143f0f1d0 == 0 && rax_155 != 0))
                                    (**rbx_39)(rbx_39, 1)
                                else
                                    bool z_2
                                    
                                    if (0 == *(rbx_39 + 0xc))
                                        *(rbx_39 + 0xc) = 1
                                        z_2 = true
                                    else
                                        *(rbx_39 + 0xc)
                                        z_2 = false
                                    
                                    if (z_2)
                                        sub_1405dcc10(&data_143f02390, rbx_39)
                    else
                        int64_t* rbx_30 = *(rsi_2 + 0xb0)
                        *(rsi_2 + 0xb0) = var_5e0
                        var_5e0 = nullptr
                        
                        if (rbx_30 != 0)
                            rbx_30[1].d -= 1
                            
                            if (rbx_30[1].d == 1)
                                char rax_120
                                
                                if (rbx_30[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_120 = sub_1405949a0()
                                
                                if (rbx_30[2].b != 0 || (data_143f0f1d0 == 0 && rax_120 != 0))
                                    (**rbx_30)(rbx_30, 1)
                                else
                                    bool z_1
                                    
                                    if (0 == *(rbx_30 + 0xc))
                                        *(rbx_30 + 0xc) = 1
                                        z_1 = true
                                    else
                                        *(rbx_30 + 0xc)
                                        z_1 = false
                                    
                                    if (z_1)
                                        sub_1405dcc10(&data_143f02390, rbx_30)
                            
                            goto label_1411ec389
                
                void* r9_20 = *(rsi_2 + 0xb8)
                
                if (r9_20 != 0)
                    int64_t* rcx_118 = data_143f0f180
                    int64_t* var_5d8
                    (*(*rcx_118 + 0x5b0))(rcx_118, &var_5d8, &data_143f02b98, *(r9_20 + 0x10))
                    
                    if (rsi_2 + 0xc0 == &var_5d8)
                    label_1411ec491:
                        int64_t* rbx_41 = var_5d8
                        
                        if (rbx_41 != 0)
                            rbx_41[1].d -= 1
                            
                            if (rbx_41[1].d == 1)
                                char rax_165
                                
                                if (rbx_41[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_165 = sub_1405949a0()
                                
                                if (rbx_41[2].b != 0 || (data_143f0f1d0 == 0 && rax_165 != 0))
                                    (**rbx_41)(rbx_41, 1)
                                else
                                    bool z_4
                                    
                                    if (0 == *(rbx_41 + 0xc))
                                        *(rbx_41 + 0xc) = 1
                                        z_4 = true
                                    else
                                        *(rbx_41 + 0xc)
                                        z_4 = false
                                    
                                    if (z_4)
                                        sub_1405dcc10(&data_143f02390, rbx_41)
                    else
                        int64_t* rbx_40 = *(rsi_2 + 0xc0)
                        *(rsi_2 + 0xc0) = var_5d8
                        var_5d8 = nullptr
                        
                        if (rbx_40 != 0)
                            rbx_40[1].d -= 1
                            
                            if (rbx_40[1].d == 1)
                                char rax_161
                                
                                if (rbx_40[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_161 = sub_1405949a0()
                                
                                if (rbx_40[2].b != 0 || (data_143f0f1d0 == 0 && rax_161 != 0))
                                    (**rbx_40)(rbx_40, 1)
                                else
                                    bool z_3
                                    
                                    if (0 == *(rbx_40 + 0xc))
                                        *(rbx_40 + 0xc) = 1
                                        z_3 = true
                                    else
                                        *(rbx_40 + 0xc)
                                        z_3 = false
                                    
                                    if (z_3)
                                        sub_1405dcc10(&data_143f02390, rbx_40)
                            
                            goto label_1411ec491
                
                int32_t var_110_1 = 0
                int32_t var_10c
                void var_118
                
                if (var_10c != 0)
                    sub_1410b3aa0(&var_118, 0)
                int32_t var_188_1 = 0
                int32_t var_184
                void var_190
                
                if (var_184 != 0)
                    sub_1410b3aa0(&var_190, 0)
                int32_t var_1e0_1 = 0
                int32_t var_220_1 = 0
                int32_t var_21c
                void var_228
                
                if (var_21c != 0)
                    sub_1410b3bb0(&var_228, 0)
                int32_t var_1f8_1 = 0xffffffff
                int32_t var_1f4_1 = 0
                void var_218
                sub_141095ed0(&var_218, 0)
                int32_t var_230_1 = 0
                int32_t var_270_1 = 0
                int32_t var_26c
                
                if (var_26c != 0)
                    sub_1410b3bb0(&var_278, 0)
                
                int32_t var_248_1 = 0xffffffff
                int32_t var_244_1 = 0
                void var_268
                sub_141095ed0(&var_268, 0)
                int32_t var_280_1 = 0
                void var_2c8
                sub_1411c8df0(&var_2c8)
                int32_t var_2d0_1 = 0
                sub_14108c840(&var_318)
                int64_t j = 3
                int64_t* rdi_2 = &var_a8
                
                do
                    int64_t* rcx_130 = rdi_2[-1]
                    rdi_2 = &rdi_2[-1]
                    j -= 1
                    
                    if (rcx_130 != 0)
                        (*(*rcx_130 + 0x38))(rcx_130)
                while (j != 0)
                
                r14_1 = var_550_1
                i = i_1
            else
                int64_t j_1 = 3
                int64_t* rdi = &var_a8
                
                do
                    int64_t* rcx_7 = rdi[-1]
                    rdi = &rdi[-1]
                    j_1 -= 1
                    
                    if (rcx_7 != 0)
                        (*(*rcx_7 + 0x38))(rcx_7)
                while (j_1 != 0)
            
            arg2 = var_5a8
            rax_2 = var_558
            result = arg1
        
        i += 1
        r14_1 += 1
        i_1 = i
        var_550_1 = r14_1
    while (i s< *(rax_2 + 8))

int64_t* rcx_131 = *arg5

if (rcx_131 != 0)
    (*(*rcx_131 + 0x38))(rcx_131)

int64_t* rcx_132 = *arg6

if (rcx_132 != 0)
    (*(*rcx_132 + 0x38))(rcx_132)

int64_t* rcx_133 = *arg7

if (rcx_133 != 0)
    int64_t rdx_70 = *rcx_133
    (*(rdx_70 + 0x38))(rcx_133, rdx_70)

int64_t* rcx_134 = *arg8

if (rcx_134 != 0)
    int64_t rdx_71 = *rcx_134
    (*(rdx_71 + 0x38))(rcx_134, rdx_71)

__security_check_cookie(var_a8 ^ &var_6e8)
return result
