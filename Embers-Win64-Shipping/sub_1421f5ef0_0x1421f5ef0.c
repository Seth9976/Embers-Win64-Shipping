// 函数: sub_1421f5ef0
// 地址: 0x1421f5ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) &= 0xfffffffe
*(arg1 + 0xc) |= zx.d(arg2)
int64_t rax_2 = (*(*arg1 + 0x60))()
int64_t* rcx = arg1[0x12]
int32_t rdx
rdx.b = *(rax_2 + 0x94) s> 0
arg1[5].d = rdx | (arg1[5].d & 0xfffffffe)
int64_t result = (*(*rcx + 0x280))(rcx)
arg1[4] = result
arg1[0x12] = 0
return result
