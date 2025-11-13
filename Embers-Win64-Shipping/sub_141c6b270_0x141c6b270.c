// 函数: sub_141c6b270
// 地址: 0x141c6b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* rsi = arg1
int64_t rbp = sx.q(arg2)
int64_t var_50 = rbp
int64_t result = rsi->__offset(0x40).q

if (*(result + (rbp << 3)) != 0)
    int32_t r14_1 = 0
    int64_t* r13_2 = rbp * 0x3f0 + rsi->__offset(0xc8).q
    int64_t* var_80_1 = r13_2
    int64_t r9_1 = sx.q(r13_2[0x17].d)
    
    if (r9_1.d != 0xffffffff)
        void* r13_3 = rsi + 0xe8
        int32_t* rcx_4
        
        if (*(r13_3 + 8) == *(r13_3 + 0x34))
        label_141c6b33e:
            rcx_4 = nullptr
        else
            void* rcx_1 = *(r13_3 + 0x40)
            void* r8_1 = r13_3 + 0x38
            
            if (rcx_1 != 0)
                r8_1 = rcx_1
            
            int32_t rax_1 = *(r8_1 + (((sx.q(*(r13_3 + 0x48)) - 1) & r9_1) << 2))
            
            if (rax_1 == 0xffffffff)
            label_141c6b33e:
                rcx_4 = nullptr
            else
                while (true)
                    rcx_4 = sx.q(rax_1) * 0x78 + *r13_3
                    
                    if (*rcx_4 == r9_1.d)
                        break
                    
                    rax_1 = rcx_4[0x1c]
                    
                    if (rax_1 == 0xffffffff)
                        goto label_141c6b33e
                
                if (rax_1 == 0xffffffff)
                label_141c6b33e:
                    rcx_4 = nullptr
        
        int32_t arg_20 = rbp.d
        void* r12_1 = &rcx_4[2]
        
        if (rcx_4 == 0)
            r12_1 = nullptr
        
        int64_t rcx_5 = sx.q(*(r12_1 + 8))
        
        if (rcx_5.d != 0)
            int32_t rdi_1 = 0
            int64_t rbx_1 = 0
            int64_t r15
            r15.b = **r12_1 != rbp.d
            
            do
                int64_t r9_2 = sx.q(rdi_1)
                rbx_1 += 1
                rdi_1 += 1
                
                if (rbx_1 s< rcx_5)
                    int64_t rcx_6 = *r12_1 + (rbx_1 << 2)
                    
                    do
                        int32_t rax_4
                        rax_4.b = *rcx_6 != rbp.d
                        
                        if (zx.d(r15.b) != rax_4)
                            break
                        
                        rdi_1 += 1
                        rbx_1 += 1
                        rcx_6 += 4
                    while (rbx_1 s< rcx_5)
                
                int32_t rbp_2 = rdi_1 - r9_2.d
                
                if (r15.b != 0)
                    if (r14_1 != r9_2.d)
                        int64_t rcx_7 = *r12_1
                        memmove(rcx_7 + (sx.q(r14_1) << 2), rcx_7 + (r9_2 << 2), rbp_2 << 2)
                    
                    r14_1 += rbp_2
                
                rbp = zx.q(arg2)
                r15.b ^= 1
            while (rbx_1 s< rcx_5)
            
            rsi = arg1
            *(r12_1 + 8) = r14_1
        
        if ((rcx_5.d == 0 || r14_1 == 0) && *(r12_1 + 0x18) == 0 && *(r12_1 + 0x28) == 0)
            sub_141c6bbe0(r13_3, var_80_1[0x17].d)
        
        r13_2 = var_80_1
    
    void* rbx_2 = &r13_2[0x1a]
    int32_t i_1 = 0
    void* var_88_1 = rbx_2
    int32_t i = 0
    char rcx_11 = 0
    uint64_t var_68
    
    do
        void* r8_5 = rbx_2 - 8
        int32_t* r15_1 = *r8_5
        int64_t r12_2 = 0
        uint64_t rdx_7 = sx.q(*rbx_2) << 2 u>> 2
        
        if (r15_1 u> &r15_1[sx.q(*rbx_2)])
            rdx_7 = 0
        
        if (rdx_7 != 0)
            uint64_t r9_4 = zx.q(rcx_11) << 4
            var_68 = r9_4
            void* r10_1 = r9_4 + 0x10
            
            do
                int64_t rsi_2 = sx.q(*r15_1)
                int32_t* rbx_4
                
                if (rsi->__offset(0xf0).d == rsi->__offset(0x11c).d)
                label_141c6b501:
                    rbx_4 = nullptr
                else
                    void* rcx_12 = rsi->__offset(0x128).q
                    void* __offset(_RTL_CRITICAL_SECTION, 0x120) r8_6 = rsi + 0x120
                    
                    if (rcx_12 != 0)
                        r8_6 = rcx_12
                    
                    int32_t rax_10 = *(r8_6 + (((sx.q(rsi->__offset(0x130).d) - 1) & rsi_2) << 2))
                    
                    if (rax_10 == 0xffffffff)
                    label_141c6b501_1:
                        rbx_4 = nullptr
                    else
                        while (true)
                            rbx_4 = sx.q(rax_10) * 0x78 + rsi->__offset(0xe8).q
                            
                            if (*rbx_4 == rsi_2.d)
                                break
                            
                            rax_10 = rbx_4[0x1c]
                            
                            if (rax_10 == 0xffffffff)
                                goto label_141c6b501_2
                        
                        if (rax_10 == 0xffffffff)
                        label_141c6b501_2:
                            rbx_4 = nullptr
                
                void* rdi_3 = r9_4 + 0x18 + rbx_4
                
                if (rbx_4 == 0)
                    rdi_3 = r10_1
                
                int32_t rdx_11 = *(rdi_3 + 8)
                int32_t rcx_14 = rdx_11 - 1
                
                if (rcx_14 s>= 0)
                    int64_t r9_5 = *rdi_3
                    int64_t rax_11 = sx.q(rcx_14)
                    int64_t temp2_1
                    
                    do
                        if (*(r9_5 + (rax_11 << 3)) == rbp.d)
                            int32_t rax_14 = rdx_11 - rcx_14 - 1
                            
                            if (rax_14 s>= 1)
                                rax_14 = 1
                            
                            if (rax_14 != 0)
                                memcpy(r9_5 + (sx.q(rcx_14) << 3), 
                                    r9_5 + (sx.q(rdx_11 - rax_14) << 3), rax_14 << 3)
                                rdx_11 = *(rdi_3 + 8)
                            
                            *(rdi_3 + 8) = rdx_11 - 1
                            break
                        
                        rcx_14 -= 1
                        temp2_1 = rax_11
                        rax_11 -= 1
                    while (temp2_1 - 1 s>= 0)
                
                void* rax_17 = &rbx_4[4]
                
                if (rbx_4 == 0)
                    rax_17 = 8
                
                if (*rax_17 == 0)
                    void* rax_18 = &rbx_4[8]
                    
                    if (rbx_4 == 0)
                        rax_18 = 0x18
                    
                    if (*rax_18 == 0)
                        void* rax_19 = &rbx_4[0xc]
                        
                        if (rbx_4 == 0)
                            rax_19 = 0x28
                        
                        if (*rax_19 == 0)
                            sub_141c6bbe0(rsi + 0xe8, rsi_2.d)
                
                r9_4 = var_68
                r15_1 = &r15_1[1]
                r12_2 += 1
                r10_1 = r9_4 + 0x10
            while (r12_2 != rdx_7)
            
            rbx_2 = var_88_1
            i = i_1
        
        int32_t rax_20 = *(rbx_2 + 4)
        *rbx_2 = 0
        
        if (rax_20 s<= 0xffffffff)
            sub_1405dadb0(r8_5, 0)
        
        rsi = arg1
        i += 1
        rbx_2 += 0x10
        i_1 = i
        var_88_1 = rbx_2
        rcx_11 = i.b
    while (i s< 2)
    
    int64_t* r13_5 = var_80_1
    bool cond:0_1 = *r13_5 == 0
    r13_5[0x17].d = 0xffffffff
    r13_5[0x18] = -1
    
    if (not(cond:0_1))
        int64_t rdi_4 = sx.q(rsi->__offset(0x150).d)
        int32_t rax_21 = (rdi_4 + 1).d
        rsi->__offset(0x150).d = rax_21
        
        if (rax_21 s> rsi->__offset(0x154).d)
            sub_1405a4f90(rsi + 0x148)
        
        int64_t* rcx_22 = (rdi_4 << 4) + rsi->__offset(0x148).q
        *rcx_22 = *r13_5
        void* rax_23 = r13_5[1]
        rcx_22[1] = rax_23
        
        if (rax_23 != 0)
            *(rax_23 + 8) += 1
        
        int128_t var_78 = zx.o(0)
        
        if (r13_5 != &var_78)
            *r13_5 = 0
            sub_1405aeff0(&r13_5[1], &var_78:8)
            void* rcx_24 = var_78:8.q
            
            if (rcx_24 != 0)
                int32_t rax_24 = *(rcx_24 + 8)
                *(rcx_24 + 8) -= 1
                
                if (rax_24 == 1)
                    int64_t* rbx_6 = var_78:8.q
                    (**rbx_6)(rbx_6)
                    int32_t rax_27 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        int64_t* rcx_26 = var_78:8.q
                        (*(*rcx_26 + 8))(rcx_26, 1)
    
    void* r12_3 = &r13_5[0x15]
    r13_5[2] = 0
    int64_t* rdi_5 = *r12_3
    void* r15_4 = &rdi_5[sx.q(*(r12_3 + 8)) * 4]
    
    if (rdi_5 != r15_4)
        do
            int64_t* rbx_7 = rdi_5[1]
            
            if (rbx_7 != 0)
                int32_t rax_30 = 0
                bool z_1
                
                if (0 == rbx_7[1].d)
                    rbx_7[1].d = 0
                    z_1 = true
                else
                    rax_30 = rbx_7[1].d
                    z_1 = false
                
                if (not(z_1))
                    bool z_3
                    
                    do
                        bool z_2
                        
                        if (rax_30 == rbx_7[1].d)
                            rbx_7[1].d = rax_30 + 1
                            z_2 = true
                        else
                            rbx_7[1].d
                            z_2 = false
                        
                        if (z_2)
                            void* rsi_3 = *rdi_5
                            
                            if (rsi_3 != 0)
                                int64_t r14_3 = *(arg1->__offset(0x40).q + (var_50 << 3))
                                sub_140865c40(rsi_3 + 0x90, &i_1, r14_3)
                                int64_t i_2 = sx.q(i_1)
                                int64_t rcx_29
                                
                                if (i_2.d == 0xffffffff)
                                    rcx_29 = 0
                                else
                                    rcx_29 = *(rsi_3 + 0x90) + i_2 * 0x18
                                
                                int64_t rax_34 = rcx_29 + 8
                                
                                if (rcx_29 == 0)
                                    rax_34 = 0
                                
                                if (rax_34 != 0)
                                    sub_140868c90(rsi_3 + 0x90, r14_3)
                            
                            rbx_7[1].d -= 1
                            
                            if (rbx_7[1].d == 1)
                                (**rbx_7)(rbx_7)
                                int32_t rax_38 = *(rbx_7 + 0xc)
                                *(rbx_7 + 0xc) -= 1
                                
                                if (rax_38 == 1)
                                    (*(*rbx_7 + 8))(rbx_7, 1)
                            
                            break
                        
                        rax_30 = 0
                        
                        if (0 == rbx_7[1].d)
                            rbx_7[1].d = 0
                            z_3 = true
                        else
                            rax_30 = rbx_7[1].d
                            z_3 = false
                    while (not(z_3))
            
            rdi_5 = &rdi_5[4]
        while (rdi_5 != r15_4)
        
        r13_5 = var_80_1
    
    sub_141c6c7f0(r12_3, 0)
    char rax_41 = *(r13_5 + 0x3d1)
    
    if ((rax_41 & 1) != 0)
        int64_t* rcx_34 = arg1->__offset(0x30).q
        (*(*rcx_34 + 0x48))(rcx_34, zx.q(arg2))
        rax_41 = *(r13_5 + 0x3d1)
    
    if ((rax_41 & 4) != 0)
        int64_t* rcx_35 = *(arg1->__offset(0x28).q + 0x50)
        (*(*rcx_35 + 0x20))(rcx_35, zx.q(arg2))
        rax_41 = *(r13_5 + 0x3d1)
    
    if ((rax_41 & 8) != 0)
        int64_t* rcx_36 = *(arg1->__offset(0x28).q + 0x40)
        (*(*rcx_36 + 0x28))(rcx_36, zx.q(arg2))
    
    r13_5[0x34].d = 0xffffffff
    sub_141c6cfc0(arg1, arg2)
    sub_141c45210(&r13_5[0x54])
    r13_5[0x39].b = 1
    int64_t r14_4 = sx.q(arg2)
    void* rbx_9 = arg1->__offset(0x28).q
    int64_t rdi_6 = *(arg1->__offset(0x40).q + (r14_4 << 3))
    int64_t* rax_48 = j_sub_140a82f30(0x10)
    
    if (rax_48 != 0)
        rax_48[1] = rdi_6
        *rax_48 = 0
        void** rcx_39 = *(rbx_9 + 0xa30)
        *(rbx_9 + 0xa30) = rax_48
        *rcx_39 = rax_48
    
    *(arg1->__offset(0x40).q + (r14_4 << 3)) = 0
    r13_5[0x1f].b = 1
    *(r13_5 + 0xfc) = 0xbf800000
    r13_5[0x20].d = 0xbf800000
    *(r13_5 + 0x104) = 0
    *(r13_5 + 0x10c) = 0
    *(r13_5 + 0x114) = 0xbf800000
    r13_5[0x23].d = 0xbf800000
    sub_141c452b0(&r13_5[0x24])
    sub_141c45220(&r13_5[0x2c])
    int64_t* var_60 = nullptr
    
    if (&r13_5[3] != &var_68)
        r13_5[3] = 0
        var_68 = 0
        sub_1405aeff0(&r13_5[4], &var_60)
        int64_t* rcx_44 = var_60
        
        if (rcx_44 != 0)
            rcx_44[1].d -= 1
            
            if (rcx_44[1].d == 1)
                int64_t* rbx_10 = var_60
                (**rbx_10)(rbx_10)
                int32_t rbp_3 = *(rbx_10 + 0xc)
                *(rbx_10 + 0xc) -= 1
                
                if (rbp_3 == 1)
                    int64_t* rcx_46 = var_60
                    (*(*rcx_46 + 8))(rcx_46, zx.q(rbp_3))
    
    r13_5[5].d = 0
    int32_t rax_53 = *(r13_5 + 0x3c)
    r13_5[7].d = 0
    
    if (rax_53 s< 0 && rax_53 != 0)
        sub_140775b10(&r13_5[6], 0)
    
    int32_t rax_54 = *(r13_5 + 0x5c)
    r13_5[0xb].d = 0
    
    if (rax_54 s< 0 && rax_54 != 0)
        sub_140775b10(&r13_5[0xa], 0)
    
    int32_t rax_55 = *(r13_5 + 0x6c)
    r13_5[0xd].d = 0
    
    if (rax_55 s< 0 && rax_55 != 0)
        sub_140775b10(&r13_5[0xc], 0)
    
    int32_t rax_56 = *(r13_5 + 0x29c)
    r13_5[0x53].d = 0
    
    if (rax_56 s< 0 && rax_56 != 0)
        sub_140775b10(&r13_5[0x52], 0)
    
    int32_t rax_57 = *(r13_5 + 0x7c)
    r13_5[0xf].d = 0
    
    if (rax_57 s< 0 && rax_57 != 0)
        sub_1405dadb0(&r13_5[0xe], 0)
    
    int32_t rax_58 = *(r13_5 + 0x8c)
    r13_5[0x11].d = 0
    
    if (rax_58 s< 0 && rax_58 != 0)
        sub_1405dadb0(&r13_5[0x10], 0)
    
    char rax_59 = *(r13_5 + 0x3d1)
    r13_5[0x12] = 0
    r13_5[0x13] = 0
    *(r13_5 + 0x3d2) &= 0xf9
    r13_5[0x14] = 0
    r13_5[0x7a].b = 0
    *(r13_5 + 0x3d4) = 0
    *(r13_5 + 0x3d1) = (rax_59 & 0x90) | 0x10
    result = arg1->__offset(0x178).q
    *(r14_4 + result) = 0

return result
