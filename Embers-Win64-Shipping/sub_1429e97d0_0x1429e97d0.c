// 函数: sub_1429e97d0
// 地址: 0x1429e97d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *(arg1 + 8)
char r9 = 0
int16_t* r10 = *(arg1 + 0x30)
int16_t zmm1[0x8] = *rax
int32_t zmm3[0x4] = rax[1]
int16_t* r8 = &r10[1]
int128_t* rax_1 = arg2[3]
int32_t zmm9[0x4] = zx.o(0)
int16_t temp0[0x8] = _mm_srai_epi16(zmm1, 0xf)
int32_t zmm8[0x4] = zx.o(0)
int16_t temp0_1[0x8] = _mm_srai_epi16(zmm3, 0xf)
int32_t zmm11[0x4] = *rax_1
int16_t zmm4[0x8] = _mm_sub_epi16(temp0 ^ zmm1, temp0)
int32_t zmm12[0x4] = rax_1[1]
int32_t rax_2 = sx.d(*(arg1 + 0x40))
int32_t temp0_3[0x4] = _mm_sub_epi16(temp0_1 ^ zmm3, temp0_1)
uint128_t* rax_3 = *(arg1 + 0x28)
uint16_t temp0_4[0x8] = _mm_shufflelo_epi16(zx.o(rax_2), 0)
uint16_t zmm5[0x8] = _mm_unpacklo_epi16(temp0_4, temp0_4[0].q)
int16_t zmm10[0x8] = _mm_sub_epi16(zmm4, _mm_add_epi16(*rax_3, zmm5))
uint128_t* rax_4 = *(arg1 + 0x38)
int32_t temp0_9[0x4] = _mm_sub_epi16(temp0_3, _mm_add_epi16(rax_3[1], zmm5))
zmm1 = rax_4[1]
uint128_t zmm0 = _mm_add_epi16(*rax_4, zmm4)
int32_t (* rax_5)[0x4] = *(arg1 + 0x10)
int16_t temp0_11[0x8] = _mm_add_epi16(zmm1, temp0_3)
int16_t (* rcx)[0x8] = *(arg1 + 0x20)
int32_t zmm2[0x4] = _mm_add_epi16(_mm_mulhi_epi16(*rax_5, zmm0), zmm0)
zmm0 = rax_5[1]
zmm2 = __pmulhw_xmmdq_memdq(zmm2, *rcx)
zmm0 = _mm_mulhi_epi16(zmm0, temp0_11)
bool cond:0 = _mm_extract_epi16(zmm10, 0) s< *r10
zmm0 = __pmulhw_xmmdq_memdq(_mm_add_epi16(zmm0, temp0_11), rcx[1])
int32_t temp0_19[0x4] = _mm_sub_epi16(zmm2 ^ temp0, temp0)
int32_t rcx_1
rcx_1.b = cond:0
int16_t temp0_20 = _mm_extract_epi16(temp0_19, 0)
zmm0 = _mm_sub_epi16(zmm0 ^ temp0_1, temp0_1)
int32_t rax_7
rax_7.b = temp0_20 == 0

if ((rcx_1 | rax_7) == 0)
    r9 = 1
    r8 = r10
    zmm9 = _mm_insert_epi16(zx.o(0), sx.d(temp0_20), 0)

int16_t temp0_23 = _mm_extract_epi16(zmm10, 1)
int16_t temp0_24 = _mm_extract_epi16(temp0_19, 1)
int32_t rcx_3
rcx_3.b = temp0_23 s< *r8
int32_t rax_10
rax_10.b = temp0_24 == 0
int16_t* r8_1 = &r8[1]

if ((rcx_3 | rax_10) == 0)
    r9 = 2
    r8_1 = r10
    zmm9 = _mm_insert_epi16(zmm9, sx.d(temp0_24), 1)

int16_t temp0_26 = _mm_extract_epi16(zmm10, 4)
int16_t temp0_27 = _mm_extract_epi16(temp0_19, 4)
int32_t rcx_5
rcx_5.b = temp0_26 s< *r8_1
int32_t rax_13
rax_13.b = temp0_27 == 0
int16_t* r8_2 = &r8_1[1]

if ((rcx_5 | rax_13) == 0)
    r9 = 3
    r8_2 = r10
    zmm9 = _mm_insert_epi16(zmm9, sx.d(temp0_27), 4)

int16_t temp0_29 = _mm_extract_epi16(temp0_9, 0)
int16_t temp0_30 = _mm_extract_epi16(zmm0, 0)
int32_t rcx_7
rcx_7.b = temp0_29 s< *r8_2
int32_t rax_16
rax_16.b = temp0_30 == 0
int16_t* r8_3 = &r8_2[1]

if ((rcx_7 | rax_16) == 0)
    r9 = 4
    r8_3 = r10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_30), 0)

int16_t temp0_32 = _mm_extract_epi16(zmm10, 5)
int16_t temp0_33 = _mm_extract_epi16(temp0_19, 5)
int32_t rcx_9
rcx_9.b = temp0_32 s< *r8_3
int32_t rax_19
rax_19.b = temp0_33 == 0
int16_t* r8_4 = &r8_3[1]

if ((rcx_9 | rax_19) == 0)
    r9 = 5
    r8_4 = r10
    zmm9 = _mm_insert_epi16(zmm9, sx.d(temp0_33), 5)

int16_t temp0_35 = _mm_extract_epi16(zmm10, 2)
int16_t temp0_36 = _mm_extract_epi16(temp0_19, 2)
int32_t rcx_11
rcx_11.b = temp0_35 s< *r8_4
int32_t rax_22
rax_22.b = temp0_36 == 0
int16_t* r8_5 = &r8_4[1]

if ((rcx_11 | rax_22) == 0)
    r9 = 6
    r8_5 = r10
    zmm9 = _mm_insert_epi16(zmm9, sx.d(temp0_36), 2)

int16_t temp0_38 = _mm_extract_epi16(zmm10, 3)
int16_t temp0_39 = _mm_extract_epi16(temp0_19, 3)
int32_t rcx_13
rcx_13.b = temp0_38 s< *r8_5
int32_t rax_25
rax_25.b = temp0_39 == 0
int16_t* r8_6 = &r8_5[1]

if ((rcx_13 | rax_25) == 0)
    r9 = 7
    r8_6 = r10
    zmm9 = _mm_insert_epi16(zmm9, sx.d(temp0_39), 3)

int16_t temp0_41 = _mm_extract_epi16(zmm10, 6)
int16_t temp0_42 = _mm_extract_epi16(temp0_19, 6)
int32_t rcx_15
rcx_15.b = temp0_41 s< *r8_6
int32_t rax_28
rax_28.b = temp0_42 == 0
int16_t* r8_7 = &r8_6[1]

if ((rcx_15 | rax_28) == 0)
    r9 = 8
    r8_7 = r10
    zmm9 = _mm_insert_epi16(zmm9, sx.d(temp0_42), 6)

int16_t temp0_44 = _mm_extract_epi16(temp0_9, 1)
int16_t temp0_45 = _mm_extract_epi16(zmm0, 1)
int32_t rcx_17
rcx_17.b = temp0_44 s< *r8_7
int32_t rax_31
rax_31.b = temp0_45 == 0
int16_t* r8_8 = &r8_7[1]

if ((rcx_17 | rax_31) == 0)
    r9 = 9
    r8_8 = r10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_45), 1)

int16_t temp0_47 = _mm_extract_epi16(temp0_9, 4)
int16_t temp0_48 = _mm_extract_epi16(zmm0, 4)
int32_t rcx_19
rcx_19.b = temp0_47 s< *r8_8
int32_t rax_34
rax_34.b = temp0_48 == 0
int16_t* r8_9 = &r8_8[1]

if ((rcx_19 | rax_34) == 0)
    r9 = 0xa
    r8_9 = r10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_48), 4)

int16_t temp0_50 = _mm_extract_epi16(temp0_9, 5)
int16_t temp0_51 = _mm_extract_epi16(zmm0, 5)
int32_t rcx_21
rcx_21.b = temp0_50 s< *r8_9
int32_t rax_37
rax_37.b = temp0_51 == 0
int16_t* r8_10 = &r8_9[1]

if ((rcx_21 | rax_37) == 0)
    r9 = 0xb
    r8_10 = r10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_51), 5)

int16_t temp0_53 = _mm_extract_epi16(temp0_9, 2)
int16_t temp0_54 = _mm_extract_epi16(zmm0, 2)
int32_t rcx_23
rcx_23.b = temp0_53 s< *r8_10
int32_t rax_40
rax_40.b = temp0_54 == 0
int16_t* r8_11 = &r8_10[1]

if ((rcx_23 | rax_40) == 0)
    r9 = 0xc
    r8_11 = r10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_54), 2)

int16_t temp0_56 = _mm_extract_epi16(zmm10, 7)
int16_t temp0_57 = _mm_extract_epi16(temp0_19, 7)
int32_t rcx_25
rcx_25.b = temp0_56 s< *r8_11
int32_t rax_43
rax_43.b = temp0_57 == 0
int16_t* r8_12 = &r8_11[1]

if ((rcx_25 | rax_43) == 0)
    r9 = 0xd
    r8_12 = r10
    zmm9 = _mm_insert_epi16(zmm9, sx.d(temp0_57), 7)

int16_t temp0_59 = _mm_extract_epi16(temp0_9, 3)
int16_t temp0_60 = _mm_extract_epi16(zmm0, 3)
int32_t rcx_27
rcx_27.b = temp0_59 s< *r8_12
int32_t rax_46
rax_46.b = temp0_60 == 0
int16_t* r8_13 = &r8_12[1]

if ((rcx_27 | rax_46) == 0)
    r9 = 0xe
    r8_13 = r10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_60), 3)

int16_t temp0_62 = _mm_extract_epi16(temp0_9, 6)
int16_t temp0_63 = _mm_extract_epi16(zmm0, 6)
int32_t rcx_29
rcx_29.b = temp0_62 s< *r8_13
int32_t rax_49
rax_49.b = temp0_63 == 0
int16_t* r8_14 = &r8_13[1]

if ((rcx_29 | rax_49) == 0)
    r9 = 0xf
    r8_14 = r10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_63), 6)

int16_t temp0_65 = _mm_extract_epi16(temp0_9, 7)
int16_t temp0_66 = _mm_extract_epi16(zmm0, 7)
int32_t rcx_31
rcx_31.b = temp0_65 s< *r8_14
int32_t rdx
rdx.b = temp0_66 == 0

if ((rcx_31 | rdx) == 0)
    r9 = 0x10
    zmm8 = _mm_insert_epi16(zmm8, sx.d(temp0_66), 7)

**arg2 = zmm9
void* rax_54 = *arg2
int32_t temp0_68[0x4] = _mm_mullo_epi16(zmm9, zmm11)
*(rax_54 + 0x10) = zmm8
int32_t (* rax_55)[0x4] = arg2[1]
int32_t temp0_69[0x4] = _mm_mullo_epi16(zmm8, zmm12)
*rax_55 = temp0_68
*(arg2[1] + 0x10) = temp0_69
char* result = arg2[5]
*result = r9
return result
