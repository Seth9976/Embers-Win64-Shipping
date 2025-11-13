// 函数: sub_142bc9c10
// 地址: 0x142bc9c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = sx.q(arg4) + arg3
*arg2 = arg3
arg2[2] = i
arg2[3].d = 0
arg2[7](arg2)

while (*arg2 u< i)
    char* _Str1 = *arg2
    int32_t rax_2
    
    if (*_Str1 == 0x46 && &_Str1[0x19] u< i)
        rax_2 = strncmp(_Str1, "FontDirectory", 0xd)
    
    if (*_Str1 == 0x46 && &_Str1[0x19] u< i && rax_2 == 0)
        arg2[8](arg2)
        arg2[7](arg2)
        char* _Str1_2 = *arg2
        char* _Str1_1 = _Str1_2
        
        if (_Str1_2 u< i)
            do
                if (*_Str1_1 == 0x6b && &_Str1_1[5] u< i && strncmp(_Str1_1, "known", 5) == 0)
                    break
                
                arg2[8](arg2)
                
                if (arg2[3].d != 0)
                    return arg2[3].d
                
                arg2[7](arg2)
                _Str1_1 = *arg2
            while (_Str1_1 u< i)
        
        if (_Str1_1 u< i)
            arg2[8](arg2)
            void var_48
            arg2[0xe](arg2, &var_48)
            int32_t var_38
            
            if (var_38 == 3)
                _Str1_2 = *arg2
        
        *arg2 = _Str1_2
    else if (*_Str1 != 0x2f || &_Str1[2] u>= i)
        arg2[8](arg2)
        
        if (arg2[3].d != 0)
            break
    else
        *arg2 = &_Str1[1]
        arg2[8](arg2)
        
        if (arg2[3].d != 0)
            break
        
        int32_t count_1 = *arg2 - (&_Str1[1]).d
        
        if (count_1 - 1 u<= 0x14 && *arg2 u< i)
            for (void* j = &data_1436877c0; j s< "Type 42"; j += 0x30)
                char* buffer2 = *j
                
                if (buffer2 != 0 && _Str1[1] == *buffer2)
                    uint64_t count = zx.q(count_1)
                    int64_t rax_8 = -1
                    
                    do
                        rax_8 += 1
                    while (buffer2[rax_8] != 0)
                    
                    if (count == rax_8 && memcmp(&_Str1[1], buffer2, count) == 0)
                        int32_t result = sub_142bc9b80(arg1, arg2, j, arg5)
                        arg2[3].d = result
                        
                        if (result != 0)
                            return result
                        
                        break
    
    arg2[7](arg2)

return arg2[3].d
