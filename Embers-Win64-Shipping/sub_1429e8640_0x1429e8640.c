// 函数: sub_1429e8640
// 地址: 0x1429e8640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_108[0x4]
int64_t rax_1 = __security_cookie ^ &var_108
int128_t* rax_2 = *(arg1 + 0x20)
int16_t* r10 = *arg2
char r9 = 0
int16_t zmm13[0x8] = *rax_2
int16_t zmm14[0x8] = rax_2[1]
int128_t* rax_3 = *(arg1 + 8)
int16_t zmm3[0x8] = *rax_3
int16_t zmm5[0x8] = rax_3[1]
int32_t rax_4 = sx.d(*(arg1 + 0x40))
int16_t temp0[0x8] = _mm_srai_epi16(zmm3, 0xf)
int16_t temp0_1[0x8] = _mm_srai_epi16(zmm5, 0xf)
int128_t* rax_5 = *(arg1 + 0x28)
int16_t zmm2[0x8] = _mm_sub_epi16(temp0 ^ zmm3, temp0)
zmm3 = _mm_sub_epi16(temp0_1 ^ zmm5, temp0_1)
int16_t zmm6[0x8] = *rax_5
int16_t zmm7[0x8] = rax_5[1]
int128_t* rax_6 = *(arg1 + 0x38)
int16_t zmm9[0x8] = rax_6[1]
int16_t temp0_4[0x8] = _mm_add_epi16(zmm2, *rax_6)
int128_t* rax_7 = *(arg1 + 0x10)
int16_t zmm10[0x8] = *rax_7
int16_t zmm12[0x8] = rax_7[1]
int128_t* rax_8 = arg2[3]
int32_t zmm15[0x4] = *rax_8
var_108 = rax_8[1]
int32_t zmm1[0x4] = _mm_shufflelo_epi16(zx.o(rax_4), 0)
int32_t temp0_6[0x4] = _mm_unpacklo_epi16(zmm1, zmm1[0].q)
int16_t temp0_7[0x8] = _mm_add_epi16(zmm3, zmm9)
__builtin_memset(r10, 0, 0x20)
int16_t temp0_8[0x8] = _mm_add_epi16(zmm6, temp0_6)
uint128_t var_e8 = _mm_sub_epi16(zmm3, _mm_add_epi16(zmm7, temp0_6))
zmm5 = _mm_sub_epi16(zmm2, temp0_8)
void* rdx = *(arg1 + 0x30)
zmm1 = _mm_mulhi_epi16(temp0_4, zmm10)
uint128_t zmm0 = _mm_mulhi_epi16(temp0_7, zmm12)
bool cond:0 = zmm5[0] s< *rdx
zmm1 = _mm_add_epi16(zmm1, temp0_4)
zmm0 = _mm_add_epi16(zmm0, temp0_7)
zmm1 = _mm_mulhi_epi16(zmm1, zmm13)
int32_t rcx
rcx.b = cond:0
zmm0 = _mm_mulhi_epi16(zmm0, zmm14)
int32_t temp0_18[0x4] = _mm_sub_epi16(zmm1 ^ temp0, temp0)
int16_t rdi = temp0_18[0].w
zmm0 = _mm_sub_epi16(zmm0 ^ temp0_1, temp0_1)
int32_t rax_10
rax_10.b = rdi == 0
int16_t* rdx_1 = rdx + 2

if ((rcx | rax_10) == 0)
    *r10 = rdi
    r9 = 1
    rdx_1 = *(arg1 + 0x30)

int16_t rdi_1 = temp0_18[0]:2.w
int32_t rcx_2
rcx_2.b = zmm5[1] s< *rdx_1
int32_t rax_12
rax_12.b = rdi_1 == 0
void* rdx_2 = &rdx_1[1]

if ((rcx_2 | rax_12) == 0)
    r10[1] = rdi_1
    r9 = 2
    rdx_2 = *(arg1 + 0x30)

int16_t rdi_2 = temp0_18[2].w
int32_t rcx_4
rcx_4.b = zmm5[4] s< *rdx_2
int32_t rax_14
rax_14.b = rdi_2 == 0
void* rdx_3 = rdx_2 + 2

if ((rcx_4 | rax_14) == 0)
    r10[4] = rdi_2
    r9 = 3
    rdx_3 = *(arg1 + 0x30)

int16_t rdi_3 = zmm0.w
int32_t rcx_6
rcx_6.b = var_e8.w s< *rdx_3
int32_t rax_16
rax_16.b = rdi_3 == 0
void* rdx_4 = rdx_3 + 2

if ((rcx_6 | rax_16) == 0)
    r10[8] = rdi_3
    r9 = 4
    rdx_4 = *(arg1 + 0x30)

int16_t rdi_4 = temp0_18[2]:2.w
int32_t rcx_8
rcx_8.b = zmm5[5] s< *rdx_4
int32_t rax_18
rax_18.b = rdi_4 == 0
void* rdx_5 = rdx_4 + 2

if ((rcx_8 | rax_18) == 0)
    r10[5] = rdi_4
    r9 = 5
    rdx_5 = *(arg1 + 0x30)

int16_t rdi_5 = temp0_18[1].w
int32_t rcx_10
rcx_10.b = zmm5[2] s< *rdx_5
int32_t rax_20
rax_20.b = rdi_5 == 0
void* rdx_6 = rdx_5 + 2

if ((rcx_10 | rax_20) == 0)
    r10[2] = rdi_5
    r9 = 6
    rdx_6 = *(arg1 + 0x30)

int16_t rdi_6 = temp0_18[1]:2.w
int32_t rcx_12
rcx_12.b = zmm5[3] s< *rdx_6
int32_t rax_22
rax_22.b = rdi_6 == 0
void* rdx_7 = rdx_6 + 2

if ((rcx_12 | rax_22) == 0)
    r10[3] = rdi_6
    r9 = 7
    rdx_7 = *(arg1 + 0x30)

int16_t rdi_7 = temp0_18[3].w
int32_t rcx_14
rcx_14.b = zmm5[6] s< *rdx_7
int32_t rax_24
rax_24.b = rdi_7 == 0
void* rdx_8 = rdx_7 + 2

if ((rcx_14 | rax_24) == 0)
    r10[6] = rdi_7
    r9 = 8
    rdx_8 = *(arg1 + 0x30)

int16_t rdi_8 = zmm0:2.w
int32_t rcx_16
rcx_16.b = var_e8:2.w s< *rdx_8
int32_t rax_26
rax_26.b = rdi_8 == 0
void* rdx_9 = rdx_8 + 2

if ((rcx_16 | rax_26) == 0)
    r10[9] = rdi_8
    r9 = 9
    rdx_9 = *(arg1 + 0x30)

int16_t rdi_9 = zmm0:8.w
int32_t rcx_18
rcx_18.b = var_e8:8.w s< *rdx_9
int32_t rax_28
rax_28.b = rdi_9 == 0
void* rdx_10 = rdx_9 + 2

if ((rcx_18 | rax_28) == 0)
    r10[0xc] = rdi_9
    r9 = 0xa
    rdx_10 = *(arg1 + 0x30)

int16_t rdi_10 = zmm0:0xa.w
int32_t rcx_20
rcx_20.b = var_e8:0xa.w s< *rdx_10
int32_t rax_30
rax_30.b = rdi_10 == 0
void* rdx_11 = rdx_10 + 2

if ((rcx_20 | rax_30) == 0)
    r10[0xd] = rdi_10
    r9 = 0xb
    rdx_11 = *(arg1 + 0x30)

int16_t rdi_11 = zmm0:4.w
int32_t rcx_22
rcx_22.b = var_e8:4.w s< *rdx_11
int32_t rax_32
rax_32.b = rdi_11 == 0
void* rdx_12 = rdx_11 + 2

if ((rcx_22 | rax_32) == 0)
    r10[0xa] = rdi_11
    r9 = 0xc
    rdx_12 = *(arg1 + 0x30)

int16_t rdi_12 = temp0_18[3]:2.w
int32_t rcx_24
rcx_24.b = zmm5[7] s< *rdx_12
int32_t rax_34
rax_34.b = rdi_12 == 0
void* rdx_13 = rdx_12 + 2

if ((rcx_24 | rax_34) == 0)
    r10[7] = rdi_12
    r9 = 0xd
    rdx_13 = *(arg1 + 0x30)

int16_t rdi_13 = zmm0:6.w
int32_t rcx_26
rcx_26.b = var_e8:6.w s< *rdx_13
int32_t rax_36
rax_36.b = rdi_13 == 0
void* rdx_14 = rdx_13 + 2

if ((rcx_26 | rax_36) == 0)
    r10[0xb] = rdi_13
    r9 = 0xe
    rdx_14 = *(arg1 + 0x30)

int16_t rdi_14 = zmm0:0xc.w
int32_t rcx_28
rcx_28.b = var_e8:0xc.w s< *rdx_14
int32_t rax_38
rax_38.b = rdi_14 == 0
void* rdx_15 = rdx_14 + 2

if ((rcx_28 | rax_38) == 0)
    r10[0xe] = rdi_14
    r9 = 0xf
    rdx_15 = *(arg1 + 0x30)

int16_t rax_40 = zmm0:0xe.w
int32_t rcx_30
rcx_30.b = var_e8:0xe.w s< *rdx_15
int32_t r8
r8.b = rax_40 == 0

if ((rcx_30 | r8) == 0)
    r10[0xf] = rax_40
    r9 = 0x10

uint128_t* rax_41 = *arg2
zmm0 = *rax_41
uint128_t* rax_42 = arg2[1]
int32_t temp0_20[0x4] = __pmullw_xmmdq_memdq(rax_41[1], var_108)
*rax_42 = _mm_mullo_epi16(zmm0, zmm15)
*(arg2[1] + 0x10) = temp0_20
char* result = arg2[5]
*result = r9
__security_check_cookie(rax_1 ^ &var_108)
return result
