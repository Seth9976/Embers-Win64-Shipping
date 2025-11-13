// 函数: sub_14298ff70
// 地址: 0x14298ff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
int128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9
int128_t zmm10
int128_t var_58 = zmm10
int128_t zmm11
int128_t var_68 = zmm11
float arg_10 = cosf(0.78539753f) * 0.5f
int128_t zmm12
zmm12.d = cosf(0.196349382f).d f* 0.5f
float arg_20 = cosf(0x3ec90fd0.d) * 0.5f
int128_t zmm13
zmm13.d = cosf(0.589048147f).d f* 0.5f
int128_t zmm14
zmm14.d = cosf(0x3f7b53c4.d).d f* 0.5f
float arg_18 = cosf(0x3f96cbdc.d) * 0.5f
void* rax = arg1 + 8
int128_t zmm15
zmm15.d = cosf(1.37444568f).d f* 0.5f
int64_t i_2 = 3
int128_t zmm0_7
int128_t zmm1
int128_t zmm2
int128_t zmm3
int128_t zmm4_1
int128_t zmm5_1
int128_t zmm6
int64_t i

do
    zmm2 = *(rax + 4)
    zmm10 = *(rax - 4)
    zmm3 = *(rax + 0xc)
    zmm4_1 = *(rax + 0x14)
    zmm9 = *rax
    zmm5_1 = *(rax - 8)
    zmm7 = *(rax + 0x10)
    zmm0_7.d = zmm10.d f* zmm12.d
    zmm1.d = zmm3.d f* zmm14.d
    zmm11.d = zmm2.d f* zmm13.d
    zmm8.d = zmm10.d f* zmm13.d
    zmm11.d = zmm11.d f+ zmm0_7.d
    zmm6.d = zmm10.d f* zmm14.d
    zmm10.d = zmm10.d f* zmm15.d
    zmm0_7.d = zmm4_1.d f* zmm15.d
    zmm11.d = zmm11.d f+ zmm1.d
    zmm1.d = zmm3.d f* zmm12.d
    zmm11.d = zmm11.d f+ zmm0_7.d
    zmm0_7.d = zmm2.d f* zmm15.d
    zmm8.d = zmm8.d f- zmm0_7.d
    zmm0_7.d = zmm4_1.d f* zmm14.d
    zmm8.d = zmm8.d f- zmm1.d
    zmm1.d = zmm3.d f* zmm15.d
    zmm3.d = zmm3.d f* zmm13.d
    zmm8.d = zmm8.d f- zmm0_7.d
    zmm0_7.d = zmm2.d f* zmm12.d
    zmm2.d = zmm2.d f* zmm14.d
    zmm6.d = zmm6.d f- zmm0_7.d
    zmm0_7.d = zmm4_1.d f* zmm13.d
    zmm4_1.d = zmm4_1.d f* zmm12.d
    zmm10.d = zmm10.d f- zmm2.d
    zmm6.d = zmm6.d f+ zmm1.d
    zmm1.d = zmm7.d f* arg_18
    zmm7.d = zmm7.d f* arg_20
    zmm10.d = zmm10.d f+ zmm3.d
    zmm6.d = zmm6.d f+ zmm0_7.d
    zmm0_7.d = zmm9.d f* arg_20
    zmm9.d = zmm9.d f* arg_18
    zmm10.d = zmm10.d f- zmm4_1.d
    zmm1.d = zmm1.d f+ zmm0_7.d
    zmm4_1 = zmm5_1
    zmm5_1.d = zmm5_1.d f- *(rax + 8)
    zmm4_1.d = zmm4_1.d f+ *(rax + 8)
    zmm9.d = zmm9.d f- zmm7.d
    zmm5_1.d = zmm5_1.d f* arg_10
    zmm4_1.d = zmm4_1.d f* arg_10
    zmm2.d = zmm9.d f+ zmm5_1.d
    zmm5_1.d = zmm5_1.d f- zmm9.d
    zmm3.d = zmm1.d f+ zmm4_1.d
    zmm4_1.d = zmm4_1.d f- zmm1.d
    zmm1.d = zmm8.d f+ zmm2.d
    zmm0_7.d = zmm11.d f+ zmm3.d
    *(rax - 4) = zmm1.d
    zmm1.d = zmm10.d f+ zmm4_1.d
    *(rax - 8) = zmm0_7.d
    zmm4_1.d = zmm4_1.d f- zmm10.d
    zmm0_7.d = zmm6.d f+ zmm5_1.d
    zmm5_1.d = zmm5_1.d f- zmm6.d
    *(rax + 4) = zmm1.d
    *(rax + 8) = zmm4_1.d
    *rax = zmm0_7.d
    zmm2.d = zmm2.d f- zmm8.d
    *(rax + 0xc) = zmm5_1.d
    zmm3.d = zmm3.d f- zmm11.d
    *(rax + 0x10) = zmm2.d
    *(rax + 0x14) = zmm3.d
    rax += 0x20
    i = i_2
    i_2 -= 1
while (i != 1)
void* result = arg1 + 0x40
int64_t i_3 = 4
int64_t i_1

do
    zmm2 = *(result + 0x20)
    zmm10 = *(result - 0x20)
    zmm3 = *(result + 0x60)
    zmm4_1 = *(result + 0xa0)
    zmm9 = *result
    zmm5_1 = *(result - 0x40)
    zmm7 = *(result + 0x80)
    zmm0_7.d = zmm10.d f* zmm12.d
    zmm1.d = zmm3.d f* zmm14.d
    zmm8.d = zmm10.d f* zmm13.d
    zmm11.d = zmm2.d f* zmm13.d
    zmm6.d = zmm10.d f* zmm14.d
    zmm11.d = zmm11.d f+ zmm0_7.d
    zmm10.d = zmm10.d f* zmm15.d
    zmm0_7.d = zmm4_1.d f* zmm15.d
    zmm11.d = zmm11.d f+ zmm1.d
    zmm1.d = zmm3.d f* zmm12.d
    zmm11.d = zmm11.d f+ zmm0_7.d
    zmm0_7.d = zmm2.d f* zmm15.d
    zmm8.d = zmm8.d f- zmm0_7.d
    zmm0_7.d = zmm4_1.d f* zmm14.d
    zmm8.d = zmm8.d f- zmm1.d
    zmm1.d = zmm3.d f* zmm15.d
    zmm3.d = zmm3.d f* zmm13.d
    zmm8.d = zmm8.d f- zmm0_7.d
    zmm0_7.d = zmm2.d f* zmm12.d
    zmm2.d = zmm2.d f* zmm14.d
    zmm6.d = zmm6.d f- zmm0_7.d
    zmm0_7.d = zmm4_1.d f* zmm13.d
    zmm4_1.d = zmm4_1.d f* zmm12.d
    zmm10.d = zmm10.d f- zmm2.d
    zmm6.d = zmm6.d f+ zmm1.d
    zmm1.d = zmm7.d f* arg_18
    zmm7.d = zmm7.d f* arg_20
    zmm10.d = zmm10.d f+ zmm3.d
    zmm6.d = zmm6.d f+ zmm0_7.d
    zmm0_7.d = zmm9.d f* arg_20
    zmm9.d = zmm9.d f* arg_18
    zmm10.d = zmm10.d f- zmm4_1.d
    zmm1.d = zmm1.d f+ zmm0_7.d
    zmm4_1.d = zmm5_1.d f+ *(result + 0x40)
    zmm5_1.d = zmm5_1.d f- *(result + 0x40)
    zmm9.d = zmm9.d f- zmm7.d
    zmm4_1.d = zmm4_1.d f* arg_10
    zmm5_1.d = zmm5_1.d f* arg_10
    zmm3.d = zmm1.d f+ zmm4_1.d
    zmm4_1.d = zmm4_1.d f- zmm1.d
    zmm2.d = zmm9.d f+ zmm5_1.d
    zmm5_1.d = zmm5_1.d f- zmm9.d
    zmm0_7.d = zmm3.d f+ zmm11.d
    zmm1.d = zmm8.d f+ zmm2.d
    *(result - 0x40) = zmm0_7.d
    *(result - 0x20) = zmm1.d
    zmm0_7.d = zmm6.d f+ zmm5_1.d
    zmm5_1.d = zmm5_1.d f- zmm6.d
    zmm1.d = zmm10.d f+ zmm4_1.d
    zmm4_1.d = zmm4_1.d f- zmm10.d
    *result = zmm0_7.d
    *(result + 0x20) = zmm1.d
    *(result + 0x40) = zmm4_1.d
    zmm10 = *(result - 0x1c)
    zmm2.d = zmm2.d f- zmm8.d
    zmm4_1 = *(result + 0xa4)
    zmm3.d = zmm3.d f- zmm11.d
    zmm9 = *(result + 4)
    zmm7 = *(result + 0x84)
    zmm0_7.d = zmm10.d f* zmm12.d
    *(result + 0x80) = zmm2.d
    zmm2 = *(result + 0x24)
    *(result + 0xa0) = zmm3.d
    zmm3 = *(result + 0x64)
    zmm11.d = zmm2.d f* zmm13.d
    zmm1.d = zmm3.d f* zmm14.d
    zmm11.d = zmm11.d f+ zmm0_7.d
    zmm8.d = zmm10.d f* zmm13.d
    zmm6.d = zmm10.d f* zmm14.d
    zmm0_7.d = zmm4_1.d f* zmm15.d
    zmm11.d = zmm11.d f+ zmm1.d
    *(result + 0x60) = zmm5_1.d
    zmm5_1 = *(result - 0x3c)
    zmm1.d = zmm3.d f* zmm12.d
    zmm10.d = zmm10.d f* zmm15.d
    zmm11.d = zmm11.d f+ zmm0_7.d
    zmm0_7.d = zmm2.d f* zmm15.d
    zmm8.d = zmm8.d f- zmm0_7.d
    zmm0_7.d = zmm4_1.d f* zmm14.d
    zmm8.d = zmm8.d f- zmm1.d
    zmm1.d = zmm3.d f* zmm15.d
    zmm3.d = zmm3.d f* zmm13.d
    zmm8.d = zmm8.d f- zmm0_7.d
    zmm0_7.d = zmm2.d f* zmm12.d
    zmm2.d = zmm2.d f* zmm14.d
    zmm6.d = zmm6.d f- zmm0_7.d
    zmm0_7.d = zmm4_1.d f* zmm13.d
    zmm4_1.d = zmm4_1.d f* zmm12.d
    zmm10.d = zmm10.d f- zmm2.d
    zmm6.d = zmm6.d f+ zmm1.d
    zmm1.d = zmm7.d f* arg_18
    zmm7.d = zmm7.d f* arg_20
    zmm10.d = zmm10.d f+ zmm3.d
    zmm6.d = zmm6.d f+ zmm0_7.d
    zmm0_7 = *(result + 0x44)
    zmm10.d = zmm10.d f- zmm4_1.d
    zmm4_1.d = zmm0_7.d f+ zmm5_1.d
    zmm5_1.d = zmm5_1.d f- zmm0_7.d
    zmm0_7.d = zmm9.d f* arg_20
    zmm9.d = zmm9.d f* arg_18
    zmm4_1.d = zmm4_1.d f* arg_10
    zmm1.d = zmm1.d f+ zmm0_7.d
    zmm5_1.d = zmm5_1.d f* arg_10
    zmm9.d = zmm9.d f- zmm7.d
    zmm3.d = zmm4_1.d f+ zmm1.d
    zmm4_1.d = zmm4_1.d f- zmm1.d
    zmm2.d = zmm5_1.d f+ zmm9.d
    zmm5_1.d = zmm5_1.d f- zmm9.d
    zmm0_7.d = zmm11.d f+ zmm3.d
    zmm1.d = zmm8.d f+ zmm2.d
    *(result - 0x3c) = zmm0_7.d
    zmm0_7.d = zmm6.d f+ zmm5_1.d
    *(result - 0x1c) = zmm1.d
    *(result + 4) = zmm0_7.d
    zmm5_1.d = zmm5_1.d f- zmm6.d
    zmm1.d = zmm10.d f+ zmm4_1.d
    zmm4_1.d = zmm4_1.d f- zmm10.d
    zmm2.d = zmm2.d f- zmm8.d
    zmm3.d = zmm3.d f- zmm11.d
    *(result + 0x64) = zmm5_1.d
    *(result + 0x24) = zmm1.d
    *(result + 0x44) = zmm4_1.d
    *(result + 0x84) = zmm2.d
    *(result + 0xa4) = zmm3.d
    result += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return result
