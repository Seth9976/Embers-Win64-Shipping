// 函数: sub_141825690
// 地址: 0x141825690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg2

if ((*(arg1 + 0x29) & 1) == 0)
    int64_t rax_2 = (*(*arg1 + 0x20))()
    int64_t* rdx = arg1[1]
    int64_t r15_1 = rax_2
    int32_t arg_20 = r13[1].d
    int32_t arg_18 = 0
    char arg_8 = 0
    int32_t* r8_1 = *rdx
    
    if (&r8_1[1] u> rdx[1])
        int32_t* rdx_1 = &arg_18
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        arg_18 = *r8_1
        *rdx += 4
    
    int64_t* rcx_3 = arg1[1]
    char* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u> rcx_3[1])
        (*(*arg1 + 0x150))(arg1, &arg_8, 1)
    else
        arg_8 = *rdx_2
        *rcx_3 += 1
    
    int64_t* rcx_5 = arg1[1]
    int32_t* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u> rcx_5[1])
        int32_t* rdx_5 = &arg_20
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_5, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_5, 4)
    else
        arg_20 = *rdx_4
        *rcx_5 += 4
    
    int64_t rsi_1 = sx.q(r13[1].d)
    int32_t i_8 = arg_20 - rsi_1.d
    int32_t rax_11 = rsi_1.d + i_8
    r13[1].d = rax_11
    
    if (rax_11 s> *(r13 + 0xc))
        sub_14090a6a0(r13)
    
    int64_t* rcx_10 = rsi_1 * 0x60 + *r13
    
    if (i_8 != 0)
        void* rax_13 = rcx_10 + 0x1c
        int32_t i
        
        do
            *rcx_10 = 0
            rcx_10 = &rcx_10[0xc]
            __builtin_memset(rax_13 - 0x14, 0, 0x18)
            __builtin_memset(rax_13 + 4, 0, 0x15)
            __builtin_memset(rax_13 + 0x1c, 0, 0x28)
            rax_13 += 0x60
            i = i_8
            i_8 -= 1
        while (i != 1)
    
    if ((*(arg1 + 0x29) & 1) == 0)
        uint64_t* r15_2 = *r13
        uint64_t rcx_11 = sx.q(r13[1].d)
        void* rbx_4 = &r15_2[rcx_11 * 0xc]
        
        if (r15_2 != rbx_4)
            do
                arg3 = sub_140a1d9d0(arg1, r15_2, arg3)
                r15_2 = &r15_2[0xc]
            while (r15_2 != rbx_4)
            
            rcx_11 = zx.q(r13[1].d)
            r15_2 = *r13
        
        void* rbx_7 = &r15_2[sx.q(rcx_11.d) * 0xc]
        
        if (r15_2 != rbx_7)
            do
                arg3 = sub_140a1d9d0(arg1, &r15_2[2], arg3)
                r15_2 = &r15_2[0xc]
            while (r15_2 != rbx_7)
            
            rcx_11 = zx.q(r13[1].d)
            r15_2 = *r13
        
        void* rbx_10 = &r15_2[sx.q(rcx_11.d) * 0xc]
        
        if (r15_2 != rbx_10)
            do
                sub_140b31010(arg1, &r15_2[4])
                r15_2 = &r15_2[0xc]
            while (r15_2 != rbx_10)
            
            rcx_11 = zx.q(r13[1].d)
            r15_2 = *r13
        
        void* rbx_13 = &r15_2[sx.q(rcx_11.d) * 0xc]
        
        if (r15_2 != rbx_13)
            do
                int64_t* rcx_15 = arg1[1]
                arg_8 = *(r15_2 + 0x34)
                char* rdx_10 = *rcx_15
                
                if (&rdx_10[1] u> rcx_15[1])
                    (*(*arg1 + 0x150))(arg1, &arg_8, 1)
                else
                    arg_8 = *rdx_10
                    *rcx_15 += 1
                
                *(r15_2 + 0x34) = arg_8
                r15_2 = &r15_2[0xc]
            while (r15_2 != rbx_13)
            
            rcx_11 = zx.q(r13[1].d)
            r15_2 = *r13
        
        void* r13_3 = &r15_2[sx.q(rcx_11.d) * 0xc]
        
        if (r15_2 == r13_3)
            r13 = arg2
        else
            void* rbx_14 = &r15_2[7]
            
            do
                (*(*arg1 + 8))(arg1, sx.q(*(rbx_14 + 8)) << 4, sx.q(*(rbx_14 + 0xc)) << 4)
                int32_t rax_24 = 0
                
                if ((arg1[5].b & 1) == 0)
                    rax_24 = *(rbx_14 + 8)
                
                int64_t* rcx_18 = arg1[1]
                arg_8.d = rax_24
                int32_t* rdx_14 = *rcx_18
                
                if (&rdx_14[1] u> rcx_18[1])
                    int32_t* rdx_15 = &arg_8
                    
                    if ((*(arg1 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg1, rdx_15, arg3)
                    else
                        (*(*arg1 + 0x150))(arg1, rdx_15, 4)
                else
                    arg_8.d = *rdx_14
                    *rcx_18 += 4
                
                int32_t rax_28 = arg_8.d
                
                if (rax_28 != 0)
                    char rcx_22 = *(arg1 + 0x29)
                    
                    if ((rcx_22 & 1) != 0 || rax_28 s<= 0
                            || ((*(arg1 + 0x2b) & 8) != 0 && rax_28 s> 0x100000))
                        *(arg1 + 0x29) = rcx_22 | 1
                    else if ((arg1[5].b & 1) == 0)
                        *(rbx_14 + 8) = rax_28
                        int32_t i_1 = 0
                        
                        if (rax_28 s> 0)
                            do
                                arg3 = sub_140a1d9d0(arg1, (sx.q(i_1) << 4) + *rbx_14, arg3)
                                i_1 += 1
                            while (i_1 s< *(rbx_14 + 8))
                    else
                        int32_t i_10 = *(rbx_14 + 8)
                        int32_t r12_1 = rax_28
                        int64_t* rsi_3 = *rbx_14
                        
                        if (i_10 != 0)
                            int32_t i_2
                            
                            do
                                int64_t rcx_23 = *rsi_3
                                
                                if (rcx_23 != 0)
                                    arg3 = sub_140a74f90(rcx_23)
                                
                                rsi_3 = &rsi_3[2]
                                i_2 = i_10
                                i_10 -= 1
                            while (i_2 != 1)
                            rax_28 = arg_8.d
                        
                        *(rbx_14 + 8) = 0
                        
                        if (*(rbx_14 + 0xc) != r12_1)
                            sub_14061cd70(rbx_14, r12_1)
                            rax_28 = arg_8.d
                        
                        int32_t i_3 = 0
                        
                        if (rax_28 s> 0)
                            do
                                int64_t rsi_4 = sx.q(*(rbx_14 + 8))
                                int32_t rax_29 = (rsi_4 + 1).d
                                *(rbx_14 + 8) = rax_29
                                
                                if (rax_29 s> *(rbx_14 + 0xc))
                                    sub_1405a4f90(rbx_14)
                                
                                int64_t rdx_19 = rsi_4 << 4
                                uint64_t* rdx_20 = rdx_19 + *rbx_14
                                
                                if (rdx_19 == neg.q(*rbx_14))
                                    rdx_20 = nullptr
                                else
                                    *rdx_20 = 0
                                    rdx_20[1] = 0
                                
                                arg3 = sub_140a1d9d0(arg1, rdx_20, arg3)
                                i_3 += 1
                            while (i_3 s< arg_8.d)
                else if ((arg1[5].b & 1) != 0)
                    int32_t i_9 = *(rbx_14 + 8)
                    int64_t* rsi_2 = *rbx_14
                    
                    if (i_9 != 0)
                        int32_t i_4
                        
                        do
                            int64_t rcx_20 = *rsi_2
                            
                            if (rcx_20 != 0)
                                arg3 = sub_140a74f90(rcx_20)
                            
                            rsi_2 = &rsi_2[2]
                            i_4 = i_9
                            i_9 -= 1
                        while (i_4 != 1)
                    
                    bool cond:7_1 = *(rbx_14 + 0xc) == 0
                    *(rbx_14 + 8) = 0
                    
                    if (not(cond:7_1))
                        sub_14061cd70(rbx_14, 0)
                
                r15_2 = &r15_2[0xc]
                rbx_14 += 0x60
            while (r15_2 != r13_3)
            
            r13 = arg2
            rcx_11 = zx.q(r13[1].d)
            r15_2 = *r13
        
        void* r12_4 = &r15_2[sx.q(rcx_11.d) * 0xc]
        
        if (r15_2 != r12_4)
            void* rbx_15 = &r15_2[0xa]
            
            do
                int64_t r9_1 = *arg1
                (*(r9_1 + 8))(arg1, sx.q(*rbx_15) * 0x18, sx.q(*(rbx_15 + 4)) * 0x18, r9_1, rax_2)
                int32_t rax_33
                
                if ((arg1[5].b & 1) == 0)
                    rax_33 = *rbx_15
                else
                    rax_33 = 0
                
                int64_t* rcx_29 = arg1[1]
                arg_8.d = rax_33
                int32_t* rdx_26 = *rcx_29
                
                if (&rdx_26[1] u> rcx_29[1])
                    int32_t* rdx_27 = &arg_8
                    
                    if ((*(arg1 + 0x29) & 0x20) != 0)
                        sub_140b54070(arg1, rdx_27, arg3)
                    else
                        (*(*arg1 + 0x150))(arg1, rdx_27, 4)
                else
                    arg_8.d = *rdx_26
                    *rcx_29 += 4
                
                int32_t rax_37 = arg_8.d
                
                if (rax_37 != 0)
                    char rcx_32 = *(arg1 + 0x29)
                    
                    if ((rcx_32 & 1) != 0 || rax_37 s<= 0
                            || ((*(arg1 + 0x2b) & 8) != 0 && rax_37 s> 0xaaaaa))
                        *(arg1 + 0x29) = rcx_32 | 1
                    else if ((arg1[5].b & 1) == 0)
                        int32_t i_5 = 0
                        *rbx_15 = rax_37
                        
                        if (rax_37 s> 0)
                            do
                                sub_141824ee0(arg1, *(rbx_15 - 8) + sx.q(i_5) * 0x18, arg3)
                                i_5 += 1
                            while (i_5 s< *rbx_15)
                    else
                        *rbx_15 = 0
                        
                        if (*(rbx_15 + 4) != rax_37)
                            sub_1405a5130(rbx_15 - 8, rax_37)
                            rax_37 = arg_8.d
                        
                        int32_t i_6 = 0
                        
                        if (rax_37 s> 0)
                            do
                                int64_t rsi_5 = sx.q(*rbx_15)
                                int32_t rax_38 = (rsi_5 + 1).d
                                *rbx_15 = rax_38
                                
                                if (rax_38 s> *(rbx_15 + 4))
                                    sub_1405a4df0(rbx_15 - 8)
                                
                                int32_t* rdx_30 = *(rbx_15 - 8) + rsi_5 * 0x18
                                
                                if (rdx_30 == 0)
                                    rdx_30 = nullptr
                                else
                                    __builtin_memset(rdx_30, 0, 0x18)
                                
                                sub_141824ee0(arg1, rdx_30, arg3)
                                i_6 += 1
                            while (i_6 s< arg_8.d)
                else if ((arg1[5].b & 1) != 0)
                    *rbx_15 = rax_37
                    
                    if (*(rbx_15 + 4) != rax_37)
                        sub_1405a5130(rbx_15 - 8, 0)
                
                r15_2 = &r15_2[0xc]
                rbx_15 += 0x60
            while (r15_2 != r12_4)
        
        r15_1 = rax_2
    
    char rax_46 = *(arg1 + 0x29)
    
    if ((rax_46 & 1) == 0 && (arg1[5].b & 2) != 0)
        int64_t rax_43 = (*(*arg1 + 0x20))(arg1)
        int64_t r8_6 = *arg1
        arg_18 = rax_43.d - r15_1.d
        (*(r8_6 + 0x178))(arg1, r15_1, r8_6)
        int64_t* rdx_33 = arg1[1]
        int32_t* r8_7 = *rdx_33
        
        if (&r8_7[1] u> rdx_33[1])
            int32_t* rdx_34 = &arg_18
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_34, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_34, 4)
        else
            arg_18 = *r8_7
            *rdx_33 += 4
        
        (*(*arg1 + 0x178))(arg1, rax_43)
        rax_46 = *(arg1 + 0x29)
    
    if ((rax_46 & 1) == 0 && (arg1[5].b & 1) != 0)
        sub_14181bc60(*r13, r13[1].d, 0, arg_8)
        void* i_7 = *r13
        
        for (void* r11_3 = sx.q(r13[1].d) * 0x60 + i_7; i_7 != r11_3; i_7 += 0x60)
            void* rdx_37 = *(i_7 + 0x48)
            int64_t r8_8 = 0
            void* r10_1 = rdx_37 + sx.q(*(i_7 + 0x50)) * 0x18
            
            while (rdx_37 != r10_1)
                uint64_t rax_49 = zx.q(*(rdx_37 + 0x14))
                rdx_37 += 0x18
                r8_8 += rax_49
            
            *(i_7 + 0x58) = r8_8
    
    (*(*arg1 + 0x178))(arg1, zx.q(arg_18) + r15_1)

return arg1
