// 函数: sub_142bbb3c0
// 地址: 0x142bbb3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = arg1
int64_t r12_1 = zx.q(arg4) + arg3
*arg2 = arg3
char* _Str1_1 = nullptr
arg2[2] = r12_1
arg2[3].d = 0
char const* const rdi
rdi.b = 0
arg2[7](arg2)

if (*arg2 u< r12_1)
    while (true)
        char* _Str1 = *arg2
        
        if (*_Str1 == 0x65)
            if (&_Str1[6] == r12_1)
            label_142bbb467:
                
                if (strncmp(_Str1, "eexec", 5) == 0)
                    break
            else if (&_Str1[6] u< r12_1)
                char rcx_1 = _Str1[5]
                
                if (rcx_1 u<= 0x3c && test_bit(0x1000832100003601, zx.q(rcx_1)))
                    goto label_142bbb467
                
                if (rcx_1 - 0x3e u<= 0x3f && test_bit(-0x5fffffff5fffffff, zx.q(rcx_1 - 0x3e)))
                    goto label_142bbb467
        
        if (*_Str1 == 0x63)
            if (&_Str1[0xa] == r12_1)
            label_142bbb4b8:
                
                if (strncmp(_Str1, "closefile", 9) == 0)
                    break
            else if (&_Str1[0xa] u< r12_1)
                char rcx_3 = _Str1[9]
                
                if (rcx_3 u<= 0x3c && test_bit(0x1000832100003601, zx.q(rcx_3)))
                    goto label_142bbb4b8
                
                if (rcx_3 - 0x3e u<= 0x3f && test_bit(-0x5fffffff5fffffff, zx.q(rcx_3 - 0x3e)))
                    goto label_142bbb4b8
        
        if (*_Str1 != 0x46)
        label_142bbb52f:
            uint32_t rcx_7 = zx.d(*_Str1)
            
            if (rcx_7 - 0x30 u>= 0xa)
                if ((rcx_7.b == 0x52 && &_Str1[6] u< r12_1 && _Str1[1] == 0x44 && rdi.b != 0) ||
                        (rcx_7.b == 0x2d && &_Str1[6] u< r12_1 && _Str1[1] == 0x7c && rdi.b != 0))
                    int64_t rdi_1 = arg2[2]
                    *arg2 = _Str1_1
                    int64_t rbp_1 = *(*(rbp + 0xd0) + 0x50)
                    arg2[7](arg2)
                    char* rax_18 = *arg2
                    
                    if (rax_18 u>= rdi_1 || zx.d(*rax_18) - 0x30 u>= 0xa)
                    label_142bbb767:
                        
                        if (rbp_1 != 0)
                            return 3
                        
                        arg2[3].d = 3
                        return 3
                    
                    int64_t rsi_1 = sx.q(arg2[9](arg2))
                    arg2[8](arg2)
                    
                    if (rsi_1.d s< 0)
                        goto label_142bbb767
                    
                    int64_t rdx = *arg2
                    
                    if (rsi_1 s>= rdi_1 - rdx - 1)
                        goto label_142bbb767
                    
                    bool cond:3_1 = arg2[3].d == 0
                    *arg2 = sx.q((rsi_1 + 1).d) + rdx
                    int32_t rax_23
                    rax_23.b = cond:3_1
                    
                    if (rax_23 == 0)
                        return 3
                    
                    rbp = arg1
                else if (rcx_7.b != 0x2f || &_Str1[2] u>= r12_1)
                    arg2[8](arg2)
                    
                    if (arg2[3].d != 0)
                        break
                else
                    *arg2 = &_Str1[1]
                    arg2[8](arg2)
                    
                    if (arg2[3].d != 0)
                        break
                    
                    int32_t count_1 = *arg2 - (&_Str1[1]).d
                    
                    if (count_1 - 1 u> 0x14 || *arg2 u>= r12_1)
                        rbp = arg1
                    else
                        rdi = "version"
                        void* r14_1 = &data_143684490
                        char r15_1 = _Str1[1]
                        
                        while (true)
                            if (r15_1 != *rdi)
                            label_142bbb69e:
                                rdi = *(r14_1 + 0x30)
                                r14_1 += 0x30
                                
                                if (rdi != 0)
                                    continue
                            else
                                uint64_t count = zx.q(count_1)
                                int64_t rax_27 = -1
                                
                                do
                                    rax_27 += 1
                                while (rdi[rax_27] != 0)
                                
                                if (count != rax_27)
                                    goto label_142bbb69e
                                
                                int32_t rax_28
                                int512_t zmm0_1
                                rax_28, zmm0_1 = memcmp(&_Str1[1], rdi, count)
                                
                                if (rax_28 != 0)
                                    goto label_142bbb69e
                                
                                int32_t rcx_16 = *(arg2 + 0x2bc)
                                
                                if ((*(r14_1 + 0x28) & ((rcx_16 & 1) + 1)) != 0)
                                    int32_t rax_32
                                    
                                    if ((rcx_16.b & 2) != 0)
                                        rax_32, zmm0_1 = strcmp(rdi, "CharStrings")
                                    
                                    if ((rcx_16.b & 2) == 0 || rax_32 == 0)
                                        rbp = arg1
                                        int32_t result = sub_142bbbbe0(rbp, arg2, r14_1, zmm0_1)
                                        arg2[3].d = result
                                        
                                        if (result != 0)
                                            if (result.b != 0xa2)
                                                return result
                                            
                                            arg2[3].d = 0
                                        
                                        break
                            
                            rbp = arg1
                            break
                
                rdi.b = 0
            else
                _Str1_1 = _Str1
                arg2[8](arg2)
                
                if (arg2[3].d != 0)
                    break
                
                rdi.b = 1
        else
            if (&_Str1[0xe] != r12_1)
                if (&_Str1[0xe] u>= r12_1)
                    goto label_142bbb52f
                
                char rcx_5 = _Str1[0xd]
                
                if (rcx_5 u<= 0x3c && test_bit(0x1000832100003601, zx.q(rcx_5)))
                    goto label_142bbb509
                
                if (rcx_5 - 0x3e u> 0x3f)
                    goto label_142bbb52f
                
                if (not(test_bit(-0x5fffffff5fffffff, zx.q(rcx_5 - 0x3e))))
                    goto label_142bbb52f
                
                goto label_142bbb509
            
        label_142bbb509:
            
            if (strncmp(_Str1, "FontDirectory", 0xd) != 0)
                goto label_142bbb52f
            
            int32_t rax_13 = *(arg2 + 0x2bc)
            
            if ((rax_13.b & 1) != 0)
                *(arg2 + 0x2bc) = rax_13 | 2
            
            *arg2 += 0xd
        
        arg2[7](arg2)
        
        if (*arg2 u>= r12_1)
            break

return arg2[3].d
