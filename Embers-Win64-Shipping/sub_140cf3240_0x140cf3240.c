// 函数: sub_140cf3240
// 地址: 0x140cf3240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = float.s(arg2)

if (arg2 s< 0)
    zmm0 = zmm0 f+ 1.84467441e+19f

int64_t rcx = 0

if (not(zmm0 f< 9.22337204e+18f))
    zmm0 = zmm0 f- 9.22337204e+18f
    
    if (not(zmm0 f>= 9.22337204e+18f))
        rcx = -0x8000000000000000

int64_t result
result.b = int.q(zmm0) + rcx == arg2
return result
