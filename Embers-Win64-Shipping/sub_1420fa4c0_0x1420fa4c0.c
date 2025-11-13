// 函数: sub_1420fa4c0
// 地址: 0x1420fa4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1420f9520(arg1 + 0x30, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x50 + *(arg1 + 0x30)

void* const result = rax_3 + 0x10

if (rax_3 == 0)
    result = nullptr

if (result != 0 && *(result + 0x30) == 0)
    return 0

return result
