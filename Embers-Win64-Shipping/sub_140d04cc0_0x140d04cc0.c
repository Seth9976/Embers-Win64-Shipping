// 函数: sub_140d04cc0
// 地址: 0x140d04cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *arg2
int64_t rcx = 0

if (not(zmm0 < 9.22337204e+18f))
    zmm0 = zmm0 - 9.22337204e+18f
    
    if (not(zmm0 >= 9.22337204e+18f))
        rcx = -0x8000000000000000

return int.q(zmm0) + rcx
