// 函数: sub_14214d970
// 地址: 0x14214d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg2)
int32_t rdx = *(arg1 + 0x2c0)

if ((rsi * 3).d << 4 u> rdx)
    *(arg1 + 0x2c0) = 0
    sub_1405d16e0(arg1 + 0x2b0, nullptr)
    sub_1405d16e0(arg1 + 0x2b8, nullptr)
    (*(*(arg1 + 0x2a8) + 8))(arg1 + 0x2a8, 0x10, zx.q((rsi * 3).d), 1, 2)
    rdx = *(arg1 + 0x2c0)

int64_t* rcx_3 = data_143f0f180
int64_t result = (*(*rcx_3 + 0x130))(rcx_3, &data_143f02b98, *(arg1 + 0x2b0), 0, rdx, 1)
*(arg1 + 0x2c8) = result
return result
