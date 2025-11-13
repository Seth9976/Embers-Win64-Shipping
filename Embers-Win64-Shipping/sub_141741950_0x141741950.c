// 函数: sub_141741950
// 地址: 0x141741950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg1[2]
float var_48 = zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float var_40 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
float var_44 = temp0[0]
int32_t rax = sub_140b212b0(&var_48, 0xc, 0)
float var_18[0x4] = *arg1
void var_30
int32_t rax_2 = sub_140b212b0(sub_140ad3d90(&var_18, &var_30), 0xc, 0)
float zmm1_1[0x4] = arg1[1]
float var_3c = zmm1_1[0]
int32_t r9_2 = (rax_2 - rax) ^ rax u>> 0xd
float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
float var_38 = temp0_2[0]
float var_34 = temp0_3[0]
int32_t r8_2 = (0x9e3779b9 - r9_2 - rax) ^ r9_2 << 8
int32_t rsi_3 = (rax - r8_2 - r9_2) ^ r8_2 u>> 0xd
int32_t r9_5 = (r9_2 - r8_2 - rsi_3) ^ rsi_3 u>> 0xc
int32_t r8_5 = (r8_2 - r9_5 - rsi_3) ^ r9_5 << 0x10
int32_t rsi_6 = (rsi_3 - r8_5 - r9_5) ^ r8_5 u>> 5
int32_t r9_8 = (r9_5 - r8_5 - rsi_6) ^ rsi_6 u>> 3
int32_t r8_8 = (r8_5 - r9_8 - rsi_6) ^ r9_8 << 0xa
int32_t rsi_9 = (rsi_6 - r8_8 - r9_8) ^ r8_8 u>> 0xf
int32_t rdx_3 = (sub_140b212b0(&var_3c, 0xc, 0) - rsi_9) ^ rsi_9 u>> 0xd
int32_t rdi_2 = (0x9e3779b9 - rdx_3 - rsi_9) ^ rdx_3 << 8
int32_t rsi_12 = (rsi_9 - rdi_2 - rdx_3) ^ rdi_2 u>> 0xd
int32_t rdx_6 = (rdx_3 - rdi_2 - rsi_12) ^ rsi_12 u>> 0xc
int32_t rdi_5 = (rdi_2 - rdx_6 - rsi_12) ^ rdx_6 << 0x10
int32_t rsi_15 = (rsi_12 - rdi_5 - rdx_6) ^ rdi_5 u>> 5
int32_t rdx_9 = (rdx_6 - rdi_5 - rsi_15) ^ rsi_15 u>> 3
int32_t rdi_8 = (rdi_5 - rdx_9 - rsi_15) ^ rdx_9 << 0xa
return zx.q(rsi_15 - rdi_8 - rdx_9) ^ zx.q(rdi_8 u>> 0xf)
