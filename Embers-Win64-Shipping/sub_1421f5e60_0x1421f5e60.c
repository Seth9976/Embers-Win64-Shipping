// 函数: sub_1421f5e60
// 地址: 0x1421f5e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xc) &= 0xfffffffe
*(arg1 + 0xc) |= zx.d(arg2)
arg1[6] = &arg1[0xa]
int64_t* rcx_1 = arg1[0x16]
arg1[4] = (*(*rcx_1 + 0x280))(rcx_1)
int32_t rcx_3
rcx_3.b = *((*(*arg1 + 0x60))(arg1) + 0x94) s> 0
arg1[5].d = rcx_3 | (arg1[5].d & 0xfffffffe)
*(arg1[6] + 0x60) = 0
int32_t rbx
rbx.b = *((*(*arg1 + 0x60))(arg1) + 0x94) s> 0
int32_t result = arg1[5].d & 0xfffffffe
arg1[5].d = rbx | result
return result
