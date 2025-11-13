// 函数: sub_1418499b0
// 地址: 0x1418499b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int64_t* rsi = arg1 + 0x2c0
int32_t var_310 = 0
int32_t var_30c = 5
(*(*rsi + 0x18))(rsi, &var_30c, &var_310)
bool z_1

if (*(arg1 + 0xb8) != 0)
    if (0 == *(arg1 + 0x14c))
        *(arg1 + 0x14c) = 0
        z_1 = true
    else
        *(arg1 + 0x14c)
        z_1 = false

uint64_t result

if (*(arg1 + 0xb8) != 0 && (z_1 || *(arg1 + 0xb8) != 3))
    void* lpCriticalSection = arg1 + 0x698
    EnterCriticalSection(lpCriticalSection)
    
    if (*(lpCriticalSection + 0x38) == 0)
        bool cond:0_1 = *(lpCriticalSection + 0x39) != 0
        *(lpCriticalSection + 0x38) = 1
        
        if (not(cond:0_1))
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            *(lpCriticalSection + 0x28) = performanceCount_1
    
    LeaveCriticalSection(lpCriticalSection)
    int64_t* rcx_4 = *(arg1 + 0x538)
    char rax_6 = (*(*rcx_4 + 8))(rcx_4)
    uint64_t r15
    r15.b = rax_6 == 0
    char var_348_1 = r15.b
    
    if (rax_6 == 0)
        int64_t* rcx_5 = *(arg1 + 0x5e8)
        int64_t var_c8 = 0
        int32_t var_c0_1 = 0
        int32_t var_9c_1 = 0x80
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x1c)
        int32_t var_98_1 = 0xffffffff
        int32_t var_94_1 = 0
        int64_t var_88_1 = 0
        int32_t var_80_1 = 0
        (*(*rcx_5 + 0x48))(rcx_5, &var_c8)
        sub_141838ce0(arg1, arg1 + 0xe8, &var_c8)
        char var_346
        char* var_1e8 = &var_346
        
        if (var_c0_1 - var_94_1 s> 0)
            sub_140a6c1e0(&var_c8)
            char** var_1e0_1 = &var_1e8
            sub_14181b5f0(var_c8, var_c0_1 - var_94_1, var_346)
        
        sub_1405a4480(&var_c8)
        int64_t* rcx_10 = *(arg1 + 0x5e8)
        int64_t var_118 = 0
        int32_t var_110_1 = 0
        int32_t var_ec_1 = 0x80
        int64_t var_108
        __builtin_memset(&var_108, 0, 0x1c)
        int32_t var_e8_1 = 0xffffffff
        int32_t var_e4_1 = 0
        int64_t var_d8_1 = 0
        int32_t var_d0_1 = 0
        (*(*rcx_10 + 0x58))(rcx_10, &var_118)
        void* r14_1 = arg1 + 0x68
        sub_141838ce0(arg1, r14_1, &var_118)
        char var_345
        char* var_210 = &var_345
        
        if (var_110_1 - var_e4_1 s> 0)
            sub_140a6c1e0(&var_118)
            char** var_1d0_1 = &var_210
            sub_14181b5f0(var_118, var_110_1 - var_e4_1, var_345)
        
        sub_1405a4480(&var_118)
        uint128_t zmm9 = _mm_cvtepi32_ps(zx.o(var_110_1 - var_e4_1 - var_94_1 + var_c0_1))
        EnterCriticalSection(arg1 + 0x118)
        *(arg1 + 0x160) = var_110_1 - var_e4_1
        LeaveCriticalSection(arg1 + 0x118)
        int16_t* const r12_1 = &data_142d40450
        
        if (not(zmm9.d f<= 0f))
            int64_t* rcx_17 = *(arg1 + 0x528)
            int16_t* const r8_5
            
            if (*(arg1 + 0x110) == 0)
                r8_5 = &data_142d40450
            else
                r8_5 = *(arg1 + 0x108)
            
            int64_t* var_1c8
            (*(*rcx_17 + 0x50))(rcx_17, &var_1c8, r8_5, 4)
            int64_t* rcx_18 = var_1c8
            
            if (rcx_18 != 0)
                (**rcx_18)(rcx_18, 1)
        
        int64_t* var_2c0_1 = &var_108
        int32_t rcx_19 = 0
        int32_t var_2c8_1 = 0
        int32_t r8_6 = 0
        int32_t var_2c4_1 = 1
        int32_t var_2b8_1 = 0xffffffff
        int64_t var_2b4_1 = 0
        int64_t* var_f8
        int32_t var_f0
        
        if (var_f0 != 0)
            int64_t* r9_1 = &var_108
            
            if (var_f8 != 0)
                r9_1 = var_f8
            
            int32_t temp0_2
            int32_t temp1_1
            temp0_2:temp1_1 = sx.q(var_f0 - 1)
            int32_t rdx_12 = *r9_1
            
            if (rdx_12 != 0)
            label_141849dc9:
                int32_t rax_27 = neg.d(rdx_12) & rdx_12
                uint64_t rflags_1
                int32_t temp0_3
                temp0_3, rflags_1 = _bit_scan_reverse(rax_27)
                int32_t var_2c4_2 = rax_27
                int32_t var_218_1 = temp0_3
                int32_t rax_28
                
                if (rax_27 == 0)
                    rax_28 = 0x20
                else
                    rax_28 = 0x1f - temp0_3
                
                int32_t rax_29 = r8_6 - rax_28 + 0x1f
                
                if (rax_29 s> var_f0)
                    rax_29 = var_f0
                
                var_2b4_1.d = rax_29
            else
                while (true)
                    int64_t rax_24 = sx.q(rcx_19)
                    r8_6 += 0x20
                    rcx_19 += 1
                    var_2b4_1:4.d = r8_6
                    var_2c8_1 = rcx_19
                    
                    if (rax_24.d s>= ((temp0_2 & 0x1f) + temp1_1) s>> 5)
                        var_2b4_1.d = var_f0
                        break
                    
                    rdx_12 = *(r9_1 + (rax_24 << 2) + 4)
                    int32_t var_2b8_2 = 0xffffffff
                    
                    if (rdx_12 != 0)
                        goto label_141849dc9
        
        int128_t var_1a8_1 = 0xffffffff
        int512_t zmm1_1
        zmm1_1.o = var_2c8_1.o
        double var_248[0x2] = (&var_118).o
        int64_t var_228_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int128_t var_238_1 = zmm1_1.o
        int64_t* var_358
        
        if (0 s< var_f0)
            int32_t i = var_238_1:0xc.d
            
            do
                int64_t* rcx_21 = *(arg1 + 0x538)
                
                if ((*(*rcx_21 + 8))(rcx_21) != 0)
                    break
                
                int64_t* r13_1 = var_248[0]
                int64_t r12_2 = sx.q(i) * 3
                sub_141828f90(arg1, *r13_1 + (r12_2 << 3), 0, zmm1_1)
                int64_t r15_1 = *r13_1
                uint32_t rbx_1 = *(r14_1 + 8)
                int32_t rax_34 = *(r15_1 + (r12_2 << 3) + 8)
                int32_t rsi_1 = rax_34 - 1
                
                if (rax_34 == 0)
                    rsi_1 = 0
                
                int32_t rax_36
                
                if (rbx_1 == 0)
                    rax_36 = 2
                
                if (rbx_1 != 0 || rsi_1 == 0xffffffff)
                    rax_36 = 1
                
                int64_t r14_2 = *r14_1
                int32_t rcx_23 = rax_36 + rsi_1
                int16_t* var_320 = nullptr
                uint32_t var_318_1 = rbx_1
                
                if (rbx_1 != 0 || rcx_23 != 0)
                    sub_1405a4c70(&var_320, rbx_1 + rcx_23, 0)
                    memcpy(var_320, r14_2, rbx_1 * 2)
                else
                    int32_t var_314_1 = 0
                
                sub_140a2cf70(&var_320, *(r15_1 + (r12_2 << 3)), rsi_1)
                int32_t rax_37
                double zmm6_1[0x2]
                double zmm7_1[0x2]
                int32_t zmm8_1
                rax_37, zmm1_1, zmm6_1, zmm7_1, zmm8_1 = sub_1418450b0()
                rbx_1.b = 0
                int32_t rsi_2 = rax_37
                enum WIN32_ERROR r14_3 = NO_ERROR
                
                if (rax_37 s>= 0)
                    while (rbx_1.b == 0)
                        int64_t* rcx_27 = *(arg1 + 0x528)
                        int16_t* const rdx_17 = &data_142d40450
                        
                        if (var_318_1 != 0)
                            rdx_17 = var_320
                        
                        rbx_1 = zx.d((*(*rcx_27 + 0x68))(rcx_27, rdx_17))
                        r14_3 = GetLastError()
                        
                        if (rbx_1.b != 0)
                            break
                        
                        int32_t temp4_1 = rsi_2
                        rsi_2 -= 1
                        
                        if (temp4_1 - 1 s< 0)
                            break
                        
                        zmm1_1, zmm6_1 = sub_140b73230(zmm6_1)
                    
                    r13_1 = var_248[0]
                
                if (rbx_1.b == 0)
                    int64_t* rbx_3 = *(arg1 + 0x538)
                    sub_1405d9400()
                    int64_t var_168 = data_143cd6fd8
                    void* rax_49 = data_143cd6fe0
                    void* var_160_1 = rax_49
                    
                    if (rax_49 != 0)
                        *(rax_49 + 8) += 1
                    
                    int32_t var_158_1 = data_143cd6fe8
                    var_358 = &var_168
                    (*(*rbx_3 + 0x38))(rbx_3, 3, data_1439c67c0, zx.q(r14_3), var_358)
                    int16_t* rcx_35 = var_320
                    var_348_1 = 0
                    
                    if (rcx_35 != 0)
                        sub_140a74f90(rcx_35)
                    
                    rsi = arg1 + 0x2c0
                    break
                
                int64_t rax_41 = *r13_1
                int32_t rdx_18 = 0
                int32_t var_2a0_1 = 0
                uint64_t rsi_3 = 0
                uint64_t var_298 = 0
                int32_t rbx_2 = *(rax_41 + (r12_2 << 3) + 8)
                int64_t r14_4 = *(rax_41 + (r12_2 << 3))
                int32_t rax_42
                int32_t var_28c
                
                if (rbx_2 != 0)
                    sub_1405a4c70(&var_298, rbx_2, 0)
                    rsi_3 = var_298
                    memcpy(rsi_3, r14_4, rbx_2 * 2)
                    rax_42 = var_28c
                    rdx_18 = var_2a0_1
                else
                    rax_42 = 0
                    var_28c = 0
                int64_t* rcx_30 = *(arg1 + 0x5d0)
                int32_t var_198 = rdx_18
                uint64_t var_190_1 = rsi_3
                int32_t var_188_1 = rbx_2
                int32_t var_184_1 = rax_42
                (*(*rcx_30 + 8))(rcx_30, &var_198)
                int32_t var_304 = 5
                zmm7_1[0].d = zmm7_1[0].d f/ zmm9.d
                rsi = arg1 + 0x2c0
                int64_t rax_44 = *rsi
                int32_t var_308 = zmm7_1[0].d
                (*(rax_44 + 0x18))(rsi, &var_304, &var_308)
                int16_t* rcx_32 = var_320
                zmm7_1[0].d = zmm7_1[0].d f+ zmm8_1
                
                if (rcx_32 != 0)
                    zmm1_1 = sub_140a74f90(rcx_32)
                
                var_238_1:8.d &= not.d(var_248[1]:4.d)
                sub_14059bdd0(&var_248[1])
                r14_1 = arg1 + 0x68
                i = var_238_1:0xc.d
            while (i s< *(var_238_1.q + 0x18))
            
            r12_1 = &data_142d40450
        
        int64_t* var_2e0_1 = &var_b8
        int32_t rcx_36 = 0
        int32_t var_2e8_1 = 0
        int32_t r8_15 = 0
        int32_t var_2e4_1 = 1
        int32_t var_2d8_1 = 0xffffffff
        int64_t var_2d4_1 = 0
        int64_t* var_a8
        int32_t var_a0
        
        if (var_a0 != 0)
            int64_t* r9_3 = &var_b8
            
            if (var_a8 != 0)
                r9_3 = var_a8
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(var_a0 - 1)
            int32_t rdx_25 = *r9_3
            
            if (rdx_25 != 0)
            label_14184a189:
                int32_t rax_58 = neg.d(rdx_25) & rdx_25
                uint64_t rflags_2
                int32_t temp0_5
                temp0_5, rflags_2 = _bit_scan_reverse(rax_58)
                int32_t var_2e4_2 = rax_58
                int32_t var_208_1 = temp0_5
                int32_t rbx_4
                
                if (rax_58 == 0)
                    rbx_4 = 0x20
                else
                    rbx_4 = 0x1f - temp0_5
                
                int32_t rax_59 = r8_15 - rbx_4 + 0x1f
                
                if (rax_59 s> var_a0)
                    rax_59 = var_a0
                
                var_2d4_1.d = rax_59
            else
                while (true)
                    int64_t rax_55 = sx.q(rcx_36)
                    r8_15 += 0x20
                    rcx_36 += 1
                    var_2d4_1:4.d = r8_15
                    var_2e8_1 = rcx_36
                    
                    if (rax_55.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                        var_2d4_1.d = var_a0
                        break
                    
                    rdx_25 = *(r9_3 + (rax_55 << 2) + 4)
                    int32_t var_2d8_2 = 0xffffffff
                    
                    if (rdx_25 != 0)
                        goto label_14184a189
        
        int128_t var_1a8_2 = 0xffffffff
        zmm1_1.o = var_2e8_1.o
        double var_270[0x2] = (&var_c8).o
        int64_t var_250_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        int128_t var_260_1 = zmm1_1.o
        
        if (0 s< var_a0)
            int32_t rbx_5 = var_260_1:0xc.d
            
            while (true)
                int64_t* rcx_38 = *(arg1 + 0x538)
                
                if ((*(*rcx_38 + 8))(rcx_38) != 0)
                    break
                
                int32_t rbx_6 = *(arg1 + 0xf0)
                int64_t r15_3 = *var_270[0]
                int64_t r13_2 = sx.q(rbx_5) * 3
                int32_t rax_63 = *(r15_3 + (r13_2 << 3) + 8)
                int32_t rsi_4 = rax_63 - 1
                
                if (rax_63 == 0)
                    rsi_4 = 0
                
                int32_t rax_65
                
                if (rbx_6 == 0)
                    rax_65 = rbx_6 + 2
                
                if (rbx_6 != 0 || rsi_4 == 0xffffffff)
                    rax_65 = 1
                
                int64_t r14_5 = *(arg1 + 0xe8)
                int32_t rcx_39 = rax_65 + rsi_4
                int16_t* var_330 = nullptr
                
                if (rbx_6 != 0 || rcx_39 != 0)
                    sub_1405a4c70(&var_330, rbx_6 + rcx_39, 0)
                    memcpy(var_330, r14_5, rbx_6 * 2)
                else
                    int32_t var_324_1 = 0
                
                sub_140a2cf70(&var_330, *(r15_3 + (r13_2 << 3)), rsi_4)
                uint32_t rbx_7 = *(arg1 + 0x70)
                r15 = *var_270[0]
                int32_t rax_67 = *(r15 + (r13_2 << 3) + 8)
                int32_t rsi_5 = rax_67 - 1
                
                if (rax_67 == 0)
                    rsi_5 = 0
                
                int32_t rax_69
                
                if (rbx_7 == 0)
                    rax_69 = 2
                
                if (rbx_7 != 0 || rsi_5 == 0xffffffff)
                    rax_69 = 1
                
                int64_t r14_6 = *(arg1 + 0x68)
                int32_t rcx_43 = rax_69 + rsi_5
                int16_t* var_340 = nullptr
                uint32_t var_338_1 = rbx_7
                
                if (rbx_7 != 0 || rcx_43 != 0)
                    sub_1405a4c70(&var_340, rbx_7 + rcx_43, 0)
                    memcpy(var_340, r14_6, rbx_7 * 2)
                else
                    int32_t var_334_1 = 0
                
                sub_140a2cf70(&var_340, *(r15 + (r13_2 << 3)), rsi_5)
                int64_t* rcx_47 = *(arg1 + 0x528)
                int16_t* const rdx_32 = &data_142d40450
                
                if (var_338_1 != 0)
                    rdx_32 = var_340
                
                char rax_71 = (*(*rcx_47 + 0x80))(rcx_47, rdx_32)
                enum WIN32_ERROR r14_7
                
                if (rax_71 != 0)
                    sub_141828f90(arg1, *var_270[0] + (r13_2 << 3), 0, zmm1_1)
                    int32_t rax_74
                    int128_t zmm6_2
                    rax_74, zmm6_2 = sub_1418450b0()
                    rbx_7.b = 0
                    r14_7 = NO_ERROR
                    int32_t rsi_6 = rax_74
                    
                    if (rax_74 s>= 0)
                        while (true)
                            if (rbx_7.b != 0)
                                goto label_14184a3c8
                            
                            int64_t* rcx_49 = *(arg1 + 0x528)
                            int16_t* rdx_34 = &data_142d40450
                            
                            if (var_338_1 != 0)
                                rdx_34 = var_340
                            
                            rbx_7 = zx.d((*(*rcx_49 + 0x68))(rcx_49, rdx_34))
                            r14_7 = GetLastError()
                            
                            if (rbx_7.b != 0)
                                goto label_14184a3c8
                            
                            int32_t temp5_1 = rsi_6
                            rsi_6 -= 1
                            
                            if (temp5_1 - 1 s< 0)
                                break
                            
                            zmm6_2 = sub_140b73230(zmm6_2)
                
                if (rax_71 != 0 && rbx_7.b == 0)
                    int64_t* rbx_10 = *(arg1 + 0x538)
                    sub_1405d9400()
                    int64_t var_150 = data_143cd6fd8
                    void* rax_101 = data_143cd6fe0
                    void* var_148_1 = rax_101
                    
                    if (rax_101 != 0)
                        *(rax_101 + 8) += 1
                    
                    int32_t var_140_1 = data_143cd6fe8
                    (*(*rbx_10 + 0x38))(rbx_10, 3, data_1439c67b8, zx.q(r14_7), &var_150)
                else
                label_14184a3c8:
                    int32_t rax_78
                    int128_t zmm6_3
                    float zmm7_2
                    float zmm8_2
                    rax_78, zmm1_1, zmm6_3, zmm7_2, zmm8_2 = sub_1418450b0()
                    int32_t rsi_7 = rax_78
                    rbx_7.b = 0
                    r15 = 0
                    enum WIN32_ERROR r14_8 = NO_ERROR
                    
                    if (rsi_7 s< 0)
                    label_14184a7fe:
                        var_358.d = r14_8
                        int16_t* var_200
                        sub_140a2e390(&var_200, u"%s-%u-%u", data_1439c67b0)
                        int32_t var_1f8
                        
                        if (r15.d == 0 && r14_8 == NO_ERROR)
                            r12_1 = data_1439c67b0
                        else if (var_1f8 != 0)
                            r12_1 = var_200
                        int64_t* rbx_11 = *(arg1 + 0x538)
                        sub_1405d9400()
                        int64_t var_138 = data_143cd6fd8
                        void* rax_105 = data_143cd6fe0
                        void* var_130_1 = rax_105
                        
                        if (rax_105 != 0)
                            *(rax_105 + 8) += 1
                        
                        int32_t var_128_1 = data_143cd6fe8
                        (*(*rbx_11 + 0x38))(rbx_11, 3, r12_1, 0, &var_138)
                        int16_t* rcx_84 = var_200
                        
                        if (rcx_84 != 0)
                            sub_140a74f90(rcx_84)
                    else
                        while (rbx_7.b == 0)
                            int16_t* const r8_23 = &data_142d40450
                            int64_t* rcx_50 = *(arg1 + 0x528)
                            int16_t* rdx_35 = &data_142d40450
                            
                            if (rbx_6 != 0)
                                r8_23 = var_330
                            
                            if (var_338_1 != 0)
                                rdx_35 = var_340
                            
                            char rax_80 = (*(*rcx_50 + 0x70))(rcx_50, rdx_35, r8_23)
                            r15 = zx.q(GetLastError())
                            
                            if (rax_80 != 0)
                                break
                            
                            int16_t* const r8_24 = &data_142d40450
                            int64_t* rcx_51 = *(arg1 + 0x528)
                            int16_t* rdx_36 = &data_142d40450
                            
                            if (rbx_6 != 0)
                                r8_24 = var_330
                            
                            if (var_338_1 != 0)
                                rdx_36 = var_340
                            
                            rbx_7 = zx.d((*(*rcx_51 + 0x78))(rcx_51, rdx_36, r8_24))
                            r14_8 = GetLastError()
                            
                            if (rbx_7.b == 0)
                                int32_t temp6_1 = rsi_7
                                rsi_7 -= 1
                                
                                if (temp6_1 - 1 s< 0)
                                    goto label_14184a7fe
                                
                                zmm1_1, zmm6_3 = sub_140b73230(zmm6_3)
                            else
                                int64_t* rcx_52 = *(arg1 + 0x528)
                                int16_t* rdx_37 = &data_142d40450
                                
                                if (rbx_6 != 0)
                                    rdx_37 = var_330
                                
                                (*(*rcx_52 + 0x68))(rcx_52, rdx_37)
                        
                        int64_t rsi_8 = sx.q(*(arg1 + 0x378))
                        double r15_4 = var_270[0]
                        int32_t rax_86 = (rsi_8 + 1).d
                        int64_t r14_9 = *r15_4
                        *(arg1 + 0x378) = rax_86
                        
                        if (rax_86 s> *(arg1 + 0x37c))
                            sub_1405a4f90(arg1 + 0x370)
                        
                        sub_140596d10((rsi_8 << 4) + *(arg1 + 0x370), r14_9 + (r13_2 << 3))
                        int64_t* rcx_57 = *(arg1 + 0x558)
                        int64_t r9_4 = *rcx_57
                        (*(r9_4 + 0x40))(rcx_57, *r15_4 + (r13_2 << 3), 0xb, r9_4, var_358)
                        void var_1d8
                        int32_t* rax_89 =
                            sub_140960120(arg1 + 0x470, &var_1d8, *r15_4 + (r13_2 << 3))
                        int32_t rdx_42
                        
                        if (*rax_89 == 0xffffffff)
                            rdx_42 = 1
                        
                        if (*rax_89 != 0xffffffff || rax_71 != 0)
                            rdx_42 = 2
                        
                        int64_t rax_90 = *r15_4
                        uint64_t rsi_9 = 0
                        uint64_t var_280 = 0
                        int32_t rbx_9 = *(rax_90 + (r13_2 << 3) + 8)
                        int64_t r14_10 = *(rax_90 + (r13_2 << 3))
                        int32_t rax_91
                        int32_t var_274
                        
                        if (rbx_9 != 0)
                            sub_1405a4c70(&var_280, rbx_9, 0)
                            rsi_9 = var_280
                            memcpy(rsi_9, r14_10, rbx_9 * 2)
                            rax_91 = var_274
                        else
                            rax_91 = 0
                            var_274 = 0
                        int64_t* rcx_61 = *(arg1 + 0x5d0)
                        int32_t var_180 = rdx_42
                        uint64_t var_178_1 = rsi_9
                        int32_t var_170_1 = rbx_9
                        int32_t var_16c_1 = rax_91
                        (*(*rcx_61 + 8))(rcx_61, &var_180)
                        int32_t var_2fc = 5
                        rsi = arg1 + 0x2c0
                        int64_t rax_93 = *rsi
                        float var_300 = zmm7_2 f/ zmm9.d
                        (*(rax_93 + 0x18))(rsi, &var_2fc, &var_300)
                        int16_t* rcx_63 = var_340
                        
                        if (rcx_63 != 0)
                            zmm1_1 = sub_140a74f90(rcx_63)
                        
                        int16_t* rcx_64 = var_330
                        
                        if (rcx_64 != 0)
                            zmm1_1 = sub_140a74f90(rcx_64)
                        
                        var_260_1:8.d &= not.d(var_270[1]:4.d)
                        sub_14059bdd0(&var_270[1])
                        rbx_5 = var_260_1:0xc.d
                        
                        if (rbx_5 s>= *(var_260_1.q + 0x18))
                            break
                        
                        continue
                
                int16_t* rcx_69 = var_340
                
                if (rcx_69 != 0)
                    sub_140a74f90(rcx_69)
                
                int16_t* rcx_70 = var_330
                
                if (rcx_70 != 0)
                    sub_140a74f90(rcx_70)
                
                goto label_14184a6d3_1
        
        if (var_348_1 == 0)
        label_14184a6d3:
            r15.b = 0
        else
            int64_t* rcx_66 = *(arg1 + 0x538)
            
            if ((*(*rcx_66 + 8))(rcx_66) != 0)
            label_14184a6d3_1:
                r15.b = 0
            else
                int64_t rax_99 = *rsi
                int32_t var_2f8 = 0x3f800000
                int32_t var_2f4 = 5
                r15.b = 1
                (*(rax_99 + 0x18))(rsi, &var_2f4, &var_2f8)
        
        int32_t var_d0_2 = 0
        
        if (var_d8_1 != 0)
            sub_140a74f90(var_d8_1)
        
        sub_14059ad90(&var_118, 0)
        
        if (var_f8 != 0)
            sub_140a74f90(var_f8)
        
        int64_t rcx_74 = var_118
        
        if (rcx_74 != 0)
            sub_140a74f90(rcx_74)
        
        int32_t var_80_2 = 0
        
        if (var_88_1 != 0)
            sub_140a74f90(var_88_1)
        
        sub_14059ad90(&var_c8, 0)
        
        if (var_a8 != 0)
            sub_140a74f90(var_a8)
        
        int64_t rcx_78 = var_c8
        
        if (rcx_78 != 0)
            sub_140a74f90(rcx_78)
    
    EnterCriticalSection(lpCriticalSection)
    
    if (*(lpCriticalSection + 0x38) != 0)
        bool cond:1_1 = *(lpCriticalSection + 0x39) != 0
        *(lpCriticalSection + 0x38) = 0
        
        if (not(cond:1_1))
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            *(lpCriticalSection + 0x30) += performanceCount - *(lpCriticalSection + 0x28)
    
    LeaveCriticalSection(lpCriticalSection)
    result = zx.q(r15.b)
else
    int64_t r9_7 = *rsi
    int32_t var_2f0 = 0x3f800000
    int32_t var_2ec = 5
    (*(r9_7 + 0x18))(rsi, &var_2ec, &var_2f0, r9_7)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_378)
return result
