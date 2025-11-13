// 函数: sub_1414190a0
// 地址: 0x1414190a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ed454c s> *(rbx + 0x14))
    _Init_thread_header(&data_143ed454c)
    
    if (data_143ed454c == 0xffffffff)
        data_143ed4540 = 0x3f800000
        data_143ed4548 = 0
        _Init_thread_footer(&data_143ed454c)

if (data_143ed455c s> *(rbx + 0x14))
    _Init_thread_header(&data_143ed455c)
    
    if (data_143ed455c == 0xffffffff)
        data_143ed4550 = 0
        data_143ed4554 = 0x3f800000
        _Init_thread_footer(&data_143ed455c)

if (data_143ed456c s> *(rbx + 0x14))
    _Init_thread_header(&data_143ed456c)
    
    if (data_143ed456c == 0xffffffff)
        data_143ed4560 = 0
        data_143ed4568 = 0x3f800000
        _Init_thread_footer(&data_143ed456c)

float zmm13[0x4] = data_143ed4554:4.d
float zmm11[0x4] = data_143ed4550
float zmm6[0x4] = zmm13
float zmm12[0x4] = data_143ed4554.d
float zmm14[0x4] = zmm11
float arg_10 = zmm6[0]
float zmm15[0x4] = zmm12

if (rdi.d u> 5)
    int32_t var_f0
    zmm13 = var_f0
    int32_t var_f4
    zmm12 = var_f4
    int32_t var_f8
    zmm11 = var_f8
else
    switch (rdi)
        case 0
            zmm11 = data_143ed4540.d
            zmm12 = data_143ed4540:4.d
            zmm13 = data_143ed4548
        case 1
            zmm11 = data_143ed4540.d ^ 0x80000000
            zmm12 = data_143ed4540:4.d ^ 0x80000000
            zmm13 = data_143ed4548 ^ 0x80000000
        case 2
            zmm6 = data_143ed4568 ^ 0x80000000
            zmm14 = data_143ed4560.d ^ 0x80000000
            arg_10 = zmm6[0]
            zmm15 = data_143ed4560:4.d ^ 0x80000000
        case 3
            zmm6 = data_143ed4568
            zmm11 ^= 0x80000000
            zmm14 = data_143ed4560.d
            zmm12 ^= 0x80000000
            zmm15 = data_143ed4560:4.d
            zmm13 ^= 0x80000000
            arg_10 = zmm6[0]
        case 4
            zmm11 = data_143ed4560.d
            zmm12 = data_143ed4560:4.d
            zmm13 = data_143ed4568
        case 5
            zmm11 = data_143ed4560.d ^ 0x80000000
            zmm12 = data_143ed4560:4.d ^ 0x80000000
            zmm13 = data_143ed4568 ^ 0x80000000

int32_t zmm4 = data_143dbb1fc
int32_t zmm2 = data_143dbb1f8
int32_t zmm3 = data_143dbb200
zmm6[0] = zmm6[0] * zmm12[0]
int32_t var_dc = 0
zmm13[0] = zmm13[0] * zmm15[0]
int32_t var_cc = 0
zmm6[0] = zmm6[0] * zmm11[0]
int32_t var_bc = 0
zmm13[0] = zmm13[0] - zmm6[0]
zmm14[0] = zmm14[0] * zmm12[0]
int32_t var_ac = 0x3f800000
zmm14[0] = zmm14[0] f* zmm2
zmm13[0] = zmm13[0] * zmm14[0]
zmm6[0] = zmm6[0] - zmm13[0]
zmm15[0] = zmm15[0] * zmm11[0]
zmm14[0] = zmm14[0] - zmm15[0]
zmm6[0] = zmm6[0] f* zmm4
zmm13[0] = zmm13[0] f* zmm2
zmm14[0] = zmm14[0] f* zmm3
zmm6[0] = zmm6[0] + zmm13[0]
zmm15[0] = zmm15[0] f* zmm4
zmm6[0] = zmm6[0] + zmm14[0]
zmm6[0] = zmm6[0] f* zmm3
zmm14[0] = zmm14[0] + zmm15[0]
zmm12[0] = zmm12[0] f* zmm4
zmm14[0] = zmm14[0] + zmm6[0]
zmm11[0] = zmm11[0] f* zmm2
zmm13[0] = zmm13[0] f* zmm3
zmm11[0] = zmm11[0] + zmm12[0]
float var_e8[0x4]
var_e8[0] = zmm13[0]
float temp0[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xe1)
temp0[0] = zmm14[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
zmm11[0] = zmm11[0] + zmm13[0]
temp0_1[0] = zmm11[0]
float var_d8[0x4]
var_d8[0] = zmm6[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_3[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
temp0_3[0] = zmm15[0]
*arg1 = temp0_2
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
float var_c8[0x4]
var_c8[0] = zmm14[0]
temp0_4[0] = zmm12[0]
float temp0_5[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
arg1[1] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
temp0_5[0] = arg_10[0]
float var_b8[0x4]
var_b8[0] = zmm6[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
float temp0_8[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
temp0_7[0] = zmm13[0]
temp0_8[0] = zmm14[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_10[0] = zmm11[0]
arg1[2] = temp0_9
arg1[3] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc9)
return arg1
