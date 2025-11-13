// 函数: sub_140b2f970
// 地址: 0x140b2f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*arg1 = *arg2
__builtin_memset(arg2, 0, 0x20)
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = 0
arg1[2] = arg2[2]
arg1[3].d = arg2[3].d
*(arg1 + 0x1c) = *(arg2 + 0x1c)
arg1[4].b = arg3
*(arg1 + 0x21) = arg4
int64_t rcx = arg2[2]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *arg2

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return arg1
