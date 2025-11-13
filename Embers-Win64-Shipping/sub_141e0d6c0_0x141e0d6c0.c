// 函数: sub_141e0d6c0
// 地址: 0x141e0d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x80)
int32_t result = rax - 1
int64_t result_1 = sx.q(result)
int128_t zmm6 = arg2

if (rax - 1 s>= 0)
    int64_t result_2
    
    do
        int64_t rbx_1 = *(arg1 + 0x78)
        void var_48
        int64_t* rax_1 = sub_141ddd6c0(&var_48, zmm6.d)
        result, zmm6 = sub_141e31c70(*(rbx_1 + (result_1 << 3)), rax_1, 1)
        result_2 = result_1
        result_1 -= 1
    while (result_2 - 1 s>= 0)

return result
