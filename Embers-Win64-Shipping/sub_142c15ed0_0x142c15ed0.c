// 函数: sub_142c15ed0
// 地址: 0x142c15ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142c04220(*arg1)
rax[1] = j_sub_142c1cb50
*rax = arg2
rax[2] = 0
rax[3].d = 0
uint16_t r8 = zx.w(*(arg2 + 2))
uint64_t r9 = zx.q(*(arg2 + 3))

if (0 != r8 * 0x100 + r9.w)
    sub_142c13d40((zx.q(r8.b) << 8) + arg2 + r9, &rax[2])
    return 0

sub_142c13d40(&data_14369a5d0, &rax[2])
return 0
