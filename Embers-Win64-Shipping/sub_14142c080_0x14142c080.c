// 函数: sub_14142c080
// 地址: 0x14142c080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t* rdi = arg1
uint64_t result = zx.q(arg3[1].d)
int128_t zmm9 = arg4
int64_t rcx = arg9
int32_t r14 = 0
int64_t var_328 = rcx
int32_t var_368 = 0
int32_t var_364 = result.d

if (result.d s> 0)
    int64_t rdx = *arg3
    result = 0
    int128_t zmm7 = 0x42c80000
    int64_t var_320_1 = rdx
    uint64_t result_1 = 0
    
    do
        int128_t var_1f8_1
        __builtin_memset(&var_1f8_1, 0, 0x38)
        uint128_t zmm0 = data_143dbb1e0
        int64_t var_180_1 = 0
        uint128_t var_1b0_1 = zmm0
        int32_t var_bc_1 = 0xbf800000
        uint128_t var_1a0_1 = zmm0
        int32_t var_1c0_1 = 0xffffffff
        int64_t var_1b8_1 = 0
        int32_t var_178_1 = 0x42c80000
        uint128_t var_190_1 = data_14399f5c0
        int64_t var_170
        __builtin_memset(&var_170, 0, 0x2c)
        int32_t var_144_1 = 0x80
        int32_t var_140_1 = 0xffffffff
        int32_t var_13c_1 = 0
        int64_t var_130_1 = 0
        int32_t var_128_1 = 0
        char var_d0_1 = 0
        int64_t var_c8_1 = -1
        int32_t var_c0_1 = 0x3f800000
        int64_t var_b8_1 = 0
        int32_t var_b0_1 = 0
        int16_t var_ac_1 = 0x100
        int32_t var_a8_1 = 0x42b40000
        int32_t var_a4_1 = 0x42b40000
        int64_t* rsi_2 = result * 0xb0 + rdx
        var_1f8_1.d = rsi_2[0x12].d
        var_1f8_1:4.d = *(rsi_2 + 0x94)
        var_1f8_1:8.d = rsi_2[0x13].d
        var_1f8_1:0xc.d = *(rsi_2 + 0x9c)
        int128_t var_1e8_1
        var_1e8_1.d = rsi_2[0x12].d
        var_1e8_1:4.d = *(rsi_2 + 0x94)
        var_1e8_1:8.d = rsi_2[0x13].d
        int64_t var_1c8_1 = rcx
        var_1e8_1:0xc.d = *(rsi_2 + 0x9c)
        int128_t var_1d8_1
        var_1d8_1.q = rdi
        uint64_t var_288 = *rsi_2
        int32_t var_280_1 = rsi_2[1].d
        uint128_t var_278_1 = *(rsi_2 + 0x10)
        int128_t var_268_1 = *(rsi_2 + 0x20)
        uint128_t var_258_1 = *(rsi_2 + 0x30)
        int128_t var_248_1 = *(rsi_2 + 0x40)
        uint128_t var_1b0_2 = data_14399f5e0
        int32_t var_bc_2 = zmm9.d
        var_180_1.d = rsi_2[0x14].d
        int64_t rax_13
        float zmm6_1
        rax_13, zmm6_1 = sub_141f3d710(arg2, r14)
        var_1d8_1:8.q = rax_13
        int128_t var_238_1 = *(rsi_2 + 0x50)
        int128_t var_228_1 = *(rsi_2 + 0x60)
        int128_t var_218_1 = *(rsi_2 + 0x70)
        int128_t zmm0_1 = *(arg2 + 0x238)
        int128_t var_208_1 = *(rsi_2 + 0x80)
        
        if (not(zmm0_1.d f>= zmm6_1))
            int32_t var_c0_2 = 0x3c23d70a
        else if (zmm0_1.d f>= zmm7.d)
            int32_t var_c0_4 = 0x42c80000
        else
            int32_t var_c0_3 = zmm0_1.d
        
        int64_t* rcx_2 = rdi[4]
        int64_t rax_15 = (*(*rcx_2 + 0x240))(rcx_2)
        int64_t rax_18
        
        if (rax_15 != 0)
            int64_t* rcx_3 = rdi[4]
            rax_18 = sub_142437e30((*(*rcx_3 + 0x240))(rcx_3), 0, 1)
        
        if (rax_15 == 0 || rax_18 == 0)
            zmm0_1 = var_178_1
        else
            int64_t* rcx_5 = rdi[4]
            zmm0_1 = *(sub_142437e30((*(*rcx_5 + 0x240))(rcx_5), 0, 1) + 0x240)
            int32_t var_178_2 = zmm0_1.d
        
        zmm0_1.d = zmm0_1.d f* zmm6_1
        zmm0_1.d = zmm0_1.d f* *(rsi_2 + 0xa4)
        var_180_1:4.d = zmm0_1.d
        
        if (arg5 != 0)
            rdi[5].d &= 0xfffffffe
            int128_t var_1a0_2 = data_14399f5e0
        
        int64_t* rax_22 = j_sub_140a82f30(0x15a0)
        int64_t* r12_1
        
        if (rax_22 == 0)
            r12_1 = nullptr
        else
            r12_1 = sub_1422d8af0(rax_22, &var_288)
        
        *(r12_1 + 0xd72) = 1
        *(r12_1 + 0xd73) = *(arg2 + 0x244)
        *(r12_1 + 0xd75) = arg6
        sub_1422f3140(r12_1)
        int32_t rbx_1 = 0
        uint64_t rax_26
        
        while (true)
            if (rbx_1 s< 0 || rbx_1 s>= *(arg2 + 0x200))
                rax_26.b = 0
            else
                rax_26.b = 1
            
            if (rax_26.b == 0)
                break
            
            rax_26 = sub_140d3c6e0(*(arg2 + 0x1f8) + (sx.q(rbx_1) << 3))
            void var_350
            
            if (rax_26 != 0)
                sub_140998ff0(&r12_1[0x168], &var_350, rax_26 + 0x254, nullptr)
            rbx_1 += 1
        
        int32_t r15_1 = 0
        int128_t var_2a8
        
        while (true)
            if (r15_1 s< 0 || r15_1 s>= *(arg2 + 0x210))
                rax_26.b = 0
            else
                rax_26.b = 1
            
            if (rax_26.b == 0)
                break
            
            void* rdx_4 = *(*(arg2 + 0x208) + (sx.q(r15_1) << 3))
            
            if (rdx_4 != 0)
                int32_t var_378_1 = 0xffffffff
                int32_t r11_1 = *(rdx_4 + 0x1c8)
                void* var_380_1 = rdx_4 + 0x1b0
                int32_t rcx_13 = 0
                int32_t var_388_1 = 0
                int32_t var_384_1 = 1
                int32_t r8_3 = 0
                int64_t var_374_1 = 0
                
                if (r11_1 != 0)
                    void* rax_28 = *(rdx_4 + 0x1c0)
                    void* r9_1 = rdx_4 + 0x1b0
                    
                    if (rax_28 != 0)
                        r9_1 = rax_28
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r11_1 - 1)
                    int32_t rdx_7 = *r9_1
                    
                    if (rdx_7 != 0)
                    label_14142c59c:
                        int32_t rax_35 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_35)
                        int32_t var_384_2 = rax_35
                        int32_t rax_36
                        
                        if (rax_35 == 0)
                            rax_36 = 0x20
                        else
                            rax_36 = 0x1f - temp0_2
                        
                        var_374_1.d = r8_3 - rax_36 + 0x1f
                        
                        if (r8_3 - rax_36 + 0x1f s> r11_1)
                            var_374_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_8 = sx.q(rcx_13)
                            r8_3 += 0x20
                            rcx_13 += 1
                            var_374_1:4.d = r8_3
                            var_388_1 = rcx_13
                            
                            if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                            int32_t var_378_2 = 0xffffffff
                            
                            if (rdx_7 != 0)
                                goto label_14142c59c
                        
                        var_374_1.d = r11_1
                
                int32_t rdx_9 = *(rdx_4 + 0x1c8)
                var_374_1.d = rdx_9
                int128_t var_2a0_1 = 0xffffffff
                uint128_t var_2b0_1 = var_388_1.o
                int32_t rdi_1 = 0xffffffff << (rdx_9 & 0x1f).b
                int32_t r8_6 = rdx_9 s>> 5
                int32_t r9_3 = rdx_9 & 0xffffffe0
                int64_t var_2e8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int32_t var_378_3 = rdi_1
                uint128_t var_308 = (rdx_4 + 0x1a0).o
                int128_t var_2f8_1 = var_2a8
                
                if (rdx_9 != r11_1)
                    void* rax_39 = *(rdx_4 + 0x1c0)
                    void* r10_1 = rdx_4 + 0x1b0
                    
                    if (rax_39 != 0)
                        r10_1 = rax_39
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r11_1 - 1)
                    int32_t rdx_13 = *(r10_1 + (sx.q(r8_6) << 2)) & rdi_1
                    
                    if (rdx_13 != 0)
                    label_14142c677:
                        int32_t rax_45 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_45)
                        int32_t rax_46
                        
                        if (rax_45 == 0)
                            rax_46 = 0x20
                        else
                            rax_46 = 0x1f - temp0_4
                        
                        rax_26 = zx.q(r9_3 - rax_46 + 0x1f)
                        var_374_1.d = rax_26.d
                        
                        if (rax_26.d s> r11_1)
                            var_374_1.d = r11_1
                    else
                        while (true)
                            uint64_t rcx_17 = sx.q(r8_6)
                            r9_3 += 0x20
                            r8_6 += 1
                            
                            if (rcx_17.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_13 = *(r10_1 + (rcx_17 << 2) + 4)
                            var_378_3 = 0xffffffff
                            
                            if (rdx_13 != 0)
                                goto label_14142c677
                        
                        var_374_1.d = r11_1
                
                while (true)
                    int64_t rdx_14 = sx.q(var_2f8_1:0xc.d)
                    
                    if (rdx_14.d != (var_378_3.q u>> 0x20).d || var_2f8_1.q != rdx_4 + 0x1b0)
                        rax_26.b = 0
                    else
                        rax_26.b = 1
                    
                    int64_t* rcx_19 = var_308.q
                    
                    if (rax_26.b == 0 || rcx_19 != rdx_4 + 0x1a0)
                        rax_26.b = 1
                    else
                        rax_26.b = 0
                    
                    if (rax_26.b == 0)
                        break
                    
                    void* rbx_3 = *(*rcx_19 + rdx_14 * 0x10)
                    
                    if (rbx_3 != 0)
                        void* rax_49 = sub_142577430()
                        void* rdx_15 = *(rbx_3 + 0x10)
                        int64_t rax_50 = sx.q(*(rax_49 + 0x38))
                        void var_34c
                        
                        if (rax_50.d s<= *(rdx_15 + 0x38)
                                && *(*(rdx_15 + 0x30) + (rax_50 << 3)) == rax_49 + 0x30)
                            sub_140998ff0(&r12_1[0x168], &var_34c, rbx_3 + 0x254, nullptr)
                    
                    var_2f8_1:8.d &= not.d(var_308:0xc.d)
                    sub_14059bdd0(&var_308:8)
            
            r15_1 += 1
        
        if (*(arg2 + 0x1f0) == 2)
            sub_1413c3330(&r12_1[0x172])
            r12_1[0x172] = 0
            int32_t* rcx_25 = &r12_1[0x174]
            r12_1[0x173] = 0
            int32_t rbx_4 = 0
            *(rcx_25 + 0x10) = 0
            rcx_25[6] = 0
            rcx_25[7] = 0x80
            int32_t* rax_54 = *(rcx_25 + 0x10)
            
            if (rax_54 != 0)
                rcx_25 = rax_54
            
            *rcx_25 = 0
            *(rcx_25 + 8) = 0
            r12_1[0x178].d = 0xffffffff
            *(r12_1 + 0xbc4) = 0
            r12_1[0x17a] = 0
            r12_1[0x17b].d = 0
            r12_1[0x17c].b = 1
            
            while (true)
                if (rbx_4 s< 0 || rbx_4 s>= *(arg2 + 0x220))
                    rax_54.b = 0
                else
                    rax_54.b = 1
                
                if (rax_54.b == 0)
                    break
                
                rax_54 = sub_140d3c6e0(*(arg2 + 0x218) + (sx.q(rbx_4) << 3))
                void var_348
                
                if (rax_54 != 0)
                    sub_140998ff0(&r12_1[0x172], &var_348, &rax_54[0x95], nullptr)
                rbx_4 += 1
            
            int32_t r12_2 = 0
            
            while (true)
                if (r12_2 s< 0 || r12_2 s>= *(arg2 + 0x230))
                    rax_54.b = 0
                else
                    rax_54.b = 1
                
                if (rax_54.b == 0)
                    break
                
                void* rdx_18 = *(*(arg2 + 0x228) + (sx.q(r12_2) << 3))
                
                if (rdx_18 != 0)
                    int32_t var_378_4 = 0xffffffff
                    int32_t r11_2 = *(rdx_18 + 0x1c8)
                    void* var_380_2 = rdx_18 + 0x1b0
                    int32_t rcx_30 = 0
                    int32_t var_388_2 = 0
                    int32_t var_384_3 = 1
                    int32_t r8_10 = 0
                    int64_t var_374_2 = 0
                    
                    if (r11_2 != 0)
                        void* rax_56 = *(rdx_18 + 0x1c0)
                        void* r9_5 = rdx_18 + 0x1b0
                        
                        if (rax_56 != 0)
                            r9_5 = rax_56
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r11_2 - 1)
                        int32_t rdx_21 = *r9_5
                        
                        if (rdx_21 != 0)
                        label_14142c8cd:
                            int32_t rax_63 = ((rdx_21 - 1) & rdx_21) ^ rdx_21
                            uint64_t rflags_3
                            int32_t temp0_5
                            temp0_5, rflags_3 = _bit_scan_reverse(rax_63)
                            int32_t var_384_4 = rax_63
                            int32_t rax_64
                            
                            if (rax_63 == 0)
                                rax_64 = 0x20
                            else
                                rax_64 = 0x1f - temp0_5
                            
                            var_374_2.d = r8_10 - rax_64 + 0x1f
                            
                            if (r8_10 - rax_64 + 0x1f s> r11_2)
                                var_374_2.d = r11_2
                        else
                            while (true)
                                int64_t rdx_22 = sx.q(rcx_30)
                                r8_10 += 0x20
                                rcx_30 += 1
                                var_374_2:4.d = r8_10
                                var_388_2 = rcx_30
                                
                                if (rdx_22.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_21 = *(r9_5 + (rdx_22 << 2) + 4)
                                int32_t var_378_5 = 0xffffffff
                                
                                if (rdx_21 != 0)
                                    goto label_14142c8cd
                            
                            var_374_2.d = r11_2
                    
                    int32_t rdx_23 = *(rdx_18 + 0x1c8)
                    var_374_2.d = rdx_23
                    int128_t var_2a0_2 = 0xffffffff
                    uint128_t var_2b0_2 = var_388_2.o
                    int32_t rdi_4 = 0xffffffff << (rdx_23 & 0x1f).b
                    int32_t r8_13 = rdx_23 s>> 5
                    int32_t r9_7 = rdx_23 & 0xffffffe0
                    int64_t var_2c0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int32_t var_378_6 = rdi_4
                    uint128_t var_2e0 = (rdx_18 + 0x1a0).o
                    int128_t var_2d0_1 = var_2a8
                    
                    if (rdx_23 != r11_2)
                        void* rax_67 = *(rdx_18 + 0x1c0)
                        void* r10_2 = rdx_18 + 0x1b0
                        
                        if (rax_67 != 0)
                            r10_2 = rax_67
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r11_2 - 1)
                        int32_t rdx_27 = *(r10_2 + (sx.q(r8_13) << 2)) & rdi_4
                        
                        if (rdx_27 != 0)
                        label_14142c9a7:
                            int32_t rax_73 = ((rdx_27 - 1) & rdx_27) ^ rdx_27
                            uint64_t rflags_4
                            int32_t temp0_7
                            temp0_7, rflags_4 = _bit_scan_reverse(rax_73)
                            int32_t rax_74
                            
                            if (rax_73 == 0)
                                rax_74 = 0x20
                            else
                                rax_74 = 0x1f - temp0_7
                            
                            rax_54 = zx.q(r9_7 - rax_74 + 0x1f)
                            var_374_2.d = rax_54.d
                            
                            if (rax_54.d s> r11_2)
                                var_374_2.d = r11_2
                        else
                            while (true)
                                int32_t* rcx_34 = sx.q(r8_13)
                                r9_7 += 0x20
                                r8_13 += 1
                                
                                if (rcx_34.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_27 = *(r10_2 + (rcx_34 << 2) + 4)
                                var_378_6 = 0xffffffff
                                
                                if (rdx_27 != 0)
                                    goto label_14142c9a7
                            
                            var_374_2.d = r11_2
                    
                    while (true)
                        int64_t rdx_28 = sx.q(var_2d0_1:0xc.d)
                        
                        if (rdx_28.d != (var_378_6.q u>> 0x20).d || var_2d0_1.q != rdx_18 + 0x1b0)
                            rax_54.b = 0
                        else
                            rax_54.b = 1
                        
                        int64_t* rcx_36 = var_2e0.q
                        
                        if (rax_54.b == 0 || rcx_36 != rdx_18 + 0x1a0)
                            rax_54.b = 1
                        else
                            rax_54.b = 0
                        
                        if (rax_54.b == 0)
                            break
                        
                        void* rbx_6 = *(*rcx_36 + rdx_28 * 0x10)
                        
                        if (rbx_6 != 0)
                            void* rax_77 = sub_142577430()
                            void* rdx_29 = *(rbx_6 + 0x10)
                            int64_t rax_78 = sx.q(*(rax_77 + 0x38))
                            void var_344
                            
                            if (rax_78.d s<= *(rdx_29 + 0x38)
                                    && *(*(rdx_29 + 0x30) + (rax_78 << 3)) == rax_77 + 0x30)
                                sub_140998ff0(&r12_1[0x172], &var_344, rbx_6 + 0x254, nullptr)
                        
                        var_2d0_1:8.d &= not.d(var_2e0:0xc.d)
                        sub_14059bdd0(&var_2e0:8)
                
                r12_2 += 1
        else if (*(arg2 + 0x220) s> 0 || *(arg2 + 0x230) s> 0)
            char rax_82 = data_143ed4538
            char rcx_41 = rax_82
            
            if (rax_82 == 0)
                rcx_41 = 1
            
            data_143ed4538 = rcx_41
        
        rdi = arg1
        int64_t rbx_7 = sx.q(rdi[1].d)
        int32_t rax_83 = (rbx_7 + 1).d
        rdi[1].d = rax_83
        
        if (rax_83 s> *(rdi + 0xc))
            sub_1405a4d70(rdi)
        
        *(*rdi + (rbx_7 << 3)) = r12_1
        int32_t rax_86 = rsi_2[1].d
        uint64_t var_318 = *rsi_2
        int32_t var_310_1 = rax_86
        sub_1422ebf00(r12_1, arg7, sub_1422f5770(r12_1, &var_318))
        zmm7, zmm9 = sub_1422e2840(r12_1)
        void var_120
        sub_1413c3330(&var_120)
        int32_t var_128_2 = 0
        
        if (var_130_1 != 0)
            sub_140a74f90(var_130_1)
        
        int64_t var_168_1
        var_168_1.d = 0
        int32_t var_140_2 = 0xffffffff
        int32_t var_13c_2 = 0
        int64_t var_160
        sub_14059a8e0(&var_160, 0)
        int64_t var_150
        
        if (var_150 != 0)
            sub_140a74f90(var_150)
        
        int64_t rcx_51 = var_170
        
        if (rcx_51 != 0)
            sub_140a74f90(rcx_51)
        
        r14 = var_368 + 1
        rcx = var_328
        result = result_1 + 1
        rdx = var_320_1
        var_368 = r14
        result_1 = result
    while (r14 s< var_364)

__security_check_cookie(rax_1 ^ &var_3a8)
return result
