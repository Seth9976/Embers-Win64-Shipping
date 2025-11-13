// 函数: sub_141c9d310
// 地址: 0x141c9d310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t* rsi = arg2
int64_t* var_2a0 = arg2
char result = sub_141ca6b60(rsi, 0)

if (result != 0)
    rsi[9].d

if (result == 0 || rsi[7].d + rsi[5].d + rsi[3].d + rsi[1].d - *(rsi + 0x74) == neg.d(rsi[9].d))
    result = 0
else
    int64_t var_108 = 0
    int32_t var_100_1 = 0
    int32_t var_dc_1 = 0x80
    int64_t var_f8
    __builtin_memset(&var_f8, 0, 0x1c)
    int32_t var_d8_1 = 0xffffffff
    int32_t var_d4_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = 0
    sub_140b90e20(&var_108, rsi)
    int64_t var_158 = 0
    int32_t var_150_1 = 0
    int32_t var_12c_1 = 0x80
    int64_t var_148
    __builtin_memset(&var_148, 0, 0x1c)
    int32_t var_128_1 = 0xffffffff
    int32_t var_124_1 = 0
    int64_t var_118_1 = 0
    int32_t var_110_1 = 0
    sub_140b90e20(&var_158, &rsi[2])
    int64_t var_1a8 = 0
    int32_t var_1a0_1 = 0
    int32_t var_17c_1 = 0x80
    int64_t var_198
    __builtin_memset(&var_198, 0, 0x1c)
    int32_t var_178_1 = 0xffffffff
    int32_t var_174_1 = 0
    int64_t var_168_1 = 0
    int32_t var_160_1 = 0
    sub_140b90e20(&var_1a8, &rsi[6])
    int64_t var_b8 = 0
    int32_t var_b0_1 = 0
    int32_t var_8c_1 = 0x80
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x1c)
    int32_t var_88_1 = 0xffffffff
    int32_t var_84_1 = 0
    int64_t var_78_1 = 0
    int32_t var_70_1 = 0
    sub_140b90e20(&var_b8, &rsi[4])
    int64_t* r13_1 = nullptr
    int32_t i_5 = 0
    int64_t* var_2f0 = nullptr
    int32_t r12_1 = 0
    int64_t var_2e8_1 = 0
    int32_t var_318
    void* var_310
    double var_2d8[0x2]
    int64_t var_2a8
    double zmm2_1[0x2]
    
    if (var_100_1 != var_d4_1)
        var_2e8_1.d = 1
        sub_1405c5060(&var_2f0)
        r13_1 = var_2f0
        int32_t r8 = 0
        int64_t* rcx_6 = &r13_1[2]
        var_318 = 0
        int32_t var_314_1 = 1
        int32_t var_308_1 = 0xffffffff
        __builtin_memset(r13_1, 0, 0x1c)
        *(rcx_6 + 0x1c) = 0x80
        int64_t* rax_8 = rcx_6[2]
        int64_t var_304_1 = 0
        
        if (rax_8 != 0)
            rcx_6 = rax_8
        
        var_310 = &var_f8
        *rcx_6 = 0
        rcx_6[1] = 0
        int32_t rcx_7 = 0
        r13_1[6].d = 0xffffffff
        *(r13_1 + 0x34) = 0
        r13_1[8] = 0
        r13_1[9].d = 0
        int32_t var_e0
        
        if (var_e0 != 0)
            int64_t* r9 = &var_f8
            int64_t* var_e8
            
            if (var_e8 != 0)
                r9 = var_e8
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(var_e0 - 1)
            int32_t rdx_7 = *r9
            
            if (rdx_7 != 0)
            label_141c9d627:
                int32_t rax_16 = neg.d(rdx_7) & rdx_7
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_16)
                int32_t var_314_2 = rax_16
                int32_t rax_17
                
                if (rax_16 == 0)
                    rax_17 = 0x20
                else
                    rax_17 = 0x1f - temp0_2
                
                int32_t rax_18 = r8 - rax_17 + 0x1f
                
                if (rax_18 s> var_e0)
                    rax_18 = var_e0
                
                var_304_1.d = rax_18
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_7)
                    r8 += 0x20
                    rcx_7 += 1
                    var_304_1:4.d = r8
                    var_318 = rcx_7
                    
                    if (rdx_8.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        var_304_1.d = var_e0
                        break
                    
                    rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                    var_308_1 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_141c9d627
        
        zmm2_1 = var_308_1.o
        var_304_1.d = var_e0
        double var_280_1[0x2] = zmm2_1
        double var_290_1[0x2] = var_318.o
        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        var_2d8 = (&var_108).o
        int64_t var_2b8_1 = zmm2_1.q
        
        while (true)
            int64_t rax_19 = sx.q(var_290_1[1]:4.d)
            double rbx_1 = var_2d8[0]
            
            if (rax_19.d == ((0xffffffff << (var_e0.b & 0x1f)).q u>> 0x20).d
                    && var_290_1[0] == &var_f8 && rbx_1 == &var_108)
                break
            
            int64_t rbx_3 = *(*rbx_1 + rax_19 * 0x10)
            int32_t rax_21 = arg1[0xb].d
            var_2a8 = rbx_3
            int64_t* rdx_15
            
            if (rax_21 == *(arg1 + 0x84))
            label_141c9d74e:
                rdx_15 = nullptr
            else
                int32_t rax_23 = sub_140b5ead0(rbx_3.d) + var_2a8:4.d
                void* r8_2 = &arg1[0x11]
                void* rcx_12 = *(r8_2 + 8)
                
                if (rcx_12 != 0)
                    r8_2 = rcx_12
                
                int32_t rax_25 = *(r8_2 + (((sx.q(arg1[0x13].d) - 1) & sx.q(rax_23)) << 2))
                
                if (rax_25 == 0xffffffff)
                label_141c9d74e_1:
                    rdx_15 = nullptr
                else
                    while (true)
                        rdx_15 = (sx.q(rax_25) << 5) + arg1[0xa]
                        
                        if (*rdx_15 == rbx_3)
                            break
                        
                        rax_25 = rdx_15[3].d
                        
                        if (rax_25 == 0xffffffff)
                            goto label_141c9d74e_2
                    
                    if (rax_25 == 0xffffffff)
                    label_141c9d74e_2:
                        rdx_15 = nullptr
            
            int64_t** rax_26 = &rdx_15[1]
            
            if (rdx_15 == 0)
                rax_26 = nullptr
            
            if (rax_26 != 0)
                sub_14178c060(r13_1, rax_26)
            
            var_290_1[1].d &= not.d(var_2d8[1]:4.d)
            sub_14059bdd0(&var_2d8[1])
        
        r12_1 = var_2e8_1:4.d
        i_5 = var_2e8_1.d
    
    if (var_150_1 != var_124_1)
        int64_t i_6 = sx.q(i_5)
        i_5 = (i_6 + 1).d
        var_2e8_1.d = i_5
        
        if (i_5 s> r12_1)
            sub_1405c5060(&var_2f0)
            r12_1 = var_2e8_1:4.d
            i_5 = var_2e8_1.d
            r13_1 = var_2f0
        
        int32_t var_314_3 = 1
        var_318 = 0
        int32_t r8_4 = 0
        void* rsi_3 = &r13_1[i_6 * 0xa]
        int32_t var_308_3 = 0xffffffff
        void* rcx_16 = rsi_3 + 0x10
        int64_t var_304_2 = 0
        __builtin_memset(rsi_3, 0, 0x1c)
        *(rcx_16 + 0x1c) = 0x80
        void* rax_30 = *(rcx_16 + 0x10)
        
        if (rax_30 != 0)
            rcx_16 = rax_30
        
        var_310 = &var_148
        *rcx_16 = 0
        *(rcx_16 + 8) = 0
        int32_t rcx_17 = 0
        *(rsi_3 + 0x30) = 0xffffffff
        *(rsi_3 + 0x34) = 0
        *(rsi_3 + 0x40) = 0
        *(rsi_3 + 0x48) = 0
        int32_t var_130
        
        if (var_130 != 0)
            int64_t* r9_1 = &var_148
            int64_t* var_138
            
            if (var_138 != 0)
                r9_1 = var_138
            
            int32_t temp7_1
            int32_t temp8_1
            temp7_1:temp8_1 = sx.q(var_130 - 1)
            int32_t rdx_20 = *r9_1
            
            if (rdx_20 != 0)
            label_141c9d8a7:
                int32_t rax_38 = neg.d(rdx_20) & rdx_20
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_38)
                int32_t var_314_4 = rax_38
                int32_t rax_39
                
                if (rax_38 == 0)
                    rax_39 = 0x20
                else
                    rax_39 = 0x1f - temp0_4
                
                int32_t rax_40 = r8_4 - rax_39 + 0x1f
                
                if (rax_40 s> var_130)
                    rax_40 = var_130
                
                var_304_2.d = rax_40
            else
                while (true)
                    int64_t rdx_21 = sx.q(rcx_17)
                    r8_4 += 0x20
                    rcx_17 += 1
                    var_304_2:4.d = r8_4
                    var_318 = rcx_17
                    
                    if (rdx_21.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                        var_304_2.d = var_130
                        break
                    
                    rdx_20 = *(r9_1 + (rdx_21 << 2) + 4)
                    var_308_3 = 0xffffffff
                    
                    if (rdx_20 != 0)
                        goto label_141c9d8a7
        
        zmm2_1 = var_308_3.o
        var_304_2.d = var_130
        double var_290_2[0x2] = var_318.o
        double var_280_2[0x2] = zmm2_1
        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        var_2d8 = (&var_158).o
        int64_t var_2b8_2 = zmm2_1.q
        
        while (true)
            int64_t rax_41 = sx.q(var_290_2[1]:4.d)
            double rbx_4 = var_2d8[0]
            
            if (rax_41.d == ((0xffffffff << (var_130.b & 0x1f)).q u>> 0x20).d
                    && var_290_2[0] == &var_148 && rbx_4 == &var_158)
                break
            
            int64_t rbx_6 = *(*rbx_4 + rax_41 * 0x10)
            int32_t rax_43 = arg1[0x15].d
            var_2a8 = rbx_6
            int64_t* rdx_28
            
            if (rax_43 == *(arg1 + 0xd4))
            label_141c9d9de:
                rdx_28 = nullptr
            else
                int32_t rax_45 = sub_140b5ead0(rbx_6.d) + var_2a8:4.d
                void* r8_6 = &arg1[0x1b]
                void* rcx_22 = *(r8_6 + 8)
                
                if (rcx_22 != 0)
                    r8_6 = rcx_22
                
                int32_t rax_47 = *(r8_6 + (((sx.q(arg1[0x1d].d) - 1) & sx.q(rax_45)) << 2))
                
                if (rax_47 == 0xffffffff)
                label_141c9d9de_1:
                    rdx_28 = nullptr
                else
                    while (true)
                        rdx_28 = (sx.q(rax_47) << 5) + arg1[0x14]
                        
                        if (*rdx_28 == rbx_6)
                            break
                        
                        rax_47 = rdx_28[3].d
                        
                        if (rax_47 == 0xffffffff)
                            goto label_141c9d9de_2
                    
                    if (rax_47 == 0xffffffff)
                    label_141c9d9de_2:
                        rdx_28 = nullptr
            
            int64_t** rax_48 = &rdx_28[1]
            
            if (rdx_28 == 0)
                rax_48 = nullptr
            
            if (rax_48 != 0)
                sub_14178c060(rsi_3, rax_48)
            
            var_290_2[1].d &= not.d(var_2d8[1]:4.d)
            sub_14059bdd0(&var_2d8[1])
        
        rsi = var_2a0
        r13_1 = var_2f0
    
    int32_t var_2e0
    
    if (var_1a0_1 != var_174_1)
        int64_t i_7 = sx.q(i_5)
        i_5 = (i_7 + 1).d
        var_2e8_1.d = i_5
        
        if (i_5 s> r12_1)
            sub_1405c5060(&var_2f0)
            i_5 = var_2e8_1.d
            r13_1 = var_2f0
        
        int32_t var_314_5 = 1
        var_318 = 0
        void* rdi_7 = &r13_1[i_7 * 0xa]
        int32_t var_308_5 = 0xffffffff
        void* rcx_26 = rdi_7 + 0x10
        int64_t var_304_3 = 0
        int32_t r8_8 = 0
        __builtin_memset(rdi_7, 0, 0x1c)
        *(rcx_26 + 0x1c) = 0x80
        void* rax_52 = *(rcx_26 + 0x10)
        
        if (rax_52 != 0)
            rcx_26 = rax_52
        
        var_310 = &var_198
        *rcx_26 = 0
        *(rcx_26 + 8) = 0
        int32_t rcx_27 = 0
        *(rdi_7 + 0x30) = 0xffffffff
        *(rdi_7 + 0x34) = 0
        *(rdi_7 + 0x40) = 0
        *(rdi_7 + 0x48) = 0
        int32_t var_180
        
        if (var_180 != 0)
            int64_t* r9_2 = &var_198
            int64_t* var_188
            
            if (var_188 != 0)
                r9_2 = var_188
            
            int32_t temp9_1
            int32_t temp10_1
            temp9_1:temp10_1 = sx.q(var_180 - 1)
            int32_t rdx_33 = *r9_2
            
            if (rdx_33 != 0)
            label_141c9db38:
                int32_t rax_60 = neg.d(rdx_33) & rdx_33
                uint64_t rflags_3
                int32_t temp0_6
                temp0_6, rflags_3 = _bit_scan_reverse(rax_60)
                int32_t var_314_6 = rax_60
                int32_t rax_61
                
                if (rax_60 == 0)
                    rax_61 = 0x20
                else
                    rax_61 = 0x1f - temp0_6
                
                int32_t rax_62 = r8_8 - rax_61 + 0x1f
                
                if (rax_62 s> var_180)
                    rax_62 = var_180
                
                var_304_3.d = rax_62
            else
                while (true)
                    int64_t rdx_34 = sx.q(rcx_27)
                    r8_8 += 0x20
                    rcx_27 += 1
                    var_304_3:4.d = r8_8
                    var_318 = rcx_27
                    
                    if (rdx_34.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                        var_304_3.d = var_180
                        break
                    
                    rdx_33 = *(r9_2 + (rdx_34 << 2) + 4)
                    var_308_5 = 0xffffffff
                    
                    if (rdx_33 != 0)
                        goto label_141c9db38
        
        zmm2_1 = var_308_5.o
        double var_290_3[0x2] = var_318.o
        double var_280_3[0x2] = zmm2_1
        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        var_2d8 = (&var_1a8).o
        int64_t var_2b8_3 = zmm2_1.q
        
        while (true)
            int64_t rax_63 = sx.q(var_290_3[1]:4.d)
            double r8_10 = var_2d8[0]
            
            if (rax_63.d == var_180 && var_290_3[0] == &var_198 && r8_10 == &var_1a8)
                break
            
            sub_141c9ff30(&arg1[0x1e], &var_2e0, *(*r8_10 + rax_63 * 0x10))
            int64_t rax_65 = sx.q(var_2e0)
            void* const rcx_32
            
            if (rax_65.d == 0xffffffff)
                rcx_32 = nullptr
            else
                rcx_32 = (rax_65 << 5) + arg1[0x1e]
            
            int64_t* rsi_4 = rcx_32 + 8
            
            if (rcx_32 == 0)
                rsi_4 = nullptr
            
            if (rsi_4 != 0)
                int32_t rcx_34 = *(rdi_7 + 8) - *(rdi_7 + 0x34)
                int32_t rbx_8 = rsi_4[1].d + rcx_34
                
                if (rbx_8 s> rcx_34)
                    sub_1409d96c0(rdi_7, rbx_8)
                    int32_t rdx_38
                    
                    if (rbx_8 u< 4)
                        rdx_38 = 1
                    else
                        uint32_t rbx_9 = rbx_8 u>> 1
                        uint64_t rflags_4
                        int32_t temp0_8
                        temp0_8, rflags_4 = _bit_scan_reverse(rbx_9 + 8)
                        int32_t rcx_36
                        
                        if (rbx_9 == 0xfffffff8)
                            rcx_36 = 0x20
                        else
                            rcx_36 = 0x1f - temp0_8
                        
                        int32_t rcx_38 = rcx_36 << 0x1a s>> 0x1f
                        uint64_t rflags_5
                        char temp0_9
                        temp0_9, rflags_5 = _bit_scan_reverse(rbx_9 + 7)
                        char rdx_37
                        
                        if (rcx_38 == 0)
                            rdx_37 = 0x20
                        else
                            rdx_37 = 0x1f - temp0_9
                        
                        rdx_38 = 1 << ((not.d(rcx_38)).b & (0x20 - rdx_37))
                    
                    int32_t rax_69 = *(rdi_7 + 0x48)
                    
                    if (rax_69 == 0 || rax_69 s< rdx_38)
                        *(rdi_7 + 0x48) = rdx_38
                        sub_1408370c0(rdi_7)
                
                int64_t* i = *rsi_4
                
                for (void* rsi_5 = &i[sx.q(rsi_4[1].d)]; i != rsi_5; i = &i[1])
                    sub_140946410(rdi_7, &var_2a8, i, nullptr)
            
            var_290_3[1].d &= not.d(var_2d8[1]:4.d)
            sub_14059bdd0(&var_2d8[1])
        
        rsi = var_2a0
        r13_1 = var_2f0
    
    if (var_b0_1 != var_84_1)
        int32_t rax_74 = sub_141c98260(&var_2f0, 1)
        r13_1 = var_2f0
        int32_t var_90
        int32_t rdi_8 = var_90
        var_318 = 0
        int32_t var_314_7 = 1
        var_310 = &var_a8
        int32_t var_308_6 = 0xffffffff
        int64_t var_304_4 = 0
        
        if (rdi_8 != 0)
            sub_14059bdd0(&var_318)
            rdi_8 = var_90
        
        zmm2_1 = var_308_6.o
        double var_290_4[0x2] = var_318.o
        double var_280_4[0x2] = zmm2_1
        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        var_2d8 = (&var_b8).o
        int64_t var_2b8_4 = zmm2_1.q
        
        while (true)
            int64_t rax_75 = sx.q(var_290_4[1]:4.d)
            double r8_15 = var_2d8[0]
            
            if (rax_75.d == rdi_8 && var_290_4[0] == &var_a8 && r8_15 == &var_b8)
                break
            
            sub_1409bd4b0(arg1, &var_2e0, *(*r8_15 + rax_75 * 0x10))
            int64_t rax_77 = sx.q(var_2e0)
            void* rax_79
            
            if (rax_77.d != 0xffffffff)
                rax_79 = *arg1 + rax_77 * 0x18
            
            int64_t* rax_80
            
            if (rax_77.d == 0xffffffff || rax_79 == 0)
                rax_80 = nullptr
            else
                rax_80 = *(rax_79 + 8)
            
            var_2a0 = rax_80
            
            if (rax_80 != 0)
                sub_140946410(&r13_1[sx.q(rax_74) * 0xa], &var_2a8, &var_2a0, nullptr)
            
            var_290_4[1].d &= not.d(var_2d8[1]:4.d)
            sub_14059bdd0(&var_2d8[1])
        
        i_5 = var_2e8_1.d
    
    *(rsi + 0x74)
    
    if (rsi[9].d != *(rsi + 0x74))
        int64_t rcx_51 = sx.q(sub_141c98260(&var_2f0, 1))
        var_318 = 0
        int32_t var_314_8 = 1
        int32_t var_308_7 = 0xffffffff
        int64_t var_304_5 = 0
        void* rcx_52 = &rsi[0xa]
        void* r13_5 = &var_2f0[rcx_51 * 0xa]
        var_310 = rcx_52
        
        if (rsi[0xd].d != 0)
            sub_14059bdd0(&var_318)
            rcx_52 = var_310
        
        zmm2_1 = var_308_7.o
        double var_280_5[0x2] = zmm2_1
        double var_290_5[0x2] = var_318.o
        var_318.o = (&rsi[8]).o
        uint32_t rax_87 = (zmm2_1[0] u>> 0x20).d
        int64_t var_2f8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
        var_308_7.o = var_290_5
        
        if (rax_87 s>= *(rcx_52 + 0x18))
            i_5 = var_2e8_1.d
            r13_1 = var_2f0
        else
            int32_t i_4
            int32_t i_1 = i_4
            int64_t* rdi_9 = &arg1[0x28]
            int64_t* var_268_1 = rdi_9
            
            do
                int64_t rdx_43 = sx.q(i_1) * 5
                int64_t rcx_54 = *var_318.q
                int64_t* rbx_15 = *(rcx_54 + (rdx_43 << 3))
                void* r14_1 = rcx_54 + (rdx_43 << 3)
                var_2a0 = rbx_15
                sub_141c9ff30(rdi_9, &var_2e0, rbx_15)
                int64_t rax_90 = sx.q(var_2e0)
                void* const rcx_58
                
                if (rax_90.d == 0xffffffff)
                    rcx_58 = nullptr
                else
                    rcx_58 = (rax_90 << 5) + *rdi_9
                
                int64_t*** rax_91 = rcx_58 + 8
                
                if (rcx_58 == 0)
                    rax_91 = nullptr
                
                if (rax_91 != 0)
                    int64_t** rsi_6 = *rax_91
                    int64_t r15_1 = 0
                    uint64_t r12_3 = sx.q(rax_91[1].d) << 3 u>> 3
                    
                    if (rsi_6 u> &rsi_6[rax_91[1]])
                        r12_3 = 0
                    
                    if (r12_3 != 0)
                        int32_t rdi_10 = var_2a0:4.d
                        
                        do
                            int64_t* rcx_59 = *rsi_6
                            var_2a0 = rcx_59
                            
                            if (rcx_59 != 0)
                                if (*(r14_1 + 0x18) != 0)
                                    int64_t* var_270
                                    sub_141ca03d0(&rcx_59[5], &var_270, rbx_15)
                                    int64_t* rax_109 = var_270
                                    
                                    if (rax_109 != 0)
                                        int16_t* rdx_47
                                        
                                        if (*(r14_1 + 0x10) == 0)
                                            rdx_47 = &data_142d40450
                                        else
                                            rdx_47 = *(r14_1 + 8)
                                        
                                        int16_t* const rcx_67
                                        
                                        if (rax_109[1].d == 0)
                                            rcx_67 = &data_142d40450
                                        else
                                            rcx_67 = *rax_109
                                        
                                        if (sub_140a54510(rcx_67, rdx_47) == 0)
                                            sub_140946410(r13_5, &var_2a8, &var_2a0, nullptr)
                                else
                                    int64_t* rax_94 = sub_14098ef70(&rcx_59[5])
                                    int32_t r8_20 = 0
                                    int32_t j_2 = rax_94[1].d
                                    int32_t j = j_2
                                    int64_t r10_2 = *rax_94
                                    
                                    if (j_2 s> 0)
                                        do
                                            int32_t rcx_62 = j & 0x80000001
                                            
                                            if (rcx_62 s< 0)
                                                rcx_62 = ((rcx_62 - 1) | 0xfffffffe) + 1
                                            
                                            int32_t temp16_1
                                            int32_t temp17_1
                                            temp16_1:temp17_1 = sx.q(j)
                                            int32_t j_1 = (temp17_1 - temp16_1) s>> 1
                                            j = j_1
                                            int32_t rax_98 = j_1 + r8_20
                                            int64_t rcx_65 = sx.q(rax_98) * 3
                                            int32_t rax_100 = *(r10_2 + (rcx_65 << 3))
                                            int32_t rax_101 = rax_100 - rbx_15.d
                                            
                                            if (rax_100 == rbx_15.d)
                                                rax_101 = *(r10_2 + (rcx_65 << 3) + 4) - rdi_10
                                            
                                            if (rax_101 s< 0)
                                                r8_20 = rax_98 + rcx_62
                                        while (j s> 0)
                                    
                                    int32_t rax_105
                                    int64_t rcx_66
                                    
                                    if (r8_20 s< j_2)
                                        rcx_66 = sx.q(r8_20) * 3
                                        int32_t rax_104 = rbx_15.d
                                        rax_105 = rax_104 - *(r10_2 + (rcx_66 << 3))
                                        
                                        if (rax_104 == *(r10_2 + (rcx_66 << 3)))
                                            rax_105 = rdi_10 - *(r10_2 + (rcx_66 << 3) + 4)
                                    
                                    int64_t rax_108
                                    
                                    if (r8_20 s>= j_2 || rax_105 s< 0 || r8_20 == 0xffffffff)
                                        rax_108 = 0
                                    else
                                        rax_108 = r10_2 + ((rcx_66 + 1) << 3)
                                    
                                    if (rax_108 != 0)
                                        sub_140946410(r13_5, &var_2a8, &var_2a0, nullptr)
                            
                            rsi_6 = &rsi_6[1]
                            r15_1 += 1
                        while (r15_1 != r12_3)
                        
                        rdi_9 = var_268_1
                
                var_304_5:4.d &= not.d(var_310:4.d)
                sub_14059bdd0(&var_310)
                i_1 = i_4
            while (i_1 s< *(var_308_7.q + 0x18))
            
            i_5 = var_2e8_1.d
            r13_1 = var_2f0
    
    bool cond:3_1 = i_5 == 0
    
    if (i_5 s> 0)
        int64_t var_248 = 0
        int64_t* r15_2 = r13_1
        int32_t var_240_1 = 0
        int32_t var_21c_1 = 0x80
        int64_t var_238
        __builtin_memset(&var_238, 0, 0x1c)
        int32_t var_218_1 = 0xffffffff
        int32_t var_214_1 = 0
        int64_t var_208_1 = 0
        int32_t var_200_1 = 0
        
        if (i_5 s> 1)
            sub_140cd48b0(&var_248, r13_1)
            int32_t rsi_7 = 1
            r15_2 = &var_248
            
            if (i_5 s> 1)
                int128_t zmm6
                int128_t var_58_1 = zmm6
                
                while (var_240_1 - var_214_1 s> 0)
                    uint64_t var_1f8 = 0
                    int32_t var_1f0_1 = 0
                    int32_t var_1cc_1 = 0x80
                    int64_t var_1e8_1
                    __builtin_memset(&var_1e8_1, 0, 0x1c)
                    int32_t var_1c8_1 = 0xffffffff
                    int32_t var_1c4_1 = 0
                    int64_t var_1b8_1 = 0
                    int32_t var_1b0_1 = 0
                    sub_140cd48b0(&var_1f8, &r13_1[sx.q(rsi_7) * 0xa])
                    
                    if (var_1f0_1 - var_1c4_1 s< var_240_1 - var_214_1)
                        int64_t var_1d8_1
                        int128_t zmm4_1 = var_1d8_1.o
                        int128_t zmm5_1 = var_1c8_1.o
                        zmm6 = var_1b8_1.o
                        var_1f8.o = var_248.o
                        int64_t var_228_1
                        var_1d8_1.o = var_228_1.o
                        var_1e8_1.o = var_238.o
                        var_1b8_1.o = var_208_1.o
                        var_1c8_1.o = var_218_1.o
                        var_248.o = var_1f8.o
                        var_238.o = var_1e8_1.o
                        var_228_1.o = zmm4_1
                        var_218_1.o = zmm5_1
                        var_208_1.o = zmm6
                    
                    void* rcx_74 = &var_238
                    var_310 = &var_238
                    var_318 = 0
                    int32_t var_314_9 = 1
                    int32_t var_308_8 = 0xffffffff
                    int64_t var_304_6 = 0
                    int32_t var_220
                    
                    if (var_220 != 0)
                        sub_14059bdd0(&var_318)
                        rcx_74 = var_310
                    
                    zmm2_1 = var_308_8.o
                    int64_t* rdi_11 = &var_248
                    double var_280_6[0x2] = zmm2_1
                    int64_t* var_2b0_1 = &var_248
                    double var_290_6[0x2] = var_318.o
                    var_2d8 = (&var_248).o
                    uint32_t rax_120 = (zmm2_1[0] u>> 0x20).d
                    int64_t var_2b8_5 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                    
                    if (rax_120 s< *(rcx_74 + 0x18))
                        int32_t rbx_16 = var_290_6[1]:4.d
                        
                        while (true)
                            if (*sub_1408296b0(&var_1f8, &var_2a8, 
                                    *(*var_2d8[0] + sx.q(rbx_16) * 0x10)) == 0xffffffff)
                                sub_1418ebff0(rdi_11, rbx_16)
                            
                            var_290_6[1].d &= not.d(var_2d8[1]:4.d)
                            sub_14059bdd0(&var_2d8[1])
                            rbx_16 = var_290_6[1]:4.d
                            
                            if (rbx_16 s>= *(var_290_6[0] i+ 0x18))
                                break
                            
                            rdi_11 = var_2b0_1
                    
                    int32_t var_1b0_2 = 0
                    
                    if (var_1b8_1 != 0)
                        sub_140a74f90(var_1b8_1)
                    
                    sub_14100e680(&var_1f8)
                    rsi_7 += 1
                    
                    if (rsi_7 s>= i_5)
                        break
        
        int32_t rdx_55 = r15_2[5].d
        var_318 = 0
        var_310 = &r15_2[2]
        int32_t var_314_10 = 1
        int32_t var_308_9 = 0xffffffff
        int64_t var_304_7 = 0
        
        if (rdx_55 != 0)
            sub_14059bdd0(&var_318)
            rdx_55 = r15_2[5].d
        
        zmm2_1 = var_308_9.o
        var_304_7.d = rdx_55
        double var_290_7[0x2] = var_318.o
        double var_280_7[0x2] = zmm2_1
        zmm2_1 = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
        var_2d8 = r15_2.o
        int64_t var_2b8_6 = zmm2_1.q
        
        while (true)
            int64_t rcx_84 = sx.q(var_290_7[1]:4.d)
            double rax_126 = var_2d8[0]
            
            if (rcx_84.d == ((0xffffffff << (rdx_55.b & 0x1f)).q u>> 0x20).d
                    && var_290_7[0] == &r15_2[2] && rax_126 == r15_2)
                int32_t var_200_2 = 0
                
                if (var_208_1 != 0)
                    sub_140a74f90(var_208_1)
                
                sub_14100e680(&var_248)
                cond:3_1 = i_5 == 0
                break
            
            void* rbx_17 = *(*rax_126 + rcx_84 * 0x10)
            
            if (*sub_141ca0140(arg3, &var_2a8, *(rbx_17 + 8)) == 0xffffffff
                    && (*arg4)(*(arg4 + 8), rbx_17) == 0)
                int32_t var_200_3 = 0
                
                if (var_208_1 != 0)
                    sub_140a74f90(var_208_1)
                
                sub_14100e680(&var_248)
                void* rbx_19 = &r13_1[8]
                int32_t i_2
                
                do
                    *(rbx_19 + 8) = 0
                    int64_t rcx_106 = *rbx_19
                    
                    if (rcx_106 != 0)
                        sub_140a74f90(rcx_106)
                    
                    sub_14100e680(rbx_19 - 0x40)
                    rbx_19 += 0x50
                    i_2 = i_5
                    i_5 -= 1
                while (i_2 != 1)
                goto label_141c9e4c3
            
            var_290_7[1].d &= not.d(var_2d8[1]:4.d)
            sub_14059bdd0(&var_2d8[1])
    
    if (not(cond:3_1))
        void* rbx_18 = &r13_1[8]
        int32_t i_3
        
        do
            *(rbx_18 + 8) = 0
            int64_t rcx_91 = *rbx_18
            
            if (rcx_91 != 0)
                sub_140a74f90(rcx_91)
            
            sub_14100e680(rbx_18 - 0x40)
            rbx_18 += 0x50
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
    
label_141c9e4c3:
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    int32_t var_70_2 = 0
    
    if (var_78_1 != 0)
        sub_140a74f90(var_78_1)
    
    sub_140a627d0(&var_b8)
    int32_t var_160_2 = 0
    
    if (var_168_1 != 0)
        sub_140a74f90(var_168_1)
    
    sub_140a627d0(&var_1a8)
    int32_t var_110_2 = 0
    
    if (var_118_1 != 0)
        sub_140a74f90(var_118_1)
    
    sub_140a627d0(&var_158)
    int32_t var_c0_2 = 0
    
    if (var_c8_1 != 0)
        sub_140a74f90(var_c8_1)
    
    sub_140a627d0(&var_108)
    result = 1

__security_check_cookie(rax_1 ^ &var_338)
return result
