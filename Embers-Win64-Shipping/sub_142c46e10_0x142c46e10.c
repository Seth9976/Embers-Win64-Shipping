// 函数: sub_142c46e10
// 地址: 0x142c46e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = strstr(arg1, arg3)
char* result_1 = result

if (result != 0)
    while (result_1 u< arg2)
        char* rcx = -ffffffffffffffff
        bool cond:0_1
        
        do
            cond:0_1 = *(arg3 + rcx + 1) != 0
            rcx = &rcx[1]
        while (cond:0_1)
        char rdx_1 = *(rcx + result_1)
        
        if (rdx_1 - 0x61 u> 0x19 && rdx_1 - 0x41 u> 0x19 && rdx_1 - 0x30 u> 9)
            return 1
        
        void* rcx_1 = -ffffffffffffffff
        
        do
            rcx_1 += 1
        while (*(arg3 + rcx_1) != 0)
        
        result = strstr(rcx_1 + result_1, arg3)
        result_1 = result
        
        if (result == 0)
            break

result.b = 0
return result
