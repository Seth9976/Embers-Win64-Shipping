// 函数: sub_142c381e0
// 地址: 0x142c381e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
int32_t rbx_1 = rbx + 1

if (rbx + 1 s< 0)
    rbx_1 = 0

if (sub_142c36f40(arg1, rbx_1) == 0)
    data_144017550 = data_14369a5d0
    return &data_144017550

uint64_t rcx = zx.q(*arg1)

if (rbx_1 u> rcx.d)
    memset((rcx << 4) + *(arg1 + 8), 0, zx.q(rbx_1 - rcx.d) << 4)

*arg1 = rbx_1
return (zx.q(rbx_1 - 1) << 4) + *(arg1 + 8)
