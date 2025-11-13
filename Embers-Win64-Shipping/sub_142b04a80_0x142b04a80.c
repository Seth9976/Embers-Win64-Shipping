// 函数: sub_142b04a80
// 地址: 0x142b04a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x10)
char r15 = *(arg1 + 0x40)
uint64_t result = 0
int32_t r10 = 0
int32_t r11 = *(rbx + 0x68)

if (*arg2 u< arg3)
    while (true)
        char* rax = *arg2
        int32_t r8 = 0
        int32_t rdx = 0
        uint64_t rcx = zx.q(*rax)
        int32_t r9 = 0x4a
        *arg2 = &rax[1]
        int32_t r10_1 = sx.d(*(rcx + 0x143665c60))
        *(sx.q(*(arg1 + 0x40)) + arg1 + 0x41) = rcx.b
        *(arg1 + 0x40) += 1
        
        if (r10_1 == 0)
            break
        
        int32_t r10_2 = r10_1 + (r11 << 5)
        
        while (true)
            result = zx.q((r9 + r8) s>> 1)
            
            if (result.d == rdx)
                goto label_142b04b31
            
            int32_t rdx_1 = *((sx.q(result.d) << 2) + 0x143665d60)
            
            if (rdx_1 s<= r10_2)
                if (rdx_1 s>= r10_2)
                    r11 = r10_2
                    r10 = sx.d(*(sx.q(result.d) + 0x143665ec0))
                    
                    if (r10 == 0xffffffff)
                        goto label_142b04b3a
                    
                    if (r10 != 1)
                        if (r10 != 2)
                            if (*arg2 u< arg3)
                                break
                            
                            goto label_142b04b3a
                        
                        r10 = 1
                    
                    r11 = 0
                    goto label_142b04b3a
                
                r8 = result.d
            else
                r9 = result.d
            
            rdx = result.d
            
            if (r9 == r8)
                goto label_142b04b31
    
label_142b04b31:
    r11 = 0
    result = 0
    r10 = -1

label_142b04b3a:
*(rbx + 0x68) = r11

if (r10 != 0)
    if (r10 == 0xffffffff)
    label_142b04b4d:
        result = arg5
        *result = 0x12
    label_142b04cd9:
        char result_2 = *(arg1 + 0x40)
        
        if (result_2 s> 1)
            char result_1 = result_2 - 1
            result_2 -= r15
            
            if (result_1 s> result_2)
                char rax_13 = result_2 - result_1
                *(arg1 + 0x11a) = rax_13
                memcpy(arg1 + 0xfa, arg1 + 0x42, neg.d(sx.d(rax_13)))
                result = sx.q(result_2)
                *arg2 -= result
                *(arg1 + 0x40) = 1
            else
                result = sx.q(result_1)
                *arg2 -= result
                *(arg1 + 0x40) = 1
    else
        int32_t rdx_2
        
        if (arg4 == 1)
            rdx_2 = sx.d(*(sx.q(result.d) + 0x1436662a0))
            
            if (rdx_2 == 0xffffffff)
            label_142b04c3e:
                result = arg5
                *result = 0x13
                *(arg1 + 0x11c) = 0
            else
                if (rdx_2 s> 0)
                    if (rdx_2 s<= 2)
                        if (not(test_bit(zx.d(*((zx.q(*(rbx + 0x6c)) << 1) + &data_143665c28)), 
                                rdx_2)))
                            goto label_142b04c3e
                        
                        *(rbx + 0x5e) = rdx_2.b
                        goto label_142b04ca9
                    
                    if (rdx_2 != 0x10)
                        goto label_142b04ca4
                    
                label_142b04be7:
                    
                    if (*(rbx + 0x5e) == 0)
                        goto label_142b04b4d
                    
                    char rax_7 = *(rbx + 0x60)
                    
                    if (rax_7 s< 2)
                        *(rbx + 0x61) = rax_7
                    
                    *(rbx + 0x60) = 2
                    goto label_142b04ca9
                
            label_142b04ca4:
                
                if (not(test_bit(zx.d(*((zx.q(*(rbx + 0x6c)) << 1) + &data_143665c28)), rdx_2)))
                    goto label_142b04c3e
                
                *(rbx + 0x5c) = rdx_2.b
            label_142b04ca9:
                result = arg5
                int32_t rcx_7 = *result
                
                if (rcx_7 s> 0)
                    if (rcx_7 == 0x12)
                        goto label_142b04cd9
                    
                    if (rcx_7 == 0x13)
                        *(arg1 + 0x11c) = 0
                else
                    *(arg1 + 0x40) = 0
        else
            if (arg4 == 2)
                if (result.d == 0x30)
                    goto label_142b04ca9
                
                goto label_142b04c3e
            
            if (arg4 != 3)
                result = arg5
                *result = 0x12
                goto label_142b04cd9
            
            rdx_2 = sx.d(*(sx.q(result.d) + 0x1436662f0))
            
            if (rdx_2 + 1 u> 0x23)
            label_142b04c2e:
                
                if (*(rbx + 0x6c) == 0)
                    goto label_142b04c3e
                
                *(rbx + 0x5f) = rdx_2.b
                goto label_142b04ca9
            
            switch (rdx_2)
                case 0, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x12, 0x13, 0x14, 0x15, 
                        0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20
                    goto label_142b04c2e
                case 1, 0x21
                    *(rbx + 0x5d) = rdx_2.b
                    goto label_142b04ca9
                case 2
                    if (*(rbx + 0x6c) == 0)
                        goto label_142b04c3e
                    
                    *(rbx + 0x5d) = rdx_2.b
                    goto label_142b04ca9
                case 0x10
                    goto label_142b04be7
                case 0x11
                    if (*(rbx + 0x5f) == 0)
                        goto label_142b04b4d
                    
                    char rax_8 = *(rbx + 0x60)
                    
                    if (rax_8 s< 2)
                        *(rbx + 0x61) = rax_8
                    
                    *(rbx + 0x60) = 3
                    goto label_142b04ca9
                case 0x22
                    *(rbx + 0x5e) = rdx_2.b
                    goto label_142b04ca9
                case 0xffffffff
                    goto label_142b04c3e

return result
