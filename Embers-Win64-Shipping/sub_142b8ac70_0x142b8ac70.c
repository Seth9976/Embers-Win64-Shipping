// 函数: sub_142b8ac70
// 地址: 0x142b8ac70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _Str1_1 = arg2
int32_t* arg_28
int32_t* rbp = arg_28
void var_58
uint64_t result = (*(*arg3 + 0x50))(arg3, &var_58, rbp)

if (*rbp s<= 0)
    int32_t r14_1 = 0
    result = sub_142ac2da0(&var_58, 0, &_Str1_1, arg3)
    
    while (result.b != 0)
        char* _Str1 = _Str1_1
        uint64_t rcx_2 = 0
        uint64_t rbx_1
        
        while (true)
            char rax_1 = _Str1[rcx_2]
            rcx_2 += 1
            
            if (rax_1 != *(rcx_2 + &icu_64::LocaleDisplayNamesImpl::CapitalizationContextSink::`vftable'{for `icu_64::ResourceSink'}
                    .__offset(0x17)))
                int32_t rax_2 = strcmp(_Str1, "keyValue")
                
                if (rax_2 != 0)
                    if (strcmp(_Str1, "languages") != 0)
                        int64_t rcx_5 = 0
                        
                        while (true)
                            char rax_4 = _Str1[rcx_5]
                            rcx_5 += 1
                            
                            if (rax_4 != *(rcx_5 + 0x14367ea03))
                                int32_t rax_5 = strcmp(_Str1, "territory")
                                
                                if (rax_5 != 0)
                                    int64_t i
                                    
                                    for (i = 0; i != 8; )
                                        char rcx_7 = _Str1[i]
                                        i += 1
                                        
                                        if (rcx_7 != *(i + 0x14367ea1f))
                                            goto label_142b8ae1a
                                    
                                    rbx_1 = zx.q((i - 5).d)
                                else
                                    rbx_1 = zx.q(rax_5 + 2)
                                
                                break
                            
                            if (rcx_5 == 7)
                                rbx_1 = zx.q((rcx_5 - 6).d)
                                break
                    else
                        rbx_1 = 0
                else
                    rbx_1 = zx.q(rax_2 + 5)
                
                break
            
            if (rcx_2 == 4)
                rbx_1 = rcx_2
                break
        
        arg_28.d = 0
        result = (*(*arg3 + 0x38))(arg3, &arg_28, rbp)
        
        if (*rbp s> 0)
            break
        
        if (arg_28.d s>= 2)
            void* rcx_9 = *(arg1 + 0x10)
            int32_t rax_7
            
            if (*(rcx_9 + 0x380) != 0x103)
                rax_7 = *(result + 4)
            else
                rax_7 = *result
            
            if (rax_7 != 0)
                *(rcx_9 + rbx_1 + 0x494) = 1
                *(arg1 + 8) = 1
        
    label_142b8ae1a:
        r14_1 += 1
        result = sub_142ac2da0(&var_58, r14_1, &_Str1_1, arg3)

return result
