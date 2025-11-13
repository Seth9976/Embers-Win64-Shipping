// 函数: sub_142ad2c60
// 地址: 0x142ad2c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
int32_t arg_18 = 0
int32_t rax = sub_142b54660(&data_144016688, arg2, &arg_18)
int32_t rbx = rax

if (rax != 0)
label_142ad2d89:
    
    if (arg_18 s<= 0)
        return zx.q(rbx)
else
    zmm6.q =
        sub_142a4b9b0(_mm_cvtepi32_pd(zx.q(arg2)) f* 29.530588853000001).q f* 0x4194997000000000
    zmm6.q = zmm6.q f- 42521587200000.0
    int128_t zmm0_3
    zmm0_3, zmm6, zmm9 = sub_142ad2b10(zmm6, &arg_18)
    
    if (arg_18 s<= rbx)
        if (zmm0_3.q f< 0.0)
            do
                zmm6.q = zmm6.q f+ zmm9.q
                zmm0_3, zmm6, zmm7, zmm9 = sub_142ad2b10(zmm6, &arg_18)
                
                if (arg_18 s> 0)
                    return 0
            while (zmm7.q f> zmm0_3.q)
        else
            zmm8 = -0x3e6b669000000000
            
            do
                zmm6.q = zmm6.q f+ zmm8.q
                zmm0_3, zmm6, zmm7, zmm8, zmm9 = sub_142ad2b10(zmm6, &arg_18)
                
                if (arg_18 s> 0)
                    return 0
            while (zmm0_3.q f>= zmm7.q)
        
        zmm6.q = zmm6.q f- -42521587200000.0
        zmm6.q = zmm6.q f/ zmm9.q
        rbx = int.d(sub_142a4b9b0(zmm6.q)) + 1
        sub_142b54bd0(&data_144016688, arg2, rbx, &arg_18)
        goto label_142ad2d89

return 0
