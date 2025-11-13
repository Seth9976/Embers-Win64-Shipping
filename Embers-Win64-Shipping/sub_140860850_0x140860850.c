// 函数: sub_140860850
// 地址: 0x140860850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg2 + 0x10)
void* rdi = arg2
void* rsi = arg1

if (result[1].d != 0)
    int64_t rbx_1 = *(arg2 + 0x18)
    void* r14_1 = arg1 + 0xd10
    int32_t rcx
    rcx.b = sub_140b5b8a0(*(arg1 + 0xd20), 0) == 0
    
    if ((*(rsi + 0xd24) != 0 | rcx.b) == 0 || *(rsi + 0xd28) == 0)
        *(rsi + 0xd18) = 0
        rbx_1 = 0
    
    *r14_1 = rbx_1
    sub_140855e80(r14_1)
    int64_t* rbx_2 = nullptr
    int32_t i = 0
    int32_t i_3 = 0
    
    if (*(*(rdi + 8) + 0x70) s> 0)
        int64_t* r14_2 = nullptr
        int64_t* r15_1 = nullptr
        
        do
            int64_t rbx_3 = *(rsi + 0xd58)
            int64_t rdi_1 = *(rdi + 0x18)
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(*(r15_1 + rbx_3 + 0x10), 0) == 0
            
            if ((*(r15_1 + rbx_3 + 0x14) != 0 | rcx_2.b) == 0 || *(r15_1 + rbx_3 + 0x18) == 0)
                *(r15_1 + rbx_3 + 8) = 0
                rdi_1 = 0
            
            *(r15_1 + rbx_3) = rdi_1
            rbx_2 = nullptr
            int64_t rdx = *(rsi + 0xd58)
            void* r10_1 = *(r15_1 + rdx)
            *(r15_1 + rdx + 0x38) = 0
            *(r15_1 + rdx + 0x40) = 0
            
            if (r10_1 != 0)
                void* r8_1 = *(r15_1 + rdx + 8)
                
                if (r8_1 != 0)
                    void* r9_1 = *(r10_1 + 0x98)
                    
                    if (r9_1 != 0)
                        *(r15_1 + rdx + 0x38) = zx.q(*(r9_1 + 0xbc) * *(r8_1 + 4)) + *(r9_1 + 0x28)
                        void* r9_2 = *(r10_1 + 0xa0)
                        
                        if (r9_2 != 0)
                            *(r15_1 + rdx + 0x40) =
                                zx.q(*(r9_2 + 0xbc) * *(r8_1 + 4)) + *(r9_2 + 0x28)
            
            int32_t j = 0
            int64_t rax_3 = *(arg1 + 0xd00)
            
            if (*(rax_3 + r14_2 + 8) s> 0)
                do
                    int64_t* rdi_2 = *(r14_2 + rax_3)
                    int64_t rbp_1 = *(arg2 + 0x18)
                    int32_t rcx_9
                    rcx_9.b = sub_140b5b8a0(*(rdi_2 + rbx_2 + 0x10), 0) == 0
                    
                    if ((*(rdi_2 + rbx_2 + 0x14) != 0 | rcx_9.b) == 0
                            || *(rdi_2 + rbx_2 + 0x18) == 0)
                        *(rdi_2 + rbx_2 + 8) = 0
                        rbp_1 = 0
                    
                    *(rdi_2 + rbx_2) = rbp_1
                    int64_t rdx_1 = *(r14_2 + *(arg1 + 0xd00))
                    void* r10_2 = *(rbx_2 + rdx_1)
                    __builtin_memset(rbx_2 + rdx_1 + 0x38, 0, 0x40)
                    void* r9_3 = *(r10_2 + 0x98)
                    
                    if (r10_2 != 0)
                        int32_t* r8_2 = *(rbx_2 + rdx_1 + 8)
                        
                        if (r8_2 != 0 && r9_3 != 0)
                            *(rbx_2 + rdx_1 + 0x38) =
                                zx.q(r8_2[1] * *(r9_3 + 0xbc)) + *(r9_3 + 0x28)
                            *(rbx_2 + rdx_1 + 0x40) = zx.q(*(r9_3 + 0xb8) * *r8_2) + *(r9_3 + 0x18)
                            *(rbx_2 + rdx_1 + 0x48) =
                                zx.q((*r8_2 + 1) * *(r9_3 + 0xb8)) + *(r9_3 + 0x18)
                            *(rbx_2 + rdx_1 + 0x50) =
                                zx.q((r8_2[1] + 1) * *(r9_3 + 0xbc)) + *(r9_3 + 0x28)
                            void* r9_4 = *(r10_2 + 0xa0)
                            
                            if (r9_4 != 0)
                                *(rbx_2 + rdx_1 + 0x58) =
                                    zx.q(*(r9_4 + 0xbc) * r8_2[1]) + *(r9_4 + 0x28)
                                *(rbx_2 + rdx_1 + 0x60) =
                                    zx.q(*(r9_4 + 0xb8) * *r8_2) + *(r9_4 + 0x18)
                                *(rbx_2 + rdx_1 + 0x68) =
                                    zx.q((*r8_2 + 1) * *(r9_4 + 0xb8)) + *(r9_4 + 0x18)
                                *(rbx_2 + rdx_1 + 0x70) =
                                    zx.q((r8_2[1] + 1) * *(r9_4 + 0xbc)) + *(r9_4 + 0x28)
                    
                    rax_3 = *(arg1 + 0xd00)
                    j += 1
                    rbx_2 = &rbx_2[0xf]
                while (j s< *(rax_3 + r14_2 + 8))
                
                i = i_3
                rbx_2 = nullptr
            
            rdi = arg2
            i += 1
            rsi = arg1
            r15_1 = &r15_1[9]
            r14_2 = &r14_2[2]
            i_3 = i
        while (i s< *(*(rdi + 8) + 0x70))
    
    result = *(rdi + 0x10)
    uint64_t i_4 = 0
    i_3 = 0
    
    if (result[1].d s> 0)
        int32_t* r15_2 = nullptr
        int32_t* var_80_1 = nullptr
        int64_t* rcx_22 = nullptr
        int64_t* var_70_1 = nullptr
        
        do
            int64_t rdx_2 = *(r14_1 + 0x38)
            void* rbp_2 = *(rcx_22 + *result)
            void* var_68_1 = rbp_2
            void* rcx_23
            
            if (rdx_2 != 0)
                rcx_23 = *(*r14_1 + 0x98)
            
            int32_t rax_25
            
            if (rdx_2 == 0 || rcx_23 == 0 || i_4.d s< 0 || i_4.d u>= *(rcx_23 + 0xb0))
                rax_25 = 4
            else
                rax_25 = *(r15_2 + rdx_2)
            
            int32_t rdx_3 = *(rbp_2 + 0x6e8)
            int32_t rcx_24 = rdx_3
            
            if (rdx_3 != rax_25 && rdx_3 != 4)
                *(rbp_2 + 0x6e8) = rax_25
                rcx_24 = rax_25
                
                if (rax_25 == 0)
                    *(rbp_2 + 0x6b8) |= 8
                    int32_t i_1 = 0
                    
                    if (*(rbp_2 + 0xa8) s> rax_25)
                        do
                            sub_14080c880(*(rbx_2 + *(rbp_2 + 0xa0)), 0)
                            i_1 += 1
                            rbx_2 = &rbx_2[2]
                        while (i_1 s< *(rbp_2 + 0xa8))
                        
                        rcx_24 = *(rbp_2 + 0x6e8)
                        rbx_2 = nullptr
                    
                    rdi = arg2
            
            if (rcx_24 != 4)
                void* arg_20
                arg_20.d = 0
                
                if (*(rbp_2 + 0xa8) s> 0)
                    int64_t r13_2 = 0
                    int64_t* var_78_1 = nullptr
                    int64_t* r14_3 = nullptr
                    int64_t* var_88_1 = nullptr
                    int64_t* rcx_27 = nullptr
                    int32_t i_2
                    
                    do
                        void* rbp_3 = *(*(rbp_2 + 0xa0) + r13_2)
                        
                        if (*(rbp_3 + 0x24) - 3 u> 1)
                            int64_t rax_29 = *(rsi + 0xd58)
                            int32_t* rdx_4 = *(rcx_27 + rax_29 + 0x38)
                            void* rcx_28
                            
                            if (rdx_4 != 0)
                                rcx_28 = *(*(rcx_27 + rax_29) + 0x98)
                            
                            int32_t rdx_5
                            
                            if (rdx_4 == 0 || rcx_28 == 0 || i_4.d s< 0
                                    || i_4.d u>= *(rcx_28 + 0xb0))
                                rdx_5 = 4
                            else
                                rdx_5 = *(rdx_4 + r15_2)
                            
                            sub_14080c880(rbp_3, rdx_5)
                            int64_t* rcx_30 = *(rsi + 0xd00)
                            int32_t j_1 = 0
                            
                            if (*(rcx_30 + r13_2 + 8) s> 0)
                                int128_t* r9_5 = nullptr
                                int64_t rdx_6 = 0
                                int64_t* rax_37
                                
                                do
                                    rax_37 = rcx_30
                                    
                                    if (j_1 s< *(rbp_3 + 0x50))
                                        int64_t rcx_31 = *(rcx_30 + r13_2)
                                        int32_t* rax_31 = *(rdx_6 + rcx_31 + 0x38)
                                        int64_t var_60
                                        int64_t var_58
                                        
                                        if (rax_31 == 0)
                                            var_60 = 0
                                            var_58 = 0
                                        else
                                            var_60.d = *(rax_31 + r15_2)
                                            var_60:4.d = (*(r15_2 + *(rdx_6 + rcx_31 + 0x40))).d
                                            var_58.d = *(r15_2 + *(rdx_6 + rcx_31 + 0x48))
                                            var_58:4.d = *(r15_2 + *(rdx_6 + rcx_31 + 0x50))
                                        *(r9_5 + *(rbp_3 + 0x48)) = var_60.o
                                        rax_37 = *(rsi + 0xd00)
                                    
                                    j_1 += 1
                                    rdx_6 += 0x78
                                    r9_5 = &r9_5[1]
                                    rcx_30 = rax_37
                                while (j_1 s< *(rax_37 + r13_2 + 8))
                            
                            int64_t rbx_4 = *(rsi + 0xc40)
                            void* r10_3 = *(*(rdi + 0x18) + 0x98)
                            int32_t* r9_6 = *(r14_3 + rbx_4)
                            void* r11_1 = &r9_6[sx.q(*(r14_3 + rbx_4 + 8)) * 2]
                            
                            if (r9_6 != r11_1)
                                do
                                    uint64_t r8_4 = zx.q(r9_6[1] * *(r10_3 + 0xb8))
                                    uint64_t rdx_7 = zx.q(*r9_6)
                                    r9_6 = &r9_6[2]
                                    *(rdx_7 + *(rbp_3 + 0xa0)) =
                                        *(r8_4 + (i_4 << 2) + *(r10_3 + 0x18))
                                while (r9_6 != r11_1)
                                
                                rdi = arg2
                            
                            void* r9_7 = *(r14_3 + rbx_4 + 0x10)
                            void* r11_2 = r9_7 + (sx.q(*(r14_3 + rbx_4 + 0x18)) << 3)
                            
                            while (r9_7 != r11_2)
                                uint64_t r8_7 = zx.q(*(r9_7 + 4) * *(r10_3 + 0xbc))
                                uint64_t rdx_8 = zx.q(*r9_7)
                                r9_7 += 8
                                *(rdx_8 + *(rbp_3 + 0xa0)) = *(r8_7 + *(r10_3 + 0x28) + (i_4 << 2))
                            
                            *(rbp_3 + 0x130) |= 1
                            int64_t rbx_5 = *(rsi + 0xc50)
                            void* r10_4 = *(*(rdi + 0x18) + 0x98)
                            int32_t* r9_8 = *(r14_3 + rbx_5)
                            void* r11_3 = &r9_8[sx.q(*(r14_3 + rbx_5 + 8)) * 2]
                            
                            while (r9_8 != r11_3)
                                uint64_t r8_10 = zx.q(r9_8[1] * *(r10_4 + 0xb8))
                                uint64_t rdx_9 = zx.q(*r9_8)
                                r9_8 = &r9_8[2]
                                *(rdx_9 + *(rbp_3 + 0x408)) =
                                    *(r8_10 + *(r10_4 + 0x18) + (i_4 << 2))
                            
                            int32_t* r9_9 = *(r14_3 + rbx_5 + 0x10)
                            void* r11_4 = &r9_9[sx.q(*(r14_3 + rbx_5 + 0x18)) * 2]
                            
                            while (r9_9 != r11_4)
                                uint64_t r8_13 = zx.q(r9_9[1] * *(r10_4 + 0xbc))
                                uint64_t rdx_10 = zx.q(*r9_9)
                                r9_9 = &r9_9[2]
                                *(rdx_10 + *(rbp_3 + 0x408)) =
                                    *(r8_13 + *(r10_4 + 0x28) + (i_4 << 2))
                            
                            *(rbp_3 + 0x498) |= 1
                            void* r11_5 = *(rbp_3 + 0x728)
                            
                            if (r11_5 != 0)
                                int64_t rdi_4 = *(rsi + 0xc70)
                                int32_t* r9_10 = *(r14_3 + rdi_4)
                                void* r10_5 = *(*(arg2 + 0x18) + 0x98)
                                void* rbx_6 = &r9_10[sx.q(*(r14_3 + rdi_4 + 8)) * 2]
                                
                                if (r9_10 != rbx_6)
                                    do
                                        uint64_t r8_16 = zx.q(r9_10[1] * *(r10_5 + 0xb8))
                                        uint64_t rdx_11 = zx.q(*r9_10)
                                        r9_10 = &r9_10[2]
                                        *(rdx_11 + *(r11_5 + 0x78)) =
                                            *(r8_16 + (i_4 << 2) + *(r10_5 + 0x18))
                                    while (r9_10 != rbx_6)
                                    
                                    rsi = arg1
                                
                                void* r9_11 = *(r14_3 + rdi_4 + 0x10)
                                void* rbx_7 = r9_11 + (sx.q(*(r14_3 + rdi_4 + 0x18)) << 3)
                                
                                while (r9_11 != rbx_7)
                                    uint64_t r8_19 = zx.q(*(r9_11 + 4) * *(r10_5 + 0xbc))
                                    uint64_t rdx_12 = zx.q(*r9_11)
                                    r9_11 += 8
                                    *(rdx_12 + *(r11_5 + 0x78)) =
                                        *(r8_19 + *(r10_5 + 0x28) + (i_4 << 2))
                                
                                *(r11_5 + 0x108) |= 1
                                rdi = arg2
                            
                            rbx_2 = nullptr
                            int32_t j_2 = 0
                            
                            if (*(rbp_3 + 0x738) s> 0)
                                int64_t* r14_4 = nullptr
                                int64_t r10_6 = 0
                                
                                do
                                    int64_t* rax_56 = *(rsi + 0xc60)
                                    
                                    if (*(rax_56 + r13_2 + 8) s> j_2)
                                        int64_t rsi_2 = *(rax_56 + r13_2)
                                        int64_t rbx_8 = *(rbp_3 + 0x730)
                                        int32_t* r9_12 = *(r14_4 + rsi_2)
                                        void* r11_6 = *(*(rdi + 0x18) + 0x98)
                                        void* rdi_5 = &r9_12[sx.q(*(r14_4 + rsi_2 + 8)) * 2]
                                        
                                        while (r9_12 != rdi_5)
                                            uint64_t r8_22 = zx.q(r9_12[1] * *(r11_6 + 0xb8))
                                            uint64_t rdx_13 = zx.q(*r9_12)
                                            r9_12 = &r9_12[2]
                                            *(rdx_13 + *(r10_6 + rbx_8 + 0x48)) =
                                                *(r8_22 + *(r11_6 + 0x18) + (i_4 << 2))
                                        
                                        int32_t* r9_13 = *(r14_4 + rsi_2 + 0x10)
                                        void* rdi_6 = &r9_13[sx.q(*(r14_4 + rsi_2 + 0x18)) * 2]
                                        
                                        while (r9_13 != rdi_6)
                                            uint64_t r8_25 = zx.q(r9_13[1] * *(r11_6 + 0xbc))
                                            uint64_t rdx_14 = zx.q(*r9_13)
                                            r9_13 = &r9_13[2]
                                            *(rdx_14 + *(r10_6 + rbx_8 + 0x48)) =
                                                *(r8_25 + (i_4 << 2) + *(r11_6 + 0x28))
                                        
                                        *(r10_6 + rbx_8 + 0xd8) |= 1
                                        rsi = arg1
                                    
                                    rdi = arg2
                                    j_2 += 1
                                    r10_6 += 0x368
                                    r14_4 = &r14_4[4]
                                while (j_2 s< *(rbp_3 + 0x738))
                                
                                r14_3 = var_78_1
                                rbx_2 = nullptr
                            
                            i_4 = zx.q(i_3)
                            rcx_27 = var_88_1
                            r15_2 = var_80_1
                        
                        rcx_27 = &rcx_27[9]
                        rbp_2 = var_68_1
                        i_2 = arg_20.d + 1
                        rdi = arg2
                        r14_3 = &r14_3[4]
                        r13_2 += 0x10
                        arg_20.d = i_2
                        var_88_1 = rcx_27
                        var_78_1 = r14_3
                    while (i_2 s< *(rbp_2 + 0xa8))
                    r14_1 = rsi + 0xd10
            
            i_4 = zx.q(i_4.d + 1)
            result = *(rdi + 0x10)
            rcx_22 = &var_70_1[1]
            r15_2 = &r15_2[1]
            i_3 = i_4.d
            var_70_1 = rcx_22
            var_80_1 = r15_2
        while (i_4.d s< result[1].d)

return result
