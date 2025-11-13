// 函数: sub_1410f66c0
// 地址: 0x1410f66c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
uint64_t var_68 = __security_cookie ^ &var_3c8
void* var_388 = arg2
uint64_t result

if (data_143f0f21f == 0)
    result.b = 0
else
    uint64_t rcx = zx.q(data_143f0f1a0)
    
    if (((*(&data_143f025fc + sx.q(rcx.d) * 0x14) u>> 0x13).b & 1) == 0
            || not(test_bit(data_143f13cd8, rcx)))
        result.b = 0
    else
        result = zx.q(*(arg1 + 0xa8))
        
        if (result.d == 0)
            result.b = 0
        else
            int64_t rsi
            rsi.b = 0
            int64_t r15
            r15.b = 0
            int32_t i = 0
            
            if (result.d s<= 0)
                result.b = 0
            else
                do
                    int64_t rbx_1 = sx.q(i) * 0x5240
                    rsi.b |= sub_1410ed8e0(*(arg1 + 8), *(arg1 + 0xa0) + rbx_1)
                    result.b = sub_1410ee7c0(*(arg1 + 0xa0) + rbx_1).b == 0
                    i += 1
                    r15.b |= result.b
                while (i s< *(arg1 + 0xa8))
                
                if (rsi.b == 0)
                    result.b = 0
                else if (sub_1410f8230().d != 0 || r15.b != 0)
                    uint128_t zmm6
                    uint128_t var_48_1 = zmm6
                    *(arg1 + 0x258) = 0
                    
                    if (*(arg1 + 0x25c) != 0)
                        sub_1408098d0(arg1 + 0x240, 0)
                    
                    *(arg1 + 0x200) = 0
                    
                    if (*(arg1 + 0x204) != 0)
                        sub_1408098d0(arg1 + 0x1e8, 0)
                    
                    *(arg1 + 0x238) = 0
                    
                    if (*(arg1 + 0x23c) != 0)
                        sub_1408098d0(arg1 + 0x220, 0)
                    
                    *(arg1 + 0x270) = 0
                    
                    if (*(arg1 + 0x274) != 0)
                        sub_141105040(arg1 + 0x260, 0)
                    
                    *(arg1 + 0x2e8) = 0
                    
                    if (*(arg1 + 0x2ec) != 0)
                        sub_1408098d0(arg1 + 0x2d0, 0)
                    
                    *(arg1 + 0x218) = 0
                    
                    if (*(arg1 + 0x21c) != 0)
                        sub_140bcf1d0(arg1 + 0x208, 0)
                    
                    __builtin_memset(arg1 + 0x2a0, 0, 0x18)
                    int32_t rbx_2 = 0
                    int32_t rdx_2 = 0
                    int64_t var_348
                    __builtin_memset(&var_348, 0, 0x20)
                    int64_t var_270 = 0
                    int64_t var_268_1 = 0
                    void* var_370 = nullptr
                    int64_t var_368_1 = 0
                    int32_t var_398_1 = 0
                    int64_t var_338
                    
                    if (*(arg1 + 0xa8) s> 0)
                        int64_t rcx_10 = 0
                        int64_t var_358_1 = 0
                        bool cond:4_1
                        
                        do
                            void* rsi_2 = *(arg1 + 0xa0) + rcx_10
                            
                            if (rbx_2 + 1 s> rdx_2)
                                sub_1405a4cf0(&var_338)
                            
                            int64_t var_340_1
                            int64_t rbx_3 = sx.q(var_340_1.d)
                            *(var_338 + (sx.q(rbx_2) << 2)) = 0
                            int32_t rax_7 = (rbx_3 + 1).d
                            var_340_1.d = rax_7
                            
                            if (rax_7 s> var_340_1:4.d)
                                sub_1405a4cf0(&var_348)
                            
                            *(var_348 + (rbx_3 << 2)) = 0
                            int32_t rdx_5 = *(*(arg1 + 8) + 0xdc0)
                            
                            if (rdx_5 s> *(rsi_2 + 0x51d4))
                                sub_1411050b0(rsi_2 + 0x51c8, rdx_5)
                            
                            sub_1422e48a0(arg1 + 0x10)
                            int64_t rbx_4 = sx.q(*(arg1 + 0x258))
                            int32_t rax_9 = (rbx_4 + 1).d
                            *(arg1 + 0x258) = rax_9
                            
                            if (rax_9 s> *(arg1 + 0x25c))
                                sub_1408092e0(arg1 + 0x240, rbx_4.d)
                            
                            void* rax_10 = *(arg1 + 0x250)
                            void* rcx_18 = arg1 + 0x240
                            
                            if (rax_10 != 0)
                                rcx_18 = rax_10
                            
                            *(rcx_18 + (rbx_4 << 3)) = rsi_2
                            void* rcx_19 = arg1 + 0x260
                            int64_t rbx_5 = sx.q(*(rcx_19 + 0x10))
                            int32_t rax_11 = (rbx_5 + 1).d
                            *(rcx_19 + 0x10) = rax_11
                            
                            if (rax_11 s> *(rcx_19 + 0x14))
                                sub_141104cf0(rcx_19, rbx_5.d)
                                rcx_19 = arg1 + 0x260
                            
                            void* rax_12 = *(rcx_19 + 8)
                            
                            if (rax_12 != 0)
                                rcx_19 = rax_12
                            
                            *(rcx_19 + (rbx_5 << 1)) = 0
                            int64_t rbx_6 = sx.q(*(arg1 + 0x200))
                            int32_t rax_13 = (rbx_6 + 1).d
                            *(arg1 + 0x200) = rax_13
                            
                            if (rax_13 s> *(arg1 + 0x204))
                                sub_1408092e0(arg1 + 0x1e8, rbx_6.d)
                            
                            void* rax_14 = *(arg1 + 0x1f8)
                            void* rcx_21 = arg1 + 0x1e8
                            
                            if (rax_14 != 0)
                                rcx_21 = rax_14
                            
                            *(rcx_21 + (rbx_6 << 3)) = rsi_2 + 0x1db0
                            int64_t rbx_7 = sx.q(*(arg1 + 0x218))
                            int32_t rax_15 = (rbx_7 + 1).d
                            *(arg1 + 0x218) = rax_15
                            
                            if (rax_15 s> *(arg1 + 0x21c))
                                sub_140bcee10(arg1 + 0x208, rbx_7.d)
                            
                            void* rax_16 = *(arg1 + 0x210)
                            void* rcx_23 = arg1 + 0x208
                            
                            if (rax_16 != 0)
                                rcx_23 = rax_16
                            
                            *(rcx_23 + (rbx_7 << 2)) = 0
                            int64_t rbx_8 = sx.q(*(arg1 + 0x238))
                            int32_t rax_17 = (rbx_8 + 1).d
                            *(arg1 + 0x238) = rax_17
                            
                            if (rax_17 s> *(arg1 + 0x23c))
                                sub_1408092e0(arg1 + 0x220, rbx_8.d)
                            
                            void* rax_18 = *(arg1 + 0x230)
                            void* rcx_25 = arg1 + 0x220
                            
                            if (rax_18 != 0)
                                rcx_25 = rax_18
                            
                            *(rcx_25 + (rbx_8 << 3)) = rsi_2 + 0x1dd0
                            void* rcx_26 = arg1 + 0x2d0
                            int64_t rbx_9 = sx.q(*(rcx_26 + 0x18))
                            int32_t rax_19 = (rbx_9 + 1).d
                            *(rcx_26 + 0x18) = rax_19
                            
                            if (rax_19 s> *(rcx_26 + 0x1c))
                                sub_1408092e0(rcx_26, rbx_9.d)
                                rcx_26 = arg1 + 0x2d0
                            
                            void* rax_20 = *(rcx_26 + 0x10)
                            
                            if (rax_20 != 0)
                                rcx_26 = rax_20
                            
                            *(rcx_26 + (rbx_9 << 3)) = &var_270
                            *(arg1 + 0x2a0) = &data_143e52098
                            *(arg1 + 0x2a8) = &data_143e520b8
                            *(arg1 + 0x2b0) = &data_143e51f18
                            void* r8_2 = *(arg1 + 8)
                            int32_t rdx_17 = (*(r8_2 + 0xdc0) + 0x77) s/ 0x78
                            
                            if (rdx_17 s> *(rsi_2 + 0x4804))
                                sub_140638c50(rsi_2 + 0x47f8, rdx_17)
                                r8_2 = *(arg1 + 8)
                            
                            int32_t rdx_18 = *(r8_2 + 0xdc0)
                            
                            if (rdx_18 s> *(rsi_2 + 0x47f4))
                                sub_14083ae30(rsi_2 + 0x47e8, rdx_18)
                            
                            rbx_2 += 1
                            rcx_10 = var_358_1 + 0x5240
                            cond:4_1 = var_398_1 + 1 s< *(arg1 + 0xa8)
                            var_398_1 += 1
                            int32_t var_32c
                            rdx_2 = var_32c
                            var_358_1 = rcx_10
                        while (cond:4_1)
                    
                    int32_t r11_1 = (data_1439b6c78).d
                    void* r15_2 = *(arg1 + 0xa0)
                    int32_t rcx_32 = 0
                    int32_t var_2f0_1 = 0
                    int32_t var_2ec_1 = 1
                    int32_t r8_3 = 0
                    void* var_2e8_1 = &data_1439b6c60
                    int32_t var_2e0_1 = 0xffffffff
                    int64_t var_2dc_1 = 0
                    int32_t var_360
                    
                    if (r11_1 != 0)
                        void* rax_23 = data_1439b6c70
                        void* r10_1 = &data_1439b6c60
                        
                        if (rax_23 != 0)
                            r10_1 = rax_23
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(r11_1 - 1)
                        int32_t rdx_23 = *r10_1
                        
                        if (rdx_23 != 0)
                        label_1410f6bb6:
                            int32_t rax_30 = ((rdx_23 - 1) & rdx_23) ^ rdx_23
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_30)
                            int32_t var_2ec_2 = rax_30
                            var_360 = temp0_1
                            int32_t rax_31
                            
                            if (rax_30 == 0)
                                rax_31 = 0x20
                            else
                                rax_31 = 0x1f - temp0_1
                            
                            int32_t rax_32 = r8_3 - rax_31 + 0x1f
                            var_2dc_1.d = rax_32
                            
                            if (rax_32 s> r11_1)
                                var_2dc_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_24 = sx.q(rcx_32)
                                r8_3 += 0x20
                                rcx_32 += 1
                                var_2dc_1:4.d = r8_3
                                var_2f0_1 = rcx_32
                                
                                if (rdx_24.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_23 = *(r10_1 + (rdx_24 << 2) + 4)
                                int32_t var_2e0_2 = 0xffffffff
                                
                                if (rdx_23 != 0)
                                    goto label_1410f6bb6
                            
                            var_2dc_1.d = r11_1
                    
                    int128_t var_310_1 = var_2f0_1.o
                    int128_t var_300_1 = 0xffffffff
                    int32_t var_144_1 = r11_1
                    int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    int128_t var_230 = (&data_1439b6c50).o
                    int128_t var_220_1 = var_310_1
                    int64_t var_210_1 = temp0_2
                    
                    while (true)
                        int64_t rcx_36 = sx.q(var_220_1:0xc.d)
                        int64_t* rax_33 = var_230.q
                        
                        if (rcx_36.d == ((0xffffffff << (r11_1.b & 0x1f)).q u>> 0x20).d
                                && var_220_1.q == &data_1439b6c60 && rax_33 == &data_1439b6c50)
                            break
                        
                        r8_3.b = 1
                        int64_t* rcx_38 = *(*rax_33 + rcx_36 * 0x10)
                        (*(*rcx_38 + 0x10))(rcx_38, r15_2, r8_3)
                        var_220_1:8.d &= not.d(var_230:0xc.d)
                        sub_14059bdd0(&var_230:8)
                    
                    int32_t rdi_2 = *(*(arg1 + 8) + 8)
                    uint64_t* rax_39
                    uint128_t zmm0_2
                    rax_39, zmm0_2 = j_sub_140a82f30(0x120)
                    uint64_t* rbx_12 = rax_39
                    
                    if (rax_39 == 0)
                        rbx_12 = nullptr
                    else
                        zmm0_2 = sub_1422d6a20(rax_39, rdi_2)
                        rbx_12[0x1a] = &data_143e52098
                        rbx_12[0x1b] = &data_143e520b8
                        rbx_12[0x1c] = &data_143e51f18
                    
                    void* j_3
                    
                    if (r15_2 + 0x47e0 != &j_3)
                        uint64_t* rsi_3 = *(r15_2 + 0x47e0)
                        *(r15_2 + 0x47e0) = rbx_12
                        
                        if (rsi_3 != 0)
                            sub_1410eb840(rsi_3)
                            zmm0_2 = j_sub_140a74f90(rsi_3)
                    else if (rbx_12 != 0)
                        sub_1410eb840(rbx_12)
                        zmm0_2 = j_sub_140a74f90(rbx_12)
                    
                    void* r8_4 = *(arg1 + 8)
                    void* var_298_1 = arg1 + 0x10
                    void* r13_2 = nullptr
                    void* var_290_1 = var_388
                    void* var_2a8 = r8_4
                    void* var_2a0_1 = r15_2
                    int32_t rdi_4 = 0
                    uint64_t* var_288_1 = *(r15_2 + 0x47e0)
                    void* var_280 = nullptr
                    int64_t var_278_1 = 0
                    int32_t rdx_28 = *(r8_4 + 0xde0)
                    void* var_380 = nullptr
                    int64_t var_378_1 = 0
                    
                    if (rdx_28 s> 0)
                        zmm0_2 = sub_1411050d0(&var_380, rdx_28)
                        r8_4 = *(arg1 + 8)
                        rdi_4 = var_378_1.d
                        r13_2 = var_380
                    
                    int32_t i_1 = 0
                    
                    if (*(r8_4 + 0xde0) s> 0)
                        int128_t zmm7
                        int128_t var_58_1 = zmm7
                        int64_t r9_2 = 0
                        int64_t var_390_1 = 0
                        
                        do
                            void* rdx_29 = *(r8_4 + 0xed8)
                            int32_t* rcx_46 = rdx_29 + 8 + (r9_2 << 4)
                            
                            if (i_1 s>= *rcx_46)
                                do
                                    r9_2 += 1
                                    rcx_46 = &rcx_46[4]
                                while (i_1 s>= *rcx_46)
                                
                                r8_4 = *(arg1 + 8)
                                var_390_1 = r9_2
                            
                            void* r11_2 = *(*(r8_4 + 0xdb8) + (sx.q(i_1) << 3))
                            var_388 = r11_2
                            char rax_46 = *(r11_2 + 0xfc)
                            
                            if ((rax_46 & 0x20) == 0)
                                i_1 = *(rdx_29 + r9_2 * 0x10 + 8) - 1
                            else if (rax_46 s< 0 && (rax_46 & 0xc) == 0xc)
                                char r12_2 = 0
                                var_310_1:8.d = 0
                                zmm7 = zx.o(0)
                                var_300_1:5.d = 0x10000ff
                                int32_t j = 0
                                var_300_1:9.w = 0
                                var_300_1.d = i_1
                                
                                if (*(arg1 + 0xa8) s> 0)
                                    zmm6 = zx.o(var_300_1:8.q)
                                    
                                    do
                                        int64_t* r9_4 = sx.q(j) * 0x5240 + *(arg1 + 0xa0)
                                        void* rbx_13 = r9_4[1]
                                        
                                        if (rbx_13 != 0 && *(r9_4 + 0xd74) == 0)
                                            if (r9_4[0x169].d == *(r9_4 + 0xb74))
                                            label_1410f6f02:
                                                
                                                if (r9_4[0x17c].b == 0)
                                                label_1410f6f85:
                                                    int32_t rax_56 = data_1439b55d4
                                                    
                                                    if (rax_56 s> 0 || (rax_56 == 0xffffffff
                                                            && *(r9_4 + 0xd73) != 0))
                                                        rax_56.b = 1
                                                    else
                                                        rax_56.b = 0
                                                    
                                                    if (*(r9_4 + 0xd72) == 0)
                                                    label_1410f6fc4:
                                                        void* rax_57 = *(arg1 + 8)
                                                        int32_t i_5
                                                        void* rcx_55
                                                        
                                                        if (*(rax_57 + 0x6298) - *(rax_57 + 0x62c4)
                                                                s> 0 && rbx_13 != -0x338)
                                                            void* rax_58 = *(rbx_13 + 0x3a8)
                                                            rcx_55 = rbx_13 + 0x398
                                                            
                                                            if (rax_58 != 0)
                                                                rcx_55 = rax_58
                                                            
                                                            i_5 = i_1
                                                            
                                                            if (i_1 s< 0)
                                                                i_5 = i_1 + 0x1f
                                                        
                                                        if (*(rax_57 + 0x6298) - *(rax_57 + 0x62c4)
                                                                s<= 0 || rbx_13 == -0x338 || not(test_bit(
                                                                *(rcx_55 + (sx.q(i_5 s>> 5) << 2)), 
                                                                i_1 & 0x1f)))
                                                            if ((*(r11_2 + 0xfc) & 0x40) != 0
                                                                    && (*(*r9_4 + 0x2c) & 0x80) != 0)
                                                                int64_t rbx_14 = sx.q(rdi_4)
                                                                var_300_1:4.b = j.b
                                                                rdi_4 = (rbx_14 + 1).d
                                                                var_378_1.d = rdi_4
                                                                
                                                                if (rdi_4 s> var_378_1:4.d)
                                                                    sub_140b52a30(&var_380)
                                                                    r11_2 = var_388
                                                                    rdi_4 = var_378_1.d
                                                                    r13_2 = var_380
                                                                
                                                                zmm0_2 = var_310_1
                                                                int64_t rcx_58 = rbx_14 * 5
                                                                *(r13_2 + (rcx_58 << 3)) = zmm7
                                                                *(r13_2 + (rcx_58 << 3) + 0x10) = zmm0_2
                                                                *(r13_2 + (rcx_58 << 3) + 0x20) = zmm6.q
                                                            else if ((*(*r9_4 + 0x2c) & 4) != 0)
                                                                r12_2 |= (1 << (j u% 0x20)).b
                                                                var_300_1:6.b = r12_2
                                                    else if (rax_56.b != 0
                                                            && (*(r11_2 + 0xfc) & 0x10) != 0)
                                                        goto label_1410f6fc4
                                                else if (r9_4[0x173].d != *(r9_4 + 0xbc4))
                                                    void* r8_7 = &r9_4[0x179]
                                                    void* rcx_50 = *(r8_7 + 8)
                                                    int64_t r10_3 = sx.q(*(r11_2 + 0x10))
                                                    
                                                    if (rcx_50 != 0)
                                                        r8_7 = rcx_50
                                                    
                                                    int32_t rax_55 = *(r8_7 +
                                                        (((sx.q(r9_4[0x17b].d) - 1) & r10_3) << 2))
                                                    
                                                    if (rax_55 != 0xffffffff)
                                                        int64_t r8_8 = r9_4[0x172]
                                                        
                                                        while (true)
                                                            int64_t rdx_37 = sx.q(rax_55) * 3
                                                            
                                                            if (*(r8_8 + (rdx_37 << 2)) == r10_3.d)
                                                                break
                                                            
                                                            rax_55 = *(r8_8 + (rdx_37 << 2) + 4)
                                                            
                                                            if (rax_55 == 0xffffffff)
                                                                goto label_1410f7080
                                                        
                                                        if (rax_55 != 0xffffffff)
                                                            goto label_1410f6f85
                                            else
                                                void* r8_5 = &r9_4[0x16f]
                                                void* rcx_48 = *(r8_5 + 8)
                                                int64_t r10_2 = sx.q(*(r11_2 + 0x10))
                                                
                                                if (rcx_48 != 0)
                                                    r8_5 = rcx_48
                                                
                                                int32_t rax_53 = *(r8_5
                                                    + (((sx.q(r9_4[0x171].d) - 1) & r10_2) << 2))
                                                
                                                if (rax_53 == 0xffffffff)
                                                    goto label_1410f6f02
                                                
                                                int64_t r8_6 = r9_4[0x168]
                                                
                                                while (true)
                                                    int64_t rdx_33 = sx.q(rax_53) * 3
                                                    
                                                    if (*(r8_6 + (rdx_33 << 2)) == r10_2.d)
                                                        break
                                                    
                                                    rax_53 = *(r8_6 + (rdx_33 << 2) + 4)
                                                    
                                                    if (rax_53 == 0xffffffff)
                                                        goto label_1410f6f02
                                                
                                                if (rax_53 == 0xffffffff)
                                                    goto label_1410f6f02
                                        
                                    label_1410f7080:
                                        j += 1
                                    while (j s< *(arg1 + 0xa8))
                                    
                                    if (r12_2 != 0)
                                        int64_t rbx_15 = sx.q(rdi_4)
                                        var_300_1:4.b = 0
                                        rdi_4 = (rbx_15 + 1).d
                                        var_378_1.d = rdi_4
                                        
                                        if (rdi_4 s> var_378_1:4.d)
                                            sub_140b52a30(&var_380)
                                            rdi_4 = var_378_1.d
                                            r13_2 = var_380
                                        
                                        zmm0_2 = var_310_1
                                        int64_t rcx_60 = rbx_15 * 5
                                        *(r13_2 + (rcx_60 << 3)) = zmm7
                                        *(r13_2 + (rcx_60 << 3) + 0x10) = zmm0_2
                                        *(r13_2 + (rcx_60 << 3) + 0x20) = zmm6.q
                                    
                                    r9_2 = var_390_1
                            
                            r8_4 = *(arg1 + 8)
                            i_1 += 1
                        while (i_1 s< *(r8_4 + 0xde0))
                    
                    void* var_78_1 = nullptr
                    int32_t var_70_1 = 0
                    int32_t var_6c_1 = 4
                    TEB* gsbase
                    
                    if (data_143e54a18 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        int64_t r8_27
                        r8_27, zmm0_2 = _Init_thread_header(&data_143e54a18)
                        
                        if (data_143e54a18 == 0xffffffff)
                            int64_t* rcx_143 = data_143db18d0
                            
                            if (rcx_143 == 0)
                                sub_140a53c40()
                                rcx_143 = data_143db18d0
                            
                            r8_27.b = 1
                            data_143e54a10 =
                                (*(*rcx_143 + 0xb0))(rcx_143, r.StaticMeshLODDistanceScale", r8_27)
                            zmm0_2 = _Init_thread_footer(&data_143e54a18)
                    
                    int64_t* rcx_63 = data_143e54a10
                    (*(*rcx_63 + 0x98))(rcx_63)
                    zmm6 = zmm0_2
                    int32_t r9_5 = -1
                    int32_t var_394_2 = 0xffffffff
                    uint32_t r15_4 = (rdi_4 + 0x3ff) u>> 0xa
                    
                    if (r15_4 u<= 1)
                        r15_4 = 1
                    
                    uint32_t temp0_3 = divu.dp.d(0:(r15_4 - 1 + rdi_4), r15_4)
                    uint32_t r8_9 = temp0_3
                    uint32_t var_398_2 = temp0_3
                    void var_98
                    
                    if (r15_4 s> var_6c_1)
                        sub_14085a940(&var_98, r15_4)
                        r8_9 = var_398_2
                        r9_5 = var_394_2
                    
                    int32_t r12_4 = 0
                    void* var_2d0
                    
                    if (r15_4 != 0)
                        do
                            int32_t var_2ac_1 = r9_5
                            int64_t var_1c8_1 = 0
                            uint64_t rax_71 = zx.q(r12_4 * r8_9)
                            uint32_t rdx_42 = rdi_4 - rax_71.d
                            int64_t rax_73 = *(arg1 + 0xa0)
                            int64_t rax_74 = *(arg1 + 8)
                            var_2d0 = rax_71 * 0x28 + r13_2
                            
                            if (r8_9 u<= rdx_42)
                                rdx_42 = r8_9
                            
                            int64_t var_2b8_1 = rax_74
                            uint32_t var_2c8_1 = rdx_42
                            void*** rax_75 = sub_140a82f30(0x30, 8)
                            uint128_t zmm0_3 = var_2d0.o
                            *rax_75 = &data_142f19c58
                            *(rax_75 + 8) = zmm0_3
                            *(rax_75 + 0x18) = rax_73.o
                            zmm0_3.d = zmm6.d
                            rax_75[5] = zmm0_3.q
                            void* const* (* var_1d8)(int64_t* arg1)
                            void* const* (* rax_76)(int64_t* arg1) = var_1d8
                            
                            if (rax_75 != -8)
                                rax_76 = j_sub_1410ec000
                            
                            uint64_t var_2b0 = zmm0_3.q
                            int64_t* rax_77 = sub_140958c20(&var_2d0, nullptr, 0xff)
                            void* rdx_43 = *rax_77
                            *(rdx_43 + 0x10) = rax_76
                            *(rdx_43 + 0x20) = rax_75
                            int128_t* var_1c8_3 = nullptr
                            int128_t var_1b8
                            *(rdx_43 + 0x30) = var_1b8
                            int128_t var_1a8
                            *(rdx_43 + 0x40) = var_1a8
                            void* const* (* rax_78)(int64_t* arg1) = rax_76
                            
                            if (*(rdx_43 + 0x10) != 0)
                                rax_78 = nullptr
                            
                            var_1d8 = rax_78
                            *(rdx_43 + 0x50) = 0xff
                            void* rcx_71 = *rax_77
                            int32_t rax_79 = rax_77[2].d
                            int64_t* rdx_44 = rax_77[1]
                            void* rbx_16 = *(rcx_71 + 0x68)
                            var_388 = rbx_16
                            
                            if (rbx_16 != 0)
                                *(rbx_16 + 0x48) += 1
                                rdi_4 = var_378_1.d
                                r13_2 = var_380
                                rbx_16 = var_388
                            
                            zmm6 = sub_1409787e0(rcx_71, rdx_44, rax_79, 1)
                            
                            if (var_1d8 != 0)
                                int128_t* rcx_72 = &var_1b8
                                
                                if (var_1c8_3 != 0)
                                    rcx_72 = var_1c8_3
                                
                                (*(*rcx_72 + 0x10))(rcx_72)
                            
                            int64_t rsi_5 = sx.q(var_70_1)
                            int32_t rax_82 = (rsi_5 + 1).d
                            var_70_1 = rax_82
                            
                            if (rax_82 s> var_6c_1)
                                sub_14083a490(&var_98, rsi_5.d)
                            
                            void* rcx_74 = &var_98
                            r8_9 = var_398_2
                            r9_5 = var_394_2
                            
                            if (var_78_1 != 0)
                                rcx_74 = var_78_1
                            
                            r12_4 += 1
                            *(rcx_74 + (rsi_5 << 3)) = rbx_16
                        while (r12_4 u< r15_4)
                    
                    void* i_6 = sx.q(rdi_4) * 0x28 + r13_2
                    int64_t* var_3a8
                    uint32_t var_3a0
                    
                    if (r13_2 != i_6)
                        uint64_t rbx_17 = zx.q(var_368_1.d)
                        int32_t* r13_3 = r13_2 + 0x18
                        void* rdi_5 = var_370
                        void* i_2 = i_6
                        int32_t* var_358_2 = r13_3
                        
                        do
                            if (*(r13_3 + 6) != 0)
                                uint64_t r15_5 = sx.q(*r13_3)
                                var_398_2 = r15_5.d
                                int32_t rax_87 = var_368_1:4.d
                                void* rsi_6 = *(*(*(arg1 + 8) + 0xdd8) + (r15_5 << 3))
                                var_388 = rsi_6
                                
                                if (rax_87 s< 0)
                                    if (rbx_17.d != 0)
                                        void* rdi_7 = rdi_5 + 0x20
                                        int32_t j_1
                                        
                                        do
                                            sub_1405ec8a0(rdi_7 + 0x10)
                                            int64_t rcx_81 = *rdi_7
                                            
                                            if (rcx_81 != 0)
                                                sub_140a74f90(rcx_81)
                                            
                                            sub_14081c7d0(rdi_7 - 0x18)
                                            rdi_7 += 0x38
                                            j_1 = rbx_17.d
                                            rbx_17 = zx.q(rbx_17.d - 1)
                                        while (j_1 != 1)
                                        rax_87 = var_368_1:4.d
                                    
                                    var_368_1.d = 0
                                    
                                    if (rax_87 != 0)
                                        sub_1408cf3a0(&var_370, 0)
                                else
                                    if (rbx_17.d != 0)
                                        void* rdi_6 = rdi_5 + 0x20
                                        int32_t j_2
                                        
                                        do
                                            sub_1405ec8a0(rdi_6 + 0x10)
                                            int64_t rcx_78 = *rdi_6
                                            
                                            if (rcx_78 != 0)
                                                sub_140a74f90(rcx_78)
                                            
                                            sub_14081c7d0(rdi_6 - 0x18)
                                            rdi_6 += 0x38
                                            j_2 = rbx_17.d
                                            rbx_17 = zx.q(rbx_17.d - 1)
                                        while (j_2 != 1)
                                    
                                    var_368_1.d = 0
                                
                                (*(*rsi_6 + 0x48))(rsi_6, &var_2a8, &var_370)
                                void* rbx_18 = var_280
                                int64_t rdi_8 = sx.q(var_278_1.d)
                                void* j_6 = rdi_8 * 0x30 + rbx_18
                                j_3 = j_6
                                void* r12_8
                                
                                if (rbx_18 == j_6)
                                    r12_8 = r15_2
                                else
                                    void* r15_6 = rbx_18 + 0x10
                                    
                                    do
                                        int32_t k_4 = *(r15_6 - 8)
                                        void* rdi_9 = *(r15_6 - 0x10)
                                        void* rsi_7 = nullptr
                                        void* var_260 = nullptr
                                        int32_t k_5 = k_4
                                        
                                        if (k_4 != 0)
                                            sub_14083a0c0(&var_260, k_4, 0)
                                            rsi_7 = var_260
                                            void* r12_6 = rsi_7 - rdi_9
                                            int32_t k
                                            
                                            do
                                                sub_140819f30(rdi_9 + r12_6, rdi_9)
                                                rdi_9 += 0xa0
                                                k = k_4
                                                k_4 -= 1
                                            while (k != 1)
                                            k_4 = k_5
                                        else
                                            int32_t var_254_1 = 0
                                        
                                        void* rdx_51 = *(r15_6 + 0x10)
                                        int64_t r8_13 = *(r15_6 + 0x18)
                                        int32_t rax_91 = *(r15_6 + 8)
                                        int32_t rcx_87 = *(r15_6 + 0xc)
                                        char r12_7 = *r15_6
                                        int32_t r13_4 = *(r15_6 + 4)
                                        char var_250_1 = r12_7
                                        var_2d0 = rdx_51
                                        void* var_240_1 = rdx_51
                                        int64_t var_238_1 = r8_13
                                        int32_t var_24c_1 = r13_4
                                        int32_t var_248_1 = rax_91
                                        int32_t var_244_1 = rcx_87
                                        void* var_208 = nullptr
                                        int32_t k_6 = k_4
                                        
                                        if (k_4 != 0)
                                            sub_14083a0c0(&var_208, k_4, 0)
                                            void* rdi_10 = var_208
                                            int32_t k_1
                                            
                                            do
                                                sub_140819f30(rdi_10, rsi_7)
                                                rdi_10 += 0xa0
                                                rsi_7 += 0xa0
                                                k_1 = k_4
                                                k_4 -= 1
                                            while (k_1 != 1)
                                            rdx_51 = var_2d0
                                        else
                                            int32_t var_1fc_1 = 0
                                        
                                        int64_t* rbx_19 = *(arg1 + 8)
                                        int32_t var_1ec_1 = rcx_87
                                        char var_1f8_1 = r12_7
                                        int32_t var_1f4_1 = r13_4
                                        int32_t var_1f0_1 = rax_91
                                        void* var_1e8_1 = rdx_51
                                        int64_t var_1e0_1 = r8_13
                                        r12_8 = r15_2
                                        var_3a0 = var_398_2
                                        var_3a8 = &var_208
                                        sub_14138a240((*(*rbx_19 + 0x2d8))(rbx_19), rbx_19, r12_8, 
                                            var_388, var_3a8, var_3a0)
                                        sub_14081c7d0(&var_260)
                                        r15_6 += 0x30
                                    while (r15_6 - 0x10 != j_3)
                                    
                                    rdi_8 = zx.q(var_278_1.d)
                                    rbx_18 = var_280
                                    r15_5 = zx.q(var_398_2)
                                    r13_3 = var_358_2
                                
                                int32_t rax_96 = var_278_1:4.d
                                
                                if (rax_96 s< 0)
                                    if (rdi_8.d != 0)
                                        int32_t j_4
                                        
                                        do
                                            sub_14081c7d0(rbx_18)
                                            rbx_18 += 0x30
                                            j_4 = rdi_8.d
                                            rdi_8 = zx.q(rdi_8.d - 1)
                                        while (j_4 != 1)
                                        rax_96 = var_278_1:4.d
                                    
                                    var_278_1.d = 0
                                    
                                    if (rax_96 != 0)
                                        sub_1405a5220(&var_280, 0)
                                else
                                    if (rdi_8.d != 0)
                                        int32_t j_5
                                        
                                        do
                                            sub_14081c7d0(rbx_18)
                                            rbx_18 += 0x30
                                            j_5 = rdi_8.d
                                            rdi_8 = zx.q(rdi_8.d - 1)
                                        while (j_5 != 1)
                                    
                                    var_278_1.d = 0
                                
                                rbx_17 = sx.q(var_368_1.d)
                                rdi_5 = var_370
                                
                                if (rbx_17.d s> 0)
                                    void* j_7 = rbx_17 * 0x38 + rdi_5
                                    j_3 = j_7
                                    
                                    if (rdi_5 != j_7)
                                        void* rbx_20 = r12_8 + 0x51c8
                                        void* rdi_11 = rdi_5 + 0x18
                                        var_360.q = rbx_20
                                        
                                        do
                                            void* r9_8 = nullptr
                                            int32_t var_d4_1 = 1
                                            int32_t var_a4_1 = 1
                                            int32_t var_a8_1 = 1
                                            char var_a0_1 = *(rdi_11 + 1)
                                            char rax_100 = *rdi_11 & 1
                                            int64_t var_138 = *(*(rdi_11 - 0x18) + 0x30)
                                            void* var_e8_1 = nullptr
                                            int32_t rcx_97 = 0
                                            int32_t var_d8_1 = 0
                                            int64_t var_c0 = 0
                                            int64_t var_b0_1 = 0
                                            void* rdx_53 = *(rdi_11 + 0x18)
                                            char var_9e_1 = 0
                                            int32_t var_b8_1 = r15_5.d
                                            char var_9f_1 = rax_100
                                            
                                            if (rdx_53 == 0)
                                                int64_t rax_102 = sx.q(*(rdi_11 + 0x10))
                                                int32_t var_c8_2 = rax_102.d
                                                int32_t temp18_1 = rax_102.d
                                                void var_128
                                                
                                                if (temp18_1 s> 0)
                                                    int32_t var_d8_2 = rax_102.d
                                                    
                                                    if (rax_102.d s> 1)
                                                        sub_1409da570(&var_128, 0)
                                                        r9_8 = var_e8_1
                                                else if (temp18_1 s< 0)
                                                    int32_t rbx_22 = neg.d(rax_102.d)
                                                    
                                                    if (rbx_22 != 0)
                                                        int32_t rdx_55 = neg.d(rax_102.d + rbx_22)
                                                        
                                                        if (rdx_55 != 0)
                                                            memmove(&var_128 + (rax_102 << 6), 
                                                                &var_128, rdx_55 << 6)
                                                            rcx_97 = var_d8_1
                                                        
                                                        int32_t var_d8_3 = rcx_97 - rbx_22
                                                        sub_1409da950(&var_128)
                                                        r9_8 = var_e8_1
                                                    
                                                    rbx_20 = var_360.q
                                                
                                                void* rcx_103 = &var_128
                                                
                                                if (r9_8 != 0)
                                                    rcx_103 = r9_8
                                                
                                                memcpy(rcx_103, *(rdi_11 + 8), 
                                                    *(rdi_11 + 0x10) << 6)
                                            else
                                                int32_t var_c8_1 = *(rdi_11 + 4)
                                                sub_1405d16e0(&var_c0, rdx_53)
                                            
                                            int64_t r13_5 = sx.q(*(rbx_20 + 8))
                                            int32_t rax_104 = (r13_5 + 1).d
                                            *(rbx_20 + 8) = rax_104
                                            
                                            if (rax_104 s> *(rbx_20 + 0xc))
                                                sub_141104e60(rbx_20, r13_5.d)
                                            
                                            sub_1410eaba0(r13_5 * 0xa0 + *rbx_20, &var_138)
                                            int32_t k_2 = 1
                                            
                                            if (*(arg1 + 0xa8) s> 1)
                                                int64_t r15_7 = 0x5240
                                                
                                                do
                                                    void* rbx_24 = *(arg1 + 0xa0) + r15_7
                                                    int64_t rsi_8 = sx.q(*(rbx_24 + 0x51d0))
                                                    int32_t rax_105 = (rsi_8 + 1).d
                                                    *(rbx_24 + 0x51d0) = rax_105
                                                    
                                                    if (rax_105 s> *(rbx_24 + 0x51d4))
                                                        sub_141104e60(rbx_24 + 0x51c8, rsi_8.d)
                                                    
                                                    sub_1410eaba0(
                                                        rsi_8 * 0xa0 + *(rbx_24 + 0x51c8), &var_138)
                                                    k_2 += 1
                                                    r15_7 += 0x5240
                                                while (k_2 s< *(arg1 + 0xa8))
                                            
                                            int32_t k_3 = 0
                                            
                                            if (*(rdi_11 - 8) s> 0)
                                                do
                                                    void** const var_198 = &data_142f18d08
                                                    void* rax_106 = *(arg1 + 8)
                                                    void** const* var_178 = &var_198
                                                    void* var_170_1 = rax_106
                                                    void* var_190_1 = r15_2 + 0x47f8
                                                    void* var_188_1 = r15_2 + 0x47e8
                                                    char var_180_1 = k_3.b
                                                    int32_t var_17c_1 = r13_5.d
                                                    void* var_168_1 = r15_2
                                                    int32_t var_160_1 = *(rax_106 + 8)
                                                    sub_1413ccf90(&var_178, 
                                                        sx.q(k_3) * 0xa0 + *(rdi_11 - 0x10), 1, 
                                                        var_388)
                                                    k_3 += 1
                                                while (k_3 s< *(rdi_11 - 8))
                                            
                                            if (var_b0_1 != 0)
                                                sub_140a74f90(var_b0_1)
                                            
                                            sub_1405ec8a0(&var_c0)
                                            
                                            if (var_e8_1 != 0)
                                                sub_140a74f90(var_e8_1)
                                            
                                            rbx_20 = var_360.q
                                            rdi_11 += 0x38
                                            r15_5 = zx.q(var_398_2)
                                        while (rdi_11 - 0x18 != j_3)
                                        
                                        rbx_17 = zx.q(var_368_1.d)
                                        rdi_5 = var_370
                                        r13_3 = var_358_2
                                
                                i_2 = i_6
                            
                            r13_3 = &r13_3[0xa]
                            var_358_2 = r13_3
                        while (&r13_3[-6] != i_2)
                    
                    int64_t* rax_111 = sub_140a242a0()
                    int64_t r9_10 = *rax_111
                    (*(r9_10 + 0x48))(rax_111, &var_98, zx.q(data_14399e5e0), r9_10, var_3a8, 
                        var_3a0, var_398_2, i_6, var_388)
                    void* rbx_25 = var_380
                    
                    if (rbx_25 != i_6)
                        void* i_3 = i_6
                        void* r12_10 = rbx_25 + 0x18
                        void* var_388_1 = r12_10
                        
                        do
                            int32_t rax_112 = *r12_10
                            int64_t rax_113 = sx.q(*(r12_10 + 4))
                            void* j_8 = rax_113 * 0x5240 + *(arg1 + 0xa0)
                            bool cond:7_1 = *(r12_10 + 5) s< 0
                            j_3 = j_8
                            
                            if (not(cond:7_1) && *(r12_10 + 6) == 0)
                                int32_t* rsi_10 = *(r12_10 - 0x10)
                                int64_t r15_9 = 0
                                int32_t r8_20 = *(j_8 + 0x51d0)
                                int32_t var_360_1 = r8_20
                                uint64_t r13_7 = sx.q(*(r12_10 - 8)) << 2 u>> 2
                                
                                if (rsi_10 u> &rsi_10[sx.q(*(r12_10 - 8))])
                                    r13_7 = 0
                                
                                if (r13_7 != 0)
                                    int64_t r12_11 = var_348
                                    
                                    do
                                        int64_t rax_116 = sx.q(*rsi_10)
                                        
                                        if (rax_116.d s>= 0)
                                            void* rbx_26 = j_8 + 0x47e8
                                            int64_t rdi_12 = sx.q(*(rbx_26 + 8))
                                            int32_t var_2c8_2 = r8_20
                                            int32_t rax_118 = (rdi_12 + 1).d
                                            var_2d0 = rax_116 * 0x88 + *(*(arg1 + 8) + 0xd80)
                                            *(rbx_26 + 8) = rax_118
                                            
                                            if (rax_118 s> *(rbx_26 + 0xc))
                                                sub_14083a990(rbx_26, rdi_12.d)
                                                j_8 = j_3
                                                r8_20 = var_360_1
                                            
                                            *(*rbx_26 + rdi_12 * 0x10) = var_2d0.o
                                            *(r12_11 + (rax_113 << 2)) += 1
                                        
                                        rsi_10 = &rsi_10[1]
                                        r15_9 += 1
                                    while (r15_9 != r13_7)
                                    
                                    r12_10 = var_388_1
                                
                                if (data_143e51038 == 0 || *(r12_10 + 0xa) == 0)
                                    int64_t rbx_27 = sx.q(*(j_8 + 0x51d0))
                                    int32_t rax_120 = (rbx_27 + 1).d
                                    *(j_8 + 0x51d0) = rax_120
                                    
                                    if (rax_120 s> *(j_8 + 0x51d4))
                                        sub_141104e60(j_8 + 0x51c8, rbx_27.d)
                                    
                                    int64_t* rbx_30 = rbx_27 * 0xa0 + *(j_8 + 0x51c8)
                                    memset(rbx_30, 0, 0xa0)
                                    int128_t* rdi_14 = &rbx_30[2]
                                    *(rbx_30 + 0x64) = 1
                                    *(rbx_30 + 0x94) = 1
                                    rbx_30[0x13].b = 0xff
                                    rbx_30[0xe].d = 1
                                    int32_t r8_21 = rdi_14[5].d
                                    
                                    if (r8_21 s< 1)
                                        rdi_14[5].d = 1
                                        
                                        if (*(rdi_14 + 0x54) s< 1)
                                            sub_1409da570(rdi_14, r8_21)
                                    else if (r8_21 s> 1)
                                        sub_1410fcee0(rdi_14, 1, r8_21 - 1, 1)
                                    
                                    void* rsi_11 = &rbx_30[0x10]
                                    int32_t r8_23 = *(rsi_11 + 0x10)
                                    
                                    if (r8_23 s< 1)
                                        bool cond:13_1 = *(rsi_11 + 0x14) s>= 1
                                        *(rsi_11 + 0x10) = 1
                                        
                                        if (not(cond:13_1))
                                            sub_1405e3f00(rsi_11, r8_23)
                                    else if (r8_23 s> 1)
                                        sub_1410fce60(rsi_11, 1, r8_23 - 1, 1)
                                    
                                    int64_t r9_12 = sx.q(rax_112)
                                    *rbx_30 = *(r12_10 - 0x18)
                                    int128_t* rcx_130 = rdi_14[4].q
                                    int64_t r8_26 = r9_12 << 6
                                    int64_t rdx_71 = *(*(arg1 + 8) + 0xdc8)
                                    
                                    if (rcx_130 != 0)
                                        rdi_14 = rcx_130
                                    
                                    *rdi_14 = *(r8_26 + rdx_71)
                                    rdi_14[1] = *(r8_26 + rdx_71 + 0x10)
                                    rdi_14[2] = *(r8_26 + rdx_71 + 0x20)
                                    rdi_14[3] = *(r8_26 + rdx_71 + 0x30)
                                    void* rax_123 = *(rsi_11 + 8)
                                    
                                    if (rax_123 != 0)
                                        rsi_11 = rax_123
                                    
                                    *rsi_11 = r9_12.d
                                    rbx_30[0x13].b = *(r12_10 + 7)
                                    *(rbx_30 + 0x99) = *(r12_10 + 8)
                                
                                i_3 = i_6
                            
                            r12_10 += 0x28
                            var_388_1 = r12_10
                        while (r12_10 - 0x18 != i_3)
                        
                        rbx_25 = var_380
                    
                    sub_1408466d0(&var_98)
                    
                    if (rbx_25 != 0)
                        sub_140a74f90(rbx_25)
                    
                    sub_1410eb370(&var_280)
                    int32_t i_7 = var_368_1.d
                    
                    if (i_7 != 0)
                        void* rbx_31 = var_370 + 0x20
                        int32_t i_4
                        
                        do
                            sub_1405ec8a0(rbx_31 + 0x10)
                            int64_t rcx_135 = *rbx_31
                            
                            if (rcx_135 != 0)
                                sub_140a74f90(rcx_135)
                            
                            sub_14081c7d0(rbx_31 - 0x18)
                            rbx_31 += 0x38
                            i_4 = i_7
                            i_7 -= 1
                        while (i_4 != 1)
                    
                    void* rcx_137 = var_370
                    
                    if (rcx_137 != 0)
                        sub_140a74f90(rcx_137)
                    
                    int64_t rcx_138 = var_270
                    
                    if (rcx_138 != 0)
                        sub_140a74f90(rcx_138)
                    
                    int64_t rcx_139 = var_348
                    
                    if (rcx_139 != 0)
                        sub_140a74f90(rcx_139)
                    
                    int64_t rcx_140 = var_338
                    
                    if (rcx_140 != 0)
                        sub_140a74f90(rcx_140)
                    
                    result.b = 1
                else
                    result.b = 0

__security_check_cookie(var_68 ^ &var_3c8)
return result
