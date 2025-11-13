// 函数: sub_141c494b0
// 地址: 0x141c494b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
bool z

if (0 == *(arg1 + 0x1d8))
    *(arg1 + 0x1d8) = 0
    z = true
else
    result = zx.q(*(arg1 + 0x1d8))
    z = false

if (not(z))
    *(arg1 + 0x140) = 0
    int32_t result_1 = *(arg1 + 0x144)
    *(arg1 + 0x144) = 1
    result = zx.q(result_1)

int64_t* rcx = *(arg1 + 0x1e0)

if (rcx != 0)
    *(arg1 + 0x1e0) = 0
    result = (*(*rcx + 0x28))(rcx, 1)
    *(arg1 + 0x1d8)
    *(arg1 + 0x1d8) = 0

return result
