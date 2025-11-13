// 函数: sub_140da0180
// 地址: 0x140da0180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 8)
uint64_t r9 = zx.q(rax - 1)

if (rax == 0)
    r9 = 0

return (*(*arg1 + 0x20))(arg1, arg5, 0, r9, arg3, arg4, 0, arg6)
