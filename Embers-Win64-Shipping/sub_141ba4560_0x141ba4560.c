// 函数: sub_141ba4560
// 地址: 0x141ba4560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

void var_158
int64_t rax_2 = __security_cookie ^ &var_158
*(arg1 + 0x2c) += 1
int128_t zmm0 = data_14399f5e0
float var_b8 = 0f
int16_t var_b4_1 = 0
int64_t var_b0_1 = 0
int128_t var_a8_1 = zmm0
void var_108
void arg_30
sub_140d93a40(&var_108, arg4, arg5, &arg_30, &var_b8)
int128_t* rax_4 = *arg1
int32_t zmm3 = arg3:4.d
int32_t rbx_1 = *(arg1 + 0x2c)
void* rdi_2 = arg1[2]
float zmm2[0x4] = *(rax_4 + 0x1c)
int128_t zmm1_1 = rax_4[2].d
float zmm8[0x4] = zmm2
int128_t zmm11 = *(rax_4 + 8)
float zmm5_1[0x4] = *(rax_4 + 0x24)
float zmm4_1[0x4] = *(rax_4 + 0x28)
zmm8[0] = zmm8[0] f* arg3.d
int128_t zmm7
zmm7.d = zmm1_1.d f* arg3.d
int128_t zmm10
zmm10.d = zmm11.d f* arg3.d
zmm5_1[0] = zmm5_1[0] f* zmm3
zmm10.d = zmm10.d f+ *(rax_4 + 0xc)
int128_t zmm9
zmm9.d = zmm11.d f* zmm3
zmm8[0] = zmm8[0] + zmm5_1[0]
zmm4_1[0] = zmm4_1[0] f* zmm3
zmm9.d = zmm9.d f+ rax_4[1].d
zmm8[0] = zmm8[0] f+ *(rax_4 + 0x2c)
zmm7.d = zmm7.d f+ zmm4_1[0]
zmm7.d = zmm7.d f+ rax_4[3].d
var_b8 = zmm2[0]
var_b4_1.d = zmm1_1.d
var_b0_1.d = zmm5_1[0]
var_b0_1:4.d = zmm4_1[0]
zmm2 = var_b8.o
char rdx_1 = *(rax_4 + 0x34) & 1
var_b0_1 = 0
var_b8 = zmm10.d
var_b4_1.d = zmm9.d
var_b0_1.d = zmm11.d
var_a8_1:4.d = (*rax_4).d
var_a8_1:8.d = (*(rax_4 + 4))[0]
int64_t var_8c_1 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
char var_84
char var_84_1 = (rdx_1 * 2) | (var_84 & 0xfc)
var_a8_1 = zmm2
sub_140db3fd0(rdi_2, rbx_1, &var_b8, sub_140ac6680(arg2), &var_108, 0, arg6)
int64_t* var_d0

if (var_d0 != 0)
    var_d0[1].d -= 1
    
    if (var_d0[1].d == 1)
        (**var_d0)(var_d0)
        int32_t temp1_1 = *(var_d0 + 0xc)
        *(var_d0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_d0 + 8))(var_d0, 1)

__security_check_cookie(rax_2 ^ &var_158)
