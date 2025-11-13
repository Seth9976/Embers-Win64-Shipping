// 函数: sub_14183d670
// 地址: 0x14183d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1408f1b50(arg1 + 0x1b0, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x1b0)

int64_t* result = rcx_3 + 0x10

if (rcx_3 == 0)
    result = nullptr

if (result == 0)
    return result

return *(*result + 0x58)
