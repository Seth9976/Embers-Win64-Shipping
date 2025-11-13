// 函数: sub_142834d28
// 地址: 0x142834d28
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** r8 = *(arg1 + 0x20)

if (r8 != 0)
    int32_t r10_1 = arg2[5].d
    int64_t** rcx = nullptr
    
    while (true)
        int32_t temp0_1 = r8[5].d
        
        if (r10_1 u< temp0_1 || (r10_1 == temp0_1 && *(arg2 + 0x2c) u< *(r8 + 0x2c)))
            *arg2 = r8
            
            if (rcx == 0)
                *(arg1 + 0x20) = arg2
                break
        else
            rcx = r8
            r8 = *r8
            
            if (r8 != 0)
                continue
            else
                *arg2 &= r8
        
        *rcx = arg2
        break
else
    *arg2 &= r8
    *(arg1 + 0x20) = arg2

return 0
