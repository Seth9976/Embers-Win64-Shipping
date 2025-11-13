// 函数: sub_14183c1c0
// 地址: 0x14183c1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1408f1b50(arg1 + 8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 8)

int64_t* rax_1 = rcx_3 + 0x10

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    return -1

return *rax_1
