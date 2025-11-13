// 函数: sub_1413502c0
// 地址: 0x1413502c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rax_2 = *arg4
int32_t r10 = data_1439c7ae8
int32_t var_b4 = rax_2.d
int32_t var_b0 = rax_2:4.d
int16_t var_90 = 0
wchar16 const* const var_88 = u"UnknownTexture2D"
uint128_t var_c8 = data_1439c7ad8
int32_t var_b8 = r10
int32_t var_ac = 0
int32_t var_a8 = 1
int32_t var_a4 = 0x10000
int16_t var_a0 = 1
int64_t var_9c = 0xa
int32_t var_94 = 0x10008
int16_t var_80 = 1
char var_7e = 0
void*** result = sub_141188e50(arg1, &var_c8, u"MitchelNetravaliDownsampleOutput", 0)
int64_t* rax_4 = sub_14081d830(0xb0, arg1[1], 1, 0)
int64_t* rbx = rax_4

if (rax_4 == 0)
    rbx = nullptr
else
    *rax_4 = 0
    __builtin_memset(&rax_4[0x10], 0, 0x20)

memset(rbx, 0, 0xb0)
sub_1405d16e0(rbx, arg2[2])
uint128_t zmm1 = *arg3
uint128_t zmm0_1 = zx.o(arg3[1].q)
int64_t var_e8 = data_143dbb180
void* rcx_2 = zmm1.q
var_b8.q = zmm0_1.q
int128_t var_e0 = zx.o(0)
int32_t rax_6 = *(rcx_2 + 0x44)
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
var_e8.d = rax_6
var_e8:4.d = *(rcx_2 + 0x48)
var_e0:4.d = (temp0.q u>> 0x20).d
var_e0:8.d = var_b8
var_e0:0xc.d = (var_b8.q u>> 0x20).d
var_e0.d = _mm_bsrli_si128(zmm1, 8).d
int32_t* rax_13 = sub_141455b70(&var_c8, &var_e8)
int16_t var_f0 = 0
rbx[2] = *rax_13
rbx[3] = *(rax_13 + 8)
rbx[4] = *(rax_13 + 0x10)
rbx[5] = *(rax_13 + 0x18)
rbx[6].d = rax_13[8]
*(rbx + 0x34) = rax_13[9]
rbx[7].d = rax_13[0xa]
*(rbx + 0x3c) = rax_13[0xb]
rbx[8] = *(rax_13 + 0x30)
rbx[9] = *(rax_13 + 0x38)
rbx[0xa] = *(rax_13 + 0x40)
rbx[0xb] = *(rax_13 + 0x48)
rbx[0xc] = *(rax_13 + 0x50)
rbx[0xd] = *(rax_13 + 0x58)
rbx[0xe] = *(rax_13 + 0x60)
rbx[0xf] = *(rax_13 + 0x68)
rbx[0x11] = *arg3
rbx[0x13] = data_14395f4d0
void*** rax_18 = sub_14081d830(0x28, arg1[1], 1, 0)

if (rax_18 == 0)
    rax_18 = nullptr
else
    rax_18[1] = result[1]
    *rax_18 = &data_142f285c0
    rax_18[2] = 0
    *(rax_18 + 0x18) = result.o

rbx[0x10] = rax_18
void*** rax_19
int512_t zmm6
rax_19, zmm6 = sub_14141f4d0(arg1, arg2)
rbx[0x12] = rax_19
uint128_t zmm3
zmm3.d = _mm_cvtepi32_ps(zx.o(arg3[1].d - *(arg3 + 8))).d
    f/ _mm_cvtepi32_ps(zx.o((arg4[2].d - arg4[1].d) * *(*arg3 + 0x44))).d
rbx[0x14].d = zmm3.d
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x14) - *(arg3 + 0xc))).d
    f/ _mm_cvtepi32_ps(zx.o((*(arg4 + 0x14) - *(arg4 + 0xc)) * *(*arg3 + 0x48))).d
*(rbx + 0xa4) = zmm2.d
uint128_t zmm0_4
zmm0_4.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 8))).d f+ 0.5f
zmm0_4.d = zmm0_4.d f* zmm3.d
rbx[0x15].d = zmm0_4.d
zmm0_4.d = _mm_cvtepi32_ps(zx.o(*(arg3 + 0xc))).d f+ 0.5f
zmm0_4.d = zmm0_4.d f* zmm2.d
*(rbx + 0xac) = zmm0_4.d
char rcx_15 = sub_1419a2ec0(arg2[0xa2a], &var_c8, &data_143eba890, 0)
zmm6.o = zx.o(0)
uint128_t zmm7 = var_c8
int32_t temp0_8
int32_t temp1
temp0_8:temp1 = sx.q(arg4[2].d - arg4[1].d + 7)
void*** var_f8_1
var_f8_1.d = (temp1 + (temp0_8 & 7)) s>> 3
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg4 + 0x14) - *(arg4 + 0xc) + 7)
var_f8_1:4.d = (temp3 + (temp2 & 7)) s>> 3
var_e8.o = sub_1413591a0(rcx_15)
sub_141998c50(zmm7.q, &data_143ebe510, rbx)
int64_t* rdx_12 = arg1[1]
var_c8.q = rbx
var_c8 = zmm7
int32_t var_a8_1 = 1
var_b0.q = var_f8_1
void*** rax_38
char rcx_17
rax_38, rcx_17 = sub_14081d830(0x60, rdx_12, 1, 0)
void*** rdi_1 = rax_38

if (rax_38 == 0)
    rdi_1 = nullptr
else
    sub_1413591a0(rcx_17)
    var_f0.q = &data_143ebe540
    var_e8.o = rbx.o
    void var_108
    sub_141992bd0(rdi_1, &var_108, &var_e8, 2)
    uint128_t zmm0_7 = var_c8
    *rdi_1 = &data_142f64c60
    *(rdi_1 + 0x38) = zmm0_7
    *(rdi_1 + 0x48) = var_b8.o
    rdi_1[0xb] = var_a8_1.q

sub_1419968d0(arg1, rdi_1)
__security_check_cookie(rax_1 ^ &var_128)
return result
