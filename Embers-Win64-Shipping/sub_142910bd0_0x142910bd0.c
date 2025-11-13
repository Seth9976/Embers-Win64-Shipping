// 函数: sub_142910bd0
// 地址: 0x142910bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0x20
__chkstk(0x20)

if (arg4[1] == 0)
    int32_t i = 0
    result = sub_142898c70(arg2)
    
    if (result.d s> 0)
        do
            int64_t rax = sub_142898ea0(arg2, i)
            uint64_t result_1
            (*(rax + 0x50))(rax, &result_1, 0, zx.q(arg1))
            uint64_t result_2 = result_1
            
            if (result_2 != 0)
                char* _Str1 = *(result_2 + 0x10)
                int32_t j = 0
                char* _Str1_1 = _Str1
                
                if (*_Str1 != 0)
                    while (j u< 0x80000000)
                        _Str1_1 = &_Str1_1[1]
                        j += 1
                        
                        if (*_Str1_1 == 0)
                            break
                
                int64_t _MaxCount = sx.q(arg4[3].d)
                
                if ((j & 0x7fffffff) == _MaxCount.d && _strnicmp(_Str1, arg4[2], _MaxCount) == 0)
                    result = result_1
                    arg4[1] = result
                    *arg4 = rax
                    break
            
            i += 1
            result = sub_142898c70(arg2)
        while (i s< result.d)

return result
