// 函数: sub_1409cd4d0
// 地址: 0x1409cd4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg2 + 0x520) s<= 0)
    int64_t rbx_1 = data_143f360f0
    int32_t i_4 = 0
    void* rdi_1 = *(arg2 + 0x28)
    void* var_148_1 = rdi_1
    void* r13_1 = *(**(*(arg1 + 0x28) + 0x50) + (sx.q(*(arg1 + 0x38)) << 3))
    void* const rcx_3
    
    if (*(rdi_1 + 0x1b0) == *(rdi_1 + 0x1dc))
    label_1409cd5a0:
        rcx_3 = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8 = rdi_1 + 0x1e0
        void* rcx_1 = *(r8 + 8)
        
        if (rcx_1 != 0)
            r8 = rcx_1
        
        int32_t rax_6 = *(r8 + (((sx.q(*(rdi_1 + 0x1f0)) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_1409cd5a0_1:
            rcx_3 = nullptr
        else
            int64_t r8_1 = *(rdi_1 + 0x1a8)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_6) * 3
                rcx_3 = r8_1 + (rdx_4 << 3)
                
                if (*(r8_1 + (rdx_4 << 3)) == rbx_1)
                    break
                
                rax_6 = *(rcx_3 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_1409cd5a0_2
            
            if (rax_6 == 0xffffffff)
            label_1409cd5a0_2:
                rcx_3 = nullptr
    
    void* rax_7 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rax_7 = nullptr
    
    if (rax_7 != 0)
        void* rcx_4 = *rax_7
        
        if (*(rcx_4 + 8) == 2)
            i_4 = *(rcx_4 + 0x20)
    
    void* var_d8
    sub_14090aa40(rdi_1 + 0x150, &var_d8, data_143f35cc8)
    int32_t r15_1 = *(r13_1 + 0x12c)
    int32_t rbx_3 = *(rdi_1 + 0x40) - r15_1
    int32_t r12_1 = *(r13_1 + 0x16c)
    
    if (rbx_3 s<= 0)
        rbx_3 = 0
    
    int32_t var_13c_1 = r12_1
    int64_t arg_10
    arg_10.d = r15_1
    TEB* gsbase
    
    if (data_143cef140
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cef140)
        
        if (data_143cef140 == 0xffffffff)
            atexit(sub_142cb9b70)
            _Init_thread_footer(&data_143cef140)
    
    int32_t r8_3 = data_143cef138
    
    if (rbx_3 s> r8_3)
        bool cond:3_1 = rbx_3 s<= data_143cef13c
        r8_3 = rbx_3
        data_143cef138 = rbx_3
        
        if (not(cond:3_1))
            sub_1409da3a0(&data_143cef130)
            r8_3 = data_143cef138
    else if (rbx_3 s< r8_3)
        int32_t rdi_3 = r8_3 - rbx_3
        
        if (r8_3 != rbx_3)
            int32_t rax_11 = r8_3 - rdi_3
            
            if (rax_11 != rbx_3)
                memmove(sx.q(rbx_3) * 0x74 + data_143cef130, 
                    sx.q(rdi_3 + rbx_3) * 0x74 + data_143cef130, (rax_11 - rbx_3) * 0x74)
                r8_3 = data_143cef138
            
            r8_3 -= rdi_3
            data_143cef138 = r8_3
        
        rdi_1 = var_148_1
    
    int32_t* rcx_11 = *arg3
    int64_t i_2 = sx.q(i_4)
    int32_t* var_d0_1 = rcx_11
    int64_t i_3 = i_2
    result = &rcx_11[sx.q(arg3[1].d)]
    void* const* result_1 = result
    
    if (rcx_11 != result)
        int128_t zmm6 = 0x3f000000
        int128_t zmm7 = 0x42fe0000
        int128_t zmm8 = 0x46fffe00
        
        do
            uint64_t rbx_4 = zx.q(*rcx_11)
            int64_t r9_2 = sx.q(*(*(rdi_1 + 0x38) + sx.q(rbx_4.d) * 0x18)) * 3
            
            if (rbx_4.d s>= r15_1)
                uint64_t* rdx_23 = sx.q(rbx_4.d - r15_1) * 0x74 + data_143cef130
                int64_t rcx_31 = **(var_d8 + 0x18)
                *rdx_23 = *(rcx_31 + (r9_2 << 2))
                rdx_23[1].d = *(rcx_31 + (r9_2 << 2) + 8)
                *(rdx_23 + 0xc) = data_143dbb1f8.q
                *(rdx_23 + 0x14) = data_143dbb200
                rdx_23[3] = data_143dbb1f8.q
                rdx_23[4].d = data_143dbb200
                *(rdx_23 + 0x24) = data_143dbb1f8.q
                *(rdx_23 + 0x2c) = data_143dbb200
                
                if (i_2 s> 0)
                    void* rax_49 = &rdx_23[6]
                    int64_t i_1 = i_2
                    int64_t i
                    
                    do
                        *rax_49 = data_143dbb1f0.d.d
                        rax_49 += 8
                        *(rax_49 - 4) = data_143dbb1f0:4.d.d
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                result = zx.q(data_14399f630)
                rdx_23[0xe].d = result.d
            else
                int64_t rcx_14 = *(r13_1 + 0x120)
                uint64_t r12_2 = zx.q(rbx_4.d)
                int64_t r8_5 = **(var_d8 + 0x18)
                uint64_t rax_22 = zx.q(*(r13_1 + 0x128) * rbx_4.d)
                *(rax_22 + rcx_14) = *(r8_5 + (r9_2 << 2))
                *(zx.q(rax_22.d) + rcx_14 + 8) = *(r8_5 + (r9_2 << 2) + 8)
                bool cond:6_1 = *(r13_1 + 0xf1) == 0
                uint128_t zmm4 = data_143dbb1f8
                uint128_t zmm2 = data_143dbb1fc
                int64_t r15_2 = *(r13_1 + 0xd0)
                uint128_t zmm3 = data_143dbb200
                int32_t rax_24 = data_143dbb200
                uint128_t zmm0 = _mm_unpacklo_ps(zmm4, zmm2.q)
                uint128_t zmm1
                float var_138
                
                if (cond:6_1)
                    zmm1.d = zmm4.d f* zmm7.d
                    uint64_t var_e8_1 = zmm0.q
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm6.d
                    int32_t r14_5 = int.d(zmm1.d) s>> 1
                    char rax_32
                    
                    if (r14_5 s>= 0xffffff80)
                        rax_32 = 0x7f
                        
                        if (r14_5 s< 0x7f)
                            rax_32 = r14_5.b
                    else
                        rax_32 = -0x80
                    
                    *(r15_2 + (rbx_4 << 3)) = rax_32
                    zmm1.d = zmm2.d f* zmm7.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm6.d
                    int32_t rsi_4 = int.d(zmm1.d) s>> 1
                    char rax_33
                    
                    if (rsi_4 s>= 0xffffff80)
                        rax_33 = 0x7f
                        
                        if (rsi_4 s< 0x7f)
                            rax_33 = rsi_4.b
                    else
                        rax_33 = -0x80
                    
                    *(r15_2 + (rbx_4 << 3) + 1) = rax_33
                    zmm1.d = zmm3.d f* zmm7.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm6.d
                    int32_t rdi_7 = int.d(zmm1.d) s>> 1
                    char rax_34
                    
                    if (rdi_7 s>= 0xffffff80)
                        rax_34 = 0x7f
                        
                        if (rdi_7 s< 0x7f)
                            rax_34 = rdi_7.b
                    else
                        rax_34 = -0x80
                    
                    int32_t var_128_2 = var_e8_1.d.d
                    int32_t var_120_2 = rax_24.d
                    uint128_t var_108_2 = data_142d3f660
                    var_138 = zmm4.d
                    int32_t var_134_2 = zmm2.d
                    int32_t var_130_2 = zmm3.d
                    int32_t var_124_2 = var_e8_1:4.d.d
                    int32_t var_118_2 = zmm4.d
                    int32_t var_114_2 = zmm2.d
                    int32_t var_110_2 = zmm3.d
                    *(r15_2 + (rbx_4 << 3) + 2) = rax_34
                    *(r15_2 + (rbx_4 << 3) + 3) = 0x7f
                    int32_t var_12c_2 = 0
                    int32_t var_11c_2 = 0
                    int32_t var_10c_2 = 0
                    int32_t zmm9_2
                    uint128_t zmm12_1
                    uint128_t zmm13_1
                    zmm0, zmm6, zmm7, zmm8, zmm9_2, zmm12_1, zmm13_1 = sub_14062b8d0(&var_138)
                    
                    zmm0 = zmm0.d f>= zmm9_2 ? zmm13_1 : zmm12_1
                    
                    char rax_35
                    
                    if (r14_5 s>= 0xffffff80)
                        rax_35 = 0x7f
                        
                        if (r14_5 s< 0x7f)
                            rax_35 = r14_5.b
                    else
                        rax_35 = -0x80
                    
                    *(r15_2 + (rbx_4 << 3) + 4) = rax_35
                    char rax_36
                    
                    if (rsi_4 s>= 0xffffff80)
                        rax_36 = 0x7f
                        
                        if (rsi_4 s< 0x7f)
                            rax_36 = rsi_4.b
                    else
                        rax_36 = -0x80
                    
                    *(r15_2 + (rbx_4 << 3) + 5) = rax_36
                    char rax_37
                    
                    if (rdi_7 s>= 0xffffff80)
                        rax_37 = 0x7f
                        
                        if (rdi_7 s< 0x7f)
                            rax_37 = rdi_7.b
                    else
                        rax_37 = -0x80
                    
                    *(r15_2 + (rbx_4 << 3) + 6) = rax_37
                    result = zx.q(int.d(zmm0.d) s>> 1)
                    char rcx_18
                    
                    if (result.d s>= 0xffffff80)
                        rcx_18 = 0x7f
                        
                        if (result.d s< 0x7f)
                            rcx_18 = result.b
                    else
                        rcx_18 = -0x80
                    
                    *(r15_2 + (rbx_4 << 3) + 7) = rcx_18
                else
                    zmm1.d = zmm4.d f* zmm8.d
                    int16_t* r14_3 = (zx.q(rbx_4.d) << 4) + r15_2
                    uint64_t var_f8_1 = zmm0.q
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm6.d
                    int32_t r15_4 = int.d(zmm1.d) s>> 1
                    int16_t rax_25
                    
                    if (r15_4 s>= 0xffff8000)
                        rax_25 = 0x7fff
                        
                        if (r15_4 s< 0x7fff)
                            rax_25 = r15_4.w
                    else
                        rax_25 = -0x8000
                    
                    *r14_3 = rax_25
                    zmm1.d = zmm2.d f* zmm8.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm6.d
                    int32_t rsi_2 = int.d(zmm1.d) s>> 1
                    int16_t rax_26
                    
                    if (rsi_2 s>= 0xffff8000)
                        rax_26 = 0x7fff
                        
                        if (rsi_2 s< 0x7fff)
                            rax_26 = rsi_2.w
                    else
                        rax_26 = -0x8000
                    
                    r14_3[1] = rax_26
                    zmm1.d = zmm3.d f* zmm8.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm1.d = zmm1.d f+ zmm6.d
                    int32_t rdi_5 = int.d(zmm1.d) s>> 1
                    int16_t rax_27
                    
                    if (rdi_5 s>= 0xffff8000)
                        rax_27 = 0x7fff
                        
                        if (rdi_5 s< 0x7fff)
                            rax_27 = rdi_5.w
                    else
                        rax_27 = -0x8000
                    
                    int32_t var_128_1 = var_f8_1.d.d
                    int32_t var_120_1 = rax_24.d
                    uint128_t var_108_1 = data_142d3f660
                    var_138 = zmm4.d
                    int32_t var_134_1 = zmm2.d
                    int32_t var_130_1 = zmm3.d
                    int32_t var_124_1 = var_f8_1:4.d.d
                    int32_t var_118_1 = zmm4.d
                    int32_t var_114_1 = zmm2.d
                    int32_t var_110_1 = zmm3.d
                    r14_3[2] = rax_27
                    r14_3[3] = 0x7fff
                    int32_t var_12c_1 = 0
                    int32_t var_11c_1 = 0
                    int32_t var_10c_1 = 0
                    int32_t zmm9_1
                    uint128_t zmm10_1
                    uint128_t zmm11_1
                    zmm0, zmm6, zmm7, zmm8, zmm9_1, zmm10_1, zmm11_1 = sub_14062b8d0(&var_138)
                    
                    zmm0 = zmm0.d f>= zmm9_1 ? zmm11_1 : zmm10_1
                    
                    int16_t rax_28
                    
                    if (r15_4 s>= 0xffff8000)
                        rax_28 = 0x7fff
                        
                        if (r15_4 s< 0x7fff)
                            rax_28 = r15_4.w
                    else
                        rax_28 = -0x8000
                    
                    r14_3[4] = rax_28
                    int16_t rax_29
                    
                    if (rsi_2 s>= 0xffff8000)
                        rax_29 = 0x7fff
                        
                        if (rsi_2 s< 0x7fff)
                            rax_29 = rsi_2.w
                    else
                        rax_29 = -0x8000
                    
                    r14_3[5] = rax_29
                    int16_t rax_30
                    
                    if (rdi_5 s>= 0xffff8000)
                        rax_30 = 0x7fff
                        
                        if (rdi_5 s< 0x7fff)
                            rax_30 = rdi_5.w
                    else
                        rax_30 = -0x8000
                    
                    r14_3[6] = rax_30
                    result = zx.q(int.d(zmm0.d) s>> 1)
                    
                    if (result.d s>= 0xffff8000)
                        int16_t rcx_16 = 0x7fff
                        
                        if (result.d s< 0x7fff)
                            rcx_16 = result.w
                        
                        r14_3[7] = rcx_16
                    else
                        r14_3[7] = 0x8000
                i_2 = i_3
                
                if (i_2 s> 0)
                    int64_t r10_1 = 0
                    
                    do
                        int32_t arg_20
                        
                        if (*(r13_1 + 0xf0) == 0)
                            zmm1 = data_143dbb1f0:4.d
                            int64_t rdi_8 = *(r13_1 + 0xd8)
                            arg_20 = data_143dbb1f0.d.d
                            uint16_t rcx_23 = (arg_20 u>> 0x17).w
                            int64_t r11_3 = zx.q(*(r13_1 + 0xe8)) * r12_2 + r10_1
                            uint16_t rax_40 = (arg_20 u>> 0x1f).w << 0xf
                            uint32_t r8_6 = zx.d(rcx_23.b)
                            
                            if (r8_6 u> 0x70)
                                if (r8_6 u< 0x8f)
                                    rax_40 |= ((rcx_23 - 0x10) & 0x1f) << 0xa
                                        | ((arg_20 u>> 0xd).w & 0x3ff)
                                else
                                    rax_40 |= 0x7bff
                            else if (0x70 - r8_6 + 0xe s<= 0x18)
                                int32_t rdx_12 = (arg_20 & 0x7fffff) | 0x800000
                                uint16_t r8_8 =
                                    ((rdx_12 u>> (0x70 - r8_6 + 0xe).b).w & 0x3ff) | rax_40
                                rax_40 = r8_8
                                
                                if (((rdx_12 u>> ((0x70 - r8_6).b + 0xd)).b & 1) != 0)
                                    rax_40 = r8_8 + 1
                            
                            *(rdi_8 + (r11_3 << 2)) = rax_40
                            arg_20 = zmm1.d
                            uint16_t rcx_27 = (arg_20 u>> 0x17).w
                            result.w = (arg_20 u>> 0x1f).w << 0xf
                            uint32_t r8_9 = zx.d(rcx_27.b)
                            
                            if (r8_9 u> 0x70)
                                if (r8_9 u< 0x8f)
                                    result.w |= ((arg_20 u>> 0xd).w & 0x3ff)
                                        | ((rcx_27 - 0x10) & 0x1f) << 0xa
                                else
                                    result.w |= 0x7bff
                            else if (0x70 - r8_9 + 0xe s<= 0x18)
                                int32_t rdx_17 = (arg_20 & 0x7fffff) | 0x800000
                                uint32_t r8_11
                                r8_11.w = (rdx_17 u>> (0x70 - r8_9 + 0xe).b).w & 0x3ff
                                r8_11.w |= result.w
                                result = zx.q(r8_11.w)
                                
                                if (((rdx_17 u>> ((0x70 - r8_9).b + 0xd)).b & 1) != 0)
                                    result = zx.q(r8_11 + 1)
                            
                            *(rdi_8 + (r11_3 << 2) + 2) = result.w
                        else
                            zmm1 = zx.o(data_143dbb1f0)
                            result = *(r13_1 + 0xd8)
                            int64_t rcx_20 = zx.q(*(r13_1 + 0xe8)) * r12_2
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            arg_20.q = zmm1.q
                            int64_t rcx_21 = rcx_20 + r10_1
                            result[rcx_21].d = zmm1.d
                            *(&result[rcx_21] + 4) = zmm0.d
                        r10_1 += 1
                    while (r10_1 s< i_2)
                    
                    rbx_4 = zx.q(rbx_4.d)
                
                r12_1 = var_13c_1
                rdi_1 = var_148_1
                r15_1 = arg_10.d
                
                if (r12_1 != 0)
                    result = zx.q(data_14399f630)
                    *(zx.q(*(r13_1 + 0x168) * rbx_4.d) + *(r13_1 + 0x160)) = result.d
            
            rcx_11 = &var_d0_1[1]
            var_d0_1 = rcx_11
        while (rcx_11 != result_1)
        
        r8_3 = data_143cef138
    
    if (r8_3 s> 0)
        int512_t zmm1_1 = sub_1422b9100(r13_1 + 0x70, data_143cef130, r8_3)
        result = sub_14228ff40(r13_1 + 0xf8, data_143cef130, data_143cef138)
        
        if (r12_1 != 0)
            return sub_14228fe90(r13_1 + 0x138, data_143cef130, data_143cef138, zmm1_1)

return result
