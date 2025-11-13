// 函数: sub_1417bc940
// 地址: 0x1417bc940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg1[0x19].d
int64_t rsi = sx.q(*arg2)
int128_t zmm6 = *(arg1 + 0xc4)
float zmm7[0x4] = arg1[0x18].d
int64_t r10 = rsi * 3
int64_t* rax = arg1[1]
int64_t var_98 = 0x3f800000
int32_t var_a0 = 0
int64_t r9 = *rax
int64_t r11 = *(*arg1 + 0x38)
uint64_t rdx = zx.q(*(r9 + (r10 << 1))) * 3
uint64_t rax_3 = zx.q(*(r9 + (r10 << 1) + 2))
zmm2[0] = zmm2[0] f* *(r11 + (rdx << 2) + 8)
zmm7[0] = zmm7[0] f* *(r11 + (rdx << 2))
uint64_t rcx = rax_3 * 3
uint64_t rax_4 = zx.q(*(r9 + (r10 << 1) + 4))
int64_t zmm4
zmm4.d = zmm6.q.d f* *(r11 + (rdx << 2) + 4)
int64_t rdx_1 = arg1[8]
int64_t zmm1
zmm1.d = zmm6.q.d f* *(r11 + (rcx << 2) + 4)
zmm7[0] = zmm7[0] f* *(r11 + (rcx << 2))
float var_90 = zmm2[0]
zmm2[0] = zmm2[0] f* *(r11 + (rcx << 2) + 8)
uint64_t rcx_1 = rax_4 * 3
zmm7[0] = zmm7[0] f* *(r11 + (rcx_1 << 2))
int32_t var_90_1 = 0
zmm2[0] = zmm2[0] f* *(r11 + (rcx_1 << 2) + 8)
zmm6.d = zmm6.d f* *(r11 + (rcx_1 << 2) + 4)
float var_60 = var_90
float var_54 = zmm2[0]
int64_t var_68 = (_mm_unpacklo_ps(zmm7, zmm4)).q
float temp0_1[0x4] = _mm_unpacklo_ps(zmm7, zmm1)
zmm1.d = (*(arg3 + 0x14)).d f* *(arg1 + 0x64)
int64_t var_5c = temp0_1.q
float temp0_2[0x4] = _mm_unpacklo_ps(zmm7, zmm6.q)
float var_48 = zmm2[0]
int64_t* var_a8 = &var_98
int64_t var_50 = temp0_2.q
void var_88
void var_78
float arg_8

if (sub_1416752a0(&var_68, rdx_1, &arg1[0xe], &arg1[0xb], zmm1.d, &arg_8, &var_78, &var_88, 
        arg1[0xa].d[0].b, *(arg1 + 0x54)) != 0)
    float zmm6_1 = arg_8
    
    if (not(zmm6_1 f>= arg1[0x14].d))
        uint128_t zmm3_1 = *(arg1 + 0x64)
        int32_t var_90_2 = arg1[0x19].d
        var_98 = arg1[0x18]
        float zmm6_2
        float zmm7_1
        float zmm8_1
        zmm6_2, zmm7_1, zmm8_1 = sub_1417b6bd0(&var_98, &var_88, &var_78, zmm3_1, zmm6_1, 
            &arg1[0x16], arg1 + 0xa4, &arg1[0x14])
        *(arg1 + 0xbc) = rsi.d
        
        if (not(zmm6_2 > zmm8_1))
            *(arg3 + 0x14) = 0
            return 0
        
        *(arg3 + 0x14) = zmm6_2
        *(arg3 + 0x18) = zmm7_1 / zmm6_2

return 1
