// 函数: sub_141228f00
// 地址: 0x141228f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
int128_t zmm10
int128_t var_88 = zmm10
void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
void* r14 = arg3
void* i_3 = nullptr
uint128_t var_178
int32_t var_168
int32_t var_148
int16_t var_140
int32_t var_120
uint128_t zmm0

if (*(arg1 + 0x1e8) == 0)
    int64_t rbx_1 = 0
    zmm0 = data_143f02308
    var_168 = data_143f02318
    int32_t rcx_1 = data_143ed3388 | 0x200000
    var_140 = 0
    wchar16 const* const var_138_1 = u"UnknownTextureVolume"
    wchar16 const* const var_108 = u"LPV_A0"
    wchar16 const* const var_100_1 = u"LPV_B0"
    wchar16 const* const var_f8_1 = u"LPV_A1"
    wchar16 const* const var_f0_1 = u"LPV_B1"
    wchar16 const* const var_e8_1 = u"LPV_A2"
    wchar16 const* const var_e0_1 = u"LPV_B2"
    wchar16 const* const var_d8_1 = u"LPV_A3"
    wchar16 const* const var_d0_1 = u"LPV_B3"
    wchar16 const* const var_c8_1 = u"LPV_A4"
    wchar16 const* const var_c0_1 = u"LPV_B4"
    wchar16 const* const var_b8_1 = u"LPV_A5"
    wchar16 const* const var_b0_1 = u"LPV_B5"
    wchar16 const* const var_a8_1 = u"LPV_A6"
    int16_t var_12f_1 = 0
    char var_130_1 = 0
    i_3 = 2
    wchar16 const* const* r12_1 = &var_108
    wchar16 const* const var_a0_1 = u"LPV_B6"
    var_178 = zmm0
    int32_t var_164_1
    __builtin_memcpy(&var_164_1, 
        "\x20\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 
        0x16)
    int32_t var_14c_1 = 0xa
    var_148 = rcx_1
    int32_t var_144_1 = 0x10008
    wchar16 const* const i_2 = 2
    wchar16 const* const i
    
    do
        wchar16 const* const* rdi_1 = r12_1
        int64_t j_1 = 7
        int64_t j
        
        do
            sub_1419a0ce0(&data_1439c9260, arg2, &var_178, arg1 + 0x10 + rbx_1, *rdi_1, 1, 1, 0)
            rbx_1 += 8
            rdi_1 = &rdi_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        r12_1 = &r12_1[1]
        i = i_2
        i_2 -= 1
    while (i != 1)
    int64_t rbx_2 = 0
    i_2 = u"LPV_GV0"
    wchar16 const* const* rdi_2 = &i_2
    var_120 = 0x42f41e00
    wchar16 const* const var_118_1 = u"LPV_GV2"
    void* i_1
    
    do
        sub_1419a0ce0(&data_1439c9260, arg2, &var_178, arg1 + 0x140 + rbx_2, *rdi_2, 1, 1, 0)
        rbx_2 += 8
        rdi_2 = &rdi_2[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    var_f8_1.d = data_143f02318
    char var_1a0_3 = i_3.b
    var_d8_1.d = data_143ed3388 | 0x200000
    wchar16 const* const var_c8_2 = u"UnknownTextureVolume"
    char var_1a8_3 = 1
    char var_1b0_3 = 1
    wchar16 const* const var_1b8_3 = u"LPVAOVolume"
    var_d0_1.w = i_3.w
    var_c0_1:1.w = i_3.w
    var_108.o = data_143f02308
    __builtin_memcpy(&var_f8_1:4, 
        "\x20\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x01\x00\x00\x00\x00\x00\x01\x00\x01\x00", 
        0x16)
    var_e0_1:4.d = 3
    var_d8_1:4.d = 0x10008
    var_c0_1.b = 1
    sub_1419a0ce0(&data_1439c9260, arg2, &var_108, arg1 + 0x150, var_1b8_3, var_1b0_3, var_1a8_3, 
        var_1a0_3)
    r14 = arg3
    *(arg1 + 0x1e8) = 1

void* i_4 = i_3
TEB* gsbase
void* rdi_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143e3a9a0 s> *(rdi_3 + 0x14))
    _Init_thread_header(&data_143e3a9a0)
    
    if (data_143e3a9a0 == 0xffffffff)
        sub_140b58260(&data_143e3a998, u"FLightPropagationVolumeSettings", 1)
        _Init_thread_footer(&data_143e3a9a0)

void* i_6 = *(r14 + 0x1510)
void* i_5
void* rbx_4
uint128_t zmm1

while (true)
    if (i_4 != 0)
        i_5 = zx.q(*(i_4 + 0x10)) + 0x14 + i_4 + zx.q(*(i_4 + 0xc))
    else
        i_5 = i_6
    
    i_4 = i_3
    
    if (i_5 != sx.q(*(r14 + 0x1518)) + i_6)
        i_4 = i_5
    
    if (i_4 != 0)
        if (*(i_4 + 4) != data_143e3a998)
            continue
        else
            uint64_t rax_9 = zx.q(*(i_4 + 0x10))
            rbx_4 = i_4 + 0x14 + rax_9
            
            if (i_4 + 0x14 != neg.q(rax_9))
                break
    
    if (data_143e498b0 s> *(rdi_3 + 0x14))
        i_5, arg2 = _Init_thread_header(&data_143e498b0)
        
        if (data_143e498b0 == 0xffffffff)
            zmm1 = data_142f130c0
            data_143e49880:8.d = 0x3ec49ba6
            data_143e498a0 = data_142f13080
            data_143e49870.d = i_3.d
            data_143e49870:4.d = 0x3f800000
            data_143e49870:0xc = 0x45a60000
            data_143e49880:4.d = 0
            data_143e49870:8.d = 0x3f23d70a
            data_143e49880:0xc.d = 0x3f800000
            data_143e49890 = zmm1
            i_5, arg2 = _Init_thread_footer(&data_143e498b0)
    
    rbx_4 = &data_143e49870
    int32_t var_160
    __builtin_memcpy(&var_160, 
        "\xa6\x9b\xc4\x3e\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x41\x00\x00\x80\x3f\x00\x00\xe0\x"
    "40\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x20)
    var_178:0xc.q = 0x45a60000
    var_178.d = i_3.d
    var_178:4.d = 0x3f800000
    int32_t var_164_2 = 0
    var_178:8.d = 0x3f23d70a
    zmm0 = var_178
    var_140.q = 0
    data_143e49880 = var_168.o
    data_143e49870 = zmm0
    data_143e498a0 = var_148.o
    int32_t var_158
    data_143e49890 = var_158.o
    break

zmm0 = *(rbx_4 + 4)
*(arg1 + 0x164) = zmm0.d
arg2.b = zmm0.d f> zx.o(0).d
*(arg1 + 0x168) = arg2.b
*(arg1 + 0x160) = *(rbx_4 + 0xc)

if (arg2.b == 0 || 9.99999975e-05f f>= *(rbx_4 + 0x20))
    i_5.b = 0
else
    i_5.b = 1

*(arg1 + 0x169) = i_5.b
*(arg1 + 0x158) = *(rbx_4 + 0x10)
*(arg1 + 0x15c) = *(rbx_4 + 0x14)
int32_t result

if (0.00100000005f f< *(rbx_4 + 0x10) || i_5.b != 0)
    result.b = 1
else
    result.b = 0

*(arg1 + 0x16a) = result.b
*(arg1 + 0x190) = 0

if (arg2.b != 0)
    uint128_t zmm5 = 0x3f800000
    
    if (*(arg1 + 0x170) != 0)
        zmm5 = zx.o(0)
        
        if (*(arg1 + 0x16c) u> 0)
            *(arg1 + 0x170) = 0
    
    *(arg1 + 0x120) = i_3.d
    *(arg1 + 0x9c) = *(arg1 + 0x90)
    *(arg1 + 0xa0) = *(arg1 + 0x94)
    *(arg1 + 0xa4) = *(arg1 + 0x98)
    uint128_t zmm2 = zx.o(*(r14 + 0x60c))
    uint128_t zmm9
    zmm9.d = (*(arg1 + 0x160)).d f* 0.03125f
    uint64_t var_198_1 = zmm2.q
    int32_t var_18c_1 = 0x3f800000
    uint128_t zmm8
    zmm8.d = 1f f/ zmm9.d
    uint128_t zmm4
    zmm4.d = zmm9.d f* data_1439b6570
    zmm0.d = zmm4.d f* *(r14 + 0x348)
    zmm1.d = zmm4.d f* *(r14 + 0x358)
    zmm4.d = zmm4.d f* *(r14 + 0x368)
    zmm0.d = zmm0.d f+ zmm2.d
    zmm4.d = zmm4.d f+ *(r14 + 0x614)
    zmm0.d = zmm0.d f* zmm8.d
    uint128_t zmm7
    zmm7.d = 16f f- zmm0.d
    zmm4.d = zmm4.d f* zmm8.d
    uint128_t zmm3
    zmm3.d = 16f f- zmm4.d
    zmm1.d = zmm1.d f+ _mm_shuffle_ps(zmm2, zmm2, 0x55).d
    *(arg1 + 0x90) = int.d(zmm7.d)
    var_120 = zmm3.d
    *(arg1 + 0x98) = int.d(zmm3.d)
    zmm1.d = zmm1.d f* zmm8.d
    zmm6.d = 16f f- zmm1.d
    *(arg1 + 0x94) = int.d(zmm6.d)
    void* rcx_7 = *(arg1 + 0xa8)
    *(rcx_7 + 0x70) = *(arg1 + 0x9c)
    *(rcx_7 + 0x74) = *(arg1 + 0xa0)
    *(rcx_7 + 0x78) = *(arg1 + 0xa4)
    void* rcx_8 = *(arg1 + 0xa8)
    *(rcx_8 + 0x80) = *(arg1 + 0x90)
    *(rcx_8 + 0x84) = *(arg1 + 0x94)
    *(rcx_8 + 0x88) = *(arg1 + 0x98)
    zmm1 = *(r14 + 0x610)
    zmm3.d = (*(r14 + 0x60c)).d
    zmm2 = *(r14 + 0x614)
    void* rax_24 = *(arg1 + 0xa8)
    _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    zmm3.d = zmm1.d
    _mm_shuffle_ps(zmm3, zmm3, 0xc6)
    zmm3.d = zmm2.d
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
    *(rax_24 + 0x60) = zmm3
    var_198_1.o = zmm3
    *(*(arg1 + 0xa8) + 0x8c) = zmm5.d
    *(*(arg1 + 0xa8) + 0x90) = zmm9.d
    *(*(arg1 + 0xa8) + 0x94) = zmm8.d
    *(*(arg1 + 0xa8) + 0xa8) = *(arg1 + 0x158)
    *(*(arg1 + 0xa8) + 0xac) = *(arg1 + 0x15c)
    zmm0.d = zmm9.d f* *(rbx_4 + 0x18)
    *(*(arg1 + 0xa8) + 0xb4) = zmm0.d
    zmm1.d = zmm9.d f* *(rbx_4 + 8)
    *(*(arg1 + 0xa8) + 0xb0) = zmm1.d
    *(*(arg1 + 0xa8) + 0xbc) = i_3.d
    void* rcx_11 = *(arg1 + 0xa8)
    zmm0.d = (*(rcx_11 + 0xa0)).d f* *(rbx_4 + 0x1c)
    zmm0.d = zmm0.d f* *(data_143e820a8 + 4)
    zmm0.d = zmm0.d f* 0.25f
    *(rcx_11 + 0xb8) = zmm0.d
    *(*(arg1 + 0xa8) + 0x98) = *(rbx_4 + 0x20)
    *(*(arg1 + 0xa8) + 0x9c) = *(rbx_4 + 0x24)
    int32_t var_190_2 = 0
    void* rax_36 = *(arg1 + 0xa8)
    zmm10.d = 1f f/ _mm_cvtepi32_ps(zx.o(data_143ec501c - 1)).d
    *(rax_36 + 0xa4) = zmm10.d
    *(arg1 + 0xcc) = *(rbx_4 + 0x20)
    *(arg1 + 0xd0) = *(rbx_4 + 0x28)
    *(arg1 + 0xd4) = *(rbx_4 + 0x2c)
    *(arg1 + 0xdc) = *(rbx_4 + 0x30)
    *(arg1 + 0xd8) = *(rbx_4 + 0x34)
    *(arg1 + 0x100) = (_mm_unpacklo_ps(*(data_143e821b8 + 4), (*(data_143e822c8 + 4)).q)).q
    zmm0 = zmm7
    *(arg1 + 0x108) = var_190_2
    *(arg1 + 0x10c) = *(rbx_4 + 0x3c)
    *(arg1 + 0x110) = *(rbx_4 + 0x38)
    *(arg1 + 0xb0) = *(arg1 + 0x90)
    *(arg1 + 0xb4) = *(arg1 + 0x94)
    *(arg1 + 0xb8) = *(arg1 + 0x98)
    zmm7 = zx.o(*(arg1 + 0x94))
    *(arg1 + 0xc0) = zmm8.d
    zmm8 = zx.o(*(arg1 + 0x90))
    *(arg1 + 0xbc) = zmm9.d
    void* rax_49 = data_143e81bc8
    zmm0 = _mm_unpacklo_ps(zmm0, zmm6.q)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    *(arg1 + 0xc4) = *(rax_49 + 4)
    void* rax_50 = data_143e81cd8
    zmm7 = _mm_cvtepi32_ps(zmm7)
    int32_t rcx_18 = *(rax_50 + 4)
    *(arg1 + 0xf0) = zmm0.q
    zmm8.d = zmm8.d f- 15.5f
    *(arg1 + 0xc8) = rcx_18
    *(arg1 + 0xf8) = var_120
    zmm5 = *(arg1 + 0x160)
    zmm7.d = zmm7.d f- 15.5f
    zmm9 ^= data_142d3f780
    zmm8.d = zmm8.d f* zmm9.d
    char var_180_1 = 1
    zmm7.d = zmm7.d f* zmm9.d
    zmm6.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x98))).d f- 15.5f
    zmm1.d = zmm5.d f* 0.5f
    zmm2.d = zmm5.d f* 0.5f
    zmm5.d = zmm5.d f* 0.5f
    zmm6.d = zmm6.d f* zmm9.d
    zmm3.d = zmm1.d f+ zmm7.d
    zmm7.d = zmm7.d f- zmm1.d
    zmm0.d = zmm5.d f+ zmm6.d
    zmm4.d = zmm2.d f+ zmm8.d
    zmm8.d = zmm8.d f- zmm2.d
    zmm6.d = zmm6.d f- zmm5.d
    var_120 = zmm0.d
    int32_t var_190_3 = zmm6.d
    var_18c_1.q = (_mm_unpacklo_ps(zmm4, zmm3.q)).q
    int32_t var_190_4 = var_190_3
    int32_t var_184_1 = var_120
    result = var_180_1.d
    zmm0.q = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
    *(arg1 + 0x174) = zmm0
    int64_t var_188
    *(arg1 + 0x184) = var_188
    *(arg1 + 0x18c) = result

__security_check_cookie(rax_1 ^ &var_1d8)
return result
