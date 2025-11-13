// 函数: sub_142bc8a60
// 地址: 0x142bc8a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x2a0)
uint64_t r15 = arg1
int64_t rsi = *(arg2 + 0x10)
int64_t rax = (*(arg2 + 0x38))(arg2)
char* _Str1 = *arg2

if (_Str1 u>= rsi)
    arg2[6] = 3
    return rax

uint32_t rcx_1 = zx.d(*_Str1)

if (rcx_1 - 0x30 u>= 0xa && rcx_1.b != 0x5b)
    if (&_Str1[0x11] u< rsi)
        int32_t rax_3 = strncmp(_Str1, "StandardEncoding", 0x10)
        
        if (rax_3 == 0)
            *(r15 + 0x1e0) = 2
            return rax_3
    
    if (&_Str1[0xf] u< rsi)
        int32_t rax_5 = strncmp(_Str1, "ExpertEncoding", 0xe)
        
        if (rax_5 == 0)
            *(r15 + 0x1e0) = 4
            return rax_5
    
    void* rax_6 = &_Str1[0x12]
    
    if (rax_6 u< rsi)
        rax_6 = strncmp(_Str1, "ISOLatin1Encoding", 0x11)
        
        if (rax_6.d == 0)
            *(r15 + 0x1e0) = 3
            return rax_6
    
    arg2[6] = 0xa2
    return rax_6

int64_t rbp = *(arg2 + 0x20)
int64_t r12
r12.b = 0
uint64_t rax_8
int32_t arg_10

if (rcx_1.b != 0x5b)
    rax_8 = (*(arg2 + 0x48))(arg2)
    arg_10 = rax_8.d
    
    if (rax_8.d s<= 0x100)
        r15 = arg1
        goto label_142bc8bdc
    
    arg2[6] = 3
else
    arg_10 = 0x100
    r12.b = 1
    *arg2 = &_Str1[1]
label_142bc8bdc:
    rax_8 = (*(arg2 + 0x38))(arg2)
    
    if (*arg2 u< rsi)
        int64_t rdx = *(r15 + 0x1f8)
        int32_t r15_1 = 0
        
        if (rdx != 0)
            sub_142b99980(rbp, rdx)
            int64_t rdx_1 = *(arg1 + 0x200)
            *(arg1 + 0x1f8) = 0
            sub_142b99980(rbp, rdx_1)
            *(arg1 + 0x200) = 0
            int64_t rax_11 = *(arg2 + 0x108)
            
            if (rax_11 != 0)
                rax_11(&arg2[0x2c])
        
        *(arg1 + 0x1e8) = arg_10
        arg2[0x2a] = arg_10
        int32_t arg_18
        *(arg1 + 0x1f8) = sub_142b99a90(rbp, 2, 0, arg_10, 0, &arg_18)
        rax_8 = zx.q(arg_18)
        
        if (rax_8.d != 0)
            arg2[6] = rax_8.d
        else
            *(arg1 + 0x200) = sub_142b99a90(rbp, 8, 0, arg_10, 0, &arg_18)
            rax_8 = zx.q(arg_18)
            
            if (rax_8.d != 0)
                arg2[6] = rax_8.d
            else
                int32_t r14_1 = arg_10
                rax_8 = (**r14)(&arg2[0x2c], zx.q(r14_1), rbp)
                arg_18 = rax_8.d
                
                if (rax_8.d != 0)
                    arg2[6] = rax_8.d
                else
                    int32_t rbp_1 = 0
                    
                    if (r14_1 s> 0)
                        do
                            (*(arg2 + 0x100))(&arg2[0x2c], zx.q(rbp_1), ".notdef", 8)
                            rbp_1 += 1
                        while (rbp_1 s< r14_1)
                    
                    while (true)
                        (*(arg2 + 0x38))(arg2)
                        
                        if (*arg2 u< rsi)
                            char* _Str1_1 = *arg2
                            _Str1 = _Str1_1
                            char rcx_18 = *_Str1_1
                            char rax_16
                            
                            if (rcx_18 == 0x64 && &_Str1_1[3] u< rsi && _Str1_1[1] == 0x65
                                    && _Str1_1[2] == 0x66)
                                rax_16 = _Str1_1[3]
                            
                            if (rcx_18 != 0x64 || &_Str1_1[3] u>= rsi || _Str1_1[1] != 0x65
                                    || _Str1_1[2] != 0x66 || rax_16 u> 0x20
                                    || not(test_bit(0x100003601, zx.q(rax_16))))
                                if (rcx_18 != 0x5d)
                                    rax_8 = zx.q(zx.d(rcx_18) - 0x30)
                                    
                                    if (rax_8.d u>= 0xa)
                                        if (r12.b != 0)
                                            goto label_142bc8d9e
                                        
                                        rax_8 = (*(arg2 + 0x40))(arg2)
                                        
                                        if (arg2[6] != 0)
                                            break
                                        
                                        continue
                                    
                                    int32_t rbp_2
                                    
                                    if (r12.b == 0)
                                        rbp_2 = (*(arg2 + 0x48))(arg2)
                                        rax_8 = (*(arg2 + 0x38))(arg2)
                                        _Str1_1 = *arg2
                                        
                                        if (_Str1 != _Str1_1)
                                            goto label_142bc8dbd
                                    else
                                    label_142bc8d9e:
                                        rbp_2 = r15_1
                                    label_142bc8dbd:
                                        _Str1 = _Str1_1
                                        
                                        if (&_Str1_1[2] u< rsi && *_Str1_1 == 0x2f
                                                && r15_1 s< r14_1)
                                            _Str1 = &_Str1[1]
                                            *arg2 = _Str1
                                            rax_8 = (*(arg2 + 0x40))(arg2)
                                            
                                            if (*arg2 u>= rsi)
                                                break
                                            
                                            if (arg2[6] != 0)
                                                break
                                            
                                            uint64_t r14_3 = zx.q(*arg2 - _Str1.d)
                                            rax_8 = (*(arg2 + 0x100))(&arg2[0x2c], zx.q(rbp_2), 
                                                _Str1, zx.q((r14_3 + 1).d))
                                            arg2[6] = rax_8.d
                                            
                                            if (rax_8.d != 0)
                                                break
                                            
                                            r15_1 += 1
                                            *(r14_3 + *(*(arg2 + 0xd8) + (sx.q(rbp_2) << 3))) = 0
                                            r14_1 = arg_10
                                            continue
                                        
                                        if (r12.b == 0)
                                            continue
                                    arg2[6] = 2
                                    break
                                
                                _Str1 = &_Str1[1]
                            else
                                _Str1 = &_Str1_1[3]
                        
                        rax_8 = arg1
                        *(rax_8 + 0x1e0) = 1
                        *arg2 = _Str1
                        break
return rax_8
