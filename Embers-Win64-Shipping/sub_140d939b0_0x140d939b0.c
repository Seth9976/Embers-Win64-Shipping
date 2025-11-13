// 函数: sub_140d939b0
// 地址: 0x140d939b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = arg5
*arg1 = 0
arg1[1] = 0
*(arg1 + 0x10) = *rax
*(arg1 + 0x20) = rax[1]
__builtin_memset(&arg1[6], 0, 0x18)
arg1[9].d = zx.d(arg3)
*(arg1 + 0x4c) = 3
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

sub_140dc03e0(arg1, *sub_140b58260(&arg5, rdx, 1), arg4)
return arg1
