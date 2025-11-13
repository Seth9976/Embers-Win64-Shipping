// 函数: sub_142004530
// 地址: 0x142004530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = *(arg1 + 0x38)

if (zmm0 f>= 9.99999994e-09f)
    return zmm0

int32_t i = 0
*(arg1 + 0x38) = 0

if (*(arg1 + 0x30) s<= 0)
    return (zx.o(0)).d

int128_t zmm1

do
    int32_t arg_8
    void arg_10
    sub_141f8ba60(sub_141f8b8d0(sx.q(i) * 0x90 + *(arg1 + 0x28) + 8), &arg_10, &arg_8)
    zmm1 = *(arg1 + 0x38)
    int128_t zmm0_1 = arg_8
    
    if (not(zmm0_1.d f<= zmm1.d))
        *(arg1 + 0x38) = zmm0_1.d
        zmm1 = zmm0_1
    
    i += 1
while (i s< *(arg1 + 0x30))

return zmm1
