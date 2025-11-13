// 函数: sub_1429b9e40
// 地址: 0x1429b9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_198
int64_t rax_1 = __security_cookie ^ &var_198
int128_t zmm10 = data_142d3f800
int32_t var_a8[0x4]
int128_t* rax_2 = &var_a8
int16_t zmm8[0x8] = data_1435f7cf0
int128_t zmm6 = data_1435f7d10
var_198 = arg3
int64_t i_3 = 2
int32_t zmm0[0x4]
int16_t zmm4[0x8]
int64_t i

do
    int32_t zmm5[0x4] = *(arg1 - &var_a8 + rax_2)
    int16_t temp0_1[0x8] = _mm_cmpeq_epi16(zmm5 & zmm8, zmm8)
    zmm0 = temp0_1 ^ zmm10
    zmm4 = _mm_cmpeq_epi16(zmm5 & zmm6, zx.o(0)) & not.o(zmm10)
    int32_t zmm3[0x4] = zmm4
    zmm4 &= not.o(zmm0)
    zmm3 &= zmm0
    *rax_2 = (zmm4 & not.o((zmm3 & not.o((temp0_1 & not.o(*rax_2)) | (temp0_1 & zmm6)))
        | (zmm5 & not.o(zmm10) & zmm3))) | ((zmm5 | zmm6) & zmm4)
    rax_2 = &rax_2[1]
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t r13 = 0
int16_t rcx = 0
int32_t var_98[0x4]
int16_t rax_3
int16_t zmm1[0x8]

if (data_143ccb970 s< 2)
    int32_t (* rdx_2)[0x4] = &var_a8
    int64_t i_4 = 0x10
    int64_t i_1
    
    do
        rax_3 = *rdx_2
        rdx_2 += 2
        
        if (rcx u>= rax_3)
            rax_3 = rcx
        
        rcx = rax_3
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
else
    zmm1 = _mm_max_epu16(_mm_max_epu16(zx.o(0), var_a8), _mm_max_epu16(zx.o(0), var_98))
    zmm1 = _mm_max_epu16(zmm1, _mm_bsrli_si128(zmm1, 8))
    zmm1 = _mm_max_epu16(zmm1, _mm_bsrli_si128(zmm1, 4))
    rax_3 = _mm_max_epu16(zmm1, _mm_bsrli_si128(zmm1, 2))[0]

uint32_t r15 = zx.d(var_a8[0].w)
int32_t var_194 = 0xffffffff
uint32_t r14 = zx.d(rax_3)
uint16_t var_18c = r15.w
uint32_t r9_2 = (r14 - zx.d(var_a8[0]:2.w)) * 2
uint32_t rsi_2 = (r14 - zx.d(var_a8[1].w)) * 2
uint32_t var_170 = r9_2
uint32_t rcx_3 = (r14 - zx.d(var_a8[1]:2.w)) * 2
uint32_t var_16c = rsi_2
uint32_t rcx_6 = (r14 - zx.d(var_a8[2].w)) * 2
uint32_t rdx_5 = (r14 - r15) * 2
uint32_t var_174 = rdx_5
uint32_t rcx_9 = (r14 - zx.d(var_a8[2]:2.w)) * 2
uint32_t rcx_12 = (r14 - zx.d(var_a8[3].w)) * 2
uint32_t rcx_15 = (r14 - zx.d(var_a8[3]:2.w)) * 2
uint32_t rcx_18 = (r14 - zx.d(var_98[0].w)) * 2
uint32_t rcx_21 = (r14 - zx.d(var_98[0]:2.w)) * 2
uint32_t rcx_24 = (r14 - zx.d(var_98[1].w)) * 2
uint32_t rcx_27 = (r14 - zx.d(var_98[1]:2.w)) * 2
uint32_t rcx_30 = (r14 - zx.d(var_98[2].w)) * 2
uint32_t rcx_33 = (r14 - zx.d(var_98[2]:2.w)) * 2
uint32_t rcx_36 = (r14 - zx.d(var_98[3].w)) * 2
int32_t r15_1 = -1
uint32_t r14_2 = (r14 - zx.d(var_98[3]:2.w)) * 2
int32_t var_128
char var_118_1
char var_108_1
char var_104_1
char var_f8_1
char var_f4_1
int16_t var_e8_1
int32_t rax_27
int32_t rax_33
int32_t rax_39
int32_t rax_86
char rcx_45
int32_t rcx_47
int32_t rdx_11
int32_t rdx_22
int32_t rdx_27
char rdx_32
char rbx_7
int32_t rdi_1
char r8_4
char r9_7
int32_t r10_6
uint64_t i_5
char r11_7

while (true)
    r15_1 += 1
    r13 += 1
    rdi_1 = 1 << r15_1.b
    char rcx_38 = r13.b
    rdx_11 = (rcx_6 - 1 + (rcx_6 s>> rcx_38 & 1) + rdi_1) s>> rcx_38
    r10_6 = ((rdx_5 s>> rcx_38 & 1) + rdx_5 - 1 + rdi_1) s>> rcx_38
    r11_7 = (((r9_2 s>> rcx_38 & 1) - 1 + r9_2 + rdi_1) s>> rcx_38).b
    var_e8_1 = r10_6.w
    rax_27 = ((rcx_9 s>> rcx_38 & 1) + rcx_9 - 1 + rdi_1) s>> rcx_38
    rbx_7 = (((rsi_2 s>> rcx_38 & 1) - 1 + rsi_2 + rdi_1) s>> rcx_38).b
    rax_33 = ((rcx_12 s>> rcx_38 & 1) + rcx_12 - 1 + rdi_1) s>> rcx_38
    rax_39 = ((rcx_18 s>> rcx_38 & 1) + rcx_18 - 1 + rdi_1) s>> rcx_38
    rdx_22 = (rcx_21 - 1 + (rcx_21 s>> rcx_38 & 1) + rdi_1) s>> rcx_38
    rdx_27 = (rcx_24 - 1 + (rcx_24 s>> rcx_38 & 1) + rdi_1) s>> rcx_38
    var_108_1 = (rax_27 - rax_33 + 0x20).b
    rdx_32 = ((rcx_30 - 1 + (rcx_30 s>> rcx_38 & 1) + rdi_1) s>> rcx_38).b
    r8_4 = ((rcx_33 - 1 + (rcx_33 s>> rcx_38 & 1) + rdi_1) s>> rcx_38).b
    r9_7 = ((rcx_36 - 1 + (rcx_36 s>> rcx_38 & 1) + rdi_1) s>> rcx_38).b
    int32_t var_188_1 = rdx_11
    var_118_1 = (rdx_11 - rax_27 + 0x20).b
    var_128 = r10_6 - rdx_11 + 0x20
    var_104_1 = (rdx_22 - rdx_27 + 0x20).b
    rcx_45 = r13.b
    var_f8_1 = (rax_33 - (((rcx_15 s>> rcx_45 & 1) + rcx_15 - 1 + rdi_1) s>> rcx_45) + 0x20).b
    int32_t r8_13 = r10_6 - rdx_11 + 0x20
    var_f4_1 = (rdx_27 - (((rcx_27 s>> rcx_45 & 1) + rcx_27 - 1 + rdi_1) s>> rcx_45) + 0x20).b
    int64_t rcx_46 = 1
    rax_86 = r10_6 - rdx_11 + 0x20
    int32_t rdx_38 = -1
    
    if (data_143ccb970 s>= 2)
        zmm0 = (rdx_11 - rax_39 + 0x20).o
        rcx_46 = 9
        rdx_38 = -9
        zmm1 = _mm_shuffle_epi32(zx.o(r10_6 - rdx_11 + 0x20), 0)
        zmm4 = _mm_min_epi32(zmm1, zmm0)
        int32_t temp0_14[0x4] = _mm_max_epi32(zmm1, zmm0)
        zmm0 = (rax_39 - rdx_22 + 0x20).o
        int16_t zmm2[0x8] = zmm1
        zmm1 = _mm_max_epi32(zmm1, zmm0)
        zmm2 = _mm_min_epi32(zmm2, zmm0)
        int32_t temp0_17[0x4] = _mm_max_epi32(temp0_14, zmm1)
        zmm4 = _mm_min_epi32(zmm4, zmm2)
        int32_t temp0_20[0x4] = _mm_max_epi32(temp0_17, _mm_bsrli_si128(temp0_17, 8))
        int32_t temp0_22[0x4] = _mm_max_epi32(temp0_20, _mm_bsrli_si128(temp0_20, 4))
        zmm4 = _mm_min_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
        rax_86 = temp0_22[0]
        r8_13 = _mm_min_epi32(zmm4, _mm_bsrli_si128(zmm4, 4))[0].d
    
    void* r9_10 = &(&var_128)[rcx_46]
    i_5 = zx.q(rdx_38 + 0xf)
    uint64_t i_2
    
    do
        int32_t rdx_39 = *r9_10
        r9_10 += 4
        rcx_47 = rdx_39
        
        if (r8_13 s<= rdx_39)
            rcx_47 = r8_13
        
        r8_13 = rcx_47
        
        if (rax_86 s>= rdx_39)
            rdx_39 = rax_86
        
        rax_86 = rdx_39
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rdx_5 = var_174
    r9_2 = var_170
    rsi_2 = var_16c
    
    if (rcx_47 s>= 0)
        if (rax_86 s<= 0x3f)
            break

char var_194_2 = r15_1.b
uint16_t r15_2 = var_18c
uint64_t result

if (rcx_47 != 0x20 || rax_86 != 0x20 || var_198 == i_5.b)
    if (arg4 != 0)
        r15_2 = rax_3 - (var_e8_1 << var_194_2)
        var_a8[0].w = r15_2
    
    arg2[1] = var_a8[0].b
    char rcx_50 = ((rdx_11 - rax_39 + 0x20) s>> 2).b | var_128.b << 4
    arg2[4] = (rdx_11 - rax_39 + 0x20).b << 6 | (rax_39.b - rdx_32 + 0x20)
    arg2[3] = rcx_50
    arg2[5] = ((rdx_11 - rax_27 + 0x20) s>> 4).b | (r10_6.b - r11_7 + 0x20) << 2
    arg2[7] = (rax_39 - rdx_22 + 0x20).b << 6 | (rdx_32 - r8_4 + 0x20)
    *arg2 = (r15_2 u>> 8).b
    arg2[2] = ((r10_6 - rdx_11 + 0x20) s>> 4).b | var_194_2 << 2
    arg2[0xa] = var_104_1 << 6 | (r8_4 - r9_7 + 0x20)
    char rbx_13 =
        ((rax_33 - (((rcx_15 s>> rcx_45 & 1) + rcx_15 - 1 + rdi_1) s>> rcx_45) + 0x20) s>> 4).b
        | (rbx_7 - (((rcx_3 s>> rcx_45 & 1) + rcx_3 - 1 + rdi_1) s>> rcx_45).b + 0x20) << 2
    arg2[9] = ((rdx_22 - rdx_27 + 0x20) s>> 2).b | var_108_1 << 4
    arg2[6] = ((rax_39 - rdx_22 + 0x20) s>> 2).b | var_118_1 << 4
    arg2[0xd] =
        var_f4_1 << 6 | (r9_7 - (((r14_2 s>> rcx_45 & 1) - 1 + r14_2 + rdi_1) s>> rcx_45).b + 0x20)
    result = 0xe
    arg2[8] = ((rax_27 - rax_33 + 0x20) s>> 4).b | (r11_7 - rbx_7 + 0x20) << 2
    arg2[0xb] = rbx_13
    arg2[0xc] =
        ((rdx_27 - (((rcx_27 s>> rcx_45 & 1) + rcx_27 - 1 + rdi_1) s>> rcx_45) + 0x20) s>> 2).b
        | var_f8_1 << 4
else
    arg2[1] = var_a8[0].b
    result = zx.q((i_5 + 3).d)
    *arg2 = (r15_2 u>> 8).b
    arg2[2] = 0xfc

__security_check_cookie(rax_1 ^ &var_198)
return result
