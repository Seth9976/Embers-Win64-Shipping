// 函数: sub_142c5cd30
// 地址: 0x142c5cd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    *(arg2 + 0x3fc) = 0

bool cond:0 = *(arg1 + 0x5e8) == 0
*(arg1 + 0x4e78) = 0
*(arg1 + 0x4e28) = 0

if (not(cond:0))
    *(arg1 + 0x438) = 5
else if (*(arg1 + 0x438) == 5)
    *(arg1 + 0x438) = 1

uint64_t var_18[0x2]
uint64_t* rax = sub_142c59600(&var_18)
*(arg1 + 0x110) = *rax
int128_t zmm0 = *rax
*(arg1 + 0x130) = 1
*(arg1 + 0xf8) = 0
*(arg1 + 0x120) = zmm0
*(arg1 + 0x210) = *(arg1 + 0xa80)
*(arg1 + 0x140) = *(arg1 + 0xa70)
*(arg1 + 0x225) = 0
sub_142c6fdf0(arg1)
sub_142c6f1b0(arg1, 0)
sub_142c6f0c0(arg1, 0)
return 0
