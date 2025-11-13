// 函数: sub_142823eb0
// 地址: 0x142823eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x18)

if (rdx != 0)
    void* r8_1 = *(arg1 + 0x10)
    
    if (r8_1 != 0)
        *(r8_1 + 8) += 1
        r8_1 = *(arg1 + 0x10)
        rdx = *(arg1 + 0x18)
    
    void* var_10_1 = r8_1
    int64_t var_18 = *(arg1 + 8)
    sub_142823728(arg2, rdx, &var_18)
else
    *arg2 = 1
    *(arg2 + 0x18) = 0
    *(arg2 + 0x20) = 0xf
    arg2[8] = 0
    __builtin_memset(&arg2[0x28], 0, 0x18)

return arg2
