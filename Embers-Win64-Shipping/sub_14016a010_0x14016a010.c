// 函数: sub_14016a010
// 地址: 0x14016a010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t zmm0[0x4]
float zmm3[0x8]
uint128_t zmm11[0x2]
bool cond:0_1

do
    zmm0 = _mm256_cvtepi32_epi64(arg22[0])
    zmm3 = _mm256_mask_add_epi64(arg9, arg34, zmm0)
    int64_t k0 = _mm_mask_test_epi16_mask(arg9, arg16[0].o, arg36[0].o)
    char temp0_2 = _cvtmask32_u32(k0)
    
    if ((temp0_2 & 1) == 0)
        if ((temp0_2 & 2) != 0)
            goto label_140169f46
        
        goto label_14016a03c
    
    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*zmm3[0].q), 0)
    
    if ((temp0_2 & 2) != 0)
    label_140169f46:
        uint32_t rax_74 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
        arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_74, 1)
        arg16[0].o = _mm256_extracti128_si256(arg22, 1)
        
        if ((temp0_2 & 4) == 0)
            goto label_14016a04c
        
        goto label_140169f5e
    
label_14016a03c:
    arg16[0].o = _mm256_extracti128_si256(arg22, 1)
    
    if ((temp0_2 & 4) == 0)
    label_14016a04c:
        arg16 = _mm256_cvtepi32_epi64(arg16[0].o)
        
        if ((temp0_2 & 8) != 0)
            goto label_140169f80
        
        goto label_14016a05b
    
label_140169f5e:
    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*zmm0[0]), 2)
    arg16 = _mm256_cvtepi32_epi64(arg16[0].o)
    
    if ((temp0_2 & 8) != 0)
    label_140169f80:
        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
        uint16_t rax_78[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
        arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_78, 3)
        zmm3 = _mm256_mask_add_epi64(k0, arg33, arg16)
        
        if ((temp0_2 & 0x10) == 0)
            goto label_14016a06b
        
        goto label_140169fac
    
label_14016a05b:
    zmm3 = _mm256_mask_add_epi64(k0, arg33, arg16)
    
    if ((temp0_2 & 0x10) == 0)
    label_14016a06b:
        
        if ((temp0_2 & 0x20) != 0)
            goto label_140169fc1
        
        goto label_14016a075
    
label_140169fac:
    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*zmm3[0].q), 4)
    
    if ((temp0_2 & 0x20) != 0)
    label_140169fc1:
        uint32_t rax_82 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
        arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_82, 5)
        
        if ((temp0_2 & 0x40) == 0)
            goto label_14016a07f
        
        goto label_140169fd3
    
label_14016a075:
    
    if ((temp0_2 & 0x40) != 0)
    label_140169fd3:
        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
        arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*zmm0[0]), 6)
        
        if (temp0_2 s< 0)
        label_140169fef:
            zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
            uint16_t rax_86[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
            arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_86, 7)
    else
    label_14016a07f:
        
        if (temp0_2 s< 0)
            goto label_140169fef
    
    zmm0[0].o = arg13[0].o & arg14[0].o
    zmm0 = _mm256_cvtepu16_epi32(zmm0[0].o)
    arg16[0].o = _mm_mask_mov_epi16(_mm256_cmp_epi32_mask(k0, arg37, zmm0, 5), arg18)
    zmm3[0].o = zx.o(0)
    int64_t k1_2 = _mm_mask_testn_epi16_mask(k0, arg16[0].o, arg14[0].o)
    zmm0[0].o = _mm_mask_and_epi64(k0, arg16[0].o, arg28[0].o)
    int64_t k0_1 = _mm_mask_test_epi16_mask(k0, zmm0[0].o, arg14[0].o)
    char temp0_9 = _cvtmask32_u32(k0_1)
    cond:0_1 = arg6 != temp0_9
    
    if (arg6 != temp0_9)
        zmm3[0].o = arg16[0].o ^ arg18
    
    arg22 = _mm256_add_epi32(arg22, arg20)
    zmm11 = _mm256_mask_mov_epi32(k1_2, arg15)
    arg18 = _mm_mask_mov_epi16(
        __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k0_1, arg22, arg21), zmm3[0].o)
    arg16[0].o = _mm_mask_and_epi64(k0_1, arg18, arg28[0].o)
    arg9 = _mm_mask_test_epi16_mask(k0_1, arg16[0].o, arg14[0].o)
    _kortest_mask8_u8(arg9, arg9)
    arg6 = _cvtmask32_u32(arg9)
    arg15 = zmm11
while (cond:0_1)
arg29 = _mm256_mask_blend_epi32(
    __vptestnmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg9, arg28[0].o, data_142fc92e0), zmm11, 
    arg29)
zmm0 = _mm256_mask_cvtepi32_epi64(arg9, arg29[0].o)
arg13 = _mm256_mask_add_epi64(arg9, arg34, zmm0)

if ((arg4 & 1) == 0)
    arg17 = _mm256_cmpeq_epi32(arg17, arg17)
    arg20 = arg46
    
    if ((arg4 & 2) != 0)
        goto label_14016bda8
    
    goto label_14016bc52

arg18 = __vpbroadcastb_xmmdq_memb(*arg13[0].q)
arg17 = _mm256_cmpeq_epi32(arg17, arg17)
arg20 = arg46

if ((arg4 & 2) != 0)
label_14016bda8:
    arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, 
        zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)), 1)
    zmm3[0].o = _mm256_extracti32x4_epi32(arg9, arg29, 1)
    
    if ((arg4 & 4) == 0)
        goto label_14016bc62
    
    goto label_14016bdbd

label_14016bc52:
zmm3[0].o = _mm256_extracti32x4_epi32(arg9, arg29, 1)

if ((arg4 & 4) == 0)
label_14016bc62:
    zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)
    
    if ((arg4 & 8) != 0)
        goto label_14016bdde
    
    goto label_14016bc70

label_14016bdbd:
zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, zx.d(*zmm0[0]), 2)
zmm3 = _mm256_cvtepi32_epi64(zmm3[0].o)

if ((arg4 & 8) != 0)
label_14016bdde:
    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
    arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, 
        zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)), 3)
    arg13 = _mm256_mask_add_epi64(arg9, arg33, zmm3)
    
    if ((arg4 & 0x10) == 0)
        goto label_14016bc7f
    
    goto label_14016be09

label_14016bc70:
arg13 = _mm256_mask_add_epi64(arg9, arg33, zmm3)

if ((arg4 & 0x10) != 0)
label_14016be09:
    arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, zx.d(*arg13[0].q), 4)
    
    if ((arg4 & 0x20) != 0)
    label_14016be20:
        arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, 
            zx.d(*__vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)), 5)
        
        if ((arg4 & 0x40) == 0)
            goto label_14016bc91
        
        goto label_14016be2e
else
label_14016bc7f:
    
    if ((arg4 & 0x20) != 0)
        goto label_14016be20

bool cond:3

if ((arg4 & 0x40) != 0)
label_14016be2e:
    zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
    arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, zx.d(*zmm0[0]), 6)
    cond:3 = arg2 == 0
    
    if (arg2 s< 0)
        zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
        arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, 
            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)), 7)
else
label_14016bc91:
    cond:3 = arg2 == 0
    
    if (arg2 s< 0)
        zmm0[0].o = _mm256_extracti128_si256(arg13, 1)
        arg18 = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg18, 
            zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)), 7)

int64_t k1_84 = _mm_mask_testn_epi16_mask(arg9, arg28[0].o, arg14[0].o)
_mm256_mask_sub_epi32(arg9, zmm11, _mm256_cmpeq_epi32(zmm0, zmm0))
arg36 = _mm256_mask_mov_epi32(k1_84, arg30)
arg13[0].o = _mm_mask_mov_epi16(_mm256_cmp_epi32_mask(arg9, arg36, arg32, 5), arg28[0].o)
int64_t k0_3 = _mm_mask_test_epi16_mask(arg9, arg13[0].o, arg14[0].o)
_kortest_mask8_u8(k0_3, k0_3)

if (not(cond:3))
    arg36 = _mm256_mask_mov_epi64(k0_3, 
        _mm256_mask_mov_epi32(_mm_mask_testn_epi16_mask(k0_3, arg13[0].o, arg14[0].o), arg36))

zmm0 = _mm256_mask_cvtepi32_epi64(k0_3, arg36[0].o)
zmm3 = _mm256_mask_add_epi64(k0_3, arg34, zmm0)

if ((arg4 & 1) == 0)
    if ((arg4 & 2) != 0)
        goto label_14016be7b
    
    goto label_14016bd07

arg13[0].o = __vpbroadcastb_xmmdq_memb(*zmm3[0].q)

if ((arg4 & 2) != 0)
label_14016be7b:
    uint32_t rax_58 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_58, 1)
    arg15[0].o = _mm256_extracti32x4_epi32(k0_3, arg36, 1)
    
    if ((arg4 & 4) == 0)
        goto label_14016bd17
    
    goto label_14016be93

label_14016bd07:
arg15[0].o = _mm256_extracti32x4_epi32(k0_3, arg36, 1)

if ((arg4 & 4) == 0)
label_14016bd17:
    arg15 = _mm256_cvtepi32_epi64(arg15[0].o)
    
    if ((arg4 & 8) != 0)
        goto label_14016beb4
    
    goto label_14016bd25

label_14016be93:
zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*zmm0[0]), 2)
arg15 = _mm256_cvtepi32_epi64(arg15[0].o)

if ((arg4 & 8) != 0)
label_14016beb4:
    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
    uint16_t rax_62[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_62, 3)
    zmm3 = _mm256_mask_add_epi64(k0_3, arg33, arg15)
    
    if ((arg4 & 0x10) == 0)
        goto label_14016bd34
    
    goto label_14016bedf

label_14016bd25:
zmm3 = _mm256_mask_add_epi64(k0_3, arg33, arg15)

if ((arg4 & 0x10) != 0)
label_14016bedf:
    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*zmm3[0].q), 4)
    
    if ((arg4 & 0x20) != 0)
    label_14016bef3:
        uint32_t rax_66 = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm3[0].o, 1))
        arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_66, 5)
        
        if ((arg4 & 0x40) == 0)
            goto label_14016bd46
        
        goto label_14016bf04
else
label_14016bd34:
    
    if ((arg4 & 0x20) != 0)
        goto label_14016bef3

if ((arg4 & 0x40) != 0)
label_14016bf04:
    zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
    arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, zx.d(*zmm0[0]), 6)
    arg14[0].o &= arg18
    
    if (arg2 s< 0)
    label_14016bf23:
        zmm0[0].o = _mm256_extracti128_si256(zmm3, 1)
        uint16_t rax_70[0x2] = zx.d(*__vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1))
        arg13[0].o = __vpinsrw_xmmdq_xmmdq_gpr32d_immb(arg13[0].o, rax_70, 7)
else
label_14016bd46:
    arg14[0].o &= arg18
    
    if (arg2 s< 0)
        goto label_14016bf23

arg14 = _mm256_cvtepu16_epi32(arg14[0].o)
zmm0[0].o = arg13[0].o & data_142fc92e0
arg13 = _mm256_cvtepu16_epi32(zmm0[0].o)
zmm3[0].o = zx.o(0)
char temp3 = *(arg5 + 0x680)
bool cond:5 = temp3 == 1
bool cond:7 = temp3 == 1
bool cond:8 = temp3 == 1
bool cond:10 = temp3 == 1
bool cond:11 = temp3 == 1
bool cond:12 = temp3 == 1
bool cond:13 = temp3 == 1
bool cond:15 = temp3 == 1
bool cond:16 = temp3 == 1
bool cond:17 = temp3 == 1
bool cond:18 = temp3 == 1
bool cond:19 = temp3 == 1
bool cond:20 = temp3 == 1
bool cond:21 = temp3 == 1
bool cond:22 = temp3 == 1
bool cond:23 = temp3 == 1
bool cond:24 = temp3 == 1
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
bool cond:43 = temp3 == 1

if (temp3 != 1)
    zmm0 = __vpmaxsd_ymmi32_maskmskw_ymmi32_memi32_avx512(k0_3, _mm256_sub_epi32(arg13, arg14), 1)
    arg13 = _mm256_sub_ps(_mm256_broadcast_ss(arg42), _mm256_cvtepi32_ps(arg14))
    zmm0 = _mm256_cvtepi32_ps(zmm0)
    zmm3 = _mm256_div_ps(arg13, zmm0)

zmm0[0].o = __return_addr.o & data_142fc92e0
arg13 = _mm256_mask_mov_ps(
    __vpcmpw_maskmskw_maskmskw_xmmi16_memi16_imm8_avx512(k0_3, zmm0[0].o, data_142fc92e0, 4), zmm3)
float zmm13[0x8] = _mm256_mask_mov_ps(arg10, arg13)
arg30 = _mm256_mask_mov_epi64(k0_3, arg36)
zmm0[0].o = _mm256_extracti32x4_epi32(k0_3, arg31, 1)
arg32 = _mm256_mask_cvtepu32_epi64(k0_3, zmm0[0].o)
arg31 = _mm256_mask_cvtepu32_epi64(k0_3, arg31[0].o)
zmm0 = _mm256_mask_mullo_epi32(k0_3, arg29, arg38)
arg13[0].o = _mm256_extracti128_si256(zmm0, 1)
arg14 = _mm256_cvtepi32_epi64(arg13[0].o)
arg34 = _mm256_mask_cvtepi32_epi64(k0_3, zmm0[0].o)
zmm0 = _mm256_mask_add_epi64(k0_3, arg34, arg31)
arg13 = _mm256_mask_add_epi64(k0_3, arg14, arg32)
arg33 = _mm256_mask_add_epi64(k0_3, arg13, arg27)
uint64_t zmm27[0x4] = _mm256_mask_add_epi64(k0_3, zmm0, arg26)
int64_t k3 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg12, arg19, 1)
_kortest_mask8_u8(k3, k3)

if (temp3 != 1)
    zmm0 = __vpbroadcastd_ymmqq_memd(0x7000000)
    arg13 = _mm256_mask_and_epi32(k0_3, arg23, zmm0)
    uint64_t k4_1 = _mm256_mask_testn_epi32_mask(k3, arg23, zmm0)
    _kortest_mask8_u8(k4_1, k4_1)
    
    if (temp3 != 1)
        zmm0 = _mm256_mask_add_epi64(k0_3, arg25, arg32)
        zmm3 = __vpbroadcastq_ymmqq_memq(4)
        arg15 = _mm256_mask_add_epi64(k0_3, _mm256_mask_add_epi64(k0_3, arg24, arg31), arg34)
        zmm0 = _mm256_add_epi64(zmm0, arg14)
        arg16 = _mm256_add_epi64(zmm0, zmm3)
        zmm3 = _mm256_add_epi64(arg15, zmm3)
        uint64_t k5_1 = _kshiftri_mask8(k4_1, 4)
        int64_t k1_5 = __kmovq_maskmskw_masku64_avx512(k4_1)
        arg28[0].o = _mm_mask_xor_epi32(k0_3, arg28[0].o, arg28[0].o)
        int64_t k1_6
        float temp0_46[0x4]
        temp0_46, k1_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_5, *(arg7 + zmm3[0].q))
        arg28[0].o = temp0_46
        int64_t k1_7 = __kmovq_maskmskw_masku64_avx512(k5_1)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int64_t k1_8
        float temp0_48[0x4]
        temp0_48, k1_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_7, *(arg7 + arg16[0]))
        zmm3[0].o = temp0_48
        arg16 = __vpbroadcastq_ymmqq_memq(8)
        arg36 = _mm256_mask_add_epi64(k0_3, zmm0, arg16)
        arg16 = _mm256_add_epi64(arg15, arg16)
        int64_t k1_9 = __kmovq_maskmskw_masku64_avx512(k4_1)
        arg37[0].o = _mm_mask_xor_ps(k0_3, arg37[0].o, arg37[0].o)
        int64_t k1_10
        float temp0_53[0x4]
        temp0_53, k1_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_9, *(arg7 + arg16[0]))
        arg37[0].o = temp0_53
        int64_t k1_11 = __kmovq_maskmskw_masku64_avx512(k5_1)
        arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        int64_t k1_12
        float temp0_55[0x4]
        temp0_55, k1_12 =
            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_11, *(arg7 + arg36[0].q))
        arg16[0].o = temp0_55
        zmm3 = _mm256_insertf32x4(k0_3, arg28, zmm3[0].o, 1)
        arg16 = _mm256_insertf32x4(k0_3, arg37, arg16[0].o, 1)
        arg28 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(k0_3, 0xc)
        zmm0 = _mm256_mask_add_epi64(k0_3, zmm0, arg28)
        arg15 = _mm256_mask_add_epi64(k0_3, arg15, arg28)
        int64_t k1_13 = __kmovq_maskmskw_masku64_avx512(k4_1)
        arg28[0].o = _mm_mask_xor_epi32(k0_3, arg28[0].o, arg28[0].o)
        int64_t k1_14
        float temp0_62[0x4]
        temp0_62, k1_14 =
            __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_13, *(arg7 + arg15[0].q))
        arg28[0].o = temp0_62
        int64_t k5_2
        float temp0_63[0x4]
        temp0_63, k5_2 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_1, *(arg7 + zmm0[0]))
        zmm0 = _mm256_insertf32x4(k0_3, arg28, temp0_63, 1)
        arg39 = _mm256_mask_storeu_ps(k4_1, zmm3)
        arg40 = _mm256_mask_storeu_ps(k4_1, arg16)
        arg41 = _mm256_mask_storeu_ps(k4_1, zmm0)
    
    int64_t k3_1 = _mm256_mask_test_epi32_mask(k3, arg13, arg13)
    _kortest_mask8_u8(k3_1, k3_1)
    
    if (temp3 != 1)
        zmm0 = _mm256_slli_epi32(arg20, 0x1f)
        int64_t k4_2 = _mm256_movepi32_mask(zmm0)
        arg13[0].o = zx.o(0)
        int64_t k1_15 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, arg13, zmm0)
        _kortest_mask8_u8(k1_15, k1_15)
        
        if (temp3 == 1)
            zmm3 = _mm256_mask_mov_epi64(k0_3, zmm27)
            arg13 = _mm256_mask_mov_epi64(k0_3, arg33)
        else
            zmm0 = __vpbroadcastq_ymmqq_memq(4)
            _mm256_mask_mov_epi64(k0_3, zmm27)
            zmm3 = _mm256_mask_add_epi64(k1_15, zmm27, zmm0)
            int64_t k5_3 = _kshiftri_mask8(k1_15, 4)
            _mm256_mask_mov_epi64(k0_3, arg33)
            arg13 = _mm256_mask_add_epi64(k5_3, arg33, zmm0)
            arg15 = _mm256_mask_add_epi64(k0_3, arg25, arg32)
            arg16 = _mm256_mask_add_epi64(k0_3, _mm256_mask_add_epi64(k0_3, arg24, arg31), arg34)
            arg15 = _mm256_add_epi64(_mm256_add_epi64(arg15, arg14), zmm0)
            zmm0 = _mm256_add_epi64(arg16, zmm0)
            int64_t k5_4 = _kshiftri_mask8(k1_15, 4)
            arg16[0].o = zx.o(0)
            arg28[0].o = _mm_mask_xor_epi32(k0_3, arg28[0].o, arg28[0].o)
            int64_t k1_16
            float temp0_81[0x4]
            temp0_81, k1_16 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_15, *(arg7 + zmm0[0]))
            arg28[0].o = temp0_81
            int64_t k5_5
            float temp0_82[0x4]
            temp0_82, k5_5 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_4, *(arg7 + arg15[0].q))
            arg16[0].o = temp0_82
            arg15 = _mm256_insertf32x4(k0_3, arg28, arg16[0].o, 1)
        
        arg39 = _mm256_mask_storeu_ps(k3_1, _mm256_mask_mov_ps(k4_2, arg15))
        zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
        arg15 = _mm256_mask_and_epi32(k0_3, arg23, zmm0)
        int64_t k1_17 = _mm256_mask_test_epi32_mask(k3_1, arg23, zmm0)
        _kortest_mask8_u8(k1_17, k1_17)
        
        if (temp3 != 1)
            zmm0 = __vpbroadcastq_ymmqq_memq(4)
            _mm256_mask_mov_epi64(k0_3, zmm3)
            arg28 = _mm256_mask_add_epi64(k1_17, zmm3, zmm0)
            int64_t k4_3 = _kshiftri_mask8(k1_17, 4)
            int64_t k5_6 = _kshiftri_mask8(k1_17, 4)
            cond:5 = true
            cond:7 = true
            cond:8 = true
            cond:10 = true
            cond:11 = true
            cond:12 = true
            cond:13 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:23 = true
            cond:24 = true
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
            cond:43 = true
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_18
            float temp0_94[0x4]
            temp0_94, k1_18 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_17, *zmm3[0].q)
            arg16[0].o = temp0_94
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            int64_t k5_7
            float temp0_96[0x4]
            temp0_96, k5_7 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_6, *arg13[0].q)
            zmm3[0].o = temp0_96
            arg13 = _mm256_mask_add_epi64(k4_3, arg13, zmm0)
            arg16 = _mm256_insertf128_ps(arg16, zmm3[0].o, 1)
            zmm3 = _mm256_mask_mov_epi64(k0_3, arg28)
        
        arg40 = _mm256_mask_storeu_ps(k3_1, 
            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, arg15, arg15), arg16))
        zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
        arg15 = _mm256_mask_and_epi32(k0_3, arg23, zmm0)
        int64_t k1_20 = _mm256_mask_test_epi32_mask(k3_1, arg23, zmm0)
        _kortest_mask8_u8(k1_20, k1_20)
        
        if (not(cond:24))
            int64_t k4_4 = _kshiftri_mask8(k1_20, 4)
            zmm0[0].o = zx.o(0)
            cond:5 = true
            cond:7 = true
            cond:8 = true
            cond:10 = true
            cond:11 = true
            cond:12 = true
            cond:13 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:23 = true
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
            cond:43 = true
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_21
            float temp0_105[0x4]
            temp0_105, k1_21 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_20, *zmm3[0].q)
            arg16[0].o = temp0_105
            int64_t k4_5
            float temp0_106[0x4]
            temp0_106, k4_5 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_4, *arg13[0].q)
            zmm0[0].o = temp0_106
            arg13 = _mm256_insertf128_ps(arg16, zmm0[0].o, 1)
        
        arg41 = _mm256_mask_storeu_ps(k3_1, 
            _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_3, arg15, arg15), arg13))

zmm0 = __vpbroadcastd_ymmqq_memd(1)
int64_t k0_2 = _mm256_cmp_epi32_mask(k0_3, arg19, zmm0, 4)
int64_t k1_23 = _mm256_cmp_epi32_mask(arg12, arg19, zmm0, 4)
_kortest_mask8_u8(k1_23, k1_23)
uint64_t arg_20[0x4]
uint64_t arg_60[0x4]
uint64_t arg_80[0x4]
uint64_t arg_a0[0x4]
float arg_c0[0x8]
float arg_e0[0x8]
float arg_100[0x8]

if (not(cond:5))
    uint64_t k3_2 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg12, arg19, 3)
    _kortest_mask8_u8(k3_2, k3_2)
    
    if (not(cond:8))
        arg_20[0].w = _store_mask16(arg11)
        zmm0[0].o = zx.o(0)
        arg_100 = zmm0
        arg_e0 = zmm0
        arg_c0 = zmm0
        arg_a0 = zmm0
        arg_80 = zmm0
        arg_60 = zmm0
        int64_t k4_6 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
            _mm256_movepi32_mask(_mm256_slli_epi32(arg20, 0x1f)), arg19, 3)
        uint64_t k5_8 = _kand_mask8(k4_6, arg12)
        _kortest_mask8_u8(k5_8, k5_8)
        arg13 = _mm256_mask_mov_epi64(k0_2, arg26)
        zmm3 = _mm256_mask_mov_epi64(k0_2, arg27)
        
        if (not(cond:13))
            zmm0 = __vpbroadcastq_ymmqq_memq(4)
            int64_t k6 = _kshiftri_mask8(k5_8, 4)
            _mm256_mask_mov_epi64(k0_2, arg27)
            zmm3 = _mm256_mask_add_epi64(k6, arg27, zmm0)
            _mm256_mask_mov_epi64(k0_2, arg26)
            arg15 = _mm256_mask_add_epi64(k5_8, arg26, zmm0)
            uint64_t k2_1 = __kmovq_maskmskw_masku64_avx512(arg12)
            uint64_t k7 = _kshiftri_mask8(k5_8, 4)
            cond:7 = true
            cond:10 = true
            cond:11 = true
            cond:12 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:18 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:23 = true
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
            cond:43 = true
            int64_t k1_25 = __kmovq_maskmskw_masku64_avx512(k5_8)
            zmm0[0].o = zx.o(0)
            int64_t k1_26
            float temp0_120[0x4]
            temp0_120, k1_26 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_25, *arg26[0])
            zmm0[0].o = temp0_120
            int64_t k1_27 = __kmovq_maskmskw_masku64_avx512(k7)
            arg13[0].o = zx.o(0)
            int64_t k1_28
            float temp0_121[0x4]
            temp0_121, k1_28 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_27, *arg27[0])
            arg13[0].o = temp0_121
            arg_c0 = _mm256_mask_storeu_ps(k4_6, _mm256_insertf128_ps(zmm0, arg13[0].o, 1))
            zmm0 = __vpbroadcastq_ymmqq_memq(8)
            _mm256_mask_mov_epi64(k0_2, arg26)
            arg13 = _mm256_mask_add_epi64(k5_8, arg26, zmm0)
            arg16[0].o = zx.o(0)
            int64_t k5_9
            float temp0_127[0x4]
            temp0_127, k5_9 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_8, *arg15[0].q)
            arg16[0].o = temp0_127
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            int64_t k7_1
            float temp0_129[0x4]
            temp0_129, k7_1 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k7, *zmm3[0].q)
            arg15[0].o = temp0_129
            arg12 = __kmovq_maskmskw_masku64_avx512(k2_1)
            _mm256_mask_mov_epi64(k0_2, arg27)
            zmm3 = _mm256_mask_add_epi64(k6, arg27, zmm0)
            arg_60 = _mm256_mask_storeu_ps(k4_6, _mm256_insertf128_ps(arg16, arg15[0].o, 1))
        
        int64_t k4_7 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_2, arg19, 3)
        int64_t k5_10 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_7, arg23, 0x2000000)
        uint64_t k6_1 = _kand_mask8(k5_10, arg12)
        _kortest_mask8_u8(k6_1, k6_1)
        
        if (not(cond:18))
            zmm0 = __vpbroadcastq_ymmqq_memq(4)
            __return_addr.d = _store_mask32(arg12)
            int64_t k7_2 = _kshiftri_mask8(k6_1, 4)
            arg15 = _mm256_mask_add_epi64(k7_2, zmm3, zmm0)
            arg16 = _mm256_mask_add_epi64(k6_1, arg13, zmm0)
            uint64_t k1_29 = _kshiftri_mask8(k6_1, 4)
            cond:7 = true
            cond:10 = true
            cond:11 = true
            cond:12 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
            cond:23 = true
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
            cond:43 = true
            int64_t k2_2 = __kmovq_maskmskw_masku64_avx512(k6_1)
            zmm0[0].o = zx.o(0)
            int64_t k2_3
            float temp0_138[0x4]
            temp0_138, k2_3 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_2, *arg13[0].q)
            zmm0[0].o = temp0_138
            int64_t k2_5
            float temp0_139[0x4]
            temp0_139, k2_5 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                __kmovq_maskmskw_masku64_avx512(k1_29), *zmm3[0].q)
            arg_e0 = _mm256_mask_storeu_ps(k5_10, _mm256_insertf128_ps(zmm0, temp0_139, 1))
            zmm0 = __vpbroadcastq_ymmqq_memq(8)
            arg13 = _mm256_mask_add_epi64(k6_1, arg13, zmm0)
            arg28[0].o = _mm_mask_xor_epi32(k0_2, arg28[0].o, arg28[0].o)
            int64_t k6_2
            float temp0_145[0x4]
            temp0_145, k6_2 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_1, *arg16[0])
            arg28[0].o = temp0_145
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_30
            float temp0_147[0x4]
            temp0_147, k1_30 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_29, *arg15[0].q)
            arg16[0].o = temp0_147
            zmm3 = _mm256_mask_add_epi64(k7_2, zmm3, zmm0)
            arg12 = _load_mask32(__return_addr.d)
            arg_80 = _mm256_mask_storeu_ps(k5_10, _mm256_insertf32x4(k0_2, arg28, arg16[0].o, 1))
        
        arg11 = _load_mask16(arg_20[0].w)
        int64_t k4_8 = __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_7, arg23, 0x4000000)
        uint64_t k5_11 = _kand_mask8(k4_8, arg12)
        _kortest_mask8_u8(k5_11, k5_11)
        
        if (not(cond:23))
            zmm0 = __vpbroadcastq_ymmqq_memq(4)
            uint64_t k1_31 = _kshiftri_mask8(k5_11, 4)
            cond:7 = true
            cond:10 = true
            cond:11 = true
            cond:12 = true
            cond:15 = true
            cond:16 = true
            cond:17 = true
            cond:19 = true
            cond:20 = true
            cond:21 = true
            cond:22 = true
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
            cond:43 = true
            int64_t k2_6 = __kmovq_maskmskw_masku64_avx512(k5_11)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            int64_t k2_7
            float temp0_153[0x4]
            temp0_153, k2_7 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k2_6, *arg13[0].q)
            arg15[0].o = temp0_153
            arg16[0].o = zx.o(0)
            int64_t k2_9
            float temp0_154[0x4]
            temp0_154, k2_9 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                __kmovq_maskmskw_masku64_avx512(k1_31), *zmm3[0].q)
            arg16[0].o = temp0_154
            zmm3 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_11, 4), zmm3, zmm0)
            arg13 = _mm256_mask_add_epi64(k5_11, arg13, zmm0)
            zmm0 = _mm256_insertf128_ps(arg15, arg16[0].o, 1)
            arg_100 = _mm256_mask_storeu_ps(k4_8, zmm0)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            int64_t k5_12
            float temp0_160[0x4]
            temp0_160, k5_12 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_11, *arg13[0].q)
            zmm0[0].o = temp0_160
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            int64_t k1_32
            float temp0_162[0x4]
            temp0_162, k1_32 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_31, *zmm3[0].q)
            arg13[0].o = temp0_162
            arg_a0 = _mm256_mask_storeu_ps(k4_8, _mm256_insertf128_ps(zmm0, arg13[0].o, 1))
        
        zmm0 = _mm256_mask_add_epi64(k0_2, arg25, arg32)
        arg13 = __vpbroadcastq_ymmqq_memq(4)
        zmm3 = _mm256_mask_add_epi64(k0_2, _mm256_mask_add_epi64(k0_2, arg24, arg31), arg34)
        zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, arg14), arg13)
        arg13 = _mm256_add_epi64(zmm3, arg13)
        int64_t k1_33 = _kshiftri_mask8(k3_2, 4)
        int64_t k2_11 = __kmovq_maskmskw_masku64_avx512(k3_2)
        zmm3[0].o = zx.o(0)
        int64_t k2_12
        uint32_t temp0_172[0x4]
        temp0_172, k2_12 =
            __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k2_11, *(arg7 + arg13[0].q))
        zmm3[0].o = temp0_172
        arg13[0].o = zx.o(0)
        int64_t k1_34
        uint32_t temp0_173[0x4]
        temp0_173, k1_34 =
            __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_33, *(arg7 + zmm0[0]))
        arg13[0].o = temp0_173
        zmm0 = _mm256_inserti128_si256(zmm3, arg13[0].o, 1)
        arg13 =
            __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
        zmm3 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_2, 
            _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, zmm0, 0x3ff), 0xfffffe01)), 
            0x43ff8000)
        arg16 = arg_80
        arg28 = _mm256_mask_load_ps(k0_2, arg_a0)
        arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_60, zmm3, arg_c0)
        zmm3 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
        arg13 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg13, zmm3))
        arg36 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 1023f)
        arg13 =
            __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_mask_div_ps(k0_2, arg13, arg36), arg16, arg_e0)
        zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
            _mm256_mask_div_ps(k0_2, 
                _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), zmm3)), arg36), 
            k0_2, arg28, arg_100)
        arg39 = _mm256_mask_storeu_ps(k3_2, arg15)
        arg40 = _mm256_mask_storeu_ps(k3_2, arg13)
        arg41 = _mm256_mask_storeu_ps(k3_2, zmm0)
    
    int64_t k3_3 =
        _kxor_mask8(__vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_2, arg19, 3), k0_2)
    _ktest_mask8_u8(k3_3, arg12)
    
    if (not(cond:12))
        int64_t k4_9 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg12, arg19, 2)
        _kortest_mask8_u8(k4_9, k4_9)
        
        if (not(cond:17))
            zmm0 = _mm256_slli_epi32(arg20, 0x1f)
            int64_t k5_13 = _mm256_movepi32_mask(zmm0)
            arg13[0].o = zx.o(0)
            int64_t k1_36 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k4_9, arg13, zmm0)
            _kortest_mask8_u8(k1_36, k1_36)
            
            if (not(cond:22))
                zmm0 = __vpbroadcastq_ymmqq_memq(2)
                zmm27 = _mm256_mask_add_epi64(k1_36, zmm27, zmm0)
                int64_t k2_13 = _kshiftri_mask8(k1_36, 4)
                arg33 = _mm256_mask_add_epi64(k2_13, arg33, zmm0)
                zmm0 = _mm256_mask_add_epi64(k0_2, arg25, arg32)
                arg13 = _mm256_mask_add_epi64(k0_2, arg24, arg31)
                zmm3 = __vpbroadcastq_ymmqq_memq(4)
                arg13 = _mm256_mask_add_epi64(k0_2, arg13, arg34)
                zmm0 = _mm256_mask_add_epi64(k2_13, _mm256_add_epi64(zmm0, arg14), zmm3)
                arg13 = _mm256_mask_add_epi64(k1_36, arg13, zmm3)
                int64_t r10 = arg13[0].q
                int64_t r9_1 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                arg13[0].o = _mm256_extracti128_si256(arg13, 1)
                int64_t r11_1 = arg13[0].q
                int64_t rbx = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                uint64_t rdi = zmm0[0]
                int64_t rsi_2 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                uint64_t rcx = zmm0[0]
                int64_t rax_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                arg7 = *(arg5 + 0x660)
                zmm0[0].o = zx.o(*(*(arg5 + 0x660) + r10))
                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + r9_1), 1)
                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + r11_1), 2)
                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rbx), 3)
                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rdi), 4)
                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rsi_2), 5)
                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rcx), 6)
                zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rax_3), 7)
                arg13 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                    _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
            
            arg39 = _mm256_mask_storeu_ps(k4_9, _mm256_mask_mov_ps(k5_13, arg13))
            zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
            arg13 = _mm256_mask_and_epi32(k0_2, arg23, zmm0)
            int64_t k5_14 = _mm256_mask_test_epi32_mask(k4_9, arg23, zmm0)
            _kortest_mask8_u8(k5_14, k5_14)
            
            if (not(cond:30))
                char temp0_224 = _cvtmask32_u32(k5_14)
                
                if ((temp0_224 & 1) == 0)
                    if ((temp0_224 & 2) != 0)
                        goto label_14016b3bb
                    
                    goto label_14016aab3
                
                arg14[0].o = __vpbroadcastw_xmmdq_memw(*zmm27[0].o)
                
                if ((temp0_224 & 2) != 0)
                label_14016b3bb:
                    uint64_t rax_6 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm27[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_6, 1)
                    
                    if ((temp0_224 & 4) == 0)
                        goto label_14016aabd
                    
                    goto label_14016b3d1
                
            label_14016aab3:
                
                if ((temp0_224 & 4) == 0)
                label_14016aabd:
                    
                    if ((temp0_224 & 8) != 0)
                        goto label_14016b3ec
                    
                    goto label_14016aac7
                
            label_14016b3d1:
                zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, zmm27, 1)
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 2)
                
                if ((temp0_224 & 8) != 0)
                label_14016b3ec:
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, zmm27, 1)
                    uint16_t* rax_8 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_8, 3)
                    
                    if ((temp0_224 & 0x10) == 0)
                        goto label_14016aad1
                    
                    goto label_14016b40e
                
            label_14016aac7:
                
                if ((temp0_224 & 0x10) != 0)
                label_14016b40e:
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg33[0].o, 4)
                    
                    if ((temp0_224 & 0x20) != 0)
                    label_14016b41d:
                        uint16_t* rax_10 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg33[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_10, 5)
                        
                        if ((temp0_224 & 0x40) == 0)
                            goto label_14016aae5
                        
                        goto label_14016b433
                else
                label_14016aad1:
                    
                    if ((temp0_224 & 0x20) != 0)
                        goto label_14016b41d
                
                int64_t k1_37
                
                if ((temp0_224 & 0x40) != 0)
                label_14016b433:
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg33, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 6)
                    zmm3 = __vpbroadcastq_ymmqq_memq(2)
                    k1_37 = _kshiftri_mask8(k5_14, 4)
                    cond:7 = temp0_224 == 0
                    cond:10 = temp0_224 == 0
                    cond:11 = temp0_224 == 0
                    cond:15 = temp0_224 == 0
                    cond:16 = temp0_224 == 0
                    cond:19 = temp0_224 == 0
                    cond:20 = temp0_224 == 0
                    cond:21 = temp0_224 == 0
                    cond:26 = temp0_224 == 0
                    cond:27 = temp0_224 == 0
                    cond:28 = temp0_224 == 0
                    cond:29 = temp0_224 == 0
                    cond:31 = temp0_224 == 0
                    cond:32 = temp0_224 == 0
                    cond:33 = temp0_224 == 0
                    cond:34 = temp0_224 == 0
                    cond:35 = temp0_224 == 0
                    cond:36 = temp0_224 == 0
                    cond:37 = temp0_224 == 0
                    cond:38 = temp0_224 == 0
                    cond:39 = temp0_224 == 0
                    cond:40 = temp0_224 == 0
                    cond:41 = temp0_224 == 0
                    cond:42 = temp0_224 == 0
                    cond:43 = temp0_224 == 0
                    
                    if (temp0_224 s< 0)
                    label_14016b45b:
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg33, 1)
                        uint16_t* rax_12 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_12, 7)
                else
                label_14016aae5:
                    zmm3 = __vpbroadcastq_ymmqq_memq(2)
                    k1_37 = _kshiftri_mask8(k5_14, 4)
                    cond:7 = temp0_224 == 0
                    cond:10 = temp0_224 == 0
                    cond:11 = temp0_224 == 0
                    cond:15 = temp0_224 == 0
                    cond:16 = temp0_224 == 0
                    cond:19 = temp0_224 == 0
                    cond:20 = temp0_224 == 0
                    cond:21 = temp0_224 == 0
                    cond:26 = temp0_224 == 0
                    cond:27 = temp0_224 == 0
                    cond:28 = temp0_224 == 0
                    cond:29 = temp0_224 == 0
                    cond:31 = temp0_224 == 0
                    cond:32 = temp0_224 == 0
                    cond:33 = temp0_224 == 0
                    cond:34 = temp0_224 == 0
                    cond:35 = temp0_224 == 0
                    cond:36 = temp0_224 == 0
                    cond:37 = temp0_224 == 0
                    cond:38 = temp0_224 == 0
                    cond:39 = temp0_224 == 0
                    cond:40 = temp0_224 == 0
                    cond:41 = temp0_224 == 0
                    cond:42 = temp0_224 == 0
                    cond:43 = temp0_224 == 0
                    
                    if (temp0_224 s< 0)
                        goto label_14016b45b
                
                zmm27 = _mm256_mask_add_epi64(k5_14, zmm27, zmm3)
                arg33 = _mm256_mask_add_epi64(k1_37, arg33, zmm3)
                arg14 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                    _mm256_cvtepu16_epi32(arg14[0].o), 0xffffff01))
            
            arg40 = _mm256_mask_storeu_ps(k4_9, 
                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, arg13, arg13), arg14))
            zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
            arg13 = _mm256_mask_and_epi32(k0_2, arg23, zmm0)
            int64_t k1_39 = _mm256_mask_test_epi32_mask(k4_9, arg23, zmm0)
            _kortest_mask8_u8(k1_39, k1_39)
            
            if (not(cond:34))
                char temp0_235 = _cvtmask32_u32(k1_39)
                
                if ((temp0_235 & 1) == 0)
                    if ((temp0_235 & 2) != 0)
                        goto label_14016b487
                    
                    goto label_14016ab6d
                
                arg14[0].o = __vpbroadcastw_xmmdq_memw(*zmm27[0].o)
                
                if ((temp0_235 & 2) != 0)
                label_14016b487:
                    uint64_t rax_14 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(zmm27[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_14, 1)
                    
                    if ((temp0_235 & 4) == 0)
                        goto label_14016ab77
                    
                    goto label_14016b49d
                
            label_14016ab6d:
                
                if ((temp0_235 & 4) == 0)
                label_14016ab77:
                    
                    if ((temp0_235 & 8) != 0)
                        goto label_14016b4b8
                    
                    goto label_14016ab81
                
            label_14016b49d:
                zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, zmm27, 1)
                arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 2)
                
                if ((temp0_235 & 8) != 0)
                label_14016b4b8:
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, zmm27, 1)
                    uint16_t* rax_16 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_16, 3)
                    
                    if ((temp0_235 & 0x10) == 0)
                        goto label_14016ab8b
                    
                    goto label_14016b4da
                
            label_14016ab81:
                
                if ((temp0_235 & 0x10) != 0)
                label_14016b4da:
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg33[0].o, 4)
                    
                    if ((temp0_235 & 0x20) != 0)
                    label_14016b4e9:
                        uint16_t* rax_18 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg33[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_18, 5)
                        
                        if ((temp0_235 & 0x40) == 0)
                            goto label_14016ab9f
                        
                        goto label_14016b4ff
                else
                label_14016ab8b:
                    
                    if ((temp0_235 & 0x20) != 0)
                        goto label_14016b4e9
                
                if ((temp0_235 & 0x40) != 0)
                label_14016b4ff:
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg33, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 6)
                    cond:7 = temp0_235 == 0
                    cond:10 = temp0_235 == 0
                    cond:11 = temp0_235 == 0
                    cond:15 = temp0_235 == 0
                    cond:16 = temp0_235 == 0
                    cond:19 = temp0_235 == 0
                    cond:20 = temp0_235 == 0
                    cond:21 = temp0_235 == 0
                    cond:26 = temp0_235 == 0
                    cond:27 = temp0_235 == 0
                    cond:28 = temp0_235 == 0
                    cond:29 = temp0_235 == 0
                    cond:31 = temp0_235 == 0
                    cond:32 = temp0_235 == 0
                    cond:33 = temp0_235 == 0
                    cond:35 = temp0_235 == 0
                    cond:36 = temp0_235 == 0
                    cond:37 = temp0_235 == 0
                    cond:38 = temp0_235 == 0
                    cond:39 = temp0_235 == 0
                    cond:40 = temp0_235 == 0
                    cond:41 = temp0_235 == 0
                    cond:42 = temp0_235 == 0
                    cond:43 = temp0_235 == 0
                    
                    if (temp0_235 s< 0)
                    label_14016b518:
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg33, 1)
                        uint16_t* rax_20 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_20, 7)
                else
                label_14016ab9f:
                    cond:7 = temp0_235 == 0
                    cond:10 = temp0_235 == 0
                    cond:11 = temp0_235 == 0
                    cond:15 = temp0_235 == 0
                    cond:16 = temp0_235 == 0
                    cond:19 = temp0_235 == 0
                    cond:20 = temp0_235 == 0
                    cond:21 = temp0_235 == 0
                    cond:26 = temp0_235 == 0
                    cond:27 = temp0_235 == 0
                    cond:28 = temp0_235 == 0
                    cond:29 = temp0_235 == 0
                    cond:31 = temp0_235 == 0
                    cond:32 = temp0_235 == 0
                    cond:33 = temp0_235 == 0
                    cond:35 = temp0_235 == 0
                    cond:36 = temp0_235 == 0
                    cond:37 = temp0_235 == 0
                    cond:38 = temp0_235 == 0
                    cond:39 = temp0_235 == 0
                    cond:40 = temp0_235 == 0
                    cond:41 = temp0_235 == 0
                    cond:42 = temp0_235 == 0
                    cond:43 = temp0_235 == 0
                    
                    if (temp0_235 s< 0)
                        goto label_14016b518
                
                arg14 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                    _mm256_cvtepu16_epi32(arg14[0].o), 0xffffff01))
            
            zmm0 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, arg13, arg13), arg14)
            arg41 = _mm256_mask_storeu_ps(k4_9, zmm0)
        
        int64_t k1_43 = _kand_mask8(
            _kxor_mask8(k3_3, __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_2, arg19, 2)), 
            arg12)
        _kortest_mask8_u8(k1_43, k1_43)
        
        if (not(cond:21))
            int64_t k3_4 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(arg12, arg19, 6)
            _kortest_mask8_u8(k3_4, k3_4)
            
            if (not(cond:29))
                zmm0[0].o = zx.o(0)
                arg39 = _mm256_mask_storeu_ps(k3_4, zmm0)
                arg40 = _mm256_mask_storeu_ps(k3_4, zmm0)
                arg41 = _mm256_mask_storeu_ps(k3_4, zmm0)
            
            int64_t k1_44 = __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_43, arg19, 6, 4)
            _kortest_mask8_u8(k1_44, k1_44)
            
            if (not(cond:33))
                zmm0[0].o = zx.o(0)
                arg39 = _mm256_mask_storeu_ps(k1_44, zmm0)
                arg40 = _mm256_mask_storeu_ps(k1_44, zmm0)
                arg41 = _mm256_mask_storeu_ps(k1_44, zmm0)

int64_t k2_14 = _mm256_cmp_epi32_mask(arg12, arg29, arg30, 4)
_kortest_mask8_u8(k2_14, k2_14)

if (not(cond:7))
    zmm0 = _mm256_mask_mullo_epi32(k0_2, arg30, arg38)
    arg13[0].o = _mm256_extracti128_si256(zmm0, 1)
    arg14 = _mm256_cvtepi32_epi64(arg13[0].o)
    arg30 = _mm256_mask_cvtepi32_epi64(k0_2, zmm0[0].o)
    zmm0 = _mm256_mask_add_epi64(k0_2, arg30, arg31)
    arg13 = _mm256_mask_add_epi64(k0_2, arg14, arg32)
    arg28 = _mm256_mask_add_epi64(k0_2, arg13, arg27)
    arg29 = _mm256_mask_add_epi64(k0_2, zmm0, arg26)
    int64_t k3_5 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg19, 1)
    _kortest_mask8_u8(k3_5, k3_5)
    
    if (not(cond:11))
        zmm0 = __vpbroadcastd_ymmqq_memd(0x7000000)
        arg13 = _mm256_mask_and_epi32(k0_2, arg23, zmm0)
        uint64_t k4_10 = _mm256_mask_testn_epi32_mask(k3_5, arg23, zmm0)
        _kortest_mask8_u8(k4_10, k4_10)
        
        if (not(cond:16))
            zmm0 = _mm256_mask_add_epi64(k0_2, arg25, arg32)
            zmm3 = __vpbroadcastq_ymmqq_memq(4)
            arg15 = _mm256_mask_add_epi64(k0_2, _mm256_mask_add_epi64(k0_2, arg24, arg31), arg30)
            zmm0 = _mm256_add_epi64(zmm0, arg14)
            arg16 = _mm256_add_epi64(zmm0, zmm3)
            zmm3 = _mm256_add_epi64(arg15, zmm3)
            uint64_t k5_15 = _kshiftri_mask8(k4_10, 4)
            int64_t k1_45 = __kmovq_maskmskw_masku64_avx512(k4_10)
            arg33[0].o = _mm_mask_xor_epi32(k0_2, arg33[0].o, arg33[0].o)
            int64_t k1_46
            float temp0_265[0x4]
            temp0_265, k1_46 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_45, *(arg7 + zmm3[0].q))
            arg33[0].o = temp0_265
            int64_t k1_47 = __kmovq_maskmskw_masku64_avx512(k5_15)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            int64_t k1_48
            float temp0_267[0x4]
            temp0_267, k1_48 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_47, *(arg7 + arg16[0]))
            zmm3[0].o = temp0_267
            arg16 = __vpbroadcastq_ymmqq_memq(8)
            zmm27 = _mm256_mask_add_epi64(k0_2, zmm0, arg16)
            arg16 = _mm256_add_epi64(arg15, arg16)
            int64_t k1_49 = __kmovq_maskmskw_masku64_avx512(k4_10)
            arg34[0].o = _mm_mask_xor_epi32(k0_2, arg34[0].o, arg34[0].o)
            int64_t k1_50
            float temp0_272[0x4]
            temp0_272, k1_50 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_49, *(arg7 + arg16[0]))
            arg34[0].o = temp0_272
            int64_t k1_51 = __kmovq_maskmskw_masku64_avx512(k5_15)
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t k1_52
            float temp0_274[0x4]
            temp0_274, k1_52 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_51, *(arg7 + zmm27[0]))
            arg16[0].o = temp0_274
            zmm3 = _mm256_insertf32x4(k0_2, arg33, zmm3[0].o, 1)
            arg16 = _mm256_insertf32x4(k0_2, arg34, arg16[0].o, 1)
            arg33 = __vpbroadcastq_ymmu64_maskmskw_memu64_avx512(k0_2, 0xc)
            zmm0 = _mm256_mask_add_epi64(k0_2, zmm0, arg33)
            arg15 = _mm256_mask_add_epi64(k0_2, arg15, arg33)
            int64_t k1_53 = __kmovq_maskmskw_masku64_avx512(k4_10)
            arg33[0].o = _mm_mask_xor_epi32(k0_2, arg33[0].o, arg33[0].o)
            int64_t k1_54
            float temp0_281[0x4]
            temp0_281, k1_54 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_53, *(arg7 + arg15[0].q))
            arg33[0].o = temp0_281
            int64_t k5_16
            float temp0_282[0x4]
            temp0_282, k5_16 =
                __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_15, *(arg7 + zmm0[0]))
            zmm0 = _mm256_insertf32x4(k0_2, arg33, temp0_282, 1)
            arg43 = _mm256_mask_storeu_ps(k4_10, zmm3)
            arg44 = _mm256_mask_storeu_ps(k4_10, arg16)
            arg45 = _mm256_mask_storeu_ps(k4_10, zmm0)
        
        int64_t k3_6 = _mm256_mask_test_epi32_mask(k3_5, arg13, arg13)
        _kortest_mask8_u8(k3_6, k3_6)
        
        if (not(cond:20))
            zmm0 = _mm256_slli_epi32(arg20, 0x1f)
            int64_t k4_11 = _mm256_movepi32_mask(zmm0)
            arg13[0].o = zx.o(0)
            int64_t k1_55 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_6, arg13, zmm0)
            _kortest_mask8_u8(k1_55, k1_55)
            
            if (cond:28)
                zmm3 = _mm256_mask_mov_epi64(k0_2, arg29)
                arg13 = _mm256_mask_mov_epi64(k0_2, arg28)
            else
                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                _mm256_mask_mov_epi64(k0_2, arg29)
                zmm3 = _mm256_mask_add_epi64(k1_55, arg29, zmm0)
                int64_t k5_17 = _kshiftri_mask8(k1_55, 4)
                _mm256_mask_mov_epi64(k0_2, arg28)
                arg13 = _mm256_mask_add_epi64(k5_17, arg28, zmm0)
                arg15 = _mm256_mask_add_epi64(k0_2, arg25, arg32)
                arg16 =
                    _mm256_mask_add_epi64(k0_2, _mm256_mask_add_epi64(k0_2, arg24, arg31), arg30)
                arg15 = _mm256_add_epi64(_mm256_add_epi64(arg15, arg14), zmm0)
                zmm0 = _mm256_add_epi64(arg16, zmm0)
                int64_t k5_18 = _kshiftri_mask8(k1_55, 4)
                arg16[0].o = zx.o(0)
                arg33[0].o = _mm_mask_xor_epi32(k0_2, arg33[0].o, arg33[0].o)
                int64_t k1_56
                float temp0_300[0x4]
                temp0_300, k1_56 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_55, *(arg7 + zmm0[0]))
                arg33[0].o = temp0_300
                int64_t k5_19
                float temp0_301[0x4]
                temp0_301, k5_19 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_18, *(arg7 + arg15[0].q))
                arg16[0].o = temp0_301
                arg15 = _mm256_insertf32x4(k0_2, arg33, arg16[0].o, 1)
            
            arg43 = _mm256_mask_storeu_ps(k3_6, _mm256_mask_mov_ps(k4_11, arg15))
            zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
            arg15 = _mm256_mask_and_epi32(k0_2, arg23, zmm0)
            int64_t k1_57 = _mm256_mask_test_epi32_mask(k3_6, arg23, zmm0)
            _kortest_mask8_u8(k1_57, k1_57)
            
            if (not(cond:39))
                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                _mm256_mask_mov_epi64(k0_2, zmm3)
                arg33 = _mm256_mask_add_epi64(k1_57, zmm3, zmm0)
                int64_t k4_12 = _kshiftri_mask8(k1_57, 4)
                int64_t k5_20 = _kshiftri_mask8(k1_57, 4)
                cond:10 = true
                cond:15 = true
                cond:19 = true
                cond:26 = true
                cond:27 = true
                cond:31 = true
                cond:32 = true
                cond:35 = true
                cond:36 = true
                cond:37 = true
                cond:38 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                cond:43 = true
                arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                int64_t k1_58
                float temp0_313[0x4]
                temp0_313, k1_58 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_57, *zmm3[0].q)
                arg16[0].o = temp0_313
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                int64_t k5_21
                float temp0_315[0x4]
                temp0_315, k5_21 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_20, *arg13[0].q)
                zmm3[0].o = temp0_315
                arg13 = _mm256_mask_add_epi64(k4_12, arg13, zmm0)
                arg16 = _mm256_insertf128_ps(arg16, zmm3[0].o, 1)
                zmm3 = _mm256_mask_mov_epi64(k0_2, arg33)
            
            arg44 = _mm256_mask_storeu_ps(k3_6, 
                _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, arg15, arg15), arg16))
            zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
            arg15 = _mm256_mask_and_epi32(k0_2, arg23, zmm0)
            int64_t k1_60 = _mm256_mask_test_epi32_mask(k3_6, arg23, zmm0)
            _kortest_mask8_u8(k1_60, k1_60)
            
            if (not(cond:38))
                int64_t k4_13 = _kshiftri_mask8(k1_60, 4)
                zmm0[0].o = zx.o(0)
                cond:10 = true
                cond:15 = true
                cond:19 = true
                cond:26 = true
                cond:27 = true
                cond:31 = true
                cond:32 = true
                cond:35 = true
                cond:36 = true
                cond:37 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                cond:43 = true
                arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
                int64_t k1_61
                float temp0_324[0x4]
                temp0_324, k1_61 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_60, *zmm3[0].q)
                arg16[0].o = temp0_324
                int64_t k4_14
                float temp0_325[0x4]
                temp0_325, k4_14 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k4_13, *arg13[0].q)
                zmm0[0].o = temp0_325
                arg13 = _mm256_insertf128_ps(arg16, zmm0[0].o, 1)
            
            zmm0 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, arg15, arg15), arg13)
            arg45 = _mm256_mask_storeu_ps(k3_6, zmm0)
    
    _ktest_mask8_u8(k2_14, k0_2)
    
    if (not(cond:15))
        int64_t k1_63 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg19, 3)
        _kortest_mask8_u8(k1_63, k1_63)
        
        if (not(cond:19))
            __return_addr.d = _store_mask32(k1_63)
            arg_20[0].w = _store_mask16(arg11)
            zmm0[0].o = zx.o(0)
            arg_100 = zmm0
            arg_e0 = zmm0
            arg_c0 = zmm0
            arg_a0 = zmm0
            arg_80 = zmm0
            arg_60 = zmm0
            int64_t k4_15 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(
                _mm256_movepi32_mask(_mm256_slli_epi32(arg20, 0x1f)), arg19, 3)
            uint64_t k5_22 = _kand_mask8(k2_14, k4_15)
            _kortest_mask8_u8(k5_22, k5_22)
            
            if (not(cond:27))
                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                int64_t k6_3 = _kshiftri_mask8(k5_22, 4)
                _mm256_mask_mov_epi64(k0_2, arg27)
                arg13 = _mm256_mask_add_epi64(k6_3, arg27, zmm0)
                _mm256_mask_mov_epi64(k0_2, arg26)
                zmm3 = _mm256_mask_add_epi64(k5_22, arg26, zmm0)
                uint64_t k1_65 = _kshiftri_mask8(k5_22, 4)
                cond:10 = true
                cond:26 = true
                cond:31 = true
                cond:32 = true
                cond:35 = true
                cond:36 = true
                cond:37 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                cond:43 = true
                zmm0[0].o = zx.o(0)
                int64_t k7_4
                float temp0_337[0x4]
                temp0_337, k7_4 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                    __kmovq_maskmskw_masku64_avx512(k5_22), *arg26[0])
                zmm0[0].o = temp0_337
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                int64_t k7_6
                float temp0_339[0x4]
                temp0_339, k7_6 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                    __kmovq_maskmskw_masku64_avx512(k1_65), *arg27[0])
                arg15[0].o = temp0_339
                arg_c0 = _mm256_mask_storeu_ps(k4_15, _mm256_insertf128_ps(zmm0, arg15[0].o, 1))
                zmm0 = __vpbroadcastq_ymmqq_memq(8)
                arg26 = _mm256_mask_add_epi64(k5_22, arg26, zmm0)
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                int64_t k5_23
                float temp0_345[0x4]
                temp0_345, k5_23 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_22, *zmm3[0].q)
                arg15[0].o = temp0_345
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                int64_t k1_66
                float temp0_347[0x4]
                temp0_347, k1_66 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_65, *arg13[0].q)
                zmm3[0].o = temp0_347
                arg27 = _mm256_mask_add_epi64(k6_3, arg27, zmm0)
                arg_60 = _mm256_mask_storeu_ps(k4_15, _mm256_insertf128_ps(arg15, zmm3[0].o, 1))
            
            int64_t k4_16 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_2, arg19, 3)
            int64_t k5_24 =
                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_16, arg23, 0x2000000)
            uint64_t k6_4 = _kand_mask8(k2_14, k5_24)
            _kortest_mask8_u8(k6_4, k6_4)
            
            if (not(cond:32))
                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                int64_t k7_7 = _kshiftri_mask8(k6_4, 4)
                _mm256_mask_mov_epi64(k0_2, arg27)
                arg13 = _mm256_mask_add_epi64(k7_7, arg27, zmm0)
                _mm256_mask_mov_epi64(k0_2, arg26)
                zmm3 = _mm256_mask_add_epi64(k6_4, arg26, zmm0)
                uint64_t k1_67 = _kshiftri_mask8(k6_4, 4)
                cond:10 = true
                cond:26 = true
                cond:31 = true
                cond:35 = true
                cond:36 = true
                cond:37 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                cond:43 = true
                int64_t k3_7 = __kmovq_maskmskw_masku64_avx512(k6_4)
                zmm0[0].o = zx.o(0)
                int64_t k3_8
                float temp0_356[0x4]
                temp0_356, k3_8 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_7, *arg26[0])
                zmm0[0].o = temp0_356
                int64_t k3_9 = __kmovq_maskmskw_masku64_avx512(k1_67)
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                int64_t k3_10
                float temp0_358[0x4]
                temp0_358, k3_10 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_9, *arg27[0])
                arg15[0].o = temp0_358
                arg_e0 = _mm256_mask_storeu_ps(k5_24, _mm256_insertf128_ps(zmm0, arg15[0].o, 1))
                zmm0 = __vpbroadcastq_ymmqq_memq(8)
                arg26 = _mm256_mask_add_epi64(k6_4, arg26, zmm0)
                arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
                int64_t k6_5
                float temp0_364[0x4]
                temp0_364, k6_5 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k6_4, *zmm3[0].q)
                arg15[0].o = temp0_364
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                int64_t k1_68
                float temp0_366[0x4]
                temp0_366, k1_68 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_67, *arg13[0].q)
                zmm3[0].o = temp0_366
                arg27 = _mm256_mask_add_epi64(k7_7, arg27, zmm0)
                arg_80 = _mm256_mask_storeu_ps(k5_24, _mm256_insertf128_ps(arg15, zmm3[0].o, 1))
            
            arg11 = _load_mask16(arg_20[0].w)
            int64_t k4_17 =
                __vptestmd_maskmskw_maskmskw_ymmu32_memu32_avx512(k4_16, arg23, 0x4000000)
            uint64_t k5_25 = _kand_mask8(k2_14, k4_17)
            _kortest_mask8_u8(k5_25, k5_25)
            
            if (not(cond:37))
                zmm0 = __vpbroadcastq_ymmqq_memq(4)
                uint64_t k1_69 = _kshiftri_mask8(k5_25, 4)
                cond:10 = true
                cond:26 = true
                cond:31 = true
                cond:35 = true
                cond:36 = true
                cond:40 = true
                cond:41 = true
                cond:42 = true
                cond:43 = true
                int64_t k3_11 = __kmovq_maskmskw_masku64_avx512(k5_25)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                int64_t k3_12
                float temp0_372[0x4]
                temp0_372, k3_12 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k3_11, *arg26[0])
                arg13[0].o = temp0_372
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                int64_t k3_14
                float temp0_374[0x4]
                temp0_374, k3_14 = __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(
                    __kmovq_maskmskw_masku64_avx512(k1_69), *arg27[0])
                zmm3[0].o = temp0_374
                arg27 = _mm256_mask_add_epi64(_kshiftri_mask8(k5_25, 4), arg27, zmm0)
                arg26 = _mm256_mask_add_epi64(k5_25, arg26, zmm0)
                zmm0 = _mm256_insertf128_ps(arg13, zmm3[0].o, 1)
                arg_100 = _mm256_mask_storeu_ps(k4_17, zmm0)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                int64_t k5_26
                float temp0_380[0x4]
                temp0_380, k5_26 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k5_25, *arg26[0])
                zmm0[0].o = temp0_380
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                int64_t k1_70
                float temp0_382[0x4]
                temp0_382, k1_70 =
                    __vgatherqps_xmmf32_maskmskw_memf32_avx512_vl256(k1_69, *arg27[0])
                arg13[0].o = temp0_382
                arg_a0 = _mm256_mask_storeu_ps(k4_17, _mm256_insertf128_ps(zmm0, arg13[0].o, 1))
            
            zmm0 = _mm256_mask_add_epi64(k0_2, arg25, arg32)
            arg13 = __vpbroadcastq_ymmqq_memq(4)
            zmm3 = _mm256_mask_add_epi64(k0_2, _mm256_mask_add_epi64(k0_2, arg24, arg31), arg30)
            zmm0 = _mm256_add_epi64(_mm256_add_epi64(zmm0, arg14), arg13)
            arg13 = _mm256_add_epi64(zmm3, arg13)
            uint64_t k4_18 = _load_mask32(__return_addr.d)
            int64_t k1_71 = _kshiftri_mask8(k4_18, 4)
            int64_t k3_16 = __kmovq_maskmskw_masku64_avx512(k4_18)
            zmm3[0].o = zx.o(0)
            int64_t k3_17
            uint32_t temp0_392[0x4]
            temp0_392, k3_17 =
                __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k3_16, *(arg7 + arg13[0].q))
            zmm3[0].o = temp0_392
            arg13[0].o = zx.o(0)
            int64_t k1_72
            uint32_t temp0_393[0x4]
            temp0_393, k1_72 =
                __vpgatherqd_xmmu32_maskmskw_memu32_avx512_vl256(k1_71, *(arg7 + zmm0[0]))
            arg13[0].o = temp0_393
            zmm0 = _mm256_inserti128_si256(zmm3, arg13[0].o, 1)
            arg13 = __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                _mm256_srli_epi32(zmm0, 0xa), 0x7ff)
            zmm3 = __vdivps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_2, 
                _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                    __vpandd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, zmm0, 0x3ff), 0xfffffe01)), 
                0x43ff8000)
            arg26 = _mm256_mask_load_ps(k0_2, arg_a0)
            arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg_60, zmm3, arg_c0)
            zmm3 = __vpbroadcastd_ymmqq_memd(0xfffffc01)
            arg13 = _mm256_cvtepi32_ps(_mm256_add_epi32(arg13, zmm3))
            arg27 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_2, 1023f)
            arg13 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_mask_div_ps(k0_2, arg13, arg27), arg_80, 
                arg_e0)
            zmm0 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                _mm256_mask_div_ps(k0_2, 
                    _mm256_cvtepi32_ps(_mm256_add_epi32(_mm256_srli_epi32(zmm0, 0x15), zmm3)), 
                    arg27), 
                k0_2, arg26, arg_100)
            arg43 = _mm256_mask_storeu_ps(k4_18, arg15)
            arg44 = _mm256_mask_storeu_ps(k4_18, arg13)
            arg45 = _mm256_mask_storeu_ps(k4_18, zmm0)
        
        k0_2 = _kxor_mask8(__vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_2, arg19, 3), k0_2)
        _ktest_mask8_u8(k2_14, k0_2)
        
        if (not(cond:26))
            int64_t k3_18 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg19, 2)
            _kortest_mask8_u8(k3_18, k3_18)
            
            if (not(cond:31))
                zmm0 = _mm256_slli_epi32(arg20, 0x1f)
                int64_t k4_19 = _mm256_movepi32_mask(zmm0)
                arg13[0].o = zx.o(0)
                int64_t k1_74 =
                    __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_18, arg13, zmm0)
                _kortest_mask8_u8(k1_74, k1_74)
                
                if (not(cond:36))
                    zmm0 = __vpbroadcastq_ymmqq_memq(2)
                    arg29 = _mm256_mask_add_epi64(k1_74, arg29, zmm0)
                    int64_t k5_27 = _kshiftri_mask8(k1_74, 4)
                    arg28 = _mm256_mask_add_epi64(k5_27, arg28, zmm0)
                    zmm0 = _mm256_mask_add_epi64(k0_2, arg25, arg32)
                    arg13 = _mm256_mask_add_epi64(k0_2, arg24, arg31)
                    zmm3 = __vpbroadcastq_ymmqq_memq(4)
                    arg13 = _mm256_mask_add_epi64(k0_2, arg13, arg30)
                    zmm0 = _mm256_mask_add_epi64(k5_27, _mm256_add_epi64(zmm0, arg14), zmm3)
                    arg13 = _mm256_mask_add_epi64(k1_74, arg13, zmm3)
                    int64_t r10_1 = arg13[0].q
                    int64_t r9_2 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    arg13[0].o = _mm256_extracti128_si256(arg13, 1)
                    int64_t r11_2 = arg13[0].q
                    int64_t r14_1 = __vpextrq_gpr64q_xmmdq_immb(arg13[0].o, 1)
                    uint64_t rdi_3 = zmm0[0]
                    int64_t rsi_3 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = _mm256_extracti128_si256(zmm0, 1)
                    uint64_t rcx_1 = zmm0[0]
                    int64_t rax_4 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                    zmm0[0].o = zx.o(*(arg7 + r10_1))
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + r9_2), 1)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + r11_2), 2)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + r14_1), 3)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rdi_3), 4)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rsi_3), 5)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rcx_1), 6)
                    zmm0[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(zmm0[0].o, *(arg7 + rax_4), 7)
                    arg13 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                        _mm256_cvtepu16_epi32(zmm0[0].o), 0xffffff01))
                
                arg43 = _mm256_mask_storeu_ps(k3_18, _mm256_mask_mov_ps(k4_19, arg13))
                zmm0 = __vpbroadcastd_ymmqq_memd(0x2000000)
                arg13 = _mm256_mask_and_epi32(k0_2, arg23, zmm0)
                int64_t k4_20 = _mm256_mask_test_epi32_mask(k3_18, arg23, zmm0)
                _kortest_mask8_u8(k4_20, k4_20)
                
                if (not(cond:41))
                    char temp0_469 = _cvtmask32_u32(k4_20)
                    
                    if ((temp0_469 & 1) == 0)
                        if ((temp0_469 & 2) != 0)
                            goto label_14016b932
                        
                        goto label_14016b57f
                    
                    arg14[0].o = __vpbroadcastw_xmmdq_memw(*arg29[0].o)
                    
                    if ((temp0_469 & 2) != 0)
                    label_14016b932:
                        uint64_t rax_26 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg29[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_26, 1)
                        
                        if ((temp0_469 & 4) == 0)
                            goto label_14016b589
                        
                        goto label_14016b948
                    
                label_14016b57f:
                    
                    if ((temp0_469 & 4) == 0)
                    label_14016b589:
                        
                        if ((temp0_469 & 8) != 0)
                            goto label_14016b963
                        
                        goto label_14016b593
                    
                label_14016b948:
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg29, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 2)
                    
                    if ((temp0_469 & 8) != 0)
                    label_14016b963:
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg29, 1)
                        uint16_t* rax_28 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_28, 3)
                        
                        if ((temp0_469 & 0x10) == 0)
                            goto label_14016b59d
                        
                        goto label_14016b985
                    
                label_14016b593:
                    
                    if ((temp0_469 & 0x10) != 0)
                    label_14016b985:
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg28[0].o, 4)
                        
                        if ((temp0_469 & 0x20) != 0)
                        label_14016b994:
                            uint16_t* rax_30 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg28[0].o, 1)
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_30, 5)
                            
                            if ((temp0_469 & 0x40) == 0)
                                goto label_14016b5b1
                            
                            goto label_14016b9aa
                    else
                    label_14016b59d:
                        
                        if ((temp0_469 & 0x20) != 0)
                            goto label_14016b994
                    
                    int64_t k1_75
                    
                    if ((temp0_469 & 0x40) != 0)
                    label_14016b9aa:
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg28, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 6)
                        zmm3 = __vpbroadcastq_ymmqq_memq(2)
                        k1_75 = _kshiftri_mask8(k4_20, 4)
                        cond:10 = temp0_469 == 0
                        cond:35 = temp0_469 == 0
                        cond:40 = temp0_469 == 0
                        cond:42 = temp0_469 == 0
                        cond:43 = temp0_469 == 0
                        
                        if (temp0_469 s< 0)
                        label_14016b9d2:
                            zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg28, 1)
                            uint16_t* rax_32 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_32, 7)
                    else
                    label_14016b5b1:
                        zmm3 = __vpbroadcastq_ymmqq_memq(2)
                        k1_75 = _kshiftri_mask8(k4_20, 4)
                        cond:10 = temp0_469 == 0
                        cond:35 = temp0_469 == 0
                        cond:40 = temp0_469 == 0
                        cond:42 = temp0_469 == 0
                        cond:43 = temp0_469 == 0
                        
                        if (temp0_469 s< 0)
                            goto label_14016b9d2
                    
                    arg29 = _mm256_mask_add_epi64(k4_20, arg29, zmm3)
                    arg28 = _mm256_mask_add_epi64(k1_75, arg28, zmm3)
                    arg14 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                        _mm256_cvtepu16_epi32(arg14[0].o), 0xffffff01))
                
                arg44 = _mm256_mask_storeu_ps(k3_18, 
                    _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, arg13, arg13), arg14))
                zmm0 = __vpbroadcastd_ymmqq_memd(0x4000000)
                arg13 = _mm256_mask_and_epi32(k0_2, arg23, zmm0)
                int64_t k1_77 = _mm256_mask_test_epi32_mask(k3_18, arg23, zmm0)
                _kortest_mask8_u8(k1_77, k1_77)
                
                if (not(cond:43))
                    char temp0_480 = _cvtmask32_u32(k1_77)
                    
                    if ((temp0_480 & 1) == 0)
                        if ((temp0_480 & 2) != 0)
                            goto label_14016b9fe
                        
                        goto label_14016b639
                    
                    arg14[0].o = __vpbroadcastw_xmmdq_memw(*arg29[0].o)
                    
                    if ((temp0_480 & 2) != 0)
                    label_14016b9fe:
                        uint64_t rax_34 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg29[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_34, 1)
                        
                        if ((temp0_480 & 4) == 0)
                            goto label_14016b643
                        
                        goto label_14016ba14
                    
                label_14016b639:
                    
                    if ((temp0_480 & 4) == 0)
                    label_14016b643:
                        
                        if ((temp0_480 & 8) != 0)
                            goto label_14016ba2f
                        
                        goto label_14016b64d
                    
                label_14016ba14:
                    zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg29, 1)
                    arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 2)
                    
                    if ((temp0_480 & 8) != 0)
                    label_14016ba2f:
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg29, 1)
                        uint16_t* rax_36 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_36, 3)
                        
                        if ((temp0_480 & 0x10) == 0)
                            goto label_14016b657
                        
                        goto label_14016ba51
                    
                label_14016b64d:
                    
                    if ((temp0_480 & 0x10) != 0)
                    label_14016ba51:
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *arg28[0].o, 4)
                        
                        if ((temp0_480 & 0x20) != 0)
                        label_14016ba60:
                            uint16_t* rax_38 = __vpextrq_gpr64u64_xmmu64_imm8_avx512(arg28[0].o, 1)
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_38, 5)
                            
                            if ((temp0_480 & 0x40) == 0)
                                goto label_14016b66b
                            
                            goto label_14016ba76
                    else
                    label_14016b657:
                        
                        if ((temp0_480 & 0x20) != 0)
                            goto label_14016ba60
                    
                    if ((temp0_480 & 0x40) != 0)
                    label_14016ba76:
                        zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg28, 1)
                        arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *zmm0[0], 6)
                        cond:10 = temp0_480 == 0
                        cond:35 = temp0_480 == 0
                        cond:40 = temp0_480 == 0
                        cond:42 = temp0_480 == 0
                        
                        if (temp0_480 s< 0)
                        label_14016ba8f:
                            zmm0[0].o = _mm256_extracti32x4_epi32(k0_2, arg28, 1)
                            int64_t rax_40 = __vpextrq_gpr64q_xmmdq_immb(zmm0[0].o, 1)
                            arg14[0].o = __vpinsrw_xmmdq_xmmdq_memw_immb(arg14[0].o, *rax_40, 7)
                    else
                    label_14016b66b:
                        cond:10 = temp0_480 == 0
                        cond:35 = temp0_480 == 0
                        cond:40 = temp0_480 == 0
                        cond:42 = temp0_480 == 0
                        
                        if (temp0_480 s< 0)
                            goto label_14016ba8f
                    
                    arg14 = _mm256_cvtepi32_ps(__vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(k0_2, 
                        _mm256_cvtepu16_epi32(arg14[0].o), 0xffffff01))
                
                zmm0 = _mm256_mask_mov_ps(_mm256_mask_test_epi32_mask(k0_2, arg13, arg13), arg14)
                arg45 = _mm256_mask_storeu_ps(k3_18, zmm0)
            
            k0_2 =
                _kxor_mask8(k0_2, __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k0_2, arg19, 2))
            int64_t k1_80 = _kand_mask8(k2_14, k0_2)
            _kortest_mask8_u8(k1_80, k1_80)
            
            if (not(cond:35))
                int64_t k3_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_memu32_avx512(k2_14, arg19, 6)
                _kortest_mask8_u8(k3_19, k3_19)
                
                if (not(cond:40))
                    zmm0[0].o = zx.o(0)
                    arg43 = _mm256_mask_storeu_ps(k3_19, zmm0)
                    arg44 = _mm256_mask_storeu_ps(k3_19, zmm0)
                    arg45 = _mm256_mask_storeu_ps(k3_19, zmm0)
                
                int64_t k1_81 =
                    __vpcmpd_maskmskw_maskmskw_ymmi32_memi32_imm8_avx512(k1_80, arg19, 6, 4)
                _kortest_mask8_u8(k1_81, k1_81)
                
                if (not(cond:42))
                    zmm0[0].o = zx.o(0)
                    arg43 = _mm256_mask_storeu_ps(k1_81, zmm0)
                    arg44 = _mm256_mask_storeu_ps(k1_81, zmm0)
                    arg45 = _mm256_mask_storeu_ps(k1_81, zmm0)
    
    zmm3 = arg39
    arg15 = arg40
    arg16 = arg41
    zmm0 = _mm256_sub_ps(arg43, zmm3)
    arg13 = _mm256_sub_ps(arg44, arg15)
    arg14 = _mm256_sub_ps(arg45, arg16)
    zmm0 = _mm256_fmadd_ps(zmm0, zmm13, zmm3)
    arg13 = _mm256_fmadd_ps(arg13, zmm13, arg15)
    arg14 = _mm256_fmadd_ps(arg14, zmm13, arg16)
    arg39 = _mm256_mask_storeu_ps(k2_14, zmm0)
    arg40 = _mm256_mask_storeu_ps(k2_14, arg13)
    arg41 = _mm256_mask_storeu_ps(k2_14, arg14)

int64_t k1_82 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg11, arg35, arg17)
_kortest_mask8_u8(k1_82, k1_82)

if (not(cond:10))
    zmm0[0].o = zx.o(0)
    arg39 = _mm256_mask_storeu_ps(k1_82, zmm0)
    arg40 = _mm256_mask_storeu_ps(k1_82, zmm0)
    arg41 = _mm256_mask_storeu_ps(k1_82, zmm0)

arg13[0].o = arg39[0].o
arg14[0].o = arg39[4].o
zmm3[0].o = arg40[0].o
arg15[0].o = arg40[4].o
arg16[0].o = arg41[0].o
arg18 = arg41[2].o
arg23[0].o = _mm_mask_xor_ps(k0_2, arg23[0].o, arg23[0].o)
zmm0[0].o = _mm_mask_unpacklo_ps(k0_2, arg16[0].o, arg23[0].o)
arg16[0].o = _mm_mask_unpackhi_ps(k0_2, arg16[0].o, arg23[0].o)
arg17[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
arg13[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
zmm3[0].o = arg17[0].q | zmm0[0] << 0x40
int128_t arg_4c0 = zmm3[0].o
zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg17[0].o, zmm0[0].o)
int128_t arg_4d0 = zmm0[0].o
zmm0[0].o = arg13[0].q | arg16[0] << 0x40
int128_t arg_4e0 = zmm0[0].o
zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg13[0].o, arg16[0].o)
int128_t arg_4f0 = zmm0[0].o
zmm0[0].o = _mm_mask_unpacklo_ps(k0_2, arg18, arg23[0].o)
arg13[0].o = _mm_mask_unpackhi_ps(k0_2, arg18, arg23[0].o)
zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
arg14[0].o = __vunpckhps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg15[0].o)
arg15[0].o = zmm3[0].q | zmm0[0] << 0x40
int128_t arg_500 = arg15[0].o
zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
int128_t arg_510 = zmm0[0].o
zmm0[0].o = arg14[0] | arg13[0].q << 0x40
int128_t arg_520 = zmm0[0].o
zmm0[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
int128_t arg_530 = zmm0[0].o
uint64_t i = zx.q(arg3)
int64_t result
int256_t zmm9

do
    uint64_t rcx_2 = _tzcnt_u64(i)
    int256_t arg_5a0 = zmm9
    result = sx.q(*(&arg_5a0 + ((zx.q(rcx_2.d) & 7) << 2))) * 0x30
    zmm0[0].o = (&arg_4c0)[rcx_2]
    *(arg8 + result + 0x20) = zmm0[0].o
    i &= rol.q(-2, rcx_2.b)
while (i != 0)

arg17[0].o = *(arg5 + 0x550)
*(arg5 + 0x560)
arg19[0].o = *(arg5 + 0x570)
zmm9.o = *(arg5 + 0x580)
arg20[0].o = *(arg5 + 0x590)
arg38[0] = *(arg5 + 0x5a0)
arg21[0].o = *(arg5 + 0x5b0)
zmm13[0].o = *(arg5 + 0x5c0)
arg22[0] = *(arg5 + 0x5d0)
int512_t zmm15
zmm15.o = *(arg5 + 0x5e0)
*(arg5 + 0x5f8)
*(arg5 + 0x600)
*(arg5 + 0x608)
*(arg5 + 0x610)
*(arg5 + 0x618)
*(arg5 + 0x620)
*(arg5 + 0x628)
*(arg5 + 0x630)
_mm256_zeroupper()
return result
