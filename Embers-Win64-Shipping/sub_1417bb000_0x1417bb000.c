// 函数: sub_1417bb000
// 地址: 0x1417bb000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*arg2)
uint128_t zmm7 = arg1[0x19].d
int64_t r10 = rsi * 3
int128_t zmm8 = *(arg1 + 0xc4)
uint128_t zmm9 = arg1[0x18].d
int64_t r9 = *arg1[1]
int64_t r11 = *(*arg1 + 0x38)
int64_t rdx = sx.q(*(r9 + (r10 << 2))) * 3
uint128_t zmm0
zmm0.d = zmm7.d f* *(r11 + (rdx << 2) + 8)
uint128_t zmm1
zmm1.d = zmm9.d f* *(r11 + (rdx << 2))
int64_t rcx = sx.q(*(r9 + (r10 << 2) + 4)) * 3
int128_t zmm6
zmm6.d = zmm8.d f* *(r11 + (rdx << 2) + 4)
void* rdx_1 = arg1[8]
uint128_t zmm5
zmm5.d = zmm9.d f* *(r11 + (rcx << 2))
int64_t zmm4
zmm4.d = zmm8.q.d f* *(r11 + (rcx << 2) + 4)
int32_t var_100 = zmm0.d
zmm0.d = zmm7.d f* *(r11 + (rcx << 2) + 8)
int64_t rcx_1 = sx.q(*(r9 + (r10 << 2) + 8)) * 3
uint128_t zmm3
zmm3.d = zmm9.d f* *(r11 + (rcx_1 << 2))
int64_t zmm2
zmm2.d = zmm8.q.d f* *(r11 + (rcx_1 << 2) + 4)
int32_t var_114 = zmm0.d
zmm0.d = zmm7.d f* *(r11 + (rcx_1 << 2) + 8)
int32_t var_f0 = var_100
int32_t var_e4 = var_114
int32_t var_d8 = zmm0.d
uint64_t var_ec = (_mm_unpacklo_ps(zmm5, zmm4)).q
uint64_t var_e0 = (_mm_unpacklo_ps(zmm3, zmm2)).q
uint64_t var_f8 = (_mm_unpacklo_ps(zmm1, zmm6.q)).q
zmm8.d = zmm8.d f* *(rdx_1 + 0x2c)
zmm9.d = zmm9.d f* *(rdx_1 + 0x28)
zmm7.d = zmm7.d f* *(rdx_1 + 0x30)
void* rdx_2 = *(rdx_1 + 0x10)
int32_t var_124 = zmm8.d
int32_t var_128 = zmm9.d
int32_t var_120_1 = zmm7.d
void** var_a8
sub_141703630(&var_a8, rdx_2, &var_128, zx.o(0))
float zmm1_1 = *(arg3 + 0x14) f* *(arg1 + 0x64)
int64_t var_11c = 0x3f800000
int32_t var_130 = 0
int64_t* var_138 = &var_11c
int32_t var_114_1 = 0
void var_d0
void var_c0
int32_t arg_8

if (sub_14166f450(&var_f8, &var_a8, &arg1[0xe], &arg1[0xb], zmm1_1, &arg_8, &var_d0, &var_c0, 
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

var_a8 = &data_142fc4df8
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
