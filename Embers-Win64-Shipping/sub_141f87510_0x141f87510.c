// 函数: sub_141f87510
// 地址: 0x141f87510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = *(arg1 + 4)
int128_t zmm8
zmm8.d = (*(arg2 + 4)).d f- zmm1

if (not(zmm8.d f<= 0f))
    char rax_1 = *arg1
    
    if (rax_1 != 1)
        int128_t zmm7
        zmm7.d = arg3.d f- zmm1
        int128_t zmm6 = *(arg2 + 8)
        int128_t zmm9 = *(arg1 + 8)
        zmm7.d = zmm7.d f/ zmm8.d
        
        if (rax_1 != 0)
            int32_t zmm0 = zmm8.d f* *(arg2 + 0xc)
            zmm8.d = zmm8.d f* *(arg1 + 0x14)
            zmm8.d = zmm8.d f* 0.333333343f
            int128_t zmm5
            zmm5.d = zmm6.d f- zmm0 f* 0.333333343f
            zmm8.d = zmm8.d f+ zmm9.d
            zmm6.d = zmm6.d f- zmm5.d
            int128_t zmm3
            zmm3.d = zmm5.d f- zmm8.d
            zmm1 = zmm8.d f- zmm9.d
            zmm6.d = zmm6.d f* zmm7.d
            arg3.d = zmm3.d f* zmm7.d
            zmm6.d = zmm6.d f+ zmm5.d
            arg3.d = arg3.d f+ zmm8.d
            zmm6.d = zmm6.d f- arg3.d
            zmm6.d = zmm6.d f+ zmm3.d
            float zmm4 = arg3.d f- (zmm1 f* zmm7.d f+ zmm9.d) + zmm1
            zmm6.d = zmm6.d f* zmm7.d
            zmm6.d = zmm6.d f+ zmm8.d
            zmm6.d = zmm6.d f- (zmm4 f* zmm7.d f+ zmm9.d)
            zmm6.d = zmm6.d f+ zmm4
        else
            zmm6.d = zmm6.d f- zmm9.d
        
        zmm6.d = zmm6.d f* zmm7.d
        zmm6.d = zmm6.d f+ zmm9.d
        return zmm6.d

return *(arg1 + 8)
