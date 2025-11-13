// 函数: sub_1418437a0
// 地址: 0x1418437a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)
int64_t performanceCount_1 = performanceCount
int64_t rdi_1 = performanceCount_1 - *(arg1 + 0x120)
double zmm0 = sub_140a48b40()
uint128_t zmm7 = 0x43f0000000000000
int64_t zmm2 = float.d(rdi_1)

if (rdi_1 s< 0)
    zmm2 = zmm2 f+ zmm7.q

arg2.q = fconvert.d(arg2.d)

if (not(zmm0 f* zmm2 f< arg2.q))
    *(arg1 + 0x120) = performanceCount_1
    EnterCriticalSection(arg1 + 8)
    sub_140b19e60()
    sub_140b1f640(&data_1439a8bd0, u"/-------- FStatsCollector Log ---------------------")
    int32_t rcx_2 = 0
    int32_t var_184_1 = 1
    int32_t var_188_1 = 0
    int32_t r11_1 = *(arg1 + 0x58)
    void* r15_1 = arg1 + 0x40
    int32_t r8_1 = 0
    void* var_198_1 = r15_1
    void* var_180_1 = r15_1
    int32_t var_178_1 = 0xffffffff
    int64_t var_174_1 = 0
    
    if (r11_1 != 0)
        void* rax = *(r15_1 + 0x10)
        void* r9_1 = r15_1
        
        if (rax != 0)
            r9_1 = rax
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_1418438eb:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_184_2 = rax_7
            int32_t var_140_1 = temp0_1
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_1
            
            var_174_1.d = r8_1 - rax_8 + 0x1f
            
            if (r8_1 - rax_8 + 0x1f s> r11_1)
                var_174_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_174_1:4.d = r8_1
                var_188_1 = rcx_2
                
                if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_178_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1418438eb
            
            var_174_1.d = r11_1
    
    int32_t rdx_5 = *(arg1 + 0x58)
    int128_t var_160_1 = var_188_1.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r14_1 = 0xffffffff << (rdx_5.b & 0x1f)
    int32_t r9_3 = rdx_5 & 0xffffffe0
    void* var_168_1
    var_168_1.d = r8_4
    int128_t var_150_1 = 0xffffffff
    int64_t var_108_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    arg2 = var_160_1
    var_160_1:8.d = r14_1
    var_160_1:0xc.d = rdx_5
    var_150_1.d = r9_3
    int128_t var_128 = (arg1 + 0x30).o
    uint128_t var_118_1 = arg2
    
    if (rdx_5 != r11_1)
        void* rax_10 = *(r15_1 + 0x10)
        void* r10_1 = r15_1
        
        if (rax_10 != 0)
            r10_1 = rax_10
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
        
        if (rdx_9 != 0)
        label_1418439dd:
            int32_t rax_17 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_17)
            int32_t var_13c_1 = temp0_3
            int32_t rdi_2
            
            if (rax_17 == 0)
                rdi_2 = 0x20
            else
                rdi_2 = 0x1f - temp0_3
            
            var_160_1:0xc.d = r9_3 - rdi_2 + 0x1f
            
            if (r9_3 - rdi_2 + 0x1f s> r11_1)
                var_160_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_7 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                var_150_1.d = r9_3
                var_168_1.d = r8_4
                
                if (rcx_7.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
                var_160_1:8.d = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1418439dd
            
            var_160_1:0xc.d = r11_1
    
    uint128_t zmm6 = 0x3f1a36e2eb1c432d
    
    while (true)
        int64_t rcx_9 = sx.q(var_118_1:0xc.d)
        int64_t rax_19 = var_128.q
        
        if (rcx_9.d == (var_160_1:8.q u>> 0x20).d && var_118_1.q == r15_1 && rax_19 == arg1 + 0x30)
            break
        
        void* rdi_5 = (rcx_9 << 5) + *rax_19
        int64_t* rsi_2 = *(rdi_5 + 0x10)
        int32_t arg_10
        int64_t rdx_11 = sub_140865c40(arg1 + 0xd0, &arg_10, rsi_2)
        int64_t rax_20 = sx.q(arg_10)
        void* const rcx_11
        
        if (rax_20.d == 0xffffffff)
            rcx_11 = nullptr
        else
            rdx_11 = rax_20 * 3
            rcx_11 = *(arg1 + 0xd0) + (rdx_11 << 3)
        
        uint32_t rcx_12 = zx.d(*(rcx_11 + 8))
        
        if (rcx_12 == 0)
            int64_t rdi_15 = *rsi_2
            arg2 = sub_140a48b40()
            uint128_t zmm0_2
            zmm0_2.q = float.d(rdi_15)
            
            if (rdi_15 s< 0)
                zmm0_2.q = zmm0_2.q f+ zmm7.q
            
            arg2.q = arg2.q f* zmm0_2.q
            int64_t var_f0
            int64_t* rax_59 = sub_140a4ca30(&var_f0, arg2)
            
            if (rax_59[1].d != 0)
                *rax_59
            
            int32_t var_18c
            sub_1405ba560(arg1 + 0x80, &var_18c, rsi_2)
            int64_t rax_60 = sx.q(var_18c)
            void* const rcx_56
            
            if (rax_60.d == 0xffffffff)
                rcx_56 = nullptr
            else
                rcx_56 = (rax_60 << 5) + *(arg1 + 0x80)
            
            int16_t* const rdi_16
            
            if (*(rcx_56 + 0x10) == 0)
                rdi_16 = &data_142d40450
            else
                rdi_16 = *(rcx_56 + 8)
            
            sub_140b19e60()
            sub_140b1f700(&data_1439a8bd0, u"| %s%s", rdi_16)
            int64_t rcx_57 = var_f0
            
            if (rcx_57 != 0)
                sub_140a74f90(rcx_57)
        else
            int64_t* rdi_12
            
            if (rcx_12 == 1)
                void var_80
                int64_t* rax_51 = sub_140ac6680(sub_140aa1030(&var_80, *rsi_2, 0))
                int16_t* const r15_3
                
                if (rax_51[1].d == 0)
                    r15_3 = &data_142d40450
                else
                    r15_3 = *rax_51
                
                void var_98
                int64_t* rax_52
                rax_52, zmm6, zmm7 = sub_140aa1030(&var_98, **(rdi_5 + 0x10), 1)
                int64_t* rax_53 = sub_140ac6680(rax_52)
                
                if (rax_53[1].d != 0)
                    *rax_53
                
                int32_t var_190
                sub_1405ba560(arg1 + 0x80, &var_190, rsi_2)
                int64_t rax_54 = sx.q(var_190)
                void* const rcx_49
                
                if (rax_54.d == 0xffffffff)
                    rcx_49 = nullptr
                else
                    rcx_49 = (rax_54 << 5) + *(arg1 + 0x80)
                
                int16_t* const rdi_13
                
                if (*(rcx_49 + 0x10) == 0)
                    rdi_13 = &data_142d40450
                else
                    rdi_13 = *(rcx_49 + 8)
                
                sub_140b19e60()
                int16_t* const var_1a8_2 = r15_3
                sub_140b1f700(&data_1439a8bd0, u"| %s%s, %s", rdi_13)
                int64_t* var_90
                
                if (var_90 != 0)
                    var_90[1].d -= 1
                    
                    if (var_90[1].d == 1)
                        (**var_90)(var_90)
                        int32_t rax_57 = *(var_90 + 0xc)
                        *(var_90 + 0xc) -= 1
                        
                        if (rax_57 == 1)
                            (*(*var_90 + 8))(var_90, 1)
                
                int64_t* var_78
                rdi_12 = var_78
            label_141843d3f:
                
                if (rdi_12 != 0)
                    rdi_12[1].d -= 1
                    
                    if (rdi_12[1].d == 1)
                        (**rdi_12)(rdi_12)
                        int32_t rax_46 = *(rdi_12 + 0xc)
                        *(rdi_12 + 0xc) -= 1
                        
                        if (rax_46 == 1)
                            (*(*rdi_12 + 8))(rdi_12, 1)
                
                r15_1 = var_198_1
            else
                if (rcx_12 == 2)
                    void var_b0
                    int64_t* rax_36 = sub_140ac6680(sub_140aa1030(&var_b0, *rsi_2, 0))
                    int16_t* const r15_2
                    
                    if (rax_36[1].d == 0)
                        r15_2 = &data_142d40450
                    else
                        r15_2 = *rax_36
                    
                    void var_c8
                    int64_t* rax_37
                    rax_37, zmm6, zmm7 = sub_140aa1030(&var_c8, **(rdi_5 + 0x10), 1)
                    int64_t* rax_38 = sub_140ac6680(rax_37)
                    
                    if (rax_38[1].d != 0)
                        *rax_38
                    
                    int32_t arg_20
                    sub_1405ba560(arg1 + 0x80, &arg_20, rsi_2)
                    int64_t rax_39 = sx.q(arg_20)
                    void* const rcx_36
                    
                    if (rax_39.d == 0xffffffff)
                        rcx_36 = nullptr
                    else
                        rcx_36 = (rax_39 << 5) + *(arg1 + 0x80)
                    
                    int16_t* const rdi_10
                    
                    if (*(rcx_36 + 0x10) == 0)
                        rdi_10 = &data_142d40450
                    else
                        rdi_10 = *(rcx_36 + 8)
                    
                    sub_140b19e60()
                    int16_t* const var_1a8_1 = r15_2
                    sub_140b1f700(&data_1439a8bd0, u"| %s%s/s, %s/s", rdi_10)
                    int64_t* var_c0
                    
                    if (var_c0 != 0)
                        var_c0[1].d -= 1
                        
                        if (var_c0[1].d == 1)
                            (**var_c0)(var_c0)
                            int32_t rax_42 = *(var_c0 + 0xc)
                            *(var_c0 + 0xc) -= 1
                            
                            if (rax_42 == 1)
                                (*(*var_c0 + 8))(var_c0, 1)
                    
                    int64_t* var_a8
                    rdi_12 = var_a8
                    goto label_141843d3f
                
                if (rcx_12 == 3)
                    int128_t var_100 = zx.o(0)
                    arg2.q = float.d(*rsi_2)
                    arg2.q = arg2.q f* zmm6.q
                    void var_e0
                    int64_t* rax_24
                    rax_24, zmm6, zmm7 = sub_140aa1180(&var_e0, rdx_11, arg1 + 0x12c, &var_100)
                    int64_t* rax_25 = sub_140ac6680(rax_24)
                    
                    if (rax_25[1].d != 0)
                        *rax_25
                    
                    int32_t arg_18
                    sub_1405ba560(arg1 + 0x80, &arg_18, rsi_2)
                    int64_t rax_26 = sx.q(arg_18)
                    void* const rcx_24
                    
                    if (rax_26.d == 0xffffffff)
                        rcx_24 = nullptr
                    else
                        rcx_24 = (rax_26 << 5) + *(arg1 + 0x80)
                    
                    int16_t* const rdi_7
                    
                    if (*(rcx_24 + 0x10) == 0)
                        rdi_7 = &data_142d40450
                    else
                        rdi_7 = *(rcx_24 + 8)
                    
                    sub_140b19e60()
                    sub_140b1f700(&data_1439a8bd0, u"| %s%s", rdi_7)
                    int64_t* var_d8
                    
                    if (var_d8 != 0)
                        var_d8[1].d -= 1
                        
                        if (var_d8[1].d == 1)
                            (**var_d8)(var_d8)
                            int32_t rax_29 = *(var_d8 + 0xc)
                            *(var_d8 + 0xc) -= 1
                            
                            if (rax_29 == 1)
                                (*(*var_d8 + 8))(var_d8, 1)
                    
                    int64_t* rdi_9 = var_100:8.q
                    
                    if (rdi_9 != 0)
                        rdi_9[1].d -= 1
                        
                        if (rdi_9[1].d == 1)
                            (**rdi_9)(rdi_9)
                            int32_t rax_33 = *(rdi_9 + 0xc)
                            *(rdi_9 + 0xc) -= 1
                            
                            if (rax_33 == 1)
                                (*(*rdi_9 + 8))(rdi_9, 1)
                else
                    int32_t arg_8
                    sub_1405ba560(arg1 + 0x80, &arg_8, rsi_2)
                    int64_t rax_22 = sx.q(arg_8)
                    void* const rcx_18
                    
                    if (rax_22.d == 0xffffffff)
                        rcx_18 = nullptr
                    else
                        rcx_18 = (rax_22 << 5) + *(arg1 + 0x80)
                    
                    int16_t* const r14_2
                    
                    if (*(rcx_18 + 0x10) == 0)
                        r14_2 = &data_142d40450
                    else
                        r14_2 = *(rcx_18 + 8)
                    
                    *rsi_2
                    sub_140b19e60()
                    sub_140b1f700(&data_1439a8bd0, u"| %s%lld", r14_2)
        
        var_118_1:8.d &= not.d(var_128:0xc.d)
        sub_14059bdd0(&var_128:8)
    
    sub_140b19e60()
    result = sub_140b1f640(&data_1439a8bd0, u"\--------------------------------------------------")
    
    if (arg1 != -8)
        return LeaveCriticalSection(arg1 + 8)

return result
