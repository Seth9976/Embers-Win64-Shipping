// 函数: sub_1411d15d0
// 地址: 0x1411d15d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t var_38 = arg5
int32_t rdi = arg_18:4.d
int32_t var_d8 = 2
int32_t rbx = arg3.d
int32_t var_98 = 1
wchar16 const* const var_78 = u"UnknownTexture"
int32_t var_d0 = 0
float zmm1[0x4] = var_d8.o
int16_t var_70 = 1
int16_t var_90 = 1
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
temp0[0] = 0
int32_t var_94 = 0x10000
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xe1)
var_d8.o = temp0_1
int16_t var_80 = 0
float var_b8[0x4] = temp0_1
char var_6e = 0
int32_t var_a4 = rbx
arg_18.d = rdi
int32_t var_a0 = rdi
int32_t var_9c = 0
int64_t var_8c = 0x1c
int32_t var_84 = 0x10008
void*** result = sub_141188e50(arg1, &var_b8, u"HairLightChannelMask", 0)
int32_t r15

if (sub_1419767d0() == 0)
    r15 = sbb.d(arg5.d, arg5.d, sub_1419767f0() != 0) + 2
else
    r15 = 0

int32_t* rax_3 = sub_14081d830(0x20, *(arg1 + 8), 1, 0)
__builtin_memset(&rax_3[2], 0, 0x18)
rax_3[1] = rdi
int32_t rdi_1 = 4
*rax_3 = rbx
int64_t var_e0 = 1

if ((*(arg4 + 0x38) & 0x100) != 0)
    var_e0.d = 4
    var_e0:4.d = 0x1c

void*** rax_4 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_4 != 0)
    rax_4[1] = *(arg4 + 8)
    *rax_4 = &data_142f285c0
    rax_4[2] = 0
    *(rax_4 + 0x18) = arg4.o

*(rax_3 + 8) = rax_4
*(rax_3 + 0x10) = arg6
var_e0.w = 0
void*** rax_6
int32_t rcx_2
int512_t zmm6
rax_6, rcx_2, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_6 != 0)
    rax_6[1] = result[1]
    rcx_2 = 0x42f285c0
    *rax_6 = &data_142f285c0
    rax_6[2] = 0
    *(rax_6 + 0x18) = result.o

*(rax_3 + 0x18) = rax_6
int32_t rcx_4

if (sub_1419767d0() == 0)
    rcx_4 = sbb.d(rcx_2, rcx_2, sub_1419767f0() != 0) + 2
else
    rcx_4 = 0

if (rcx_4 == 0 || rcx_4 != 1)
    rdi_1 = 8

int128_t var_68
char rcx_9 = sub_1419a2ec0(*(arg2 + 0x5150), &var_68, &data_143e77820, r15)
int128_t zmm7 = var_68
int32_t temp5
int32_t temp6
temp5:temp6 = sx.q(rbx + 7)
zmm6.o = zx.o(0)
void*** var_e8_1
var_e8_1.d = (temp6 + (temp5 & 7)) s>> 3
var_e8_1:4.d = divs.dp.d(sx.q(arg_18.d - 1 + rdi_1), rdi_1)
var_d8.o = sub_1411e25a0(rcx_9)
sub_141998c50(zmm7.q, &data_143e7c350, rax_3)
int64_t* rdx_9 = *(arg1 + 8)
var_b8[0].q = rax_3
var_b8 = zmm7
int32_t var_98_1 = 1
var_a0.q = var_e8_1
void*** rax_18
char rcx_11
rax_18, rcx_11 = sub_14081d830(0x60, rdx_9, 1, 0)
void*** rbx_1 = rax_18

if (rax_18 == 0)
    rbx_1 = nullptr
else
    sub_1411e25a0(rcx_11)
    void* var_e0_1 = &data_143e7c380
    var_d8.o = rax_3.o
    sub_141992bd0(rbx_1, &arg_18, &var_d8, 2)
    float zmm0_5[0x4] = var_b8
    *rbx_1 = &data_142f38a38
    *(rbx_1 + 0x38) = zmm0_5
    int32_t var_c8
    *(rbx_1 + 0x48) = var_c8.o
    rbx_1[0xb] = var_98_1.q

sub_1419968d0(arg1, rbx_1)
return result
