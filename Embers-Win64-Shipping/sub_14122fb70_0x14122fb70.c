// 函数: sub_14122fb70
// 地址: 0x14122fb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_658
int64_t rax_1 = __security_cookie ^ &var_658
void* result = arg5
uint64_t* rsi = arg3
void* result_1 = result
uint64_t r12 = arg2

if ((*(arg1 + 0x3c) & 0x20) != 0)
    int64_t i_1 = sx.q(*(arg1 + 0xa8))
    result.b = 0
    
    if (i_1 s<= 0)
    label_14122fc01:
        void* rcx_1 = *(arg1 + 8)
        void* rax_2 = *(rcx_1 + 0xf80)
        char var_617_1
        
        if (rax_2 == 0 || *(rax_2 + 8) == 0 || (*(rax_2 + 0x20) & 4) != 0)
            var_617_1 = 0
        else
            var_617_1 = 1
        
        char rax_3 = sub_141108e00(rcx_1, arg1 + 0x10)
        char r15_1 = rax_3
        char var_615_1 = 0
        char var_628
        float zmm7[0x4]
        float zmm8[0x4]
        float zmm9[0x4]
        float zmm10[0x4]
        float zmm11[0x4]
        int128_t zmm12
        int128_t zmm13
        int128_t zmm14
        int128_t zmm15
        
        if (rax_3 != 0)
            void* rdx_1 = *(*(arg1 + 8) + 0xf80)
            void var_448
            sub_1410ea5b0(&var_448, *(rdx_1 + 0xc0), *(rdx_1 + 0xc4))
            
            if ((*(*(*(arg1 + 8) + 0xf80) + 0x20) & 1) != 0 && data_143e51018 == 0
                    && sub_141108e80(arg1) != 0 && (*(arg1 + 0x38) & 0x100) != 0)
                var_628 = 0
                char rax_5
                rax_5, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                    sub_141102140(arg1, r12, &var_448, arg4, rsi, false, var_628)
                var_615_1 = rax_5
        
        int64_t* var_5c8_1 = &data_143ec4c60
        char var_616_1
        
        if (sub_1413edd30(*(*(arg1 + 8) + 8)) == 0 || *(*(arg1 + 8) + 0x1040) == 0
                || (*(arg1 + 0x38) & 0x80000) == 0)
            var_616_1 = 0
        else
            var_616_1 = 1
        
        void var_370
        sub_1419928d0(&var_370, r12)
        void*** rax_8 = sub_1410fccd0(&var_370, sub_14139d440(&data_143ec4c60), u"External", 0)
        int64_t* rbx_1 = &data_1439b70c0
        int64_t* rdx_6 = &data_143ec4d20
        
        if (data_143ec4e38 == 0)
            rdx_6 = &data_1439b70c0
        
        void*** rax_9 = sub_1410fccd0(&var_370, rdx_6, u"External", 0)
        
        if (*rsi != 0)
            rbx_1 = rsi
        
        void*** rax_10 = sub_1410fccd0(&var_370, rbx_1, u"External", 0)
        int64_t var_4f0
        __builtin_memset(&var_4f0, 0, 0x48)
        float var_4f8[0x4]
        int128_t zmm6_1 = sub_14142a030(&var_370, &var_4f8)
        int64_t* rdi_1 = *(arg1 + 0xa0)
        int32_t rcx_16 = 0
        void* rax_13 = sx.q(*(arg1 + 0xa8)) * 0x5240 + rdi_1
        
        if (rdi_1 != rax_13)
            uint64_t r13
            uint64_t var_38_1 = r13
            float var_98_1[0x4] = zmm10
            zmm10 = 0x3f800000
            float var_a8_1[0x4] = zmm11
            zmm11 = 0x3c23d70a
            int128_t var_b8_1 = zmm12
            zmm12 = 0x3e800000
            int128_t var_c8_1 = zmm13
            zmm13 = 0x3f028f5c
            int128_t var_d8_1 = zmm14
            zmm14 = 0x477de800
            int128_t var_e8_1 = zmm15
            zmm15 = 0x80000000
            int128_t var_58_1 = zmm6_1
            float var_68_1[0x4] = zmm7
            float var_78_1[0x4] = zmm8
            float var_88_1[0x4] = zmm9
            
            do
                bool rax_14 = sub_1413faf40(rdi_1)
                char rax_15
                
                if (rax_14 == 0)
                    rax_15 = sub_141461ee0(rdi_1)
                
                uint64_t* var_638
                bool var_630
                void* const var_620
                void*** var_600
                void*** rax_17
                
                if (rax_14 != 0 || rax_15 == 0)
                    rbx_1.b = 0
                    
                    if (rax_14 == 0)
                        goto label_14122feda
                    
                label_14122feef:
                    rax_17 = nullptr
                    r13.b = 0
                    var_600 = nullptr
                    
                    if (rax_14 != 0 || rbx_1.b != 0)
                    label_14122ff0d:
                        r12.b = 0
                        int32_t r15_2 = *(data_143e81978 + 4)
                        int128_t var_518
                        __builtin_memset(&var_518, 0, 0x18)
                        int32_t var_610 = 0x3f800000
                        int32_t var_60c_1 = 1
                        bool rsi_1
                        uint128_t zmm0_1
                        
                        if (rax_14 == 0)
                            if (rbx_1.b != 0)
                                if (r15_2 == 0 || *(data_143e81990 + 4) == 0)
                                    rsi_1 = false
                                    
                                    if (rdi_1[0x2b5] == 0)
                                        r12.b = 0
                                    else if (sub_1414593e0(rdi_1) == 0)
                                        r12.b = 0
                                    else
                                        r12.b = 1
                                else
                                    rsi_1 = true
                                    r12.b = 0
                                
                                int64_t* rax_23
                                uint128_t zmm6_2
                                rax_23, zmm6_2 =
                                    sub_1410fccd0(&var_370, sub_14139d440(var_5c8_1), External", 0)
                                int32_t var_5e8
                                sub_141455ae0(rdi_1, &var_5e8, &var_610)
                                var_620 = nullptr
                                var_628.q = &var_518
                                var_638.d = var_5e8
                                zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_14145f640(&var_370, 
                                    &var_4f8, rax_23, rdi_1, zmm6_2, var_638.d, rsi_1, var_628, 
                                    var_620)
                                goto label_141230056
                            
                        label_141230250:
                            rax_17 = var_518.q
                            
                            if (r12.b != 0)
                                zmm0_1 = *(rdi_1 + 0x1598)
                                void*** var_468_1 = rax_17
                                var_628.q = rdi_1[0x2b5] + 0x928
                                var_630.q = &rdi_1[0x9bd]
                                char var_494_1 = 0
                                int32_t var_498
                                var_638 = &var_498
                                char var_492_1 = 0
                                int32_t var_490_1 = 0
                                uint128_t var_48c_1 = zmm0_1
                                int32_t var_46c_1 = 1
                                uint128_t var_47c_1 = zmm0_1
                                int64_t var_460_1 = 0
                                var_498 = 3
                                char var_493_1 = r13.b
                                void*** var_388
                                void**** rax_29
                                rax_29, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_14134cc40(
                                    &var_388, &var_370, &var_4f8, rdi_1, var_638, var_630, var_628)
                                rax_17 = *rax_29
                                uint64_t var_588_1 = rax_29[2]
                            
                            r15_1 = rax_3
                            var_600 = rax_17
                        else
                            rsi_1 = r15_2 != 0
                            zmm0_1.d = (*(data_143e81960 + 4)).d f* zmm11[0]
                            
                            if (not(zmm0_1.d f>= zmm12.d))
                                var_610 = 0x3e800000
                            else if (not(zmm0_1.d f>= zmm10[0]))
                                var_610 = zmm0_1.d
                            
                            int32_t rax_20 = sub_1413e95b0(rdi_1)
                            int32_t var_60c_2 = rax_20
                            
                            if (r15_2 != 0)
                                zmm0_1 = var_610
                            else
                                zmm0_1 = zmm10
                                var_610 = zmm0_1.d
                            
                            var_628.q = &var_518
                            var_630.d = zmm0_1.d
                            var_638.d = rax_20
                            zmm10 = sub_1413f2e60(arg1, &var_370, &var_4f8, rdi_1, var_638.d, 
                                var_630, var_628)
                        label_141230056:
                            
                            if (rsi_1 == 0)
                                goto label_141230250
                            
                            int64_t* rax_24 = sub_141455400()
                            int64_t* r11_1 = data_143ed5ae0
                            
                            if (r15_2 == 1)
                                r11_1 = rax_24
                            
                            var_620 = var_610.q
                            var_628.q = &var_518
                            var_630.q = &var_4f8
                            void*** var_428
                            (*(*r11_1 + 0x28))(r11_1, &var_428, &var_370, rdi_1, &rdi_1[0x932], 
                                var_630, var_628, var_620, rax_3)
                            rax_17 = var_428
                            r15_1 = rax_3
                            var_600 = rax_17
                else
                    rbx_1.b = 1
                label_14122feda:
                    char rax_16
                    rax_16, zmm10, zmm11, zmm12, zmm13 = sub_14126d170(arg1, rdi_1)
                    
                    if (rax_16 == 0)
                        goto label_14122feef
                    
                    rax_17 = nullptr
                    r13.b = 1
                    var_600 = nullptr
                    
                    if (rbx_1.b != 0)
                        goto label_14122ff0d
                
                if (r13.b != 0)
                    sub_1412908c0(arg1, &var_370, &var_4f8, rdi_1, &var_600)
                    rax_17 = var_600
                
                if (rax_17 != 0)
                label_14123012b:
                    r12.b = rdi_1[0xa08].d s> 0
                    r13.b = *(rdi_1 + 0x5044) s> 0
                    int64_t* var_368
                    int64_t* rax_26 = sub_14081d830(0x1c0, var_368, 1, 0)
                    rbx_1 = rax_26
                    
                    if (rax_26 == 0)
                        rbx_1 = nullptr
                    else
                        __builtin_memset(&rax_26[8], 0, 0x40)
                        __builtin_memset(&rax_26[0x11], 0, 0xa8)
                        *rax_26 = 0
                        rax_26[1].d = 0
                        *(rax_26 + 0xc) = 0x3f800000
                        sub_14117af20(&rax_26[0x26])
                    
                    memset(rbx_1, 0, 0x1c0)
                    void* rax_30 = *(arg1 + 8)
                    zmm7 = zx.o(0)
                    zmm8 = zmm11
                    float var_598[0x4] = zmm7
                    zmm9 = zmm10
                    uint32_t r15_3 = 2
                    void* rsi_2 = *(rax_30 + 0xf80)
                    float zmm1_2[0x4]
                    uint128_t zmm2_1
                    
                    if (rsi_2 != 0)
                        float var_438
                        sub_1410ea5b0(&var_438, (*(rsi_2 + 0xc0))[0], (*(rsi_2 + 0xc4)).d)
                        zmm7 = *(rsi_2 + 0xd0)
                        float zmm0_2 = *(rsi_2 + 0xd4)
                        zmm1_2 = *(rsi_2 + 0xd8)
                        zmm2_1 = *(rsi_2 + 0xcc)
                        int32_t var_430
                        zmm8 = var_430
                        zmm9 = *(rsi_2 + 0xc8)
                        r15_3 = zx.d(*(rsi_2 + 0x21))
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
                        zmm7[0] = zmm0_2
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc6)
                        zmm7[0] = zmm1_2[0]
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x27)
                        zmm7[0] = zmm2_1.d
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x39)
                        var_598 = zmm7
                    
                    float zmm0_3 = expf(zmm8[0] * 5f) + zmm10[0]
                    float zmm6_3 = zmm10[0]
                    *rbx_1 = zmm7
                    zmm6_3 = zmm6_3 / zmm0_3
                    float zmm0_4[0x4] = expf(zmm8[0] * -5f)
                    *(rbx_1 + 0x24) = zmm9[0]
                    zmm0_4[0] = zmm0_4[0] + zmm10[0]
                    zmm10[0] = zmm10[0] / zmm0_4[0]
                    zmm10[0] = zmm10[0] - zmm6_3
                    zmm2_1.d = zmm10.d f/ zmm10[0]
                    zmm0_4 = zmm2_1
                    zmm0_4[0] = zmm0_4[0] * zmm6_3
                    float var_450_1 = (zmm0_4 ^ zmm15)[0]
                    rbx_1[2] = (_mm_unpacklo_ps(zmm8, zmm2_1.q)).q
                    rbx_1[3].d = var_450_1
                    
                    if (r15_3 != 0)
                        zmm0_4 = zmm10
                    else
                        zmm0_4 = zx.o(0)
                    
                    rbx_1[5].d = zmm0_4[0]
                    
                    if (*arg3 == 0)
                        zmm0_4 = zx.o(0)
                    else
                        zmm0_4 = zmm10
                    
                    *(rbx_1 + 0x1c) = zmm0_4[0]
                    zmm1_2 = __maxss_xmmss_memss((*(data_143e819a8 + 4))[0], 0x3dcccccd)
                    zmm10[0] = zmm10[0] / zmm1_2[0]
                    rbx_1[4].d = zmm10[0]
                    int32_t var_5d8
                    sub_1410f8060(&var_5d8)
                    int32_t temp1_1
                    int32_t temp2_1
                    temp1_1:temp2_1 = sx.q(rdi_1[0x2b4].d - rdi_1[0x2b3].d)
                    zmm0_4 = _mm_cvtepi32_ps(zx.o(var_5d8))
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(*(rdi_1 + 0x15a4) - *(rdi_1 + 0x159c))
                    zmm2_1.d = _mm_cvtepi32_ps(zx.o((temp2_1 - temp1_1) s>> 1)).d f- zmm13.d
                    zmm1_2 = _mm_cvtepi32_ps(zx.o((temp4_1 - temp3_1) s>> 1))
                    zmm2_1.d = zmm2_1.d f/ zmm0_4[0]
                    zmm1_2[0] = zmm1_2[0] f- zmm13.d
                    int32_t var_5d4
                    zmm0_4 = _mm_cvtepi32_ps(zx.o(var_5d4))
                    rbx_1[6].d = zmm2_1.d
                    zmm1_2[0] = zmm1_2[0] / zmm0_4[0]
                    *(rbx_1 + 0x34) = zmm1_2[0]
                    *(rbx_1 + 0x3c) = _mm_min_ss(data_1439b55ac[0], zmm14.d)[0]
                    zmm0_4 = data_1439b55ac
                    zmm10[0] = zmm10[0] f- *"333?"
                    zmm0_4 = _mm_min_ss(zmm0_4[0], zmm14.d)
                    rbx_1[8] = rax_10
                    zmm10[0] = zmm10[0] * zmm0_4[0]
                    zmm10[0] = zmm10[0] / zmm10[0]
                    rbx_1[7].d = zmm10[0]
                    rbx_1[9] = data_14395f4d0
                    rbx_1[0xa] = rax_9
                    rbx_1[0xb] = data_14395fa10
                    void*** rax_47 = var_600
                    
                    if (rax_47 == 0)
                        rax_47 = sub_1410fccd0(&var_370, &data_1439b70c8, u"External", 0)
                    
                    rbx_1[0xc] = rax_47
                    rbx_1[0xd] = data_14395fa10
                    rbx_1[0xe] = *(data_1439b7100 + 0x10)
                    rbx_1[0xf] = data_14395f4d0
                    *(rbx_1 + 0x80) = var_4f8
                    __builtin_memset(&rbx_1[0x12], 0, 0x40)
                    sub_14142a1f0(&rbx_1[0x1a])
                    sub_1405d16e0(&rbx_1[0x22], rdi_1[2])
                    sub_1405d16e0(&rbx_1[0x24], rdi_1[0xa0a])
                    int128_t var_3e8 = data_142d3f660
                    int64_t var_3d0
                    __builtin_memset(&var_3d0, 0, 0x40)
                    zmm10 = sub_14123d450(rdi_1, &var_3e8)
                    int64_t* rcx_45 = data_143f0f180
                    var_630.d = 1
                    var_638.d = 0
                    void* var_5d0
                    (*(*rcx_45 + 0xf8))(rcx_45, &var_5d0, &var_3e8, &data_143e81d10, var_638, 
                        var_630, var_628, var_620, rax_3)
                    void* rax_52 = var_5d0
                    var_598[0].q = rax_52
                    
                    if (rax_52 != 0)
                        *(rax_52 + 8) += 1
                    
                    sub_1405d1550(&var_5d0)
                    sub_1405d1600(&rbx_1[0x23], &var_598)
                    sub_1405d1550(&var_598)
                    sub_1405d16e0(&rbx_1[0x25], *(rdi_1[0x2a8] + 0x280))
                    int16_t var_5a0_1 = 1
                    char var_59e_1 = 0
                    int32_t var_59c_1 = 0xffffffff
                    *(rbx_1 + 0x130) = rax_8.o
                    int32_t rax_54
                    int32_t r8_8
                    rax_54, r8_8 = sub_14139d630(var_5c8_1)
                    char rax_55 = sub_14135d320(rax_54)
                    r15_1 = rax_3
                    bool var_5f6_1 = *arg3 != 0
                    char var_5f3_1 = var_615_1
                    char var_5f8_1 = r12.b
                    r12 = zx.q(var_617_1)
                    bool var_5f2_1 = rax_14
                    char var_5f7_1 = r13.b
                    char var_5f5_1 = r12.b
                    char var_5f4_1 = r15_1
                    int64_t rcx_52 = var_5f8_1.q
                    int64_t var_5f0_1 = rcx_52
                    uint32_t rdx_28 = (rcx_52 u>> 0x18).d
                    
                    if (rdx_28.b == 0)
                        var_5f0_1:4.b = rdx_28.b
                        var_5f0_1:5.b = 0
                        rcx_52 = var_5f0_1
                    else if (r15_1 == 0)
                        var_5f0_1:5.b = 0
                        rcx_52 = var_5f0_1
                    
                    int32_t rdx_30 = sbb.d(rdx_28, rdx_28, (rcx_52 u>> 0x28).b != 0) & 0x10
                    int32_t rdx_32 = sbb.d(rdx_30, rdx_30, (rcx_52 u>> 0x20).b != 0) & 8
                    int32_t rdx_34 = sbb.d(rdx_32, rdx_32, (rcx_52 u>> 0x18).b != 0) & 4
                    int32_t rax_68
                    rax_68.b = (rcx_52 u>> 8).b != 0
                    int32_t rax_69
                    rax_69.b = var_5f0_1.b != 0
                    int32_t r9_6 = rax_69 + (((sbb.d(r8_8, r8_8, (rcx_52 u>> 0x30).b != 0) & 0x20)
                        + rdx_30 + rdx_32 + rdx_34
                        + (sbb.d(rdx_34, rdx_34, (rcx_52 u>> 0x10).b != 0) & 2) + rax_68) << 1)
                    float var_418[0x4]
                    char rcx_55 = sub_1419a2ec0(rdi_1[0xa2a], &var_418, &data_143e81bd0, r9_6)
                    zmm7 = var_418
                    int64_t var_538
                    var_538.o = zx.o(0)
                    int128_t var_408_1 = sub_141228760(rcx_55)
                    sub_141998c50(zmm7[0].q, &data_143e840b0, rbx_1)
                    var_598[0].q = rbx_1
                    var_598[2].q = rdi_1
                    void*** rax_70
                    char rcx_57
                    rax_70, rcx_57 = sub_14081d830(0x60, var_368, 1, 0)
                    void*** rsi_4 = rax_70
                    
                    if (rax_70 == 0)
                        rsi_4 = nullptr
                    else
                        sub_141228760(rcx_57)
                        void* var_4a0_1 = &data_143e840e0
                        int128_t var_3f8 = rbx_1.o
                        void var_608
                        sub_141992bd0(rsi_4, &var_608, &var_3f8, 1)
                        float zmm0_8[0x4] = var_598
                        *rsi_4 = &data_142f425e8
                        *(rsi_4 + 0x38) = zmm0_8
                        *(rsi_4 + 0x48) = zmm7
                        rsi_4[0xb] = rax_55.q
                    
                    sub_1419968d0(&var_370, rsi_4)
                    r13 = zx.q(var_616_1)
                else
                    r12 = zx.q(var_617_1)
                    
                    if (r12.b != 0 || r15_1 != 0)
                        goto label_14123012b
                    
                    r13 = zx.q(var_616_1)
                    
                    if (r13.b != 0)
                        goto label_14123012b
                
                if (result_1 != 0 && (r12.b != 0 || r15_1 != 0 || r13.b != 0))
                    zmm10 = sub_141198470(&var_370, rcx_16, arg1 + 0xa0, result_1)
                
                rcx_16 += 1
                rdi_1 = &rdi_1[0xa48]
            while (rdi_1 != rax_13)
            
            r12 = arg2
        
        int32_t var_208
        int64_t rbx_2 = sx.q(var_208)
        int64_t* var_5b8
        int64_t* var_530_1 = &var_5b8
        int32_t rax_73 = (rbx_2 + 1).d
        var_5b8 = nullptr
        char var_528_1 = 1
        int32_t var_208_1 = rax_73
        int64_t var_210
        int32_t var_204
        
        if (rax_73 s> var_204)
            sub_14119a720(&var_210, rbx_2.d)
        
        int64_t rax_74 = var_210
        int64_t r8_19 = rbx_2 * 3
        *(rax_74 + (r8_19 << 3)) = rax_8.o
        *(rax_74 + (r8_19 << 3) + 0x10) = var_528_1.q
        sub_14199ef00(&var_370)
        sub_141427c70(arg1, r12)
        int64_t* rcx_64 = var_5b8
        
        if (rcx_64 != 0)
            (*(*rcx_64 + 0x38))(rcx_64)
        
        result = sub_1410eb9e0(&var_370)
    else
        int64_t rcx = 0
        int64_t i
        
        do
            if (result.b != 0 || *(rcx + *(arg1 + 0xa0) + 0xd74) != 0)
                result.b = 1
            else
                result.b = 0
            
            rcx += 0x5240
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (result.b == 0)
            goto label_14122fc01

__security_check_cookie(rax_1 ^ &var_658)
return result
