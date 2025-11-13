// 函数: sub_14183a610
// 地址: 0x14183a610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140926e00(arg1 + 0x58, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x58) + rax * 0x28

int64_t* result = rcx_1 + 0x10

if (rcx_1 == 0)
    result = nullptr

if (result == 0)
    return result

return *result
