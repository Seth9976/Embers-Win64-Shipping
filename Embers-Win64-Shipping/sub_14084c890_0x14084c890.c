// 函数: sub_14084c890
// 地址: 0x14084c890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *(arg1 + 0x1f8)
int128_t zmm2 = *(arg1 + 0x1ec) ^ data_142d3f780
void* rdx = arg1 + 0xb0
void* r11 = *(rdx + 0x100)
int32_t rdi_1 = *(arg1 + 0xa0) & 1
int32_t r8 = data_14396fef8
int128_t var_e8_1
__builtin_memcpy(&var_e8_1, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x
        00", 
    0x30)
int32_t r9 = *(arg1 + 0x200)
float var_7c = (*(arg4 + 0x34))[0]
int128_t var_98
__builtin_memcpy(&var_98, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00", 
    0x18)
float zmm0[0x4] = zx.o(0)
int64_t var_f4 = 0
int32_t var_ec = 0
int32_t var_80 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int128_t zmm1 = *(arg1 + 0x1f0) ^ data_142d3f780
int32_t var_78 = zmm2.d
zmm0[0] = float.s(zx.q(r9 u>> 1) & 1)
int32_t var_f8 = rdi_1
int32_t var_74 = zmm1.d
zmm1 = *(arg1 + 0x1fc)
void* rcx = rdx
float var_9c = zmm0[0]

if (r11 != 0)
    rcx = r11

zmm0 = 0x3f800000
zmm0[0] = 1f / zmm3[0]
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm1.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm0[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
zmm2.d = 1f f/ zmm1.d
temp0_2[0] = zmm2.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float var_108[0x4] = temp0_3
float var_b8[0x4] = temp0_3
int32_t rax_3

if (r8 == 0)
    rax_3 = *rcx
else
    rax_3 = *(rcx + 4)

int32_t var_70 = rax_3
int32_t rax_4

if (r8 == 0)
    rax_4 = *(rcx + 0x20)
else
    rax_4 = *(rcx + 0x24)

int32_t var_6c = rax_4
int32_t rax_5

if (r8 == 0)
    rax_5 = *(rcx + 0x30)
else
    rax_5 = *(rcx + 0x34)

int32_t var_68 = rax_5
int32_t rax_6

if (r8 == 0)
    rax_6 = *(rcx + 0x40)
else
    rax_6 = *(rcx + 0x44)

int32_t var_64 = rax_6
int32_t rax_7

if (r8 == 0)
    rax_7 = *(rcx + 0x10)
else
    rax_7 = *(rcx + 0x14)

int32_t var_5c = rax_7
int32_t rax_8

if (r8 == 0)
    rax_8 = *(rcx + 0x80)
else
    rax_8 = *(rcx + 0x84)

int32_t var_54 = rax_8
int32_t rax_9

if (r8 == 0)
    rax_9 = *(rcx + 0x90)
else
    rax_9 = *(rcx + 0x94)

int32_t var_50 = rax_9
int32_t rax_10

if (r8 == 0)
    rax_10 = *(rcx + 0xa0)
else
    rax_10 = *(rcx + 0xa4)

int32_t var_4c = rax_10
int32_t rax_11

if (r8 == 0)
    rax_11 = *(rcx + 0xb0)
else
    rax_11 = *(rcx + 0xb4)

int32_t var_48 = rax_11

if (r11 != 0)
    rdx = r11

int32_t rax_12

if (r8 == 0)
    rax_12 = *(rdx + 0x70)
else
    rax_12 = *(rdx + 0x74)

int32_t var_60 = rax_12
int32_t rax_13

if (r8 == 0)
    rax_13 = *(rdx + 0x50)
else
    rax_13 = *(rdx + 0x54)

int32_t var_44 = rax_13
int32_t rax_14

if (r8 == 0)
    rax_14 = *(rdx + 0x60)
else
    rax_14 = *(rdx + 0x64)

int32_t var_40 = rax_14
int32_t rax_15

if (r8 == 0)
    rax_15 = *(rdx + 0xc0)
else
    rax_15 = *(rdx + 0xc4)

int32_t var_38 = rax_15
int32_t rax_16

if (r8 == 0)
    rax_16 = *(rdx + 0xd0)
else
    rax_16 = *(rdx + 0xd4)

int32_t var_34 = rax_16
int32_t rax_17

if (r8 == 0)
    rax_17 = *(rdx + 0x100)
else
    rax_17 = *(rdx + 0x104)

int32_t var_30 = rax_17
int32_t rax_18

if (r8 == 0)
    rax_18 = *(rdx + 0xe0)
else
    rax_18 = *(rdx + 0xe4)

int32_t var_2c = rax_18
int32_t var_3c = r9 & 1
int32_t var_58 = *(arg1 + 0x264)
float (* rax_20)[0x4]

if (rdi_1 == 0)
    var_108[3] = 0x3f800000
    zmm1 = *(arg5 + 0xb4)
    zmm2 = *(arg5 + 0xb8)
    rax_20 = &var_108
    var_108[0] = (*(arg5 + 0xb0))[0]
    var_108[1] = zmm1.d
    var_108[2] = zmm2.d
else
    float var_18[0x4]
    rax_20 = &var_18
    var_18 = data_142d3f660

zmm0 = *rax_20
char rdx_1 = *(arg1 + 0x1e9)
char rcx_1 = *(arg1 + 0x1e8)
float var_28[0x4] = zmm0

if (*(arg1 + 0x258) == 0xffffffff)
    char rax_22 = rdx_1
    
    if (rdx_1 == 2)
        rax_22 = 0
    
    rdx_1 = rax_22

if (*(arg1 + 0x25c) == 0xffffffff)
    char rax_23 = rcx_1
    
    if (rcx_1 == 2)
        rax_23 = 0
    
    rcx_1 = rax_23

if (rdx_1 == 4)
    zmm1 = *(arg1 + 0x204)
    zmm0 = *(arg1 + 0x208)
    zmm1.d = zmm1.d f* zmm1.d
    var_a8.d = 0x3f800000
    zmm0[0] = zmm0[0] * zmm0[0]
    zmm0[0] = zmm0[0] f- zmm1.d
    zmm0 = _mm_max_ss(zmm0[0], 0x3f800000)
    float zmm4 = 1f / zmm0[0]
    var_a8:4.d = zmm4
    float var_a0_1 = zmm4 f* zmm1.d

if (rcx_1 == 1)
    zmm0 = data_142d4cc20
    float var_e8_2[0x4] = zmm0
    int64_t var_88
    var_88.d = 0

void* arg_8
(*(*data_143f0f180 + 0xf8))(zmm0, &arg_8, &var_f8, &data_143ce90d0, 1, 1)
void* rax_25 = arg_8
*arg2 = rax_25

if (rax_25 != 0)
    *(rax_25 + 8) += 1

sub_1405d1550(&arg_8)
return arg2
