// 函数: sub_1428f1300
// 地址: 0x1428f1300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x138)

if (rax_1 != 0)
    int32_t* r8_1 = *(rax_1 + 0x10)
    
    if (r8_1 != 0)
        if (arg2 != 0)
            *arg2 = *r8_1
            rax_1 = *(arg1 + 0x138)
        
        return *(*(rax_1 + 0x10) + 8)

return 0
