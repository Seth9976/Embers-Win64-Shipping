// 函数: sub_141e1b5d0
// 地址: 0x141e1b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2[2].d
int32_t rdx

if (*(arg1 + 0x14) u>= 3)
    rdx = -1

if (*(arg1 + 0x14) u< 3 || *(arg1 + 0x16) != 0)
    rdx = *(arg1 + 0x10)

int64_t* arg_8
int64_t* rax = sub_141df60d0(*arg2, rdx, &arg_8)
int64_t result = sub_141e06760(*arg2, rax, arg3, arg4, arg5, zmm6.d, arg1 + 0x1c, arg1 + 0x20)
rax[3].d = *(arg2 + 0x14)
int64_t* rcx_4 = arg_8

if (rcx_4 == 0)
    return result

return sub_141e6c450(rcx_4, zx.d(*(arg1 + 0x14)))
