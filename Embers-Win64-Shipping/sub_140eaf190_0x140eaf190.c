// 函数: sub_140eaf190
// 地址: 0x140eaf190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
int128_t zmm8 = *sub_140eaf230(arg1, &arg_8, arg2)
int32_t zmm0 = sub_140f02120(*arg3)
int128_t zmm6 = *(arg1 + 0x2f0)
int128_t zmm7
zmm7.d = zmm8.d f- zmm0
int32_t rax_2 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
zmm8.d = zmm8.d f* 0.5f
zmm8.d = zmm8.d f+ zmm6.d
zmm8.d = zmm8.d f/ zmm7.d
int32_t rcx_2 = int.d(zmm8.d)

if (rcx_2 s< 0)
    return 0

if (rcx_2 s< rax_2)
    return rcx_2

return rax_2
