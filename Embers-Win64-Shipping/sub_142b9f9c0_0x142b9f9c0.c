// 函数: sub_142b9f9c0
// 地址: 0x142b9f9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142ba2850(arg2, arg3)

if (result == 0)
    int16_t* rcx_1 = arg2[4]
    int32_t* r8 = *(arg3 + 8)
    char* rdx_2 = *(arg3 + 0x10)
    void* r9_3 = &rcx_1[sx.q(*(arg2 + 0x1c)) * 0x18]
    
    if (rcx_1 u< r9_3)
        do
            *r8 = *(rcx_1 + 0x10)
            r8[1] = *(rcx_1 + 0x14)
            char rax_2 = (*rcx_1).b
            
            if ((rax_2 & 1) == 0)
                *rdx_2 = ((rax_2 & 2) != 0) + 1
            else
                *rdx_2 = 0
            
            rcx_1 = &rcx_1[0x18]
            r8 = &r8[2]
            rdx_2 = &rdx_2[1]
        while (rcx_1 u< r9_3)

return result
