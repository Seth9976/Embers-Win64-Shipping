// 函数: sub_142bf78c0
// 地址: 0x142bf78c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
int32_t rbx_1 = rbx + 1

if (rbx + 1 s< 0)
    rbx_1 = 0

if (sub_142bf7480(arg1, rbx_1) == 0)
    __builtin_memset(&data_144017550, 0, 0x18)
    return &data_144017550

uint64_t rcx = zx.q(*arg1)

if (rbx_1 u> rcx.d)
    memset(*(arg1 + 8) + rcx * 0x18, 0, zx.q(rbx_1 - rcx.d) * 0x18)

*arg1 = rbx_1
return *(arg1 + 8) + zx.q(rbx_1 - 1) * 0x18
