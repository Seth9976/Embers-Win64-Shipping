// 函数: sub_142315e60
// 地址: 0x142315e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int128_t zmm7 = data_143dbb1f8
int32_t i = 0
int128_t zmm8 = data_143dbb1fc
int128_t zmm9 = data_143dbb200
int128_t zmm10 = zx.o(0)

if (*(arg1 + 0x808) s> 0)
    int64_t* rdi_1 = nullptr
    int128_t zmm6
    int128_t var_28_1 = zmm6
    
    do
        void* rsi_1 = *(rdi_1 + *(arg1 + 0x800))
        
        if (sub_14221b2f0(rsi_1) != 0)
            zmm6.d = sub_142216b90(rsi_1).d f* *(rsi_1 + 0x88)
            zmm10.d = zmm10.d f+ zmm6.d
            void var_a8
            float zmm3[0x4] = sub_142217930(rsi_1, &var_a8)[1]
            float zmm1_1 = zmm3[0]
            float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
            temp0_2[0] = temp0_2[0] f* zmm6.d
            temp0_1[0] = temp0_1[0] f* zmm6.d
            zmm9.d = zmm9.d f+ temp0_2[0]
            zmm7.d = zmm7.d f+ zmm1_1 f* zmm6.d
            zmm8.d = zmm8.d f+ temp0_1[0]
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x808))

float zmm0 = 1f f/ zmm10.d
zmm7.d = zmm7.d f* zmm0
zmm8.d = zmm8.d f* zmm0
zmm9.d = zmm9.d f* zmm0
*arg2 = zmm7.d
arg2[1] = zmm8.d
arg2[2] = zmm9.d
__security_check_cookie(rax_1 ^ &var_c8)
return arg2
