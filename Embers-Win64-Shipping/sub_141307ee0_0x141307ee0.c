// 函数: sub_141307ee0
// 地址: 0x141307ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_cc8
int64_t rax_1 = __security_cookie ^ &var_cc8
int32_t r15 = *(arg4 + 0x5c)
int64_t rsi = data_143eb4e98
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

bool var_c88 = *(rsi + (rcx << 2)) != 0
int64_t rsi_1 = sx.q(sub_1422e5a30(arg3))
int32_t r14 = 5
int32_t rcx_2

if (rsi_1.d u> 0x1b || not(test_bit(0x857c041, rsi_1.d)))
    rcx_2 = 4

if ((rsi_1.d u<= 0x1b && test_bit(0x857c041, rsi_1.d))
        || ((*(rsi_1 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
    rcx_2 = 5

int32_t rdx_1 = *(data_143eb26d0 + 4)

if (rdx_1 s< 3)
    rcx_2 = 3
else if (rdx_1 s< rcx_2)
    rcx_2 = rdx_1

void* rax_7 = data_143eb26b8
int32_t var_b98 = rcx_2
int32_t rax_8 = *(rax_7 + 4)

if (rax_8 u> 2)
    rax_8 = 0

float var_c54 = *(data_143eb26e8 + 4)
int32_t rax_12 = *(data_143eb2700 + 4)
__maxss_xmmss_memss((*(data_143eb2730 + 4))[0], 0x40400000)
int64_t r13

if (rsi_1.d u> 0x1b)
    if (((*(rsi_1 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
        r13.b = 1
    else
        r13.b = 0
else if (test_bit(0x857c041, rsi_1.d) || ((*(rsi_1 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
    r13.b = 1
else
    r13.b = 0

int32_t r8 = *(data_143eb2688 + 4)
float zmm14[0x4] = *(data_143eb2748 + 4)

if (zmm14[0] >= 0f)
    _mm_min_ss(zmm14[0], 0x3f800000)

int32_t rcx_4

if (*(arg3 + 0x1524) != 1)
    rcx_4 = *(data_143eb2778 + 4)

int32_t var_c40
int32_t rdx_2

if (*(arg3 + 0x1524) == 1 || rcx_4 s< 0)
    var_c40 = 0
    rdx_2 = 0
else
    rdx_2 = 2
    
    if (rcx_4 s< 2)
        rdx_2 = rcx_4
    
    var_c40 = rdx_2
    int128_t zmm9
    
    if (rdx_2 s> 0)
        zmm9.d = (*(data_143eb2790 + 4)).d f* 0.5f

uint64_t rax_17

if (r15 != 0x1a || var_c88 != 0 || rdx_2 != 0 || r8 != 0)
    rax_17.b = 0
else
    int64_t r15_1 = data_143eb4e98
    int64_t rcx_5
    
    if (data_143de5480 == r8.b)
        rcx_5 = 0
    else
        rcx_5.b = GetCurrentThreadId().d != data_143de5470
    
    if (*(r15_1 + (rcx_5 << 2)) != 0)
        rax_17.b = 0
    else if (((rsi_1 - 2).d & 0xffffffed) != 0)
        if (((*(rsi_1 * 0x14 + &data_143f025fc) u>> 0xa).b & 1) == 0)
            rax_17.b = 0
        else
            rax_17.b = 1
    else if (rsi_1.d != 0x12 || ((*(rsi_1 * 0x14 + &data_143f025fc) u>> 0xa).b & 1) != 0)
        rax_17.b = 1
    else
        rax_17.b = 0

int128_t zmm12 = *(arg3 + 0x1254)
int128_t zmm6 = arg3[0x24a].d
char var_c86 = rax_17.b
void* rax_19 = arg3[0x2b5]
int32_t var_b64 = (*(data_143eb33d8 + 4) ^ 0x80000000).d
int32_t var_c04 = (*(data_143eb33f0 + 4)).d
int128_t zmm0
zmm0.d = (*(arg3 + 0x125c)).d f* 0.00052083336f
zmm0.d = zmm0.d f+ zmm0.d
int32_t var_c00 = zmm0.d
zmm0.d = 9.99999975e-06f f/ arg3[0x24b].d
int32_t var_bb0 = zmm0.d
zmm0.d = 1f f/ arg3[0x50].d
float zmm1 = 0.5f / tanf(atanf(zmm0.d)) f* zmm6.d
int128_t zmm7
zmm7.d = 0.5f f/ zmm6.d
zmm7.d = zmm7.d f* zmm1 * zmm1 / ((zmm12.d * 10f - zmm1) f* arg3[0x21c].d)
int32_t var_bb4 = zmm7.d
int32_t var_128
float zmm7_1[0x4]
uint128_t zmm8
uint128_t zmm9_1
float zmm11[0x4]
int128_t zmm12_1
uint128_t zmm13
float zmm14_1
int32_t zmm15_1
zmm7_1, zmm8, zmm9_1, zmm11, zmm12_1, zmm13, zmm14_1, zmm15_1 = sub_14130f070(&var_128, arg3)
int32_t temp2 = *(arg3 + 0x1524)
int32_t r8_1 = *(arg3 + 0x159c)
int32_t rdx_4 = *(arg3 + 0x15a4)

if (temp2 == 1)
    r14 = 6

int32_t rcx_8 = arg3[0x2b4].d
int32_t var_a18 = r14
int32_t r14_1 = arg3[0x2b3].d
int16_t var_a13 = 0
int32_t var_a10 = 0
int128_t var_9e8 = zx.o(0)
int32_t var_9ec = 2
int32_t var_b28
int64_t var_9fc
int32_t rax_23
int32_t r9
int32_t r10
int32_t r11
int32_t r12
int32_t r15_2

if (temp2 != 1)
    r12 = r14_1
    rax_23 = r8_1
    r10 = rcx_8
    r9 = rdx_4
    r15_2 = r8_1
    r11 = rcx_8
else
    var_9fc = 0
    int32_t* rax_22 = sub_14141fde0(arg3, &var_b28)
    r15_2 = *(arg3 + 0x159c)
    r11 = arg3[0x2b4].d
    r12 = var_9fc.d
    r10 = *rax_22
    r9 = rax_22[1]
    rax_23 = var_9fc:4.d

int32_t r9_1 = r9 - rax_23
int32_t r14_2 = data_143dbb180:4.d
int32_t r10_1 = r10 - r12
int32_t var_a00_1 = rdx_4 - r8_1
int32_t var_a04_1 = rcx_8 - r14_1
int32_t rcx_11 = (data_143dbb180).d
int32_t var_a0c_1 = rcx_11
var_9fc.d = rcx_11
int32_t var_a08_1 = r14_2
int32_t var_9f4 = r10_1
int32_t var_9f0 = r9_1
var_9fc:4.d = r14_2
bool var_a14 = *(data_143eb27a8 + 4) == 0
int32_t r11_1 = r11 - arg3[0x2b3].d
int32_t r8_3 = *(arg3 + 0x15a4) - r15_2
int32_t var_ba4 = r8_3
int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(r11_1 + 1)
int32_t rax_28 = (temp4 - temp3) s>> 1
int32_t var_c80 = rax_28
int32_t r11_2 = rax_28
int32_t temp5
int32_t temp6
temp5:temp6 = sx.q(r8_3 + 1)
bool cond:5 = arg3[0x2a4].d != 2
int32_t var_c7c = (temp6 - temp5) s>> 1
void*** r8_4 = var_c80.q
void*** var_c50 = r8_4

if (not(cond:5) && rax_19 != 0)
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(r9_1 - r14_2 + 1)
    var_c7c = (temp8_1 - temp7_1) s>> 1
    int32_t temp9_1
    int32_t temp10_1
    temp9_1:temp10_1 = sx.q(r10_1 - rcx_11 + 1)
    int32_t rax_40 = (temp10_1 - temp9_1) s>> 1
    r11_2 = rax_40
    var_c80 = rax_40

float zmm0_3[0x4] = zx.o(0)
zmm0_3[0] = float.s(r11_2)
float temp0_2[0x4] = _mm_max_ss(var_c00[0], zmm7_1[0])
float zmm10[0x4] = zx.o(0)
zmm10[0] = float.s(r8_4.d)
float temp0_3[0x4] = _mm_min_ss(var_c04[0], temp0_2[0])
uint128_t zmm1_1
zmm1_1.d = zmm10.d f/ zmm0_3[0]
zmm0_3 = data_14399fa0c
float var_c08 = zmm1_1.d
zmm0_3[0] = zmm0_3[0] f- zmm12_1.d
zmm1_1.d = var_bb0.d f* zmm0_3[0]
temp0_3[0] = temp0_3[0] * zmm10[0]
zmm0_3[0] = zmm0_3[0] / zmm0_3[0]
zmm0_3[0] = zmm0_3[0] f* var_bb4
float zmm0_4[0x4] = powf(0x40000000[0], (zmm1_1 ^ zmm11).d)
bool cond:4 = zmm0_3[0] f>= zmm8.d
zmm1_1.d = zmm13.d f- zmm0_4[0]
zmm1_1.d = zmm1_1.d f* var_c00
float zmm2_1[0x4] = _mm_max_ss(_mm_and_ps(zmm0_3, 0x7fffffff)[0], zmm1_1.d)

if (not(cond:4))
    zmm2_1 ^= zmm11

zmm11 = var_b64

if (zmm2_1[0] >= zmm11[0])
    zmm0_4 = _mm_min_ss(var_c04[0], zmm2_1[0])
else
    zmm0_4 = zmm11

bool cond:8 = var_c54 == 0
zmm0_4[0] = zmm0_4[0] * zmm10[0]
zmm0_4 = _mm_and_ps(zmm0_4, 0x7fffffff)
zmm10 = _mm_max_ss(zmm0_4[0], temp0_3[0])
char r8_5

if (cond:8 || zmm0_4[0] f<= zmm15_1 || zmm14_1 f<= zmm8.d)
    r8_5 = 0
else
    r8_5 = 1

char rdx_11

if (rax_12 == 0 || temp0_3[0] f<= zmm15_1 || zmm14_1 f<= zmm8.d)
    rdx_11 = 0
else
    rdx_11 = 1

char rcx_12

if ((rsi_1 - 0x19).d u<= 1 || *(&data_143f025f0 + rsi_1 * 0x14) == data_143f025d0)
    rcx_12 = 1
else
    rcx_12 = 0

char r9_3 = 0
int32_t var_c44 = 0

if (rcx_12 == 0)
    r9_3 = rdx_11

char rdx_12 = 0

if (rcx_12 == 0)
    rdx_12 = r8_5

int64_t rcx_13 = *(arg4 + 0x44)
int32_t temp12
int32_t temp13
temp12:temp13 = sx.q((rcx_13 + 1).d)
int32_t var_bc8 = (temp13 - temp12) s>> 1
int32_t temp14
int32_t temp15
temp14:temp15 = sx.q((rcx_13 u>> 0x20).d + 1)
int32_t rax_53 = (temp15 - temp14) s>> 1

if (var_128 != 0)
    int32_t var_11c
    int32_t rax_55 = var_11c & 0x80000001
    
    if (rax_55 s< 0)
        rax_55 = ((rax_55 - 1) | 0xfffffffe) + 1
    
    int32_t rcx_15
    rcx_15.b = rax_55 != 0
    var_c44 = rcx_15 + 1

void*** result

if (zmm10[0] f>= zmm9_1.d)
    bool var_c77_1 = zmm0_4[0] f> zmm13.d
    char var_c84_1
    
    if (r13.b != 0)
        var_c84_1 = 1
    
    if (r13.b == 0 || *(data_143eb26a0 + 4) != 1)
        var_c84_1 = 0
    
    bool var_c78 = *(data_143eb2718 + 4) == 1
    char var_c87_1
    
    if (r13.b != 0 && var_c40 s> 0)
        var_c87_1 = 1
    
    if (r13.b == 0 || var_c40 s<= 0 || *(data_143eb2760 + 4) == 0)
        var_c87_1 = 0
    
    int32_t rcx_17 = *(arg4 + 0x44)
    int32_t r8_7 = arg4[9].d
    int32_t var_644_1 = rcx_17
    int32_t var_640_1 = r8_7
    char rdi_1 = *(arg4 + 0x54)
    char rbx_1 = *(arg4 + 0x55)
    int16_t r11_3 = *(arg4 + 0x56)
    int32_t r15_3 = *(arg4 + 0x4c)
    int32_t rsi_2 = arg4[0xa].d
    zmm0_4 = *(arg4 + 0x30)
    int64_t r12_1 = arg4[0xe]
    char r13_1 = *(arg4 + 0x79)
    char r14_3 = *(arg4 + 0x7a)
    int32_t var_808_1 = arg4[8].d
    int32_t r9_6 = (*(arg4 + 0x64) & 0xfffffffe) | 0x10000
    int32_t var_63c_1 = r15_3
    int16_t var_7f0_1 = 1
    int32_t r10_4 = arg4[0xc].d & 0xffefffff
    char var_7d0_1 = 1
    int32_t var_7b8_1 = arg4[8].d
    int16_t var_7a0_1 = 1
    char var_780_1 = 1
    int32_t var_ad8_1 = arg4[8].d
    int16_t var_ac0_1 = 1
    int32_t var_638_1 = rsi_2
    char var_634_1 = rdi_1
    char var_633_1 = rbx_1
    int16_t var_632_1 = r11_3
    int64_t var_618_1 = r12_1
    char var_60f_1 = r13_1
    char var_60e_1 = r14_3
    int32_t var_624_1 = r9_6
    int32_t var_628_1 = r10_4
    float var_818[0x4] = zmm0_4
    int32_t var_804_1 = rcx_17
    int32_t var_800_1 = r8_7
    int32_t var_7fc_1 = r15_3
    int32_t var_7f8_1 = rsi_2
    char var_7f4_1 = rdi_1
    char var_7f3_1 = rbx_1
    int16_t var_7f2_1 = r11_3
    int32_t var_7e8_1 = r10_4
    int32_t var_7e4_1 = r9_6
    int16_t var_7e0_1 = 0
    int64_t var_7d8_1 = r12_1
    char var_7cf_1 = r13_1
    char var_7ce_1 = r14_3
    int32_t var_7ec_1 = 0xa
    float var_7c8[0x4] = zmm0_4
    int32_t var_7b4_1 = rcx_17
    int32_t var_7b0_1 = r8_7
    int32_t var_7ac_1 = r15_3
    int32_t var_7a8_1 = rsi_2
    char var_7a4_1 = rdi_1
    char var_7a3_1 = rbx_1
    int16_t var_7a2_1 = r11_3
    int32_t var_798_1 = r10_4
    int32_t var_794_1 = r9_6
    int16_t var_790_1 = 0
    int64_t var_788_1 = r12_1
    char var_77f_1 = r13_1
    char var_77e_1 = r14_3
    int32_t var_79c_1 = 0x15
    float var_ae8[0x4] = zmm0_4
    int32_t var_acc_1 = r15_3
    int32_t var_ac8_1 = rsi_2
    char var_ac4_1 = rdi_1
    char var_ac3_1 = rbx_1
    int16_t var_ac2_1 = r11_3
    int32_t var_ab4_1 = r9_6
    int16_t var_ab0_1 = 0
    int32_t r10_5 = r10_4 | data_143ed340c
    char var_aa0_1 = 1
    int32_t temp16_1
    int32_t temp17_1
    temp16_1:temp17_1 = sx.q(rcx_17)
    char var_a9e_1 = r14_3
    char var_a4e_1 = r14_3
    int64_t* r14_4 = arg3
    int32_t rax_67 = (temp17_1 - temp16_1) s>> 1
    int32_t var_ad4_1 = rax_67
    char var_a74_1 = rdi_1
    int32_t temp18_1
    int32_t temp19_1
    temp18_1:temp19_1 = sx.q(r8_7)
    char var_a73_1 = rbx_1
    int64_t var_aa8_1 = r12_1
    int32_t rax_71 = (temp19_1 - temp18_1) s>> 1
    int32_t var_ad0_1 = rax_71
    char var_a9f_1 = r13_1
    int32_t var_abc_1 = 0xa
    int32_t var_ab8_1 = r10_5
    int32_t var_a88_1 = arg4[8].d
    void* rax_74 = r14_4[2]
    float var_a98[0x4] = *(arg4 + 0x30)
    int32_t var_a7c_1 = r15_3
    int32_t var_a78_1 = rsi_2
    int16_t var_a72_1 = r11_3
    int16_t var_a70_1 = 1
    int32_t var_a64_1 = r9_6
    int16_t var_a60_1 = 0
    int64_t var_a58_1 = r12_1
    char var_a50_1 = 1
    char var_a4f_1 = r13_1
    int32_t var_a84_1 = rax_67
    int32_t var_a80_1 = rax_71
    void*** var_c38
    var_c38.d = 0x15
    int32_t var_a6c_1 = 0x15
    int32_t var_a68_1 = r10_5
    void* var_b78 = rax_74
    
    if (rax_74 != 0)
        *(rax_74 + 8) += 1
        var_c38.d = var_a6c_1
    
    void*** var_c68 = sub_141188e50(arg1, &var_818, u"DOFFullResSetup", 0)
    void*** var_c60_1 = sub_141188e50(arg1, &var_7c8, u"DOFFullResSetup", 0)
    int128_t var_b08 = var_c68.o
    void*** var_9a8 = sub_141188e50(arg1, &var_ae8, u"DOFHalfResSetup", 0)
    void*** rax_79 = sub_141188e50(arg1, &var_a98, u"DOFHalfResSetup", 0)
    zmm12_1 = var_9a8.o
    int128_t var_c28 = zmm12_1
    
    if (var_c40 s<= 0 || var_c88 != 0)
        rsi_2.b = 0
    else
        rsi_2 = 1
    
    void*** rbx_2 = r11_1.q
    void*** var_c18 = rbx_2
    
    if (rsi_2.b == 0)
        rbx_2 = var_c50
        uint128_t zmm6_2 = zx.o(var_c80)
        var_c18 = rbx_2
        _mm_cvtepi32_ps(zmm6_2)
    
    int64_t* var_b48
    var_b48.d = ((zx.q(rsi_2.b) << 3) + 8).d
    void*** rax_82 = sub_14081d830(0x70, arg1[1], 1, 0)
    void*** rdi_2 = rax_82
    
    if (rax_82 == 0)
        rdi_2 = nullptr
    else
        *rax_82 = nullptr
        rax_82[2] = 0
        rax_82[3].d = 0
        *(rax_82 + 0x1c) = 0x3f800000
        rax_82[6] = 0
        rax_82[7] = 0
        __builtin_memset(&rax_82[9], 0, 0x28)
    
    memset(rdi_2, 0, 0x70)
    int32_t zmm6_3 = sub_1405d16e0(rdi_2, var_b78)
    uint128_t zmm0_6
    zmm0_6.d = var_bb4.d f* zmm6_3
    zmm11[0] = zmm11[0] f* zmm6_3
    rdi_2[2].d = zmm0_6.d
    *(rdi_2 + 0x14) = zmm11[0]
    float zmm1_2[0x4] = var_c00
    zmm0_6.d = var_c04.d f* zmm6_3
    zmm1_2[0] = zmm1_2[0] f* zmm6_3
    rdi_2[3].d = zmm0_6.d
    rdi_2[4].d = var_bb0.d
    *(rdi_2 + 0x24) = zmm1_2[0]
    int64_t rax_83 = data_143dbb180
    rdi_2[6].d = rax_83.d
    *(rdi_2 + 0x34) = (rax_83 u>> 0x20).d
    rdi_2[7].d = rbx_2.d
    *(rdi_2 + 0x3c) = (rbx_2 u>> 0x20).d
    zmm1_2 = zx.o(var_c80)
    zmm0_6 = zx.o(var_c50.d)
    rdi_2[9] = arg4
    float temp0_10[0x4] = _mm_cvtepi32_ps(zmm1_2)
    zmm0_6 = _mm_cvtepi32_ps(zmm0_6)
    *(rdi_2 + 0x44) = temp0_10[0]
    rdi_2[8].d = zmm0_6.d
    rdi_2[0xa] = *(arg2 + 8)
    int32_t var_ba8
    
    if (rsi_2.b != 0)
        int64_t* r8_8 = &var_b08
        void*** rax_90
        int64_t rcx_27
        
        if (var_c88 == 0)
            void var_308
            rcx_27 = *sub_1413114c0(&var_308, arg1, r8_8)
            rax_90 = var_b08.q
        else
            void var_278
            rcx_27 = sub_1413114c0(&var_278, arg1, r8_8)[1]
            rax_90 = arg4
        
        var_ba8.q = rax_90
        rdi_2[0xb] = rcx_27
    else
        var_ba8.q = arg4
    
    void var_318
    rdi_2[0xc] = *sub_1413114c0(&var_318, arg1, &var_c28)
    void*** var_778
    int64_t* rax_93
    int512_t zmm6_4
    rax_93, zmm6_4 = sub_1413114c0(&var_778, arg1, &var_c28)
    int32_t r8_11 = var_b48.d
    int32_t rax_95 = var_c18:4.d - 1
    rdi_2[0xd] = rax_93[1]
    int32_t var_b24_1 = divs.dp.d(sx.q(rax_95 + r8_11), r8_11)
    int64_t* rcx_34 = r14_4[0xa2a]
    var_b28 = divs.dp.d(sx.q(r8_11 - 1 + rbx_2.d), r8_11)
    float var_4f8[0x4]
    char rcx_35 = sub_1419a2ec0(rcx_34, &var_4f8, &data_143eb27d0, (zx.d(rsi_2.b) ^ 1) * 2)
    zmm7_1 = var_4f8
    zmm6_4.o = zx.o(0)
    int128_t var_4e8_1 = sub_141317820(rcx_35)
    sub_141998c50(zmm7_1[0].q, &data_143eb5730, rdi_2)
    int64_t zmm0_7 = var_b28.q
    int64_t* rdx_31 = arg1[1]
    var_778 = rdi_2
    int32_t var_758_1 = 1
    int64_t var_760_1 = zmm0_7
    void*** rax_103
    char rcx_37
    rax_103, rcx_37 = sub_14081d830(0x60, rdx_31, 1, 0)
    void*** rbx_3 = rax_103
    char var_c85
    
    if (rax_103 == 0)
        rbx_3 = nullptr
    else
        sub_141317820(rcx_37)
        var_c68 = rdi_2
        void* var_c60_2 = &data_143eb5760
        int128_t var_4d8 = var_c68.o
        sub_141992bd0(rbx_3, &var_c85, &var_4d8, 2)
        uint128_t zmm0_9 = var_778.o
        *rbx_3 = &data_142f5cb00
        *(rbx_3 + 0x38) = zmm0_9
        *(rbx_3 + 0x48) = zmm7_1
        rbx_3[0xb] = var_758_1.q
    
    sub_1419968d0(arg1, rbx_3)
    
    if (rsi_2.b == 0 || var_c88 != 0)
        var_ba8.q = arg4
    
    void*** var_bf0
    void* r9_12
    
    if (r14_4[0x2a4].d != 2 || rax_19 == 0)
        r9_12 = var_c28.q
    else
        var_9e8.q = var_9a8
        var_9e8:8.q = rax_79
        void**** rax_108
        rax_108, zmm10, zmm13, zmm14_1, zmm15_1 =
            sub_14134cc40(&var_bf0, arg1, arg2, r14_4, &var_a18, &r14_4[0x9b8], rax_19 + 0x900)
        uint128_t zmm1_4 = *rax_108
        r9_12 = zmm1_4.q
        void* rcx_43 = _mm_bsrli_si128(zmm1_4, 8).q
        var_c28.q = r9_12
        var_c28:8.q = rcx_43
        var_ad8_1 = *(r9_12 + 0x40)
        var_ad4_1 = *(r9_12 + 0x44)
        var_ad0_1 = *(r9_12 + 0x48)
        int32_t var_acc_2 = *(r9_12 + 0x4c)
        var_ac8_1 = *(r9_12 + 0x50)
        char var_ac4_2 = *(r9_12 + 0x54)
        char var_ac3_2 = *(r9_12 + 0x55)
        int16_t var_ac2_2 = *(r9_12 + 0x56)
        int16_t var_ac0_2 = *(r9_12 + 0x58)
        int32_t var_abc_2 = *(r9_12 + 0x5c)
        var_ab8_1 = *(r9_12 + 0x60)
        int32_t var_ab4_2 = *(r9_12 + 0x64)
        var_ab0_1.b = *(r9_12 + 0x68)
        var_ab0_1:1.b = *(r9_12 + 0x69)
        var_aa8_1 = *(r9_12 + 0x70)
        char var_aa0_2 = *(r9_12 + 0x78)
        char var_a9f_2 = *(r9_12 + 0x79)
        char var_a9e_2 = *(r9_12 + 0x7a)
        var_ae8 = *(r9_12 + 0x30)
        
        if (rcx_43 != 0)
            var_a88_1 = *(rcx_43 + 0x40)
            int32_t var_a84_2 = *(rcx_43 + 0x44)
            int32_t var_a80_2 = *(rcx_43 + 0x48)
            int32_t var_a7c_2 = *(rcx_43 + 0x4c)
            var_a78_1 = *(rcx_43 + 0x50)
            char var_a74_2 = *(rcx_43 + 0x54)
            char var_a73_2 = *(rcx_43 + 0x55)
            int16_t var_a72_2 = *(rcx_43 + 0x56)
            int16_t var_a70_2 = *(rcx_43 + 0x58)
            int32_t rax_136 = *(rcx_43 + 0x5c)
            var_c38.d = rax_136
            int32_t var_a6c_2 = rax_136
            var_a68_1 = *(rcx_43 + 0x60)
            int32_t var_a64_2 = *(rcx_43 + 0x64)
            var_a60_1.b = *(rcx_43 + 0x68)
            var_a60_1:1.b = *(rcx_43 + 0x69)
            var_a58_1 = *(rcx_43 + 0x70)
            char var_a50_2 = *(rcx_43 + 0x78)
            char var_a4f_2 = *(rcx_43 + 0x79)
            char var_a4e_2 = *(rcx_43 + 0x7a)
            var_a98 = *(rcx_43 + 0x30)
        
        zmm12_1 = var_c28
    
    wchar16 const* const var_188_1 = u"UnknownTexture"
    wchar16 const* const var_138_1 = u"UnknownTexture"
    float var_9b8[0x4] = zx.o(0)
    float zmm0_10[0x4] = data_143f02308
    int64_t var_1c8 = 1
    int64_t var_1c0
    __builtin_memset(&var_1c0, 0, 0x18)
    int64_t var_1a8_1 = 1
    int64_t var_19c_1 = 0
    int32_t var_194_1 = 0
    int64_t var_178 = 1
    int64_t var_170
    __builtin_memset(&var_170, 0, 0x18)
    int64_t var_158_1 = 1
    int64_t var_14c_1 = 0
    int32_t var_144_1 = 0
    int16_t var_1a0_1 = 1
    int16_t var_190_1 = 0
    int16_t var_180_1 = 1
    char var_17e_1 = 0
    int16_t var_150_1 = 1
    int16_t var_140_1 = 0
    int16_t var_130_1 = 1
    char var_12e_1 = 0
    int64_t rcx_44 = *(r9_12 + 0x44)
    var_1c8.o = zmm0_10
    var_1a8_1:6.w = 1
    var_19c_1.d = 0xf
    int32_t var_194_2 = 0x10008
    int32_t temp32_1
    int32_t temp33_1
    temp32_1:temp33_1 = sx.q((rcx_44 + 7).d)
    var_178.o = zmm0_10
    var_158_1:6.w = 1
    var_14c_1.d = 0xa
    int32_t var_144_2 = 0x10008
    int32_t r8_16 = ((temp32_1 & 7) + temp33_1) s>> 3
    int32_t rcx_46 = data_143f02318
    int32_t temp34_1
    int32_t temp35_1
    temp34_1:temp35_1 = sx.q((rcx_44 u>> 0x20).d + 7)
    int64_t var_1b8
    var_1b8.d = rcx_46
    var_1b8:4.d = r8_16
    int32_t rax_150 = (temp35_1 + (temp34_1 & 7)) s>> 3
    wchar16 const* const var_188_2 = u"UnknownTexture2D"
    int64_t var_168
    var_168.d = rcx_46
    var_168:4.d = r8_16
    wchar16 const* const var_138_2 = u"UnknownTexture2D"
    int64_t var_1b0
    var_1b0.d = rax_150
    int64_t var_160
    var_160.d = rax_150
    int64_t rsi_3 = *(r9_12 + 0x44)
    uint32_t rdi_4 = (rsi_3 u>> 0x20).d
    void*** rax_151 = sub_141188e50(arg1, &var_1c8, data_1439b6780, 0)
    wchar16 const (* r8_18)[0x11] = data_1439b6788
    var_c68 = rax_151
    void*** rax_152 = sub_141188e50(arg1, &var_178, r8_18, 0)
    int64_t* rdx_41 = arg1[1]
    void*** var_c60_3 = rax_152
    zmm9_1 = var_c68.o
    uint128_t var_968 = zmm9_1
    void*** rax_153 = sub_14081d830(0x50, rdx_41, 1, 0)
    void*** rbx_4 = rax_153
    
    if (rax_153 == 0)
        rbx_4 = nullptr
    else
        *rax_153 = nullptr
        rax_153[1] = 0
        rax_153[4] = 0
        __builtin_memset(&rax_153[6], 0, 0x20)
    
    memset(rbx_4, 0, 0x50)
    sub_1405d16e0(&rbx_4[4], var_b78)
    int32_t rax_154 = var_c50.d
    int32_t rcx_51 = var_c50:4.d
    *rbx_4 = nullptr
    rbx_4[1].d = rax_154
    *(rbx_4 + 0xc) = rcx_51
    int32_t rax_155 = var_c50:4.d
    uint128_t zmm1_5 = _mm_cvtepi32_ps(zx.o(var_c80))
    uint128_t zmm2_2 = _mm_cvtepi32_ps(zx.o(var_c7c))
    int32_t rax_158 = rsi_3.d * var_c50.d
    zmm2_2.d = zmm2_2.d f/ _mm_cvtepi32_ps(zx.o(rax_155 * rdi_4)).d
    uint128_t zmm0_11 = _mm_cvtepi32_ps(zx.o(rax_158))
    *(rbx_4 + 0x14) = zmm2_2.d
    zmm1_5.d = zmm1_5.d f/ zmm0_11.d
    rbx_4[2].d = zmm1_5.d
    zmm1_5 = zx.o(var_c80)
    zmm0_11 = _mm_cvtepi32_ps(zx.o(rdi_4))
    uint128_t zmm3_1
    zmm3_1.d = _mm_cvtepi32_ps(zx.o(var_c7c)).d f- zmm13.d
    zmm1_5.d = _mm_cvtepi32_ps(zmm1_5).d f- zmm13.d
    *(rbx_4 + 0x30) = zmm12_1
    zmm3_1.d = zmm3_1.d f/ zmm0_11.d
    zmm0_11 = _mm_cvtepi32_ps(zx.o(rsi_3.d))
    *(rbx_4 + 0x1c) = zmm3_1.d
    zmm1_5.d = zmm1_5.d f/ zmm0_11.d
    rbx_4[3].d = zmm1_5.d
    void var_2f8
    *(rbx_4 + 0x40) = *sub_1413115c0(&var_2f8, arg1, &var_968)
    int32_t r9_13
    
    if (var_c80 == var_c50.d)
        r9_13 = 0
    
    if (var_c80 != var_c50.d || var_c7c != var_c50:4.d)
        r9_13 = 1
    
    float var_4c8[0x4]
    sub_1419a2ec0(r14_4[0xa2a], &var_4c8, &data_143eb28d0, r9_13)
    zmm7_1 = var_4c8
    int32_t temp36_1
    int32_t temp37_1
    temp36_1:temp37_1 = sx.q(var_c50:4.d + 7)
    int32_t rcx_55 = ((temp36_1 & 7) + temp37_1) s>> 3
    int32_t temp38_1
    int32_t temp39_1
    temp38_1:temp39_1 = sx.q(var_c50.d + 7)
    int32_t var_b24_2 = rcx_55
    var_b28 = (temp39_1 + (temp38_1 & 7)) s>> 3
    int128_t var_4b8_1 = sub_141316e10(rcx_55.b)
    sub_141998c50(zmm7_1[0].q, &data_143eb57d0, rbx_4)
    int64_t zmm0_13 = var_b28.q
    int64_t* rdx_49 = arg1[1]
    var_bf0 = rbx_4
    int32_t var_bd0_1 = 1
    int64_t var_bd8_1 = zmm0_13
    void*** rax_170
    char rcx_57
    rax_170, rcx_57 = sub_14081d830(0x60, rdx_49, 1, 0)
    void*** rdi_5 = rax_170
    
    if (rax_170 == 0)
        rdi_5 = nullptr
    else
        sub_141316e10(rcx_57)
        var_c68 = rbx_4
        var_c60_3 = &data_143eb5800
        int128_t var_4a8 = var_c68.o
        void var_bc0
        sub_141992bd0(rdi_5, &var_bc0, &var_4a8, 2)
        uint128_t zmm0_15 = var_bf0.o
        *rdi_5 = &data_142f5cb10
        *(rdi_5 + 0x38) = zmm0_15
        *(rdi_5 + 0x48) = zmm7_1
        rdi_5[0xb] = var_bd0_1.q
    
    sub_1419968d0(arg1, rdi_5)
    void*** rcx_60 = var_c50
    int32_t r10_6 = 3
    zmm11 = 0xbf000000
    int32_t rsi_4 = 1
    float temp0_23[0x4] = _mm_cvtepi32_ps(zx.o(var_b98))
    int32_t var_a40_1 = 1
    int32_t rdi_6 = 1
    int64_t* var_690_1 = arg1
    int32_t temp40_1
    int32_t temp41_1
    temp40_1:temp41_1 = sx.q((rcx_60 + 7).d)
    int64_t* var_668_1 = r14_4
    int32_t var_108 = 1
    int64_t rbx_5 = 0
    temp0_23[0] = temp0_23[0] + 0.5f
    int32_t r8_23 = ((temp40_1 & 7) + temp41_1) s>> 3
    int32_t temp42_1
    int32_t temp43_1
    temp42_1:temp43_1 = sx.q((rcx_60 u>> 0x20).d + 7)
    int32_t var_c10 = r8_23
    uint128_t zmm1_7
    zmm1_7.d = zmm13.d f/ temp0_23[0]
    int32_t rax_176 = (temp43_1 + (temp42_1 & 7)) s>> 3
    int32_t temp44_1
    int32_t temp45_1
    temp44_1:temp45_1 = sx.q(rax_176 + 7)
    int32_t var_a44_1 = ((temp44_1 & 7) + temp45_1) s>> 3
    int32_t temp46_1
    int32_t temp47_1
    temp46_1:temp47_1 = sx.q(r8_23 + 7)
    int32_t var_a48 = (temp47_1 + (temp46_1 & 7)) s>> 3
    int64_t* var_698 = &var_1c8
    void** var_688_1 = &var_b78
    int32_t* var_680_1 = &var_c10
    int32_t* var_678_1 = &var_c08
    int32_t* var_670_1 = &var_c54
    int32_t* var_660_1 = &var_a48
    float zmm0_16[0x4] = 0xbf000000
    zmm1_7.d = zmm1_7.d f+ zmm13.d
    var_c54 = zmm1_7.d
    zmm1_7.d = zmm1_7.d f* zmm10[0]
    zmm1_7.d = zmm1_7.d f* 0.125f
    zmm1_7.d = zmm1_7.d f+ zmm1_7.d
    zmm0_16[0] = -0.5f f- zmm1_7.d
    int32_t r11_6 = neg.d(int.d(zmm0_16[0]) s>> 1)
    
    if (r11_6 s<= 3)
        r10_6 = r11_6
    
    int32_t var_f8 = r10_6
    int32_t var_104
    
    while (r11_6 s> r10_6)
        int32_t r9_15 = r10_6 + 1
        int32_t r8_24 = 3
        int32_t temp0_24 = divs.dp.d(sx.q(r11_6), r9_15)
        
        if (temp0_24 s<= 3)
            r8_24 = temp0_24
        
        int32_t var_f4
        *(&var_f4 + rbx_5) = r8_24
        int32_t temp0_25 = divs.dp.d(sx.q(var_f4 - r10_6 - 1 + r11_6), var_f4)
        
        if (temp0_25 s<= r9_15)
            r9_15 = temp0_25
        
        rsi_4 += 1
        *(&var_104 + rbx_5) = r9_15
        rdi_6 += 1
        rbx_5 += 4
        r10_6 += r9_15 * r8_24
        
        if (rdi_6 u>= 3)
            break
    
    void*** var_bf8
    void* var_b50
    void*** var_af8
    int64_t* var_ca0
    int64_t* var_c98
    
    if (rsi_4 s<= 1)
        var_c98.d = var_108
        var_ca0.d = var_f8
        uint128_t var_458 = zx.o(0)
        void var_2d8
        var_9b8 = *sub_141302580(&var_698, &var_2d8, 0, &var_968, &var_458, var_ca0.d)
    else
        int64_t rdi_7 = sx.q(rsi_4)
        zmm8 = zmm9_1
        var_bf8 = rdi_7
        uint128_t var_978 = zmm9_1
        
        if (rsi_4 s> 0)
            int64_t rbx_6 = 0
            uint128_t var_498 = zx.o(0)
            
            do
                var_c98.d = (&var_108)[rbx_6]
                var_ca0.d = (&var_f8)[rbx_6]
                rbx_6 += 1
                void var_2e8
                zmm8 = *sub_141302580(&var_698, &var_2e8, 1, &var_978, &var_498, var_ca0.d)
                var_978 = zmm8
            while (rbx_6 s< rdi_7)
        
        var_9b8 = zmm9_1
        
        if (rsi_4 s> 0)
            int64_t rsi_5 = 0
            
            do
                float var_268[0x4] = var_1c8.o
                uint128_t var_258_1 = var_1b8.o
                float var_248_1[0x4] = var_1a8_1.o
                uint128_t var_238_1 = var_19c_1:4.o
                float var_228_1[0x4] = var_188_2.o
                uint128_t var_218 = var_178.o
                float var_208_1[0x4] = var_168.o
                uint128_t var_1f8_1 = var_158_1.o
                float var_1e8_1[0x4] = var_14c_1:4.o
                uint128_t var_1d8_1 = var_138_2.o
                void*** rax_195 = sub_141188e50(arg1, &var_268, u"DOFDilateFgdCoc", 0)
                var_b28.q = rax_195
                void*** rax_196 = sub_141188e50(arg1, &var_218, u"DOFDilateBgdCoc", 0)
                void*** var_b20_1 = rax_196
                void*** rax_197 = sub_14081d830(0x60, arg1[1], 1, 0)
                void*** rdi_8 = rax_197
                
                if (rax_197 == 0)
                    rdi_8 = nullptr
                else
                    *rax_197 = nullptr
                    rax_197[1] = 0
                    rax_197[4] = 0
                    __builtin_memset(&rax_197[6], 0, 0x30)
                
                memset(rdi_8, 0, 0x60)
                sub_1405d16e0(&rdi_8[4], var_b78)
                int32_t rax_198 = var_c10
                *rdi_8 = nullptr
                rdi_8[1].d = rax_198
                int32_t rax_199 = (&var_108)[rsi_5]
                *(rdi_8 + 0xc) = rax_176
                rdi_8[2].d = rax_199
                var_c68 = rax_195
                var_c60_3.w = 0
                *(rdi_8 + 0x14) = _mm_cvtepi32_ps(zx.o(rax_199))[0]
                float zmm0_17[0x4] = zmm13
                float zmm1_8 = var_c54 * var_c08
                zmm0_17[0] = zmm0_17[0] / zmm1_8
                rdi_8[3].d = zmm1_8
                *(rdi_8 + 0x1c) = zmm0_17[0]
                *(rdi_8 + 0x30) = var_9b8
                *(rdi_8 + 0x40) = zmm8
                void*** rax_200 = sub_14081d830(0x28, arg1[1], 1, 0)
                
                if (rax_200 == 0)
                    rax_200 = nullptr
                else
                    int128_t zmm0_18 = var_c68.o
                    rax_200[1] = rax_195[1]
                    rax_200[2] = 0
                    *(rax_200 + 0x18) = zmm0_18
                    *rax_200 = &data_142f285c0
                
                int64_t* rdx_70 = arg1[1]
                var_978.q = rax_200
                var_af8 = rax_196
                int16_t var_af0_1 = 0
                void*** rax_201
                int512_t zmm6_8
                rax_201, zmm6_8 = sub_14081d830(0x28, rdx_70, 1, 0)
                
                if (rax_201 == 0)
                    rax_201 = nullptr
                else
                    uint128_t zmm0_19 = var_af8.o
                    rax_201[1] = rax_196[1]
                    rax_201[2] = 0
                    *(rax_201 + 0x18) = zmm0_19
                    *rax_201 = &data_142f285c0
                
                var_978:8.q = rax_201
                int32_t r9_19 = (&var_f8)[rsi_5] + 5
                *(rdi_8 + 0x50) = var_978
                float var_488[0x4]
                char rcx_73 = sub_1419a2ec0(r14_4[0xa2a], &var_488, &data_143eb29d0, r9_19)
                zmm7_1 = var_488
                zmm6_8.o = zx.o(var_a48.q)
                int64_t zmm6_9 = sub_141316ca0(rcx_73)
                int128_t var_478_1 = zx.o(0)
                sub_141998c50(zmm7_1[0].q, &data_143eb5870, rdi_8)
                int64_t* rdx_72 = arg1[1]
                var_bf0 = rdi_8
                int64_t var_bd8_2 = zmm6_9
                void*** rax_202
                char rcx_75
                rax_202, rcx_75 = sub_14081d830(0x60, rdx_72, 1, 0)
                void*** rbx_9 = rax_202
                
                if (rax_202 == 0)
                    rbx_9 = nullptr
                else
                    sub_141316ca0(rcx_75)
                    var_b50 = &data_143eb58a0
                    int128_t var_468 = rdi_8.o
                    void var_b7f
                    sub_141992bd0(rbx_9, &var_b7f, &var_468, 2)
                    uint128_t zmm0_21 = var_bf0.o
                    *rbx_9 = &data_142f5cb20
                    *(rbx_9 + 0x38) = zmm0_21
                    *(rbx_9 + 0x48) = zmm7_1
                    rbx_9[0xb] = var_a40_1.q
                
                sub_1419968d0(arg1, rbx_9)
                rsi_5 += 1
                var_9b8 = var_b28.o
            while (rsi_5 s< var_bf8)
    zmm10[0] = zmm10[0] * 0.5f
    uint64_t rcx_79 = zx.q(data_14401b1a0)
    zmm0_16 = zx.o(var_b98)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    zmm1_7.q = fconvert.d(zmm10[0])
    void*** var_b18 = nullptr
    int64_t rax_206 = *(ThreadLocalStoragePointer + (rcx_79 << 3))
    void*** var_b88_1 = nullptr
    zmm0_16 = _mm_cvtepi32_pd(zmm0_16[0].q)
    var_c18 = nullptr
    bool cond:18_1 = data_143cda914 s> *(0x14 + rax_206)
    zmm1_7.q = zmm1_7.q f/ zmm0_16[0].q
    float temp0_28[0x4] = _mm_cvtpd_ps(zmm1_7)
    
    if (cond:18_1)
        _Init_thread_header(&data_143cda914)
        
        if (data_143cda914 == 0xffffffff)
            data_143cda910 = 0x3fb8aa3b
            _Init_thread_footer(&data_143cda914)
    
    float zmm0_22[0x4] = logf(temp0_28[0])
    zmm0_22[0] = zmm0_22[0] f* data_143cda910
    float rbx_10 = 2.80259693e-45f
    zmm0_22[0] = zmm0_22[0] + zmm0_22[0]
    zmm11[0] = -0.5f - zmm0_22[0]
    int32_t rcx_81
    rcx_81.b = r8 == 0
    float rcx_82 = rcx_81 - (int.d(zmm11[0]) s>> 1)
    
    if (rcx_82 s>= 2)
        rbx_10 = rcx_82
    
    var_c54 = rbx_10
    float rax_209 = sub_1413144f0()
    var_b48.d = rax_209
    int32_t r8_27 = 8
    float var_8d8[0x4] = var_ae8
    uint128_t var_8c8_1 = var_ad8_1.o
    int80_t var_8b8_1 = var_ac8_1.o[0].t
    int80_t var_8a8_1 = var_ab8_1.o.t
    int88_t var_898_1 = var_aa8_1.o[0].11
    float var_888[0x4] = var_a98
    float var_878_1[0x4] = var_a88_1.o
    uint128_t var_868_1 = var_a78_1.o
    float var_858_1[0x4] = var_a68_1.o
    uint128_t var_848_1 = var_a58_1.o
    int32_t r10_9 = (var_8a8_1.d & 0xffefffff) | data_143ed3410
    zmm0_22 = var_8d8
    int32_t rax_210 = 1 << (rbx_10.b - 1)
    zmm9_1 = _mm_cvtepi32_ps(zx.o(var_ad4_1))
    
    if (rax_210 s>= 8)
        r8_27 = rax_210
    
    var_8b8_1:6.w = rbx_10.w
    var_8a8_1.d = r10_9
    int32_t r9_25 = (var_8c8_1.q u>> 0x20).d - 1 + r8_27
    int32_t rcx_86 = var_8c8_1:8.d - 1 + r8_27
    var_888 = zmm0_22
    int32_t r9_26 = r9_25 - mods.dp.d(sx.q(r9_25), r8_27)
    float temp0_30[0x4] = _mm_cvtepi32_ps(zx.o(var_ad0_1))
    int32_t rcx_87 = rcx_86 - mods.dp.d(sx.q(rcx_86), r8_27)
    var_8c8_1:4.d = r9_26
    var_8c8_1:8.d = rcx_87
    float temp0_31 =
        __maxss_xmmss_memss(zmm14_1 * 0.25f f* zmm9_1.d * temp0_30[0] - 21f, 0x41a80000)
    int64_t rsi_6 = int.q(temp0_31)
    var_bf8 = rsi_6
    bool cond:17_1 = var_c86 == 0
    int32_t rdi_9 = var_c38.d
    var_878_1[0] = var_8c8_1.d
    var_878_1[3] = var_8c8_1:0xc.d
    var_868_1.d = var_8b8_1.d
    var_868_1:4.b = var_8b8_1:4.b
    var_868_1:5.b = var_8b8_1:5.b
    var_868_1:8.w = var_8b8_1:8.w
    var_858_1[1] = var_8a8_1:4.d
    var_858_1[2].b = var_8a8_1:8.b
    var_858_1[2]:1.b = var_8a8_1:9.b
    var_848_1.q = var_898_1.q
    var_848_1:8.b = var_898_1:8.b
    var_848_1:9.b = var_898_1:9.b
    var_848_1:0xa.b = var_898_1:0xa.b
    var_878_1[1] = r9_26
    var_878_1[2] = rcx_87
    var_868_1:6.w = rbx_10.w
    var_858_1[0] = r10_9
    var_868_1:0xc.d = rdi_9
    
    if (not(cond:17_1))
        var_8b8_1:0xc.d = 0x1a
        var_c38.d = 0x15
        rdi_9 = 0x15
        var_868_1:0xc.d = 0x15
    
    int64_t var_c60_4 = 0
    var_c68 = sub_141188e50(arg1, &var_8d8, u"DOFReduce", 0)
    
    if (rdi_9 != 0)
        void*** var_c60_5 = sub_141188e50(arg1, &var_888, u"DOFReduce", 0)
    
    zmm8 = zx.o(0)
    char rax_230 = rdx_12
    float var_948[0x4] = var_c68.o
    char rdi_10
    
    if (rax_230 == 0)
        rdi_10 = r9_3
    
    if (rax_230 == 0 && rdi_10 == 0)
        zmm11 = 0x3f000000
    else
        float var_3b8[0x4] = var_ae8
        int96_t var_3a8_1 = var_ad8_1.o[0].12
        float var_398_1[0x4] = var_ac8_1.o
        float var_388_1[0x4] = var_ab8_1.o
        float var_378_1[0x4] = var_aa8_1.o
        float var_368[0x4] = var_a98
        float var_348_1[0x4] = var_a78_1.o
        int32_t temp72_1
        int32_t temp73_1
        temp72_1:temp73_1 = sx.q((var_ad8_1.q u>> 0x20).d)
        float var_338_1[0x4] = var_a68_1.o
        float var_328_1[0x4] = var_a58_1.o
        var_3a8_1:4.d = (temp73_1 - temp72_1) s>> 1
        int32_t temp74_1
        int32_t temp75_1
        temp74_1:temp75_1 = sx.q(var_3a8_1:8.d)
        var_3a8_1:8.d = (temp75_1 - temp74_1) s>> 1
        int32_t temp76_1
        int32_t temp77_1
        temp76_1:temp77_1 = sx.q(var_a88_1.o[0].12:4.d)
        int96_t var_358_1
        var_358_1:4.d = (temp77_1 - temp76_1) s>> 1
        int32_t temp78_1
        int32_t temp79_1
        temp78_1:temp79_1 = sx.q(var_358_1:8.d)
        var_358_1:8.d = (temp79_1 - temp78_1) s>> 1
        
        if (var_c86 != 0)
            float rax_248 = var_398_1[3]
            
            if (var_c88 == 0)
                rax_248 = 3.64337601e-44f
            
            var_398_1[3] = rax_248
        
        int64_t var_c60_6 = 0
        void*** rax_249 = sub_141188e50(arg1, &var_3b8, u"DOFDownsample", 0)
        bool cond:20_1 = var_348_1[3] == 0
        var_c68 = rax_249
        
        if (not(cond:20_1))
            void*** var_c60_7 = sub_141188e50(arg1, &var_368, u"DOFDownsample", 0)
        
        zmm8 = var_c68.o
        int32_t temp80_1
        int32_t temp81_1
        temp80_1:temp81_1 = sx.q(var_c80 + 1)
        uint128_t var_448 = zmm8
        int32_t rax_255 = (temp81_1 - temp80_1) s>> 1
        int32_t temp82_1
        int32_t temp83_1
        temp82_1:temp83_1 = sx.q((var_c80.q u>> 0x20).d + 1)
        int32_t rax_261 = (temp83_1 - temp82_1) s>> 1
        void*** rax_262 = sub_14081d830(0x60, arg1[1], 1, 0)
        void*** rbx_11 = rax_262
        
        if (rax_262 == 0)
            rbx_11 = nullptr
        else
            *rax_262 = nullptr
            rax_262[1] = 0
            __builtin_memset(&rax_262[6], 0, 0x18)
            rax_262[0xa] = 0
            rax_262[0xb] = 0
            rax_262[4] = 0
            rax_262[5].d = 0
            *(rax_262 + 0x2c) = 0x3f800000
        
        memset(rbx_11, 0, 0x60)
        sub_1405d16e0(&rbx_11[8], var_b78)
        zmm11 = 0x3f000000
        *rbx_11 = nullptr
        rbx_11[1].d = rax_255
        *(rbx_11 + 0xc) = rax_261
        uint128_t zmm1_11 = zx.o(var_c80)
        uint128_t zmm0_24
        zmm0_24.d = _mm_cvtepi32_ps(zx.o(var_c7c)).d f- 0.5f
        zmm1_11.d = _mm_cvtepi32_ps(zmm1_11).d f- 0.5f
        float zmm2_3 = zmm13.d / temp0_30[0]
        zmm0_24.d = zmm0_24.d f/ temp0_30[0]
        zmm1_11.d = zmm1_11.d f/ zmm9_1.d
        *(rbx_11 + 0x14) = zmm0_24.d
        rbx_11[2].d = zmm1_11.d
        rbx_11[3].d = var_c08.d
        _mm_shuffle_ps(zmm9_1, zmm9_1, 0xe1)
        zmm0_24.d = temp0_30[0]
        _mm_shuffle_ps(zmm0_24, zmm0_24, 0xc6)
        zmm1_11.d = zmm13.d f/ zmm9_1.d
        *(rbx_11 + 0x30) = zmm12_1
        zmm0_24.d = zmm1_11.d
        _mm_shuffle_ps(zmm0_24, zmm0_24, 0x27)
        zmm0_24.d = zmm2_3
        zmm0_24 = _mm_shuffle_ps(zmm0_24, zmm0_24, 0x39)
        var_c68.o = zmm0_24
        *(rbx_11 + 0x20) = zmm0_24
        void var_2c8
        int64_t* rax_263
        int512_t zmm6_10
        rax_263, zmm6_10 = sub_1413114c0(&var_2c8, arg1, &var_448)
        *(rbx_11 + 0x50) = *rax_263
        float var_508[0x4]
        char rcx_96 = sub_1419a2ec0(r14_4[0xa2a], &var_508, &data_143eb2ad0, 0)
        zmm7_1 = var_508
        int32_t temp84_1
        int32_t temp85_1
        temp84_1:temp85_1 = sx.q(rax_255 + 7)
        zmm6_10.o = zx.o(0)
        var_108 = (temp85_1 + (temp84_1 & 7)) s>> 3
        int32_t temp86_1
        int32_t temp87_1
        temp86_1:temp87_1 = sx.q(rax_261 + 7)
        var_104 = (temp87_1 + (temp86_1 & 7)) s>> 3
        int128_t var_438_1 = sub_141316f80(rcx_96)
        sub_141998c50(zmm7_1[0].q, &data_143eb5910, rbx_11)
        int64_t zmm0_26 = var_108.q
        int64_t* rdx_98 = arg1[1]
        var_bf0 = rbx_11
        int32_t var_bd0_3 = 1
        int64_t var_bd8_3 = zmm0_26
        void*** rax_272
        char rcx_98
        rax_272, rcx_98 = sub_14081d830(0x60, rdx_98, 1, 0)
        void*** rdi_12 = rax_272
        
        if (rax_272 == 0)
            rdi_12 = nullptr
        else
            var_968.q = rbx_11
            sub_141316f80(rcx_98)
            var_968:8.q = &data_143eb5940
            uint128_t var_428 = var_968
            void var_bab
            sub_141992bd0(rdi_12, &var_bab, &var_428, 2)
            uint128_t zmm0_28 = var_bf0.o
            *rdi_12 = &data_142f5cb30
            *(rdi_12 + 0x38) = zmm0_28
            *(rdi_12 + 0x48) = zmm7_1
            rdi_12[0xb] = var_bd0_3.q
        
        sub_1419968d0(arg1, rdi_12)
        rax_230 = rdx_12
        rbx_10 = var_c54
        rsi_6 = var_bf8
        rdi_10 = r9_3
    
    int128_t var_b38
    
    if (rax_230 != 0 || rdi_10 != 0)
        int64_t* rdx_101 = arg1[1]
        int64_t var_100_1 = 0x309
        var_108 = 0x14
        var_104 = 2
        void*** rax_273 = sub_14081d830(0x48, rdx_101, 1, 0)
        
        if (rax_273 == 0)
            rax_273 = nullptr
        else
            int128_t zmm0_29 = var_108.o
            rax_273[2] = 0
            rax_273[1] = u"DOFIndirectDrawParameters"
            rax_273[3].b = 0
            *(rax_273 + 0x1c) = 0
            rax_273[4] = 0
            rax_273[5].w = 0x200
            *rax_273 = &data_142f285d0
            *(rax_273 + 0x30) = zmm0_29
            rax_273[8] = 0
        
        var_b18 = rax_273
        var_104 = (rsi_6 * 5).d
        var_100_1:4.d = 2
        var_100_1.d = 0x209
        var_108 = 0x10
        var_b38 = var_108.o
        
        if (rdx_12 != 0)
            var_b88_1 = sub_1413111f0(arg1, &var_b38, u"DOFForegroundDrawList", 0)
        
        if (rdi_10 != 0)
            var_c18 = sub_1413111f0(arg1, &var_b38, u"DOFBackgroundDrawList", 0)
    
    float rdi_13 = rax_209
    var_c85 = var_c86
    
    if (rbx_10 s<= rax_209)
        rdi_13 = rbx_10
    
    int64_t rbx_12 = var_c80.q
    var_c10.q = rbx_12
    var_c38.d = rdi_13
    int64_t* rax_278 = sub_1412ec5e0(arg1)
    *rax_278 = 0
    rax_278[1].d = rbx_12.d
    *(rax_278 + 0xc) = rax_176
    uint128_t zmm1_13 = zx.o(var_c80)
    uint128_t zmm0_30 = _mm_cvtepi32_ps(zx.o(var_c7c))
    rax_278[3].d = rsi_6.d
    zmm1_13 = _mm_cvtepi32_ps(zmm1_13)
    zmm0_30.d = zmm0_30.d f- zmm11[0]
    zmm1_13.d = zmm1_13.d f- zmm11[0]
    zmm0_30.d = zmm0_30.d f/ temp0_30[0]
    zmm1_13.d = zmm1_13.d f/ zmm9_1.d
    *(rax_278 + 0x14) = zmm0_30.d
    rax_278[2].d = zmm1_13.d
    *(rax_278 + 0x1c) = var_c08.d
    rax_278[4].d = zmm15_1
    *(rax_278 + 0x24) = *(data_143eb27c0 + 4)
    rax_278[5] = sub_14141f4d0(arg1, r14_4)
    sub_1405d16e0(&rax_278[6], var_b78)
    _mm_shuffle_ps(zmm9_1, zmm9_1, 0xe1)
    uint128_t zmm0_31
    zmm0_31.d = temp0_30[0]
    _mm_shuffle_ps(zmm0_31, zmm0_31, 0xc6)
    zmm7_1 = zmm13
    zmm7_1[0] = zmm7_1[0] / temp0_30[0]
    zmm0_31.d = zmm13.d f/ zmm9_1.d
    _mm_shuffle_ps(zmm0_31, zmm0_31, 0x27)
    zmm0_31.d = zmm7_1[0]
    zmm0_31 = _mm_shuffle_ps(zmm0_31, zmm0_31, 0x39)
    var_c68.o = zmm0_31
    *(rax_278 + 0x40) = zmm0_31
    void var_2b8
    int64_t* rax_282
    int32_t r9_30
    float zmm6_13
    rax_282, r9_30, zmm6_13 = sub_141311280(&var_2b8, arg1, &var_c28)
    zmm7_1[0] = zmm7_1[0] + zmm7_1[0]
    int32_t temp88_1
    int32_t temp89_1
    temp88_1:temp89_1 = sx.q(var_ad4_1)
    *(rax_278 + 0x50) = *rax_282
    uint128_t zmm1_14 = _mm_cvtepi32_ps(zx.o((temp89_1 - temp88_1) s>> 1))
    int32_t temp90_1
    int32_t temp91_1
    temp90_1:temp91_1 = sx.q(var_ad0_1)
    _mm_shuffle_ps(zmm1_14, zmm1_14, 0xe1)
    zmm1_14.d = _mm_cvtepi32_ps(zx.o((temp91_1 - temp90_1) s>> 1)).d
    _mm_shuffle_ps(zmm1_14, zmm1_14, 0xc6)
    zmm1_14.d = zmm6_13 + zmm6_13
    _mm_shuffle_ps(zmm1_14, zmm1_14, 0x27)
    zmm1_14.d = zmm7_1[0]
    zmm1_14 = _mm_shuffle_ps(zmm1_14, zmm1_14, 0x39)
    var_c68.o = zmm1_14
    int32_t rsi_8 = 0
    *(rax_278 + 0x60) = zmm1_14
    *(rax_278 + 0x70) = zmm8
    
    if (rdi_13 s> 0)
        do
            void var_2a8
            int64_t* rax_291
            rax_291, r9_30 = sub_1413114c0(&var_2a8, arg1, &var_948)
            uint64_t rcx_109 = zx.q(rsi_8)
            rsi_8 += 1
            *(rax_278 + (rcx_109 + 8) * 0x10) = *rax_291
        while (rsi_8 s< rdi_13)
    
    int32_t rcx_112 = 0x1c
    char rax_292
    
    if (rdx_12 == 0)
        rax_292 = r9_3
    
    if (rdx_12 != 0 || rax_292 != 0)
        void*** rsi_9 = var_b18
        int32_t rax_293 = 0
        var_c28.q = rsi_9
        var_c28:0xc.w = 0
        
        if ((rsi_9[7].d & 0x100) != 0)
            rax_293 = 0x1c
        
        var_c28:8.d = rax_293
        void*** rax_294 = sub_14081d830(0x28, arg1[1], 1, 0)
        
        if (rax_294 == 0)
            rax_294 = nullptr
        else
            int128_t zmm0_34 = var_c28
            rax_294[1] = rsi_9[1]
            rax_294[2] = 0
            *(rax_294 + 0x18) = zmm0_34
            *rax_294 = &data_142f285c0
        
        rax_278[0x18] = rax_294
        
        if (var_b88_1 != 0)
            int32_t rax_295 = 0
            
            if ((var_b88_1[7].d & 0x100) != 0)
                rax_295 = 0x1c
            
            var_c28.q = var_b88_1
            var_c28:0xc.w = 0
            var_c28:8.d = rax_295
            void*** rax_296 = sub_14081d830(0x28, arg1[1], 1, 0)
            
            if (rax_296 == 0)
                rax_296 = nullptr
            else
                int128_t zmm0_35 = var_c28
                rax_296[1] = var_b88_1[1]
                *rax_296 = &data_142f285c0
                rax_296[2] = 0
                *(rax_296 + 0x18) = zmm0_35
            
            rax_278[0x19] = rax_296
        
        void*** rsi_11 = var_c18
        
        if (rsi_11 != 0)
            int32_t rax_297 = 0
            
            if ((rsi_11[7].d & 0x100) != 0)
                rax_297 = 0x1c
            
            var_c28.q = rsi_11
            var_c28:0xc.w = 0
            var_c28:8.d = rax_297
            void*** rax_298 = sub_14081d830(0x28, arg1[1], 1, 0)
            
            if (rax_298 == 0)
                rax_298 = nullptr
            else
                int128_t zmm0_36 = var_c28
                rax_298[1] = rsi_11[1]
                *rax_298 = &data_142f285c0
                rax_298[2] = 0
                *(rax_298 + 0x18) = zmm0_36
            
            rax_278[0x1a] = rax_298
        
        rcx_112, r9_30 = sub_1419965b0(arg1, rax_278[0x18])
        rax_292 = r9_3
    
    int32_t rdx_114 = -2
    
    if (rdx_12 != 0)
        rdx_114 = 1
    
    char temp93_1 = var_c85
    var_c85 = neg.b(var_c85)
    float var_418[0x4]
    char rcx_122 = sub_1419a2ec0(r14_4[0xa2a], &var_418, &data_143eb2bd0, 
        (sbb.d(r9_30, r9_30, temp93_1 != 0) & 0xc)
            + (sbb.d(rcx_112, rcx_112, rax_292 != 0) & 6) i+ rdi_13 + rdx_114)
    zmm7_1 = var_418
    int32_t temp94_1
    int32_t temp95_1
    temp94_1:temp95_1 = sx.q((rbx_12 + 7).d)
    var_108 = (temp95_1 + (temp94_1 & 7)) s>> 3
    int32_t temp96_1
    int32_t temp97_1
    temp96_1:temp97_1 = sx.q(rax_176 + 7)
    var_104 = (temp97_1 + (temp96_1 & 7)) s>> 3
    int128_t var_5b8_1 = sub_141317540(rcx_122)
    sub_141998c50(zmm7_1[0].q, &data_143eb59b0, rax_278)
    int64_t* rdx_120 = arg1[1]
    int64_t var_bd8_4 = var_108.q
    var_bf0 = rax_278
    int32_t var_bd0_4 = 1
    void*** rax_308
    char rcx_124
    rax_308, rcx_124 = sub_14081d830(0x60, rdx_120, 1, 0)
    void*** rbx_13 = rax_308
    
    if (rax_308 == 0)
        rbx_13 = nullptr
    else
        var_b38.q = rax_278
        sub_141317540(rcx_124)
        var_b38:8.q = &data_143eb59e0
        int128_t var_5a8 = var_b38
        void var_b80
        sub_141992bd0(rbx_13, &var_b80, &var_5a8, 2)
        uint128_t zmm0_39 = var_bf0.o
        *rbx_13 = &data_142f5cb40
        *(rbx_13 + 0x38) = zmm0_39
        *(rbx_13 + 0x48) = zmm7_1
        rbx_13[0xb] = var_bd0_4.q
    
    sub_1419968d0(arg1, rbx_13)
    float rax_309 = var_c54
    
    while (rdi_13 s< rax_309)
        int32_t rcx_127 = var_b48.d
        int32_t rax_310 = rax_309 i- rdi_13
        
        if (rax_310 s<= rcx_127)
            rcx_127 = rax_310
        
        int32_t rax_312 = var_c80 - 1
        var_c10 = rcx_127
        int32_t rsi_12 = 1 << (rdi_13.b - 1)
        int32_t temp0_50 = divs.dp.d(sx.q(rax_312 + rsi_12), rsi_12)
        var_bf8.d = temp0_50
        int32_t temp0_51 = divs.dp.d(sx.q((var_c80.q u>> 0x20).d - 1 + rsi_12), rsi_12)
        var_bf8:4.d = temp0_51
        var_c85 = var_c86
        int64_t* rax_323 = sub_1412ec5e0(arg1)
        *rax_323 = 0
        rax_323[1].d = temp0_50
        *(rax_323 + 0xc) = temp0_51
        uint128_t zmm1_16 = _mm_cvtepi32_ps(zx.o(var_c80))
        uint128_t zmm0_41 = _mm_cvtepi32_ps(zx.o(var_c7c))
        zmm1_16.d = zmm1_16.d f- zmm11[0]
        zmm0_41.d = zmm0_41.d f- zmm11[0]
        zmm1_16.d = zmm1_16.d f/ zmm9_1.d
        zmm0_41.d = zmm0_41.d f/ temp0_30[0]
        rax_323[2].d = zmm1_16.d
        *(rax_323 + 0x14) = zmm0_41.d
        rax_323[5] = sub_14141f4d0(arg1, arg3)
        sub_1405d16e0(&rax_323[6], var_b78)
        uint128_t zmm2_4 = _mm_cvtepi32_ps(zx.o(rsi_12))
        uint128_t zmm1_17
        zmm1_17.d = zmm13.d f/ zmm2_4.d
        uint128_t zmm3_2 = zmm1_17
        zmm1_17.d = zmm1_17.d f* temp0_30[0]
        zmm3_2.d = zmm3_2.d f* zmm9_1.d
        _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
        zmm3_2.d = zmm1_17.d
        _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
        zmm3_2.d = zmm2_4.d f/ zmm9_1.d
        zmm2_4.d = zmm2_4.d f/ temp0_30[0]
        _mm_shuffle_ps(zmm3_2, zmm3_2, 0x27)
        zmm3_2.d = zmm2_4.d
        zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x39)
        var_c68.o = zmm3_2
        *(rax_323 + 0x40) = zmm3_2
        void var_298
        int64_t* rax_325
        int512_t zmm6_16
        rax_325, zmm6_16 = sub_141311280(&var_298, arg1, &var_948)
        int32_t rsi_13 = var_c10
        int32_t rbx_15 = 0
        int32_t rdi_15 = var_c38.d
        *(rax_323 + 0x50) = *rax_325
        
        if (rsi_13 s> 0)
            do
                void var_288
                int64_t* rax_326
                rax_326, zmm6_16 = sub_1413114c0(&var_288, arg1, &var_948)
                rbx_15 += 1
                *(rax_323 + (zx.q(rbx_15) + 8) * 0x10) = *rax_326
            while (rbx_15 s< rsi_13)
        
        r14_4 = arg3
        int32_t r9_38 = 0x17
        
        if (var_c85 != 0)
            r9_38 = 0x23
        
        int128_t var_598
        char rcx_138 = sub_1419a2ec0(r14_4[0xa2a], &var_598, &data_143eb2bd0, r9_38 + rsi_13)
        zmm6_16.o = var_598
        int128_t zmm6_17 = sub_141317540(rcx_138)
        int128_t var_588_1 = zx.o(0)
        sub_141998c50(zmm6_17.q, &data_143eb59b0, rax_323)
        void*** rax_327 = var_bf8
        int64_t* rdx_131 = arg1[1]
        var_bf0 = rax_323
        void*** var_bd8_5 = rax_327
        void*** rax_328
        char rcx_140
        rax_328, rcx_140 = sub_14081d830(0x58, rdx_131, 1, 0)
        void*** rbx_16 = rax_328
        
        if (rax_328 == 0)
            rbx_16 = nullptr
        else
            var_b38.q = rax_323
            sub_141317540(rcx_140)
            var_b38:8.q = &data_143eb59e0
            int128_t var_578 = var_b38
            void var_b93
            sub_141992bd0(rbx_16, &var_b93, &var_578, 0xa)
            int128_t zmm0_46 = var_bf0.o
            *rbx_16 = &data_142f5cab0
            *(rbx_16 + 0x38) = zmm0_46
            *(rbx_16 + 0x48) = zmm6_17
        
        sub_1419968d0(arg1, rbx_16)
        rax_309 = var_c54
        rdi_13 = rdi_15 + rsi_13
        var_c38.d = rdi_13
    
    void*** rsi_14
    void*** r12_9
    
    if (rdx_12 != 0 || r9_3 != 0)
        int32_t* rax_329 = sub_14081d830(0x20, arg1[1], 1, 0)
        int32_t* rbx_17 = rax_329
        
        if (rax_329 == 0)
            rbx_17 = nullptr
        else
            __builtin_memset(&rax_329[2], 0, 0x18)
        
        int16_t var_90c_1 = 0
        __builtin_memset(rbx_17, 0, 0x20)
        *rbx_17 = (int.q(temp0_31)).d
        void*** rax_331 = var_b18
        void*** var_918 = rax_331
        int32_t rax_332 = 0
        
        if ((rax_331[7].d & 0x100) != 0)
            rax_332 = 0x1c
        
        int32_t var_910_1 = rax_332
        void*** rax_333
        int512_t zmm6_18
        rax_333, zmm6_18 = sub_1411e0330(arg1, &var_918)
        rsi_14 = var_b88_1
        *(rbx_17 + 8) = rax_333
        
        if (rsi_14 != 0)
            bool cond:29_1 = (rsi_14[7].d & 0x100) != 0
            int32_t rax_334 = 0
            void*** var_928 = rsi_14
            
            if (cond:29_1)
                rax_334 = 0x1c
            
            int16_t var_91c_1 = 0
            int32_t var_920_1 = rax_334
            void*** rax_335
            rax_335, zmm6_18 = sub_1411e0330(arg1, &var_928)
            *(rbx_17 + 0x10) = rax_335
        
        r12_9 = var_c18
        
        if (r12_9 != 0)
            bool cond:32_1 = (r12_9[7].d & 0x100) != 0
            int32_t rax_336 = 0
            void*** var_938 = r12_9
            int16_t var_92c_1 = 0
            
            if (cond:32_1)
                rax_336 = 0x1c
            
            int32_t var_930_1 = rax_336
            void*** rax_337
            rax_337, zmm6_18 = sub_1411e0330(arg1, &var_938)
            *(rbx_17 + 0x18) = rax_337
        
        float var_568[0x4]
        char rcx_148 =
            sub_1419a2ec0(r14_4[0xa2a], &var_568, &data_143eb2cd0, zx.d(rdx_12) + (zx.d(r9_3) << 1))
        zmm7_1 = var_568
        var_104 = 1
        zmm6_18.o = zx.o(0)
        var_108 = 2
        int128_t var_558_1 = sub_1413176b0(rcx_148)
        sub_141998c50(zmm7_1[0].q, &data_143eb5a50, rbx_17)
        int64_t* rdx_139 = arg1[1]
        int64_t var_bd8_6 = var_108.q
        var_bf0 = rbx_17
        int32_t var_bd0_5 = 1
        void*** rax_339
        char rcx_150
        rax_339, rcx_150 = sub_14081d830(0x60, rdx_139, 1, 0)
        
        if (rax_339 == 0)
            sub_1419968d0(arg1, nullptr)
        else
            var_b38.q = rbx_17
            sub_1413176b0(rcx_150)
            var_b38:8.q = &data_143eb5a80
            int128_t var_548 = var_b38
            void var_b94
            sub_141992bd0(rax_339, &var_b94, &var_548, 2)
            uint128_t zmm0_49 = var_bf0.o
            *rax_339 = &data_142f5cb50
            *(rax_339 + 0x38) = zmm0_49
            *(rax_339 + 0x48) = zmm7_1
            rax_339[0xb] = var_bd0_5.q
            sub_1419968d0(arg1, rax_339)
    else
        rsi_14 = var_b88_1
        r12_9 = var_c18
    
    int32_t* var_838 = &var_128
    float (* var_738)[0x4] = &var_948
    int32_t* var_730_1 = &var_bc8
    bool* var_720_1 = &var_c88
    int32_t* var_718_1 = &var_c80
    int32_t* var_710_1 = &var_b98
    char* var_708_1 = &var_c86
    void**** var_700_1 = &var_c50
    void** var_6f0_1 = &var_b78
    float (* var_6e8_1)[0x4] = &var_9b8
    int32_t* var_6d0_1 = &var_c80
    void**** var_6c8_1 = &var_c50
    int32_t* var_6c0_1 = &var_bc8
    void** var_6b8_1 = &var_b78
    int128_t zmm0_40 = zx.o(0)
    int64_t* var_830_1 = arg1
    float (* var_6b0_1)[0x4] = &var_9b8
    int64_t* var_828_1 = r14_4
    var_af8.o = zmm0_40
    void*** rbx_18 = nullptr
    int128_t var_748 = zx.o(0)
    var_c68.o = zmm0_40
    int128_t var_958 = zx.o(0)
    int64_t* var_728_1 = arg1
    int64_t* var_6f8_1 = r14_4
    int64_t* var_6d8 = arg1
    int64_t* var_6a8_1 = r14_4
    
    if (var_c84_1 != 0)
        rbx_18 = sub_141301ea0(&var_838, 2)
    
    bool cond:31_1 = var_c78 != 0
    void*** var_a30 = nullptr
    
    if (cond:31_1 || var_c87_1 != 0)
        var_a30 = sub_141301ea0(&var_838, 0)
    
    void**** var_608 = &var_a30
    void**** var_5f0_1 = &var_c50
    int32_t* var_5e8_1 = &var_128
    int32_t* var_5e0_1 = &var_c80
    void** var_5d8_1 = &var_b78
    bool* var_5d0_1 = &var_c78
    int32_t* var_5c8_1 = &var_bc8
    void** var_5c0_1 = &var_b18
    int64_t* var_600_1 = r14_4
    int64_t* var_5f8_1 = arg1
    int32_t rdi_20
    
    if (var_c77_1 == 0)
        rdi_20 = var_c44
    else
        int32_t var_990_1 = rax_8
        char var_988_1 = rdx_12
        rdi_20 = var_c44
        int32_t rax_344 = 0
        
        if (var_c84_1 != 0)
            rax_344 = rdi_20
        
        int32_t var_998 = 0
        int32_t var_98c_1 = rax_344
        int32_t rax_345 = 1
        
        if (r8 == 0)
            rax_345 = 0
        
        var_bf8 = nullptr
        int32_t var_994_1 = rax_345
        sub_141302eb0(&var_738, &var_998, rbx_18, &var_af8, &var_bf8)
        sub_141300ae0(&var_6d8, &var_998, &var_af8)
        
        if (rdx_12 != 0)
            void*** var_ca8_5 = rsi_14
            sub_1413021b0(&var_608, &var_998, &var_af8, var_bf8)
    
    if (var_c40 s> 0)
        int32_t var_900_1 = rax_8
        int32_t var_8fc_1 = 0
        void**** var_ca8_6 = &var_c38
        int32_t var_904_1 = 1
        char var_8f8_1 = 0
        int32_t var_908 = 1
        var_c38 = 0
        sub_141302eb0(&var_738, &var_908, 0, &var_748, var_ca8_6)
        int64_t var_8ec_1 = 1
        int32_t rax_347 = 0
        char var_8e0_1 = 0
        
        if (var_c87_1 != 0)
            rax_347 = rdi_20
        
        int32_t var_8f0 = 4
        int32_t var_8e4_1 = rax_347
        var_9a8 = nullptr
        void*** r8_45 = nullptr
        
        if (var_c87_1 != 0)
            r8_45 = var_a30
        
        int512_t zmm6_20
        int512_t zmm7_2
        zmm6_20, zmm7_2 = sub_141302eb0(&var_738, &var_8f0, r8_45, &var_958, &var_9a8)
        zmm6_20.o = var_748
        zmm7_2.o = var_958
    
    int32_t var_9d0_1 = rax_8
    int32_t rax_349 = 0
    
    if (var_c84_1 != 0)
        rax_349 = rdi_20
    
    int64_t var_9d8 = 2
    int32_t var_9cc_1 = rax_349
    char var_9c8_1 = r9_3
    
    if (r9_3 != 0 && rax_12 == 2)
        int32_t rax_350
        rax_350.b = r8 == 2
        var_9d8:4.d = rax_350 + 2
    
    var_c18 = nullptr
    sub_141302eb0(&var_738, &var_9d8, rbx_18, &var_c68, &var_c18)
    int128_t zmm7_3 = sub_141300ae0(&var_6d8, &var_9d8, &var_c68)
    
    if (r9_3 != 0)
        void*** var_ca8_9 = r12_9
        zmm7_3 = sub_1413021b0(&var_608, &var_9d8, &var_c68, var_c18)
    
    uint128_t var_3f8_1 = *(arg4 + 0x40)
    uint128_t zmm1_20 = *(arg4 + 0x60)
    int128_t var_408 = *(arg4 + 0x30)
    uint128_t var_3d8_1 = zmm1_20
    int128_t var_3e8_1 = *(arg4 + 0x50)
    var_3e8_1:8.w = 1
    int128_t var_3c8_1 = *(arg4 + 0x70)
    var_3d8_1:4.d = _mm_bsrli_si128(zmm1_20, 4).d | 0x10000
    void*** result_1 = sub_141188e50(arg1, &var_408, u"DOFRecombine", 0)
    void*** var_b58
    var_b58.o = *(r14_4 + 0x1598)
    void*** rax_355 = sub_14081d830(0xf0, arg1[1], 1, 0)
    void*** rbx_19 = rax_355
    
    if (rax_355 == 0)
        rbx_19 = nullptr
    else
        *rax_355 = nullptr
        rax_355[2] = 0
        rax_355[3].d = 0
        *(rax_355 + 0x1c) = 0x3f800000
        __builtin_memset(&rax_355[6], 0, 0x1c)
        __builtin_memset(&rax_355[0xc], 0, 0x28)
        __builtin_memset(&rax_355[0x14], 0, 0x48)
        *(rax_355 + 0x4c) = 0x3f800000
        rax_355[0x12] = 0
        rax_355[0x13].d = 0
        *(rax_355 + 0x9c) = 0x3f800000
    
    if (var_c87_1 == 0)
        rdi_20 = 0
    
    memset(rbx_19, 0, 0xf0)
    int128_t zmm6_21 = sub_1405d16e0(rbx_19, var_b78)
    int32_t rax_356 = var_b58.d
    int32_t rcx_168 = var_b50.d
    int32_t rsi_17 = rcx_168 - rax_356
    int32_t rdi_21 = var_b50:4.d
    uint128_t zmm3_3 = _mm_cvtepi32_ps(zx.o(rsi_17))
    uint128_t zmm0_52
    zmm0_52.d = zmm3_3.d f* zmm11[0]
    uint128_t zmm1_21
    zmm1_21.d = var_bb4.d f* zmm0_52.d
    rbx_19[2].d = zmm1_21.d
    zmm1_21.d = var_b64.d f* zmm0_52.d
    *(rbx_19 + 0x14) = zmm1_21.d
    zmm1_21.d = var_c04.d f* zmm0_52.d
    rbx_19[3].d = zmm1_21.d
    rbx_19[4].d = var_bb0.d
    zmm1_21.d = var_c00.d f* zmm0_52.d
    *(rbx_19 + 0x24) = zmm1_21.d
    rbx_19[6].d = rax_356
    int32_t rax_357 = var_b58:4.d
    *(rbx_19 + 0x34) = rax_357
    *(rbx_19 + 0x3c) = rdi_21
    int32_t rdi_22 = rdi_21 - rax_357
    rbx_19[7].d = rcx_168
    zmm1_21.d = zmm13.d f/ zmm3_3.d
    _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
    zmm0_52 = _mm_cvtepi32_ps(zx.o(rdi_22))
    uint128_t zmm2_5
    zmm2_5.d = zmm13.d f/ zmm0_52.d
    zmm3_3.d = zmm0_52.d
    _mm_shuffle_ps(zmm3_3, zmm3_3, 0xc6)
    zmm3_3.d = zmm1_21.d
    _mm_shuffle_ps(zmm3_3, zmm3_3, 0x27)
    zmm3_3.d = zmm2_5.d
    *(rbx_19 + 0x40) = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x39)
    rbx_19[0xa] = *(r14_4 + 0x4974)
    zmm2_5 = zx.o(var_c50.d)
    zmm1_21 = zx.o(var_c50:4.d)
    zmm0_52 = _mm_cvtepi32_ps(zx.o(var_bc8))
    zmm2_5 = _mm_cvtepi32_ps(zmm2_5)
    zmm1_21 = _mm_cvtepi32_ps(zmm1_21)
    zmm2_5.d = zmm2_5.d f- zmm11[0]
    zmm1_21.d = zmm1_21.d f- zmm11[0]
    zmm2_5.d = zmm2_5.d f/ zmm0_52.d
    rbx_19[0xd] = var_ba8.q
    zmm0_52 = _mm_cvtepi32_ps(zx.o(rax_53))
    rbx_19[0xb].d = zmm2_5.d
    zmm1_21.d = zmm1_21.d f/ zmm0_52.d
    *(rbx_19 + 0x5c) = zmm1_21.d
    rbx_19[0xe] = *(arg2 + 8)
    rbx_19[0xf] = var_b08:8.q
    void*** rax_362 = arg5
    
    if (rax_362 == 0)
        rax_362, zmm6_21 = sub_1410fccd0(arg1, &data_1439b70d0, u"External", 0)
    
    rbx_19[0x10] = rax_362
    zmm2_5 = _mm_cvtepi32_ps(zx.o(var_bc8))
    zmm0_52 = _mm_cvtepi32_ps(zx.o(rax_53))
    zmm1_21.d = zmm13.d f/ zmm2_5.d
    _mm_shuffle_ps(zmm2_5, zmm2_5, 0xe1)
    zmm2_5.d = zmm0_52.d
    _mm_shuffle_ps(zmm2_5, zmm2_5, 0xc6)
    zmm13.d = zmm13.d f/ zmm0_52.d
    zmm0_52 = var_af8.o
    zmm2_5.d = zmm1_21.d
    _mm_shuffle_ps(zmm2_5, zmm2_5, 0x27)
    zmm2_5.d = zmm13.d
    *(rbx_19 + 0xa0) = zmm0_52
    zmm0_52 = var_c68.o
    *(rbx_19 + 0x90) = _mm_shuffle_ps(zmm2_5, zmm2_5, 0x39)
    *(rbx_19 + 0xb0) = zmm6_21
    *(rbx_19 + 0xc0) = zmm7_3
    *(rbx_19 + 0xd0) = zmm0_52
    
    if (var_c87_1 != 0)
        rbx_19[0xc] = sub_141301ea0(&var_838, 1)
    
    void*** rax_364
    int512_t zmm6_22
    rax_364, zmm6_22 = sub_1411e0390(arg1, result_1)
    uint64_t rdx_154 = zx.q(var_c40)
    rbx_19[0x1c] = rax_364
    uint64_t rdx_155 = zx.q(rdx_154.d + rdi_20 + (rdx_154 << 1).d)
    int128_t var_538
    char rcx_175 = sub_1419a2ec0(r14_4[0xa2a], &var_538, &data_143eb32d0, 
        zx.d(var_c77_1) + (rdx_155 << 2).d + rdx_155.d + 2)
    zmm7_3 = var_538
    int32_t temp111_1
    int32_t temp112_1
    temp111_1:temp112_1 = sx.q(rsi_17 + 7)
    zmm6_22.o = zx.o(0)
    var_108 = (temp112_1 + (temp111_1 & 7)) s>> 3
    int32_t temp113_1
    int32_t temp114_1
    temp113_1:temp114_1 = sx.q(rdi_22 + 7)
    var_104 = (temp114_1 + (temp113_1 & 7)) s>> 3
    int128_t var_528_1 = sub_1413173d0(rcx_175)
    sub_141998c50(zmm7_3.q, &data_143eb5d70, rbx_19)
    int64_t zmm0_53 = var_108.q
    int64_t* rdx_162 = arg1[1]
    var_bf0 = rbx_19
    int32_t var_bd0_6 = 1
    int64_t var_bd8_7 = zmm0_53
    void*** rax_374
    char rcx_177
    rax_374, rcx_177 = sub_14081d830(0x60, rdx_162, 1, 0)
    void*** rdi_23 = rax_374
    
    if (rax_374 == 0)
        rdi_23 = nullptr
    else
        var_958.q = rbx_19
        sub_1413173d0(rcx_177)
        var_958:8.q = &data_143eb5da0
        int128_t var_518 = var_958
        void var_bac
        sub_141992bd0(rdi_23, &var_bac, &var_518, 2)
        uint128_t zmm0_55 = var_bf0.o
        *rdi_23 = &data_142f5cb90
        *(rdi_23 + 0x38) = zmm0_55
        *(rdi_23 + 0x48) = zmm7_3
        rdi_23[0xb] = var_bd0_6.q
    
    sub_1419968d0(arg1, rdi_23)
    sub_1405d1550(&var_b78)
    result = result_1
else
    result = arg4

__security_check_cookie(rax_1 ^ &var_cc8)
return result
