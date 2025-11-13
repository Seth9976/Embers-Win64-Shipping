// 函数: sub_142c92ad0
// 地址: 0x142c92ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi
rsi.b = 0
uint64_t r13
r13.b = 0
int64_t r15
r15.b = 0

while (true)
    int32_t r14_1 = 0
    
    while (true)
        char* rdx = *arg1
        uint32_t _C = zx.d(*rdx)
        
        if (r14_1 == 0)
            if (isalnum(zx.d(_C.b)) == 0)
                if (_C.b == 0x5d)
                    if (r15.b != 0)
                        return 1
                    
                    r15.b = 1
                    r14_1 = 3
                    *(arg2 + 0x5d) = 1
                    *arg1 += 1
                    continue
                
                if (_C.b != 0x5b)
                    if (_C.b == 0x3f || _C.b == 0x2a)
                        r15.b = 1
                        *(zx.q(_C.b) + arg2) = 1
                        *arg1 += 1
                        continue
                    
                    if (_C.b == 0x5e || _C.b == 0x21)
                        if (r15.b != 0)
                            goto label_142c92b3a
                        
                        if (*(arg2 + 0x100) == 0)
                            *(arg2 + 0x100) = 1
                            *arg1 += 1
                            continue
                        else
                            r15.b = 1
                            *(zx.q(_C.b) + arg2) = 1
                            *arg1 += 1
                            continue
                    else if (_C.b == 0x5c)
                        *arg1 += 1
                        rsi = zx.q(**arg1)
                        
                        if (isprint(rsi.d) != 0)
                            r14_1 = 1
                            r15.b = 1
                            *(zx.q(rsi.b) + arg2) = 1
                            *arg1 += 1
                            continue
                    else if (_C.b != 0)
                        r15.b = 1
                        *(zx.q(_C.b) + arg2) = 1
                        *arg1 += 1
                        continue
                else if (*(*arg1 + 1) != 0x3a)
                    *(arg2 + 0x5b) = 1
                    r15.b = 1
                    *arg1 += 1
                    continue
                else
                    *arg1 += 2
                    
                    if (sub_142c927a0(arg1, arg2) != 0)
                        r14_1 = 0
                        r15.b = 1
                        continue
            else
                r14_1 = 1
                rsi = zx.q(_C.b)
                r15 = 1
                *(zx.q(_C.b) + arg2) = 1
                *arg1 += 1
                continue
        else if (r14_1 == 1)
            if (_C.b != 0x2d)
                if (_C.b == 0x5b)
                    break
                
                if (isalnum(zx.d(_C.b)) == 0)
                    if (_C.b != 0x5c)
                        int32_t r12
                        r12.b = _C.b == 0x5d
                        return zx.q(r12)
                    
                    *arg1 += 1
                    uint32_t _C_1 = zx.d(**arg1)
                    
                    if (isprint(_C_1) != 0)
                        *(zx.q(_C_1.b) + arg2) = 1
                        *arg1 += 1
                        continue
                else
                    *(zx.q(_C.b) + arg2) = 1
                    *arg1 += 1
                    continue
            else
                *(arg2 + 0x2d) = 1
                r13 = zx.q(_C.b)
                *arg1 += 1
                r14_1 = 2
                continue
        else if (r14_1 == 2)
            if (_C.b != 0x5c)
            label_142c92ba7:
                
                if (_C.b == 0x5d)
                    return 1
                
                if (_C.b != 0x5c)
                    goto label_142c92bdb
                
                *arg1 += 1
                _C = zx.d(**arg1)
                
                if (isprint(_C) != 0)
                    r14_1 = 0
                    *(zx.q(_C.b) + arg2) = 1
                    *arg1 += 1
                label_142c92bdb:
                    
                    if (_C.b u< rsi.b)
                        continue
                    else
                        uint32_t _C_2 = zx.d(_C.b)
                        int32_t rax_9 = islower(_C_2)
                        int32_t rax_10
                        
                        if (rax_9 != 0)
                            rax_10 = islower(zx.d(rsi.b))
                        
                        if (rax_9 != 0 && rax_10 != 0)
                        label_142c92c45:
                            rsi.b += 1
                            *(zx.q(r13.b) + arg2) = 0
                            
                            while (rsi.b u<= _C.b)
                                rsi.b += 1
                                *(sx.q(zx.d(rsi.b) - 1) + arg2) = 1
                            
                            rsi.b += 1
                            *arg1 += 1
                            break
                        
                        int32_t rax_11 = isdigit(_C_2)
                        int32_t rax_12
                        
                        if (rax_11 != 0)
                            rax_12 = isdigit(zx.d(rsi.b))
                        
                        if (rax_11 != 0 && rax_12 != 0)
                            goto label_142c92c45
                        
                        if (isupper(_C_2) != 0 && isupper(zx.d(rsi.b)) != 0)
                            goto label_142c92c45
            else
                *arg1 = &rdx[1]
                _C = zx.d(rdx[1])
                
                if (isprint(_C) != 0)
                    goto label_142c92ba7
        else if (r14_1 == 3)
            if (_C.b != 0x5b)
                if (_C.b == 0x5d)
                    return 1
                
                if (_C.b != 0 && isprint(zx.d(_C.b)) != 0)
                    *(zx.q(_C.b) + arg2) = 1
                    *arg1 += 1
                    break
            else
                *(arg2 + 0x5b) = 1
                r14_1 = 4
                *arg1 += 1
                continue
        else if (r14_1 != 4)
            continue
        else
            if (_C.b == 0x5d)
                return 1
            
            r14_1 = 0
        label_142c92b3a:
            *(zx.q(_C.b) + arg2) = 1
            *arg1 += 1
            continue
        
        return 0
