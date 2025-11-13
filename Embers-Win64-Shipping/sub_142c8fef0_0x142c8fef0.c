// 函数: sub_142c8fef0
// 地址: 0x142c8fef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = data_143ccb898(0x10)

if (result != 0)
    int64_t rax = data_143ccb898(zx.q(*(arg1 + 0x18)))
    result[1] = rax
    
    if (rax != 0)
        *result = arg1
        (*arg1)(rax)
        return result
    
    data_143ccb8a0(result)

return 0
