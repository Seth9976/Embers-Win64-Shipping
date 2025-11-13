// 函数: sub_1405b73c0
// 地址: 0x1405b73c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1405ade00(arg1 + 0x20)
int64_t* rcx_1 = *(arg1 + 0x18)

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        jump(*(*rcx_1 + 8))

return result
