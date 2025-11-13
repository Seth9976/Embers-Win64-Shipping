// 函数: sub_142c38520
// 地址: 0x142c38520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
int32_t rbx_1 = rbx + 1

if (rbx + 1 s< 0)
    rbx_1 = 0

if (sub_142c382f0(arg1, rbx_1) == 0)
    data_144017550:8.d = 0
    data_144017550.q = 0
    return &data_144017550

uint64_t rcx = zx.q(*arg1)

if (rbx_1 u> rcx.d)
    memset(*(arg1 + 8) + rcx * 0xc, 0, zx.q(rbx_1 - rcx.d) * 0xc)

*arg1 = rbx_1
return *(arg1 + 8) + zx.q(rbx_1 - 1) * 0xc
