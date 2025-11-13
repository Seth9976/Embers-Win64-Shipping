// 函数: sub_140904080
// 地址: 0x140904080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (arg2[1].d s> 1)
    int32_t rsi_1 = 0
    int64_t* var_1c8 = nullptr
    int32_t i_2 = 0
    sub_140a464c0()
    int16_t* const r13_1 = &data_142d40450
    int16_t* const r8
    
    if (arg2[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg2
    
    result = (*(data_14399ea08 + 0x70))(&data_14399ea08, &var_1c8, r8, &data_142d6bbe8)
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        sub_140688010(var_1c8, i_1, arg5)
        int64_t* rbx_1 = var_1c8
        void* rax_3 = &rbx_1[sx.q(i_2) * 2]
        void* var_188 = rax_3
        
        if (rbx_1 != rax_3)
            do
                int16_t* const var_138
                
                if (arg2[1].d == 0)
                    var_138 = &data_142d40450
                else
                    var_138 = *arg2
                
                if (rbx_1[1].d == 0)
                    int16_t* const var_130_2 = &data_142d40450
                else
                    int64_t var_130_1 = *rbx_1
                
                uint64_t var_1b8 = 0
                int64_t var_1b0_1 = 0
                sub_140b0f5f0(&var_1b8, &var_138, 2)
                int64_t r15_1 = sx.q(*(arg1 + 0xb8))
                int32_t rax_6 = (r15_1 + 1).d
                *(arg1 + 0xb8) = rax_6
                
                if (rax_6 s> *(arg1 + 0xbc))
                    sub_1405a4f90(arg1 + 0xb0)
                
                int64_t* rcx_5 = (r15_1 << 4) + *(arg1 + 0xb0)
                *rcx_5 = 0
                *rcx_5 = var_1b8
                var_1b8 = 0
                rcx_5[1].d = var_1b0_1.d
                *(rcx_5 + 0xc) = var_1b0_1:4.d
                uint64_t rcx_6 = var_1b8
                int64_t var_1b0_2 = 0
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                rbx_1 = &rbx_1[2]
            while (rbx_1 != var_188)
        
        EnterCriticalSection(arg1 + 0x18)
        int16_t* var_d8
        sub_140b19c30(&var_d8, *(arg1 + 0xb0), 0)
        int16_t* const rcx_9 = &data_142d40450
        int32_t var_d0
        
        if (var_d0 != 0)
            rcx_9 = var_d8
        
        int32_t rax_10 = sub_140a54510(rcx_9, &data_142e1b008)
        void*** rdi_2
        
        if (rax_10 != 0)
            void*** rax_17 = j_sub_140a82f30(0x10)
            void*** r15_3 = rax_17
            
            if (rax_17 == 0)
                r15_3 = nullptr
            else
                int64_t rcx_14 = *(arg1 + 0xa8)
                *r15_3 = &data_142e1af38
                r15_3[1] = rcx_14
            
            void*** rax_18 = j_sub_140a82f30(0x18)
            rdi_2 = rax_18
            
            if (rax_18 == 0)
                rdi_2 = nullptr
            else
                rax_18[1].d = 1
                *(rax_18 + 0xc) = 1
                *rdi_2 = &data_142e1b260
                rdi_2[2] = r15_3
            
            void*** var_198 = r15_3
            void*** var_190 = rdi_2
            
            if (arg1 + 0xe0 != &var_198)
                *(arg1 + 0xe0) = r15_3
                var_198 = nullptr
                sub_1405aeff0(arg1 + 0xe8, &var_190)
                rdi_2 = var_190
        else
            void*** rax_11 = j_sub_140a82f30(zx.q(rax_10 + 8))
            void*** r15_2 = rax_11
            
            if (rax_11 == 0)
                r15_2 = nullptr
            else
                *r15_2 = &data_142e1aff0
                int64_t* rax_12 = sub_140908320()
                void* rax_13 = rax_12[0x23]
                
                if (rax_13 == 0)
                    int64_t rdx_5 = *rax_12
                    (*(rdx_5 + 0x390))(rax_12, rdx_5)
                    rax_13 = rax_12[0x23]
                
                int32_t rax_14 = *(rax_13 + 0x48)
                
                if (rax_14 == 0)
                    rax_14 = sub_140b70da0()
                
                sub_140908910(rax_14.w)
            
            void*** rax_15 = j_sub_140a82f30(0x18)
            rdi_2 = rax_15
            
            if (rax_15 == 0)
                rdi_2 = nullptr
            else
                rax_15[1].d = 1
                *(rax_15 + 0xc) = 1
                *rdi_2 = &data_142e1b260
                rdi_2[2] = r15_2
            
            void*** var_1a8 = r15_2
            void*** var_1a0 = rdi_2
            
            if (arg1 + 0xe0 != &var_1a8)
                *(arg1 + 0xe0) = r15_2
                var_1a8 = nullptr
                sub_1405aeff0(arg1 + 0xe8, &var_1a0)
                rdi_2 = var_1a0
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t r15_4 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (r15_4 == 1)
                    (*rdi_2)[1](rdi_2, zx.q(r15_4))
        
        int64_t* rax_23 = sub_140908320()
        void* r15_5 = rax_23[0x23]
        
        if (r15_5 == 0)
            int64_t rdx_9 = *rax_23
            (*(rdx_9 + 0x390))(rax_23, rdx_9)
            r15_5 = rax_23[0x23]
        
        *(arg1 + 0x168) = *(r15_5 + 0x44)
        int16_t* rdx_10
        
        if (arg2[1].d == 0)
            rdx_10 = &data_142d40450
        else
            rdx_10 = *arg2
        
        int64_t* rax_25
        int128_t zmm6_1
        rax_25, zmm6_1 = sub_140b58260(&var_188, rdx_10, 1)
        int128_t zmm0_1 = data_142e1b2e0
        *(arg1 + 0x128) = *rax_25
        uint64_t var_178 = 0
        int32_t var_170_1 = 0
        uint64_t var_160 = 0
        int128_t var_158_1 = zmm0_1
        void* rax_27
        
        if (*(arg1 + 0x168) != 0)
            rax_27 = sub_140901f60(*(arg1 + 0x100), arg1 + 0x128)
        
        int64_t var_140
        int64_t rcx_24
        
        if (*(arg1 + 0x168) == 0 || rax_27 == 0)
            int64_t* rcx_25 = *(arg1 + 0xe0)
            result = (**rcx_25)(rcx_25, *(arg1 + 0xb0), &var_178)
            
            if (result.b != 0)
                rcx_24 = var_140
                result = var_158_1:8.q
                goto label_140904505
        else
            void* rdi_4 = *rax_27
            sub_140597df0(&var_178, rdi_4 + 0x18)
            int32_t var_168 = *(rdi_4 + 0x28)
            int32_t var_164 = *(rdi_4 + 0x2c)
            sub_140597df0(&var_160, rdi_4 + 0x30)
            result = *(rdi_4 + 0x40)
            var_158_1:8.q = result
            char var_148_1 = *(rdi_4 + 0x48)
            rcx_24 = *(rdi_4 + 0x50)
            var_140 = rcx_24
        label_140904505:
            
            if (rcx_24 != 0)
                int32_t rcx_26 = var_164
                
                if (var_168 s<= var_164)
                    rcx_26 = var_168
                
                if (rcx_26 s> 0)
                    *(arg1 + 0x110) = var_168
                    *(arg1 + 0x114) = var_164
                    uint32_t rax_32
                    uint64_t rcx_28
                    
                    if (*(arg3 + 4) s<= 0 || *arg3 s<= 0)
                        *(arg1 + 0x120) = result
                        rcx_28 = zx.q(result.d)
                        rax_32 = *(arg1 + 0x124)
                    else
                        rcx_28 = *arg3
                        *(arg1 + 0x120) = rcx_28
                        rax_32 = (rcx_28 u>> 0x20).d
                    
                    int64_t r8_5 = sx.q(rcx_28.d)
                    int64_t rax_35
                    int64_t rdx_16
                    rdx_16:rax_35 = sx.o(r8_5)
                    *(arg1 + 0x118) = divs.dp.q(
                        sx.o(((rax_35 - rdx_16) s>> 1) + zx.q(rax_32 * *(arg1 + 0xb8)) * 0x989680), 
                        r8_5)
                    void var_c8
                    sub_140b6c480(&var_c8)
                    int64_t rax_41 = 0
                    uint128_t zmm0_2
                    zmm0_2.d = (*(r15_5 + 0x34)).d f* 1.07374182e+09f
                    
                    if (not(zmm0_2.d f< 9.22337204e+18f))
                        zmm0_2.d = zmm0_2.d f- 9.22337204e+18f
                        
                        if (not(zmm0_2.d f>= 9.22337204e+18f))
                            rax_41 = -0x8000000000000000
                    
                    int64_t rcx_32 = int.q(zmm0_2.d) + rax_41
                    int64_t var_88
                    int64_t rax_42 = var_88
                    
                    if (rcx_32 u< rax_42)
                        rax_42 = rcx_32
                    
                    int32_t temp0_4 = divu.dp.q(0:rax_42, var_140)
                    int32_t rdx_21
                    
                    if (temp0_4 s>= 0)
                        rdx_21 = *(arg1 + 0xb8)
                        
                        if (temp0_4 s< rdx_21)
                            rdx_21 = temp0_4
                    else
                        rdx_21 = 0
                    
                    int32_t zmm1_1 = *(r15_5 + 0x30)
                    
                    if (zmm1_1 f>= 0f)
                        zmm1_1 = __minss_xmmss_memss(zmm1_1, 0x42c80000)
                    else
                        zmm1_1 = (zx.o(0)).d
                    
                    int32_t rcx_33 =
                        int.d(zmm1_1 f* 0.00999999978f f* _mm_cvtepi32_ps(zx.o(rdx_21)).d)
                    *(arg1 + 0xd8) = rcx_33
                    *(arg1 + 0xd4) = rdx_21 - rcx_33
                    sub_1409014d0(arg1 + 0x40, rdx_21)
                    sub_140906e40(arg1, 0, zx.o(0), arg4)
                    int512_t zmm6_2
                    zmm6_2.o = zmm6_1
                    
                    if (*(arg1 + 0xc0) != u"Image Sequence\n")
                        bool cond:2_1 = *(arg1 + 0xcc) == 0x10
                        int32_t rdx_22 = 0
                        *(arg1 + 0xc8) = 0
                        
                        if (not(cond:2_1))
                            sub_1405947f0(arg1 + 0xc0, 0x10)
                            rdx_22 = *(arg1 + 0xc8)
                        
                        *(arg1 + 0xc8) = rdx_22 + 0x10
                        
                        if (rdx_22 + 0x10 s> *(arg1 + 0xcc))
                            sub_140594770(arg1 + 0xc0)
                        
                        __builtin_memcpy(*(arg1 + 0xc0), u"Image Sequence\n", 0x20)
                    
                    *(arg1 + 0x114)
                    int64_t var_128
                    sub_140a2e390(&var_128, u"    Dimension: %i x %i\n", zx.q(*(arg1 + 0x110)))
                    int32_t var_120
                    int32_t r8_8
                    
                    if (var_120 == 0)
                        r8_8 = 0
                    else
                        r8_8 = var_120 - 1
                    
                    sub_140a20ba0(arg1 + 0xc0, var_128, r8_8)
                    int64_t rcx_40 = var_128
                    
                    if (rcx_40 != 0)
                        sub_140a74f90(rcx_40)
                    
                    int16_t* const r8_9 = &data_142d40450
                    
                    if (var_158_1.d != 0)
                        r8_9 = var_160
                    
                    int64_t var_118
                    sub_140a2e390(&var_118, u"    Format: %s\n", r8_9)
                    int32_t var_110
                    int32_t r8_11
                    
                    if (var_110 == 0)
                        r8_11 = 0
                    else
                        r8_11 = var_110 - 1
                    
                    sub_140a20ba0(arg1 + 0xc0, var_118, r8_11)
                    int64_t rcx_43 = var_118
                    
                    if (rcx_43 != 0)
                        sub_140a74f90(rcx_43)
                    
                    if (var_170_1 != 0)
                        r13_1 = var_178
                    
                    int64_t var_108
                    sub_140a2e390(&var_108, u"    Compression: %s\n", r13_1)
                    int32_t var_100
                    int32_t r8_14
                    
                    if (var_100 == 0)
                        r8_14 = 0
                    else
                        r8_14 = var_100 - 1
                    
                    sub_140a20ba0(arg1 + 0xc0, var_108, r8_14)
                    int64_t rcx_46 = var_108
                    
                    if (rcx_46 != 0)
                        sub_140a74f90(rcx_46)
                    
                    int64_t var_f8
                    sub_140a2e390(&var_f8, u"    Frames: %i\n", zx.q(*(arg1 + 0xb8)))
                    int32_t var_f0
                    int32_t r8_17
                    
                    if (var_f0 == 0)
                        r8_17 = 0
                    else
                        r8_17 = var_f0 - 1
                    
                    sub_140a20ba0(arg1 + 0xc0, var_f8, r8_17)
                    int64_t rcx_49 = var_f8
                    
                    if (rcx_49 != 0)
                        sub_140a74f90(rcx_49)
                    
                    int32_t rax_48 = *(arg1 + 0x124)
                    int32_t var_1d8_1 = rax_48
                    uint128_t zmm2_1
                    zmm2_1.q =
                        _mm_cvtepi32_pd(zx.q(*(arg1 + 0x120))).q f/ _mm_cvtepi32_pd(zx.q(rax_48)).q
                    int64_t var_e8
                    sub_140a2e390(&var_e8, u"    Frame Rate: %.2f (%i/%i)\n", zmm2_1.q)
                    int32_t var_e0
                    
                    if (var_e0 != 0)
                        rsi_1 = var_e0 - 1
                    
                    result = sub_140a20ba0(arg1 + 0xc0, var_e8, rsi_1)
                    int64_t rcx_52 = var_e8
                    
                    if (rcx_52 != 0)
                        result = sub_140a74f90(rcx_52)
        uint64_t rcx_53 = var_160
        
        if (rcx_53 != 0)
            result = sub_140a74f90(rcx_53)
        
        uint64_t rcx_54 = var_178
        
        if (rcx_54 != 0)
            result = sub_140a74f90(rcx_54)
        
        int16_t* rcx_55 = var_d8
        
        if (rcx_55 != 0)
            result = sub_140a74f90(rcx_55)
        
        if (arg1 != -0x18)
            result = LeaveCriticalSection(arg1 + 0x18)
        
        i_1 = i_2
    
    int64_t* rbx_3 = var_1c8
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_57 = *rbx_3
            
            if (rcx_57 != 0)
                result = sub_140a74f90(rcx_57)
            
            rbx_3 = &rbx_3[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_3 = var_1c8
    
    if (rbx_3 != 0)
        return sub_140a74f90(rbx_3)

return result
