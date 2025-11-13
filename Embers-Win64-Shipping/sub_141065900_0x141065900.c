// 函数: sub_141065900
// 地址: 0x141065900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x1b0)
int64_t result

if (rcx != 0)
    result = (*(*rcx + 0x10))(rcx)

if (rcx == 0 || result.b != 0)
    uint32_t temp1_1 = modu.dp.d(0:(*(arg2 + 0xa8) + 1), *(arg2 + 0xa0))
    *(arg2 + 0xa8) = temp1_1
    int64_t rdx_1 = sx.q(temp1_1) << 3
    result = *(arg2 + 0xc8)
    *(arg2 + 0xb0) = *(rdx_1 + *(arg2 + 0x80))
    *(arg2 + 0xd8) = *(rdx_1 + result)

return result
