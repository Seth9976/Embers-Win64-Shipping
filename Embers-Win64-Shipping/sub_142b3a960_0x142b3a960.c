// 函数: sub_142b3a960
// 地址: 0x142b3a960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_1 = arg4 - *arg2
uint64_t rax_3

if (r10_1 s> 0)
    arg1[1] += r10_1
    *arg6 |= 0x800
    
    if (*arg5 s> 1)
        *arg5 = 1
    
    if (r10_1 s<= arg4)
        int32_t rax_4 = 1
        
        if (r10_1 s> 1)
            uint64_t i_4 = zx.q(r10_1 - 1)
            rax_4 = r10_1
            uint64_t i
            
            do
                if (*arg3 != 0)
                    *arg5 = 1
                
                arg3 = &arg3[1]
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        uint64_t r10_2 = zx.q(r10_1 - rax_4)
        
        if (r10_1 != rax_4)
            uint32_t rdx_2 = zx.d(*arg3)
            uint32_t r9_3 = ((rdx_2 u>> r10_2.b) * *((r10_2 << 2) + 0x14366c4c8)) u>> 0x11
            
            if (rdx_2 != *((r10_2 << 2) + &data_14366c468) * r9_3)
                *arg5 = 1
            
            uint64_t r10_3 = zx.q(r10_2.d + 1)
            uint64_t rcx_2 = zx.q((r9_3 * 0x199a) u>> 0x10)
            *arg5 += zx.d(*(zx.q(r9_3 - (rcx_2 << 3).d - (rcx_2 * 2).d) + 0x14366c598))
            rax_3 = zx.q(*arg2)
            
            if (rax_3.d s> 0)
                *arg1 = rax_3.d
                void* r11_2 = arg1 + 9
                int32_t i_1 = (rax_3 - 1).d + r10_3.d
                *r11_2 = rcx_2.b
                
                if (i_1 s> 0)
                    int32_t r14_1 = *((r10_3 << 2) + 0x14366c4c8)
                    
                    do
                        uint32_t rdx_3 = zx.d(arg3[1])
                        arg3 = &arg3[1]
                        int32_t r9_7 = i_1 - r10_3.d
                        uint8_t rdi_5 = (((rdx_3 u>> r10_3.b) * r14_1) u>> 0x11).b
                        rax_3 = zx.q(*((zx.q(1 - r10_3.d) << 2) + &data_14366c468))
                        rdx_3.b -= *(&data_14366c468 + (r10_3 << 2)) * rdi_5
                        *r11_2 += rdx_3.b * rax_3.b
                        
                        if (r9_7 s<= 0)
                            break
                        
                        r11_2 += 1
                        i_1 = r9_7 - 1 + r10_3.d
                        *r11_2 = rdi_5
                    while (i_1 s> 0)
            else
                *(arg1 + 9) = 0
                *arg1 = 1
        else
            rax_3 = zx.q(*arg3)
            
            if (rax_3.b u< 5)
                if (rax_3.b != 0)
                    *arg5 = 3
            else if (rax_3.b u<= 5)
                *arg5 += 5
            else
                *arg5 = 7
            
            int32_t i_2 = *arg2
            
            if (i_2 s> 0)
                *arg1 = i_2
                void* r8 = &arg3[1]
                char* r11_1 = arg1 + 9
                
                while (i_2 s> 0)
                    rax_3 = zx.q(*r8)
                    i_2 -= 1
                    *r11_1 = rax_3.b
                    r11_1 = &r11_1[1]
                    r8 += 1
            else
                *(arg1 + 9) = 0
                *arg1 = 1
        
        if (*arg5 != 0)
            *arg6 |= 0x20
    else
        rax_3 = zx.q(*arg5)
        
        if (rax_3.d s<= 0 && arg4 s> 0)
            do
                if (*arg3 != 0)
                    *arg5 = 1
                    *arg6 |= 0x20
                    *(arg1 + 9) = 0
                    *arg1 = 1
                    goto label_142b3abf7
                
                arg3 = &arg3[1]
                arg4 -= 1
            while (arg4 s> 0)
        
        if (rax_3.d s> 0 || rax_3.d != 0)
            *arg6 |= 0x20
        
        *(arg1 + 9) = 0
        *arg1 = 1
else
    if (arg1 + 9 != arg3)
        int32_t i_3 = arg4
        
        if (arg4 s> 0)
            int64_t rdx_1 = arg1 - arg3
            
            do
                i_3 -= 1
                arg3[rdx_1 + 9] = *arg3
                arg3 = &arg3[1]
            while (i_3 s> 0)
        
        *arg1 = arg4
    
    rax_3 = arg5
    
    if (*rax_3 != 0)
        *arg6 |= 0x820
        return arg6

label_142b3abf7:
return rax_3
