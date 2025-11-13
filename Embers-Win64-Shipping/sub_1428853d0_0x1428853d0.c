// 函数: sub_1428853d0
// 地址: 0x1428853d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 != 0)
    char* _Str1 = *arg2
    
    if (_Str1 != 0)
        char* _Str2 = *(arg1 + 8)
        
        if (_Str2 == 0)
            if ((*arg1 & 1) == 0)
                return 1
            
            if (*_Str1 == 0x2d && _Str1[1] != 0)
                *arg2 = &_Str1[1]
                return 1
        else
            int32_t i = 0
            char* _Str1_1 = _Str1
            
            if (*_Str1 != 0)
                while (i u< 0x80000000)
                    _Str1_1 = &_Str1_1[1]
                    i += 1
                    
                    if (*_Str1_1 == 0)
                        break
            
            uint64_t _MaxCount = *(arg1 + 0x10)
            
            if ((zx.q(i) & 0x7fffffff) u> _MaxCount)
                int32_t rax_2
                
                if ((*arg1 & 1) != 0)
                    rax_2 = strncmp(_Str1, _Str2, _MaxCount)
                
                if ((*arg1 & 1) == 0 || rax_2 == 0)
                    int32_t rax_3
                    
                    if ((*arg1 & 2) != 0)
                        rax_3 = _strnicmp(*arg2, *(arg1 + 8), *(arg1 + 0x10))
                    
                    if ((*arg1 & 2) == 0 || rax_3 == 0)
                        *arg2 += *(arg1 + 0x10)
                        return 1

return 0
