// 函数: sub_140d2be40
// 地址: 0x140d2be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int64_t r8
int64_t var_10 = r8
int32_t arg_10
sub_140850560(&data_1439aaaf0, &arg_10, &var_18)
int64_t rax = sx.q(arg_10)
void* const rdx_3

if (rax.d == 0xffffffff)
    rdx_3 = nullptr
else
    rdx_3 = (rax << 5) + data_1439aaaf0

int64_t* result = rdx_3 + 0x10

if (rdx_3 == 0)
    result = nullptr

if (result == 0)
    return result

return arg1 - *result
