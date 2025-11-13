// 函数: sub_142a6a360
// 地址: 0x142a6a360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rax = sub_142a6b7a0(arg1, &data_14363eb40)

if (rax == 7)
    rbx = *(arg1 + 0x28) - *(arg1 + 0x100)
else if (rax == 0x12)
    rbx = *(arg1 + 0x54) - 1

int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x6db6db6d, rbx)
int32_t rdx_2 = (temp0 - rbx) s>> 2
int32_t rax_3 = (rdx_2 + (rdx_2 u>> 0x1f)) * 7
int32_t rbx_3 = rbx + rax_3

if (rbx + rax_3 s>= 0)
    return zx.q(rbx_3)

return zx.q(rbx_3 + 7)
