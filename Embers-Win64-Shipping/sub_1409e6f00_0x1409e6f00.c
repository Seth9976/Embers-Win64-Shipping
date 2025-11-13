// 函数: sub_1409e6f00
// 地址: 0x1409e6f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6

if (*(arg1 + 0x608) != 0 && *(arg1 + 0x600) != 0)
    if (*(arg1 + 0x6c0) == *(arg1 + 0x6ec))
        float result = *(arg1 + 0x670)
        
        if (result == *(arg1 + 0x69c))
            return result
    
    void* rcx = *(arg1 + 0x28)
    int32_t rdx_2 = *(rcx + 0xe8) - *(rcx + 0x114)
    int64_t* rcx_1 = data_143ceddf8
    zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x670) - *(arg1 + 0x69c)))
    int64_t rax_4 = *rcx_1
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_2))
    zmm6.d = zmm6.d f/ zmm0.d
    (*(rax_4 + 0x98))(rcx_1)
    
    if (not(zmm6.d f>= zmm0.d))
        int32_t rcx_2 = 0
        int32_t r8 = 0
        int32_t r11 = *(arg1 + 0x690)
        double zmm7[0x2]
        double var_58[0x2] = zmm7
        uint128_t zmm8
        uint128_t var_68 = zmm8
        uint128_t zmm9
        uint128_t var_78 = zmm9
        double zmm10[0x2]
        double var_88[0x2] = zmm10
        uint128_t zmm11
        uint128_t var_98 = zmm11
        int32_t var_1a8 = 0
        int32_t var_1a4 = 1
        void* var_1a0 = arg1 + 0x678
        int32_t var_198 = 0xffffffff
        int64_t var_194 = 0
        
        if (r11 != 0)
            void* rax_5 = *(arg1 + 0x688)
            void* r9_1 = arg1 + 0x678
            
            if (rax_5 != 0)
                r9_1 = rax_5
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(r11 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_1409e7098:
                int32_t rax_12 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
                uint64_t rflags_1
                int32_t temp0_4
                temp0_4, rflags_1 = _bit_scan_reverse(rax_12)
                int32_t var_1a4_1 = rax_12
                int32_t rax_13
                
                if (rax_12 == 0)
                    rax_13 = 0x20
                else
                    rax_13 = 0x1f - temp0_4
                
                var_194.d = r8 - rax_13 + 0x1f
                
                if (r8 - rax_13 + 0x1f s> r11)
                    var_194.d = r11
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_2)
                    r8 += 0x20
                    rcx_2 += 1
                    var_194:4.d = r8
                    var_1a8 = rcx_2
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    var_198 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_1409e7098
                
                var_194.d = r11
        
        int32_t rdx_7 = *(arg1 + 0x690)
        uint128_t var_140 = var_1a8.o
        int32_t r14 = 0xffffffff << (rdx_7.b & 0x1f)
        int32_t r8_3 = rdx_7 s>> 5
        int32_t r9_3 = rdx_7 & 0xffffffe0
        int32_t var_168 = r14
        int32_t var_164 = rdx_7
        int64_t var_130 = 0xffffffff
        int64_t var_188 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        var_1a8.o = (arg1 + 0x668).o
        var_198.o = var_140
        
        if (rdx_7 != r11)
            void* rax_15 = *(arg1 + 0x688)
            void* r10_1 = arg1 + 0x678
            
            if (rax_15 != 0)
                r10_1 = rax_15
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11 - 1)
            int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
            int32_t var_164_2
            
            if (rdx_11 != 0)
            label_1409e7170:
                int32_t rax_22 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
                uint64_t rflags_2
                int32_t temp0_6
                temp0_6, rflags_2 = _bit_scan_reverse(rax_22)
                int32_t rax_23
                
                if (rax_22 == 0)
                    rax_23 = 0x20
                else
                    rax_23 = 0x1f - temp0_6
                
                int32_t var_164_1 = r9_3 - rax_23 + 0x1f
                
                if (r9_3 - rax_23 + 0x1f s> r11)
                    var_164_2 = r11
            else
                while (true)
                    int64_t rcx_7 = sx.q(r8_3)
                    r9_3 += 0x20
                    r8_3 += 1
                    
                    if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_11 = *(r10_1 + (rcx_7 << 2) + 4)
                    var_168 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_1409e7170
                
                var_164_2 = r11
        
        while (true)
            int32_t var_18c
            int64_t rax_25 = sx.q(var_18c)
            int64_t* rdx_12 = var_1a8.q
            uint128_t var_118
            
            if (rax_25.d == (var_168.q u>> 0x20).d && var_198.q == arg1 + 0x678
                    && rdx_12 == arg1 + 0x668)
                sub_1409d9c70(arg1 + 0x668)
                void* arg_10
                sub_14090aa40(*(arg1 + 0x28) + 0x150, &arg_10, data_143f35cc8)
                int32_t rcx_19 = 0
                int32_t var_1a4_2 = 1
                void* r14_1 = arg1 + 0x6b8
                int32_t var_1a8_1 = 0
                int32_t r11_1 = *(r14_1 + 0x28)
                void* rsi_2 = r14_1 + 0x10
                int32_t r8_11 = 0
                var_1a0 = rsi_2
                int32_t var_198_1 = 0xffffffff
                int64_t var_194_1 = 0
                
                if (r11_1 != 0)
                    void* rax_31 = *(rsi_2 + 0x10)
                    void* r9_6 = rsi_2
                    
                    if (rax_31 != 0)
                        r9_6 = rax_31
                    
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(r11_1 - 1)
                    int32_t rdx_19 = *r9_6
                    
                    if (rdx_19 != 0)
                    label_1409e7309:
                        int32_t rax_38 = ((rdx_19 - 1) & rdx_19) ^ rdx_19
                        uint64_t rflags_3
                        int32_t temp0_7
                        temp0_7, rflags_3 = _bit_scan_reverse(rax_38)
                        int32_t var_1a4_3 = rax_38
                        int32_t rax_39
                        
                        if (rax_38 == 0)
                            rax_39 = 0x20
                        else
                            rax_39 = 0x1f - temp0_7
                        
                        var_194_1.d = r8_11 - rax_39 + 0x1f
                        
                        if (r8_11 - rax_39 + 0x1f s> r11_1)
                            var_194_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_20 = sx.q(rcx_19)
                            r8_11 += 0x20
                            rcx_19 += 1
                            var_194_1:4.d = r8_11
                            var_1a8_1 = rcx_19
                            
                            if (rdx_20.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_19 = *(r9_6 + (rdx_20 << 2) + 4)
                            int32_t var_198_2 = 0xffffffff
                            
                            if (rdx_19 != 0)
                                goto label_1409e7309
                        
                        var_194_1.d = r11_1
                
                int32_t r10_3 = *(r14_1 + 0x28)
                uint128_t var_170 = var_1a8_1.o
                int32_t r8_14 = r10_3 s>> 5
                int32_t r9_8 = r10_3 & 0xffffffe0
                int32_t arg_8 = r10_3
                int128_t var_160 = 0xffffffff
                var_130 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                void* var_148
                var_148.o = r14_1.o
                var_140 = var_168.o
                
                if (r10_3 != r11_1)
                    void* rax_41 = *(rsi_2 + 0x10)
                    void* r10_4 = rsi_2
                    
                    if (rax_41 != 0)
                        r10_4 = rax_41
                    
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(r11_1 - 1)
                    int32_t rdx_24 = *(r10_4 + (sx.q(r8_14) << 2)) & 0xffffffff << (r10_3.b & 0x1f)
                    
                    if (rdx_24 != 0)
                    label_1409e73dc:
                        int32_t rax_48 = ((rdx_24 - 1) & rdx_24) ^ rdx_24
                        uint64_t rflags_4
                        int32_t temp0_9
                        temp0_9, rflags_4 = _bit_scan_reverse(rax_48)
                        int32_t r12_1
                        
                        if (rax_48 == 0)
                            r12_1 = 0x20
                        else
                            r12_1 = 0x1f - temp0_9
                        
                        r10_3 = r9_8 - r12_1 + 0x1f
                        arg_8 = r10_3
                        
                        if (r10_3 s> r11_1)
                            r10_3 = r11_1
                            arg_8 = r11_1
                    else
                        while (true)
                            int64_t rcx_24 = sx.q(r8_14)
                            r9_8 += 0x20
                            r8_14 += 1
                            
                            if (rcx_24.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_24 = *(r10_4 + (rcx_24 << 2) + 4)
                            
                            if (rdx_24 != 0)
                                goto label_1409e73dc
                        
                        r10_3 = r11_1
                        arg_8 = r11_1
                
                void* r12_2 = arg_10
                
                while (true)
                    int64_t rax_49 = sx.q(var_130:4.d)
                    
                    if (rax_49.d == r10_3 && var_140:8.q == rsi_2 && var_148 == r14_1)
                        return sub_1409d9c70(r14_1) __tailcall
                    
                    void* r15
                    r15.b = 0
                    zmm8 = data_143dbb1f8
                    zmm7 = data_143dbb1fc
                    zmm9 = zmm8
                    int64_t rbx_1 = sx.q(*(*var_148 + rax_49 * 0xc))
                    zmm10 = zmm7
                    zmm6 = data_143dbb200
                    zmm11 = zmm6
                    TEB* gsbase
                    
                    if (data_143ceeff0 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143ceeff0)
                        
                        if (data_143ceeff0 == 0xffffffff)
                            atexit(sub_142cb92f0)
                            _Init_thread_footer(&data_143ceeff0)
                    
                    void* rsi_3 = *(arg1 + 0x28)
                    int64_t r14_2 = rbx_1 * 5
                    int32_t rcx_27 = data_143ceefe8
                    int64_t r10_5 = sx.q(*(*(rsi_3 + 0xe0) + (r14_2 << 3) + 8))
                    
                    if (r10_5.d s> rcx_27)
                        bool cond:8_1 = r10_5.d s<= data_143ceefec
                        rcx_27 = r10_5.d
                        data_143ceefe8 = rcx_27
                        
                        if (not(cond:8_1))
                            sub_1405a4cf0(&data_143ceefe0)
                            rcx_27 = data_143ceefe8
                    else if (r10_5.d s< rcx_27)
                        int32_t rdi_2 = rcx_27 - r10_5.d
                        
                        if (rcx_27 != r10_5.d)
                            int32_t rax_54 = rcx_27 - rdi_2
                            
                            if (rax_54 != r10_5.d)
                                int64_t r9_11 = data_143ceefe0
                                memmove(r9_11 + (r10_5 << 2), r9_11 + (sx.q(rdi_2 + r10_5.d) << 2), 
                                    (rax_54 - r10_5.d) << 2)
                                rcx_27 = data_143ceefe8
                            
                            data_143ceefe8 = rcx_27 - rdi_2
                            sub_1405dac90(&data_143ceefe0)
                            rcx_27 = data_143ceefe8
                    
                    int64_t rax_57 = *(rsi_3 + 0xe0)
                    int64_t r8_18 = 0
                    int32_t* r9_12 = *(rax_57 + (r14_2 << 3))
                    uint64_t r10_7 = sx.q(*(rax_57 + (r14_2 << 3) + 8)) << 2 u>> 2
                    
                    if (r9_12 u> &r9_12[sx.q(*(rax_57 + (r14_2 << 3) + 8))])
                        r10_7 = 0
                    
                    if (r10_7 != 0)
                        do
                            int64_t rax_60 = sx.q(*r9_12)
                            r9_12 = &r9_12[1]
                            *(data_143ceefe0 + (r8_18 << 2)) = *(*(rsi_3 + 0x38) + rax_60 * 0x18)
                            r8_18 += 1
                        while (r8_18 != r10_7)
                        
                        rcx_27 = data_143ceefe8
                    
                    int32_t* r8_19 = data_143ceefe0
                    int64_t r9_13 = 0
                    void* rcx_32 = &r8_19[sx.q(rcx_27)]
                    uint64_t r10_11 = (rcx_32 - r8_19 + 3) u>> 2
                    
                    if (r8_19 u> rcx_32)
                        r10_11 = 0
                    
                    uint128_t zmm0_1
                    uint128_t zmm1
                    double zmm2[0x2]
                    
                    if (r10_11 != 0)
                        int64_t rdx_30 = **(r12_2 + 0x18)
                        
                        do
                            int64_t rcx_33 = sx.q(*r8_19) * 3
                            
                            if (r15.b == 0)
                                zmm0_1 = zx.o(*(rdx_30 + (rcx_33 << 2)))
                                r15.b = 1
                                zmm8 = zmm0_1
                                zmm9 = zmm8
                                zmm7 = zmm0_1.q:4.d
                                zmm10 = zmm7
                                zmm6 = *(rdx_30 + (rcx_33 << 2) + 8)
                                zmm11 = zmm6
                            else
                                zmm0_1 = *(rdx_30 + (rcx_33 << 2))
                                
                                if (not(zmm9.d f<= zmm0_1.d))
                                    zmm9 = zmm0_1
                                
                                zmm2 = *(rdx_30 + (rcx_33 << 2) + 4)
                                
                                if (not(zmm10[0].d f<= zmm2[0].d))
                                    zmm10 = zmm2
                                
                                zmm1 = *(rdx_30 + (rcx_33 << 2) + 8)
                                
                                if (not(zmm11.d f<= zmm1.d))
                                    zmm11 = zmm1
                                
                                if (not(zmm8.d f>= zmm0_1.d))
                                    zmm8 = zmm0_1
                                
                                if (not(zmm7[0].d f>= zmm2[0].d))
                                    zmm7 = zmm2
                                
                                if (not(zmm6.d f>= zmm1.d))
                                    zmm6 = zmm1
                            
                            r8_19 = &r8_19[1]
                            r9_13 += 1
                        while (r9_13 != r10_11)
                    
                    int128_t* rcx_34 = *(arg1 + 0x608)
                    zmm8.d = zmm8.d f- zmm9.d
                    var_170:4.d = 0
                    zmm6.d = zmm6.d f- zmm11.d
                    var_160:4.d = 0
                    zmm7[0].d = zmm7[0].d f- zmm10[0].d
                    void* var_d8 = arg1
                    int32_t var_d0_1 = rbx_1.d
                    zmm8.d = zmm8.d f* 0.5f
                    zmm6.d = zmm6.d f* 0.5f
                    zmm7[0].d = zmm7[0].d f* 0.5f
                    zmm9.d = zmm9.d f+ zmm8.d
                    zmm11.d = zmm11.d f+ zmm6.d
                    var_160.d = zmm6.d
                    zmm10[0].d = zmm10[0].d f+ zmm7[0].d
                    zmm2 = _mm_unpacklo_ps(zmm8, zmm7[0])
                    var_118:8.d = zmm11.d
                    var_170.d = var_118:8.d
                    zmm0_1.q = (_mm_unpacklo_ps(zmm9, zmm10[0])).q
                    zmm1.q = zmm2.q
                    void* var_178
                    var_178.o = zmm0_1
                    var_168.o = zmm1
                    uint128_t var_b8_1 = zmm1
                    uint128_t var_c8_1 = zmm0_1
                    sub_1409af410(rcx_34, &var_d8, rcx_34, &rcx_34[0x19])
                    var_130.d &= not.d(var_140:4.d)
                    sub_14059bdd0(&var_140)
                    r10_3 = arg_8
                    r14_1 = arg1 + 0x6b8
                    rsi_2 = var_1a0
            
            int64_t rax_27 = sx.q(*(*rdx_12 + rax_25 * 0xc))
            int32_t rdx_14
            
            if (*(arg1 + 0x620) != *(arg1 + 0x64c))
                void* rdx_13 = *(arg1 + 0x658)
                void* r9_5 = arg1 + 0x650
                
                if (rdx_13 != 0)
                    r9_5 = rdx_13
                
                rdx_14 = *(r9_5 + (((sx.q(*(arg1 + 0x660)) - 1) & rax_27) << 2))
            
            if (*(arg1 + 0x620) == *(arg1 + 0x64c) || rdx_14 == 0xffffffff)
            label_1409e7217:
                rdx_14 = -1
            else
                int64_t r8_7 = *(arg1 + 0x618)
                
                while (true)
                    int32_t* rcx_12 = sx.q(rdx_14) << 5
                    
                    if (*(rcx_12 + r8_7) == rax_27.d)
                        break
                    
                    rdx_14 = *(rcx_12 + r8_7 + 0x18)
                    
                    if (rdx_14 == 0xffffffff)
                        goto label_1409e7217
            
            zmm6 = *((sx.q(rdx_14) << 5) + *(arg1 + 0x618) + 8)
            sub_1405c3390(arg1 + 0x618, rdx_14)
            void* rcx_14 = *(arg1 + 0x608)
            var_118 = zmm6
            sub_1409d89c0(rcx_14, &var_118)
            var_194:4.d &= not.d(var_1a0:4.d)
            sub_14059bdd0(&var_1a0)

return sub_1409d4c80(arg1)
