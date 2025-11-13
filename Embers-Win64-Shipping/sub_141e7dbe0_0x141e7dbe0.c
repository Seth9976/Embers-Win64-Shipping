// 函数: sub_141e7dbe0
// 地址: 0x141e7dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg3
char var_18 = arg2
int64_t var_14 = rax
int32_t arg_10
sub_141e7aef0(arg1 + 0x128, &arg_10, &var_18)
int64_t rax_1 = sx.q(arg_10)
void* const rcx_1

if (rax_1.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x128) + rax_1 * 0x18

int32_t* rax_3 = rcx_1 + 0xc

if (rcx_1 == 0)
    rax_3 = nullptr

if (rax_3 == 0)
    return 0x3f800000

return _mm_max_ss(*rax_3, 0)
