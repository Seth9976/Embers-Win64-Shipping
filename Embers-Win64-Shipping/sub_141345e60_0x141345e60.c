// 函数: sub_141345e60
// 地址: 0x141345e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg1
*arg1 = data_143dbb180
*(result + 8) = 0
*(result + 0x10) = 0
*(result + 0x18) = data_143dbb180
*(result + 0x20) = 0
*(result + 0x28) = 0
*(result + 0x30) = data_143dbb180
*(result + 0x38) = 0
*(result + 0x40) = 0
*result = *arg2
result[1] = arg2[1]
result[2] = arg2[2]
result[3] = arg2[3]
result[4] = arg2[4]
result[5] = arg2[5]
result[6] = *arg3
result[7] = arg3[1]
result[8] = arg3[2]
result[9] = arg3[3]
result[0xa] = arg3[4]
result[0xb] = arg3[5]
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(result[0xa] - result[8] + 0xf)
int32_t r8_1 = ((temp0 & 0xf) + temp1) s>> 4
int64_t rcx_2 = data_143dbb180
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(result[0xb] - result[9] + 0xf)
result[0xc] = r8_1
int32_t arg_c = (temp3 + (temp2 & 0xf)) s>> 4
uint32_t rdx_5 = (r8_1.q u>> 0x20).d
result[0xd] = rdx_5
result[0xe] = rcx_2.d
result[0xf] = (rcx_2 u>> 0x20).d
result[0x11] = rdx_5
result[0x10] = r8_1
int32_t var_78[0x1c]
int32_t* rax_23 = sub_141455b70(&var_78, result)
*(result + 0x50) = *rax_23
*(result + 0x58) = *(rax_23 + 8)
*(result + 0x60) = *(rax_23 + 0x10)
*(result + 0x68) = *(rax_23 + 0x18)
result[0x1c] = rax_23[8]
result[0x1d] = rax_23[9]
result[0x1e] = rax_23[0xa]
result[0x1f] = rax_23[0xb]
*(result + 0x80) = *(rax_23 + 0x30)
*(result + 0x88) = *(rax_23 + 0x38)
*(result + 0x90) = *(rax_23 + 0x40)
*(result + 0x98) = *(rax_23 + 0x48)
*(result + 0xa0) = *(rax_23 + 0x50)
*(result + 0xa8) = *(rax_23 + 0x58)
*(result + 0xb0) = *(rax_23 + 0x60)
*(result + 0xb8) = *(rax_23 + 0x68)
int32_t* rax_26 = sub_141455b70(&var_78, &result[6])
*(result + 0xc0) = *rax_26
*(result + 0xc8) = *(rax_26 + 8)
*(result + 0xd0) = *(rax_26 + 0x10)
*(result + 0xd8) = *(rax_26 + 0x18)
result[0x38] = rax_26[8]
result[0x39] = rax_26[9]
result[0x3a] = rax_26[0xa]
result[0x3b] = rax_26[0xb]
*(result + 0xf0) = *(rax_26 + 0x30)
*(result + 0xf8) = *(rax_26 + 0x38)
*(result + 0x100) = *(rax_26 + 0x40)
*(result + 0x108) = *(rax_26 + 0x48)
*(result + 0x110) = *(rax_26 + 0x50)
*(result + 0x118) = *(rax_26 + 0x58)
*(result + 0x120) = *(rax_26 + 0x60)
*(result + 0x128) = *(rax_26 + 0x68)
int32_t* rax_29 = sub_141455b70(&var_78, &result[0xc])
*(result + 0x130) = *rax_29
*(result + 0x138) = *(rax_29 + 8)
*(result + 0x140) = *(rax_29 + 0x10)
*(result + 0x148) = *(rax_29 + 0x18)
result[0x54] = rax_29[8]
result[0x55] = rax_29[9]
result[0x56] = rax_29[0xa]
result[0x57] = rax_29[0xb]
*(result + 0x160) = *(rax_29 + 0x30)
*(result + 0x168) = *(rax_29 + 0x38)
*(result + 0x170) = *(rax_29 + 0x40)
*(result + 0x178) = *(rax_29 + 0x48)
*(result + 0x180) = *(rax_29 + 0x50)
*(result + 0x188) = *(rax_29 + 0x58)
*(result + 0x190) = *(rax_29 + 0x60)
*(result + 0x198) = *(rax_29 + 0x68)
float zmm5[0x4] = result[0x44]
zmm5[0] = zmm5[0] f/ result[0x28]
int64_t zmm1_2
zmm1_2.d = result[0x45].d f/ result[0x29]
float zmm2 = result[0x25]
int64_t zmm0_2
zmm0_2.d = zmm5[0].q.d f* result[0x24]
float zmm3 = result[0x40]
float zmm4 = result[0x41]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
zmm5[0] = zmm1_2.d
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc6)
zmm5[0] = zmm3 f- zmm0_2.d
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x27)
zmm5[0] = zmm4 - zmm2 f* zmm1_2.d
*(result + 0x1a0) = _mm_shuffle_ps(zmm5, zmm5, 0x39)
zmm5 = result[0x60]
zmm5[0] = zmm5[0] f/ result[0x28]
zmm1_2.d = result[0x61].d f/ result[0x29]
zmm2 = result[0x25]
zmm3 = result[0x5c]
zmm4 = result[0x5d]
zmm0_2.d = result[0x24].d f* zmm5[0]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
zmm5[0] = zmm1_2.d
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc6)
zmm5[0] = zmm3 f- zmm0_2.d
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x27)
zmm5[0] = zmm4 - zmm2 f* zmm1_2.d
*(result + 0x1b0) = _mm_shuffle_ps(zmm5, zmm5, 0x39)
return result
