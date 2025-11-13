// 函数: sub_14209b9e0
// 地址: 0x14209b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0 && arg1[0x4e] != 0)
    void* r14
    void* var_30_1 = r14
    void* rax_2 = (*(*arg1 + 0x150))(arg1)
    bool cond:0_1 = arg1[0x44] == 0
    int128_t zmm0
    zmm0.d = (*(rax_2 + 0x520)).d f- arg1[0x49].d
    *(arg1 + 0x24c) = zmm0.d
    
    if (not(cond:0_1))
        sub_142085df0(arg1)
    
    char rax_3 = arg1[0x45].b
    int32_t r15_1 = 0
    int128_t var_a8
    
    if ((rax_3 & 4) == 0)
        if ((rax_3 & 2) != 0)
            TEB* gsbase
            
            if (data_143cd80cc s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143cd80cc)
                
                if (data_143cd80cc == 0xffffffff)
                    sub_140af2b60()
                    data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                    _Init_thread_footer(&data_143cd80cc)
            
            int32_t rax_7
            
            if (data_143de5426 == 0)
                if (data_143cd80c8 != 0)
                    rax_7.b = 0
                else
                    rax_7.b = 1
            else if (data_143de5427 == 0 || data_143cd80c8 != 0)
                rax_7.b = 0
            else
                rax_7.b = 1
            
            if (rax_7.b != 0)
                (*(*arg1 + 0x6b8))(arg1)
                double zmm2[0x2]
                
                if (arg1[0x55].d s> 0)
                    void* rsi_1 = arg1[0x44]
                    
                    if (rsi_1 != 0)
                        void* rsi_2 = *(rsi_1 + 0x298)
                        
                        if (rsi_2 != 0)
                            void* rax_9 = sub_142531230()
                            void* rdx_3 = *(rsi_2 + 0x10)
                            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
                            
                            if (rax_10.d s<= *(rdx_3 + 0x38)
                                    && *(*(rdx_3 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30
                                    && *(rsi_2 + 0x70) != 0)
                                int64_t* r12_1 = nullptr
                                var_a8.q = 0
                                int32_t rdi_3 = 0
                                int32_t r13_1 = 0
                                var_a8:0xc.d = 0
                                char arg_8
                                
                                if (sub_140e6af30(data_143e29f28) == 0)
                                    int64_t* rcx_9 = *(rsi_2 + 0x70)
                                    
                                    if ((*(*rcx_9 + 0x2d8))(rcx_9, &arg_8) != 0)
                                        var_a8:8.d = 1
                                        sub_1405a4d70(&var_a8)
                                        r12_1 = var_a8.q
                                        r13_1 = var_a8:0xc.d
                                        rdi_3 = var_a8:8.d
                                        *r12_1 = arg_8.q
                                
                                for (int32_t i = 0; i s< 0xb; i += 1)
                                    void* rcx_11 = arg1[0x44]
                                    arg_8 = 0
                                    int64_t arg_10
                                    sub_14226d9d0(rcx_11, i, &arg_10, &arg_10:4, &arg_8)
                                    
                                    if (arg_8 != 0)
                                        r14 = sx.q(rdi_3)
                                        rdi_3 = (r14 + 1).d
                                        var_a8:8.d = rdi_3
                                        
                                        if (rdi_3 s> r13_1)
                                            sub_1405a4d70(&var_a8)
                                            r13_1 = var_a8:0xc.d
                                            rdi_3 = var_a8:8.d
                                            r12_1 = var_a8.q
                                        
                                        r12_1[r14] = arg_10
                                
                                sub_14208caf0(arg1, &arg_8)
                                float zmm3 = arg_8.d
                                zmm2 = arg2
                                char rax_16
                                
                                if (zmm3 != 0f || zmm2[0].d f!= 0f)
                                    rax_16 = 0
                                else
                                    rax_16 = 1
                                
                                if (rax_16 == 0)
                                    void* rcx_14 = &r12_1[sx.q(rdi_3)]
                                    int64_t* rax_18 = r12_1
                                    
                                    if (r12_1 != rcx_14)
                                        do
                                            float zmm1_1 = zmm2[0].d f+ *(rax_18 + 4)
                                            *rax_18 = zmm3 f+ *rax_18
                                            *(rax_18 + 4) = zmm1_1
                                            rax_18 = &rax_18[1]
                                        while (rax_18 != rcx_14)
                                
                                var_a8.q = r12_1
                                var_a8:8.d = rdi_3
                                var_a8:0xc.d = r13_1
                                sub_1420aa3f0(arg1, &var_a8)
                else if (arg1[0x59].d - *(arg1 + 0x2f4) s> 0)
                    int32_t r9_2 = arg1[0x5d].d
                    var_a8:4.d = 1
                    int32_t rcx_16 = 0
                    var_a8.d = 0
                    var_a8:8.q = &arg1[0x5a]
                    int32_t rdi_4 = 0
                    int32_t var_98_1 = 0xffffffff
                    int64_t var_94_1 = 0
                    
                    if (r9_2 != 0)
                        void* rax_21 = arg1[0x5c]
                        void* r8_3 = &arg1[0x5a]
                        
                        if (rax_21 != 0)
                            r8_3 = rax_21
                        
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(r9_2 - 1)
                        int32_t rdx_12 = *r8_3
                        
                        if (rdx_12 != 0)
                        label_14209bdc3:
                            int32_t rax_28 = neg.d(rdx_12) & rdx_12
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_28)
                            var_a8:4.d = rax_28
                            int32_t rax_29
                            
                            if (rax_28 == 0)
                                rax_29 = 0x20
                            else
                                rax_29 = 0x1f - temp0_1
                            
                            var_94_1.d = rdi_4 - rax_29 + 0x1f
                            
                            if (rdi_4 - rax_29 + 0x1f s> r9_2)
                                var_94_1.d = r9_2
                        else
                            while (true)
                                int64_t rdx_13 = sx.q(rcx_16)
                                rdi_4 += 0x20
                                rcx_16 += 1
                                var_94_1:4.d = rdi_4
                                var_a8.d = rcx_16
                                
                                if (rdx_13.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_12 = *(r8_3 + (rdx_13 << 2) + 4)
                                var_98_1 = 0xffffffff
                                
                                if (rdx_12 != 0)
                                    goto label_14209bdc3
                            
                            var_94_1.d = r9_2
                    
                    int32_t rdx_14 = arg1[0x5d].d
                    zmm2 = var_98_1.o
                    var_94_1.d = rdx_14
                    double var_48_1[0x2] = zmm2
                    int128_t var_58_1 = var_a8
                    int32_t r12_2 = 0xffffffff << (rdx_14 & 0x1f).b
                    int32_t rdi_7 = rdx_14 s>> 5
                    int32_t r8_5 = rdx_14 & 0xffffffe0
                    int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
                    int32_t var_98_2 = r12_2
                    int128_t var_88 = (&arg1[0x58]).o
                    int128_t var_78_1 = var_58_1
                    
                    if (rdx_14 != r9_2)
                        void* rax_33 = arg1[0x5c]
                        void* r10_1 = &arg1[0x5a]
                        
                        if (rax_33 != 0)
                            r10_1 = rax_33
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(r9_2 - 1)
                        int32_t rdx_18 = *(r10_1 + (sx.q(rdi_7) << 2)) & r12_2
                        
                        if (rdx_18 != 0)
                        label_14209be92:
                            int32_t rax_39 = neg.d(rdx_18) & rdx_18
                            uint64_t rflags_2
                            int32_t temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rax_39)
                            int32_t r14_1
                            
                            if (rax_39 == 0)
                                r14_1 = 0x20
                            else
                                r14_1 = 0x1f - temp0_3
                            
                            var_94_1.d = r8_5 - r14_1 + 0x1f
                            
                            if (r8_5 - r14_1 + 0x1f s> r9_2)
                                var_94_1.d = r9_2
                        else
                            while (true)
                                int64_t rcx_20 = sx.q(rdi_7)
                                r8_5 += 0x20
                                rdi_7 += 1
                                
                                if (rcx_20.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_18 = *(r10_1 + (rcx_20 << 2) + 4)
                                var_98_2 = 0xffffffff
                                
                                if (rdx_18 != 0)
                                    goto label_14209be92
                            
                            var_94_1.d = r9_2
                    
                    while (true)
                        int64_t rcx_22 = sx.q(var_78_1:0xc.d)
                        int32_t rax_32
                        
                        if (rcx_22.d != (var_98_2.q u>> 0x20).d || var_78_1.q != &arg1[0x5a])
                            rax_32.b = 0
                        else
                            rax_32.b = 1
                        
                        int64_t* rdx_19 = var_88.q
                        
                        if (rax_32.b == 0 || rdx_19 != &arg1[0x58])
                            rax_32.b = 1
                        else
                            rax_32.b = 0
                        
                        if (rax_32.b == 0)
                            break
                        
                        (*(*arg1 + 0x650))(arg1, *(*rdx_19 + rcx_22 * 0x10))
                        var_78_1:8.d &= not.d(var_88:0xc.d)
                        sub_14059bdd0(&var_88:8)
                    
                    if (arg1[0x59].d != *(arg1 + 0x2f4))
                        int32_t rax_45 = *(arg1 + 0x2cc)
                        arg1[0x59].d = 0
                        
                        if (rax_45 s< 0 && rax_45 != 0)
                            sub_1405a5410(&arg1[0x58], 0)
                        
                        void* rdi_9 = &arg1[0x5a]
                        arg1[0x5e].d = 0xffffffff
                        r14 = rdi_9 + 0x18
                        *(arg1 + 0x2f4) = 0
                        void* rax_46 = *(rdi_9 + 0x10)
                        uint32_t rdx_24 = (*r14 + 0x1f) u>> 5
                        
                        if (rax_46 != 0)
                            rdi_9 = rax_46
                        
                        if (rdx_24 u> 8)
                            memset(rdi_9, 0, zx.q(rdx_24) << 2)
                        else if (rdx_24 != 0)
                            __builtin_memset(rdi_9, 0, zx.q(rdx_24) << 2)
                        
                        *r14 = 0
                        void* rdi_10 = &arg1[0x5f]
                        int64_t rcx_28 = sx.q(arg1[0x61].d)
                        void* rdx_25 = *(rdi_10 + 8)
                        
                        if (rcx_28 s> 0)
                            if (rdx_25 != 0)
                                rdi_10 = rdx_25
                            
                            __builtin_memset(rdi_10, 0xffffffff, rcx_28 << 2)
    else if (arg1[0x4f] != 0)
        void* rax_4 = sub_1423de320()
        void* rdi_1 = arg1[0x4f]
        
        if (rax_4 != 0 && rax_4 != *(rdi_1 + 0x1e0))
            *(rdi_1 + 0x1e0) = rax_4
            *(rdi_1 + 0x24c) = sub_142005cc0(rax_4).d
        
        *(rdi_1 + 0x258) = rdi_1
        *(rdi_1 + 0x250) = 0x40800000
        *(rdi_1 + 0x254) = 0x42480000
        *(rdi_1 + 0x240) = 0x40800000
        *(rdi_1 + 0x244) = 0x42480000
        int64_t rdx_1 = arg1[0x4f]
        (*(*arg1 + 0x688))(arg1, rdx_1 + 0x24c, rdx_1 + 0x244)
    
    if ((arg1[0x46].b & 1) != 0)
        int128_t* i_1 = arg1[0x54]
        void* rsi_6 = &i_1[sx.q(arg1[0x55].d) * 2]
        r14 = *(arg1[0x4e] + 0x260)
        
        for (; i_1 != rsi_6; i_1 = &i_1[2])
            int64_t* j = arg1[0x56]
            void* rdx_26 = &j[sx.q(arg1[0x57].d)]
            var_a8 = data_14399f5c0
            
            for (; j != rdx_26; j = &j[1])
                if (*j == i_1)
                    var_a8 = data_14399f5f0
                    break
            
            sub_142001ee0(i_1, r14, &var_a8)
    
    (*(*arg1 + 0x660))(arg1)
    r14.b = 0
    int32_t rdx_28 = data_143a2e3e8
    int32_t rcx_32 = data_143a2e3f4 + 1
    int64_t r12_3 = arg1[0x4f]
    data_143a2e3f4 = rcx_32
    int64_t rsi_7 = sx.q(rdx_28 - 1)
    
    if (rdx_28 - 1 s>= 0)
        int64_t rdi_12 = rsi_7 << 4
        int64_t temp0_4
        
        do
            int64_t rcx_33 = data_143a2e3e0
            
            if (*(rdi_12 + rcx_33 + 8) == 0)
                r14.b = 1
            else
                int64_t* rcx_34 = *(rdi_12 + rcx_33)
                
                if (rcx_34 == 0)
                    r14.b = 1
                else if ((*(*rcx_34 + 0x50))(rcx_34, arg1, r12_3) == 0)
                    r14.b = 1
            
            rdi_12 -= 0x10
            temp0_4 = rsi_7
            rsi_7 -= 1
        while (temp0_4 - 1 s>= 0)
        rcx_32 = data_143a2e3f4
        rdx_28 = data_143a2e3e8
    
    data_143a2e3f4 = rcx_32 - 1
    
    if (r14.b != 0 && rcx_32 - 1 s<= 0)
        int32_t rsi_8 = rdx_28
        
        if (rdx_28 s> 0)
            int64_t* rdi_13 = nullptr
            
            do
                int64_t rcx_36 = data_143a2e3e0
                
                if (*(rdi_13 + rcx_36 + 8) == 0)
                    sub_1405a4880(&data_143a2e3e0, r15_1, 1, 1)
                else
                    int64_t* rcx_37 = *(rdi_13 + rcx_36)
                    
                    if (rcx_37 == 0)
                        sub_1405a4880(&data_143a2e3e0, r15_1, 1, 1)
                    else if ((*(*rcx_37 + 0x20))(rcx_37) != 0)
                        sub_1405a4880(&data_143a2e3e0, r15_1, 1, 1)
                    else
                        r15_1 += 1
                        rdi_13 = &rdi_13[2]
                
                rdx_28 = data_143a2e3e8
            while (r15_1 s< rdx_28)
        
        int32_t rax_55 = rdx_28 * 2
        
        if (rax_55 s<= 2)
            rax_55 = 2
        
        data_143a2e3f0 = rax_55
        
        if (rsi_8 s> rax_55 && data_143a2e3ec != rdx_28)
            sub_1405a5410(&data_143a2e3e0, rdx_28)
    
    result = (*(*arg1 + 0x150))(arg1)
    arg1[0x49].d = *(result + 0x520)

return result
