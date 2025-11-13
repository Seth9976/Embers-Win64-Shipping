// 函数: sub_140cd3b40
// 地址: 0x140cd3b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
int64_t rax

if (arg2 == 0)
    arg_8 = 0
    rax = 0
else
    rax = *(arg2 + 0x18)

*arg1 = rax
arg1[1].d = 0
int64_t rax_3

if (arg2 == 0)
    arg_8 = 0
    rax_3 = 0
else
    rax_3 = *(*(*(arg2 + 0x10) + 0x20) + 0x18)

*(arg1 + 0xc) = rax_3
int64_t rax_5

if (arg2 == 0)
    arg_8 = 0
    rax_5 = 0
else
    rax_5 = *(*(arg2 + 0x10) + 0x18)

*(arg1 + 0x14) = rax_5
arg1[4] = arg2
arg1[5] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
*(arg1 + 0x36) = 0
return arg1
