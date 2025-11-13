// 函数: sub_142b70f10
// 地址: 0x142b70f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc) != 0)
    return zx.q(arg2)

int64_t* rcx = *(arg1 + 0x20)
int32_t result = (*(*rcx + 0x18))(rcx)
*(arg1 + 0xc) = result
return result
