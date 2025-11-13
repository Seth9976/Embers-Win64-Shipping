// 函数: sub_141ba4f10
// 地址: 0x141ba4f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_94
char var_94_1 = var_94 & 0xfe
float zmm7[0x4] = arg7
int128_t zmm8 = arg5
float zmm0 = 1f f/ zmm8.d
int64_t var_f4 = 0
int64_t var_9c = 0
int64_t var_bc = 0
int64_t var_b4 = 0
int64_t var_e8 = 0
int64_t var_dc = 0
float var_f8[0x4]
float zmm1[0x4] = var_f8
zmm7[0] = zmm7[0] * zmm0
zmm1[0] = zmm8.d
int128_t zmm6
zmm6.d = arg6.d f* zmm0
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
temp0[0] = zmm8.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0x39)
var_f8 = temp0_1
zmm7[0] = zmm7[0] f* zmm8.d
float var_e0 = zmm6.d f* zmm8.d
float var_d4 = zmm7[0]
uint128_t var_90
int32_t zmm6_1
int32_t zmm7_1
int32_t zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_140dbe170(&var_e8, &var_90)
var_f8[0].q = *arg4
void* rax_1 = arg4[1]
var_e8.o = var_90
float var_c8[0x4]
var_c8[0] = zmm6_1
float temp0_2[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xe1)
var_f4 = rax_1
temp0_2[0] = zmm7_1
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_3[0] = zmm8_1
float var_78[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
uint128_t var_68 = var_bc:4.o
float var_58[0x4] = temp0_1
uint64_t var_48 = var_9c

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t result = sub_141ba50e0(arg1, arg2, arg3, &var_f8, &var_78, &var_e8, arg8.d, arg9)
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
