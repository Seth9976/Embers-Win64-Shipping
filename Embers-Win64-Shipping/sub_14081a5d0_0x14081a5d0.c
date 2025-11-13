// 函数: sub_14081a5d0
// 地址: 0x14081a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dd6c18
__builtin_memset(&arg1[1], 0, 0x24)
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 4
arg1[6] = &data_142dd5bb0
arg1[9] = 0
arg1[0xa] = 0
arg1[8] = &data_142dd5b70
arg1[0xb].b = 0
__builtin_memset(&arg1[0xc], 0, 0x1c)
__builtin_memset(&arg1[0x10], 0, 0x1a)
int32_t rcx_2 = (zx.d(*(*(arg4 + 0x788) + 0x28)) & 1) | (arg1[0x14].d & 0xfffffffc)
arg1[0x14].d = rcx_2
char rax_3

if (arg3 == 0)
    rax_3 = 0
else
    rax_3 = *(arg3 + 0x2d)

arg1[0x14].d = ((zx.d(rax_3) << 2 ^ rcx_2) & 4) ^ rcx_2
*(arg1 + 0xa4) = *(*(arg4 + 0x788) + 0xd8)
int32_t rax_11

if (arg3 == 0)
    rax_11 = 0
else
    rax_11 = (*(*arg3 + 0x280))(arg3)

arg1[0x15].d = rax_11
*(arg1 + 0xac) = arg2
arg1[0x36] = 0
arg1[0x37].d = 0
*(arg1 + 0x1bc) = 0x10
__builtin_memset(&arg1[0x39], 0, 0x20)
return arg1
