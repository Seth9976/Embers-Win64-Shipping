// 函数: sub_142b70ff0
// 地址: 0x142b70ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xc) != 0)
    return zx.q(arg2)

*(arg1 + 0x10) = arg2
int64_t* rcx = *(arg1 + 0x28)
int32_t rax_1 = (*(*rcx + 0x18))(rcx)
int64_t* rcx_1 = *(arg1 + 0x20)
int64_t r8 = *rcx_1
int32_t result = (*(r8 + 0x18))(rcx_1, zx.q(rax_1 - 1), r8)
*(arg1 + 0xc) = result
return result
