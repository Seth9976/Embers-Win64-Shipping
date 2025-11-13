// 函数: sub_14183ced0
// 地址: 0x14183ced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
sub_140cba0f0(&arg1[0x2c], &result_1, arg2)
int64_t result = sx.q(result_1)
void* rdx_3

if (result.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (result << 5) + arg1[0x2c]

int64_t* rcx_1 = rdx_3 + 0x10

if (rdx_3 == 0)
    rcx_1 = nullptr

if (rcx_1 == 0)
    result.b = 0
    return result

*rcx_1
jump(*(*arg1 + 0x1f0))
