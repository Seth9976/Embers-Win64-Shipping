// 函数: sub_142409d00
// 地址: 0x142409d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x148)
uint32_t r10 = zx.d(*(result + 0x30))

if (r10 == 0)
    return sub_142409d30(arg1, arg2, arg3, arg4) __tailcall

if (r10 != 1)
    return result

return sub_14240a3d0(arg1, arg2, arg3, arg4) __tailcall
