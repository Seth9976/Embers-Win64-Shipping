// 函数: sub_142b18ea0
// 地址: 0x142b18ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s> 0)
    return 0

int32_t rax_1 = *(arg3 + 0x18)
int64_t r15 = 0
int32_t r12

if ((rax_1.b & 0xc) != 0)
    r12 = *(arg3 + 0x1c) + 1
else
    r12 = 0

uint64_t r13
r13.b = 0
uint64_t result

while (true)
    int64_t rax_2 = sub_142aa4f90(arg1, arg4)
    int64_t rdx_1 = rax_2
    int32_t i = (rax_2 s>> 0x20).d
    
    if (i u< r12 && i u> 0x2000000)
        r13.b = 1
        
        do
            *(arg1[4] + (sx.q(arg1[0x2e].d - 1) << 3)) = rdx_1 & 0xffffffff00000000
            int64_t rax_6 = sub_142aa4f90(arg1, arg4)
            rdx_1 = rax_6
            int32_t i_8 = (rax_6 s>> 0x20).d
            i = i_8
            
            if (i_8 == 0)
                int32_t j
                
                do
                    *(arg1[4] + (sx.q(arg1[0x2e].d - 1) << 3)) = 0
                    int64_t rax_10 = sub_142aa4f90(arg1, arg4)
                    rdx_1 = rax_10
                    j = (rax_10 s>> 0x20).d
                    i = j
                while (j == 0)
            
            if (i u>= r12)
                break
        while (i u> 0x2000000)
    
    if (i != 0)
        char arg_20 = r13.b
        int32_t i_1
        
        do
            int64_t rax_11 = sub_142aa4f90(arg2, arg4)
            int64_t rdx_6 = rax_11
            i_1 = (rax_11 s>> 0x20).d
            
            if (i_1 u< r12 && i_1 u> 0x2000000)
                arg_20 = 1
                
                do
                    *(arg2[4] + (sx.q(arg2[0x2e].d - 1) << 3)) = rdx_6 & 0xffffffff00000000
                    int64_t rax_15 = sub_142aa4f90(arg2, arg4)
                    rdx_6 = rax_15
                    int64_t rax_19
                    
                    for (i_1 = (rax_15 s>> 0x20).d; i_1 == 0; i_1 = (rax_19 s>> 0x20).d)
                        *(arg2[4] + (sx.q(arg2[0x2e].d - 1) << 3)) = 0
                        rax_19 = sub_142aa4f90(arg2, arg4)
                        rdx_6 = rax_19
                    
                    if (i_1 u>= r12)
                        break
                while (i_1 u> 0x2000000)
                
                r13 = 1
        while (i_1 == 0)
        
        bool cond:2_1
        
        if (i != i_1)
            int64_t rcx_25 = *(arg3 + 0x20)
            
            if (rcx_25 != 0)
                char rdx_17 = *((zx.q(i) u>> 0x18) + rcx_25)
                
                if (rdx_17 != 0 || i u<= 1)
                    i = (i & 0xffffff) | zx.d(rdx_17) << 0x18
                else
                    i = sub_142b27270(arg3, i)
                
                char rdx_19 = *((zx.q(i_1) u>> 0x18) + *(arg3 + 0x20))
                
                if (rdx_19 != 0 || i_1 u<= 1)
                    i_1 = (i_1 & 0xffffff) | zx.d(rdx_19) << 0x18
                else
                    i_1 = sub_142b27270(arg3, i_1)
            
            cond:2_1 = i u< i_1
        else if (i != 1)
            continue
        else
            if (*arg4 s> 0)
                return 0
            
            int32_t rbp_1 = rax_1
            int32_t r12_3 = rbp_1 s>> 0xc
            uint32_t rdx_11
            uint32_t i_2
            
            if (r12_3 s>= 1)
                int64_t r9 = arg1[4]
                int64_t r10_1 = arg2[4]
                
                if (test_bit(rbp_1, 0xb))
                    int32_t r13_1 = 0
                    int32_t rcx_11 = 0
                    int64_t r12_4 = 0
                    int64_t rdi_2 = 0
                    
                    while (true)
                        int64_t rbp_2 = rdi_2
                        
                        while ((*(r9 + (rbp_2 << 3)) s>> 0x20).d - 1 u> 0x1ffffff)
                            r13_1 += 1
                            rbp_2 += 1
                        
                        int64_t r11_1 = r12_4
                        int32_t rbx_5
                        
                        while (true)
                            rbx_5 = (*(r10_1 + (r11_1 << 3)) s>> 0x20).d
                            
                            if (rbx_5 - 1 u<= 0x1ffffff)
                                break
                            
                            rcx_11 += 1
                            r11_1 += 1
                        
                        int64_t rax_25 = rbp_2
                        int64_t rcx_12 = r11_1
                        
                        do
                            i_2 = 0
                            
                            while (rax_25 s> rdi_2)
                                i_2 = zx.d(*(r9 + (rax_25 << 3) - 6))
                                rax_25 -= 1
                                
                                if (i_2 != 0)
                                    break
                            
                            rdx_11 = 0
                            
                            while (rcx_12 s> r12_4)
                                rdx_11 = zx.d(*(r10_1 + (rcx_12 << 3) - 6))
                                rcx_12 -= 1
                                
                                if (rdx_11 != 0)
                                    break
                            
                            if (i_2 != rdx_11)
                                goto label_142b191cb
                        while (i_2 != 0)
                        
                        if (rbx_5 == 1)
                            break
                        
                        rdi_2 = rbp_2 + 1
                        r13_1 += 1
                        r12_4 = r11_1 + 1
                        rcx_11 += 1
                    
                    r13 = zx.q(arg_20)
                    rbp_1 = rax_1
                else
                    int64_t rcx_10 = 0
                    int64_t rax_20 = 0
                    
                    while (true)
                        uint32_t rdx_10 = zx.d(*(r9 + (rax_20 << 3) + 2))
                        rax_20 += 1
                        
                        if (rdx_10 != 0)
                            uint32_t i_3
                            
                            do
                                i_3 = zx.d(*(r10_1 + (rcx_10 << 3) + 2))
                                rcx_10 += 1
                            while (i_3 == 0)
                            
                            if (rdx_10 != i_3)
                                cond:2_1 = rdx_10 u< i_3
                                goto label_142b19544
                            
                            if (rdx_10 == 0x100)
                                break
            
            if (not(test_bit(rbp_1, 0xa)))
            label_142b192c0:
                
                if (r12_3 s<= 1)
                    return 0
                
                int64_t rsi_1 = arg1[4]
                int64_t r14_1 = arg2[4]
                int32_t rbx_7 = 0x3f3f
                int64_t r11_3 = 0
                int64_t r9_2 = 0
                
                if ((rbp_1 & 0x600) == 0x200)
                    rbx_7 = 0xff3f
                
                int32_t rcx_17 = 0
                
                while (true)
                    int32_t r8 = *(rsi_1 + (r9_2 << 3))
                    r9_2 += 1
                    rcx_17 |= r8
                    int32_t rax_36 = r8 & rbx_7
                    
                    if (rax_36 != 0)
                        int32_t i_4
                        int32_t r10_3
                        
                        do
                            r10_3 = *(r14_1 + (r11_3 << 3))
                            r11_3 += 1
                            rcx_17 |= r10_3
                            i_4 = r10_3 & rbx_7
                        while (i_4 == 0)
                        
                        if (rax_36 != i_4)
                            if ((rbp_1 & 0x700) == 0x300)
                                if (rax_36 u> 0x100)
                                    if (r8 u<= 0xffff)
                                        rax_36 += 0x4000
                                    else
                                        rax_36 ^= 0xc000
                                
                                if (i_4 u> 0x100)
                                    if (r10_3 u<= 0xffff)
                                        i_4 += 0x4000
                                    else
                                        i_4 ^= 0xc000
                            
                            int32_t rcx_24 = 1
                            
                            if (rax_36 u< i_4)
                                rcx_24 = -1
                            
                            return zx.q(rcx_24)
                        
                        if (rax_36 == 0x100)
                            break
                
                if (r12_3 s<= 2 || (r13.b == 0 && (rcx_17.b & 0xc0) == 0))
                    return 0
                
                int64_t rcx_18 = 0
                int32_t rbx_10
                int32_t i_5
                
                while (true)
                    int64_t rax_37 = *(rsi_1 + (rcx_18 << 3))
                    rcx_18 += 1
                    uint32_t rbx_8 = zx.d(rax_37.w)
                    
                    if (rbx_8 u> 0x100)
                        rbx_10 = rbx_8 | 0xffffff3f
                    else
                        rbx_10 = (rax_37 s>> 0x20).d
                    
                    if (rbx_10 != 0)
                        do
                            int64_t rax_38 = *(r14_1 + (r15 << 3))
                            r15 += 1
                            uint32_t rdi_4 = zx.d(rax_38.w)
                            
                            if (rdi_4 u> 0x100)
                                i_5 = rdi_4 | 0xffffff3f
                            else
                                i_5 = (rax_38 s>> 0x20).d
                        while (i_5 == 0)
                        
                        if (rbx_10 != i_5)
                            break
                        
                        if (rbx_10 == 1)
                            return 0
                
                int64_t rcx_19 = *(arg3 + 0x20)
                
                if (rcx_19 == 0)
                    cond:2_1 = rbx_10 u< i_5
                else
                    char rdx_13 = *((zx.q(rbx_10) u>> 0x18) + rcx_19)
                    
                    if (rdx_13 != 0 || rbx_10 u<= 1)
                        rbx_10 = (rbx_10 & 0xffffff) | zx.d(rdx_13) << 0x18
                    else
                        rbx_10 = sub_142b27270(arg3, rbx_10)
                    
                    char rdx_15 = *((zx.q(i_5) u>> 0x18) + *(arg3 + 0x20))
                    
                    if (rdx_15 != 0 || i_5 u<= 1)
                        cond:2_1 = rbx_10 u< ((i_5 & 0xffffff) | zx.d(rdx_15) << 0x18)
                    else
                        cond:2_1 = rbx_10 u< sub_142b27270(arg3, i_5)
            else
                int32_t rbx_6 = 0
                int32_t rdi_3 = 0
                int64_t r11_2 = 0
                int64_t r10_2 = 0
                
                while (true)
                    int64_t* rcx_14 = arg1[4] + (r10_2 << 3)
                    uint64_t i_9
                    int32_t i_6
                    uint64_t i_10
                    
                    if (sx.q(rbp_1) s>> 0xc != 0)
                        do
                            i_6 = *rcx_14
                            rcx_14 = &rcx_14[1]
                            r10_2 += 1
                        while (i_6 u<= 0xffff)
                        
                        i_10 = zx.q(i_6)
                        int32_t* rcx_16 = arg2[4] + (r11_2 << 3)
                        int32_t i_7
                        
                        do
                            i_7 = *rcx_16
                            rcx_16 = &rcx_16[2]
                            r11_2 += 1
                        while (i_7 u<= 0xffff)
                        
                        i_9 = zx.q(i_7)
                    else
                        while (true)
                            i_10 = *rcx_14
                            rcx_14 = &rcx_14[1]
                            rbx_6 += 1
                            r10_2 += 1
                            
                            if ((i_10 s>> 0x20).d != 0)
                                if (i_10.d != 0)
                                    break
                        
                        int64_t* rcx_15 = arg2[4] + (r11_2 << 3)
                        
                        while (true)
                            i_9 = *rcx_15
                            rcx_15 = &rcx_15[1]
                            rdi_3 += 1
                            r11_2 += 1
                            
                            if ((i_9 s>> 0x20).d != 0)
                                if (i_9.d != 0)
                                    break
                        
                        i_6 = i_10.d
                    
                    rdx_11 = i_9.d & 0xc000
                    i_2 = i_6 & 0xc000
                    
                    if (i_2 != rdx_11)
                        break
                    
                    if ((i_10.d & 0xffff0000) == 0x1000000)
                        rbp_1 = rax_1
                        goto label_142b192c0
                
                if ((rax_1 & 0x100) != 0)
                    result = 0xffffffff
                    
                    if (i_2 u< rdx_11)
                        return 1
                    
                    break
                
            label_142b191cb:
                cond:2_1 = i_2 u< rdx_11
        
    label_142b19544:
        result = 1
        
        if (cond:2_1)
            return 0xffffffff
        
        break

return result
