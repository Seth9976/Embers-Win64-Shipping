// 函数: sub_1417bb5f0
// 地址: 0x1417bb5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*arg2)
float zmm7[0x4] = arg1[0x19].d
int64_t r10 = rsi * 3
int128_t zmm8 = *(arg1 + 0xc4)
float zmm9[0x4] = arg1[0x18].d
int64_t r9 = *arg1[1]
int64_t r11 = *(*arg1 + 0x38)
int64_t rdx = sx.q(*(r9 + (r10 << 2))) * 3
int64_t rax_3 = sx.q(*(r9 + (r10 << 2) + 4))
zmm7[0] = zmm7[0] f* *(r11 + (rdx << 2) + 8)
zmm9[0] = zmm9[0] f* *(r11 + (rdx << 2))
int64_t rcx = rax_3 * 3
int64_t rax_4 = sx.q(*(r9 + (r10 << 2) + 8))
int128_t zmm6
zmm6.d = zmm8.d f* *(r11 + (rdx << 2) + 4)
void* rdx_1 = arg1[8]
zmm9[0] = zmm9[0] f* *(r11 + (rcx << 2))
int64_t zmm4
zmm4.d = zmm8.q.d f* *(r11 + (rcx << 2) + 4)
float var_100 = zmm7[0]
zmm7[0] = zmm7[0] f* *(r11 + (rcx << 2) + 8)
int64_t rcx_1 = rax_4 * 3
zmm9[0] = zmm9[0] f* *(r11 + (rcx_1 << 2))
int64_t zmm2
zmm2.d = zmm8.q.d f* *(r11 + (rcx_1 << 2) + 4)
float var_114 = zmm7[0]
zmm7[0] = zmm7[0] f* *(r11 + (rcx_1 << 2) + 8)
float var_f0 = var_100
float var_e4 = var_114
float var_d8 = zmm7[0]
int64_t var_ec = (_mm_unpacklo_ps(zmm9, zmm4)).q
int64_t var_e0 = (_mm_unpacklo_ps(zmm9, zmm2)).q
int64_t var_f8 = (_mm_unpacklo_ps(zmm9, zmm6.q)).q
zmm8.d = zmm8.d f* *(rdx_1 + 0x2c)
zmm9[0] = zmm9[0] f* *(rdx_1 + 0x28)
zmm7[0] = zmm7[0] f* *(rdx_1 + 0x30)
void* rdx_2 = *(rdx_1 + 0x10)
int32_t var_124 = zmm8.d
float var_128 = zmm9[0]
float var_120_1 = zmm7[0]
void** var_a8
sub_141703820(&var_a8, rdx_2, &var_128, zx.o(0)[0])
float zmm1_1 = *(arg3 + 0x14) f* *(arg1 + 0x64)
int64_t var_11c = 0x3f800000
int32_t var_130 = 0
int64_t* var_138 = &var_11c
int32_t var_114_1 = 0
void var_d0
void var_c0
int32_t arg_8

if (sub_141670460(&var_f8, &var_a8, &arg1[0xe], &arg1[0xb], zmm1_1, &arg_8, &var_d0, &var_c0, 
        (arg1[0xa].d).b, *(arg1 + 0x54)) == 0)
    rsi.b = 1
else
    int32_t zmm6_1 = arg_8
    
    if (zmm6_1 f>= arg1[0x14].d)
        rsi.b = 1
    else
        uint128_t zmm3_1 = *(arg1 + 0x64)
        int32_t var_100_1 = arg1[0x19].d
        int64_t var_108 = arg1[0x18]
        float zmm6_2
        float zmm7_1
        float zmm8_1
        zmm6_2, zmm7_1, zmm8_1 = sub_1417b6bd0(&var_108, &var_c0, &var_d0, zmm3_1, zmm6_1, 
            &arg1[0x16], arg1 + 0xa4, &arg1[0x14])
        *(arg1 + 0xbc) = rsi.d
        
        if (zmm6_2 > zmm8_1)
            *(arg3 + 0x14) = zmm6_2
            *(arg3 + 0x18) = zmm7_1 / zmm6_2
            rsi.b = 1
        else
            *(arg3 + 0x14) = 0
            rsi.b = 0

var_a8 = &data_142fc4f68
int64_t* var_88

if (var_88 != 0)
    var_88[1].d -= 1
    
    if (var_88[1].d == 1)
        (**var_88)(var_88)
        int32_t rdi_1 = *(var_88 + 0xc)
        *(var_88 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_3 = *var_88
            (*(r8_3 + 8))(var_88, zx.q(rdi_1), r8_3)

sub_141706890(&var_a8)
return zx.q(rsi.b)
