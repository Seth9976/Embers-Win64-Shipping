// 函数: sub_140a4b4a0
// 地址: 0x140a4b4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t result = __security_cookie ^ &var_2c8
int64_t result_1 = result

if (*(arg1 + 0x58) == 0)
    void* r14_1 = arg1 + 0x60
    *(arg1 + 0x58) = 1
    void* var_220_1 = r14_1
    sub_140a4f8b0(r14_1)
    void var_178
    sub_140ae6a10(&var_178)
    int64_t var_258
    int64_t* rax_1 = sub_140b17c60(&var_258)
    int16_t* rcx_3 = *rax_1
    int32_t rdx_1 = rax_1[1].d
    int32_t rdx_2 = neg.d(rdx_1)
    *rax_1 = 0
    int32_t r8_1 = rax_1[1].d
    int16_t* var_218 = rcx_3
    int32_t rcx_4 = *(rax_1 + 0xc)
    int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 0x13 + r8_1
    int32_t var_20c_1 = rcx_4
    rax_1[1] = 0
    
    if (rdx_5 s> rcx_4)
        sub_1405947f0(&var_218, rdx_5)
    
    sub_140a20ba0(&var_218, u"ConsoleHistory.ini", 0x12)
    int64_t rcx_7 = var_258
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int16_t* const rcx_8 = &data_142d40450
    
    if (r8_1 != 0)
        rcx_8 = var_218
    
    sub_140b43590(rcx_8, rcx_8, &var_178, 0, 0)
    int16_t* var_288 = nullptr
    int32_t var_280_1 = 0
    sub_1405947f0(&var_288, 0xf)
    int32_t rax_2 = var_280_1 + 0xf
    
    if (rax_2 s> 0)
        sub_140594770(&var_288)
    
    __builtin_wcscpy(var_288, u"ConsoleHistory")
    int64_t var_1e0
    sub_140b58260(&var_1e0, u"History", 1)
    void var_168
    int64_t* var_250_1 = &var_168
    int32_t rcx_13 = 0
    var_258.d = 0
    int32_t r8_3 = 0
    var_258:4.d = 1
    int32_t var_248_1 = 0xffffffff
    int64_t var_244_1 = 0
    int32_t var_150
    
    if (var_150 != 0)
        void* r9_1 = &var_168
        void* var_158
        
        if (var_158 != 0)
            r9_1 = var_158
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(var_150 - 1)
        int32_t rdx_10 = *r9_1
        
        if (rdx_10 != 0)
        label_140a4b68a:
            int32_t rax_10 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
            var_258:4.d = rax_10
            int32_t rax_11
            
            if (rax_10 == 0)
                rax_11 = 0x20
            else
                rax_11 = 0x1f - temp0_2
            
            int32_t rax_12 = r8_3 - rax_11 + 0x1f
            
            if (rax_12 s> var_150)
                rax_12 = var_150
            
            var_244_1.d = rax_12
        else
            while (true)
                int64_t rdx_11 = sx.q(rcx_13)
                r8_3 += 0x20
                rcx_13 += 1
                var_244_1:4.d = r8_3
                var_258.d = rcx_13
                
                if (rdx_11.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    var_244_1.d = var_150
                    break
                
                rdx_10 = *(r9_1 + (rdx_11 << 2) + 4)
                var_248_1 = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_140a4b68a
    
    double zmm2_1[0x2] = var_248_1.o
    void* var_208_1 = &var_178
    int128_t var_200 = var_258.o
    int32_t var_264_1 = var_150
    double var_1f0_1 = zmm2_1[0]
    int128_t zmm1_1 = var_200
    uint64_t rax_14 = (0xffffffff << (var_150.b & 0x1f)).q u>> 0x20
    zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    uint64_t var_1d8_1 = rax_14
    int128_t var_1d0 = var_208_1.o
    int128_t var_1c0_1 = zmm1_1
    int64_t var_1b0_1 = zmm2_1.q
    
    while (true)
        int64_t rdx_13 = sx.q(var_1c0_1:0xc.d)
        
        if (rdx_13.d != rax_14.d || var_1c0_1.q != &var_168)
            rax_14.b = 0
        else
            rax_14.b = 1
        
        int64_t rcx_17 = var_1d0.q
        
        if (rax_14.b == 0 || rcx_17 != &var_178)
            rax_14.b = 1
        else
            rax_14.b = 0
        
        if (rax_14.b == 0)
            break
        
        int16_t* const r8_5 = &data_142d40450
        int16_t* var_238 = nullptr
        int64_t* r15_2 = rdx_13 * 0xb8 + *rcx_17
        int16_t* r12_1 = nullptr
        int32_t rdi_1 = 0
        int64_t var_230_1 = 0
        
        if (rax_2 != 0)
            r8_5 = var_288
        
        int16_t* const r10_2
        
        if (r15_2[1].d == 0)
            r10_2 = &data_142d40450
        else
            r10_2 = *r15_2
        
        void* r10_3 = r10_2 - r8_5
        
        while (true)
            int16_t rdx_14 = *(r8_5 + r10_3)
            int16_t r9_2 = *r8_5
            r8_5 = &r8_5[1]
            int32_t rcx_18
            int16_t* const rdx_32
            
            if (rdx_14 != r9_2)
                uint32_t rdx_24
                
                if (((zx.d(r9_2) | zx.d(rdx_14)) & 0xffffff80) != 0)
                    rdx_24 = zx.d(rdx_14) - zx.d(r9_2)
                else
                    uint32_t rcx_30 = zx.d(*(zx.q(r9_2) + &data_142e5e8a0))
                    uint32_t rdx_23 = zx.d(*(zx.q(rdx_14) + &data_142e5e8a0))
                    rdx_24 = rdx_23 - rcx_30
                    
                    if (rdx_23 == rcx_30)
                        continue
                
                if (rdx_24 != 0)
                    if (sub_140a32a50(r15_2, &var_288, 1) == 0)
                        break
                    
                    int32_t rcx_33
                    
                    if (rax_2 == 0)
                        rcx_33 = 0
                    else
                        rcx_33 = rax_2 - 1
                    
                    int32_t r8_10 = r15_2[1].d
                    int32_t rbx_3 = r8_10 - 1
                    
                    if (r8_10 == 0)
                        rbx_3 = 0
                    
                    int32_t rax_33
                    
                    if (rcx_33 s>= 0)
                        rax_33 = rbx_3
                        
                        if (rcx_33 s< rbx_3)
                            rax_33 = rcx_33
                    else
                        rax_33 = 0
                    
                    int64_t r9_6 = sx.q(rax_33)
                    
                    if (sx.q(rcx_33) + 0x7fffffff s< r9_6)
                        rbx_3 = rax_33
                    else if (sx.q(rcx_33) + 0x7fffffff s< sx.q(rbx_3))
                        rbx_3 = rcx_33 + 0x7fffffff
                    
                    int16_t* const rcx_34
                    
                    if (r8_10 == 0)
                        rcx_34 = &data_142d40450
                    else
                        rcx_34 = *r15_2
                    
                    int16_t* r14_2 = &rcx_34[r9_6]
                    int16_t* var_298 = nullptr
                    int32_t rbx_4 = rbx_3 - rax_33
                    int64_t var_290_1 = 0
                    int32_t rsi_2 = 0
                    
                    if (r14_2 != 0 && *r14_2 != 0 && rbx_4 s> 0)
                        if (rbx_4 + 1 s> 0)
                            sub_1405947f0(&var_298, rbx_4 + 1)
                            rsi_2 = var_290_1:4.d
                            rdi_1 = var_290_1.d
                            r12_1 = var_298
                        
                        rdi_1 += rbx_4 + 1
                        var_290_1.d = rdi_1
                        
                        if (rdi_1 s> rsi_2)
                            sub_140594770(&var_298)
                            rsi_2 = var_290_1:4.d
                            rdi_1 = var_290_1.d
                            r12_1 = var_298
                        
                        memcpy(r12_1, r14_2, rbx_4 * 2)
                        r12_1[sx.q(rdi_1) - 1] = 0
                    
                    r14_1 = var_220_1
                    var_298 = nullptr
                    int64_t var_290_2 = 0
                    var_238 = r12_1
                    var_230_1.d = rdi_1
                    var_230_1:4.d = rsi_2
                
                if (rdi_1 == 0)
                    rdx_32 = &data_142d40450
                    rcx_18 = 0
                else
                    rdx_32 = r12_1
                    rcx_18 = rdi_1 - 1
            else if (rdx_14 != 0)
                continue
            else
                rdx_32 = &data_142d40450
                rcx_18 = 0
            
            int32_t rax_15 = sub_1405969c0(rcx_18, rdx_32)
            int32_t var_228
            sub_140a3a4d0(r14_1, &var_228, rax_15, &var_238)
            int64_t rcx_20 = sx.q(var_228)
            void* rsi_1
            
            if (rcx_20.d != 0xffffffff)
                rsi_1 = *r14_1 + rcx_20 * 0x28
            
            if (rcx_20.d == 0xffffffff || rsi_1 == 0)
                sub_140a3ef70(r14_1, &var_258)
                sub_140596d10(var_250_1, &var_238)
                int32_t rax_16 = var_258.d
                var_250_1[2] = 0
                var_250_1[3] = 0
                var_250_1[4].d = 0xffffffff
                char var_2a8_1
                var_2a8_1.d = rax_16
                int32_t var_224
                sub_140a42890(r14_1, &var_224, rax_15, var_250_1, var_2a8_1, nullptr)
                r12_1 = var_238
                rsi_1 = *r14_1 + sx.q(var_224) * 0x28
            
            int32_t rcx_26 = 0
            int32_t var_274_1 = 1
            int32_t var_278_1 = 0
            int32_t rbx_2 = r15_2[7].d
            int32_t r8_9 = 0
            void* var_270_1 = &r15_2[4]
            int32_t var_268_2 = 0xffffffff
            var_264_1.q = 0
            
            if (rbx_2 != 0)
                void* rax_19 = r15_2[6]
                void* r9_5 = &r15_2[4]
                
                if (rax_19 != 0)
                    r9_5 = rax_19
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(rbx_2 - 1)
                int32_t rdx_21 = *r9_5
                int32_t var_264_3
                
                if (rdx_21 != 0)
                label_140a4b8ef:
                    int32_t rax_26 = neg.d(rdx_21) & rdx_21
                    uint64_t rflags_2
                    int32_t temp0_4
                    temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
                    int32_t var_274_2 = rax_26
                    int32_t rax_27
                    
                    if (rax_26 == 0)
                        rax_27 = 0x20
                    else
                        rax_27 = 0x1f - temp0_4
                    
                    int32_t var_264_2 = r8_9 - rax_27 + 0x1f
                    
                    if (r8_9 - rax_27 + 0x1f s> rbx_2)
                        var_264_3 = rbx_2
                else
                    while (true)
                        int64_t rdx_22 = sx.q(rcx_26)
                        r8_9 += 0x20
                        rcx_26 += 1
                        int32_t var_260_1 = r8_9
                        var_278_1 = rcx_26
                        
                        if (rdx_22.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_21 = *(r9_5 + (rdx_22 << 2) + 4)
                        int32_t var_268_3 = 0xffffffff
                        
                        if (rdx_21 != 0)
                            goto label_140a4b8ef
                    
                    var_264_3 = rbx_2
            
            int32_t rdx_33 = r15_2[7].d
            var_264_1 = rdx_33
            int128_t var_190_1 = 0xffffffff
            int128_t var_1a0_1 = var_278_1.o
            int32_t rdi_4 = 0xffffffff << (rdx_33 & 0x1f).b
            int32_t r8_15 = rdx_33 s>> 5
            int32_t r9_8 = rdx_33 & 0xffffffe0
            var_1f0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            int32_t var_268_4 = rdi_4
            var_208_1.o = (&r15_2[2]).o
            var_200 = var_1a0_1
            
            if (rdx_33 != rbx_2)
                void* rax_38 = r15_2[6]
                void* r10_5 = &r15_2[4]
                
                if (rax_38 != 0)
                    r10_5 = rax_38
                
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(rbx_2 - 1)
                int32_t rdx_37 = *(r10_5 + (sx.q(r8_15) << 2)) & rdi_4
                
                if (rdx_37 != 0)
                label_140a4bb38:
                    int32_t rax_44 = neg.d(rdx_37) & rdx_37
                    uint64_t rflags_3
                    int32_t temp0_6
                    temp0_6, rflags_3 = _bit_scan_reverse(rax_44)
                    int32_t rax_45
                    
                    if (rax_44 == 0)
                        rax_45 = 0x20
                    else
                        rax_45 = 0x1f - temp0_6
                    
                    var_264_1 = r9_8 - rax_45 + 0x1f
                    
                    if (r9_8 - rax_45 + 0x1f s> rbx_2)
                        var_264_1 = rbx_2
                else
                    while (true)
                        int64_t rcx_40 = sx.q(r8_15)
                        r9_8 += 0x20
                        r8_15 += 1
                        
                        if (rcx_40.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_37 = *(r10_5 + (rcx_40 << 2) + 4)
                        var_268_4 = 0xffffffff
                        
                        if (rdx_37 != 0)
                            goto label_140a4bb38
                    
                    var_264_1 = rbx_2
            
            while (true)
                int64_t rcx_42 = sx.q(var_1f0_1:4.d)
                int32_t rax_37
                
                if (rcx_42.d != (var_268_4.q u>> 0x20).d || var_200:8.q != &r15_2[4])
                    rax_37.b = 0
                else
                    rax_37.b = 1
                
                if (rax_37.b == 0 || var_208_1 != &r15_2[2])
                    rax_37.b = 1
                else
                    rax_37.b = 0
                
                if (rax_37.b == 0)
                    break
                
                int64_t* rcx_45 = rcx_42 * 0x30 + *var_208_1
                
                if (*rcx_45 == var_1e0)
                    int32_t rax_47 = rcx_45[4].d
                    void* rdi_5 = &rcx_45[3]
                    
                    if (rax_47 == 0 || rax_47 - 1 s<= 0)
                        rdi_5 = &rcx_45[1]
                    
                    int64_t rbx_5 = sx.q(*(rsi_1 + 0x18))
                    int32_t rax_49 = (rbx_5 + 1).d
                    *(rsi_1 + 0x18) = rax_49
                    
                    if (rax_49 s> *(rsi_1 + 0x1c))
                        sub_1405a4f90(rsi_1 + 0x10)
                    
                    sub_140596d10((rbx_5 << 4) + *(rsi_1 + 0x10), rdi_5)
                
                var_1f0_1.d &= not.d(var_200:4.d)
                sub_14059bdd0(&var_200)
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
            
            r14_1 = var_220_1
            break
        
        int32_t var_1c4
        var_1c0_1:8.d &= not.d(var_1c4)
        sub_14059bdd0(&var_1d0:8)
        rax_14 = var_1d8_1
    
    int16_t* rcx_53 = var_288
    
    if (rcx_53 != 0)
        sub_140a74f90(rcx_53)
    
    int16_t* rbx_6 = var_218
    
    if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    result = sub_140ae7280(&var_178)

__security_check_cookie(result_1 ^ &var_2c8)
return result
