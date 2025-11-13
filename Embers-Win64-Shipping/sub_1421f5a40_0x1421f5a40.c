// 函数: sub_1421f5a40
// 地址: 0x1421f5a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) &= 0xfffffffe
*(arg1 + 0xc) |= zx.d(arg2)
int64_t* rcx = *(arg1 + 0x90)
int64_t result = (*(*rcx + 0x280))(rcx)
*(arg1 + 0x28) &= 0xfffffffe
*(arg1 + 0x20) = result
*(arg1 + 0x90) = 0
return result
