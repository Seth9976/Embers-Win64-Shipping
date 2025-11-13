// 函数: sub_1428bc250
// 地址: 0x1428bc250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
int32_t rdi = arg3

if (arg3 == 0xffffffff)
    int32_t i = 0
    char* rax_1 = arg2
    
    if (*arg2 != 0)
        while (i u< 0x80000000)
            rax_1 = &rax_1[1]
            i += 1
            
            if (*rax_1 == 0)
                break
    
    rdi = i & 0x7fffffff

if (arg1 != 0)
    void* arg_8
    sub_142910980(&arg_8)
    *arg1 = nullptr

int32_t* rcx_3 = data_143fecb20
int32_t i_1 = 0x14

if (rcx_3 != 0)
    i_1 = sub_142898c70(rcx_3) + 0x14

if (i_1 s> 0)
    int64_t i_2 = sx.q(i_1)
    
    do
        i_1 -= 1
        int64_t i_3 = i_2
        i_2 -= 1
        void* result
        
        if (i_3 - 1 s< 0)
            result = nullptr
        else if (i_1 s>= 0x14)
            result = sub_142898ea0(data_143fecb20, i_1 - 0x14)
        else
            result = (&data_143b856b0)[i_2]
        
        if ((*(result + 8) & 1) == 0)
            char* _Str1 = *(result + 0x10)
            int32_t j = 0
            char* _Str1_1 = _Str1
            
            if (*_Str1 != 0)
                while (j u< 0x80000000)
                    _Str1_1 = &_Str1_1[1]
                    j += 1
                    
                    if (*_Str1_1 == 0)
                        break
            
            if ((j & 0x7fffffff) == rdi && _strnicmp(_Str1, arg2, sx.q(rdi)) == 0)
                return result
    while (i_1 s> 0)

return nullptr
