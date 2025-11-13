// 函数: sub_142b72000
// 地址: 0x142b72000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg4 s<= 0)
    if (arg2 u<= 1 && arg3 u<= 2)
        if (arg3 == 0)
            sub_142b73e30(arg1, 0xffff)
        else if (arg3 == 2)
            sub_142b73e30(arg1, 0xff)
        
        int32_t r13 = 0x1000
        
        if (arg2 == 0)
            r13 = 0x10000
        
        int64_t r14 = sx.q(sub_142b73390(arg1, r13 u>> 4, arg4))
        
        if (*arg4 s> 0)
            sub_142b723e0(arg1)
            return nullptr
        
        if (arg3 == 1 && (arg3.b & r14.b) != 0)
            *(arg1[7] + (r14 << 1)) = 0xffee
            r14 = zx.q(r14.d + 1)
        
        int32_t count = (r14 * 2).d
        int32_t rax_13
        
        if (arg3 != 0)
            int64_t rdx_6 = sx.q(*(arg1 + 0x1c))
            
            if (arg3 != 1)
                int32_t i = (rdx_6.d + count) & 3
                
                if (i == 0)
                    int64_t r9_1 = arg1[2]
                    
                    if (*(r9_1 + (sx.q((rdx_6 - 1).d) << 2)) != *(arg1 + 0x2c)
                        || *(r9_1 + (sx.q((rdx_6 - 2).d) << 2)) != *(arg1 + 0x34))
                    label_142b721fc:
                        
                        do
                            *(arg1[2] + (sx.q(*(arg1 + 0x1c)) << 2)) = *(arg1 + 0x34)
                            *(arg1 + 0x1c) += 1
                            i = (i + 1) & 3
                        while (i != 2)
                        
                        goto label_142b72209
                else if (i != 3)
                    if (i != 2)
                        goto label_142b721fc
                    
                label_142b72209:
                    *(arg1[2] + (sx.q(*(arg1 + 0x1c)) << 2)) = *(arg1 + 0x34)
                    *(arg1 + 0x1c) += 1
                    *(arg1[2] + (sx.q(*(arg1 + 0x1c)) << 2)) = *(arg1 + 0x2c)
                    *(arg1 + 0x1c) += 1
                else
                    int64_t r9_2 = arg1[2]
                    
                    if (*(r9_2 + (sx.q((rdx_6 - 1).d) << 2)) != *(arg1 + 0x34))
                        goto label_142b721fc
                    
                    *(r9_2 + (rdx_6 << 2)) = *(arg1 + 0x2c)
                    *(arg1 + 0x1c) += 1
                
                rax_13 = *(arg1 + 0x1c)
            else
                int64_t r8_2 = arg1[2]
                int32_t r9 = *(r8_2 + (sx.q((rdx_6 - 1).d) << 2))
                
                if (r9 != *(arg1 + 0x2c) || *(r8_2 + (sx.q((rdx_6 - 2).d) << 2)) != *(arg1 + 0x34))
                    int32_t rcx_9 = *(arg1 + 0x34)
                    
                    if (r9 != rcx_9)
                        *(r8_2 + (rdx_6 << 2)) = rcx_9
                        *(arg1 + 0x1c) += 1
                    
                    *(arg1[2] + (sx.q(*(arg1 + 0x1c)) << 2)) = *(arg1 + 0x2c)
                    *(arg1 + 0x1c) += 1
                
                rax_13 = *(arg1 + 0x1c) << 2
        else
            int64_t rcx_2 = sx.q(*(arg1 + 0x1c))
            
            if (((rcx_2.b ^ r14.b) & 1) != 0)
                *(arg1[2] + (rcx_2 << 2)) = *(arg1 + 0x2c)
                *(arg1 + 0x1c) += 1
            
            int64_t rdx_4 = sx.q(*(arg1 + 0x1c))
            int64_t r8_1 = arg1[2]
            
            if (*(r8_1 + (sx.q((rdx_4 - 1).d) << 2)) != *(arg1 + 0x2c)
                    || *(r8_1 + (sx.q((rdx_4 - 2).d) << 2)) != *(arg1 + 0x34))
                *(r8_1 + (rdx_4 << 2)) = *(arg1 + 0x34)
                *(arg1 + 0x1c) += 1
                *(arg1[2] + (sx.q(*(arg1 + 0x1c)) << 2)) = *(arg1 + 0x2c)
                *(arg1 + 0x1c) += 1
            
            rax_13 = *(arg1 + 0x1c) * 2
        
        void* result = sub_142a7dd00(sx.q(rax_13 + 0x30 + count))
        
        if (result == 0)
            *arg4 = 7
            sub_142b723e0(arg1)
            return nullptr
        
        __builtin_memset(result, 0, 0x30)
        *(result + 0x10) = r14.d
        *(result + 0x14) = *(arg1 + 0x1c)
        *(result + 0x18) = arg1[6].d
        int32_t rax_34 = arg1[6].d + 0xfff
        *(result + 0x1e) = arg2.b
        *(result + 0x1c) = (rax_34 s>> 0xc).w
        *(result + 0x1f) = arg3.b
        *(result + 0x26) = *(arg1 + 0xc)
        *(result + 0x28) = arg1[4].d
        *(result + 0x2c) = arg1[5].d
        *result = result + 0x30
        void* r8_5 = result + 0x30
        
        if (arg1[6].d s> r13)
            memcpy(result + 0x30, arg1[7], count)
            r8_5 = result + 0x30 + (sx.q(r14.d) << 1)
        else if (r14.d s> 0)
            int64_t rdx_11 = 0
            uint64_t i_4 = zx.q(r14.d)
            uint64_t i_1
            
            do
                rdx_11 += 0x10
                *r8_5 = *(rdx_11 + *arg1 - 0x10)
                r8_5 += 2
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        char* rdx_13 = arg1[2]
        void* rdi_3 = result + 0x30 + sx.q(count)
        
        if (arg3 == 0)
            *(result + 8) = r8_5
            int32_t i_2 = *(arg1 + 0x1c)
            
            while (i_2 s> 0)
                i_2 -= 1
                *r8_5 = *rdx_13
                r8_5 += 2
                rdx_13 = &rdx_13[4]
        else
            if (arg3 == 1)
                *(result + 8) = rdi_3
                memcpy(rdi_3, rdx_13, *(arg1 + 0x1c) << 2)
                sub_142b723e0(arg1)
                return result
            
            if (arg3 == 2)
                *(result + 8) = rdi_3
                int32_t i_3 = *(arg1 + 0x1c)
                
                if (i_3 s> 0)
                    do
                        i_3 -= 1
                        *rdi_3 = *rdx_13
                        rdi_3 += 1
                        rdx_13 = &rdx_13[4]
                    while (i_3 s> 0)
                    
                    sub_142b723e0(arg1)
                    return result
        
        sub_142b723e0(arg1)
        return result
    
    *arg4 = 1

return 0
