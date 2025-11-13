// 函数: sub_142b36f70
// 地址: 0x142b36f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = &arg1[1]
int64_t rsi
rsi.b = 0
int32_t result

while (true)
    uint32_t r11_1 = zx.d(*arg1)
    
    if ((r11_1 - 0x30 u<= 9 && r11_1 u< 0x40) || r11_1 - 0x61 u<= 5 || r11_1 - 0x41 u<= 5)
        rsi.b = 1
        
        if (arg3 == 0)
        label_142b3701d:
            arg1 = &arg1[1]
            r10 = &r10[1]
        label_142b37028:
            result.b = arg1 == arg2
            
            if (result.b == 0)
                continue
        else
            if (r11_1 - 0x30 u> 9)
                if (r11_1 - 0x61 u> 5 && r11_1 - 0x41 u> 5)
                    goto label_142b3701d
            else if (r11_1 u>= 0x40 && r11_1 - 0x61 u> 5 && r11_1 - 0x41 u> 5)
                goto label_142b3701d
            
            arg1 = &arg1[1]
            r10 = &r10[1]
            
            if (arg1 != arg2)
                if (r10 == arg2)
                    continue
                
                if (*arg1 != arg3)
                    goto label_142b37028
                
                uint32_t r8 = zx.d(*r10)
                
                if (r8 - 0x30 u> 9)
                    if (r8 - 0x61 u<= 5 || r8 - 0x41 u<= 5)
                        goto label_142b3701d
                    
                    goto label_142b37028
                
                if (r8 u< 0x40 || r8 - 0x61 u<= 5 || r8 - 0x41 u<= 5)
                    goto label_142b3701d
                
                goto label_142b37028
    else if (*arg1 != 0x2e)
    label_142b37124:
        uint32_t r8_2 = zx.d(*arg1)
        
        if ((0xffdf & (r8_2 - 0x50).w) == 0)
            void* rcx
            
            if (arg3 != 0)
                uint32_t r8_3 = zx.d(r8_2.w)
                
                if (r8_3 - 0x30 u> 9)
                    if (r8_3 - 0x61 u> 5 && r8_3 - 0x41 u> 5)
                        rcx = &arg1[1]
                        goto label_142b371b8
                else if (r8_3 u>= 0x40 && r8_3 - 0x61 u> 5 && r8_3 - 0x41 u> 5)
                    rcx = &arg1[1]
                    goto label_142b371b8
                
                rcx = &arg1[1]
                
                if (rcx != arg2)
                    if (rcx + 2 == arg2)
                        goto label_142b371c3
                    
                    if (*rcx == arg3)
                        uint32_t r8_4 = zx.d(*(rcx + 2))
                        
                        if (r8_4 - 0x30 u> 9)
                            if (r8_4 - 0x61 u<= 5 || r8_4 - 0x41 u<= 5)
                                rcx += 2
                        else if (r8_4 u< 0x40 || r8_4 - 0x61 u<= 5 || r8_4 - 0x41 u<= 5)
                            rcx += 2
                    
                    goto label_142b371b8
            else
                rcx = &arg1[1]
            label_142b371b8:
                result.b = rcx == arg2
                
                if (result.b == 0)
                label_142b371c3:
                    uint32_t r8_5 = zx.d(*rcx)
                    
                    if ((0xfffd & (r8_5 - 0x2b).w) != 0)
                    label_142b37262:
                        uint32_t r8_8 = zx.d(*rcx)
                        
                        if (r8_8 - 0x30 u<= 9 && r8_8 u< 0x3a)
                            void* arg_8
                            void* rcx_1
                            
                            if (arg3 == 0 || r8_8 == 0x40 || r8_8 - 0x47 u<= 0x19 || r8_8 u>= 0x67)
                                rcx_1 = rcx + 2
                            label_142b372e5:
                                arg_8 = rcx_1
                            label_142b372ed:
                                result.b = rcx_1 == arg2
                                
                                if (result.b == 0)
                                label_142b372f8:
                                    void* r8_10 = rcx_1 + 2
                                    
                                    while (true)
                                        uint32_t r9_5 = zx.d(*rcx_1)
                                        
                                        if (r9_5 - 0x30 u> 9 || r9_5 u>= 0x3a)
                                            if (arg4 == 0 && sub_142b36ed0(&arg_8, arg2) != 0)
                                                return 0
                                            
                                            return 1
                                        
                                        if (arg3 == 0 || r9_5 - 0x47 u<= 0x19 || r9_5 == 0x40
                                            || r9_5 u>= 0x67)
                                        label_142b37372:
                                            rcx_1 += 2
                                            arg_8 = rcx_1
                                            r8_10 += 2
                                        else
                                            rcx_1 += 2
                                            r8_10 += 2
                                            arg_8 = rcx_1
                                            
                                            if (rcx_1 == arg2)
                                                break
                                            
                                            if (r8_10 == arg2)
                                                continue
                                            else if (*rcx_1 == arg3)
                                                uint32_t r9_6 = zx.d(*r8_10)
                                                
                                                if ((r9_6 - 0x30 u<= 9 && r9_6 u< 0x40)
                                                        || r9_6 - 0x61 u<= 5 || r9_6 - 0x41 u<= 5)
                                                    goto label_142b37372
                                        
                                        result.b = rcx_1 == arg2
                                        
                                        if (result.b != 0)
                                            break
                                        
                                        continue
                            else
                                rcx_1 = rcx + 2
                                arg_8 = rcx_1
                                
                                if (rcx_1 != arg2)
                                    if (rcx_1 + 2 == arg2)
                                        goto label_142b372f8
                                    
                                    if (*rcx_1 != arg3)
                                        goto label_142b372ed
                                    
                                    uint32_t r8_9 = zx.d(*(rcx_1 + 2))
                                    
                                    if (r8_9 - 0x30 u> 9)
                                        if (r8_9 - 0x61 u> 5 && r8_9 - 0x41 u> 5)
                                            goto label_142b372ed
                                        
                                        rcx_1 += 2
                                        goto label_142b372e5
                                    
                                    if (r8_9 u>= 0x40 && r8_9 - 0x61 u> 5 && r8_9 - 0x41 u> 5)
                                        goto label_142b372ed
                                    
                                    rcx_1 += 2
                                    goto label_142b372e5
                            result.b = 1
                            break
                    else if (arg3 != 0)
                        uint32_t r8_6 = zx.d(r8_5.w)
                        
                        if (r8_6 - 0x30 u> 9)
                            if (r8_6 - 0x61 u> 5 && r8_6 - 0x41 u> 5)
                                rcx += 2
                                goto label_142b37257
                        else if (r8_6 u>= 0x40 && r8_6 - 0x61 u> 5 && r8_6 - 0x41 u> 5)
                            rcx += 2
                            goto label_142b37257
                        
                        rcx += 2
                        
                        if (rcx != arg2)
                            if (rcx + 2 == arg2)
                                goto label_142b37262
                            
                            if (*rcx == arg3)
                                uint32_t r8_7 = zx.d(*(rcx + 2))
                                
                                if (r8_7 - 0x30 u> 9)
                                    if (r8_7 - 0x61 u<= 5 || r8_7 - 0x41 u<= 5)
                                        rcx += 2
                                else if (r8_7 u< 0x40 || r8_7 - 0x61 u<= 5 || r8_7 - 0x41 u<= 5)
                                    rcx += 2
                            
                            goto label_142b37257
                    else
                        rcx += 2
                    label_142b37257:
                        result.b = rcx == arg2
                        
                        if (result.b == 0)
                            goto label_142b37262
    else
        arg1 = &arg1[1]
        result.b = arg1 == arg2
        
        if (result.b == 0)
            void* r8_1 = &arg1[1]
            
            while (true)
                uint32_t r9 = zx.d(*arg1)
                
                if ((r9 - 0x30 u> 9 || r9 u>= 0x40) && r9 - 0x61 u> 5 && r9 - 0x41 u> 5)
                    if (rsi.b == 0)
                        break
                    
                    goto label_142b37124
                
                rsi.b = 1
                
                if (arg3 == 0)
                    arg1 = &arg1[1]
                    r8_1 += 2
                else if (r9 - 0x30 u> 9)
                    if (r9 - 0x61 u<= 5 || r9 - 0x41 u<= 5)
                        goto label_142b370c0
                    
                    arg1 = &arg1[1]
                    r8_1 += 2
                else if (r9 u< 0x40 || r9 - 0x61 u<= 5 || r9 - 0x41 u<= 5)
                label_142b370c0:
                    arg1 = &arg1[1]
                    r8_1 += 2
                    
                    if (arg1 == arg2)
                        goto label_142b37033
                    
                    if (r8_1 == arg2)
                        continue
                    else if (*arg1 == arg3)
                        uint32_t r9_1 = zx.d(*r8_1)
                        
                        if (r9_1 - 0x30 u> 9)
                            if (r9_1 - 0x61 u<= 5 || r9_1 - 0x41 u<= 5)
                                arg1 = &arg1[1]
                                r8_1 += 2
                        else if (r9_1 u< 0x40 || r9_1 - 0x61 u<= 5 || r9_1 - 0x41 u<= 5)
                            arg1 = &arg1[1]
                            r8_1 += 2
                else
                    arg1 = &arg1[1]
                    r8_1 += 2
                
                result.b = arg1 == arg2
                
                if (result.b != 0)
                    goto label_142b37033
    
label_142b37033:
    result.b = 0
    break

return result
