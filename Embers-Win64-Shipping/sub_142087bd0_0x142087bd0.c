// 函数: sub_142087bd0
// 地址: 0x142087bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return 0xffffffff

int128_t* rdx = sx.q(arg2) * 0x2c
int64_t rax_1 = *(arg1 + 0x70)

if (arg4 == 0)
    arg4 = arg1

int128_t zmm7 = *(rdx + rax_1)
int32_t rsi = *(rdx + rax_1 + 0x28)
int128_t zmm8 = *(rdx + rax_1 + 0x10)
*(rdx + rax_1 + 0x20)
int32_t rax_2
int64_t zmm6_1
rax_2, zmm6_1 = sub_141fda9f0(arg4 + 0x70, arg3, &data_143dbb1f8)
int128_t* rdx_1 = *(arg4 + 0x70)
int64_t rbx = sx.q(rax_2)
int32_t* r8 = rbx * 0x2c
*(rdx_1 + r8) = zmm7
*(rdx_1 + r8 + 0x10) = zmm8
*(rdx_1 + r8 + 0x20) = zmm6_1
*(rdx_1 + r8 + 0x28) = rsi
*(r8 + *(arg4 + 0x70)) = arg3.d
r8.b = 1
sub_141f55fe0(arg4 + 0x70, *(arg1 + 0x88), r8.b)
return zx.q(rbx.d)
