// 函数: sub_142b9b390
// 地址: 0x142b9b390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
char* _String = arg3
uint64_t i = 0
int64_t result

if (strcmp(arg2, "darkening-parameters") != 0)
    if (strcmp(arg2, "hinting-engine") != 0)
        int32_t rax_8 = strcmp(arg2, "no-stem-darkening")
        
        if (rax_8 != 0)
            int32_t rax_11 = strcmp(arg2, "random-seed")
            
            if (rax_11 != 0)
                result = 0xc
            else if (arg4 == 0)
                int32_t i_2 = *_String
                
                if (i_2 s>= 0)
                    i = zx.q(i_2)
                
                result = 0
                *(arg1 + 0x60) = i.d
            else
                int32_t i_1 = strtol(_String, nullptr, rax_11 + 0xa)
                
                if (i_1 s>= 0)
                    i = zx.q(i_1)
                
                result = 0
                *(arg1 + 0x60) = i.d
        else if (arg4 == 0)
            *(arg1 + 0x3c) = *_String
            result = 0
        else
            int32_t rax_9
            rax_9.b = strtol(_String, nullptr, rax_8 + 0xa) != 0
            *(arg1 + 0x3c) = rax_9.b
            result = 0
    else if (arg4 != 0)
        do
            char rax_7 = _String[i]
            i += 1
            
            if (rax_7 != *(i + 0x14367f437))
                goto label_142b9b4df_1
        while (i != 6)
        
        *(arg1 + 0x38) = 1
        result = 0xc
    else if (*_String != 1)
        result = 7
    else
        *(arg1 + 0x38) = 1
        result = 0
else if (arg4 == 0)
label_142b9b450:
    int32_t rbx = *_String
    int32_t r8 = *(_String + 4)
    int32_t rax_5 = *(_String + 8)
    int32_t r9 = *(_String + 0xc)
    int32_t rcx_3 = *(_String + 0x10)
    int32_t r10_1 = *(_String + 0x14)
    int32_t rdx_2 = *(_String + 0x18)
    int32_t r11_1 = *(_String + 0x1c)
    
    if (rbx s< 0 || rax_5 s< 0 || rcx_3 s< 0 || rdx_2 s< 0 || r8 s< 0 || r9 s< 0 || r10_1 s< 0
        || r11_1 s< 0 || rbx s> rax_5 || rax_5 s> rcx_3 || rcx_3 s> rdx_2 || r8 s> 0x1f4
        || r9 s> 0x1f4 || r10_1 s> 0x1f4 || r11_1 s> 0x1f4)
    label_142b9b4df:
        result = 6
    else
        *(arg1 + 0x48) = rax_5
        result = 0
        *(arg1 + 0x40) = rbx
        *(arg1 + 0x44) = r8
        *(arg1 + 0x4c) = r9
        *(arg1 + 0x50) = rcx_3
        *(arg1 + 0x54) = r10_1
        *(arg1 + 0x58) = rdx_2
        *(arg1 + 0x5c) = r11_1
else
    while (true)
        char* _EndPtr
        int32_t var_40[0x7]
        var_40[i] = strtol(_String, &_EndPtr, 0xa)
        char* _EndPtr_1 = _EndPtr
        
        if (*_EndPtr_1 != 0x2c)
            goto label_142b9b4df_1
        
        if (_String == _EndPtr_1)
            goto label_142b9b4df_1
        
        i += 1
        _String = &_EndPtr_1[1]
        
        if (i s>= 7)
            int32_t var_24_1 = strtol(_String, &_EndPtr, 0xa)
            char* _EndPtr_2 = _EndPtr
            
            if ((*_EndPtr_2 & 0xdf) != 0)
                break
            
            if (_String == _EndPtr_2)
                break
            
            _String = &var_40
            goto label_142b9b450
    
label_142b9b4df_1:
    result = 6

__security_check_cookie(rax_1 ^ &var_68)
return result
