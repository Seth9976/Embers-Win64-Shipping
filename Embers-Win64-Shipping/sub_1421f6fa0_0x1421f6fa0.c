// 函数: sub_1421f6fa0
// 地址: 0x1421f6fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140865c40(&data_143a2f030, &result_1, arg1)
int64_t result = sx.q(result_1)
int64_t rdx_1

if (result.d == 0xffffffff)
    rdx_1 = 0
else
    int64_t r8_1 = result * 3
    result = data_143a2f030
    rdx_1 = result + (r8_1 << 3)

int64_t* rcx = rdx_1 + 8

if (rdx_1 == 0)
    rcx = nullptr

if (rcx == 0)
    return result

int64_t* rcx_1 = *rcx

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

return sub_140868c90(&data_143a2f030, arg1) __tailcall
