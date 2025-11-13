// 函数: sub_1408288d0
// 地址: 0x1408288d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t r14 = arg4
void* r13 = arg1

if (*(arg1 + 0x210) != 0)
    char var_e0
    char* var_90_1 = &var_e0
    void*** (* var_98)() = j_sub_140597fc0
    var_e0 = 0
    int32_t r10_1 = 0
    int64_t* rax_1 = sub_140a756e0(&var_98, &data_143958018) + 0x10
    int64_t* var_80 = rax_1
    int64_t* r11_1 = nullptr
    int32_t var_e4_1 = 0
    int32_t r12_1 = 0
    int64_t* var_b0_1 = nullptr
    void** r15_1 = nullptr
    int64_t rcx_1 = *rax_1
    int32_t result_2 = 0
    int64_t rcx_2 = rax_1[2]
    char var_68_1 = 0
    void** result_1 = rax_1[3]
    rax_1[3] = &var_80
    int64_t* rax_2 = var_80
    int64_t* var_c8 = nullptr
    int32_t var_b8_1 = 0
    int32_t var_bc_1 = 0
    rax_2[4].d += 1
    void* rbx_1 = *(r13 + 0x208)
    int64_t* var_d8_1 = nullptr
    int64_t* var_f0 = nullptr
    int32_t var_f8_1 = 0
    int32_t var_e8_1 = 0
    void* rax_4 = sx.q(*(r13 + 0x210)) * 0x58
    void** var_a8 = nullptr
    void* rax_5 = rax_4 + rbx_1
    var_98 = nullptr
    int32_t result_3 = 0
    var_90_1:4.d = 0
    void** var_58
    
    if (rbx_1 != rax_5)
        do
            void* rsi_1 = *(*(rbx_1 + 0x20) + 0xc0)
            sub_140886510(*(rsi_1 + 0x18), &var_a8)
            
            if (var_a8 == 0)
                r10_1 = 0
            else
                bool cond:1_1
                
                if (data_14396f018 == 0 || *(rbx_1 + 0x4c) != 0 || *(rbx_1 + 0x4d) != 0)
                    cond:1_1 = r14 == 2
                else if (*(rbx_1 + 0x4e) == 0)
                    sub_140886510(*(*(*(rbx_1 + 0x20) + 0xc0) + 0x18), &var_58)
                    
                    if (*(var_58 + 0x166) != 0xffff)
                        cond:1_1 = r14 == 2
                    else
                        cond:1_1 = r14 == 0
                else
                    cond:1_1 = r14 == 1
                
                void** rax_7
                rax_7.b = cond:1_1
                
                if (rax_7.b == 0)
                    r10_1 = 0
                else
                    sub_140820fc0(r13, rbx_1)
                    *(rbx_1 + 0x50) = 0
                    int32_t r14_1 = *(rsi_1 + 0x254)
                    
                    if (r14_1 == 0xffffffff)
                        int64_t rdi_1 = sx.q(r12_1)
                        r12_1 = (rdi_1 + 1).d
                        
                        if (r12_1 s> var_bc_1)
                            sub_14083a310(&var_c8, rdi_1.d)
                            var_b0_1 = var_c8
                        
                        var_b0_1[rdi_1] = rsi_1
                        result_2 = result_3
                    
                    result_3 = result_2 + 1
                    var_90_1.d = result_2 + 1
                    
                    if (result_2 + 1 s> var_90_1:4.d)
                        sub_14083a440(&var_98, result_2)
                        r15_1 = var_98
                        result_3 = var_90_1.d
                    
                    r10_1 = 0
                    int32_t i = 0
                    r15_1[sx.q(result_2)] = rbx_1
                    *(rsi_1 + 0x254) = result_2
                    
                    if (*(rbx_1 + 0x40) u> 0)
                        do
                            void* rdx_6 = zx.q(i) * 0x110 + *(rbx_1 + 0x20)
                            void* r8 = *(rdx_6 + 0xc0)
                            
                            if (r8 != 0)
                                int32_t rcx_11
                                
                                if (r14_1 != 0xffffffff)
                                    rcx_11 = 0
                                    
                                    if (*(rbx_1 + 0x4f) == 0)
                                        rcx_11 = *(r8 + 0x258)
                                else
                                    *(r8 + 0x25c) = *(rdx_6 + 8)
                                    
                                    if (*(rbx_1 + 0x4f) == 0)
                                        rcx_11 = *(*(*(r8 + 8) + 0x98) + 0xb0)
                                    else
                                        rcx_11 = 0
                                
                                int32_t rcx_13 = rcx_11 + *(rdx_6 + 4) + *rdx_6
                                void* rax_17 = *(r8 + 8)
                                *(r8 + 0x258) = rcx_13
                                int32_t rdx_7 = *(rax_17 + 0xc8)
                                int32_t rax_18 = *(r8 + 0x25c)
                                
                                if (rcx_13 u<= rdx_7)
                                    rdx_7 = rcx_13
                                
                                *(r8 + 0x258) = rdx_7
                                
                                if (rax_18 u>= rdx_7)
                                    rdx_7 = rax_18
                                
                                *(r8 + 0x25c) = rdx_7
                            
                            i += 1
                        while (i u< *(rbx_1 + 0x40))
                    
                    result_2 = result_3
                    r14 = arg4
            
            rbx_1 += 0x58
        while (rbx_1 != rax_5)
        
        r11_1 = var_b0_1
        var_b8_1 = r12_1
        var_a8 = r15_1
    
    int64_t rax_19 = sx.q(*(r13 + 0x14))
    int32_t rdx_8 = data_14396f01c
    
    if (rax_19.d u> 0x1e)
        if ((*(rax_19 * 0x14 + &data_143f025fc) & 1) != 0 || rdx_8 == 0)
            r10_1 = -1
    else if (test_bit(0x6562c800, rax_19.d) || (*(rax_19 * 0x14 + &data_143f025fc) & 1) != 0
            || rdx_8 == 0)
        r10_1 = -1
    
    int64_t r8_1 = 0
    void* rcx_15 = &r11_1[sx.q(r12_1)]
    uint64_t r9_3 = (rcx_15 - r11_1 + 7) u>> 3
    
    if (r11_1 u> rcx_15)
        r9_3 = 0
    
    if (r9_3 != 0)
        do
            void* rdx_9 = *r11_1
            r11_1 = &r11_1[1]
            r8_1 += 1
            *(r15_1[sx.q(*(rdx_9 + 0x254))] + 0x50) = 1
            *(rdx_9 + 0x254) = r10_1
        while (r8_1 != r9_3)
        
        rdx_8 = data_14396f01c
    
    int64_t rax_22 = sx.q(*(r13 + 0x14))
    int32_t r12_3
    
    if ((rax_22.d u> 0x1e || not(test_bit(0x6562c800, rax_22.d)))
            && (*(rax_22 * 0x14 + &data_143f025fc) & 1) == 0 && rdx_8 != 0)
        sub_14083ae30(&var_f0, 2)
        result = sx.q(result_2)
        int64_t r12_2 = 0
        void* rcx_19 = &r15_1[result]
        uint64_t r13_4 = (rcx_19 - r15_1 + 7) u>> 3
        
        if (r15_1 u> rcx_19)
            r13_4 = 0
        
        int64_t* r14_2 = var_f0
        var_d8_1 = r14_2
        
        if (r13_4 == 0)
            r12_3 = var_e8_1
            r13 = arg1
            var_f8_1 = r12_3
        else
            int32_t rcx_20 = var_e8_1
            var_f8_1 = rcx_20
            
            do
                void* r15_2 = *r15_1
                void* rdi_2 = *(*(r15_2 + 0x20) + 0xc0)
                int64_t rsi_2 = sx.q(*(rdi_2 + 0x254))
                
                if (rsi_2.d s>= rcx_20)
                    int64_t r14_3 = sx.q(rcx_20)
                    int32_t rax_24 = r14_3.d + rcx_20 - rsi_2.d + 1
                    var_f8_1 = rax_24
                    
                    if (rax_24 s> var_e4_1)
                        sub_14083a990(&var_f0, r14_3.d)
                        var_f8_1 = rax_24
                        var_d8_1 = var_f0
                    
                    memset(&var_d8_1[r14_3 * 2], 0, sx.q(rcx_20 - rsi_2.d + 1) << 4)
                    
                    if (rsi_2.d == 0 && var_b8_1 s> *(var_d8_1 + 0xc))
                        sub_14083ad10(var_d8_1, var_b8_1)
                    
                    r14_2 = var_d8_1
                
                void* rbx_8 = &r14_2[rsi_2 * 2]
                int64_t rsi_3 = sx.q(*(rbx_8 + 8))
                int32_t rax_28 = (rsi_3 + 1).d
                *(rbx_8 + 8) = rax_28
                
                if (rax_28 s> *(rbx_8 + 0xc))
                    sub_14083a440(rbx_8, rsi_3.d)
                
                result = *rbx_8
                result[rsi_3] = r15_2
                
                if (*(r15_2 + 0x50) == 0)
                    *(rdi_2 + 0x254) += 1
                else
                    *(rdi_2 + 0x254) = 0xffffffff
                
                r12_2 += 1
                rcx_20 = var_f8_1
                r15_1 = &var_a8[1]
                var_a8 = r15_1
            while (r12_2 != r13_4)
            
            r13 = arg1
            r12_3 = rcx_20
    else
        int64_t* rdx_14
        
        if (result_2 s<= 0)
            r12_3 = 0
            rdx_14 = var_d8_1
        else
            sub_14083ae30(&var_f0, result_2)
            rdx_14 = var_f0
            r12_3 = var_e8_1
            var_d8_1 = rdx_14
            var_f8_1 = r12_3
        
        int64_t rsi_4 = 0
        result = sx.q(result_2)
        void* rcx_28 = &r15_1[result]
        uint64_t r14_7 = (rcx_28 - r15_1 + 7) u>> 3
        
        if (r15_1 u> rcx_28)
            r14_7 = 0
        
        if (r14_7 != 0)
            do
                void* r15_4 = *r15_1
                int64_t rbx_9 = sx.q(r12_3)
                r12_3 = (rbx_9 + 1).d
                
                if (r12_3 s> var_e4_1)
                    sub_14083a990(&var_f0, rbx_9.d)
                    rdx_14 = var_f0
                    var_d8_1 = rdx_14
                
                void* rbx_11 = &rdx_14[rbx_9 * 2]
                *rbx_11 = 0
                *(rbx_11 + 8) = 0
                *(rbx_11 + 8) = 1
                
                if (1 s> *(rbx_11 + 0xc))
                    sub_14083a440(rbx_11, 0)
                    rdx_14 = var_d8_1
                
                result = *rbx_11
                rsi_4 += 1
                *result = r15_4
                r15_1 = &var_a8[1]
                var_a8 = r15_1
            while (rsi_4 != r14_7)
            
            var_f8_1 = r12_3
    
    if (r12_3 s> 0)
        int16_t* r15_6 = arg2
        void** r12_4 = &r15_6[0x18]
        void* rbx_14 = (*(r15_6 + 0x30) + 1) & 0xfffffffffffffffe
        void* rax_29 = rbx_14 + 0x1e
        
        if (rax_29 u> r12_4[1])
            sub_140b0e3d0(r12_4, 0x20)
            rbx_14 = (*r12_4 + 1) & 0xfffffffffffffffe
            rax_29 = rbx_14 + 0x1e
        
        wchar16 const* const rcx_32 = u"NiagaraCompute"
        *r12_4 = rax_29
        wchar16 const i_1
        
        do
            i_1 = *rcx_32
            *(rbx_14 - u"NiagaraCompute" + rcx_32) = i_1
            rcx_32 = &rcx_32[1]
        while (i_1 != 0)
        void*** rcx_35 = (*r12_4 + 7) & 0xfffffffffffffff8
        void* rax_30 = &rcx_35[3]
        
        if (rax_30 u> r12_4[1])
            sub_140b0e3d0(r12_4, 0x20)
            rcx_35 = (*r12_4 + 7) & 0xfffffffffffffff8
            rax_30 = &rcx_35[3]
        
        *r12_4 = rax_30
        void**** rax_31 = *(r15_6 + 8)
        *(r15_6 + 0x14) += 1
        *rax_31 = rcx_35
        *(r15_6 + 8) = &rcx_35[1]
        rcx_35[1] = 0
        *rcx_35 = &data_142dd5b20
        rcx_35[2] = rbx_14
        *(r15_6 + 0x1c5) = 1
        void* rcx_41 = (*r12_4 + 7) & 0xfffffffffffffff8
        void* rax_33 = rcx_41 + 0x10
        
        if (rax_33 u> r12_4[1])
            sub_140b0e3d0(r12_4, 0x18)
            rcx_41 = (*r12_4 + 7) & 0xfffffffffffffff8
            rax_33 = rcx_41 + 0x10
        
        *r12_4 = rax_33
        int64_t rbx_17 = 0
        void** rax_34 = *(r15_6 + 8)
        int64_t* rdi_3 = nullptr
        *(r15_6 + 0x14) += 1
        int32_t r14_8 = 0
        int32_t rsi_5 = var_f8_1
        var_f0 = nullptr
        *rax_34 = rcx_41
        *(r15_6 + 8) = rcx_41 + 8
        *(rcx_41 + 8) = 0
        *rcx_41 = &data_142da7758
        int32_t rcx_45 = 0
        int32_t var_e4_2 = 0
        int32_t rax_36 = 0
        var_c8 = nullptr
        int32_t var_c0
        var_c0.q = 0
        void* arg_8
        arg_8.d = 0
        
        if (rsi_5 s> 0)
            int64_t* r14_9 = var_d8_1
            
            while (true)
                int32_t var_e8_4
                
                if (rbx_17.d s>= 0)
                    if (rbx_17.d s>= 1)
                        rbx_17 = 0
                    
                    var_e8_4 = rbx_17.d
                else
                    int32_t rdi_5 = neg.d(rbx_17.d)
                    int32_t rax_37 = rbx_17.d + rdi_5
                    var_e8_4 = rax_37
                    
                    if (rax_37 s> rcx_45)
                        sub_1405a4d70(&var_f0)
                    
                    memset(&var_f0[sx.q(rbx_17.d)], 0, sx.q(rdi_5) << 3)
                
                sub_140839900(r13, r14_9, r15_6, &var_c8, &var_f0)
                void** r15_7 = *r14_9
                int64_t rax_39 = sx.q(r14_9[1].d)
                var_a8 = r15_7
                void* rax_40 = &r15_7[rax_39]
                
                if (r15_7 != rax_40)
                    void* r12_5 = rax_40
                    
                    do
                        void* r14_10 = *r15_7
                        int32_t i_6 = *(r14_10 + 0x40)
                        void* rbx_18 = *(r14_10 + 0x20)
                        
                        if (i_6 != 0)
                            uint64_t i_5 = zx.q(i_6)
                            uint64_t i_2
                            
                            do
                                void* rdi_6 = *(rbx_18 + 0xc0)
                                
                                if (rdi_6 != 0 && *sub_140886510(*(rdi_6 + 0x18), &var_58) != 0)
                                    data_143ce3864 += 1
                                    sub_140823930(r13, r14_10, rbx_18, arg2, arg3, 
                                        sub_140886510(*(rdi_6 + 0x18), &var_98))
                                
                                rbx_18 += 0x110
                                i_2 = i_5
                                i_5 -= 1
                            while (i_2 != 1)
                            r15_7 = var_a8
                            r12_5 = rax_40
                        
                        r15_7 = &r15_7[1]
                        var_a8 = r15_7
                    while (r15_7 != r12_5)
                    
                    rsi_5 = var_f8_1
                    r14_9 = var_d8_1
                
                rbx_17 = sx.q(var_e8_4)
                
                if (rbx_17.d == 0)
                    r15_6 = arg2
                else if (arg_8.d s>= rsi_5 - 1)
                    int32_t rax_44 = *(r13 + 0x300)
                    int32_t rdx_25 = rbx_17.d + rax_44
                    
                    if (rdx_25 s> *(r13 + 0x304))
                        sub_1405c5570(r13 + 0x2f8, rdx_25)
                        rax_44 = *(r13 + 0x300)
                    
                    memcpy(*(r13 + 0x2f8) + (sx.q(rax_44) << 3), var_f0, (rbx_17 << 3).d)
                    *(r13 + 0x300) += rbx_17.d
                    int32_t r8_13 = *(r13 + 0x300)
                    
                    if (r8_13 u> *(r13 + 0x2f0))
                        int32_t r8_15 = (r8_13 + 0x7f) & 0xffffff80
                        bool cond:6_1 = *(r13 + 0x2d0) == 0
                        *(r13 + 0x2f0) = r8_15
                        
                        if (not(cond:6_1))
                            sub_1408081b0(r13 + 0x2d0)
                            r8_15 = *(r13 + 0x2f0)
                        
                        sub_1407b4d10(r13 + 0x2d0, 4, r8_15, 0x1d, 1, u"NiagaraFreeIDListSizes", 0)
                        *(r13 + 0x2f4) = 0
                    
                    r15_6 = arg2
                    sub_140821cd0(r13, r15_6)
                else
                    if (rbx_17.d u> *(r13 + 0x2f0))
                        int32_t r8_9 = (rbx_17 + 0x7f).d & 0xffffff80
                        bool cond:5_1 = *(r13 + 0x2d0) == 0
                        *(r13 + 0x2f0) = r8_9
                        
                        if (not(cond:5_1))
                            sub_1408081b0(r13 + 0x2d0)
                            r8_9 = *(r13 + 0x2f0)
                        
                        sub_1407b4d10(r13 + 0x2d0, 4, r8_9, 0x1d, 1, u"NiagaraFreeIDListSizes", 0)
                        *(r13 + 0x2f4) = 0
                    
                    r15_6 = arg2
                    sub_140821cd0(r13, r15_6)
                    sub_140840b70(r13, r15_6, &var_f0)
                    rbx_17 = zx.q(var_e8_4)
                
                r14_9 = &r14_9[2]
                int32_t rdx_29 = arg_8.d + 1
                var_d8_1 = r14_9
                arg_8.d = rdx_29
                
                if (rdx_29 s>= rsi_5)
                    break
                
                rcx_45 = var_e4_2
            
            rax_36 = var_bc_1
            r14_8 = var_c0
            rdi_3 = var_c8
        
        int64_t rbx_19 = *(r13 + 0x48)
        uint64_t rsi_6 = zx.q(r14_8 + 1)
        int32_t var_c0_1 = rsi_6.d
        
        if (rsi_6.d s> rax_36)
            sub_14083a440(&var_c8, r14_8)
            rsi_6 = zx.q(var_c0_1)
            rdi_3 = var_c8
        
        uint32_t rdx_31 = (rsi_6 << 3).d
        int64_t r14_11 = sx.q(rdx_31)
        rdi_3[sx.q(r14_8)] = rbx_19
        void* rbx_22 = (*r12_4 + 7) & 0xfffffffffffffff8
        void* rax_47 = r14_11 + rbx_22
        
        if (rax_47 u> r12_4[1])
            sub_140b0e3d0(r12_4, rdx_31 + 8)
            rbx_22 = (*r12_4 + 7) & 0xfffffffffffffff8
            rax_47 = r14_11 + rbx_22
        
        *r12_4 = rax_47
        int64_t i_4 = sx.q(rsi_6.d)
        
        if (rsi_6.d s> 0)
            void* rcx_65 = rbx_22
            int64_t i_3
            
            do
                *rcx_65 = *(rdi_3 - rbx_22 + rcx_65)
                rcx_65 += 8
                i_3 = i_4
                i_4 -= 1
            while (i_3 != 1)
        
        void* rcx_68 = (*r12_4 + 7) & 0xfffffffffffffff8
        void* rax_49 = rcx_68 + 0x30
        
        if (rax_49 u> r12_4[1])
            sub_140b0e3d0(r12_4, 0x38)
            rcx_68 = (*r12_4 + 7) & 0xfffffffffffffff8
            rax_49 = rcx_68 + 0x30
        
        *r12_4 = rax_49
        void** rax_50 = *(r15_6 + 8)
        *(r15_6 + 0x14) += 1
        *rax_50 = rcx_68
        *(r15_6 + 8) = rcx_68 + 8
        *(rcx_68 + 8) = 0
        *rcx_68 = &data_142da7798
        *(rcx_68 + 0x10) = rsi_6.d
        *(rcx_68 + 0x18) = rbx_22
        *(rcx_68 + 0x20) = 0
        *(rcx_68 + 0x24) = 1
        *(rcx_68 + 0x28) = 0
        void* rcx_74 = (*r12_4 + 7) & 0xfffffffffffffff8
        void* rax_52 = rcx_74 + 0x10
        
        if (rax_52 u> r12_4[1])
            sub_140b0e3d0(r12_4, 0x18)
            rcx_74 = (*r12_4 + 7) & 0xfffffffffffffff8
            rax_52 = rcx_74 + 0x10
        
        *r12_4 = rax_52
        void** rax_53 = *(r15_6 + 8)
        *(r15_6 + 0x14) += 1
        *rax_53 = rcx_74
        *(r15_6 + 8) = rcx_74 + 8
        *(rcx_74 + 8) = 0
        *rcx_74 = &data_142da7768
        void* rcx_80 = (*r12_4 + 7) & 0xfffffffffffffff8
        void* rax_55 = rcx_80 + 0x10
        
        if (rax_55 u> r12_4[1])
            sub_140b0e3d0(r12_4, 0x18)
            rcx_80 = (*r12_4 + 7) & 0xfffffffffffffff8
            rax_55 = rcx_80 + 0x10
        
        *r12_4 = rax_55
        void** rax_56 = *(r15_6 + 8)
        *(r15_6 + 0x14) += 1
        *rax_56 = rcx_80
        *(r15_6 + 8) = rcx_80 + 8
        *(rcx_80 + 8) = 0
        result = &data_142dd5b30
        *rcx_80 = &data_142dd5b30
        int64_t* rcx_84 = var_f0
        *(r15_6 + 0x1c5) = 0
        
        if (rcx_84 != 0)
            result = sub_140a74f90(rcx_84)
    
    if (var_68_1 == 0)
        int64_t* rax_58 = var_80
        char var_68_2 = 1
        rax_58[4].d -= 1
        int64_t* rcx_85 = var_80
        
        if (rcx_2 != rcx_85[2])
            sub_140b16b40(rcx_85, rcx_2)
            rcx_85 = var_80
        
        *rcx_85 = rcx_1
        result = result_1
        var_80[3] = result

return result
