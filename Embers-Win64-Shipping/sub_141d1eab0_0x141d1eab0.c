// 函数: sub_141d1eab0
// 地址: 0x141d1eab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x60))(arg2)
(*(*arg1 + 0x60))(arg1)
int32_t i_3 = (*(*arg2 + 0x48))(arg2)
int64_t r8 = *arg1
int64_t i_2 = sx.q(i_3)
int64_t result = (*r8)(arg1, zx.q(i_2.d), r8)
int64_t i_1 = i_2

if (i_2.d s> 0)
    result = 0
    int64_t i
    
    do
        result += 0x10
        *(result + arg1[1] - 0x10) = *(arg2[1] + result - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
