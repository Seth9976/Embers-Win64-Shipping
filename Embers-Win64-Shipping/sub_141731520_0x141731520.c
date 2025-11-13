// 函数: sub_141731520
// 地址: 0x141731520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
arg2[1].d = 0
void* rsi = arg4
void** const* r13 = arg1

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405a5130(arg2, 0)

if (*(rsi + 0x18) != 0)
    sub_1417502a0(rsi, 0)

*arg5 = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)
int32_t var_1e0 = 0x7f7fffff
arg5[1].d = 0x7f7fffff
*(arg5 + 0xc) = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff)
int32_t var_1d0 = 0xff7fffff
void** const result = 0xff7fffff
*(arg5 + 0x14) = 0xff7fffff
int32_t rdi = r13[3].d

if (rdi != 0)
    void** const var_188 = &data_142fc4250
    void** const var_168 = &data_142fc4220
    int64_t var_180
    __builtin_memset(&var_180, 0, 0x14)
    int64_t var_160
    __builtin_memset(&var_160, 0, 0x11)
    sub_14172eb30(&var_188, &var_168)
    uint64_t var_1e8 = 0
    int32_t var_1e0_1 = 0
    float var_1f0
    
    if (rdi != 3)
        if (sub_141743fe0(r13, &var_1e8) != 0)
        label_1417317b4:
            void var_1f4
            sub_141720720(&var_1f4, r13, &var_188, &var_1e8, 0x3dcccccd)
            r13 = &var_188
        
        int64_t* rax_4 = r13[5]
        uint32_t r8_1 = 0
        int32_t r9_1 = r13[3].d
        float zmm1_1[0x4] = zx.o(*rax_4)
        int32_t rcx_5 = rax_4[1].d
        *arg5 = zmm1_1.q
        *(arg5 + 0xc) = zmm1_1.q
        arg5[1].d = rcx_5
        *(arg5 + 0x14) = rcx_5
        float zmm0_1[0x4]
        int64_t zmm2_1
        
        if (r9_1 s>= 4)
            float (* rdx_3)[0x4] = nullptr
            uint64_t rax_7 = zx.q(((r9_1 - 4) u>> 2) + 1)
            uint64_t i_4 = zx.q(rax_7.d)
            r8_1 = (rax_7 << 2).d
            uint64_t i
            
            do
                int64_t rcx_6 = r13[5]
                zmm0_1 = arg5[1].d
                int64_t temp0_5 = __minss_xmmss_memss((*(arg5 + 4)).d, *(rdx_3 + rcx_6 + 4))
                float temp0_6[0x4] = __minss_xmmss_memss(zmm0_1[0], *(rdx_3 + rcx_6 + 8))
                float temp0_7[0x4] = __minss_xmmss_memss((*(rdx_3 + rcx_6))[0], *arg5)
                float var_1d0_1 = temp0_6[0]
                *arg5 = (_mm_unpacklo_ps(temp0_7, temp0_5)).q
                arg5[1].d = var_1d0_1
                int64_t temp0_9 = __maxss_xmmss_memss((*(rdx_3 + rcx_6 + 4)).d, arg5[2].d)
                float temp0_10[0x4] = __maxss_xmmss_memss((*(arg5 + 0xc))[0], *(rdx_3 + rcx_6))
                float temp0_11[0x4] = __maxss_xmmss_memss((*(arg5 + 0x14))[0], *(rdx_3 + rcx_6 + 8))
                *(arg5 + 0xc) = (_mm_unpacklo_ps(temp0_10, temp0_9)).q
                *(arg5 + 0x14) = temp0_11[0]
                int64_t rcx_7 = r13[5]
                zmm0_1 = arg5[1].d
                int64_t temp0_13 = __minss_xmmss_memss((*(arg5 + 4)).d, *(rcx_7 + rdx_3 + 0x10))
                float temp0_14[0x4] = __minss_xmmss_memss(zmm0_1[0], *(rcx_7 + rdx_3 + 0x14))
                float temp0_15[0x4] = __minss_xmmss_memss((*(rcx_7 + rdx_3 + 0xc))[0], *arg5)
                float var_1d0_2 = temp0_14[0]
                *arg5 = (_mm_unpacklo_ps(temp0_15, temp0_13)).q
                arg5[1].d = var_1d0_2
                int64_t temp0_17 = __maxss_xmmss_memss((*(rcx_7 + rdx_3 + 0x10)).d, arg5[2].d)
                float temp0_18[0x4] =
                    __maxss_xmmss_memss((*(arg5 + 0xc))[0], *(rcx_7 + rdx_3 + 0xc))
                float temp0_19[0x4] =
                    __maxss_xmmss_memss((*(arg5 + 0x14))[0], *(rcx_7 + rdx_3 + 0x14))
                *(arg5 + 0xc) = (_mm_unpacklo_ps(temp0_18, temp0_17)).q
                *(arg5 + 0x14) = temp0_19[0]
                int64_t rcx_8 = r13[5]
                zmm0_1 = arg5[1].d
                int64_t temp0_21 = __minss_xmmss_memss((*(arg5 + 4)).d, *(rcx_8 + rdx_3 + 0x1c))
                float temp0_22[0x4] = __minss_xmmss_memss(zmm0_1[0], *(rcx_8 + rdx_3 + 0x20))
                float temp0_23[0x4] = __minss_xmmss_memss((*(rcx_8 + rdx_3 + 0x18))[0], *arg5)
                float var_1d0_3 = temp0_22[0]
                *arg5 = (_mm_unpacklo_ps(temp0_23, temp0_21)).q
                arg5[1].d = var_1d0_3
                float temp0_25[0x4] =
                    __maxss_xmmss_memss((*(arg5 + 0xc))[0], *(rcx_8 + rdx_3 + 0x18))
                int64_t temp0_26 = __maxss_xmmss_memss((*(rcx_8 + rdx_3 + 0x1c)).d, arg5[2].d)
                float temp0_27[0x4] =
                    __maxss_xmmss_memss((*(arg5 + 0x14))[0], *(rcx_8 + rdx_3 + 0x20))
                *(arg5 + 0xc) = (_mm_unpacklo_ps(temp0_25, temp0_26)).q
                *(arg5 + 0x14) = temp0_27[0]
                int64_t rcx_9 = r13[5]
                zmm2_1 = *(arg5 + 4)
                zmm0_1 = arg5[1].d
                float temp0_29[0x4] = __minss_xmmss_memss((*(rdx_3 + rcx_9 + 0x24))[0], *arg5)
                int64_t temp0_30 = __minss_xmmss_memss(zmm2_1.d, *(rdx_3 + rcx_9 + 0x28))
                float temp0_31[0x4] = __minss_xmmss_memss(zmm0_1[0], *(rdx_3 + rcx_9 + 0x2c))
                float temp0_32[0x4] = _mm_unpacklo_ps(temp0_29, temp0_30)
                float var_1d0_4 = temp0_31[0]
                *arg5 = temp0_32.q
                arg5[1].d = var_1d0_4
                zmm2_1 = *(rdx_3 + rcx_9 + 0x28)
                zmm0_1 = *(arg5 + 0x14)
                float temp0_33[0x4] =
                    __maxss_xmmss_memss((*(arg5 + 0xc))[0], *(rdx_3 + rcx_9 + 0x24))
                float temp0_34[0x4] = __maxss_xmmss_memss(zmm0_1[0], *(rdx_3 + rcx_9 + 0x2c))
                rdx_3 = &rdx_3[3]
                int64_t temp0_35 = __maxss_xmmss_memss(zmm2_1.d, arg5[2].d)
                float var_1e0_6 = temp0_34[0]
                *(arg5 + 0xc) = (_mm_unpacklo_ps(temp0_33, temp0_35)).q
                *(arg5 + 0x14) = var_1e0_6
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        if (r8_1 s< r9_1)
            int64_t rdx_5 = sx.q(r8_1) * 0xc
            uint64_t i_3 = zx.q(r9_1 - r8_1)
            uint64_t i_1
            
            do
                int64_t rcx_10 = r13[5]
                rdx_5 += 0xc
                zmm2_1 = *(arg5 + 4)
                zmm0_1 = arg5[1].d
                float temp0_37[0x4] = __minss_xmmss_memss((*(rdx_5 + rcx_10 - 0xc))[0], *arg5)
                int64_t temp0_38 = __minss_xmmss_memss(zmm2_1.d, *(rdx_5 + rcx_10 - 8))
                float temp0_39[0x4] = __minss_xmmss_memss(zmm0_1[0], *(rdx_5 + rcx_10 - 4))
                *arg5 = (_mm_unpacklo_ps(temp0_37, temp0_38)).q
                arg5[1].d = temp0_39[0]
                zmm2_1 = *(rdx_5 + rcx_10 - 8)
                zmm0_1 = *(arg5 + 0x14)
                float temp0_41[0x4] =
                    __maxss_xmmss_memss((*(arg5 + 0xc))[0], *(rdx_5 + rcx_10 - 0xc))
                float temp0_42[0x4] = __maxss_xmmss_memss(zmm0_1[0], *(rdx_5 + rcx_10 - 4))
                int64_t temp0_43 = __maxss_xmmss_memss(zmm2_1.d, arg5[2].d)
                float var_1e0_7 = temp0_42[0]
                *(arg5 + 0xc) = (_mm_unpacklo_ps(temp0_41, temp0_43)).q
                *(arg5 + 0x14) = var_1e0_7
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        if (r9_1 s>= 4)
            void* var_1a8 = nullptr
            int32_t var_1a0_1 = 0
            uint128_t zmm10_1 = sub_1417321a0(r13, &var_1a8)
            int64_t rdi_1 = sx.q(var_1a0_1)
            
            if (rdi_1.d s> *(arg2 + 0xc))
                sub_1405a5130(arg2, rdi_1.d)
            
            int64_t var_118
            __builtin_memset(&var_118, 0, 0x2c)
            void* rdi_2 = var_1a8
            int32_t rdx_8 = 0
            void* rbx_1 = nullptr
            int32_t r9_2 = 0
            int32_t r8_2 = 0
            void* i_2 = rdi_2 + rdi_1 * 0xc
            int32_t var_ec_1 = 0x80
            int32_t var_e8_1 = 0xffffffff
            int32_t var_e4_1 = 0
            void* var_d8_1 = nullptr
            int32_t var_d0_1 = 0
            int32_t var_1f8 = 0
            void* var_f8
            int32_t var_f0
            uint64_t var_c8
            int32_t var_c0
            uint64_t var_bc
            uint64_t var_b0
            
            if (rdi_2 != i_2)
                int32_t* r14_1 = rdi_2 + 8
                zmm10_1.d = zmm10_1.d
                int32_t var_110
                
                do
                    int64_t r8_3 = r13[5]
                    int64_t rdx_9 = sx.q(r14_1[-2]) * 3
                    uint128_t zmm3_1 = zx.o(*(r8_3 + (rdx_9 << 2)))
                    var_c8 = zmm3_1.q
                    var_c0 = *(r8_3 + (rdx_9 << 2) + 8)
                    int64_t rcx_14 = sx.q(r14_1[-1]) * 3
                    uint128_t zmm4_2 = zx.o(*(r8_3 + (rcx_14 << 2)))
                    uint128_t zmm9_1
                    zmm9_1.d = zmm4_2.d f- zmm3_1.d
                    uint128_t zmm1_2
                    zmm1_2.d = (*(r8_3 + (rcx_14 << 2) + 8)).d f- var_c0
                    var_bc = zmm4_2.q
                    int64_t rcx_15 = sx.q(*r14_1) * 3
                    uint128_t zmm0_2 = zx.o(*(r8_3 + (rcx_15 << 2)))
                    int32_t rax_26 = *(r8_3 + (rcx_15 << 2) + 8)
                    var_b0 = zmm0_2.q
                    uint128_t zmm6_1
                    zmm6_1.d = zmm0_2.d f- zmm3_1.d
                    uint128_t zmm5_2
                    zmm5_2.d = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55).d f- var_c8:4.d
                    uint128_t zmm2_2
                    zmm2_2.d = rax_26.d f- var_c0
                    zmm3_1.d = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55).d f- var_c8:4.d
                    uint128_t zmm7_1
                    zmm7_1.d = zmm6_1.d f* zmm1_2.d
                    zmm0_2.d = zmm5_2.d f* zmm1_2.d
                    uint128_t zmm8_1
                    zmm8_1.d = zmm2_2.d f* zmm3_1.d
                    zmm6_1.d = zmm6_1.d f* zmm3_1.d
                    zmm8_1.d = zmm8_1.d f- zmm0_2.d
                    zmm0_2.d = zmm9_1.d f* zmm2_2.d
                    zmm9_1.d = zmm9_1.d f* zmm5_2.d
                    zmm7_1.d = zmm7_1.d f- zmm0_2.d
                    zmm0_2.d = zmm8_1.d f* zmm8_1.d
                    zmm9_1.d = zmm9_1.d f- zmm6_1.d
                    zmm2_2.d = zmm7_1.d f* zmm7_1.d
                    zmm1_2.d = zmm9_1.d f* zmm9_1.d
                    zmm2_2.d = zmm2_2.d f+ zmm0_2.d
                    zmm2_2.d = zmm2_2.d f+ zmm1_2.d
                    zmm3_1.d = zmm2_2.d
                    zmm4_2 = _mm_rsqrt_ss(zmm3_1.d, zmm3_1.d)
                    zmm3_1.d = zmm3_1.d f* zmm10_1.d
                    zmm0_2.d = zmm4_2.d f* zmm4_2.d
                    zmm1_2.d = zmm3_1.d f* zmm0_2.d
                    zmm2_2.d = zmm10_1.d f- zmm1_2.d
                    zmm0_2.d = zmm4_2.d f* zmm2_2.d
                    zmm4_2.d = zmm4_2.d f+ zmm0_2.d
                    zmm1_2.d = zmm4_2.d f* zmm4_2.d
                    zmm3_1.d = zmm3_1.d f* zmm1_2.d
                    zmm0_2.d = zmm10_1.d f- zmm3_1.d
                    zmm1_2.d = zmm4_2.d f* zmm0_2.d
                    zmm4_2.d = zmm4_2.d f+ zmm1_2.d
                    var_1f0 = zmm4_2.d
                    zmm2_2.d = zmm4_2.d f* zmm8_1.d
                    zmm1_2.d = zmm4_2.d f* zmm7_1.d
                    int64_t rbx_2 = sx.q(arg2[1].d)
                    int64_t var_1c0
                    var_1c0.d = *(r8_3 + (rdx_9 << 2) + 8)
                    int32_t var_1c8
                    var_1c8.q = *(r8_3 + (rdx_9 << 2))
                    zmm9_1.d = zmm9_1.d f* zmm4_2.d
                    var_1c0 = (_mm_unpacklo_ps(zmm2_2, zmm1_2.q)).q
                    int64_t var_1b4
                    var_1b4.d = zmm9_1.d
                    int32_t rax_29 = (rbx_2 + 1).d
                    arg2[1].d = rax_29
                    
                    if (rax_29 s> *(arg2 + 0xc))
                        sub_1405a4df0(arg2)
                    
                    int64_t rax_30 = *arg2
                    int64_t rcx_17 = rbx_2 * 3
                    *(rax_30 + (rcx_17 << 3)) = var_1c8.o
                    int64_t* var_198 = nullptr
                    int32_t var_1b8
                    *(rax_30 + (rcx_17 << 3) + 0x10) = var_1b8.q
                    int32_t var_190_1 = 3
                    sub_1405a4cf0(&var_198)
                    int64_t* rdi_3 = var_198
                    *rdi_3 = 0
                    rdi_3[1].d = 0
                    int64_t r8_4 = sx.q(r14_1[-2])
                    var_1f0 = r8_4.d
                    void var_e0
                    void* r8_5
                    
                    if (var_110 == var_e4_1)
                    label_141731d40:
                        r8_5 = nullptr
                    else
                        void* rcx_19 = &var_e0
                        
                        if (var_d8_1 != 0)
                            rcx_19 = var_d8_1
                        
                        int32_t rax_33 = *(rcx_19 + (((sx.q(var_d0_1) - 1) & r8_4) << 2))
                        
                        if (rax_33 == 0xffffffff)
                        label_141731d40_1:
                            r8_5 = nullptr
                        else
                            int64_t rdx_15 = var_118
                            int64_t rcx_21
                            
                            while (true)
                                rcx_21 = sx.q(rax_33) * 2
                                
                                if (*(rdx_15 + (rcx_21 << 3)) == r8_4.d)
                                    break
                                
                                rax_33 = *(rdx_15 + (rcx_21 << 3) + 8)
                                
                                if (rax_33 == 0xffffffff)
                                    goto label_141731d40_2
                            
                            r8_5 = rdx_15 + (rcx_21 << 3)
                            
                            if (rax_33 == 0xffffffff)
                            label_141731d40_2:
                                r8_5 = nullptr
                    
                    int32_t* rax_34 = r8_5 + 4
                    
                    if (r8_5 == 0)
                        rax_34 = nullptr
                    
                    int32_t rcx_22
                    
                    if (rax_34 == 0)
                        sub_140908920(&var_118, &var_1f0, &var_1f8)
                        rcx_22 = var_1f8
                        var_1f8 = rcx_22 + 1
                    else
                        rcx_22 = *rax_34
                    
                    *rdi_3 = rcx_22
                    int64_t r8_7 = sx.q(r14_1[-1])
                    var_1f0 = r8_7.d
                    void* r8_8
                    
                    if (var_110 == var_e4_1)
                    label_141731dd0:
                        r8_8 = nullptr
                    else
                        void* rcx_24 = &var_e0
                        
                        if (var_d8_1 != 0)
                            rcx_24 = var_d8_1
                        
                        int32_t rax_38 = *(rcx_24 + (((sx.q(var_d0_1) - 1) & r8_7) << 2))
                        
                        if (rax_38 == 0xffffffff)
                        label_141731dd0_1:
                            r8_8 = nullptr
                        else
                            int64_t rdx_20 = var_118
                            int64_t rcx_26
                            
                            while (true)
                                rcx_26 = sx.q(rax_38) * 2
                                
                                if (*(rdx_20 + (rcx_26 << 3)) == r8_7.d)
                                    break
                                
                                rax_38 = *(rdx_20 + (rcx_26 << 3) + 8)
                                
                                if (rax_38 == 0xffffffff)
                                    goto label_141731dd0_2
                            
                            r8_8 = rdx_20 + (rcx_26 << 3)
                            
                            if (rax_38 == 0xffffffff)
                            label_141731dd0_2:
                                r8_8 = nullptr
                    
                    int32_t* rax_39 = r8_8 + 4
                    
                    if (r8_8 == 0)
                        rax_39 = nullptr
                    
                    int32_t rcx_27
                    
                    if (rax_39 == 0)
                        sub_140908920(&var_118, &var_1f0, &var_1f8)
                        rcx_27 = var_1f8
                        var_1f8 = rcx_27 + 1
                    else
                        rcx_27 = *rax_39
                    
                    *(rdi_3 + 4) = rcx_27
                    int64_t r8_10 = sx.q(*r14_1)
                    var_1f0 = r8_10.d
                    void* r8_11
                    
                    if (var_110 == var_e4_1)
                    label_141731e60:
                        r8_11 = nullptr
                    else
                        void* rcx_29 = &var_e0
                        
                        if (var_d8_1 != 0)
                            rcx_29 = var_d8_1
                        
                        int32_t rax_43 = *(rcx_29 + (((sx.q(var_d0_1) - 1) & r8_10) << 2))
                        
                        if (rax_43 == 0xffffffff)
                        label_141731e60_1:
                            r8_11 = nullptr
                        else
                            int64_t rdx_25 = var_118
                            int64_t rcx_31
                            
                            while (true)
                                rcx_31 = sx.q(rax_43) * 2
                                
                                if (*(rdx_25 + (rcx_31 << 3)) == r8_10.d)
                                    break
                                
                                rax_43 = *(rdx_25 + (rcx_31 << 3) + 8)
                                
                                if (rax_43 == 0xffffffff)
                                    goto label_141731e60_2
                            
                            r8_11 = rdx_25 + (rcx_31 << 3)
                            
                            if (rax_43 == 0xffffffff)
                            label_141731e60_2:
                                r8_11 = nullptr
                    
                    int32_t* rax_44 = r8_11 + 4
                    
                    if (r8_11 == 0)
                        rax_44 = nullptr
                    
                    int32_t rcx_32
                    
                    if (rax_44 == 0)
                        sub_140908920(&var_118, &var_1f0, &var_1f8)
                        rcx_32 = var_1f8
                        var_1f8 = rcx_32 + 1
                    else
                        rcx_32 = *rax_44
                    
                    rdi_3[1].d = rcx_32
                    int64_t rbx_3 = sx.q(arg3[1].d)
                    int32_t rax_46 = (rbx_3 + 1).d
                    arg3[1].d = rax_46
                    
                    if (rax_46 s> *(arg3 + 0xc))
                        sub_1405a4f90(arg3)
                    
                    int64_t* rbx_5 = (rbx_3 << 4) + *arg3
                    *rbx_5 = 0
                    int64_t rsi_1 = sx.q(var_190_1)
                    rbx_5[1].d = rsi_1.d
                    
                    if (rsi_1.d != 0)
                        sub_140638750(rbx_5, rsi_1.d, 0)
                        memcpy(*rbx_5, rdi_3, (rsi_1 << 2).d)
                    else
                        *(rbx_5 + 0xc) = rsi_1.d
                    
                    sub_140a74f90(rdi_3)
                    r14_1 = &r14_1[3]
                while (&r14_1[-2] != i_2)
                
                r8_2 = var_e4_1
                r9_2 = var_f0
                rbx_1 = var_f8
                rdx_8 = var_110
                rsi = arg4
                rdi_2 = var_1a8
            
            if (rdx_8 != r8_2)
                sub_1417502a0(rsi, rdx_8 - r8_2 + *(rsi + 0x18))
                r9_2 = var_f0
                rbx_1 = var_f8
            
            int32_t var_1c4_1 = 1
            int32_t rcx_39 = 0
            int32_t var_1c8_1 = 0
            int64_t var_10c
            void* var_1c0_1 = &var_10c:4
            int32_t var_1b8_1 = 0xffffffff
            int32_t r8_15 = 0
            int64_t var_1b4_1 = 0
            
            if (r9_2 != 0)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(r9_2 - 1)
                void* r11_1 = &var_10c:4
                
                if (rbx_1 != 0)
                    r11_1 = rbx_1
                
                int32_t rdx_34 = *r11_1
                
                if (rdx_34 != 0)
                label_141731fb8:
                    int32_t rax_54 = neg.d(rdx_34) & rdx_34
                    uint64_t rflags_1
                    int32_t temp0_49
                    temp0_49, rflags_1 = _bit_scan_reverse(rax_54)
                    int32_t var_1c4_2 = rax_54
                    int32_t rax_55
                    
                    if (rax_54 == 0)
                        rax_55 = 0x20
                    else
                        rax_55 = 0x1f - temp0_49
                    
                    int32_t rax_56 = r8_15 - rax_55 + 0x1f
                    
                    if (rax_56 s> r9_2)
                        rax_56 = r9_2
                    
                    var_1b4_1.d = rax_56
                else
                    while (true)
                        int64_t rdx_35 = sx.q(rcx_39)
                        r8_15 += 0x20
                        rcx_39 += 1
                        var_1b4_1:4.d = r8_15
                        var_1c8_1 = rcx_39
                        
                        if (rdx_35.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                            var_1b4_1.d = r9_2
                            break
                        
                        rdx_34 = *(r11_1 + (rdx_35 << 2) + 4)
                        int32_t var_1b8_2 = 0xffffffff
                        
                        if (rdx_34 != 0)
                            goto label_141731fb8
            
            int128_t var_128_1 = 0xffffffff
            var_1b4_1.d = r9_2
            var_c8.o = (&var_118).o
            var_bc:4.o = var_1c8_1.o
            int32_t var_a8
            var_a8.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            
            while (true)
                int64_t rcx_43 = sx.q(var_b0:4.d)
                
                if (rcx_43.d == ((0xffffffff << (r9_2.b & 0x1f)).q u>> 0x20).d
                        && var_bc == &var_10c:4 && var_c8 == &var_118)
                    break
                
                int64_t r8_17 = r13[5]
                int32_t* rcx_45 = (rcx_43 << 4) + *var_c8
                int64_t r9_3 = sx.q(*rcx_45) * 3
                int64_t rcx_46 = *(rsi + 0x28)
                int64_t rdx_36 = sx.q(rcx_45[1]) * 3
                *(rcx_46 + (rdx_36 << 2)) = *(r8_17 + (r9_3 << 2))
                *(rcx_46 + (rdx_36 << 2) + 8) = *(r8_17 + (r9_3 << 2) + 8)
                var_b0.d &= not.d(var_bc.d)
                sub_14059bdd0(&var_c0)
            
            int32_t var_d0_2 = 0
            
            if (var_d8_1 != 0)
                sub_140a74f90(var_d8_1)
            
            int32_t var_110_1 = 0
            
            if (var_10c.d != 0)
                sub_1405a5410(&var_118, 0)
            
            int32_t var_e8_2 = 0xffffffff
            int32_t var_e4_2 = 0
            sub_14059a8e0(&var_10c:4, 0)
            
            if (var_f8 != 0)
                sub_140a74f90(var_f8)
            
            int64_t rcx_52 = var_118
            
            if (rcx_52 != 0)
                sub_140a74f90(rcx_52)
            
            if (rdi_2 != 0)
                sub_140a74f90(rdi_2)
    else
        int32_t* rax_2 = r13[5]
        float zmm4_1[0x4] = rax_2[6]
        zmm4_1[0] = zmm4_1[0] f- *rax_2
        float zmm9[0x4] = rax_2[7]
        zmm9[0] = zmm9[0] f- rax_2[1]
        float zmm2[0x4] = rax_2[8]
        zmm2[0] = zmm2[0] f- rax_2[2]
        float zmm6[0x4] = rax_2[3]
        zmm6[0] = zmm6[0] f- *rax_2
        float zmm5_1 = rax_2[4] f- rax_2[1]
        float zmm8[0x4] = zmm2
        double zmm3
        zmm3.d = rax_2[5].d f- rax_2[2]
        zmm2[0] = zmm2[0] * zmm6[0]
        zmm9[0] = zmm9[0] * zmm6[0]
        zmm9[0] = zmm9[0] f* zmm3.d
        zmm4_1[0] = zmm4_1[0] * zmm5_1
        zmm4_1[0] = zmm4_1[0] f* zmm3.d
        zmm9[0] = zmm9[0] - zmm4_1[0]
        zmm8[0] = zmm8[0] * zmm5_1
        zmm4_1[0] = zmm4_1[0] - zmm2[0]
        zmm8[0] = zmm8[0] - zmm9[0]
        double zmm1
        zmm1.d = zmm9[0].q.d f* zmm9[0]
        zmm2 = 0x3f000000
        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm4_1[0] = zmm4_1[0] + zmm8[0]
        zmm4_1[0] = zmm4_1[0] f+ zmm1.d
        zmm3 = zmm4_1[0].q
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm4_1[0], zmm3.d)
        zmm3.d = zmm3.d f* 0.5f
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm1.d = zmm3.d f* temp0_2[0]
        zmm2[0] = 0.5f f- zmm1.d
        temp0_2[0] = temp0_2[0] * zmm2[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm1.d = temp0_2[0].q.d f* temp0_2[0]
        zmm3.d = zmm3.d f* zmm1.d
        temp0_2[0] = temp0_2[0] * (0.5f f- zmm3.d)
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        float temp0_3[0x4] = _mm_sqrt_ss(0, zmm4_1[0])
        zmm8[0] = zmm8[0] * temp0_2[0]
        double temp0_4 = _mm_cvtps_pd(temp0_3[0].q)
        zmm4_1[0] = zmm4_1[0] * temp0_2[0]
        zmm9[0] = zmm9[0] * temp0_2[0]
        var_1e8.d = zmm8[0]
        var_1e8:4.d = zmm4_1[0]
        float var_1e0_2 = zmm9[0]
        var_1f0 = temp0_2[0]
        
        if (not(temp0_4 <= 0.0001))
            goto label_1417317b4
    int64_t rcx_54 = var_160
    var_188 = &data_142fc4250
    var_168 = &data_142fc4220
    
    if (rcx_54 != 0)
        sub_140a74f90(rcx_54)
    
    int64_t rcx_55 = var_180
    result = &data_142fc4068
    var_188 = &data_142fc4068
    
    if (rcx_55 != 0)
        result = sub_140a74f90(rcx_55)

__security_check_cookie(rax_1 ^ &var_228)
return result
