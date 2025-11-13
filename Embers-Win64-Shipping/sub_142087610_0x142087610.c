// 函数: sub_142087610
// 地址: 0x142087610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x78))
    return 0xffffffff

int128_t* rdx = sx.q(arg2) * 0x38
int128_t var_68 = zx.o(0)
int64_t rax_1 = *(arg1 + 0x70)

if (arg4 == 0)
    arg4 = arg1

int128_t zmm7 = *(rdx + rax_1)
int128_t zmm8 = *(rdx + rax_1 + 0x10)
int128_t zmm9 = *(rdx + rax_1 + 0x20)
*(rdx + rax_1 + 0x30)
int32_t rax_2
int64_t zmm6_1
rax_2, zmm6_1 = sub_14207d2c0(arg4 + 0x70, arg3, &var_68)
int64_t rdx_1 = *(arg4 + 0x70)
int64_t rbx = sx.q(rax_2)
int128_t* r8_1 = rbx * 0x38
*(r8_1 + rdx_1) = zmm7
*(r8_1 + rdx_1 + 0x10) = zmm8
*(r8_1 + rdx_1 + 0x20) = zmm9
*(r8_1 + rdx_1 + 0x30) = zmm6_1
*(r8_1 + *(arg4 + 0x70)) = arg3.d
r8_1.b = 1
sub_14207d710(arg4 + 0x70, *(arg1 + 0x88), r8_1.b)
return zx.q(rbx.d)
