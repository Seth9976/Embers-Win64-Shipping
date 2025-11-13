// 函数: sub_141f40f80
// 地址: 0x141f40f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0xa8) == 0)
    result = sub_141ee69e0(arg1)

if (*(arg1 + 0xa8) != 0 || result != 0)
    void* rax_1 = *(arg1 + 0xa8)
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
    
    if (sub_14243ade0(rax_1).b != 0)
        result.b = 1
        return result

result.b = 0
return result
