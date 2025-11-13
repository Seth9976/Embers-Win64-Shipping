// 函数: sub_141a4b2f0
// 地址: 0x141a4b2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
int32_t result_1 = 0
int64_t r14 = *rax
int32_t rsi = rax[1].d
int64_t var_28 = r14
int32_t var_20 = rsi
var_28.o = var_28.o
void arg_20
sub_141a4bf00(&var_28, arg2, arg3, 1, &result_1, &arg_20)
int64_t result = sx.q(result_1)

if (result.d s>= 0 && result.d s< rsi)
    int32_t rdx_1 = *(r14 + (result << 2)) - arg2
    
    if (rdx_1 s< 0)
        rdx_1 = neg.d(rdx_1)
    
    if (rdx_1 s<= arg3)
        return result

return 0xffffffff
