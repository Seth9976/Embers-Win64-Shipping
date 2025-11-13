// 函数: sub_1426f5640
// 地址: 0x1426f5640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6

if (arg1[0xa].d s<= 0)
    zmm6 = zx.o(0)
else
    zmm6 = *((*(*arg1 + 0x150))() + 0x520)

int64_t rbx = sx.q(arg1[8].d)
int32_t rax_3 = (rbx + 1).d
arg1[8].d = rax_3

if (rax_3 s> *(arg1 + 0x44))
    sub_1408888d0(&arg1[7])

int64_t rbx_1 = rbx << 7
sub_1426f21f0(arg1[7] + rbx_1, arg2)
*(rbx_1 + arg1[7] + 0x6c) = *(arg1 + 0x4c)
*(rbx_1 + arg1[7] + 0x68) = zmm6.d
int32_t rbx_2 = *(rbx_1 + arg1[7] + 0x6c)
*(arg1 + 0x4c) += 1
sub_142718d10(arg1)
*(arg1 + 0x54) |= 1

if (arg3 != 0)
    sub_142708e30(arg1)

return zx.q(rbx_2)
