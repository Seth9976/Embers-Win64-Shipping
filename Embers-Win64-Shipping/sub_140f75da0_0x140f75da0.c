// 函数: sub_140f75da0
// 地址: 0x140f75da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6
int128_t zmm8
int128_t var_38 = zmm8

if (arg3 == 0)
    if (*(arg1 + 0x340) != 1)
        zmm6 = *(arg2 + 4)
    else
        zmm6 = *arg2
    
    void var_48
    sub_140f756b0(arg1, &var_48, arg4)
    int32_t var_40
    zmm8 = var_40
    
    if (not(zmm8.d f<= 0f))
        uint128_t zmm1_1
        zmm1_1.d = zmm6.d f/ zmm8.d
        zmm1_1.d = zmm1_1.d f+ zmm1_1.d
        zmm1_1.d = zmm1_1.d f- 0.5f
        int32_t rdi_2 = int.d(zmm1_1.d) s>> 1
        
        if (rdi_2 s> 0 && (**(arg1 + 0x2a8))(arg1 + 0x2a8) s> rdi_2)
            zmm6.d = zmm6.d f- 0.00100000005f
            zmm1_1 = _mm_cvtepi32_ps(zx.o(rdi_2))
            zmm6.d = zmm6.d f- zmm1_1.d f* zmm8.d
            zmm6.d = zmm6.d f/ zmm1_1.d
            return zmm6.d

return (zx.o(0)).d
