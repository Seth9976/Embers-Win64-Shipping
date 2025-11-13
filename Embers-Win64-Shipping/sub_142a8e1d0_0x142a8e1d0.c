// 函数: sub_142a8e1d0
// 地址: 0x142a8e1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int64_t r13 = sx.q(arg2)
int32_t* rdi = arg3
char* result = arg1
void* rbx

if (arg1 == 0)
    rbx = nullptr
else
    rbx = &arg1[r13]

if (*arg8 s<= 0)
    int64_t rdx = sx.q(arg5)
    
    if ((arg4 != 0 || rdx.d == 0) && rdx.d s>= 0xffffffff && r13.d s>= 0
            && (result != 0 || r13.d s<= 0) && arg6 s<= 0x10ffff && (arg6 & 0xfffff800) != 0xd800)
        if (arg7 != 0)
            *arg7 = 0
        
        int32_t rsi = 0
        
        if (rdx.d != 0xffffffff)
            void* rdi_1
            
            if (arg4 == 0)
                rdi_1 = nullptr
            else
                rdi_1 = &arg4[rdx]
            
            while (true)
                int32_t i = ((rdi_1 - arg4) s>> 1).d
                int32_t i_4 = ((rbx - arg1) s/ 3).d
                
                if (i_4 s<= i)
                    i = i_4
                
                if (i s< 3)
                    break
                
                do
                    uint32_t rdx_7 = zx.d(*arg4)
                    int16_t* r10_3 = arg4
                    arg4 = &arg4[1]
                    
                    if (rdx_7 u<= 0x7f)
                        *arg1 = rdx_7.b
                        arg1 = &arg1[1]
                    else if (rdx_7 u<= 0x7ff)
                        uint32_t rax_28 = rdx_7
                        rdx_7.b &= 0x3f
                        rdx_7.b |= 0x80
                        *arg1 = (rax_28 u>> 6).b | 0xc0
                        arg1[1] = rdx_7.b
                        arg1 = &arg1[2]
                    else if (rdx_7 - 0xd800 u> 0x7ff)
                        *arg1 = (rdx_7 u>> 0xc).b | 0xe0
                        uint8_t rax_43 = (rdx_7 u>> 6).b
                        rdx_7.b &= 0x3f
                        rdx_7.b |= 0x80
                        arg1[1] = (rax_43 & 0x3f) | 0x80
                        arg1[2] = rdx_7.b
                        arg1 = &arg1[3]
                    else
                        int32_t i_5 = i
                        i -= 1
                        
                        if (i_5 == 1)
                            arg4 = r10_3
                            break
                        
                        uint32_t r10_4
                        
                        if (not(test_bit(rdx_7, 0xa)))
                            r10_4 = zx.d(*arg4)
                        
                        if (test_bit(rdx_7, 0xa) || (r10_4 & 0xfffffc00) != 0xdc00)
                            if (arg6 s< 0)
                                goto label_142a8e899
                            
                            rsi += 1
                            arg1 = sub_142a8d950(arg1, arg6)
                        else
                            arg4 = &arg4[1]
                            int32_t rdx_10 = (rdx_7 << 0xa) - 0x35fdc00 + r10_4
                            *arg1 = (rdx_10 u>> 0x12).b | 0xf0
                            arg1[1] = ((rdx_10 u>> 0xc).b & 0x3f) | 0x80
                            uint8_t rax_38 = (rdx_10 u>> 6).b
                            rdx_10.b &= 0x3f
                            rdx_10.b |= 0x80
                            arg1[2] = (rax_38 & 0x3f) | 0x80
                            arg1[3] = rdx_10.b
                            arg1 = &arg1[4]
                    
                    i -= 1
                while (i s> 0)
            
            if (arg4 u< rdi_1)
                while (true)
                    uint32_t rdx_12 = zx.d(*arg4)
                    arg4 = &arg4[1]
                    
                    if (rdx_12 u> 0x7f)
                        if (rdx_12 u<= 0x7ff)
                            if (rbx - arg1 s>= 2)
                                uint32_t rax_46 = rdx_12
                                rdx_12.b &= 0x3f
                                rdx_12.b |= 0x80
                                *arg1 = (rax_46 u>> 6).b | 0xc0
                                arg1[1] = rdx_12.b
                                arg1 = &arg1[2]
                                goto label_142a8e75d
                            
                            rbp = 2
                        else if (rdx_12 - 0xd800 u> 0x7ff)
                            if (rbx - arg1 s>= 3)
                                *arg1 = (rdx_12 u>> 0xc).b | 0xe0
                                uint8_t rax_59 = (rdx_12 u>> 6).b
                                rdx_12.b &= 0x3f
                                rdx_12.b |= 0x80
                                arg1[1] = (rax_59 & 0x3f) | 0x80
                                arg1[2] = rdx_12.b
                                arg1 = &arg1[3]
                                goto label_142a8e75d
                            
                            rbp = 3
                        else
                            uint32_t r8_5
                            
                            if (not(test_bit(rdx_12, 0xa)) && arg4 u< rdi_1)
                                r8_5 = zx.d(*arg4)
                            
                            int32_t r10_6
                            
                            if (test_bit(rdx_12, 0xa) || arg4 u>= rdi_1
                                    || (r8_5 & 0xfffffc00) != 0xdc00)
                                if (arg6 s< 0)
                                label_142a8e899:
                                    *arg8 = 0xa
                                    return nullptr
                                
                                r10_6 = arg6
                                rsi += 1
                            else
                                arg4 = &arg4[1]
                                r10_6 = r8_5 - 0x35fdc00 + (rdx_12 << 0xa)
                            
                            int32_t rdx_14
                            
                            if (r10_6 u<= 0x7f)
                                rdx_14 = 1
                            else if (r10_6 u<= 0x7ff)
                                rdx_14 = 2
                            else if (r10_6 u> 0xd7ff)
                                rdx_14 = 0
                                
                                if (r10_6 - 0xe000 u<= 0x101fff)
                                    rdx_14.b = r10_6 u> 0xffff
                                    rdx_14 += 3
                            else
                                rdx_14 = 3
                            
                            if (rbx - arg1 s>= zx.q(rdx_14))
                                arg1 = sub_142a8d950(arg1, r10_6)
                                goto label_142a8e75d
                            
                            rbp = rdx_14
                    else if (arg1 u>= rbx)
                        rbp = 1
                    else
                        *arg1 = rdx_12.b
                        arg1 = &arg1[1]
                    label_142a8e75d:
                        
                        if (arg4 u>= rdi_1)
                            break
                        
                        continue
                    
                    if (arg4 u>= rdi_1)
                        break
                    
                    do
                        uint32_t rdx_17 = zx.d(*arg4)
                        arg4 = &arg4[1]
                        int32_t rax_61
                        
                        if (rdx_17 u<= 0x7f)
                            rax_61 = 1
                        else if (rdx_17 u<= 0x7ff)
                            rax_61 = 2
                        else if ((rdx_17 & 0xfffff800) != 0xd800)
                            rax_61 = 3
                        else if (test_bit(rdx_17, 0xa) || arg4 u>= rdi_1
                                || (zx.d(*arg4) & 0xfffffc00) != 0xdc00)
                            if (arg6 s< 0)
                                goto label_142a8e899
                            
                            if (arg6 u<= 0x7f)
                                rax_61 = 1
                            else if (arg6 u<= 0x7ff)
                                rax_61 = 2
                            else if (arg6 u<= 0xd7ff)
                                rax_61 = 3
                            else if (arg6 - 0xe000 u> 0x101fff)
                                rax_61 = 0
                            else
                                int32_t rax_67
                                rax_67.b = arg6 u> 0xffff
                                rax_61 = rax_67 + 3
                            
                            rsi += 1
                        else
                            arg4 = &arg4[1]
                            rax_61 = 4
                        
                        rbp += rax_61
                    while (arg4 u< rdi_1)
                    
                    break
            
            rdi = arg3
        else
            for (uint32_t i_1 = zx.d(*arg4); i_1 != 0; i_1 = zx.d(*arg4))
                arg4 = &arg4[1]
                
                if (i_1 u<= 0x7f)
                    if (arg1 u>= rbx)
                        rbp = 1
                        break
                    
                    *arg1 = i_1.b
                    arg1 = &arg1[1]
                else if (i_1 u<= 0x7ff)
                    if (rbx - arg1 s< 2)
                        rbp = 2
                        break
                    
                    uint32_t i_3 = i_1
                    i_1.b &= 0x3f
                    i_1.b |= 0x80
                    *arg1 = (i_3 u>> 6).b | 0xc0
                    arg1[1] = i_1.b
                    arg1 = &arg1[2]
                else if (i_1 - 0xd800 u> 0x7ff)
                    if (rbx - arg1 s< 3)
                        rbp = 3
                        break
                    
                    *arg1 = (i_1 u>> 0xc).b | 0xe0
                    uint8_t rax_17 = (i_1 u>> 6).b
                    i_1.b &= 0x3f
                    i_1.b |= 0x80
                    arg1[1] = (rax_17 & 0x3f) | 0x80
                    arg1[2] = i_1.b
                    arg1 = &arg1[3]
                else
                    uint32_t r8
                    
                    if (not(test_bit(i_1, 0xa)))
                        r8 = zx.d(*arg4)
                    
                    int32_t r10_2
                    
                    if (test_bit(i_1, 0xa) || (r8 & 0xfffffc00) != 0xdc00)
                        if (arg6 s< 0)
                            goto label_142a8e899
                        
                        r10_2 = arg6
                        rsi += 1
                    else
                        arg4 = &arg4[1]
                        r10_2 = r8 - 0x35fdc00 + (i_1 << 0xa)
                    
                    int32_t rdx_2
                    
                    if (r10_2 u<= 0x7f)
                        rdx_2 = 1
                    else if (r10_2 u<= 0x7ff)
                        rdx_2 = 2
                    else if (r10_2 u> 0xd7ff)
                        rdx_2 = 0
                        
                        if (r10_2 - 0xe000 u<= 0x101fff)
                            rdx_2.b = r10_2 u> 0xffff
                            rdx_2 += 3
                    else
                        rdx_2 = 3
                    
                    if (rbx - arg1 s< zx.q(rdx_2))
                        rbp = rdx_2
                        break
                    
                    arg1 = sub_142a8d950(arg1, r10_2)
            
            uint32_t i_2 = zx.d(*arg4)
            
            while (i_2 != 0)
                arg4 = &arg4[1]
                int32_t rax_18
                
                if (i_2 u<= 0x7f)
                    rax_18 = 1
                else if (i_2 u<= 0x7ff)
                    rax_18 = 2
                else if ((i_2 & 0xfffff800) != 0xd800)
                    rax_18 = 3
                else if (test_bit(i_2, 0xa) || (zx.d(*arg4) & 0xfffffc00) != 0xdc00)
                    if (arg6 s< 0)
                        goto label_142a8e899
                    
                    if (arg6 u<= 0x7f)
                        rax_18 = 1
                    else if (arg6 u<= 0x7ff)
                        rax_18 = 2
                    else if (arg6 u<= 0xd7ff)
                        rax_18 = 3
                    else if (arg6 - 0xe000 u> 0x101fff)
                        rax_18 = 0
                    else
                        int32_t rax_24
                        rax_24.b = arg6 u> 0xffff
                        rax_18 = rax_24 + 3
                    
                    rsi += 1
                else
                    arg4 = &arg4[1]
                    rax_18 = 4
                
                i_2 = zx.d(*arg4)
                rbp += rax_18
        
        int32_t rbp_1 = rbp + arg1.d - result.d
        
        if (arg7 != 0)
            *arg7 = rsi
        
        if (rdi != 0)
            *rdi = rbp_1
        
        sub_142a8c3f0(result, r13.d, rbp_1, arg8)
        return result
    
    *arg8 = 1

return 0
