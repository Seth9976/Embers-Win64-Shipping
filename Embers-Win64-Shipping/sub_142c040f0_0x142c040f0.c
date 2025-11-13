// 函数: sub_142c040f0
// 地址: 0x142c040f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
int32_t rbx_1 = rbx + 1

if (rbx + 1 s< 0)
    rbx_1 = 0

if (sub_142bfcf30(arg1, rbx_1) == 0)
    data_144017550.d = 0
    return &data_144017550

uint64_t rcx = zx.q(*arg1)

if (rbx_1 u> rcx.d)
    memset(*(arg1 + 8) + (rcx << 2), 0, zx.q(rbx_1 - rcx.d) << 2)

int64_t rax_2 = *(arg1 + 8)
*arg1 = rbx_1
return rax_2 + (zx.q(rbx_1 - 1) << 2)
