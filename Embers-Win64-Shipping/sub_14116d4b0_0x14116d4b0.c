// 函数: sub_14116d4b0
// 地址: 0x14116d4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* r13 = arg1
char result = sub_1411a4ac0(data_143f0f1a0, *(arg2 + 8))

if (result != 0)
    sub_140b33630("UpdateGPUScene")
    int32_t rbx_1 = *(r13 + 0x8c)
    int32_t i = 0
    int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
    int32_t var_2e8_1 = rbx_1
    
    if (rbx_1 != rax_3)
        *(r13 + 0x8c) = rax_3
        
        if (*(r13 + 0x14) u> 0)
            void*** rdx_3 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_4 = &rdx_3[3]
            
            if (rax_4 u> *(r13 + 0x38))
                sub_140b0e3d0(r13 + 0x30, 0x20)
                rdx_3 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                rax_4 = &rdx_3[3]
            
            *(r13 + 0x30) = rax_4
            int64_t* rax_5 = *(r13 + 8)
            *(r13 + 0x14) += 1
            *rax_5 = rdx_3
            int32_t rax_6 = *(r13 + 0x8c)
            *(r13 + 8) = &rdx_3[1]
            rdx_3[1] = 0
            *rdx_3 = &data_142f11588
            rdx_3[2].d = rax_6
        else
            *(r13 + 0x90) = rax_3
    
    if (data_143e6a67c != 0 || *(arg2 + 0x1700) != 0)
        int64_t r9_1 = 0
        int32_t* r8_1 = *(arg2 + 0x1708)
        uint64_t r10_2 = sx.q(*(arg2 + 0x1710)) << 2 u>> 2
        
        if (r8_1 u> &r8_1[sx.q(*(arg2 + 0x1710))])
            r10_2 = 0
        
        if (r10_2 != 0)
            do
                void* rax_9 = *(arg2 + 0x1728)
                void* rdx_6 = arg2 + 0x1718
                int32_t rcx_4 = *r8_1
                
                if (rax_9 != 0)
                    rdx_6 = rax_9
                
                int32_t rax_10 = rcx_4
                
                if (rcx_4 s< 0)
                    rax_10 = rcx_4 + 0x1f
                
                r8_1 = &r8_1[1]
                void* rdx_7 = rdx_6 + (sx.q(rax_10 s>> 5) << 2)
                r9_1 += 1
                *rdx_7 &= not.d(1 << (rcx_4.b & 0x1f))
            while (r9_1 != r10_2)
        
        int32_t rax_15 = *(arg2 + 0x1714)
        *(arg2 + 0x1710) = 0
        
        if (rax_15 s< 0 && rax_15 != 0)
            sub_1405dadb0(arg2 + 0x1708, 0)
        
        if (*(arg2 + 0xdc0) s> 0)
            do
                int64_t r15_1 = sx.q(*(arg2 + 0x1710))
                int32_t rax_16 = (r15_1 + 1).d
                *(arg2 + 0x1710) = rax_16
                
                if (rax_16 s> *(arg2 + 0x1714))
                    sub_1405a4cf0(arg2 + 0x1708)
                
                *(*(arg2 + 0x1708) + (r15_1 << 2)) = i
                i += 1
            while (i s< *(arg2 + 0xdc0))
        
        *(arg2 + 0x1700) = 0
    
    int32_t rax_18 = *(arg2 + 0xdc0)
    void* r15_2 = arg2 + 0x1738
    int32_t r14_1 = 0x100
    int32_t rdx_9 = 0x100
    
    if (rax_18 s>= 0x100)
        rdx_9 = rax_18
    
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_reverse(rdx_9)
    int32_t rcx_8
    
    if (rax_18 == 0x100)
        rcx_8 = 0x20
    else
        rcx_8 = 0x1f - temp0_2
    
    int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rdx_9 - 1)
    char rdx_10
    
    if (rcx_10 == 0)
        rdx_10 = 0x20
    else
        rdx_10 = 0x1f - temp0_3
    
    char rax_22 =
        sub_1419bfb10(r13, r15_2, 0x230 << ((not.d(rcx_10)).b & (0x20 - rdx_10)), PrimitiveData")
    int32_t rcx_14 = *(arg2 + 0x17d0)
    
    if (rcx_14 s>= 0x100)
        r14_1 = rcx_14
    
    uint64_t rflags_3
    int32_t temp0_4
    temp0_4, rflags_3 = _bit_scan_reverse(r14_1)
    int32_t rcx_15
    
    if (rcx_14 == 0x100)
        rcx_15 = 0x20
    else
        rcx_15 = 0x1f - temp0_4
    
    int32_t rcx_17 = rcx_15 << 0x1a s>> 0x1f
    uint64_t rflags_4
    char temp0_5
    temp0_5, rflags_4 = _bit_scan_reverse(r14_1 - 1)
    char rsi_2
    
    if (rcx_17 == 0)
        rsi_2 = 0x20
    else
        rsi_2 = 0x1f - temp0_5
    
    char rax_25
    int128_t zmm2_1
    int128_t zmm3_1
    rax_25, zmm2_1, zmm3_1 = sub_1419bfb10(r13, arg2 + 0x1838, 
        0xf0 << ((not.d(rcx_17)).b & (0x20 - rsi_2)), LightmapData")
    int64_t rcx_21 = sx.q(*(arg2 + 0x1710))
    int32_t var_2e4_1 = rcx_21.d
    int32_t var_2f0_1 = 0
    int32_t var_318
    int64_t var_300
    int64_t var_2f8
    int64_t var_2e0
    void var_278
    
    if (rcx_21.d s> 0)
        int32_t var_304_1 = 0
        int64_t rax_26
        int64_t rdx_15
        rdx_15:rax_26 = mulu.dp.q(-0x15f15f15f15f15f1, data_1439c7a80)
        uint32_t r12_1 = rcx_21.d
        uint32_t rdx_16 = (rdx_15 u>> 5).d
        int32_t r15_3 = 0
        
        if (rdx_16 u<= rcx_21.d)
            r12_1 = rdx_16
        
        var_2e0 = sx.q(r12_1)
        uint32_t var_2ec_1 = r12_1
        
        if (rcx_21.d s> 0)
            void* rax_28 = arg2 + 0x1778
            int64_t rbx_2 = 0
            void* r14_2 = r13 + 0x30
            
            do
                var_318.q = u"PrimitiveUploadBuffer"
                sub_1419cff60(rax_28, r12_1, 0x230, 1, var_318)
                int64_t r9_3 = var_2e0
                int64_t r8_5 = 0
                int64_t var_2f8_1 = 0
                
                if (r9_3 s> 0)
                    int64_t r12_2 = rbx_2 << 2
                    int32_t r13_1 = var_2f0_1
                    
                    while (r15_3 s< var_2e4_1)
                        int64_t rsi_3 = sx.q(*(r12_2 + *(arg2 + 0x1708)))
                        
                        if (rsi_3.d s< *(arg2 + 0xde0))
                            int64_t* rdx_18 = *(*(arg2 + 0xdd8) + (rsi_3 << 3))
                            r13_1 += *(rdx_18[0x22] + 0x128)
                            zmm2_1, zmm3_1 = sub_142288d70(&var_278, rdx_18)
                            **(arg2 + 0x17a8) = rsi_3.d
                            int64_t rcx_24 = *(arg2 + 0x17b0)
                            uint64_t r8_6 = zx.q(*(arg2 + 0x17c4))
                            *(arg2 + 0x17a8) += 4
                            *(arg2 + 0x17b8) += 1
                            *(arg2 + 0x17b0) = r8_6 + rcx_24
                            memcpy(rcx_24, &var_278, r8_6.d)
                            r8_5 = var_2f8_1
                            r9_3 = var_2e0
                        
                        void* rcx_25 = arg2 + 0x1718
                        void* rax_34 = *(rcx_25 + 0x10)
                        
                        if (rax_34 != 0)
                            rcx_25 = rax_34
                        
                        int32_t rax_35 = rsi_3.d
                        
                        if (rsi_3.d s< 0)
                            rax_35 = (rsi_3 + 0x1f).d
                        
                        r8_5 += 1
                        void* rdx_20 = rcx_25 + (sx.q(rax_35 s>> 5) << 2)
                        var_2f8_1 = r8_5
                        r15_3 += 1
                        r12_2 += 4
                        *rdx_20 &= not.d(1 << (rsi_3.b & 0x1f))
                        
                        if (r8_5 s>= r9_3)
                            break
                    
                    r15_3 = var_304_1
                    r12_1 = var_2ec_1
                    var_2f0_1 = r13_1
                    r13 = arg1
                    r14_2 = r13 + 0x30
                
                int64_t rax_40 = *(arg2 + 0x1740)
                int64_t* rsi_7 = (*r14_2 + 7) & 0xfffffffffffffff8
                var_2f8 = rax_40
                void* rcx_27 = &rsi_7[1]
                void* rax_43
                void*** rcx_31
                
                if (rax_22 == 0)
                    if (rcx_27 u> *(r14_2 + 8))
                        sub_140b0e3d0(r14_2, 0x10)
                        rax_40 = var_2f8
                        rsi_7 = (*r14_2 + 7) & 0xfffffffffffffff8
                        rcx_27 = &rsi_7[1]
                    
                    *r14_2 = rcx_27
                    *rsi_7 = rax_40
                    rcx_31 = (*r14_2 + 7) & 0xfffffffffffffff8
                    void* rax_44 = &rcx_31[6]
                    
                    if (rax_44 u> *(r14_2 + 8))
                        sub_140b0e3d0(r14_2, 0x38)
                        rcx_31 = (*r14_2 + 7) & 0xfffffffffffffff8
                        rax_44 = &rcx_31[6]
                    
                    *r14_2 = rax_44
                    void**** rax_45 = *(r13 + 8)
                    *(r13 + 0x14) += 1
                    *rax_45 = rcx_31
                    rax_43 = &rcx_31[1]
                    *(r13 + 8) = rax_43
                    rcx_31[4] = 1
                else
                    if (rcx_27 u> *(r14_2 + 8))
                        sub_140b0e3d0(r14_2, 0x10)
                        rax_40 = var_2f8
                        rsi_7 = (*r14_2 + 7) & 0xfffffffffffffff8
                        rcx_27 = &rsi_7[1]
                    
                    *r14_2 = rcx_27
                    *rsi_7 = rax_40
                    rcx_31 = (*r14_2 + 7) & 0xfffffffffffffff8
                    void* rax_41 = &rcx_31[6]
                    
                    if (rax_41 u> *(r14_2 + 8))
                        sub_140b0e3d0(r14_2, 0x38)
                        rcx_31 = (*r14_2 + 7) & 0xfffffffffffffff8
                        rax_41 = &rcx_31[6]
                    
                    *r14_2 = rax_41
                    void**** rax_42 = *(r13 + 8)
                    *(r13 + 0x14) += 1
                    *rax_42 = rcx_31
                    rax_43 = &rcx_31[1]
                    *(r13 + 8) = rax_43
                    rcx_31[4].d = 2
                    *(rcx_31 + 0x24) = 3
                
                rcx_31[3] = rsi_7
                *rax_43 = 0
                rcx_31[5] = 0
                rcx_31[2].d = 1
                r9_3.b = 1
                *rcx_31 = &data_142da7798
                zmm2_1, zmm3_1 =
                    sub_1419bfef0(arg2 + 0x1778, r13, arg2 + 0x1738, r9_3.b, zmm2_1, zmm3_1)
                rbx_2 += var_2e0
                rax_28 = arg2 + 0x1778
                r15_3 += r12_1
                var_304_1 = r15_3
            while (rbx_2 s< rcx_21)
            
            rbx_1 = var_2e8_1
        
        int64_t rax_46 = *(arg2 + 0x1740)
        int64_t* rsi_14 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
        var_300 = rax_46
        void* rcx_42 = &rsi_14[1]
        
        if (rcx_42 u> *(r13 + 0x38))
            sub_140b0e3d0(r13 + 0x30, 0x10)
            rax_46 = var_300
            rsi_14 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_42 = &rsi_14[1]
        
        *(r13 + 0x30) = rcx_42
        *rsi_14 = rax_46
        void*** rcx_46 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_47 = &rcx_46[6]
        
        if (rax_47 u> *(r13 + 0x38))
            sub_140b0e3d0(r13 + 0x30, 0x38)
            rcx_46 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            rax_47 = &rcx_46[6]
        
        *(r13 + 0x30) = rax_47
        r15_2 = arg2 + 0x1738
        void**** rax_48 = *(r13 + 8)
        *(r13 + 0x14) += 1
        *rax_48 = rcx_46
        *(r13 + 8) = &rcx_46[1]
        rcx_46[1] = 0
        rcx_46[3] = rsi_14
        *rcx_46 = &data_142da7798
        rcx_46[4].d = 0
        rcx_46[5] = 0
        rcx_46[2].d = 1
        *(rcx_46 + 0x24) = 1
    
    if (data_143e6a680 != 0)
        int32_t rdx_22 = *(arg2 + 0x1750)
        
        if (rdx_22 != 0 || *(arg2 + 0x1770) u> rdx_22)
            int64_t* rcx_50 = data_143f0f180
            (*(*rcx_50 + 0x158))(rcx_50, &data_143f02b98, *r15_2, 0, rdx_22, 0, rax_22, var_300, 
                var_2f8, var_2f0_1, var_2e8_1, var_2e0, arg1)
            int64_t rcx_51 = sx.q(*(arg2 + 0xde0))
            int64_t rax_50
            int64_t rdx_23
            rdx_23:rax_50 = mulu.dp.q(-0x15f15f15f15f15f1, data_1439c7a80)
            uint32_t r8_9 = rcx_51.d
            uint32_t rdx_24 = (rdx_23 u>> 5).d
            
            if (rdx_24 u<= rcx_51.d)
                r8_9 = rdx_24
            
            int32_t i_2 = 0
            int32_t i_3 = 0
            var_2e0.d = r8_9
            int64_t r12_3 = sx.q(r8_9)
            
            if (rcx_51 s> 0)
                int64_t rax_51 = 0
                int64_t rbx_3 = rcx_51
                int64_t var_2f8_2 = 0
                
                do
                    int64_t r15_4 = 0
                    
                    if (r12_3 s> 0)
                        int32_t i_1 = i_2
                        int64_t r14_4 = rax_51 << 3
                        
                        while (i_1 s< rbx_3.d)
                            zmm2_1, zmm3_1 = sub_142288d70(&var_278, *(*(arg2 + 0xdd8) + r14_4))
                            i_1 += 1
                            r15_4 += 1
                            r14_4 += 8
                            
                            if (r15_4 s>= r12_3)
                                break
                        
                        rax_51 = var_2f8_2
                        rcx_51 = rbx_3
                        i_2 = i_3
                        r8_9 = var_2e0.d
                    
                    i_2 += r8_9
                    rax_51 += r12_3
                    i_3 = i_2
                    var_2f8_2 = rax_51
                while (rax_51 s< rcx_51)
                
                rbx_1 = var_2e8_1
                r15_2 = arg2 + 0x1738
            
            int64_t* rcx_53 = data_143f0f180
            (*(*rcx_53 + 0x160))(rcx_53, &data_143f02b98, *r15_2)
    
    if (var_2e4_1 s> 0)
        if (var_2f0_1 s> 0)
            var_318.q = u"LightmapUploadBuffer"
            int64_t* r12_4 = arg2 + 0x1858
            sub_1419cff60(r12_4, var_2f0_1, 0xf0, 1, var_318)
            int32_t* r15_5 = *(arg2 + 0x1708)
            void* r14_5 = &r15_5[sx.q(*(arg2 + 0x1710))]
            void* var_300_2 = r14_5
            
            if (r15_5 != r14_5)
                do
                    int64_t rax_55 = sx.q(*r15_5)
                    
                    if (rax_55.d s< *(arg2 + 0xde0))
                        int64_t* rsi_17 = *(*(arg2 + 0xdd8) + (rax_55 << 3))
                        void* var_290_1 = nullptr
                        int32_t var_288_1 = 0
                        int32_t var_284_1 = 8
                        void var_2d0
                        (*(*rsi_17 + 0x140))(rsi_17, &var_2d0)
                        int32_t rsi_18 = 0
                        int32_t r12_5 = *(rsi_17[0x22] + 0x124)
                        
                        if (var_288_1 s> 0)
                            int64_t r14_6 = 0
                            
                            do
                                void* rdx_29 = &var_2d0
                                
                                if (var_290_1 != 0)
                                    rdx_29 = var_290_1
                                
                                zmm2_1, zmm3_1 =
                                    sub_1420f33b0(&var_278, *(rdx_29 + r14_6), *(arg2 + 8))
                                **(arg2 + 0x1888) = rsi_18 + r12_5
                                int64_t rcx_59 = *(arg2 + 0x1890)
                                uint64_t r8_12 = zx.q(*(arg2 + 0x18a4))
                                *(arg2 + 0x1888) += 4
                                *(arg2 + 0x1898) += 1
                                *(arg2 + 0x1890) = r8_12 + rcx_59
                                memcpy(rcx_59, &var_278, r8_12.d)
                                rsi_18 += 1
                                r14_6 += 8
                            while (rsi_18 s< var_288_1)
                            
                            r14_5 = var_300_2
                        
                        if (var_290_1 != 0)
                            sub_140a74f90(var_290_1)
                    
                    r15_5 = &r15_5[1]
                while (r15_5 != r14_5)
                
                r12_4 = arg2 + 0x1858
            
            int64_t rax_62 = *(arg2 + 0x1840)
            int64_t* r14_9 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_61 = &r14_9[1]
            void* rax_65
            void*** rcx_65
            
            if (rax_25 == 0)
                if (rcx_61 u> *(r13 + 0x38))
                    sub_140b0e3d0(r13 + 0x30, 0x10)
                    r14_9 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_61 = &r14_9[1]
                
                *(r13 + 0x30) = rcx_61
                *r14_9 = rax_62
                rcx_65 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_66 = &rcx_65[6]
                
                if (rax_66 u> *(r13 + 0x38))
                    sub_140b0e3d0(r13 + 0x30, 0x38)
                    rcx_65 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_66 = &rcx_65[6]
                
                *(r13 + 0x30) = rax_66
                void**** rax_67 = *(r13 + 8)
                *(r13 + 0x14) += 1
                *rax_67 = rcx_65
                rax_65 = &rcx_65[1]
                *(r13 + 8) = rax_65
                rcx_65[4] = 1
            else
                if (rcx_61 u> *(r13 + 0x38))
                    sub_140b0e3d0(r13 + 0x30, 0x10)
                    r14_9 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_61 = &r14_9[1]
                
                *(r13 + 0x30) = rcx_61
                *r14_9 = rax_62
                rcx_65 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_63 = &rcx_65[6]
                
                if (rax_63 u> *(r13 + 0x38))
                    sub_140b0e3d0(r13 + 0x30, 0x38)
                    rcx_65 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_63 = &rcx_65[6]
                
                *(r13 + 0x30) = rax_63
                void**** rax_64 = *(r13 + 8)
                *(r13 + 0x14) += 1
                *rax_64 = rcx_65
                rax_65 = &rcx_65[1]
                *(r13 + 8) = rax_65
                rcx_65[4].d = 2
                *(rcx_65 + 0x24) = 3
            
            rcx_65[5] = 0
            rcx_65[3] = r14_9
            rcx_65[2].d = 1
            *rcx_65 = &data_142da7798
            *rax_65 = 0
            sub_1419bfef0(r12_4, r13, arg2 + 0x1838, 0, zmm2_1, zmm3_1)
            int64_t rax_68 = *(arg2 + 0x1840)
            int64_t* r14_16 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_76 = &r14_16[1]
            
            if (rcx_76 u> *(r13 + 0x38))
                sub_140b0e3d0(r13 + 0x30, 0x10)
                r14_16 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_76 = &r14_16[1]
            
            *(r13 + 0x30) = rcx_76
            *r14_16 = rax_68
            void*** rcx_80 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_69 = &rcx_80[6]
            
            if (rax_69 u> *(r13 + 0x38))
                sub_140b0e3d0(r13 + 0x30, 0x38)
                rcx_80 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                rax_69 = &rcx_80[6]
            
            *(r13 + 0x30) = rax_69
            void**** rax_70 = *(r13 + 8)
            *(r13 + 0x14) += 1
            *rax_70 = rcx_80
            *(r13 + 8) = &rcx_80[1]
            rcx_80[1] = 0
            *rcx_80 = &data_142da7798
            rcx_80[2].d = 1
            rcx_80[3] = r14_16
            rcx_80[4].d = 0
            *(rcx_80 + 0x24) = 1
            rcx_80[5] = 0
        
        int32_t rax_72 = *(arg2 + 0x1714)
        *(arg2 + 0x1710) = 0
        
        if (rax_72 s< 0 && rax_72 != 0)
            sub_1405dadb0(arg2 + 0x1708, 0)
        
        int32_t rcx_85 = data_1439b5fa8
        
        if (*(arg2 + 0x17a0) + *(arg2 + 0x1788) u> rcx_85)
            *(arg2 + 0x1788) = 0
            sub_1405d16e0(arg2 + 0x1778, nullptr)
            sub_1405d16e0(arg2 + 0x1780, nullptr)
            *(arg2 + 0x17a0) = 0
            sub_1405d16e0(arg2 + 0x1790, nullptr)
            sub_1405d16e0(arg2 + 0x1798, nullptr)
            rcx_85 = data_1439b5fa8
        
        if (*(arg2 + 0x1880) + *(arg2 + 0x1868) u> rcx_85)
            *(arg2 + 0x1868) = 0
            sub_1405d16e0(arg2 + 0x1858, nullptr)
            sub_1405d16e0(arg2 + 0x1860, nullptr)
            *(arg2 + 0x1880) = 0
            sub_1405d16e0(arg2 + 0x1870, nullptr)
            sub_1405d16e0(arg2 + 0x1878, nullptr)
    
    if (*(r13 + 0x8c) != rbx_1)
        bool cond:8_1 = *(r13 + 0x14) u> 0
        *(r13 + 0x8c) = rbx_1
        
        if (cond:8_1)
            void*** rcx_96 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_77 = &rcx_96[3]
            
            if (rax_77 u> *(r13 + 0x38))
                sub_140b0e3d0(r13 + 0x30, 0x20)
                rcx_96 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
                rax_77 = &rcx_96[3]
            
            *(r13 + 0x30) = rax_77
            int64_t* rax_78 = *(r13 + 8)
            *(r13 + 0x14) += 1
            *rax_78 = rcx_96
            int32_t rax_79 = *(r13 + 0x8c)
            *(r13 + 8) = &rcx_96[1]
            rcx_96[1] = 0
            *rcx_96 = &data_142f11588
            rcx_96[2].d = rax_79
        else
            *(r13 + 0x90) = rbx_1
    
    result = sub_140b37f60("UpdateGPUScene")

__security_check_cookie(rax_1 ^ &var_338)
return result
