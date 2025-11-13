// 函数: sub_140309c75
// 地址: 0x140309c75
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm15 = arg10
int32_t temp0[0x4] = __paddq_xmmdq_memdq(arg14, arg17)
int32_t temp0_2[0x4] = _mm_add_epi64(__paddq_xmmdq_memdq(arg15, arg18), arg7)
int32_t temp0_3[0x4] = _mm_add_epi64(temp0, arg6)
arg6 = _mm_shuffle_epi32(arg9, 0x50)
arg14 = temp0_3 & arg6
uint32_t temp0_5[0x4] = _mm_shuffle_epi32(arg9, 0xfa)
arg15 = temp0_2 & temp0_5
int64_t rax = arg14[0].q
void* rbp = arg4 + rax
int64_t rcx = _mm_shuffle_epi32(arg14, 0x4e)[0].q
void* rbx = arg4 + rcx
arg7 = data_1434426b0
uint32_t zmm0[0x4] = arg6 & arg7
uint32_t temp0_7[0x4] = _mm_shuffle_epi32(zmm0, 0x4e)
arg9 = data_1434426c0
arg6 &= arg9
arg10 = __pinsrw_xmmdq_memw_immb(zx.o(*(zmm0[0].q + rbp)), *(temp0_7[0].q + rbx), 1)
int64_t rdi_4 = arg15[0].q
zmm0 = __pinsrw_xmmdq_memw_immb(zx.o(*(arg6[0].q + rbp)), 
    *(_mm_shuffle_epi32(arg6, 0x4e)[0].q + rbx), 1)
void* rbp_3 = arg4 + rdi_4
arg7 &= temp0_5
arg10 = __pinsrw_xmmdq_memw_immb(arg10, *(arg7[0].q + rbp_3), 2)
uint32_t zmm1[0x4] = temp0_5 & arg9
zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(zmm1[0].q + rbp_3), 2)
int32_t temp0_13[0x4] = __pinsrw_xmmdq_memw_immb(zx.o(*(arg4 + rax)), *(arg4 + rcx), 1)
uint32_t temp0_14[0x4] = _mm_shuffle_epi32(arg15, 0x4e)
int32_t temp0_15[0x4] = __pinsrw_xmmdq_memw_immb(temp0_13, *(arg4 + rdi_4), 2)
int64_t rax_2 = temp0_14[0].q
int32_t temp0_16[0x4] = __pinsrw_xmmdq_memw_immb(temp0_15, *(arg4 + rax_2), 3)
void* rax_3 = arg4 + rax_2
arg10 = __pinsrw_xmmdq_memw_immb(arg10, *(_mm_shuffle_epi32(arg7, 0x4e)[0].q + rax_3), 3)
zmm0 = __pinsrw_xmmdq_memw_immb(zmm0, *(_mm_shuffle_epi32(zmm1, 0x4e)[0].q + rax_3), 3)
int32_t temp0_21[0x4] = _mm_unpacklo_epi16(temp0_16, 0)
arg7 = data_1434424d0
arg9 = _mm_cvtepi32_ps(_mm_add_epi32(temp0_21, arg7))
float zmm8[0x4] = data_1434426d0
arg9 = _mm_div_ps(arg9, zmm8)
arg6 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(arg10, 0), arg7)), zmm8)
zmm1 = _mm_div_ps(_mm_cvtepi32_ps(_mm_add_epi32(_mm_unpacklo_epi16(zmm0, 0), arg7)), zmm8)
zmm0 = data_143442710
arg9 = _mm_mul_ps(arg9, zmm0)
arg6 = _mm_mul_ps(arg6, zmm0)
zmm1 = _mm_mul_ps(zmm1, zmm0)
float zmm2[0x4] = __return_addr.o
arg9 = _mm_sub_ps(arg9, arg8)
arg6 = _mm_sub_ps(arg6, arg16)
arg9 = _mm_mul_ps(arg9, zmm2)
arg7 = arg8
char temp0_39 = arg2 & 1

if (temp0_39 != 0)
    arg7 = arg8
    arg7[0] = arg7[0] f+ arg9[0]
    zmm1 = _mm_sub_ps(zmm1, arg12)
    arg6 = _mm_mul_ps(arg6, zmm2)
    arg10 = arg16
    
    if (temp0_39 != 0)
        goto label_14030a271
    
    goto label_14030a1bd

zmm1 = _mm_sub_ps(zmm1, arg12)
arg6 = _mm_mul_ps(arg6, zmm2)
arg10 = arg16

if (temp0_39 != 0)
label_14030a271:
    arg10.d = arg16.d f+ arg6[0]
    zmm2 = _mm_mul_ps(zmm2, zmm1)
    zmm1 = arg12
    
    if (temp0_39 != 0)
        goto label_14030a1ca
    
    goto label_14030a282

label_14030a1bd:
zmm2 = _mm_mul_ps(zmm2, zmm1)
zmm1 = arg12
bool cond:4
bool cond:5
bool cond:6
bool cond:7

if (temp0_39 != 0)
label_14030a1ca:
    zmm1 = arg12
    zmm1[0] = zmm1[0] f+ zmm2[0]
    arg8 = _mm_add_ps(arg8, arg9)
    char temp2_1 = arg2 & 2
    cond:4 = temp2_1 == 0
    cond:5 = temp2_1 != 0
    cond:6 = temp2_1 == 0
    cond:7 = temp2_1 != 0
    
    if (temp2_1 != 0)
        goto label_14030a299
    
    goto label_14030a1de

label_14030a282:
arg8 = _mm_add_ps(arg8, arg9)
char temp1_1 = arg2 & 2
cond:4 = temp1_1 == 0
cond:5 = temp1_1 != 0
cond:6 = temp1_1 == 0
cond:7 = temp1_1 != 0

if (temp1_1 != 0)
label_14030a299:
    arg7 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, arg7, 1), arg7, 0xe2)
    arg16 = _mm_add_ps(arg16, arg6)
    
    if (cond:5)
        goto label_14030a1f4
    
    goto label_14030a2a6

label_14030a1de:
arg16 = _mm_add_ps(arg16, arg6)

if (not(cond:4))
label_14030a1f4:
    arg10 = _mm_shuffle_ps(_mm_shuffle_ps(arg16, arg10, 1), arg10, 0xe2)
    arg12 = _mm_add_ps(arg12, zmm2)
    
    if (cond:7)
        goto label_14030a2bc
    
    goto label_14030a201

label_14030a2a6:
arg12 = _mm_add_ps(arg12, zmm2)
bool cond:8
bool cond:9
bool cond:10
bool cond:11

if (not(cond:6))
label_14030a2bc:
    zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, zmm1, 1), zmm1, 0xe2)
    char temp4_1 = arg2 & 4
    cond:8 = temp4_1 == 0
    cond:9 = temp4_1 != 0
    cond:10 = temp4_1 == 0
    cond:11 = temp4_1 != 0
    
    if (temp4_1 != 0)
        goto label_14030a211
    
    goto label_14030a2c8

label_14030a201:
char temp3_1 = arg2 & 4
cond:8 = temp3_1 == 0
cond:9 = temp3_1 != 0
cond:10 = temp3_1 == 0
cond:11 = temp3_1 != 0

if (temp3_1 == 0)
label_14030a2c8:
    
    if (not(cond:8))
    label_14030a2d6:
        arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg16, arg10, 0x32), 0x84)
        
        if (cond:11)
            goto label_14030a229
        
        goto label_14030a2e0
else
label_14030a211:
    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg8, arg7, 0x32), 0x84)
    
    if (cond:9)
        goto label_14030a2d6

bool cond:12
bool cond:13
bool cond:14
bool cond:15

if (not(cond:10))
label_14030a229:
    zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg12, zmm1, 0x32), 0x84)
    char temp6_1 = arg2 & 8
    cond:12 = temp6_1 == 0
    cond:13 = temp6_1 != 0
    cond:14 = temp6_1 == 0
    cond:15 = temp6_1 != 0
    
    if (temp6_1 != 0)
        goto label_14030a2f1
    
    goto label_14030a236

label_14030a2e0:
char temp5_1 = arg2 & 8
cond:12 = temp5_1 == 0
cond:13 = temp5_1 != 0
cond:14 = temp5_1 == 0
cond:15 = temp5_1 != 0

if (temp5_1 != 0)
label_14030a2f1:
    arg8 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg8, arg7, 0x23), 0x24)
    
    if (cond:13)
        goto label_14030a249
    
    goto label_14030a2fa

label_14030a236:
arg8 = arg7

if (cond:12)
label_14030a2fa:
    arg16 = arg10
    arg10 = zmm15
    
    if (not(cond:14))
        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg12, zmm1, 0x23), 0x24)
else
label_14030a249:
    arg16 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg16, arg10, 0x23), 0x24)
    arg10 = zmm15
    
    if (cond:15)
        zmm1 = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(arg12, zmm1, 0x23), 0x24)

arg12 = zmm1
zmm0 = zx.o(arg12[0].q)
float temp0_70[0x4] = _mm_unpackhi_ps(arg12, zx.o(0))
zmm1 = _mm_unpacklo_ps(arg8, arg16.q)
float temp0_72[0x4] = _mm_unpackhi_ps(arg8, arg16)
int32_t arg_230[0x4] = _mm_shuffle_ps(zmm1, zmm0, 0x84)
uint32_t arg_240[0x4] = _mm_shuffle_ps(zmm1, zmm0, 0xde)
uint32_t arg_250[0x4] = temp0_72[0].q | temp0_70[0].q << 0x40
float arg_260[0x4] = _mm_unpackhi_pd(temp0_72, temp0_70[0].q)
uint64_t i = zx.q(_mm_movemask_ps(arg11))

do
    uint64_t rcx_4
    uint64_t rflags_1
    
    if (i == 0)
        rcx_4 = 0x40
    else
        rcx_4, rflags_1 = _bit_scan_forward(i)
    int128_t arg_220 = arg13.q | arg10.q << 0x40
    *(arg5 + sx.q(*(&arg_220 + ((zx.q(rcx_4.d) & 3) << 2))) * 0x30 + 0x10) = (&arg_230)[rcx_4]
    i &= rol.q(-2, rcx_4.b)
while (i != 0)

return i
