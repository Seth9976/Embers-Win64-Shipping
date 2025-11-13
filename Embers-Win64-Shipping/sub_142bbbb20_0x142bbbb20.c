// 函数: sub_142bbbb20
// 地址: 0x142bbbb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0xffff)
    return 0

int32_t i = 0

if (*(arg3 + 0x168) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        char* _Str1 = *(rdi_1 + *(arg3 + 0x170))
        
        if (_Str1 != 0 && *_Str1 == *arg1)
            int64_t rax_4 = -1
            
            do
                rax_4 += 1
            while (_Str1[rax_4] != 0)
            
            if (rax_4 == arg2 && strncmp(_Str1, arg1, arg2) == 0)
                return zx.q(i)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg3 + 0x168))

return 0
