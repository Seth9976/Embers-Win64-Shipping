// 函数: sub_142bb5ec0
// 地址: 0x142bb5ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = *(arg1 + 0x2a0)
int64_t r15 = *(arg2 + 0x10)
int64_t rax = (*(arg2 + 0x38))(arg2)
char* _Str1 = *arg2

if (_Str1 u>= r15)
    arg2[6] = 3
    return rax

uint32_t rcx_1 = zx.d(*_Str1)

if (rcx_1 - 0x30 u>= 0xa && rcx_1.b != 0x5b)
    if (&_Str1[0x11] u< r15)
        int32_t rax_3 = strncmp(_Str1, "StandardEncoding", 0x10)
        
        if (rax_3 == 0)
            *(arg1 + 0x1e0) = 2
            return rax_3
    
    if (&_Str1[0xf] u< r15)
        int32_t rax_5 = strncmp(_Str1, "ExpertEncoding", 0xe)
        
        if (rax_5 == 0)
            *(arg1 + 0x1e0) = 4
            return rax_5
    
    void* rax_6 = &_Str1[0x12]
    
    if (rax_6 u< r15)
        rax_6 = strncmp(_Str1, "ISOLatin1Encoding", 0x11)
        
        if (rax_6.d == 0)
            *(arg1 + 0x1e0) = 3
            return rax_6
    
    arg2[6] = 0xa2
    return rax_6

int64_t rsi_1 = *(arg2 + 0x20)
int64_t r12
r12.b = 0
int32_t r14 = 0x100
int32_t rcx_5

if (rcx_1.b != 0x5b)
    rcx_5 = (*(arg2 + 0x48))(arg2)
else
    rcx_5 = 0x100
    *arg2 = &_Str1[1]
    r12.b = 1

if (rcx_5 s<= 0x100)
    r14 = rcx_5

uint64_t rax_9 = (*(arg2 + 0x38))(arg2)

if (*arg2 u< r15)
    int32_t r14_1 = 0
    int64_t rdx = *(arg1 + 0x1f8)
    
    if (rdx != 0)
        sub_142b99980(rsi_1, rdx)
        int64_t rdx_1 = *(arg1 + 0x200)
        *(arg1 + 0x1f8) = 0
        sub_142b99980(rsi_1, rdx_1)
        *(arg1 + 0x200) = 0
        int64_t rax_13 = *(arg2 + 0x118)
        
        if (rax_13 != 0)
            rax_13(&arg2[0x30])
    
    *(arg1 + 0x1e8) = r14
    arg2[0x2e] = r14
    int32_t arg_10
    *(arg1 + 0x1f8) = sub_142b99a90(rsi_1, 2, 0, r14, 0, &arg_10)
    rax_9 = zx.q(arg_10)
    
    if (rax_9.d != 0)
        arg2[6] = rax_9.d
    else
        *(arg1 + 0x200) = sub_142b99a90(rsi_1, 8, 0, r14, 0, &arg_10)
        rax_9 = zx.q(arg_10)
        
        if (rax_9.d != 0)
            arg2[6] = rax_9.d
        else
            rax_9 = (**rbp)(&arg2[0x30], zx.q(r14), rsi_1)
            arg_10 = rax_9.d
            
            if (rax_9.d != 0)
                arg2[6] = rax_9.d
            else
                int32_t rsi_2 = 0
                
                if (r14 s> 0)
                    do
                        (*(arg2 + 0x110))(&arg2[0x30], zx.q(rsi_2), ".notdef", 8)
                        rsi_2 += 1
                    while (rsi_2 s< r14)
                
                while (true)
                    (*(arg2 + 0x38))(arg2)
                    
                    if (*arg2 u< r15)
                        char* _Str1_1 = *arg2
                        _Str1 = _Str1_1
                        char rdx_4 = *_Str1_1
                        
                        if (rdx_4 != 0x64 || &_Str1_1[3] u>= r15 || _Str1_1[1] != 0x65
                            || _Str1_1[2] != 0x66)
                        label_142bb61ef:
                            
                            if (rdx_4 != 0x5d)
                                rax_9 = zx.q(zx.d(rdx_4) - 0x30)
                                
                                if (rax_9.d u>= 0xa)
                                    if (r12.b != 0)
                                        goto label_142bb6222
                                    
                                    rax_9 = (*(arg2 + 0x40))(arg2)
                                    
                                    if (arg2[6] != 0)
                                        break
                                    
                                    continue
                                
                                int32_t rbp_2
                                
                                if (r12.b == 0)
                                    rbp_2 = (*(arg2 + 0x48))(arg2)
                                    rax_9 = (*(arg2 + 0x38))(arg2)
                                    _Str1_1 = *arg2
                                    
                                    if (_Str1 != _Str1_1)
                                        goto label_142bb6241
                                else
                                label_142bb6222:
                                    rbp_2 = r14_1
                                label_142bb6241:
                                    _Str1 = _Str1_1
                                    
                                    if (&_Str1_1[2] u< r15 && *_Str1_1 == 0x2f && r14_1 s< rcx_5)
                                        _Str1 = &_Str1[1]
                                        *arg2 = _Str1
                                        rax_9 = (*(arg2 + 0x40))(arg2)
                                        
                                        if (*arg2 u>= r15)
                                            break
                                        
                                        if (arg2[6] != 0)
                                            break
                                        
                                        uint64_t rsi_4 = zx.q(*arg2 - _Str1.d)
                                        
                                        if (r14_1 s< r14)
                                            rax_9 = (*(arg2 + 0x110))(&arg2[0x30], zx.q(rbp_2), 
                                                _Str1, zx.q((rsi_4 + 1).d))
                                            arg2[6] = rax_9.d
                                            
                                            if (rax_9.d != 0)
                                                break
                                            
                                            *(rsi_4 + *(*(arg2 + 0xe8) + (sx.q(rbp_2) << 3))) = 0
                                        
                                        r14_1 += 1
                                        continue
                                    
                                    if (r12.b == 0)
                                        continue
                                arg2[6] = 2
                                break
                            
                            _Str1 = &_Str1[1]
                        else
                            char rcx_19 = _Str1_1[3]
                            
                            if (rcx_19 u> 0x3c || not(test_bit(0x1000832100003601, zx.q(rcx_19))))
                                if (rcx_19 - 0x3e u> 0x3f)
                                    goto label_142bb61ef
                                
                                if (not(test_bit(-0x5fffffff5fffffff, zx.q(rcx_19 - 0x3e))))
                                    goto label_142bb61ef
                                
                                _Str1 = &_Str1[3]
                            else
                                _Str1 = &_Str1[3]
                    
                    rax_9 = arg1
                    *(rax_9 + 0x1e0) = 1
                    *arg2 = _Str1
                    break

return rax_9
