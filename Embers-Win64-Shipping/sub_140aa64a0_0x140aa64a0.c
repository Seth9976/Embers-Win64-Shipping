// 函数: sub_140aa64a0
// 地址: 0x140aa64a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1405d5770(arg1 + 0x30)
int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    result = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (result == 1 && rcx_1 != 0)
        jump(*(*rcx_1 + 8))

return result
