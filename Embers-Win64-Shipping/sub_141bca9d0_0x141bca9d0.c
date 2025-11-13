// 函数: sub_141bca9d0
// 地址: 0x141bca9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0x298, &arg_8, *arg2)
int64_t rax = sx.q(arg_8)
void* rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x298) + rax * 0x18

char* result = rcx_1 + 8

if (rcx_1 == 0)
    result = nullptr

if (result != 0 && *result != 0)
    result.b = 1
    return result

result.b = 0
return result
