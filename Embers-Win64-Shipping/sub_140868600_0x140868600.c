// 函数: sub_140868600
// 地址: 0x140868600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_1405f7040(*(arg2 + 0x408))
int64_t result_1 = result

if (result == 0)
    return result

int32_t arg_10
sub_140865b30(arg1 + 0x4d0, &arg_10, result)
int64_t rax = sx.q(arg_10)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x50 + *(arg1 + 0x4d0)

int64_t* rcx_2 = rax_3 + 8

if (rax_3 == 0)
    rcx_2 = nullptr

if (rcx_2 == 0)
    int64_t* arg_20 = &result_1
    sub_140862a50(arg1 + 0x4d0, &arg_10, &arg_20, nullptr)
    rcx_2 = sx.q(arg_10) * 0x50 + 8 + *(arg1 + 0x4d0)
    *rcx_2 = result_1

return sub_140858200(rcx_2, arg2)
