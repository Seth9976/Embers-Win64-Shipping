// 函数: sub_1426ba550
// 地址: 0x1426ba550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result
result.b = *(arg1 + 0x263) & 0xf7
bool cond:0 = (*(arg1 + 0x88) & 1) == 0
*(arg1 + 0x263) = result.b

if (not(cond:0))
    uint32_t rcx = zx.d(*(arg1 + 0x260))
    int32_t rdx_1 = *(arg1 + 0x118)
    
    if (rcx s< rdx_1 && (result.b & 0x44) == 0)
        if (*(arg1 + 0x1a0) != 0)
            if ((*(arg1 + 0x1a8) & 2) == 0)
                return sub_1426bacd0(arg1)
        else if ((*(arg1 + 0x1a8) & 1) != 0 && (*(arg1 + 0x1a8) & 2) == 0)
            return sub_1426bacd0(arg1)
        
        uint32_t rax = zx.d(*(arg1 + 0x19a))
        *(arg1 + 0x178) = rcx
        void* r15_1 = nullptr
        uint32_t arg_8 = rax
        int32_t i = 0
        void* arg_18 = nullptr
        
        if (rdx_1 s> 0)
            do
                void* rax_1 = *(arg1 + 0x110)
                int64_t* rdx_3 = rax_1 + 0x30 + r15_1
                int64_t* rdi_3 = *(arg1 + 0x120) + 0x20 + zx.q(*(r15_1 + rax_1 + 0x40)) * 0x38
                
                if (rdi_3 != rdx_3)
                    uint32_t count = rdx_3[1].d
                    int64_t r12_1 = *rdx_3
                    int32_t r8_1 = *(rdi_3 + 0xc)
                    rdi_3[1].d = count
                    
                    if (count != 0 || r8_1 != 0)
                        sub_1405da9e0(rdi_3, count, r8_1)
                        memcpy(*rdi_3, r12_1, count)
                    else
                        *(rdi_3 + 0xc) = 0
                
                i += 1
                r15_1 += 0x58
            while (i s< *(arg1 + 0x118))
            
            rcx = zx.d(*(arg1 + 0x260))
            r15_1 = nullptr
        
        int64_t rdx_6 = *(arg1 + 0x190)
        int64_t rax_4 = *(arg1 + 0x110)
        *(arg1 + 0x17c) = 0xffffffff
        int16_t arg_10
        int512_t entry_zmm2
        
        if (*(zx.q(rcx.w) * 0x58 + rax_4 + 8) == rdx_6)
        label_1426ba788:
            int64_t* rsi_1 = *(arg1 + 0x190)
            int64_t* rcx_8 = zx.q(*(arg1 + 0x260)) * 0x58 + *(arg1 + 0x110)
            *(arg1 + 0x174) = data_143b57f58
            data_143b57f58 += 1
            *(arg1 + 0x180) = (*(arg1 + 0x180) & 0xfffffffd) | 4
            arg_10 = *(arg1 + 0x198)
            int16_t arg_12 = *(*(arg1 + 0x190) + 0x50)
            *(arg1 + 0x168) = arg_10.d
            
            if (rcx_8[1] == 0)
                rcx_8[1] = *(zx.q(*(arg1 + 0x260)) * 0x58 + *(arg1 + 0x110))
                sub_1426b85d0(*rcx_8, arg1 + 0x140)
            
            int32_t rax_26
            
            if ((*(arg1 + 0x19b) & 1) != 0)
                arg_10.d = 0xffffffff
                *(arg1 + 0x16c) = arg_10.d
                arg_10.d = 0xffffffff
                rax_26 = arg_10.d
            else
                int16_t rcx_10 = *(arg1 + 0x18a)
                int64_t* rdx_12 = &arg_10
                arg_10 = *(arg1 + 0x188)
                
                if (rcx_10 == 0)
                    rdx_12 = arg1 + 0x188
                
                arg_12 = rcx_10 - 1
                sub_1426c1870(arg1, rdx_12)
                void* rcx_12 = *(arg1 + 0x140)
                *(zx.q(*(*(arg1 + 0x190) + 0x52))
                    + *(zx.q(*(rcx_12 + 0x260)) * 0x58 + *(rcx_12 + 0x110) + 0x30)) = 0xffff
                *(arg1 + 0x16c) = *(arg1 + 0x188)
                rax_26 = *(arg1 + 0x18c)
            
            *(arg1 + 0x170) = rax_26
            int32_t rax_48
            int64_t* rdi_4
            
            if (rsi_1 == 0)
            label_1426bab2a:
                rdi_4.b = 1
            label_1426bab2d:
                rax_48 = *(arg1 + 0x180)
                
                if ((rax_48.b & 2) != 0)
                    entry_zmm2 = sub_1426be250(arg1)
                    rax_48 = *(arg1 + 0x180)
            else
                while (true)
                    if (r15_1 != 0)
                    label_1426baa5d:
                        int16_t rax_42 = *(arg1 + 0x260)
                        int16_t rcx_29 = *(arg1 + 0x18c)
                        int16_t r8_13 = *(r15_1 + 0x50)
                        bool c_1 = rax_42 u< rcx_29
                        
                        if (rax_42 == rcx_29)
                            c_1 = r8_13 u< *(arg1 + 0x18e)
                        
                        rdi_4.b = c_1
                        
                        if (rdi_4.b == 0)
                            break
                        
                        if ((*(r15_1 + 0x68) & 1) == 0)
                            goto label_1426bab2d
                        
                        void* r9_7 = zx.q(rax_42) * 0x58 + *(arg1 + 0x110)
                        void* rax_44 = *(r9_7 + 8)
                        bool cond:6_1
                        
                        if (rax_44 == 0 || *(rax_44 + 0x50) != r8_13)
                            int64_t rax_45 = sx.q(*(r9_7 + 0x28))
                            
                            if (rax_45.d s> 0)
                                int64_t rcx_30 = 0
                                rax_44 = *(r9_7 + 0x20)
                                
                                while (true)
                                    void* rdx_22 = *rax_44
                                    
                                    if (rdx_22 != 0 && *(rdx_22 + 0x50) == r8_13)
                                        cond:6_1 = *(rax_44 + 8) == 0
                                        break
                                    
                                    rcx_30 += 1
                                    rax_44 += 0x10
                                    
                                    if (rcx_30 s>= rax_45)
                                        goto label_1426baaeb
                                
                                goto label_1426bab1e
                            
                        label_1426baaeb:
                            int64_t rax_46 = sx.q(*(r9_7 + 0x18))
                            
                            if (rax_46.d s<= 0)
                                goto label_1426bab2d
                            
                            int64_t rax_47 = 0
                            
                            while (true)
                                void* rcx_31 = *(*(r9_7 + 0x10) + (rax_47 << 3))
                                
                                if (rcx_31 != 0 && *(rcx_31 + 0x50) == r8_13)
                                    break
                                
                                rax_47 += 1
                                
                                if (rax_47 s>= rax_46)
                                    goto label_1426bab2d
                        else
                            cond:6_1 = *(r9_7 + 0x41) == 1
                        label_1426bab1e:
                            rax_44.b = cond:6_1
                            
                            if (rax_44.b == 0)
                                goto label_1426bab2d
                    else
                        int32_t rax_28 = sub_1426afb00(rsi_1, arg1 + 0x140, &arg_8)
                        
                        if ((*(arg1 + 0x180) & 2) == 0)
                            if (rax_28 == 0xfffffffe)
                                int64_t* r14_1 = &rsi_1[9]
                                rdi_4 = rsi_1
                                rsi_1 = *r14_1
                                
                                if (rsi_1 == 0)
                                    sub_1426b86b0(rdi_4, arg1 + 0x140)
                                    int16_t rdx_16 = *(arg1 + 0x260)
                                    
                                    if (rdx_16 == 0)
                                        goto label_1426bab2a
                                    
                                    sub_1426ac5c0(zx.q(rdx_16) * 0x58 + *(arg1 + 0x110), 
                                        arg1 + 0x140, rdx_16)
                                    int64_t r15_2 = sx.q(*(arg1 + 0x160))
                                    arg_10 = *(arg1 + 0x260)
                                    arg_12.b = arg_8.b
                                    int32_t rax_32 = (r15_2 + 1).d
                                    *(arg1 + 0x160) = rax_32
                                    
                                    if (rax_32 s> *(arg1 + 0x164))
                                        sub_1405a4cf0(arg1 + 0x158)
                                    
                                    *(*(arg1 + 0x158) + (r15_2 << 2)) = arg_10.d
                                    *(arg1 + 0x260) -= 1
                                    rsi_1 = *(*(zx.q(*(arg1 + 0x260)) * 0x58 + *(arg1 + 0x110) + 8)
                                        + 0x48)
                                    
                                    if (rsi_1 == 0)
                                        goto label_1426bab2a
                                    
                                    r15_1 = arg_18
                                
                                int32_t r8_12
                                
                                if (*r14_1 == rsi_1)
                                    int64_t rdx_20 = sx.q(rsi_1[0xc].d)
                                    r8_12 = 0
                                    int64_t rcx_25 = 0
                                    
                                    if (rdx_20.d s> 0)
                                        void* rax_39 = rsi_1[0xb]
                                        
                                        do
                                            if (*rax_39 == rdi_4)
                                                goto label_1426baa20
                                            
                                            if (*(rax_39 + 8) == rdi_4)
                                                goto label_1426baa20
                                            
                                            r8_12 += 1
                                            rcx_25 += 1
                                            rax_39 += 0x30
                                        while (rcx_25 s< rdx_20)
                                    
                                    r8_12 = -2
                                else
                                    void* rcx_23 = *(arg1 + 0x140)
                                    r8_12 = sx.d(*(
                                        *(zx.q(*(rcx_23 + 0x260)) * 0x58 + *(rcx_23 + 0x110) + 0x30)
                                        + zx.q(*(rsi_1 + 0x52))))
                                
                            label_1426baa20:
                                sub_1426b7fb0(rsi_1, arg1 + 0x140, r8_12, &arg_8)
                            else if (rax_28 s>= 0 && rax_28 s< rsi_1[0xc].d)
                                int64_t rax_41 = rsi_1[0xb]
                                int64_t** rcx_28 = sx.q(rax_28) * 0x30
                                r15_1 = *(rcx_28 + rax_41 + 8)
                                rsi_1 = *(rcx_28 + rax_41)
                                arg_18 = r15_1
                            
                            if (rsi_1 != 0)
                                continue
                            else if (r15_1 == 0)
                                goto label_1426bab2a
                            
                            goto label_1426baa5d
                    
                    rdi_4.b = 0
                    break
                
                entry_zmm2 = sub_1426be250(arg1)
                rax_48 = *(arg1 + 0x180)
            
            result = rax_48 & 0xfffffffb
            *(arg1 + 0x180) = result
            
            if ((result.b & 2) == 0)
                char var_45
                char var_45_1 = var_45 & 0xfc
                int64_t var_50_1 = 0
                *(arg1 + 0x188) = -1.o
                int64_t var_48
                *(arg1 + 0x198) = var_48
                *(arg1 + 0x1a8) &= 0xfffffffd
                
                if (rdi_4.b != 0)
                    if (*(sx.q(*(arg1 + 0x118)) * 0x58 + *(arg1 + 0x110) - 0x17) == 1)
                        *(arg1 + 0x180) |= 1
                        int64_t r15_3 = sx.q(*(arg1 + 0x118))
                        void* r14_3 = r15_3 * 0x58 + *(arg1 + 0x110)
                        int64_t* rdi_5 = *(r14_3 - 0x50)
                        *(r14_3 - 0x17) = 2
                        
                        if (rdi_5 != 0 && *(arg1 + 0x118) != 0)
                            arg_12 = rdi_5[0xa].w
                            arg_10 = sub_1426b0430(arg1, rdi_5)
                            sub_1426bc4d0(arg1 + 0x1c0, &arg_10)
                        
                        *(arg1 + 0x180) |= 8
                        int64_t* rcx_36 = rdi_5
                        int64_t rsi_3 = zx.q(*(rdi_5 + 0x52)) + *(r14_3 - 0x28)
                        
                        if ((*(rdi_5 + 0x55) & 4) != 0)
                            rcx_36 = sub_1426b2ab0(rcx_36, arg1, rsi_3)
                        
                        int32_t rax_55
                        
                        if (rcx_36 == 0)
                            rax_55 = 2
                        else
                            rax_55 = (*(*rcx_36 + 0x2b8))(rcx_36, arg1, rsi_3)
                        
                        if (*(r14_3 - 0x17) == 2 && *(arg1 + 0x118) == r15_3.d)
                            sub_1426b8c80(arg1, rdi_5, rax_55, entry_zmm2)
                        
                        *(arg1 + 0x180) &= 0xfffffffe
                    
                    *(arg1 + 0x1a8) &= 0xfffffffe
                    *(arg1 + 0x1a0) = arg_18
                    int32_t r13_1
                    r13_1.b = arg_18 == 0
                    *(arg1 + 0x1a8) |= r13_1
                
                return sub_1426bacd0(arg1)
            
            *(arg1 + 0x263) |= 8
        else
            arg_10.d = 0xffffffff
            char rax_5
            rax_5, entry_zmm2 = sub_1426ac720(arg1, rdx_6, *(arg1 + 0x198), &arg_8, &arg_10)
            
            if (rax_5 != 0)
                int64_t r8_4 = sx.q(arg_10.d)
                
                if (r8_4.d != 0xffffffff)
                    void* rdx_7 = *(arg1 + 0x190)
                    int16_t rax_7
                    
                    if (r8_4.d s< 0 || r8_4.d s>= *(rdx_7 + 0x60))
                        rax_7 = *(rdx_7 + 0x8c) + 1
                    else
                        int64_t* r9_4 = r8_4 * 0x30 + *(rdx_7 + 0x58)
                        void* rax_6 = *r9_4
                        
                        if (rax_6 != 0)
                            rax_7 = *(rax_6 + 0x50)
                        else
                            rax_6 = r9_4[1]
                            
                            if (rax_6 == 0)
                                rax_7 = *(rdx_7 + 0x8c) + 1
                            else
                                rax_7 = *(rax_6 + 0x50)
                    
                    *(arg1 + 0x17c) = rax_7
                    int16_t rax_10
                    
                    if (r8_4.d + 1 s< 0 || r8_4.d + 1 s>= *(rdx_7 + 0x60))
                        rax_10 = *(rdx_7 + 0x8c) + 1
                    else
                        int64_t* r8_8 = sx.q(r8_4.d + 1) * 0x30 + *(rdx_7 + 0x58)
                        void* rax_9 = *r8_8
                        
                        if (rax_9 != 0)
                            rax_10 = *(rax_9 + 0x50)
                        else
                            rax_9 = r8_8[1]
                            
                            if (rax_9 == 0)
                                rax_10 = *(rdx_7 + 0x8c) + 1
                            else
                                rax_10 = *(rax_9 + 0x50)
                    
                    *(arg1 + 0x17e) = rax_10
                
                goto label_1426ba788
            
            result = *(arg1 + 0x154)
            *(arg1 + 0x150) = 0
            
            if (result s< 0 && result != 0)
                return sub_1405a5130(arg1 + 0x148, 0)

return result
