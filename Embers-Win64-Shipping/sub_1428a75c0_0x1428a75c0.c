// 函数: sub_1428a75c0
// 地址: 0x1428a75c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r9 = arg1
char* result = arg3 - 1 + arg1

if (arg2 == 0)
    uint64_t i_2 = arg3 u>> 1
    
    if (i_2 != 0)
        uint64_t i
        
        do
            char rcx_1 = *r9
            r9 = &r9[1]
            char rdx = *result
            *result = rcx_1
            result = &result[-1]
            r9[-1] = rdx
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (arg3 != 0)
    void* i_1
    
    do
        char rcx = *arg2
        arg2 = &arg2[1]
        *result = rcx
        result = &result[-1]
        i_1 = arg3
        arg3 -= 1
    while (i_1 != 1)

return result
