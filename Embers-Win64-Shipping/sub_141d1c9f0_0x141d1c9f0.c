// 函数: sub_141d1c9f0
// 地址: 0x141d1c9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x60))(arg2)
int64_t result = (*(*arg1 + 0x60))(arg1)

if (arg1 != arg2)
    int128_t zmm3 = *arg1
    int64_t zmm2 = arg1[2]
    *arg1 = *arg2
    arg1[2] = arg2[2]
    *arg2 = zmm3
    arg2[2] = zmm2

return result
