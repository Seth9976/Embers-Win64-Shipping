// 函数: sub_1421be350
// 地址: 0x1421be350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg2, 0, sx.q(*(arg1 + 0x110)))
*(arg2 + 0x10) = *arg3
*(arg2 + 0x18) = arg3[1].d
*(arg2 + 0x20) = *arg4
*(arg2 + 0x28) = arg4[1].d
*(arg2 + 0x30) = *arg4
int32_t result = arg4[1].d
*(arg2 + 0x38) = result
int64_t zmm0
zmm0.d = (*(arg2 + 0x10)).d f- *(arg1 + 0x1a8)
float zmm1 = *(arg2 + 0x14)
*(arg2 + 0x10) = zmm0.d
zmm0 = *(arg2 + 0x18)
*(arg2 + 0x14) = zmm1 f- *(arg1 + 0x1ac)
zmm0.d = zmm0.d f- *(arg1 + 0x1b0)
*(arg2 + 0x18) = zmm0.d
return result
