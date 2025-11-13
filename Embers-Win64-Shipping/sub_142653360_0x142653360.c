// 函数: sub_142653360
// 地址: 0x142653360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14264c010(arg1)
void* const rsi = *(arg1 + 0x20)
int32_t rbx = 0
void* rax_1
int64_t rax_2
void* rdx_1

if (rsi != 0)
    rax_1 = sub_1425aaa30()
    rdx_1 = *(rsi + 0x10)
    rax_2 = sx.q(*(rax_1 + 0x38))

if (rsi == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rsi = nullptr

float zmm6[0x4]
float zmm7[0x4]

if ((*(arg1 + 0xa8) & 1) != 0 && rsi != 0)
    int64_t* rcx_1 = *(rsi + 0x88)
    float zmm8[0x4]
    float zmm9[0x4]
    float zmm10[0x4]
    float zmm11[0x4]
    float zmm12[0x4]
    float zmm13[0x4]
    float zmm14[0x4]
    
    if (rcx_1 != 0)
        arg2, zmm6, zmm7 = sub_14267d990(rcx_1, arg1 + 0x30, arg1 + 0x40, arg1 + 0x50, arg2, zmm6, 
            zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, arg1 + 0x60, arg1 + 0x70, 
            &data_143dbb0c0)

int32_t i = 0
float var_38[0x4] = zmm6
float var_48[0x4] = zmm7
int64_t var_c8 = 0
int32_t var_c0 = 0
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
int64_t var_88 = 0
int32_t var_80 = 0
int64_t var_78 = 0
void** const var_138
char var_120
int64_t var_d8
int32_t var_d0
int64_t var_b0_1
float var_58[0x4]
float zmm0_1[0x4]
float zmm2[0x4]
float zmm3[0x4]

if (*(arg1 + 0x98) s> 0)
    zmm7 = zx.o(0)
    float (* rsi_1)[0x4] = nullptr
    
    do
        int64_t rcx_2 = *(arg1 + 0x90)
        zmm0_1 = zx.o(data_143dbb1f8.q)
        zmm3 = *(rsi_1 + rcx_2 + 0x14)
        zmm2 = *(rsi_1 + rcx_2 + 0x10)
        zmm3[0] = zmm3[0] + zmm3[0]
        arg2.o = *(rsi_1 + rcx_2 + 0xc)
        zmm2[0] = zmm2[0] + zmm2[0]
        var_120 |= 1
        arg2.d = arg2.d f+ arg2.d
        int64_t var_108_1 = zmm0_1.q
        int64_t var_fc_1 = data_143dbb208
        zmm0_1 = data_143f71430
        int64_t* var_110_1 = &var_138
        float var_e8_1 = zmm3[0]
        int32_t var_100_1 = data_143dbb200
        int32_t rax_6 = data_143dbb210
        int32_t var_f0_1 = arg2.d
        float var_ec_1 = zmm2[0]
        int64_t var_130_1 = 0
        int32_t var_128_1 = 0
        int32_t var_124_1 = 1
        int32_t var_118_1 = 6
        var_138 = &data_142e3e618
        int32_t var_f4_1 = rax_6
        zmm2 = *(rsi_1 + rcx_2 + 4)
        zmm6 = *(rsi_1 + rcx_2)
        zmm0_1[0].q = zmm7 u>> 0x40
        zmm3 = _mm_shuffle_ps(zmm7, zmm0_1, 0xc4)
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, (*(rsi_1 + rcx_2 + 8))[0].q), 
            _mm_unpacklo_ps(zmm2, 0)[0].q)
        var_58 = zmm3
        arg2, zmm6, zmm7 = sub_140adf5d0(&var_58, &var_d8)
        arg2.o = zmm6
        int64_t r15_1 = sx.q(var_b0_1.d)
        int64_t var_fc_2 = var_d8
        float var_60_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
        int32_t rax_9 = (r15_1 + 1).d
        arg2.o = _mm_shuffle_ps(arg2.o, zmm6, 0x55)
        int64_t var_108_2 = (_mm_unpacklo_ps(zmm6, arg2.q)).q
        var_b0_1.d = rax_9
        
        if (rax_9 s> var_b0_1:4.d)
            sub_1407755b0(&var_b8)
        
        i += 1
        rsi_1 = &(*rsi_1)[6]
        void*** rcx_6 = r15_1 * 0x58 + var_b8
        *rcx_6 = &data_142e3e610
        rcx_6[1].d = var_130_1.d[0]
        *(rcx_6 + 0xc) = var_130_1
        *(rcx_6 + 0x14) = var_124_1
        rcx_6[3].b ^= (var_120 ^ rcx_6[3].b) & 1
        rcx_6[4].d = 6
        rcx_6[5] = rcx_6
        *rcx_6 = &data_142e3e618
        rcx_6[6] = var_108_2
        rcx_6[7].d = var_60_1
        *(rcx_6 + 0x3c) = var_fc_2
        *(rcx_6 + 0x44) = var_d0
        rcx_6[9].d = var_f0_1[0]
        arg2.o = var_ec_1
        *(rcx_6 + 0x4c) = arg2.d
        rcx_6[0xa].d = var_e8_1[0]
    while (i s< *(arg1 + 0x98))

int32_t i_1 = 0
int64_t var_a0_1

if (*(arg1 + 0x88) s> 0)
    zmm7 = zx.o(0)
    float (* rsi_2)[0x4] = nullptr
    
    do
        int64_t rcx_7 = *(arg1 + 0x80)
        arg2.o = *(rsi_2 + rcx_7 + 0xc)
        var_120 |= 1
        int64_t var_108_3 = data_143dbb1f8.q
        int64_t var_fc_3 = data_143dbb208
        zmm0_1 = data_143f71430
        void** const* var_110_2 = &var_138
        int32_t var_100_3 = data_143dbb200
        int32_t rax_16 = data_143dbb210
        int32_t var_f0_2 = arg2.d
        float var_ec_2 = (*(rsi_2 + rcx_7 + 0x10))[0]
        int64_t var_130_2 = 0
        int32_t var_128_2 = 0
        int32_t var_124_2 = 2
        int32_t var_118_2 = 6
        var_138 = &data_143273288
        int32_t var_f4_3 = rax_16
        zmm2 = *(rsi_2 + rcx_7 + 4)
        zmm6 = *(rsi_2 + rcx_7)
        zmm0_1[0].q = zmm7 u>> 0x40
        zmm3 = _mm_shuffle_ps(zmm7, zmm0_1, 0xc4)
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, (*(rsi_2 + rcx_7 + 8))[0].q), 
            _mm_unpacklo_ps(zmm2, 0)[0].q)
        var_58 = zmm3
        arg2, zmm6, zmm7 = sub_140adf5d0(&var_58, &var_d8)
        arg2.o = zmm6
        int64_t r14 = sx.q(var_a0_1.d)
        int64_t var_fc_4 = var_d8
        float var_60_2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)[0]
        int32_t rax_19 = (r14 + 1).d
        arg2.o = _mm_shuffle_ps(arg2.o, zmm6, 0x55)
        int64_t var_108_4 = (_mm_unpacklo_ps(zmm6, arg2.q)).q
        var_a0_1.d = rax_19
        int64_t var_a8
        
        if (rax_19 s> var_a0_1:4.d)
            sub_1405c5060(&var_a8)
        
        i_1 += 1
        rsi_2 = &(*rsi_2)[5]
        void*** rcx_12 = r14 * 0x50 + var_a8
        *rcx_12 = &data_142e3e610
        rcx_12[1].d = var_130_2.d[0]
        *(rcx_12 + 0xc) = var_130_2
        *(rcx_12 + 0x14) = var_124_2
        rcx_12[3].b ^= (var_120 ^ rcx_12[3].b) & 1
        rcx_12[4].d = 6
        rcx_12[5] = rcx_12
        *rcx_12 = &data_143273288
        rcx_12[6] = var_108_4
        rcx_12[7].d = var_60_2
        *(rcx_12 + 0x3c) = var_fc_4
        *(rcx_12 + 0x44) = var_d0
        rcx_12[9].d = var_f0_2[0]
        arg2.o = var_ec_2
        *(rcx_12 + 0x4c) = arg2.d
    while (i_1 s< *(arg1 + 0x88))

int32_t var_90

if (var_80 + var_90 + var_c0 + var_a0_1.d != neg.d(var_b0_1.d))
    sub_142679b50(&var_c8, arg1 + 0x50, arg1 + 0x60, arg1 + 0x70, &data_143dbb0c0)

if (*(arg1 + 0x38) s> 0 || *(arg1 + 0x58) s> 0)
    rbx = 2

*(arg1 + 0x28) &= 0xfffffffd
*(arg1 + 0x28) |= rbx
return sub_14222ad90(&var_c8)
