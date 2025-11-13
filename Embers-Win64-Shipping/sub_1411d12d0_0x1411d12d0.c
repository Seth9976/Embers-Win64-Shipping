// 函数: sub_1411d12d0
// 地址: 0x1411d12d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
int64_t rdi = *(arg4 + 0x44)
int32_t var_e8 = 1
int128_t var_e4 = zx.o(0)
int32_t var_a8 = 1
uint128_t zmm0 = var_e8.o
int16_t var_80 = 1
int16_t var_a0 = 1
int32_t temp0 = _mm_bsrli_si128(zx.o(0), 0xc)
wchar16 const* const var_88 = u"UnknownTexture"
int32_t var_b0 = rdi:4.d
int32_t var_ac = 0
uint32_t r12_1 = (rdi u>> 0x20).d
uint32_t r14_1 = (rdi u>> 0x20).d
int32_t var_a4 = 0x10000
int16_t var_90 = 0x100
char var_7e = 0
int32_t var_b4 = rdi.d
int64_t var_9c = 0xd
int32_t var_94 = 0x10009
uint128_t var_c8 = zmm0
void*** result = sub_141188e50(arg1, &var_c8, u"HairVisibilityTexture", 0)
void*** rax_5 = sub_1410fccd0(arg1, arg3 + 0x10, u"HairCoverageLUT", 0)
int32_t* rax_6 = sub_14081d830(0x30, *(arg1 + 8), 1, 0)
int32_t* rbx_1 = rax_6

if (rax_6 == 0)
    r14_1 = (rdi u>> 0x20).d
    rbx_1 = nullptr
    r12_1 = (rdi u>> 0x20).d
else
    *(rbx_1 + 0x10) = 0
    __builtin_memset(&rbx_1[6], 0, 0x18)

__builtin_memset(rbx_1, 0, 0x30)
int16_t var_f0 = 0
rbx_1[2] = _mm_cvtepi32_ps(zx.o(*(rax_5 + 0x44))).d
rbx_1[3] = _mm_cvtepi32_ps(zx.o(rax_5[9].d)).d
rbx_1[1] = rdi:4.d
void* rax_8 = arg_20
*rbx_1 = rdi.d
*(rbx_1 + 0x20) = rax_8
*(rbx_1 + 0x18) = rax_5
*(rbx_1 + 0x10) = data_14395f4d0
void*** rax_10
int512_t zmm6
rax_10, zmm6 = sub_14081d830(0x28, *(arg1 + 8), 1, 0)

if (rax_10 == 0)
    r14_1 = r12_1
else
    rax_10[1] = result[1]
    *rax_10 = &data_142f285c0
    rax_10[2] = 0
    *(rax_10 + 0x18) = result.o

*(rbx_1 + 0x28) = rax_10
int128_t var_78
char rcx_5 = sub_1419a2ec0(*(arg2 + 0x5150), &var_78, &data_143e780c0, 0)
int128_t zmm7 = var_78
int32_t temp0_3
int32_t temp1
temp0_3:temp1 = sx.q((rdi + 7).d)
zmm6.o = zx.o(0)
void*** var_f8_1
var_f8_1.d = (temp1 + (temp0_3 & 7)) s>> 3
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r14_1 + 7)
var_f8_1:4.d = (temp3 + (temp2 & 7)) s>> 3
var_e8.o = sub_1411e1d00(rcx_5)
sub_141998c50(zmm7.q, &data_143e7dba0, rbx_1)
int64_t* rdx_9 = *(arg1 + 8)
var_c8.q = rbx_1
var_c8 = zmm7
int32_t var_a8_1 = 1
var_b0.q = var_f8_1
void*** rax_19
char rcx_7
rax_19, rcx_7 = sub_14081d830(0x60, rdx_9, 1, 0)
void*** rdi_1 = rax_19

if (rax_19 == 0)
    rdi_1 = nullptr
else
    sub_1411e1d00(rcx_7)
    var_f0.q = &data_143e7dbd0
    var_e8.o = rbx_1.o
    sub_141992bd0(rdi_1, &arg_20, &var_e8, 2)
    uint128_t zmm0_5 = var_c8
    *rdi_1 = &data_142f38a78
    *(rdi_1 + 0x38) = zmm0_5
    *(rdi_1 + 0x48) = temp0.o
    rdi_1[0xb] = var_a8_1.q

sub_1419968d0(arg1, rdi_1)
return result
