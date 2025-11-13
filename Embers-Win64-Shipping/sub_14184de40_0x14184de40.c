// 函数: sub_14184de40
// 地址: 0x14184de40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
zmm6.q = arg1.q f/ sub_140a48b40()

if (zmm6.q f>= -1.0 f+ 1.8446744073709552e+19)
    return -1

int64_t zmm0 = 0x43e0000000000000
int64_t rcx_1 = 0

if (not(zmm6.q f< zmm0))
    zmm6.q = zmm6.q f- zmm0
    
    if (not(zmm6.q f>= zmm0))
        rcx_1 = -0x8000000000000000

return int.q(zmm6.q) + rcx_1
