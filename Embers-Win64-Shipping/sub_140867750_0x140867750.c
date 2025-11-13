// 函数: sub_140867750
// 地址: 0x140867750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140865c40(&data_14396ff70, &result_1, arg1)
int64_t result = sx.q(result_1)
int64_t rdx_1

if (result.d == 0xffffffff)
    rdx_1 = 0
else
    int64_t r9_1 = result * 3
    result = data_14396ff70
    rdx_1 = result + (r9_1 << 3)

int64_t* rcx = rdx_1 + 8

if (rdx_1 == 0)
    rcx = nullptr

if (rcx == 0)
    return result

return sub_1408677d0(*rcx)
