// 函数: sub_142c04170
// 地址: 0x142c04170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
int32_t rbx_1 = rbx + 1

if (rbx + 1 s< 0)
    rbx_1 = 0

if (sub_142bfcfc0(arg1, rbx_1) == 0)
    int128_t zmm1 = data_14369a5e0.o
    data_144017550 = data_14369a5d0
    data_144017570 = 0
    data_144017560.o = zmm1
    return &data_144017550

uint64_t rcx = zx.q(*arg1)

if (rbx_1 u> rcx.d)
    memset(*(arg1 + 8) + rcx * 0x28, 0, zx.q(rbx_1 - rcx.d) * 0x28)

*arg1 = rbx_1
return *(arg1 + 8) + zx.q(rbx_1 - 1) * 0x28
