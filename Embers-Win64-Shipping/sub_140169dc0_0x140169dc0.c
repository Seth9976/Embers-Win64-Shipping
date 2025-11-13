// 函数: sub_140169dc0
// 地址: 0x140169dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t zmm4[0x4]
uint32_t zmm6[0x8]
uint32_t zmm27[0x8]
bool cond:0_1

do
    zmm27 = _mm256_mask_add_epi32(arg10, arg20, arg20)
    zmm4 = _mm256_mask_add_epi64(arg10, arg33, _mm256_mask_cvtepi32_epi64(arg10, zmm27[0].o))
    int64_t k0 = _mm_mask_test_epi16_mask(arg10, arg16[0].o, arg35[0].o)
    char temp0_3 = _cvtmask32_u32(k0)
    
    if ((temp0_3 & 1) == 0)
        if ((temp0_3 & 2) != 0)
            goto label_140169d01
        
        goto label_140169df3
    
    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *zmm4[0], 0)
    
    if ((temp0_3 & 2) != 0)
    label_140169d01:
        uint16_t* rax_58 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_58, 1)
        arg16[0].o = _mm256_extracti32x4_epi32(k0, zmm27, 1)
        
        if ((temp0_3 & 4) == 0)
            goto label_140169e04
        
        goto label_140169d1d
    
label_140169df3:
    arg16[0].o = _mm256_extracti32x4_epi32(k0, zmm27, 1)
    
    if ((temp0_3 & 4) == 0)
    label_140169e04:
        arg16 = _mm256_cvtepi32_epi64(arg16[0].o)
        
        if ((temp0_3 & 8) != 0)
            goto label_140169d3c
        
        goto label_140169e13
    
label_140169d1d:
    zmm6[0].o = _mm256_extracti128_si256(zmm4, 1)
    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *zmm6[0].q, 2)
    arg16 = _mm256_cvtepi32_epi64(arg16[0].o)
    
    if ((temp0_3 & 8) != 0)
    label_140169d3c:
        zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
        uint16_t* rax_60 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_60, 3)
        zmm4 = _mm256_mask_add_epi64(k0, arg32, arg16)
        
        if ((temp0_3 & 0x10) == 0)
            goto label_140169e23
        
        goto label_140169d62
    
label_140169e13:
    zmm4 = _mm256_mask_add_epi64(k0, arg32, arg16)
    
    if ((temp0_3 & 0x10) == 0)
    label_140169e23:
        
        if ((temp0_3 & 0x20) != 0)
            goto label_140169d71
        
        goto label_140169e2d
    
label_140169d62:
    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *zmm4[0], 4)
    
    if ((temp0_3 & 0x20) != 0)
    label_140169d71:
        uint16_t* rax_62 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_62, 5)
        
        if ((temp0_3 & 0x40) == 0)
            goto label_140169e37
        
        goto label_140169d86
    
label_140169e2d:
    
    if ((temp0_3 & 0x40) != 0)
    label_140169d86:
        arg16[0].o = _mm256_extracti128_si256(zmm4, 1)
        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg16[0], 6)
        
        if (temp0_3 s< 0)
        label_140169d9f:
            zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
            uint16_t* rax_64 = __vpextrq_gpr64q_xmmdq_immb(zmm4[0].o, 1)
            arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_64, 7)
    else
    label_140169e37:
        
        if (temp0_3 s< 0)
            goto label_140169d9f
    
    zmm4 = _mm256_cvtepu16_epi32(arg15[0].o)
    zmm4[0].o = _mm_mask_mov_epi16(_mm256_cmp_epi32_mask(k0, arg21, zmm4, 5), arg17)
    arg16[0].o = zx.o(0)
    int64_t k1_2 = _mm_mask_testn_epi16_mask(k0, zmm4[0].o, arg4[0].o)
    zmm6[0].o = _mm_mask_and_epi64(k0, zmm4[0].o, arg27[0].o)
    int64_t k0_1 = _mm_mask_test_epi16_mask(k0, zmm6[0].o, arg4[0].o)
    char temp0_10 = _cvtmask32_u32(k0_1)
    cond:0_1 = arg7 != temp0_10
    
    if (arg7 != temp0_10)
        arg16[0].o = zmm4[0].o ^ arg17
    
    arg20 = _mm256_add_epi32(arg20, arg19)
    zmm4 = _mm256_mask_mov_epi32(k1_2, arg14)
    arg17 = _mm_mask_mov_epi16(
        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_1, arg20, arg36), arg16[0].o)
    arg16[0].o = _mm_mask_and_epi64(k0_1, arg17, arg27[0].o)
    arg10 = _mm_mask_test_epi16_mask(k0_1, arg16[0].o, arg4[0].o)
    _kortest_mask8_u8(arg10, arg10)
    arg7 = _cvtmask32_u32(arg10)
    arg14 = zmm4
while (cond:0_1)
arg28 = _mm256_mask_blend_epi32(
    __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg10, arg27[0].o, data_142fc92e0), zmm4, 
    arg28)
arg4 = _mm256_mask_add_epi32(arg10, arg28, arg28)
arg14 = _mm256_mask_add_epi64(arg10, arg33, _mm256_cvtepi32_epi64(arg4[0].o))

if ((arg5 & 1) != 0)
    arg15[0].o = __vpbroadcastw_xmmdq_memw(*arg14[0].q)

zmm6 = _mm256_cmpeq_epi32(zmm6, zmm6)
arg19 = arg1

if ((arg5 & 2) == 0)
    arg4[0].o = _mm256_extracti128_si256(arg4, 1)
    
    if ((arg5 & 4) != 0)
        goto label_14016bac0
    
    goto label_14016a162

uint16_t* rax_42 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_42, 1)
arg4[0].o = _mm256_extracti128_si256(arg4, 1)

if ((arg5 & 4) != 0)
label_14016bac0:
    arg16[0].o = _mm256_extracti128_si256(arg14, 1)
    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg16[0], 2)
    arg4 = _mm256_cvtepi32_epi64(arg4[0].o)
    
    if ((arg5 & 8) == 0)
        goto label_14016a170
    
    goto label_14016bade

label_14016a162:
arg4 = _mm256_cvtepi32_epi64(arg4[0].o)

if ((arg5 & 8) == 0)
label_14016a170:
    arg14 = _mm256_mask_add_epi64(arg10, arg32, arg4)
    
    if ((arg5 & 0x10) != 0)
        goto label_14016bb03
    
    goto label_14016a17f

label_14016bade:
arg14[0].o = _mm256_extracti128_si256(arg14, 1)
uint16_t* rax_44 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_44, 3)
arg14 = _mm256_mask_add_epi64(arg10, arg32, arg4)

if ((arg5 & 0x10) != 0)
label_14016bb03:
    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg14[0].q, 4)
    
    if ((arg5 & 0x20) == 0)
        goto label_14016a188
    
    goto label_14016bb11

label_14016a17f:

if ((arg5 & 0x20) == 0)
label_14016a188:
    
    if ((arg5 & 0x40) != 0)
        goto label_14016bb25
    
    goto label_14016a191

label_14016bb11:
uint16_t* rax_46 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_46, 5)
bool cond:2

if ((arg5 & 0x40) == 0)
label_14016a191:
    cond:2 = arg2 == 0
    
    if (arg2 s< 0)
    label_14016bb3d:
        arg14[0].o = _mm256_extracti128_si256(arg14, 1)
        uint16_t* rax_48 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_48, 7)
else
label_14016bb25:
    arg4[0].o = _mm256_extracti128_si256(arg14, 1)
    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg4[0].q, 6)
    cond:2 = arg2 == 0
    
    if (arg2 s< 0)
        goto label_14016bb3d

arg14[0].o = __vpbroadcastw_xmmdq_memw(0xff)
int64_t k1_5 = _mm_mask_testn_epi16_mask(arg10, arg27[0].o, arg14[0].o)
arg4 = _mm256_cmpeq_epi32(arg4, arg4)
_mm256_mask_sub_epi32(arg10, zmm4, arg4)
arg35 = _mm256_mask_mov_epi32(k1_5, arg29)
arg4[0].o = _mm_mask_mov_epi16(_mm256_cmp_epi32_mask(arg10, arg35, arg31, 5), arg27[0].o)
int64_t k0_2 = _mm_mask_test_epi16_mask(arg10, arg4[0].o, arg14[0].o)
_kortest_mask8_u8(k0_2, k0_2)

if (not(cond:2))
    arg1 = _mm256_mask_mov_epi32(_mm_mask_testn_epi16_mask(k0_2, arg4[0].o, arg14[0].o), arg35)
    arg35 = _mm256_mask_mov_epi64(k0_2, arg1)

zmm4 = _mm256_mask_add_epi32(k0_2, arg35, arg35)
arg14 = _mm256_cvtepi32_epi64(zmm4[0].o)
arg4 = _mm256_mask_add_epi64(k0_2, arg33, arg14)

if ((arg5 & 1) == 0)
    if ((arg5 & 2) != 0)
        goto label_14016bb66
    
    goto label_14016a20c

arg14[0].o = __vpbroadcastw_xmmdq_memw(*arg4[0].q)

if ((arg5 & 2) != 0)
label_14016bb66:
    uint16_t* rax_50 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_50, 1)
    zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)
    
    if ((arg5 & 4) == 0)
        goto label_14016a21b
    
    goto label_14016bb80

label_14016a20c:
zmm4[0].o = _mm256_extracti128_si256(zmm4, 1)

if ((arg5 & 4) == 0)
label_14016a21b:
    zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)
    
    if ((arg5 & 8) != 0)
        goto label_14016bb9e
    
    goto label_14016a229

label_14016bb80:
arg1[0].o = _mm256_extracti128_si256(arg4, 1)
arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg1[0].q, 2)
zmm4 = _mm256_cvtepi32_epi64(zmm4[0].o)

if ((arg5 & 8) != 0)
label_14016bb9e:
    arg1[0].o = _mm256_extracti128_si256(arg4, 1)
    int64_t rax_52 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_52, 3)
    arg4 = _mm256_mask_add_epi64(k0_2, arg32, zmm4)
    
    if ((arg5 & 0x10) == 0)
        goto label_14016a238
    
    goto label_14016bbc3

label_14016a229:
arg4 = _mm256_mask_add_epi64(k0_2, arg32, zmm4)

if ((arg5 & 0x10) == 0)
label_14016a238:
    
    if ((arg5 & 0x20) != 0)
        goto label_14016bbd1
    
    goto label_14016a241

label_14016bbc3:
arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg4[0].q, 4)

if ((arg5 & 0x20) != 0)
label_14016bbd1:
    uint16_t* rax_54 = __vpextrq_gpr64q_xmmdq_immb(arg4[0].o, 1)
    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_54, 5)
    
    if ((arg5 & 0x40) == 0)
        goto label_14016a24a
    
    goto label_14016bbe5

label_14016a241:

if ((arg5 & 0x40) != 0)
label_14016bbe5:
    arg1[0].o = _mm256_extracti128_si256(arg4, 1)
    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg1[0].q, 6)
    
    if (arg2 s< 0)
    label_14016bbfd:
        arg1[0].o = _mm256_extracti128_si256(arg4, 1)
        int64_t rax_56 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_56, 7)
else
label_14016a24a:
    
    if (arg2 s< 0)
        goto label_14016bbfd

arg15 = _mm256_cvtepu16_epi32(arg15[0].o)
arg14 = _mm256_cvtepu16_epi32(arg14[0].o)
arg4[0].o = zx.o(0)
char temp3 = *(arg6 + 0x680)
bool cond:4 = temp3 == 1
bool cond:6 = temp3 == 1
bool cond:7 = temp3 == 1
bool cond:9 = temp3 == 1
bool cond:10 = temp3 == 1
bool cond:11 = temp3 == 1
bool cond:12 = temp3 == 1
bool cond:14 = temp3 == 1
bool cond:15 = temp3 == 1
bool cond:16 = temp3 == 1
bool cond:17 = temp3 == 1
bool cond:18 = temp3 == 1
bool cond:19 = temp3 == 1
bool cond:20 = temp3 == 1
bool cond:21 = temp3 == 1
bool cond:22 = temp3 == 1
bool cond:23 = temp3 == 1
bool cond:25 = temp3 == 1
bool cond:26 = temp3 == 1
bool cond:27 = temp3 == 1
bool cond:28 = temp3 == 1
bool cond:29 = temp3 == 1
bool cond:30 = temp3 == 1
bool cond:31 = temp3 == 1
bool cond:32 = temp3 == 1
bool cond:33 = temp3 == 1
bool cond:34 = temp3 == 1
bool cond:35 = temp3 == 1
bool cond:36 = temp3 == 1
bool cond:37 = temp3 == 1
bool cond:38 = temp3 == 1
bool cond:39 = temp3 == 1
bool cond:40 = temp3 == 1
bool cond:41 = temp3 == 1
bool cond:42 = temp3 == 1

if (temp3 != 1)
    arg1 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(k0_2, _mm256_sub_epi32(arg14, arg15), 1)
    arg14 = _mm256_sub_ps(_mm256_broadcast_ss(arg41), _mm256_cvtepi32_ps(arg15))
    arg1 = _mm256_cvtepi32_ps(arg1)
    arg4 = _mm256_div_ps(arg14, arg1)

arg1[0].o = __return_addr.o & data_142fc92e0
arg14 = _mm256_mask_mov_ps(
    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(k0_2, arg1[0].o, data_142fc92e0, 4), arg4)
float zmm13[0x8] = _mm256_mask_mov_ps(arg11, arg14)
arg29 = _mm256_mask_mov_epi64(k0_2, arg35)
arg1[0].o = _mm256_extracti32x4_epi32(k0_2, arg30, 1)
arg31 = _mm256_mask_cvtepu32_epi64(k0_2, arg1[0].o)
arg30 = _mm256_mask_cvtepu32_epi64(k0_2, arg30[0].o)
arg1 = _mm256_mask_mullo_epi32(k0_2, arg28, arg37)
arg14[0].o = _mm256_extracti128_si256(arg1, 1)
arg15 = _mm256_cvtepi32_epi64(arg14[0].o)
arg33 = _mm256_mask_cvtepi32_epi64(k0_2, arg1[0].o)
arg1 = _mm256_mask_add_epi64(k0_2, arg33, arg30)
arg14 = _mm256_mask_add_epi64(k0_2, arg15, arg31)
arg32 = _mm256_mask_add_epi64(k0_2, arg14, arg26)
zmm27 = _mm256_mask_add_epi64(k0_2, arg1, arg25)
int64_t k3 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg13, arg18, 1)
_kortest_mask8_u8(k3, k3)

if (temp3 != 1)
    arg1 = __vpbroadcastd_ymmqq_memd(0x7000000)
    arg14 = _mm256_mask_and_epi32(k0_2, arg22, arg1)
    uint64_t k4_1 = _mm256_mask_testn_epi32_mask(k3, arg22, arg1)
    _kortest_mask8_u8(k4_1, k4_1)
    
    if (temp3 != 1)
        arg1 = _mm256_mask_add_epi64(k0_2, arg24, arg31)
        arg4 = __vpbroadcastq_ymmqq_memq(4)
        zmm4 = _mm256_mask_add_epi64(k0_2, _mm256_mask_add_epi64(k0_2, arg23, arg30), arg33)
        arg1 = _mm256_add_epi64(arg1, arg15)
        arg16 = _mm256_add_epi64(arg1, arg4)
        arg4 = _mm256_add_epi64(zmm4, arg4)
        uint64_t k5_1 = _kshiftri_mask8(k4_1, 4)
        int64_t k1_9 = __kmovq_maskmskw_masku64_avx512(k4_1)
        arg27[0].o = _mm_mask_xor_epi32(k0_2, arg27[0].o, arg27[0].o)
        int64_t k1_10
        char temp0_71
        temp0_71, k1_10 =
            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_9, *(arg8 + arg4[0].q))
        arg27[0].o = temp0_71
        int64_t k1_11 = __kmovq_maskmskw_masku64_avx512(k5_1)
        arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
        int64_t k1_12
        char temp0_73
        temp0_73, k1_12 =
            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_11, *(arg8 + arg16[0]))
        arg4[0].o = temp0_73
        arg16 = __vpbroadcastq_ymmqq_memq(8)
        arg35 = _mm256_mask_add_epi64(k0_2, arg1, arg16)
        arg16 = _mm256_add_epi64(zmm4, arg16)
        int64_t k1_13 = __kmovq_maskmskw_masku64_avx512(k4_1)
        arg36[0].o = _mm_mask_xor_ps(k0_2, arg36[0].o, arg36[0].o)
        int64_t k1_14
        char temp0_78
        temp0_78, k1_14 =
            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_13, *(arg8 + arg16[0]))
        arg36[0].o = temp0_78
        int64_t k1_15 = __kmovq_maskmskw_masku64_avx512(k5_1)
        arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        int64_t k1_16
        char temp0_80
        temp0_80, k1_16 =
            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_15, *(arg8 + arg35[0].q))
        arg16[0].o = temp0_80
        arg4 = _mm256_insertf32x4(k0_2, arg27, arg4[0].o, 1)
        arg16 = _mm256_insertf32x4(k0_2, arg36, arg16[0].o, 1)
        arg27 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(k0_2, 0xc)
        arg1 = _mm256_mask_add_epi64(k0_2, arg1, arg27)
        zmm4 = _mm256_mask_add_epi64(k0_2, zmm4, arg27)
        int64_t k1_17 = __kmovq_maskmskw_masku64_avx512(k4_1)
        arg27[0].o = _mm_mask_xor_epi32(k0_2, arg27[0].o, arg27[0].o)
        int64_t k1_18
        char temp0_87
        temp0_87, k1_18 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_17, *(arg8 + zmm4[0]))
        arg27[0].o = temp0_87
        int64_t k5_2
        char temp0_88
        temp0_88, k5_2 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_1, *(arg8 + arg1[0].q))
        arg1 = _mm256_insertf32x4(k0_2, arg27, temp0_88, 1)
        arg38 = _mm256_mask_storeu_ps(k4_1, arg4)
        arg39 = _mm256_mask_storeu_ps(k4_1, arg16)
        arg40 = _mm256_mask_storeu_ps(k4_1, arg1)
    
    int64_t k3_1 = _mm256_mask_test_epi32_mask(k3, arg14, arg14)
    _kortest_mask8_u8(k3_1, k3_1)
    
    if (temp3 != 1)
        arg1 = _mm256_slli_epi32(arg19, 0x1f)
        int64_t k4_2 = _mm256_movepi32_mask(arg1)
        arg14[0].o = zx.o(0)
        int64_t k1_19 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, arg14, arg1)
        _kortest_mask8_u8(k1_19, k1_19)
        
        if (temp3 == 1)
            arg4 = _mm256_mask_mov_epi64(k0_2, zmm27)
            arg14 = _mm256_mask_mov_epi64(k0_2, arg32)
        else
            arg1 = __vpbroadcastq_ymmqq_memq(4)
            _mm256_mask_mov_epi64(k0_2, zmm27)
            arg4 = _mm256_mask_add_epi64(k1_19, zmm27, arg1)
            int64_t k5_3 = _kshiftri_mask8(k1_19, 4)
            _mm256_mask_mov_epi64(k0_2, arg32)
            arg14 = _mm256_mask_add_epi64(k5_3, arg32, arg1)
            zmm4 = _mm256_mask_add_epi64(k0_2, arg24, arg31)
            arg16 = _mm256_mask_add_epi64(k0_2, _mm256_mask_add_epi64(k0_2, arg23, arg30), arg33)
            zmm4 = _mm256_add_epi64(_mm256_add_epi64(zmm4, arg15), arg1)
            arg1 = _mm256_add_epi64(arg16, arg1)
            int64_t k5_4 = _kshiftri_mask8(k1_19, 4)
            arg16[0].o = zx.o(0)
            arg27[0].o = _mm_mask_xor_epi32(k0_2, arg27[0].o, arg27[0].o)
            int64_t k1_20
            char temp0_106
            temp0_106, k1_20 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_19, *(arg8 + arg1[0].q))
            arg27[0].o = temp0_106
            int64_t k5_5
            char temp0_107
            temp0_107, k5_5 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_4, *(arg8 + zmm4[0]))
            arg16[0].o = temp0_107
            zmm4 = _mm256_insertf32x4(k0_2, arg27, arg16[0].o, 1)
        
        arg38 = _mm256_mask_storeu_ps(k3_1, _mm256_mask_mov_ps(k4_2, zmm4))
        arg1 = __vpbroadcastd_ymmqq_memd(0x2000000)
        zmm4 = _mm256_mask_and_epi32(k0_2, arg22, arg1)
        int64_t k1_21 = _mm256_mask_test_epi32_mask(k3_1, arg22, arg1)
        _kortest_mask8_u8(k1_21, k1_21)
        
        if (temp3 != 1)
            arg1 = __vpbroadcastq_ymmqq_memq(4)
            _mm256_mask_mov_epi64(k0_2, arg4)
            arg27 = _mm256_mask_add_epi64(k1_21, arg4, arg1)
            int64_t k4_3 = _kshiftri_mask8(k1_21, 4)
            int64_t k5_6 = _kshiftri_mask8(k1_21, 4)
            cond:4 = true
            cond:6 = true
            cond:7 = true
            cond:9 = true
            cond:10 = true
            cond:11 = true
            cond:12 = true
            cond:14 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:23 = true
            cond:25 = true
            cond:26 = true
            cond:27 = true
            cond:28 = true
            cond:29 = true
            cond:30 = true
            cond:31 = true
            cond:32 = true
            cond:33 = true
            cond:34 = true
            cond:35 = true
            cond:36 = true
            cond:37 = true
            cond:38 = true
            cond:39 = true
            cond:40 = true
            cond:41 = true
            cond:42 = true
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_22
            char temp0_119
            temp0_119, k1_22 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_21, *arg4[0].q)
            arg16[0].o = temp0_119
            arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
            int64_t k5_7
            char temp0_121
            temp0_121, k5_7 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_6, *arg14[0].q)
            arg4[0].o = temp0_121
            arg14 = _mm256_mask_add_epi64(k4_3, arg14, arg1)
            arg16 = _mm256_insertf128_ps(arg16, arg4[0].o, 1)
            arg4 = _mm256_mask_mov_epi64(k0_2, arg27)
        
        arg39 = _mm256_mask_storeu_ps(k3_1, 
            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, zmm4, zmm4), arg16))
        arg1 = __vpbroadcastd_ymmqq_memd(0x4000000)
        zmm4 = _mm256_mask_and_epi32(k0_2, arg22, arg1)
        int64_t k1_24 = _mm256_mask_test_epi32_mask(k3_1, arg22, arg1)
        _kortest_mask8_u8(k1_24, k1_24)
        
        if (not(cond:23))
            int64_t k4_4 = _kshiftri_mask8(k1_24, 4)
            arg1[0].o = zx.o(0)
            cond:4 = true
            cond:6 = true
            cond:7 = true
            cond:9 = true
            cond:10 = true
            cond:11 = true
            cond:12 = true
            cond:14 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:25 = true
            cond:26 = true
            cond:27 = true
            cond:28 = true
            cond:29 = true
            cond:30 = true
            cond:31 = true
            cond:32 = true
            cond:33 = true
            cond:34 = true
            cond:35 = true
            cond:36 = true
            cond:37 = true
            cond:38 = true
            cond:39 = true
            cond:40 = true
            cond:41 = true
            cond:42 = true
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_25
            char temp0_130
            temp0_130, k1_25 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_24, *arg4[0].q)
            arg16[0].o = temp0_130
            int64_t k4_5
            char temp0_131
            temp0_131, k4_5 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_4, *arg14[0].q)
            arg1[0].o = temp0_131
            arg14 = _mm256_insertf128_ps(arg16, arg1[0].o, 1)
        
        arg40 = _mm256_mask_storeu_ps(k3_1, 
            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, zmm4, zmm4), arg14))

arg1 = __vpbroadcastd_ymmqq_memd(1)
int64_t k0_3 = _mm256_cmp_epi32_mask(k0_2, arg18, arg1, 4)
int64_t k1_27 = _mm256_cmp_epi32_mask(arg13, arg18, arg1, 4)
_kortest_mask8_u8(k1_27, k1_27)
float arg_20[0x8]
float arg_60[0x8]
float arg_80[0x8]
float arg_a0[0x8]
float arg_c0[0x8]
float arg_e0[0x8]
float arg_100[0x8]

if (not(cond:4))
    uint64_t k3_2 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg13, arg18, 3)
    _kortest_mask8_u8(k3_2, k3_2)
    
    if (not(cond:7))
        arg_20[0].w = _store_mask16(arg12)
        arg1[0].o = zx.o(0)
        arg_100 = arg1
        arg_e0 = arg1
        arg_c0 = arg1
        arg_a0 = arg1
        arg_80 = arg1
        arg_60 = arg1
        int64_t k4_6 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
            _mm256_movepi32_mask(_mm256_slli_epi32(arg19, 0x1f)), arg18, 3)
        uint64_t k5_8 = _kand_mask8(k4_6, arg13)
        _kortest_mask8_u8(k5_8, k5_8)
        arg14 = _mm256_mask_mov_epi64(k0_3, arg25)
        arg4 = _mm256_mask_mov_epi64(k0_3, arg26)
        
        if (not(cond:12))
            arg1 = __vpbroadcastq_ymmqq_memq(4)
            int64_t k6 = _kshiftri_mask8(k5_8, 4)
            _mm256_mask_mov_epi64(k0_3, arg26)
            arg4 = _mm256_mask_add_epi64(k6, arg26, arg1)
            _mm256_mask_mov_epi64(k0_3, arg25)
            zmm4 = _mm256_mask_add_epi64(k5_8, arg25, arg1)
            uint64_t k2_1 = __kmovq_maskmskw_masku64_avx512(arg13)
            uint64_t k7 = _kshiftri_mask8(k5_8, 4)
            cond:6 = true
            cond:9 = true
            cond:10 = true
            cond:11 = true
            cond:14 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:25 = true
            cond:26 = true
            cond:27 = true
            cond:28 = true
            cond:29 = true
            cond:30 = true
            cond:31 = true
            cond:32 = true
            cond:33 = true
            cond:34 = true
            cond:35 = true
            cond:36 = true
            cond:37 = true
            cond:38 = true
            cond:39 = true
            cond:40 = true
            cond:41 = true
            cond:42 = true
            int64_t k1_29 = __kmovq_maskmskw_masku64_avx512(k5_8)
            arg1[0].o = zx.o(0)
            int64_t k1_30
            char temp0_145
            temp0_145, k1_30 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_29, *arg25[0])
            arg1[0].o = temp0_145
            int64_t k1_31 = __kmovq_maskmskw_masku64_avx512(k7)
            arg14[0].o = zx.o(0)
            int64_t k1_32
            char temp0_146
            temp0_146, k1_32 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_31, *arg26[0])
            arg14[0].o = temp0_146
            arg_c0 = _mm256_mask_storeu_ps(k4_6, _mm256_insertf128_ps(arg1, arg14[0].o, 1))
            arg1 = __vpbroadcastq_ymmqq_memq(8)
            _mm256_mask_mov_epi64(k0_3, arg25)
            arg14 = _mm256_mask_add_epi64(k5_8, arg25, arg1)
            arg16[0].o = zx.o(0)
            int64_t k5_9
            char temp0_152
            temp0_152, k5_9 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_8, *zmm4[0])
            arg16[0].o = temp0_152
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            int64_t k7_1
            char temp0_154
            temp0_154, k7_1 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7, *arg4[0].q)
            zmm4[0].o = temp0_154
            arg13 = __kmovq_maskmskw_masku64_avx512(k2_1)
            _mm256_mask_mov_epi64(k0_3, arg26)
            arg4 = _mm256_mask_add_epi64(k6, arg26, arg1)
            arg_60 = _mm256_mask_storeu_ps(k4_6, _mm256_insertf128_ps(arg16, zmm4[0].o, 1))
        
        int64_t k4_7 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_3, arg18, 3)
        int64_t k5_10 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_7, arg22, 0x2000000)
        uint64_t k6_1 = _kand_mask8(k5_10, arg13)
        _kortest_mask8_u8(k6_1, k6_1)
        
        if (not(cond:17))
            arg1 = __vpbroadcastq_ymmqq_memq(4)
            __return_addr.d = _store_mask32(arg13)
            int64_t k7_2 = _kshiftri_mask8(k6_1, 4)
            zmm4 = _mm256_mask_add_epi64(k7_2, arg4, arg1)
            arg16 = _mm256_mask_add_epi64(k6_1, arg14, arg1)
            uint64_t k1_33 = _kshiftri_mask8(k6_1, 4)
            cond:6 = true
            cond:9 = true
            cond:10 = true
            cond:11 = true
            cond:14 = true
            cond:15 = true
            cond:16 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:25 = true
            cond:26 = true
            cond:27 = true
            cond:28 = true
            cond:29 = true
            cond:30 = true
            cond:31 = true
            cond:32 = true
            cond:33 = true
            cond:34 = true
            cond:35 = true
            cond:36 = true
            cond:37 = true
            cond:38 = true
            cond:39 = true
            cond:40 = true
            cond:41 = true
            cond:42 = true
            int64_t k2_2 = __kmovq_maskmskw_masku64_avx512(k6_1)
            arg1[0].o = zx.o(0)
            int64_t k2_3
            char temp0_163
            temp0_163, k2_3 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_2, *arg14[0].q)
            arg1[0].o = temp0_163
            int64_t k2_5
            char temp0_164
            temp0_164, k2_5 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                __kmovq_maskmskw_masku64_avx512(k1_33), *arg4[0].q)
            arg_e0 = _mm256_mask_storeu_ps(k5_10, _mm256_insertf128_ps(arg1, temp0_164, 1))
            arg1 = __vpbroadcastq_ymmqq_memq(8)
            arg14 = _mm256_mask_add_epi64(k6_1, arg14, arg1)
            arg27[0].o = _mm_mask_xor_epi32(k0_3, arg27[0].o, arg27[0].o)
            int64_t k6_2
            char temp0_170
            temp0_170, k6_2 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_1, *arg16[0])
            arg27[0].o = temp0_170
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_34
            char temp0_172
            temp0_172, k1_34 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_33, *zmm4[0])
            arg16[0].o = temp0_172
            arg4 = _mm256_mask_add_epi64(k7_2, arg4, arg1)
            arg13 = _load_mask32(__return_addr.d)
            arg_80 = _mm256_mask_storeu_ps(k5_10, _mm256_insertf32x4(k0_3, arg27, arg16[0].o, 1))
        
        arg12 = _load_mask16(arg_20[0].w)
        int64_t k4_8 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_7, arg22, 0x4000000)
        uint64_t k5_11 = _kand_mask8(k4_8, arg13)
        _kortest_mask8_u8(k5_11, k5_11)
        
        if (not(cond:22))
            arg1 = __vpbroadcastq_ymmqq_memq(4)
            uint64_t k1_35 = _kshiftri_mask8(k5_11, 4)
            cond:6 = true
            cond:9 = true
            cond:10 = true
            cond:11 = true
            cond:14 = true
            cond:15 = true
            cond:16 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:25 = true
            cond:26 = true
            cond:27 = true
            cond:28 = true
            cond:29 = true
            cond:30 = true
            cond:31 = true
            cond:32 = true
            cond:33 = true
            cond:34 = true
            cond:35 = true
            cond:36 = true
            cond:37 = true
            cond:38 = true
            cond:39 = true
            cond:40 = true
            cond:41 = true
            cond:42 = true
            int64_t k2_6 = __kmovq_maskmskw_masku64_avx512(k5_11)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            int64_t k2_7
            char temp0_178
            temp0_178, k2_7 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_6, *arg14[0].q)
            zmm4[0].o = temp0_178
            arg16[0].o = zx.o(0)
            int64_t k2_9
            char temp0_179
            temp0_179, k2_9 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                __kmovq_maskmskw_masku64_avx512(k1_35), *arg4[0].q)
            arg16[0].o = temp0_179
            arg4 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_11, 4), arg4, arg1)
            arg14 = _mm256_mask_add_epi64(k5_11, arg14, arg1)
            arg1 = _mm256_insertf128_ps(zmm4, arg16[0].o, 1)
            arg_100 = _mm256_mask_storeu_ps(k4_8, arg1)
            arg1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg1[0].o, arg1[0].o)
            int64_t k5_12
            char temp0_185
            temp0_185, k5_12 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_11, *arg14[0].q)
            arg1[0].o = temp0_185
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            int64_t k1_36
            char temp0_187
            temp0_187, k1_36 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_35, *arg4[0].q)
            arg14[0].o = temp0_187
            arg_a0 = _mm256_mask_storeu_ps(k4_8, _mm256_insertf128_ps(arg1, arg14[0].o, 1))
        
        arg1 = _mm256_mask_add_epi64(k0_3, arg24, arg31)
        arg14 = __vpbroadcastq_ymmqq_memq(4)
        arg4 = _mm256_mask_add_epi64(k0_3, _mm256_mask_add_epi64(k0_3, arg23, arg30), arg33)
        arg1 = _mm256_add_epi64(_mm256_add_epi64(arg1, arg15), arg14)
        arg14 = _mm256_add_epi64(arg4, arg14)
        int64_t k1_37 = _kshiftri_mask8(k3_2, 4)
        int64_t k2_11 = __kmovq_maskmskw_masku64_avx512(k3_2)
        arg4[0].o = zx.o(0)
        int64_t k2_12
        char temp0_197
        temp0_197, k2_12 =
            __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_11, *(arg8 + arg14[0].q))
        arg4[0].o = temp0_197
        arg14[0].o = zx.o(0)
        int64_t k1_38
        char temp0_198
        temp0_198, k1_38 =
            __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_37, *(arg8 + arg1[0].q))
        arg14[0].o = temp0_198
        arg1 = _mm256_inserti128_si256(arg4, arg14[0].o, 1)
        arg14 =
            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, _mm256_srli_epi32(arg1, 0xa), 0x7ff)
        arg4 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_3, 
            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, arg1, 0x3ff), 0xfffffe01)), 
            0x43ff8000)
        arg16 = arg_80
        arg27 = _mm256_mask_load_ps(k0_3, arg_a0)
        zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_60, arg4, arg_c0)
        arg4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
        arg14 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg14, arg4))
        arg35 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_3, 1023f)
        arg14 =
            __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_mask_div_ps(k0_3, arg14, arg35), arg16, arg_e0)
        arg1 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
            _mm256_mask_div_ps(k0_3, 
                _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(arg1, 0x15), arg4)), arg35), 
            k0_3, arg27, arg_100)
        arg38 = _mm256_mask_storeu_ps(k3_2, zmm4)
        arg39 = _mm256_mask_storeu_ps(k3_2, arg14)
        arg40 = _mm256_mask_storeu_ps(k3_2, arg1)
    
    int64_t k3_3 =
        _kxor_mask8(__vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_3, arg18, 3), k0_3)
    _ktest_mask8_u8(k3_3, arg13)
    
    if (not(cond:11))
        int64_t k4_9 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg13, arg18, 2)
        _kortest_mask8_u8(k4_9, k4_9)
        
        if (not(cond:16))
            arg1 = _mm256_slli_epi32(arg19, 0x1f)
            int64_t k5_13 = _mm256_movepi32_mask(arg1)
            arg14[0].o = zx.o(0)
            int64_t k1_40 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k4_9, arg14, arg1)
            _kortest_mask8_u8(k1_40, k1_40)
            
            if (not(cond:21))
                arg1 = __vpbroadcastq_ymmqq_memq(2)
                zmm27 = _mm256_mask_add_epi64(k1_40, zmm27, arg1)
                int64_t k2_13 = _kshiftri_mask8(k1_40, 4)
                arg32 = _mm256_mask_add_epi64(k2_13, arg32, arg1)
                arg1 = _mm256_mask_add_epi64(k0_3, arg24, arg31)
                arg14 = _mm256_mask_add_epi64(k0_3, arg23, arg30)
                arg4 = __vpbroadcastq_ymmqq_memq(4)
                arg14 = _mm256_mask_add_epi64(k0_3, arg14, arg33)
                arg1 = _mm256_mask_add_epi64(k2_13, _mm256_add_epi64(arg1, arg15), arg4)
                arg14 = _mm256_mask_add_epi64(k1_40, arg14, arg4)
                int64_t r10 = arg14[0].q
                int64_t r9_1 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                arg14[0].o = _mm256_extracti128_si256(arg14, 1)
                int64_t r11_1 = arg14[0].q
                int64_t rbx = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                int64_t rdi = arg1[0].q
                int64_t rsi_2 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                arg1[0].o = _mm256_extracti128_si256(arg1, 1)
                int64_t rcx_1 = arg1[0].q
                int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                arg8 = *(arg6 + 0x660)
                arg1[0].o = zx.o(*(*(arg6 + 0x660) + r10))
                arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + r9_1), 1)
                arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + r11_1), 2)
                arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rbx), 3)
                arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rdi), 4)
                arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rsi_2), 5)
                arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rcx_1), 6)
                arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rax_4), 7)
                arg14 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                    _mm256_cvtepu16_epi32(arg1[0].o), 0xffffff01))
            
            arg38 = _mm256_mask_storeu_ps(k4_9, _mm256_mask_mov_ps(k5_13, arg14))
            arg1 = __vpbroadcastd_ymmqq_memd(0x2000000)
            arg14 = _mm256_mask_and_epi32(k0_3, arg22, arg1)
            int64_t k5_14 = _mm256_mask_test_epi32_mask(k4_9, arg22, arg1)
            _kortest_mask8_u8(k5_14, k5_14)
            
            if (not(cond:29))
                char temp0_249 = _cvtmask32_u32(k5_14)
                
                if ((temp0_249 & 1) == 0)
                    if ((temp0_249 & 2) != 0)
                        goto label_14016b3bb
                    
                    goto label_14016aab3
                
                arg15[0].o = __vpbroadcastw_xmmdq_memw(*zmm27[0].o)
                
                if ((temp0_249 & 2) != 0)
                label_14016b3bb:
                    uint16_t* rax_7 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm27[0].o, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_7, 1)
                    
                    if ((temp0_249 & 4) == 0)
                        goto label_14016aabd
                    
                    goto label_14016b3d1
                
            label_14016aab3:
                
                if ((temp0_249 & 4) == 0)
                label_14016aabd:
                    
                    if ((temp0_249 & 8) != 0)
                        goto label_14016b3ec
                    
                    goto label_14016aac7
                
            label_14016b3d1:
                arg1[0].o = _mm256_extracti32x4_epi32(k0_3, zmm27, 1)
                arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 2)
                
                if ((temp0_249 & 8) != 0)
                label_14016b3ec:
                    arg1[0].o = _mm256_extracti32x4_epi32(k0_3, zmm27, 1)
                    uint16_t* rax_9 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_9, 3)
                    
                    if ((temp0_249 & 0x10) == 0)
                        goto label_14016aad1
                    
                    goto label_14016b40e
                
            label_14016aac7:
                
                if ((temp0_249 & 0x10) != 0)
                label_14016b40e:
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg32[0].o, 4)
                    
                    if ((temp0_249 & 0x20) != 0)
                    label_14016b41d:
                        uint16_t* rax_11 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg32[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_11, 5)
                        
                        if ((temp0_249 & 0x40) == 0)
                            goto label_14016aae5
                        
                        goto label_14016b433
                else
                label_14016aad1:
                    
                    if ((temp0_249 & 0x20) != 0)
                        goto label_14016b41d
                
                int64_t k1_41
                
                if ((temp0_249 & 0x40) != 0)
                label_14016b433:
                    arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg32, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 6)
                    arg4 = __vpbroadcastq_ymmqq_memq(2)
                    k1_41 = _kshiftri_mask8(k5_14, 4)
                    cond:6 = temp0_249 == 0
                    cond:9 = temp0_249 == 0
                    cond:10 = temp0_249 == 0
                    cond:14 = temp0_249 == 0
                    cond:15 = temp0_249 == 0
                    cond:18 = temp0_249 == 0
                    cond:19 = temp0_249 == 0
                    cond:20 = temp0_249 == 0
                    cond:25 = temp0_249 == 0
                    cond:26 = temp0_249 == 0
                    cond:27 = temp0_249 == 0
                    cond:28 = temp0_249 == 0
                    cond:30 = temp0_249 == 0
                    cond:31 = temp0_249 == 0
                    cond:32 = temp0_249 == 0
                    cond:33 = temp0_249 == 0
                    cond:34 = temp0_249 == 0
                    cond:35 = temp0_249 == 0
                    cond:36 = temp0_249 == 0
                    cond:37 = temp0_249 == 0
                    cond:38 = temp0_249 == 0
                    cond:39 = temp0_249 == 0
                    cond:40 = temp0_249 == 0
                    cond:41 = temp0_249 == 0
                    cond:42 = temp0_249 == 0
                    
                    if (temp0_249 s< 0)
                    label_14016b45b:
                        arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg32, 1)
                        uint16_t* rax_13 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_13, 7)
                else
                label_14016aae5:
                    arg4 = __vpbroadcastq_ymmqq_memq(2)
                    k1_41 = _kshiftri_mask8(k5_14, 4)
                    cond:6 = temp0_249 == 0
                    cond:9 = temp0_249 == 0
                    cond:10 = temp0_249 == 0
                    cond:14 = temp0_249 == 0
                    cond:15 = temp0_249 == 0
                    cond:18 = temp0_249 == 0
                    cond:19 = temp0_249 == 0
                    cond:20 = temp0_249 == 0
                    cond:25 = temp0_249 == 0
                    cond:26 = temp0_249 == 0
                    cond:27 = temp0_249 == 0
                    cond:28 = temp0_249 == 0
                    cond:30 = temp0_249 == 0
                    cond:31 = temp0_249 == 0
                    cond:32 = temp0_249 == 0
                    cond:33 = temp0_249 == 0
                    cond:34 = temp0_249 == 0
                    cond:35 = temp0_249 == 0
                    cond:36 = temp0_249 == 0
                    cond:37 = temp0_249 == 0
                    cond:38 = temp0_249 == 0
                    cond:39 = temp0_249 == 0
                    cond:40 = temp0_249 == 0
                    cond:41 = temp0_249 == 0
                    cond:42 = temp0_249 == 0
                    
                    if (temp0_249 s< 0)
                        goto label_14016b45b
                
                zmm27 = _mm256_mask_add_epi64(k5_14, zmm27, arg4)
                arg32 = _mm256_mask_add_epi64(k1_41, arg32, arg4)
                arg15 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                    _mm256_cvtepu16_epi32(arg15[0].o), 0xffffff01))
            
            arg39 = _mm256_mask_storeu_ps(k4_9, 
                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, arg14, arg14), arg15))
            arg1 = __vpbroadcastd_ymmqq_memd(0x4000000)
            arg14 = _mm256_mask_and_epi32(k0_3, arg22, arg1)
            int64_t k1_43 = _mm256_mask_test_epi32_mask(k4_9, arg22, arg1)
            _kortest_mask8_u8(k1_43, k1_43)
            
            if (not(cond:33))
                char temp0_260 = _cvtmask32_u32(k1_43)
                
                if ((temp0_260 & 1) == 0)
                    if ((temp0_260 & 2) != 0)
                        goto label_14016b487
                    
                    goto label_14016ab6d
                
                arg15[0].o = __vpbroadcastw_xmmdq_memw(*zmm27[0].o)
                
                if ((temp0_260 & 2) != 0)
                label_14016b487:
                    uint64_t rax_15 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm27[0].o, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_15, 1)
                    
                    if ((temp0_260 & 4) == 0)
                        goto label_14016ab77
                    
                    goto label_14016b49d
                
            label_14016ab6d:
                
                if ((temp0_260 & 4) == 0)
                label_14016ab77:
                    
                    if ((temp0_260 & 8) != 0)
                        goto label_14016b4b8
                    
                    goto label_14016ab81
                
            label_14016b49d:
                arg1[0].o = _mm256_extracti32x4_epi32(k0_3, zmm27, 1)
                arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 2)
                
                if ((temp0_260 & 8) != 0)
                label_14016b4b8:
                    arg1[0].o = _mm256_extracti32x4_epi32(k0_3, zmm27, 1)
                    uint16_t* rax_17 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_17, 3)
                    
                    if ((temp0_260 & 0x10) == 0)
                        goto label_14016ab8b
                    
                    goto label_14016b4da
                
            label_14016ab81:
                
                if ((temp0_260 & 0x10) != 0)
                label_14016b4da:
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg32[0].o, 4)
                    
                    if ((temp0_260 & 0x20) != 0)
                    label_14016b4e9:
                        uint16_t* rax_19 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg32[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_19, 5)
                        
                        if ((temp0_260 & 0x40) == 0)
                            goto label_14016ab9f
                        
                        goto label_14016b4ff
                else
                label_14016ab8b:
                    
                    if ((temp0_260 & 0x20) != 0)
                        goto label_14016b4e9
                
                if ((temp0_260 & 0x40) != 0)
                label_14016b4ff:
                    arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg32, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 6)
                    cond:6 = temp0_260 == 0
                    cond:9 = temp0_260 == 0
                    cond:10 = temp0_260 == 0
                    cond:14 = temp0_260 == 0
                    cond:15 = temp0_260 == 0
                    cond:18 = temp0_260 == 0
                    cond:19 = temp0_260 == 0
                    cond:20 = temp0_260 == 0
                    cond:25 = temp0_260 == 0
                    cond:26 = temp0_260 == 0
                    cond:27 = temp0_260 == 0
                    cond:28 = temp0_260 == 0
                    cond:30 = temp0_260 == 0
                    cond:31 = temp0_260 == 0
                    cond:32 = temp0_260 == 0
                    cond:34 = temp0_260 == 0
                    cond:35 = temp0_260 == 0
                    cond:36 = temp0_260 == 0
                    cond:37 = temp0_260 == 0
                    cond:38 = temp0_260 == 0
                    cond:39 = temp0_260 == 0
                    cond:40 = temp0_260 == 0
                    cond:41 = temp0_260 == 0
                    cond:42 = temp0_260 == 0
                    
                    if (temp0_260 s< 0)
                    label_14016b518:
                        arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg32, 1)
                        uint16_t* rax_21 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_21, 7)
                else
                label_14016ab9f:
                    cond:6 = temp0_260 == 0
                    cond:9 = temp0_260 == 0
                    cond:10 = temp0_260 == 0
                    cond:14 = temp0_260 == 0
                    cond:15 = temp0_260 == 0
                    cond:18 = temp0_260 == 0
                    cond:19 = temp0_260 == 0
                    cond:20 = temp0_260 == 0
                    cond:25 = temp0_260 == 0
                    cond:26 = temp0_260 == 0
                    cond:27 = temp0_260 == 0
                    cond:28 = temp0_260 == 0
                    cond:30 = temp0_260 == 0
                    cond:31 = temp0_260 == 0
                    cond:32 = temp0_260 == 0
                    cond:34 = temp0_260 == 0
                    cond:35 = temp0_260 == 0
                    cond:36 = temp0_260 == 0
                    cond:37 = temp0_260 == 0
                    cond:38 = temp0_260 == 0
                    cond:39 = temp0_260 == 0
                    cond:40 = temp0_260 == 0
                    cond:41 = temp0_260 == 0
                    cond:42 = temp0_260 == 0
                    
                    if (temp0_260 s< 0)
                        goto label_14016b518
                
                arg15 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                    _mm256_cvtepu16_epi32(arg15[0].o), 0xffffff01))
            
            arg1 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, arg14, arg14), arg15)
            arg40 = _mm256_mask_storeu_ps(k4_9, arg1)
        
        int64_t k1_47 = _kand_mask8(
            _kxor_mask8(k3_3, __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_3, arg18, 2)), 
            arg13)
        _kortest_mask8_u8(k1_47, k1_47)
        
        if (not(cond:20))
            int64_t k3_4 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg13, arg18, 6)
            _kortest_mask8_u8(k3_4, k3_4)
            
            if (not(cond:28))
                arg1[0].o = zx.o(0)
                arg38 = _mm256_mask_storeu_ps(k3_4, arg1)
                arg39 = _mm256_mask_storeu_ps(k3_4, arg1)
                arg40 = _mm256_mask_storeu_ps(k3_4, arg1)
            
            int64_t k1_48 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_47, arg18, 6, 4)
            _kortest_mask8_u8(k1_48, k1_48)
            
            if (not(cond:32))
                arg1[0].o = zx.o(0)
                arg38 = _mm256_mask_storeu_ps(k1_48, arg1)
                arg39 = _mm256_mask_storeu_ps(k1_48, arg1)
                arg40 = _mm256_mask_storeu_ps(k1_48, arg1)

int64_t k2_14 = _mm256_cmp_epi32_mask(arg13, arg28, arg29, 4)
_kortest_mask8_u8(k2_14, k2_14)

if (not(cond:6))
    arg1 = _mm256_mask_mullo_epi32(k0_3, arg29, arg37)
    arg14[0].o = _mm256_extracti128_si256(arg1, 1)
    arg15 = _mm256_cvtepi32_epi64(arg14[0].o)
    arg29 = _mm256_mask_cvtepi32_epi64(k0_3, arg1[0].o)
    arg1 = _mm256_mask_add_epi64(k0_3, arg29, arg30)
    arg14 = _mm256_mask_add_epi64(k0_3, arg15, arg31)
    arg27 = _mm256_mask_add_epi64(k0_3, arg14, arg26)
    arg28 = _mm256_mask_add_epi64(k0_3, arg1, arg25)
    int64_t k3_5 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg18, 1)
    _kortest_mask8_u8(k3_5, k3_5)
    
    if (not(cond:10))
        arg1 = __vpbroadcastd_ymmqq_memd(0x7000000)
        arg14 = _mm256_mask_and_epi32(k0_3, arg22, arg1)
        uint64_t k4_10 = _mm256_mask_testn_epi32_mask(k3_5, arg22, arg1)
        _kortest_mask8_u8(k4_10, k4_10)
        
        if (not(cond:15))
            arg1 = _mm256_mask_add_epi64(k0_3, arg24, arg31)
            arg4 = __vpbroadcastq_ymmqq_memq(4)
            zmm4 = _mm256_mask_add_epi64(k0_3, _mm256_mask_add_epi64(k0_3, arg23, arg30), arg29)
            arg1 = _mm256_add_epi64(arg1, arg15)
            arg16 = _mm256_add_epi64(arg1, arg4)
            arg4 = _mm256_add_epi64(zmm4, arg4)
            uint64_t k5_15 = _kshiftri_mask8(k4_10, 4)
            int64_t k1_49 = __kmovq_maskmskw_masku64_avx512(k4_10)
            arg32[0].o = _mm_mask_xor_epi32(k0_3, arg32[0].o, arg32[0].o)
            int64_t k1_50
            char temp0_290
            temp0_290, k1_50 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_49, *(arg8 + arg4[0].q))
            arg32[0].o = temp0_290
            int64_t k1_51 = __kmovq_maskmskw_masku64_avx512(k5_15)
            arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
            int64_t k1_52
            char temp0_292
            temp0_292, k1_52 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_51, *(arg8 + arg16[0]))
            arg4[0].o = temp0_292
            arg16 = __vpbroadcastq_ymmqq_memq(8)
            zmm27 = _mm256_mask_add_epi64(k0_3, arg1, arg16)
            arg16 = _mm256_add_epi64(zmm4, arg16)
            int64_t k1_53 = __kmovq_maskmskw_masku64_avx512(k4_10)
            arg33[0].o = _mm_mask_xor_epi32(k0_3, arg33[0].o, arg33[0].o)
            int64_t k1_54
            char temp0_297
            temp0_297, k1_54 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_53, *(arg8 + arg16[0]))
            arg33[0].o = temp0_297
            int64_t k1_55 = __kmovq_maskmskw_masku64_avx512(k5_15)
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_56
            char temp0_299
            temp0_299, k1_56 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_55, *(arg8 + zmm27[0].q))
            arg16[0].o = temp0_299
            arg4 = _mm256_insertf32x4(k0_3, arg32, arg4[0].o, 1)
            arg16 = _mm256_insertf32x4(k0_3, arg33, arg16[0].o, 1)
            arg32 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(k0_3, 0xc)
            arg1 = _mm256_mask_add_epi64(k0_3, arg1, arg32)
            zmm4 = _mm256_mask_add_epi64(k0_3, zmm4, arg32)
            int64_t k1_57 = __kmovq_maskmskw_masku64_avx512(k4_10)
            arg32[0].o = _mm_mask_xor_epi32(k0_3, arg32[0].o, arg32[0].o)
            int64_t k1_58
            char temp0_306
            temp0_306, k1_58 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_57, *(arg8 + zmm4[0]))
            arg32[0].o = temp0_306
            int64_t k5_16
            char temp0_307
            temp0_307, k5_16 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_15, *(arg8 + arg1[0].q))
            arg1 = _mm256_insertf32x4(k0_3, arg32, temp0_307, 1)
            arg42 = _mm256_mask_storeu_ps(k4_10, arg4)
            arg43 = _mm256_mask_storeu_ps(k4_10, arg16)
            arg44 = _mm256_mask_storeu_ps(k4_10, arg1)
        
        int64_t k3_6 = _mm256_mask_test_epi32_mask(k3_5, arg14, arg14)
        _kortest_mask8_u8(k3_6, k3_6)
        
        if (not(cond:19))
            arg1 = _mm256_slli_epi32(arg19, 0x1f)
            int64_t k4_11 = _mm256_movepi32_mask(arg1)
            arg14[0].o = zx.o(0)
            int64_t k1_59 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_6, arg14, arg1)
            _kortest_mask8_u8(k1_59, k1_59)
            
            if (cond:27)
                arg4 = _mm256_mask_mov_epi64(k0_3, arg28)
                arg14 = _mm256_mask_mov_epi64(k0_3, arg27)
            else
                arg1 = __vpbroadcastq_ymmqq_memq(4)
                _mm256_mask_mov_epi64(k0_3, arg28)
                arg4 = _mm256_mask_add_epi64(k1_59, arg28, arg1)
                int64_t k5_17 = _kshiftri_mask8(k1_59, 4)
                _mm256_mask_mov_epi64(k0_3, arg27)
                arg14 = _mm256_mask_add_epi64(k5_17, arg27, arg1)
                zmm4 = _mm256_mask_add_epi64(k0_3, arg24, arg31)
                arg16 =
                    _mm256_mask_add_epi64(k0_3, _mm256_mask_add_epi64(k0_3, arg23, arg30), arg29)
                zmm4 = _mm256_add_epi64(_mm256_add_epi64(zmm4, arg15), arg1)
                arg1 = _mm256_add_epi64(arg16, arg1)
                int64_t k5_18 = _kshiftri_mask8(k1_59, 4)
                arg16[0].o = zx.o(0)
                arg32[0].o = _mm_mask_xor_epi32(k0_3, arg32[0].o, arg32[0].o)
                int64_t k1_60
                char temp0_325
                temp0_325, k1_60 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_59, *(arg8 + arg1[0].q))
                arg32[0].o = temp0_325
                int64_t k5_19
                char temp0_326
                temp0_326, k5_19 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_18, *(arg8 + zmm4[0]))
                arg16[0].o = temp0_326
                zmm4 = _mm256_insertf32x4(k0_3, arg32, arg16[0].o, 1)
            
            arg42 = _mm256_mask_storeu_ps(k3_6, _mm256_mask_mov_ps(k4_11, zmm4))
            arg1 = __vpbroadcastd_ymmqq_memd(0x2000000)
            zmm4 = _mm256_mask_and_epi32(k0_3, arg22, arg1)
            int64_t k1_61 = _mm256_mask_test_epi32_mask(k3_6, arg22, arg1)
            _kortest_mask8_u8(k1_61, k1_61)
            
            if (not(cond:38))
                arg1 = __vpbroadcastq_ymmqq_memq(4)
                _mm256_mask_mov_epi64(k0_3, arg4)
                arg32 = _mm256_mask_add_epi64(k1_61, arg4, arg1)
                int64_t k4_12 = _kshiftri_mask8(k1_61, 4)
                int64_t k5_20 = _kshiftri_mask8(k1_61, 4)
                cond:9 = true
                cond:14 = true
                cond:18 = true
                cond:25 = true
                cond:26 = true
                cond:30 = true
                cond:31 = true
                cond:34 = true
                cond:35 = true
                cond:36 = true
                cond:37 = true
                cond:39 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                int64_t k1_62
                char temp0_338
                temp0_338, k1_62 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_61, *arg4[0].q)
                arg16[0].o = temp0_338
                arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                int64_t k5_21
                char temp0_340
                temp0_340, k5_21 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_20, *arg14[0].q)
                arg4[0].o = temp0_340
                arg14 = _mm256_mask_add_epi64(k4_12, arg14, arg1)
                arg16 = _mm256_insertf128_ps(arg16, arg4[0].o, 1)
                arg4 = _mm256_mask_mov_epi64(k0_3, arg32)
            
            arg43 = _mm256_mask_storeu_ps(k3_6, 
                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, zmm4, zmm4), arg16))
            arg1 = __vpbroadcastd_ymmqq_memd(0x4000000)
            zmm4 = _mm256_mask_and_epi32(k0_3, arg22, arg1)
            int64_t k1_64 = _mm256_mask_test_epi32_mask(k3_6, arg22, arg1)
            _kortest_mask8_u8(k1_64, k1_64)
            
            if (not(cond:37))
                int64_t k4_13 = _kshiftri_mask8(k1_64, 4)
                arg1[0].o = zx.o(0)
                cond:9 = true
                cond:14 = true
                cond:18 = true
                cond:25 = true
                cond:26 = true
                cond:30 = true
                cond:31 = true
                cond:34 = true
                cond:35 = true
                cond:36 = true
                cond:39 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                int64_t k1_65
                char temp0_349
                temp0_349, k1_65 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_64, *arg4[0].q)
                arg16[0].o = temp0_349
                int64_t k4_14
                char temp0_350
                temp0_350, k4_14 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_13, *arg14[0].q)
                arg1[0].o = temp0_350
                arg14 = _mm256_insertf128_ps(arg16, arg1[0].o, 1)
            
            arg1 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, zmm4, zmm4), arg14)
            arg44 = _mm256_mask_storeu_ps(k3_6, arg1)
    
    _ktest_mask8_u8(k2_14, k0_3)
    
    if (not(cond:14))
        int64_t k1_67 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg18, 3)
        _kortest_mask8_u8(k1_67, k1_67)
        
        if (not(cond:18))
            __return_addr.d = _store_mask32(k1_67)
            arg_20[0].w = _store_mask16(arg12)
            arg1[0].o = zx.o(0)
            arg_100 = arg1
            arg_e0 = arg1
            arg_c0 = arg1
            arg_a0 = arg1
            arg_80 = arg1
            arg_60 = arg1
            int64_t k4_15 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                _mm256_movepi32_mask(_mm256_slli_epi32(arg19, 0x1f)), arg18, 3)
            uint64_t k5_22 = _kand_mask8(k2_14, k4_15)
            _kortest_mask8_u8(k5_22, k5_22)
            
            if (not(cond:26))
                arg1 = __vpbroadcastq_ymmqq_memq(4)
                int64_t k6_3 = _kshiftri_mask8(k5_22, 4)
                _mm256_mask_mov_epi64(k0_3, arg26)
                arg14 = _mm256_mask_add_epi64(k6_3, arg26, arg1)
                _mm256_mask_mov_epi64(k0_3, arg25)
                arg4 = _mm256_mask_add_epi64(k5_22, arg25, arg1)
                uint64_t k1_69 = _kshiftri_mask8(k5_22, 4)
                cond:9 = true
                cond:25 = true
                cond:30 = true
                cond:31 = true
                cond:34 = true
                cond:35 = true
                cond:36 = true
                cond:39 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                arg1[0].o = zx.o(0)
                int64_t k7_4
                char temp0_362
                temp0_362, k7_4 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                    __kmovq_maskmskw_masku64_avx512(k5_22), *arg25[0])
                arg1[0].o = temp0_362
                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                int64_t k7_6
                char temp0_364
                temp0_364, k7_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                    __kmovq_maskmskw_masku64_avx512(k1_69), *arg26[0])
                zmm4[0].o = temp0_364
                arg_c0 = _mm256_mask_storeu_ps(k4_15, _mm256_insertf128_ps(arg1, zmm4[0].o, 1))
                arg1 = __vpbroadcastq_ymmqq_memq(8)
                arg25 = _mm256_mask_add_epi64(k5_22, arg25, arg1)
                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                int64_t k5_23
                char temp0_370
                temp0_370, k5_23 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_22, *arg4[0].q)
                zmm4[0].o = temp0_370
                arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                int64_t k1_70
                char temp0_372
                temp0_372, k1_70 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_69, *arg14[0].q)
                arg4[0].o = temp0_372
                arg26 = _mm256_mask_add_epi64(k6_3, arg26, arg1)
                arg_60 = _mm256_mask_storeu_ps(k4_15, _mm256_insertf128_ps(zmm4, arg4[0].o, 1))
            
            int64_t k4_16 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_3, arg18, 3)
            int64_t k5_24 =
                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_16, arg22, 0x2000000)
            uint64_t k6_4 = _kand_mask8(k2_14, k5_24)
            _kortest_mask8_u8(k6_4, k6_4)
            
            if (not(cond:31))
                arg1 = __vpbroadcastq_ymmqq_memq(4)
                int64_t k7_7 = _kshiftri_mask8(k6_4, 4)
                _mm256_mask_mov_epi64(k0_3, arg26)
                arg14 = _mm256_mask_add_epi64(k7_7, arg26, arg1)
                _mm256_mask_mov_epi64(k0_3, arg25)
                arg4 = _mm256_mask_add_epi64(k6_4, arg25, arg1)
                uint64_t k1_71 = _kshiftri_mask8(k6_4, 4)
                cond:9 = true
                cond:25 = true
                cond:30 = true
                cond:34 = true
                cond:35 = true
                cond:36 = true
                cond:39 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                int64_t k3_7 = __kmovq_maskmskw_masku64_avx512(k6_4)
                arg1[0].o = zx.o(0)
                int64_t k3_8
                char temp0_381
                temp0_381, k3_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_7, *arg25[0])
                arg1[0].o = temp0_381
                int64_t k3_9 = __kmovq_maskmskw_masku64_avx512(k1_71)
                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                int64_t k3_10
                char temp0_383
                temp0_383, k3_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_9, *arg26[0])
                zmm4[0].o = temp0_383
                arg_e0 = _mm256_mask_storeu_ps(k5_24, _mm256_insertf128_ps(arg1, zmm4[0].o, 1))
                arg1 = __vpbroadcastq_ymmqq_memq(8)
                arg25 = _mm256_mask_add_epi64(k6_4, arg25, arg1)
                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                int64_t k6_5
                char temp0_389
                temp0_389, k6_5 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_4, *arg4[0].q)
                zmm4[0].o = temp0_389
                arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                int64_t k1_72
                char temp0_391
                temp0_391, k1_72 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_71, *arg14[0].q)
                arg4[0].o = temp0_391
                arg26 = _mm256_mask_add_epi64(k7_7, arg26, arg1)
                arg_80 = _mm256_mask_storeu_ps(k5_24, _mm256_insertf128_ps(zmm4, arg4[0].o, 1))
            
            arg12 = _load_mask16(arg_20[0].w)
            int64_t k4_17 =
                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_16, arg22, 0x4000000)
            uint64_t k5_25 = _kand_mask8(k2_14, k4_17)
            _kortest_mask8_u8(k5_25, k5_25)
            
            if (not(cond:36))
                arg1 = __vpbroadcastq_ymmqq_memq(4)
                uint64_t k1_73 = _kshiftri_mask8(k5_25, 4)
                cond:9 = true
                cond:25 = true
                cond:30 = true
                cond:34 = true
                cond:35 = true
                cond:39 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                int64_t k3_11 = __kmovq_maskmskw_masku64_avx512(k5_25)
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                int64_t k3_12
                char temp0_397
                temp0_397, k3_12 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_11, *arg25[0])
                arg14[0].o = temp0_397
                arg4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg4[0].o, arg4[0].o)
                int64_t k3_14
                char temp0_399
                temp0_399, k3_14 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                    __kmovq_maskmskw_masku64_avx512(k1_73), *arg26[0])
                arg4[0].o = temp0_399
                arg26 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_25, 4), arg26, arg1)
                arg25 = _mm256_mask_add_epi64(k5_25, arg25, arg1)
                arg1 = _mm256_insertf128_ps(arg14, arg4[0].o, 1)
                arg_100 = _mm256_mask_storeu_ps(k4_17, arg1)
                arg1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg1[0].o, arg1[0].o)
                int64_t k5_26
                char temp0_405
                temp0_405, k5_26 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_25, *arg25[0])
                arg1[0].o = temp0_405
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                int64_t k1_74
                char temp0_407
                temp0_407, k1_74 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_73, *arg26[0])
                arg14[0].o = temp0_407
                arg_a0 = _mm256_mask_storeu_ps(k4_17, _mm256_insertf128_ps(arg1, arg14[0].o, 1))
            
            arg1 = _mm256_mask_add_epi64(k0_3, arg24, arg31)
            arg14 = __vpbroadcastq_ymmqq_memq(4)
            arg4 = _mm256_mask_add_epi64(k0_3, _mm256_mask_add_epi64(k0_3, arg23, arg30), arg29)
            arg1 = _mm256_add_epi64(_mm256_add_epi64(arg1, arg15), arg14)
            arg14 = _mm256_add_epi64(arg4, arg14)
            uint64_t k4_18 = _load_mask32(__return_addr.d)
            int64_t k1_75 = _kshiftri_mask8(k4_18, 4)
            int64_t k3_16 = __kmovq_maskmskw_masku64_avx512(k4_18)
            arg4[0].o = zx.o(0)
            int64_t k3_17
            char temp0_417
            temp0_417, k3_17 =
                __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k3_16, *(arg8 + arg14[0].q))
            arg4[0].o = temp0_417
            arg14[0].o = zx.o(0)
            int64_t k1_76
            char temp0_418
            temp0_418, k1_76 =
                __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_75, *(arg8 + arg1[0].q))
            arg14[0].o = temp0_418
            arg1 = _mm256_inserti128_si256(arg4, arg14[0].o, 1)
            arg14 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                _mm256_srli_epi32(arg1, 0xa), 0x7ff)
            arg4 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_3, 
                _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, arg1, 0x3ff), 0xfffffe01)), 
                0x43ff8000)
            arg25 = _mm256_mask_load_ps(k0_3, arg_a0)
            zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_60, arg4, arg_c0)
            arg4 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
            arg14 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg14, arg4))
            arg26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_3, 1023f)
            arg14 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_mask_div_ps(k0_3, arg14, arg26), arg_80, 
                arg_e0)
            arg1 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                _mm256_mask_div_ps(k0_3, 
                    _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(arg1, 0x15), arg4)), 
                    arg26), 
                k0_3, arg25, arg_100)
            arg42 = _mm256_mask_storeu_ps(k4_18, zmm4)
            arg43 = _mm256_mask_storeu_ps(k4_18, arg14)
            arg44 = _mm256_mask_storeu_ps(k4_18, arg1)
        
        k0_3 = _kxor_mask8(__vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_3, arg18, 3), k0_3)
        _ktest_mask8_u8(k2_14, k0_3)
        
        if (not(cond:25))
            int64_t k3_18 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg18, 2)
            _kortest_mask8_u8(k3_18, k3_18)
            
            if (not(cond:30))
                arg1 = _mm256_slli_epi32(arg19, 0x1f)
                int64_t k4_19 = _mm256_movepi32_mask(arg1)
                arg14[0].o = zx.o(0)
                int64_t k1_78 =
                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_18, arg14, arg1)
                _kortest_mask8_u8(k1_78, k1_78)
                
                if (not(cond:35))
                    arg1 = __vpbroadcastq_ymmqq_memq(2)
                    arg28 = _mm256_mask_add_epi64(k1_78, arg28, arg1)
                    int64_t k5_27 = _kshiftri_mask8(k1_78, 4)
                    arg27 = _mm256_mask_add_epi64(k5_27, arg27, arg1)
                    arg1 = _mm256_mask_add_epi64(k0_3, arg24, arg31)
                    arg14 = _mm256_mask_add_epi64(k0_3, arg23, arg30)
                    arg4 = __vpbroadcastq_ymmqq_memq(4)
                    arg14 = _mm256_mask_add_epi64(k0_3, arg14, arg29)
                    arg1 = _mm256_mask_add_epi64(k5_27, _mm256_add_epi64(arg1, arg15), arg4)
                    arg14 = _mm256_mask_add_epi64(k1_78, arg14, arg4)
                    int64_t r10_1 = arg14[0].q
                    int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                    arg14[0].o = _mm256_extracti128_si256(arg14, 1)
                    int64_t r11_2 = arg14[0].q
                    int64_t r14_1 = __vpextrq_gpr64q_xmmdq_immb(arg14[0].o, 1)
                    int64_t rdi_3 = arg1[0].q
                    int64_t rsi_3 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                    arg1[0].o = _mm256_extracti128_si256(arg1, 1)
                    int64_t rcx_2 = arg1[0].q
                    int64_t rax_5 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                    arg1[0].o = zx.o(*(arg8 + r10_1))
                    arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + r9_2), 1)
                    arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + r11_2), 2)
                    arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + r14_1), 3)
                    arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rdi_3), 4)
                    arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rsi_3), 5)
                    arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rcx_2), 6)
                    arg1[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg1[0].o, *(arg8 + rax_5), 7)
                    arg14 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                        _mm256_cvtepu16_epi32(arg1[0].o), 0xffffff01))
                
                arg42 = _mm256_mask_storeu_ps(k3_18, _mm256_mask_mov_ps(k4_19, arg14))
                arg1 = __vpbroadcastd_ymmqq_memd(0x2000000)
                arg14 = _mm256_mask_and_epi32(k0_3, arg22, arg1)
                int64_t k4_20 = _mm256_mask_test_epi32_mask(k3_18, arg22, arg1)
                _kortest_mask8_u8(k4_20, k4_20)
                
                if (not(cond:40))
                    char temp0_494 = _cvtmask32_u32(k4_20)
                    
                    if ((temp0_494 & 1) == 0)
                        if ((temp0_494 & 2) != 0)
                            goto label_14016b932
                        
                        goto label_14016b57f
                    
                    arg15[0].o = __vpbroadcastw_xmmdq_memw(*arg28[0].o)
                    
                    if ((temp0_494 & 2) != 0)
                    label_14016b932:
                        uint64_t rax_27 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg28[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_27, 1)
                        
                        if ((temp0_494 & 4) == 0)
                            goto label_14016b589
                        
                        goto label_14016b948
                    
                label_14016b57f:
                    
                    if ((temp0_494 & 4) == 0)
                    label_14016b589:
                        
                        if ((temp0_494 & 8) != 0)
                            goto label_14016b963
                        
                        goto label_14016b593
                    
                label_14016b948:
                    arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg28, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 2)
                    
                    if ((temp0_494 & 8) != 0)
                    label_14016b963:
                        arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg28, 1)
                        uint16_t* rax_29 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_29, 3)
                        
                        if ((temp0_494 & 0x10) == 0)
                            goto label_14016b59d
                        
                        goto label_14016b985
                    
                label_14016b593:
                    
                    if ((temp0_494 & 0x10) != 0)
                    label_14016b985:
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg27[0].o, 4)
                        
                        if ((temp0_494 & 0x20) != 0)
                        label_14016b994:
                            uint16_t* rax_31 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg27[0].o, 1)
                            arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_31, 5)
                            
                            if ((temp0_494 & 0x40) == 0)
                                goto label_14016b5b1
                            
                            goto label_14016b9aa
                    else
                    label_14016b59d:
                        
                        if ((temp0_494 & 0x20) != 0)
                            goto label_14016b994
                    
                    int64_t k1_79
                    
                    if ((temp0_494 & 0x40) != 0)
                    label_14016b9aa:
                        arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg27, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 6)
                        arg4 = __vpbroadcastq_ymmqq_memq(2)
                        k1_79 = _kshiftri_mask8(k4_20, 4)
                        cond:9 = temp0_494 == 0
                        cond:34 = temp0_494 == 0
                        cond:39 = temp0_494 == 0
                        cond:41 = temp0_494 == 0
                        cond:42 = temp0_494 == 0
                        
                        if (temp0_494 s< 0)
                        label_14016b9d2:
                            arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg27, 1)
                            uint16_t* rax_33 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                            arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_33, 7)
                    else
                    label_14016b5b1:
                        arg4 = __vpbroadcastq_ymmqq_memq(2)
                        k1_79 = _kshiftri_mask8(k4_20, 4)
                        cond:9 = temp0_494 == 0
                        cond:34 = temp0_494 == 0
                        cond:39 = temp0_494 == 0
                        cond:41 = temp0_494 == 0
                        cond:42 = temp0_494 == 0
                        
                        if (temp0_494 s< 0)
                            goto label_14016b9d2
                    
                    arg28 = _mm256_mask_add_epi64(k4_20, arg28, arg4)
                    arg27 = _mm256_mask_add_epi64(k1_79, arg27, arg4)
                    arg15 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                        _mm256_cvtepu16_epi32(arg15[0].o), 0xffffff01))
                
                arg43 = _mm256_mask_storeu_ps(k3_18, 
                    _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, arg14, arg14), arg15))
                arg1 = __vpbroadcastd_ymmqq_memd(0x4000000)
                arg14 = _mm256_mask_and_epi32(k0_3, arg22, arg1)
                int64_t k1_81 = _mm256_mask_test_epi32_mask(k3_18, arg22, arg1)
                _kortest_mask8_u8(k1_81, k1_81)
                
                if (not(cond:42))
                    char temp0_505 = _cvtmask32_u32(k1_81)
                    
                    if ((temp0_505 & 1) == 0)
                        if ((temp0_505 & 2) != 0)
                            goto label_14016b9fe
                        
                        goto label_14016b639
                    
                    arg15[0].o = __vpbroadcastw_xmmdq_memw(*arg28[0].o)
                    
                    if ((temp0_505 & 2) != 0)
                    label_14016b9fe:
                        uint64_t rax_35 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg28[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_35, 1)
                        
                        if ((temp0_505 & 4) == 0)
                            goto label_14016b643
                        
                        goto label_14016ba14
                    
                label_14016b639:
                    
                    if ((temp0_505 & 4) == 0)
                    label_14016b643:
                        
                        if ((temp0_505 & 8) != 0)
                            goto label_14016ba2f
                        
                        goto label_14016b64d
                    
                label_14016ba14:
                    arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg28, 1)
                    arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 2)
                    
                    if ((temp0_505 & 8) != 0)
                    label_14016ba2f:
                        arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg28, 1)
                        uint16_t* rax_37 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_37, 3)
                        
                        if ((temp0_505 & 0x10) == 0)
                            goto label_14016b657
                        
                        goto label_14016ba51
                    
                label_14016b64d:
                    
                    if ((temp0_505 & 0x10) != 0)
                    label_14016ba51:
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg27[0].o, 4)
                        
                        if ((temp0_505 & 0x20) != 0)
                        label_14016ba60:
                            uint16_t* rax_39 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg27[0].o, 1)
                            arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_39, 5)
                            
                            if ((temp0_505 & 0x40) == 0)
                                goto label_14016b66b
                            
                            goto label_14016ba76
                    else
                    label_14016b657:
                        
                        if ((temp0_505 & 0x20) != 0)
                            goto label_14016ba60
                    
                    if ((temp0_505 & 0x40) != 0)
                    label_14016ba76:
                        arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg27, 1)
                        arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *arg1[0].q, 6)
                        cond:9 = temp0_505 == 0
                        cond:34 = temp0_505 == 0
                        cond:39 = temp0_505 == 0
                        cond:41 = temp0_505 == 0
                        
                        if (temp0_505 s< 0)
                        label_14016ba8f:
                            arg1[0].o = _mm256_extracti32x4_epi32(k0_3, arg27, 1)
                            int64_t rax_41 = __vpextrq_gpr64q_xmmdq_immb(arg1[0].o, 1)
                            arg15[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg15[0].o, *rax_41, 7)
                    else
                    label_14016b66b:
                        cond:9 = temp0_505 == 0
                        cond:34 = temp0_505 == 0
                        cond:39 = temp0_505 == 0
                        cond:41 = temp0_505 == 0
                        
                        if (temp0_505 s< 0)
                            goto label_14016ba8f
                    
                    arg15 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_3, 
                        _mm256_cvtepu16_epi32(arg15[0].o), 0xffffff01))
                
                arg1 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, arg14, arg14), arg15)
                arg44 = _mm256_mask_storeu_ps(k3_18, arg1)
            
            k0_3 =
                _kxor_mask8(k0_3, __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_3, arg18, 2))
            int64_t k1_84 = _kand_mask8(k2_14, k0_3)
            _kortest_mask8_u8(k1_84, k1_84)
            
            if (not(cond:34))
                int64_t k3_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg18, 6)
                _kortest_mask8_u8(k3_19, k3_19)
                
                if (not(cond:39))
                    arg1[0].o = zx.o(0)
                    arg42 = _mm256_mask_storeu_ps(k3_19, arg1)
                    arg43 = _mm256_mask_storeu_ps(k3_19, arg1)
                    arg44 = _mm256_mask_storeu_ps(k3_19, arg1)
                
                int64_t k1_85 =
                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_84, arg18, 6, 4)
                _kortest_mask8_u8(k1_85, k1_85)
                
                if (not(cond:41))
                    arg1[0].o = zx.o(0)
                    arg42 = _mm256_mask_storeu_ps(k1_85, arg1)
                    arg43 = _mm256_mask_storeu_ps(k1_85, arg1)
                    arg44 = _mm256_mask_storeu_ps(k1_85, arg1)
    
    arg4 = arg38
    zmm4 = arg39
    arg16 = arg40
    arg1 = _mm256_sub_ps(arg42, arg4)
    arg14 = _mm256_sub_ps(arg43, zmm4)
    arg15 = _mm256_sub_ps(arg44, arg16)
    arg1 = _mm256_fmadd_ps(arg1, zmm13, arg4)
    arg14 = _mm256_fmadd_ps(arg14, zmm13, zmm4)
    arg15 = _mm256_fmadd_ps(arg15, zmm13, arg16)
    arg38 = _mm256_mask_storeu_ps(k2_14, arg1)
    arg39 = _mm256_mask_storeu_ps(k2_14, arg14)
    arg40 = _mm256_mask_storeu_ps(k2_14, arg15)

int64_t k1_86 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg12, arg34, zmm6)
_kortest_mask8_u8(k1_86, k1_86)

if (not(cond:9))
    arg1[0].o = zx.o(0)
    arg38 = _mm256_mask_storeu_ps(k1_86, arg1)
    arg39 = _mm256_mask_storeu_ps(k1_86, arg1)
    arg40 = _mm256_mask_storeu_ps(k1_86, arg1)

arg14[0].o = arg38[0].o
arg15[0].o = arg38[4].o
arg4[0].o = arg39[0].o
zmm4[0].o = arg39[2].o
arg16[0].o = arg40[0].o
arg17 = arg40[2].o
arg22[0].o = _mm_mask_xor_ps(k0_3, arg22[0].o, arg22[0].o)
arg1[0].o = _mm_mask_unpacklo_ps(k0_3, arg16[0].o, arg22[0].o)
arg16[0].o = _mm_mask_unpackhi_ps(k0_3, arg16[0].o, arg22[0].o)
zmm6[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg4[0].o)
arg14[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg4[0].o)
arg4[0].o = zmm6[0].q | arg1[0].q << 0x40
int128_t arg_4c0 = arg4[0].o
arg1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm6[0].o, arg1[0].o)
int128_t arg_4d0 = arg1[0].o
arg1[0].o = arg14[0].q | arg16[0] << 0x40
int128_t arg_4e0 = arg1[0].o
arg1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg16[0].o)
int128_t arg_4f0 = arg1[0].o
arg1[0].o = _mm_mask_unpacklo_ps(k0_3, arg17, arg22[0].o)
arg14[0].o = _mm_mask_unpackhi_ps(k0_3, arg17, arg22[0].o)
arg4[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm4[0].o)
arg15[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg15[0].o, zmm4[0].o)
zmm4[0].o = arg4[0].q | arg1[0].q << 0x40
int128_t arg_500 = zmm4[0].o
arg1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg4[0].o, arg1[0].o)
int128_t arg_510 = arg1[0].o
arg1[0].o = arg15[0] | arg14[0].q << 0x40
int128_t arg_520 = arg1[0].o
arg1[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg15[0].o, arg14[0].o)
int128_t arg_530 = arg1[0].o
uint64_t i = zx.q(arg3)
int64_t result
int256_t zmm9

do
    uint64_t rcx_3 = _tzcnt_u64(i)
    int256_t arg_5a0 = zmm9
    result = sx.q(*(&arg_5a0 + ((zx.q(rcx_3.d) & 7) << 2))) * 0x30
    arg1[0].o = (&arg_4c0)[rcx_3]
    *(arg9 + result + 0x20) = arg1[0].o
    i &= rol.q(-2, rcx_3.b)
while (i != 0)

zmm6[0].o = *(arg6 + 0x550)
*(arg6 + 0x560)
arg18[0].o = *(arg6 + 0x570)
zmm9.o = *(arg6 + 0x580)
arg19[0].o = *(arg6 + 0x590)
arg37[0].o = *(arg6 + 0x5a0)
int512_t zmm12
zmm12.o = *(arg6 + 0x5b0)
zmm13[0].o = *(arg6 + 0x5c0)
arg21[0].o = *(arg6 + 0x5d0)
int512_t zmm15
zmm15.o = *(arg6 + 0x5e0)
*(arg6 + 0x5f8)
*(arg6 + 0x600)
*(arg6 + 0x608)
*(arg6 + 0x610)
*(arg6 + 0x618)
*(arg6 + 0x620)
*(arg6 + 0x628)
*(arg6 + 0x630)
_mm256_zeroupper()
return result
