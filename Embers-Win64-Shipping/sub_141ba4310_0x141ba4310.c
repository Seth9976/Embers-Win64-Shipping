// 函数: sub_141ba4310
// 地址: 0x141ba4310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
int128_t var_48 = zmm7
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
*(arg1 + 0x2c) += 1
int64_t* rbx = data_143e243c8
void var_c8
int64_t r8 = *sub_140b58170(&var_c8, "NormalText", 1)
int64_t var_c0 = r8
int64_t var_130 = r8
void* rax_4 = (*(*rbx + 0x88))(rbx, data_143e243e0)
void* rcx_2 = rax_4

if (rax_4 == 0)
    rcx_2 = sub_140e13900()

int64_t var_118 = *(rcx_2 + 8)
int64_t var_110 = *(rcx_2 + 0x10)
float var_108[0x4] = *(rcx_2 + 0x18)
int128_t var_f8 = *(rcx_2 + 0x28)
int64_t var_e8 = *(rcx_2 + 0x38)
int64_t* rax_9 = *(rcx_2 + 0x40)

if (rax_9 != 0)
    rax_9[1].d += 1

float zmm5[0x4] = arg3:4.d
float zmm10[0x4] = arg3.d
int64_t var_d8 = *(rcx_2 + 0x48)
int32_t var_d0 = *(rcx_2 + 0x50)
void* rcx_3 = arg1[2]
char var_cc = *(rcx_2 + 0x54)
int128_t* rax_13 = *arg1
char var_150 = 0
int128_t zmm2 = *(rax_13 + 0x1c)
int128_t zmm1 = rax_13[2].d
zmm9 = *(rax_13 + 8)
int32_t zmm4 = *(rax_13 + 0x24)
int32_t zmm3 = *(rax_13 + 0x28)
char rdx_1 = *(rax_13 + 0x34)
zmm10[0] = zmm10[0] f* zmm2.d
zmm5[0] = zmm5[0] f* zmm4
zmm8.d = zmm9.d f* zmm10[0]
zmm10[0] = zmm10[0] + zmm5[0]
zmm10[0] = zmm10[0] f* zmm1.d
zmm8.d = zmm8.d f+ *(rax_13 + 0xc)
zmm7.d = zmm9.d f* zmm5[0]
zmm10[0] = zmm10[0] f+ *(rax_13 + 0x2c)
var_130:4.d = zmm1.d
zmm7.d = zmm7.d f+ rax_13[1].d
zmm5[0] = zmm5[0] f* zmm3
var_130.d = zmm2.d
int32_t var_128 = zmm4
zmm10[0] = zmm10[0] + zmm5[0]
int32_t var_124 = zmm3
zmm10[0] = zmm10[0] f+ rax_13[3].d
int32_t var_b8 = zmm8.d
int32_t var_b4 = zmm7.d
int32_t var_b0 = zmm9.d
int64_t var_ac = 0
int32_t var_a4 = (*rax_13).d
float var_a0 = (*(rax_13 + 4))[0]
char var_84
char var_84_1 = ((rdx_1 & 1) * 2) | (var_84 & 0xfc)
int32_t rdx_2 = *(arg1 + 0x2c)
int128_t var_9c = var_130.o
int64_t* var_158 = &var_118
int64_t var_8c = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
int64_t result = sub_140db3fd0(rcx_3, rdx_2, &var_b8, arg2, var_158, var_150, arg4)

if (rax_9 != 0)
    rax_9[1].d -= 1
    
    if (rax_9[1].d == 1)
        result = (**rax_9)(rax_9)
        int32_t temp1_1 = *(rax_9 + 0xc)
        *(rax_9 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rax_9 + 8))(rax_9, 1)

__security_check_cookie(rax_1 ^ &var_178)
return result
