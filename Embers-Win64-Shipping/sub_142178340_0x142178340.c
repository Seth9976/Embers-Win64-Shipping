// 函数: sub_142178340
// 地址: 0x142178340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount = arg1
int64_t performanceCount_3 = arg1
sub_140b33630("ServerReplicateActors")
int32_t r14

if (*(performanceCount_3 + 0x98) != 0)
    sub_142164730(&data_143a2ecc8)
    void* rax_1
    double zmm6_1[0x2]
    rax_1, zmm6_1 = sub_140b3cdd0()
    char rax_2 = sub_140b40280()
    uint128_t zmm11 = 0x4170000000000000
    data_143f3bc4c = rax_2
    int32_t var_178_1
    int64_t performanceCount_1
    uint128_t performanceCount_4
    
    if (rax_2 == 0)
        performanceCount_4 = zx.o(performanceCount)
        var_178_1 = performanceCount.d
    else
        data_143f3bc48 = 0
        data_143f3bc50 = (zx.o(0)).q
        data_143f4cf50 = (zx.o(0)).q
        data_143f4cf58 = (zx.o(0)).q
        data_143f4cf40 = 0
        QueryPerformanceCounter(&performanceCount_1)
        performanceCount_4.q = float.d(performanceCount_1)
        var_178_1 = data_143f4c9ac
        performanceCount_4.q = performanceCount_4.q f* data_143d796f8
        performanceCount_4.q = performanceCount_4.q f+ zmm11.q
    
    data_143f4cf4c = *(performanceCount_3 + 0x98)
    int64_t* rcx_2 = *(performanceCount_3 + 0x6e8)
    double var_48_1[0x2] = zmm6_1
    uint128_t zmm0_1
    
    if (rcx_2 == 0)
        *(performanceCount_3 + 0x418) += 1
        r14 = 0
        int32_t var_17c = 0
        int32_t rax_7 = sub_1421798e0(performanceCount_3, arg2)
        int64_t r15_1 = sx.q(rax_7)
        int32_t var_11c_1 = r15_1.d
        
        if (rax_7 != 0)
            void* rax_8
            int64_t r8_2
            float zmm0_2
            rax_8, r8_2, zmm0_2 = sub_142437e30(*(performanceCount_3 + 0x140), 0, 1)
            int64_t* rcx_5 = data_143f5b298
            r8_2.b = 1
            void* rbx_1 = rax_8
            performanceCount_1.b = 0
            int64_t rdx_2 = *rcx_5
            (*(rdx_2 + 0x2b0))(rcx_5, rdx_2, r8_2)
            
            if (zmm0_2 != 0f)
                zmm6_1 = 0x3f800000
                zmm6_1[0].d = 1f / zmm0_2
                performanceCount_1.b = arg2[0].d f> zmm6_1[0].d * 1.20000005f
            else
                zmm6_1 = arg2
            
            void* rax_9 = *(performanceCount_3 + 0x6f0)
            int64_t* var_1c8 = nullptr
            int32_t i_5 = 0
            int32_t rdx_4 = *(rax_9 + 0x58) - *(rax_9 + 0x84)
            
            if (rdx_4 s> 0)
                sub_1405c5570(&var_1c8, rdx_4)
            
            float zmm7_1[0x4]
            uint128_t zmm9_1
            zmm7_1, zmm9_1, performanceCount_4, zmm11 =
                sub_142179300(performanceCount_3, &var_1c8, zmm6_1)
            char arg_20 = 0
            char* var_128_1 = &arg_20
            void*** (* var_130)() = j_sub_140597fc0
            void* rax_10 = sub_140a756e0(&var_130, &data_143958018)
            int64_t* r12_1 = var_1c8
            int64_t* var_138_1 = r12_1
            int64_t* var_170 = rax_10 + 0x10
            int64_t var_168_1 = *(rax_10 + 0x10)
            int64_t rax_12 = *(rax_10 + 0x20)
            char var_158_1 = 0
            int64_t rax_13 = *(rax_10 + 0x28)
            *(rax_10 + 0x28) = &var_170
            int32_t rcx_10 = 0
            int64_t* rax_14 = var_170
            int32_t var_1d8_1 = 0
            rax_14[4].d += 1
            int32_t rax_15 = *(performanceCount_3 + 0x98)
            int64_t var_1e8
            
            if (rax_15 s> 0)
                int64_t r14_1 = r15_1
                int64_t rsi_1 = 0
                var_1e8 = r15_1
                int32_t i_4 = i_5
                uint128_t var_78_1 = zmm9_1
                int64_t var_140_1 = 0
                int32_t i_6 = i_4
                
                while (true)
                    int64_t* r13_1 = *(*(performanceCount_3 + 0x90) + (rsi_1 << 3))
                    int64_t* var_1a8
                    double var_190[0x2]
                    
                    if (data_143f4d278 == 2)
                        int32_t rcx_11 = 0
                        var_1c8:4.d = 1
                        var_1c8.d = 0
                        int32_t r11_1 = r13_1[0x292].d
                        void* r9_1 = &r13_1[0x28f]
                        int32_t r8_3 = 0
                        void* var_1c0_1 = r9_1
                        int32_t var_1b8_1 = 0xffffffff
                        int64_t var_1b4_1 = 0
                        
                        if (r11_1 != 0)
                            void* rax_17 = *(r9_1 + 0x10)
                            
                            if (rax_17 != 0)
                                r9_1 = rax_17
                            
                            int32_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = sx.q(r11_1 - 1)
                            int32_t rdx_8 = *r9_1
                            
                            if (rdx_8 != 0)
                            label_1421786ab:
                                int32_t rax_24 = neg.d(rdx_8) & rdx_8
                                uint64_t rflags_1
                                int32_t temp0_1
                                temp0_1, rflags_1 = _bit_scan_reverse(rax_24)
                                var_1c8:4.d = rax_24
                                int32_t rax_25
                                
                                if (rax_24 == 0)
                                    rax_25 = 0x20
                                else
                                    rax_25 = 0x1f - temp0_1
                                
                                var_1b4_1.d = r8_3 - rax_25 + 0x1f
                                
                                if (r8_3 - rax_25 + 0x1f s> r11_1)
                                    var_1b4_1.d = r11_1
                            else
                                while (true)
                                    int64_t rdx_9 = sx.q(rcx_11)
                                    r8_3 += 0x20
                                    rcx_11 += 1
                                    var_1b4_1:4.d = r8_3
                                    var_1c8.d = rcx_11
                                    
                                    if (rdx_9.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                                    var_1b8_1 = 0xffffffff
                                    
                                    if (rdx_8 != 0)
                                        goto label_1421786ab
                                
                                var_1b4_1.d = r11_1
                        
                        double zmm4_1[0x2] = var_1b8_1.o
                        void* var_a0_1 = &r13_1[0x28d]
                        zmm0_1 = var_1c8.o
                        var_1a8 = &r13_1[0x28d]
                        var_190 = zmm4_1
                        int16_t var_e0_1 = 0
                        void* rax_27 = zmm0_1.q
                        uint128_t var_108_1 = zmm0_1
                        float var_118[0x4] = var_1a8.o
                        double rcx_13 = zmm4_1[0]
                        zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
                        uint128_t var_a8 = zmm0_1
                        uint128_t var_f8_1 = zmm0_1
                        
                        if ((rcx_13 u>> 0x20).d s< *(rax_27 + 0x18))
                            int32_t i = var_108_1:0xc.d
                            
                            do
                                void* rcx_16 = *((sx.q(i) << 5) + *var_118[0].q + 8)
                                void* rdx_12 = *(rcx_16 + 0x58)
                                
                                if (rdx_12 != 0)
                                    sub_141fd0580(rcx_16, (*(rdx_12 + 0x70)).d)
                                
                                var_108_1:8.d &= not.d(var_118[3])
                                sub_14059bdd0(&var_118[2])
                                i = var_108_1:0xc.d
                            while (i s< *(var_108_1.q + 0x18))
                            
                            if (var_e0_1.b != 0 && var_e0_1:1.b != 0)
                                sub_1405b6520(&r13_1[0x28d], r13_1[0x28e].d - *(r13_1 + 0x149c), 1)
                        
                        rbx_1 = rax_8
                        rcx_10 = var_1d8_1
                    
                    if (rsi_1 s>= r14_1)
                        if (i_4 s> 0)
                            int64_t* rdi = r12_1
                            uint64_t i_3 = zx.q(i_4)
                            uint64_t i_1
                            
                            do
                                int64_t* r10_1 = *rdi
                                
                                if (*r10_1 != 0)
                                    char rbx_3 = r10_1[0x1a].b
                                    
                                    if ((rbx_3 & 1) == 0)
                                        int64_t r9_2 = r10_1[1]
                                        
                                        if (r13_1[0x26f].d != *(r13_1 + 0x13a4))
                                            void* r8_6 = &r13_1[0x275]
                                            void* rdx_16 = *(r8_6 + 8)
                                            
                                            if (rdx_16 != 0)
                                                r8_6 = rdx_16
                                            
                                            int32_t j = *(r8_6 + (((sx.q((r9_2 u>> 0x20).d)
                                                ^ sx.q(r9_2.d)) & (sx.q(r13_1[0x277].d) - 1)) << 2))
                                            
                                            if (j != 0xffffffff)
                                                int64_t r8_7 = r13_1[0x26e]
                                                
                                                do
                                                    int64_t rdx_17 = sx.q(j) * 3
                                                    int64_t rcx_23 = *(r8_7 + (rdx_17 << 3))
                                                    
                                                    if (rcx_23.d == r9_2.d && (rcx_23 u>> 0x20).d
                                                            == (r9_2 u>> 0x20).d)
                                                        if (j != 0xffffffff)
                                                            void* rax_38 = r8_7 + (rdx_17 << 3)
                                                            
                                                            if (rax_38 != 0)
                                                                void* rax_39 = *(rax_38 + 8)
                                                                
                                                                if (rax_39 != 0
                                                                        && not(r10_1[5] f<= *(rax_39 + 0x88)))
                                                                    r10_1[0x1a].b = rbx_3 | 1
                                                        
                                                        break
                                                    
                                                    j = *(r8_7 + (rdx_17 << 3) + 0x10)
                                                while (j != 0xffffffff)
                                
                                rdi = &rdi[1]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            performanceCount_3 = performanceCount
                            rsi_1 = var_140_1
                        
                        *(r13_1 + 0x271) = 0
                        rcx_10 = var_1d8_1
                    else if (r13_1[0x12] != 0)
                        int32_t rax_40 = data_143f4cf40
                        int32_t rcx_25 = *(rbx_1 + 0x35c)
                        int32_t rbx_4 = 0
                        *(rbx_1 + 0x358) = 0
                        
                        if (rcx_25 s< 0 && rcx_25 != 0)
                            sub_1405a5220(rbx_1 + 0x350, 0)
                            rbx_4 = *(rbx_1 + 0x358)
                            rcx_25 = *(rax_8 + 0x35c)
                        
                        *(rbx_1 + 0x358) = rbx_4 + 1
                        
                        if (rbx_4 + 1 s> rcx_25)
                            sub_1405c4f50(rbx_1 + 0x350)
                        
                        int64_t rcx_29 = sx.q(rbx_4) * 0x30
                        
                        if (rcx_29 != neg.q(*(rbx_1 + 0x350)))
                            sub_14215c540(rcx_29 + *(rbx_1 + 0x350), r13_1)
                        
                        int32_t rax_46 = r13_1[0xa].d
                        int32_t r14_2 = 0
                        
                        if (rax_46 s> 0)
                            int64_t rdi_1 = 0
                            
                            do
                                if (*(*(r13_1[9] + rdi_1) + 0x90) != 0)
                                    int64_t rbx_5 = sx.q(*(rbx_1 + 0x358))
                                    int32_t rax_45 = (rbx_5 + 1).d
                                    *(rbx_1 + 0x358) = rax_45
                                    
                                    if (rax_45 s> *(rbx_1 + 0x35c))
                                        sub_1405c4f50(rbx_1 + 0x350)
                                    
                                    int64_t rcx_34 = rbx_5 * 0x30
                                    
                                    if (rcx_34 != neg.q(*(rbx_1 + 0x350)))
                                        sub_14215c540(rcx_34 + *(rbx_1 + 0x350), 
                                            *(r13_1[9] + rdi_1))
                                
                                rax_46 = r13_1[0xa].d
                                r14_2 += 1
                                rdi_1 += 8
                            while (r14_2 s< rax_46)
                        
                        int64_t* rcx_36 = r13_1[6]
                        
                        if (rcx_36 != 0)
                            (*(*rcx_36 + 0xda8))(rcx_36)
                            rax_46 = r13_1[0xa].d
                        
                        int32_t i_2 = 0
                        
                        if (rax_46 s> 0)
                            int64_t rbx_6 = 0
                            
                            do
                                int64_t* rcx_38 = *(*(r13_1[9] + rbx_6) + 0x30)
                                
                                if (rcx_38 != 0)
                                    (*(*rcx_38 + 0xda8))(rcx_38)
                                
                                i_2 += 1
                                rbx_6 += 8
                            while (i_2 s< r13_1[0xa].d)
                            
                            r12_1 = var_138_1
                        
                        arg_20 = 0
                        char* var_d0_1 = &arg_20
                        void*** (* var_d8)() = j_sub_140597fc0
                        void* rax_50 = sub_140a756e0(&var_d8, &data_143958018)
                        void** var_148 = nullptr
                        var_130 = nullptr
                        var_128_1.d = i_4
                        var_1a8 = rax_50 + 0x10
                        uint128_t var_1a0
                        var_1a0.q = *(rax_50 + 0x10)
                        var_1a0:8.q = *(rax_50 + 0x20)
                        var_190[0].b = 0
                        var_190[1] = *(rax_50 + 0x28)
                        *(rax_50 + 0x28) = &var_1a8
                        int64_t* rax_54 = var_1a8
                        rax_54[4].d += 1
                        arg_20.q = 0
                        
                        if (i_4 != 0)
                            sub_1405c4a00(&var_130, i_4, 0)
                            memcpy(var_130, r12_1, i_4 << 3)
                        else
                            var_128_1:4.d = i_4
                        
                        performanceCount_3 = performanceCount
                        void*** var_1f8_1 = &var_148
                        int32_t rax_56
                        rax_56, zmm11 = sub_142179c30(performanceCount_3, r13_1, rbx_1 + 0x350, 
                            &var_130, performanceCount_1.b, &arg_20)
                        void** r12_2 = var_148
                        int64_t* rbx_7 = sx.q(rax_56)
                        char var_208_1
                        var_208_1.d = rbx_7.d
                        int32_t rax_57
                        int32_t zmm8_1
                        rax_57, zmm6_1, zmm7_1, zmm8_1, zmm9_1, performanceCount_4 = sub_14217aa00(
                            performanceCount_3, r13_1, rbx_1 + 0x350, r12_2, var_208_1, &var_17c)
                        int64_t r15_2 = sx.q(rax_57)
                        int64_t* rdx_27 = rbx_7
                        var_1c8 = rbx_7
                        
                        if (r15_2 s< rbx_7)
                            while (true)
                                void* rcx_45 = r12_2[r15_2]
                                int64_t* rax_58 = *(rcx_45 + 8)
                                
                                if (rax_58 != 0)
                                    void* r12_3 = *(rcx_45 + 0x10)
                                    int64_t* r14_3 = *rax_58
                                    
                                    if (r12_3 != 0)
                                        zmm0_1.q = *(performanceCount_3 + 0x218) f- *(r12_3 + 0x80)
                                    
                                    if (r12_3 == 0 || zmm0_1.q f> zmm6_1[0])
                                        int32_t rbx_8 = 0
                                        
                                        if (*(rbx_1 + 0x358) s> 0)
                                            int64_t rdi_2 = 0
                                            
                                            while (true)
                                                int64_t rdx_28 = *(rbx_1 + 0x350)
                                                
                                                if ((*(*r14_3 + 0x460))(r14_3, 
                                                        *(rdx_28 + rdi_2 + 8), 
                                                        *(rdx_28 + rdi_2 + 0x10), 
                                                        sx.q(rbx_8) * 0x30 + 0x18 + rdx_28) != 0)
                                                    void* rcx_58 = *(var_148[r15_2] + 8)
                                                    *(rcx_58 + 0xd0) |= 1
                                                    
                                                    if (r12_3 != 0)
                                                        performanceCount_3 = performanceCount
                                                        int32_t rax_84 =
                                                            *(performanceCount_3 + 0x6d8)
                                                            * 0xbb38435 + 0x3619636b
                                                        *(performanceCount_3 + 0x6d8) = rax_84
                                                        arg_20.d = rax_84 u>> 9 | 0x3f800000
                                                        zmm0_1.d = arg_20.d.d f- zmm8_1
                                                        double temp0_4[0x2] = _mm_cvtps_pd(zmm0_1.q)
                                                        temp0_4[0] = temp0_4[0] f* zmm9_1.q
                                                        temp0_4[0] = temp0_4[0] f+
                                                            *(performanceCount_3 + 0x218)
                                                        *(r12_3 + 0x80) = temp0_4.q
                                                        break
                                                else
                                                    rbx_8 += 1
                                                    rdi_2 += 0x30
                                                    
                                                    if (rbx_8 s< *(rbx_1 + 0x358))
                                                        continue
                                                
                                                performanceCount_3 = performanceCount
                                                break
                                            
                                            rdx_27 = var_1c8
                                    else
                                        rax_58[0x1a].b |= 1
                                    
                                    r12_2 = var_148
                                    void* rcx_47 = *(r12_2[r15_2] + 8)
                                    
                                    if (*(rcx_47 + 0xd4) u>= r13_1[0x40].d)
                                        *(rcx_47 + 0xd4) = *(performanceCount_3 + 0x418) + 1
                                
                                r15_2 += 1
                                
                                if (r15_2 s>= rdx_27)
                                    break
                        
                        if (var_190[0].b == 0)
                            int64_t* rax_65 = var_1a8
                            var_190[0].b = 1
                            rax_65[4].d -= 1
                            int64_t* rcx_48 = var_1a8
                            int64_t rdx_30 = var_1a0:8.q
                            
                            if (rdx_30 != rcx_48[2])
                                sub_140b16b40(rcx_48, rdx_30)
                                rcx_48 = var_1a8
                            
                            *rcx_48 = var_1a0.q
                            var_1a8[3] = var_190[1]
                            var_1a0.q = 0
                        
                        int32_t rax_68 = *(rbx_1 + 0x35c)
                        *(rbx_1 + 0x358) = 0
                        
                        if (rax_68 s< 0 && rax_68 != 0)
                            sub_1405a5220(rbx_1 + 0x350, 0)
                        
                        r13_1[0x40].d = *(performanceCount_3 + 0x418)
                        rdx_27.b = data_143f4cf40 s> rax_40
                        sub_142157300(r13_1, rdx_27.b)
                        
                        if (var_190[0].b == 0)
                            int64_t* rax_71 = var_1a8
                            var_190[0].b = 1
                            rax_71[4].d -= 1
                            int64_t* rcx_51 = var_1a8
                            int64_t rdx_31 = var_1a0:8.q
                            
                            if (rdx_31 != rcx_51[2])
                                sub_140b16b40(rcx_51, rdx_31)
                                rcx_51 = var_1a8
                            
                            *rcx_51 = var_1a0.q
                            var_1a8[3] = var_190[1]
                        
                        r14_1 = var_1e8
                        r12_1 = var_138_1
                        rsi_1 = var_140_1
                        i_4 = i_6
                        rcx_10 = var_1d8_1
                    
                    rax_15 = *(performanceCount_3 + 0x98)
                    rcx_10 += 1
                    rbx_1 = rax_8
                    rsi_1 += 1
                    var_1d8_1 = rcx_10
                    var_140_1 = rsi_1
                    
                    if (rcx_10 s>= rax_15)
                        break
                
                r14 = var_17c
                r15_1 = zx.q(var_11c_1)
            
            if (r15_1.d s< rax_15 && r15_1.d s> 0)
                do
                    int32_t rax_74 = *(performanceCount_3 + 0x98)
                    int64_t* rcx_53 = *(performanceCount_3 + 0x90)
                    int64_t rsi_3 = *rcx_53
                    
                    if (rax_74 != 1)
                        memmove(rcx_53, &rcx_53[1], (rax_74 - 1) << 3)
                        rax_74 = *(performanceCount_3 + 0x98)
                    
                    *(performanceCount_3 + 0x98) = rax_74 - 1
                    sub_1405c53d0(performanceCount_3 + 0x90)
                    int64_t rdi_3 = sx.q(*(performanceCount_3 + 0x98))
                    int32_t rax_76 = (rdi_3 + 1).d
                    *(performanceCount_3 + 0x98) = rax_76
                    
                    if (rax_76 s> *(performanceCount_3 + 0x9c))
                        sub_1405a4d70(performanceCount_3 + 0x90)
                    
                    r15_1 = zx.q(r15_1.d - 1)
                    *(*(performanceCount_3 + 0x90) + (rdi_3 << 3)) = rsi_3
                while (r15_1.d s> 0)
            
            if (var_158_1 == 0)
                int64_t* rax_78 = var_170
                var_158_1 = 1
                rax_78[4].d -= 1
                int64_t* rcx_56 = var_170
                
                if (rax_12 != rcx_56[2])
                    sub_140b16b40(rcx_56, rax_12)
                    rcx_56 = var_170
                
                *rcx_56 = var_168_1
                var_170[3] = rax_13
                var_168_1 = 0
            
            performanceCount_3 = performanceCount
            
            if (*(performanceCount_3 + 0x2e4) != 0)
                var_1e8 = 0
                int32_t var_1e0_1 = 0
                sub_1405947f0(&var_1e8, 0x13)
                int32_t rax_87 = var_1e0_1 + 0x13
                var_1e0_1 = rax_87
                
                if (rax_87 s> 0)
                    sub_140594770(&var_1e8)
                
                UnDecorator::getReferenceType(var_1e8, u" Prioritized Actor", 0x26)
                sub_14215fe70(performanceCount_3 + 0x2e8, &var_1e8)
                var_1e8 = 0
                int32_t var_1e0_2 = 0
                sub_1405947f0(&var_1e8, 0x10)
                int32_t rax_88 = var_1e0_2 + 0x10
                var_1e0_2 = rax_88
                
                if (rax_88 s> 0)
                    sub_140594770(&var_1e8)
                
                UnDecorator::getReferenceType(var_1e8, u" Relevant Actor", 0x20)
                sub_14215fe70(performanceCount_3 + 0x2f8, &var_1e8)
                var_1e8 = 0
                int32_t var_1e0_3 = 0
                sub_1405947f0(&var_1e8, 0x13)
                int32_t rax_89 = var_1e0_3 + 0x13
                var_1e0_3 = rax_89
                
                if (rax_89 s> 0)
                    sub_140594770(&var_1e8)
                
                UnDecorator::getReferenceType(var_1e8, u" NonRelevant Actor", 0x26)
                sub_14215fe70(performanceCount_3 + 0x318, &var_1e8)
                var_1e8 = 0
                int32_t var_1e0_4 = 0
                sub_1405947f0(&var_1e8, 0xc)
                int32_t rax_90 = var_1e0_4 + 0xc
                var_1e0_4 = rax_90
                
                if (rax_90 s> 0)
                    sub_140594770(&var_1e8)
                
                UnDecorator::getReferenceType(var_1e8, u" Sent Actor", 0x18)
                int64_t performanceCount_2 = performanceCount
                sub_14215fe70(performanceCount_2 + 0x308, &var_1e8)
                bool cond:5_1 = *(performanceCount_3 + 0x2f4) == 0
                *(performanceCount_3 + 0x2f0) = 0
                
                if (not(cond:5_1))
                    sub_1405c5570(performanceCount_3 + 0x2e8, 0)
                
                bool cond:6_1 = *(performanceCount_2 + 0x314) == 0
                *(performanceCount_2 + 0x310) = 0
                
                if (not(cond:6_1))
                    sub_1405c5570(performanceCount_2 + 0x308, 0)
                
                bool cond:7_1 = *(performanceCount_3 + 0x304) == 0
                *(performanceCount_3 + 0x300) = 0
                
                if (not(cond:7_1))
                    sub_1405c5570(performanceCount_3 + 0x2f8, 0)
                
                bool cond:8_1 = *(performanceCount_3 + 0x324) == 0
                *(performanceCount_3 + 0x320) = 0
                
                if (not(cond:8_1))
                    sub_1405c5570(performanceCount_3 + 0x318, 0)
                
                performanceCount_3 = performanceCount
                *(performanceCount_3 + 0x2e4) = 0
            
            if (var_158_1 == 0)
                int64_t* rax_91 = var_170
                char var_158_2 = 1
                rax_91[4].d -= 1
                int64_t* rcx_79 = var_170
                
                if (rax_12 != rcx_79[2])
                    sub_140b16b40(rcx_79, rax_12)
                    rcx_79 = var_170
                
                *rcx_79 = var_168_1
                var_170[3] = rax_13
                int64_t var_168_2 = 0
            
            if (var_138_1 != 0)
                sub_140a74f90(var_138_1)
    else
        r14 = (*(*rcx_2 + 0x2e8))(rcx_2, arg2)
    
    if (data_143f3bc4c != 0)
        QueryPerformanceCounter(&performanceCount)
        int32_t rbx_10 = data_143f4c9ac
        double zmm1[0x2] = zx.o(0)
        zmm1[0] = float.d(performanceCount)
        int32_t rdx_46 = data_143f4d0e8
        zmm1[0] = zmm1[0] f* data_143d796f8
        zmm1[0] = zmm1[0] f+ zmm11.q
        zmm1[0] = zmm1[0] f- performanceCount_4.q
        data_143f4cf58 = zmm1.q
        zmm0_1.q = zmm1.q f- data_143f3bc50
        zmm1[0] = zmm1[0] * 0x408f400000000000[0]
        data_143f4cf50 = zmm0_1.q
        int64_t zmm6_2 = sub_140b43f30("ServerReplicateActorTimeMS", rdx_46, _mm_cvtpd_ps(zmm1), 0)
        uint128_t zmm0_3
        zmm0_3.q = data_143f4cf50 f* zmm6_2
        int64_t zmm6_3 =
            sub_140b43f30("GatherPrioritizeTimeMS", data_143f4d0e8, _mm_cvtpd_ps(zmm0_3), 0)
        uint128_t zmm0_4
        zmm0_4.q = data_143f3bc50 f* zmm6_3
        sub_140b43f30("ReplicateActorTimeMS", data_143f4d0e8, _mm_cvtpd_ps(zmm0_4), 0)
        uint128_t zmm0_5 = zx.o(data_143f4cf4c)
        int32_t rdx_49 = data_143f4d0e8
        float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(data_143f3bc48))
        zmm0_5 = _mm_cvtepi32_ps(zmm0_5)
        temp0_8[0] = temp0_8[0] f/ zmm0_5.d
        sub_140b43f30("NumReplicateActorCallsPerConAvg", rdx_49, temp0_8, 0)
        sub_140b43f30("Connections", data_143f4d0e8, _mm_cvtepi32_ps(zx.o(data_143f4cf4c)), 0)
        sub_140b43f30("SatConnections", data_143f4d0e8, _mm_cvtepi32_ps(zx.o(data_143f4cf40)), 0)
        int32_t rdx_52 = data_143f4d0e8
        float zmm2[0x4] = zx.o(0)
        zmm2[0] = float.s(zx.q(rbx_10 - var_178_1))
        zmm2[0] = zmm2[0] * 0.0009765625f
        sub_140b43f30("OutKBytes", rdx_52, zmm2, 0)
        int32_t rdx_53 = data_143f4d0e8
        zmm2 = zx.o(0)
        zmm2[0] = float.s(zx.q(*(performanceCount_3 + 0x248)))
        zmm2[0] = zmm2[0] * 0.0009765625f
        sub_140b43f30("OutNetGUIDKBytesSec", rdx_53, zmm2, 0)
        sub_140b43f30("NumClientUpdateLevelVisibility", data_143f4d0e8, 
            _mm_cvtepi32_ps(zx.o(data_143f4cf60)), 0)
        data_143f4cf44 = 0
        data_143f4cf48 = 0
        data_143f4cf60 = 0
else
    r14 = 0

sub_140b37f60("ServerReplicateActors")
return zx.q(r14)
