// 函数: sub_1420a38d0
// 地址: 0x1420a38d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 s< 0 || rbx.d s>= *(arg1 + 0x78))
    return zx.q(rbx.d)

int32_t rbp = rbx.d

if (arg4 == 0)
    int32_t* rdx_3 = rbx * 0x2c
    *(rdx_3 + *(arg1 + 0x70)) = arg3.d
    *(rdx_3 + *(arg1 + 0x88)) = arg3.d
    *(*(arg1 + 0xa0) + rbx * 0xc + 8) = arg3.d
else
    int32_t rax
    uint128_t zmm6_1
    rax, zmm6_1 = sub_141fe9c10(arg1 + 0x70, rbx.d, arg3)
    rbp = rax
    sub_14209a1a0(arg1 + 0xa0, rbx.d, sub_141fe9c10(arg1 + 0x88, rbx.d, zmm6_1))

sub_141f55fe0(arg1 + 0x70, *(arg1 + 0xb8), 1)
sub_141f55fe0(arg1 + 0x88, *(arg1 + 0xbc), 1)
return zx.q(rbp)
