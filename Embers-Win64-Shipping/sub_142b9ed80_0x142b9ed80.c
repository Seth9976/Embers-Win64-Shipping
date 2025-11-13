// 函数: sub_142b9ed80
// 地址: 0x142b9ed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t* _String = arg3
int32_t result

if (strcmp(arg2, "fallback-script") != 0)
    if (strcmp(arg2, "default-script") != 0)
        char* _EndPtr
        
        if (strcmp(arg2, "increase-x-height") != 0)
            int64_t rdi_1 = 0
            int64_t i
            
            for (i = 0; i != 8; )
                char rax_8 = arg2[i]
                i += 1
                
                if (rax_8 != *(i + 0x14367f61f))
                    if (strcmp(arg2, "darkening-parameters") != 0)
                        int32_t rax_14 = strcmp(arg2, "no-stem-darkening")
                        
                        if (rax_14 != 0)
                            result = 0xc
                        else if (arg4 == 0)
                            *(arg1 + 0x21) = *_String
                            result = 0
                        else
                            int32_t rax_15
                            rax_15.b = strtol(_String, nullptr, rax_14 + 0xa) != 0
                            *(arg1 + 0x21) = rax_15.b
                            result = 0
                        
                        goto label_142b9f0e6
                    
                    if (arg4 != 0)
                        while (true)
                            int32_t var_40[0x7]
                            var_40[rdi_1] = strtol(_String, &_EndPtr, 0xa)
                            char* _EndPtr_1 = _EndPtr
                            
                            if (*_EndPtr_1 != 0x2c)
                                goto label_142b9edc6_2
                            
                            if (_String == _EndPtr_1)
                                goto label_142b9edc6_2
                            
                            rdi_1 += 1
                            _String = &_EndPtr_1[1]
                            
                            if (rdi_1 s>= 7)
                                int32_t var_24_1 = strtol(_String, &_EndPtr, 0xa)
                                char* _EndPtr_2 = _EndPtr
                                
                                if ((*_EndPtr_2 & 0xdf) != 0)
                                    goto label_142b9edc6_2
                                
                                if (_String == _EndPtr_2)
                                    goto label_142b9edc6_2
                                
                                _String = &var_40
                                break
                    
                    int32_t rdi_2 = *_String
                    int32_t r8_2 = _String[1]
                    int32_t rax_13 = _String[2]
                    int32_t r9 = _String[3]
                    int32_t rcx_9 = _String[4]
                    int32_t r10_1 = _String[5]
                    int32_t rdx_4 = _String[6]
                    int32_t r11_1 = _String[7]
                    
                    if (rdi_2 s< 0)
                        goto label_142b9edc6_2
                    
                    if (rax_13 s< 0)
                        goto label_142b9edc6_2
                    
                    if (rcx_9 s< 0)
                        goto label_142b9edc6_2
                    
                    if (rdx_4 s< 0)
                        goto label_142b9edc6_2
                    
                    if (r8_2 s< 0)
                        goto label_142b9edc6_2
                    
                    if (r9 s< 0)
                        goto label_142b9edc6_2
                    
                    if (r10_1 s< 0)
                        goto label_142b9edc6_2
                    
                    if (r11_1 s< 0)
                        goto label_142b9edc6_2
                    
                    if (rdi_2 s> rax_13)
                        goto label_142b9edc6_2
                    
                    if (rax_13 s> rcx_9)
                        goto label_142b9edc6_2
                    
                    if (rcx_9 s> rdx_4)
                        goto label_142b9edc6_2
                    
                    if (r8_2 s> 0x1f4)
                        goto label_142b9edc6_2
                    
                    if (r9 s> 0x1f4)
                        goto label_142b9edc6_2
                    
                    if (r10_1 s> 0x1f4)
                        goto label_142b9edc6_2
                    
                    if (r11_1 s> 0x1f4)
                        goto label_142b9edc6_2
                    
                    *(arg1 + 0x2c) = rax_13
                    result = 0
                    *(arg1 + 0x24) = rdi_2
                    *(arg1 + 0x28) = r8_2
                    *(arg1 + 0x30) = r9
                    *(arg1 + 0x34) = rcx_9
                    *(arg1 + 0x38) = r10_1
                    *(arg1 + 0x3c) = rdx_4
                    *(arg1 + 0x40) = r11_1
                    goto label_142b9f0e6
            
            if (arg4 == 0)
                *(arg1 + 0x20) = *_String
                result = 0
            else
                result = strtol(_String, nullptr, (i + 2).d)
                
                if (result == 0)
                    *(arg1 + 0x20) = 0
                else if (result != 1)
                labelid_1:
                    result = 6
                else
                    *(arg1 + 0x20) = result.b
                    result = 0
        else if (arg4 != 0)
        label_142b9edc6:
            result = 6
        else
            void* rbp_1 = *_String
            int32_t result_2 = 0
            
            if (rbp_1 != 0)
                char* _EndPtr_3 = *(rbp_1 + 0xb8)
                _EndPtr = _EndPtr_3
                
                if (_EndPtr_3 == 0)
                    int32_t result_3 = sub_142ba2090(rbp_1, &_EndPtr, arg1)
                    _EndPtr_3 = _EndPtr
                    result_2 = result_3
                    
                    if (result_3 == 0)
                        *(rbp_1 + 0xb8) = _EndPtr_3
                        *(rbp_1 + 0xc0) = sub_142ba1ea0
                
                if (result_2 == 0)
                    *(_EndPtr_3 + 0x18) = _String[2]
                
                result = result_2
            else
                result = 0x23
    else if (arg4 != 0)
    label_142b9edc6_1:
        result = 6
    else
        *(arg1 + 0x1c) = *_String
        result = 0
else if (arg4 == 0)
    void* const rax_3 = &data_1436800d8
    int32_t result_1 = 0
    uint64_t rcx_1 = 0
    
    while (true)
        if (*(rax_3 + 8) == *_String && *(rax_3 + 0x10) == 0xa)
            *(arg1 + 0x18) = rcx_1.d
            
            if ((&data_143680ad0)[rcx_1] == 0)
                result_1 = 6
            
            result = result_1
            break
        
        rcx_1 = zx.q(rcx_1.d + 1)
        rax_3 = (&data_143680ad0)[rcx_1]
        
        if (rax_3 == 0)
            if ((&data_143680ad0)[rcx_1] == 0)
                result_1 = 6
            
            result = result_1
            break
else
label_142b9edc6_2:
    result = 6

label_142b9f0e6:
__security_check_cookie(rax_1 ^ &var_68)
return result
