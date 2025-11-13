// 函数: sub_141d1eb30
// 地址: 0x141d1eb30
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
        int64_t rdx_1 = arg2[1]
        result += 0x30
        int64_t rcx_4 = arg1[1]
        *(result + rcx_4 - 0x30) = *(rdx_1 + result - 0x30)
        *(result + rcx_4 - 0x20) = *(rdx_1 + result - 0x20)
        *(result + rcx_4 - 0x10) = *(rdx_1 + result - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
