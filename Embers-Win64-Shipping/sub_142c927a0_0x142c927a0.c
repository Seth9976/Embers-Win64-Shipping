// 函数: sub_142c927a0
// 地址: 0x142c927a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char* r14 = *arg1
int64_t i = 0
char var_58 = 0
int64_t var_57 = 0
char var_4f = 0
int32_t rbp = 0
int64_t rsi = 0
uint64_t result

while (true)
    char _C_1 = *r14
    r14 = &r14[1]
    
    if (rsi s< 0xa)
        if (rbp == 0)
            uint32_t _C = zx.d(_C_1)
            
            if (isalpha(_C) != 0 && islower(_C) != 0)
                (&var_58)[rsi] = _C_1
                rsi += 1
                continue
            
            if (_C_1 == 0x3a)
                rbp = 1
                rsi += 1
                continue
        else if (rbp != 1)
            rsi += 1
            continue
        else if (_C_1 == 0x5d)
            *arg1 = r14
            int64_t rcx = 0
            
            while (true)
                char rax_2 = (&var_58)[rcx]
                rcx += 1
                
                if (rax_2 != *(rcx + 0x14363cd13))
                    int64_t rcx_3 = 0
                    
                    while (true)
                        char rax_5 = (&var_58)[rcx_3]
                        rcx_3 += 1
                        
                        if (rax_5 != *(rcx_3 + 0x1436bba0b))
                            int64_t rcx_4 = 0
                            
                            while (true)
                                char rax_6 = (&var_58)[rcx_4]
                                rcx_4 += 1
                                
                                if (rax_6 != *(rcx_4 + 0x1436bba13))
                                    int64_t rcx_5 = 0
                                    
                                    while (true)
                                        char rax_7 = (&var_58)[rcx_5]
                                        rcx_5 += 1
                                        
                                        if (rax_7 != *(rcx_5 + 0x1436bba1b))
                                            int64_t rcx_6 = 0
                                            
                                            while (true)
                                                char rax_8 = (&var_58)[rcx_6]
                                                rcx_6 += 1
                                                
                                                if (rax_8 != *(rcx_6 + 0x1436bba23))
                                                    int64_t rcx_7 = 0
                                                    
                                                    while (true)
                                                        char rax_9 = (&var_58)[rcx_7]
                                                        rcx_7 += 1
                                                        
                                                        if (rax_9 != *(rcx_7 + 0x1436bba2b))
                                                            int64_t rcx_8 = 0
                                                            
                                                            while (true)
                                                                char rax_10 = (&var_58)[rcx_8]
                                                                rcx_8 += 1
                                                                
                                                                if (rax_10 != *(rcx_8 + 0x14363cceb))
                                                                    int64_t rcx_9 = 0
                                                                    
                                                                    while (true)
                                                                        char rax_11 = (&var_58)[rcx_9]
                                                                        rcx_9 += 1
                                                                        
                                                                        if (rax_11 != *(rcx_9 + 0x1436bba33))
                                                                            int64_t rcx_10 = 0
                                                                            
                                                                            while (true)
                                                                                char rax_12 = (&var_58)[rcx_10]
                                                                                rcx_10 += 1
                                                                                
                                                                                if (rax_12 != *(rcx_10 + 0x1434d09e7))
                                                                                    do
                                                                                        char rcx_11 = (&var_58)[i]
                                                                                        i += 1
                                                                                        
                                                                                        if (rcx_11 != *(i + 0x1434d09ef))
                                                                                            goto label_142c92aa1
                                                                                    while (i != 6)
                                                                                    
                                                                                    *(arg2 + 0x107) = 1
                                                                                    result = zx.q((i - 5).d)
                                                                                    break
                                                                                
                                                                                if (rcx_10 == 6)
                                                                                    *(arg2 + 0x10a) = 1
                                                                                    result = zx.q((rcx_10 - 5).d)
                                                                                    break
                                                                            
                                                                            break
                                                                        
                                                                        if (rcx_9 == 6)
                                                                            *(arg2 + 0x106) = 1
                                                                            result = zx.q((rcx_9 - 5).d)
                                                                            break
                                                                    
                                                                    break
                                                                
                                                                if (rcx_8 == 6)
                                                                    *(arg2 + 0x109) = 1
                                                                    result = zx.q((rcx_8 - 5).d)
                                                                    break
                                                            
                                                            break
                                                        
                                                        if (rcx_7 == 6)
                                                            *(arg2 + 0x108) = 1
                                                            result = zx.q((rcx_7 - 5).d)
                                                            break
                                                    
                                                    break
                                                
                                                if (rcx_6 == 6)
                                                    *(arg2 + 0x105) = 1
                                                    result = zx.q((rcx_6 - 5).d)
                                                    break
                                            
                                            break
                                        
                                        if (rcx_5 == 7)
                                            *(arg2 + 0x103) = 1
                                            result = zx.q((rcx_5 - 6).d)
                                            break
                                    
                                    break
                                
                                if (rcx_4 == 6)
                                    *(arg2 + 0x104) = 1
                                    result = zx.q((rcx_4 - 5).d)
                                    break
                            
                            break
                        
                        if (rcx_3 == 6)
                            *(arg2 + 0x101) = 1
                            result = zx.q((rcx_3 - 5).d)
                            break
                    
                    break
                
                if (rcx == 6)
                    *(arg2 + 0x102) = 1
                    result = zx.q((rcx - 5).d)
                    break
            
            break
    
label_142c92aa1:
    result = 0
    break

__security_check_cookie(rax_1 ^ &var_78)
return result
