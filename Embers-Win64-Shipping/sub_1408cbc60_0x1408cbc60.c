// 函数: sub_1408cbc60
// 地址: 0x1408cbc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
int64_t r9_1 = r9 + rax
*(arg2 + 0x20) = r9_1
int64_t result
int32_t zmm0
zmm0, result = sub_1408ca3d0(arg1, arg4, arg5, r9_1)
*arg3 = zmm0
return result
