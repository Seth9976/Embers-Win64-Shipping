// 函数: sub_141dea080
// 地址: 0x141dea080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141de9d60(&arg1[0x15], arg2, arg3, arg4)
int32_t rsi = 0
uint64_t result_1
__builtin_memset(&result_1, 0, 0x1b)
sub_141decfa0(&result_1, arg3)
int512_t zmm2
zmm2.o = *(arg4 + 4)
int64_t var_20
int64_t var_18
int16_t var_10
uint64_t result = (*(*arg1 + 0x298))(arg1, &result_1, zmm2, 0, result_1, var_20, var_18, var_10)
int32_t rcx_3 = var_20.d

if (rcx_3 s> 0)
    int32_t* rdx_2 = nullptr
    
    do
        result = result_1
        
        if (*(rdx_2 + result + 4) != 0)
            int64_t rcx_4 = *arg3
            result = zx.q(*(rdx_2 + result))
            *(rdx_2 + rcx_4) = result.d
            *(rdx_2 + rcx_4 + 4) = 1
            rcx_3 = var_20.d
        
        rsi += 1
        rdx_2 = &rdx_2[2]
    while (rsi s< rcx_3)

return result
