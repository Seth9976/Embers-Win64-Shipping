// 函数: sub_141f2cc60
// 地址: 0x141f2cc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
int64_t rbx = *sub_140b58260(&arg_8, u"NewReflectionComponent", 1)
void* rax_1 = sub_142484ab0()
sub_140d19090(arg2, rbx)
sub_140d17260(&arg2[4], rbx, rax_1)
sub_141f2d180(arg1)
void* rdi_1 = arg1[0x44]
*arg1 = &data_14324ba78
*(rdi_1 + 0x134) = _mm_unpacklo_ps(0x447a0000, 0x447a0000)
int32_t var_30 = 0x43c80000
*(rdi_1 + 0x13c) = 0x43c80000
arg1[0x26] = rdi_1
void arg_10
uint64_t rbx_1 = *sub_140b58260(&arg_10, u"DrawBox0", 1)
int64_t* rax_3 = sub_1424814a0()
void* rax_4 = sub_140cd9110(arg1, rbx_1, rax_3, rax_3, 1, 0)
void* rdx_4 = arg1[0x44]
arg_8 = 0
sub_141f4a650(rax_4, rdx_4, 0)
*(rax_4 + 0x41c) |= 1
*(rax_4 + 0x20e) |= 8
int64_t r9_2 = *rax_4
(*(r9_2 + 0x620))(rax_4, data_143f3a590, 1, r9_2)
int32_t var_30_1 = 0x3f800000
*(rax_4 + 0x420) = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
*(rax_4 + 0x428) = 0x3f800000
*(rdi_1 + 0x270) = rax_4
uint64_t rbx_3 = *sub_140b58260(&arg_10, u"DrawBox1", 1)
int64_t* rax_6 = sub_1424814a0()
void* rax_7
float zmm6[0x4]
rax_7, zmm6 = sub_140cd9110(arg1, rbx_3, rax_6, rax_6, 1, 0)
void* rdx_7 = arg1[0x44]
arg_8 = 0
sub_141f4a650(rax_7, rdx_7, 0)
*(rax_7 + 0x41c) |= 1
*(rax_7 + 0x20e) |= 8
int64_t r9_4 = *rax_7
(*(r9_4 + 0x620))(rax_7, data_143f3a590, 1, r9_4)
arg_8.d = 0xff645a28
*(rax_7 + 0x418) = arg_8.d
*(rax_7 + 0x420) = (_mm_unpacklo_ps(zmm6, zmm6[0].q)).q
int32_t var_30_2 = 0x3f800000
*(rax_7 + 0x428) = 0x3f800000
*(rdi_1 + 0x278) = rax_7
return arg1
