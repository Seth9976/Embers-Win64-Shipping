// 函数: sub_142962f50
// 地址: 0x142962f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rdx = zx.q(*arg2)
int32_t rax = arg2[7]

if (rdx.d != 0)
    if (rax != 2)
        memset(&arg2[1] + zx.q(rdx.d), 0, zx.q(8 - rdx.d))
        sub_1429630d0(arg2, &arg2[1], 8)
    else
    label_142962f7e:
        *(rdx + arg2 + 4) = 0x80
        rdx = zx.q(rdx.d + 1)
        memset(&arg2[1] + zx.q(rdx.d), 0, zx.q(8 - rdx.d))
        sub_1429630d0(arg2, &arg2[1], 8)
else if (rax == 2)
    goto label_142962f7e

*arg1 = *(arg2 + 0xc)
arg1[1] = *(arg2 + 0x14)
return 1
