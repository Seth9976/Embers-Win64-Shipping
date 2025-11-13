// 函数: sub_14299e6d0
// 地址: 0x14299e6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx = arg1[1]

if (arg1[2] == rbx)
    return sub_1429916a0(arg1, rbx, arg2) __tailcall

sub_140592d30(rbx, arg2)
rbx[2].d = arg2[4].d
*(rbx + 0x24) = *(arg2 + 0x24)
*(rbx + 0x28) = arg2[5].d
char result = *(arg2 + 0x2c)
*(rbx + 0x2c) = result
arg1[1] += 0x30
return result
