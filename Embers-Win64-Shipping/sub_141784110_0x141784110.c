// 函数: sub_141784110
// 地址: 0x141784110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* r8 = *arg1
int64_t* r13 = arg2
int64_t var_1f8 = *(r8 + 0x44)
int64_t var_1ec = *(r8 + 0x50)
float zmm2 = *arg1[1]
int64_t zmm0
zmm0.d = var_1f8.d.d f- zmm2
var_1f8.d = zmm0.d
var_1f8:4.d = var_1f8:4.d - zmm2
zmm0.d = (*(r8 + 0x4c)).d f- zmm2
int32_t var_1f0_1 = zmm0.d
zmm0 = var_1ec:4.d
var_1ec.d = var_1ec.d + zmm2
zmm0.d = zmm0.d f+ zmm2
var_1ec:4.d = zmm0.d
float var_1e4_1 = *(r8 + 0x58) + zmm2
int64_t var_110[0x3]
int64_t* rax_5
void* rdx_1
int64_t** r8_2
float zmm6[0x4]
float zmm7[0x4]
int64_t zmm9
int64_t zmm10
int128_t zmm11
int128_t zmm12
float zmm13[0x4]
float zmm14[0x4]
rax_5, rdx_1, r8_2, zmm6, zmm7, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
    sub_1417598c0(&var_1f8, &var_110, arg1[2])
var_1f8 = *rax_5
int32_t var_1f0_2 = rax_5[1].d
int64_t var_1ec_1 = *(rax_5 + 0xc)
void* rcx_3 = arg1[3] + 0xb0
int64_t var_1e0
int64_t zmm0_1 = var_1e0
int32_t var_1e4_2 = *(rax_5 + 0x14)
int32_t* var_1a8
int64_t* var_1b0 = &var_1a8
float var_d8
int32_t* var_f8 = &var_d8
int16_t var_dc = 0
char var_da = 0
int32_t var_1d8
int32_t var_1c0 = var_1d8
int64_t** var_230 = &var_1b0
int64_t* var_238 = &var_1f8
var_1a8 = nullptr
int32_t var_1a0 = 0
int64_t var_1c8 = zmm0_1
sub_1416ed5f0(rcx_3, rdx_1, r8_2)
int32_t* r14 = var_1a8
int64_t r15 = 0
void* rcx_4 = &r14[sx.q(var_1a0)]
uint64_t r12_3 = (rcx_4 - r14 + 3) u>> 2

if (r14 u> rcx_4)
    r12_3 = 0

if (r12_3 != 0)
    int32_t rsi_1 = var_1d8
    float var_38_1[0x4] = zmm6
    float var_48_1[0x4] = zmm7
    int64_t var_68_1 = zmm9
    int64_t var_78_1 = zmm10
    int128_t var_88_1 = zmm11
    zmm11 = zx.o(0)
    int128_t var_98_1 = zmm12
    float var_a8_1[0x4] = zmm13
    int32_t var_190_1 = 0
    int32_t var_1c0_1 = 0
    int32_t rdi_1 = var_1d8
    float var_b8_1[0x4] = zmm14
    int64_t var_198 = 0x3f800000
    var_1c8 = 0x3f800000
    
    do
        int64_t r8_3 = *r13
        int128_t* rdx_2 = arg1[4]
        int32_t* var_208_1 = nullptr
        int32_t var_210_1 = zmm11.d
        zmm7 = *rdx_2
        zmm6 = *(rdx_2 + 4)
        int64_t r9_1 = sx.q(*r14) * 3
        float zmm1_1[0x4] = *(rdx_2 + 8)
        void** rdx_3 = arg1[5]
        int64_t zmm4_1 = zmm6[0].q
        int64_t zmm2_1 = zmm6[0].q
        int64_t r10_1 = *(arg1[3] + 0x38)
        uint64_t rcx_5 = zx.q(*(r8_3 + (r9_1 << 1))) * 3
        uint64_t rax_12 = zx.q(*(r8_3 + (r9_1 << 1) + 2))
        zmm1_1[0] = zmm1_1[0] f* *(r10_1 + (rcx_5 << 2) + 8)
        zmm7[0] = zmm7[0] f* *(r10_1 + (rcx_5 << 2))
        zmm4_1.d = zmm4_1.d f* *(r10_1 + (rcx_5 << 2) + 4)
        uint64_t rcx_6 = rax_12 * 3
        uint64_t rax_13 = zx.q(*(r8_3 + (r9_1 << 1) + 4))
        zmm7[0] = zmm7[0] f* *(r10_1 + (rcx_6 << 2))
        int128_t* r8_4 = rdx_3[1]
        zmm2_1.d = zmm2_1.d f* *(r10_1 + (rcx_6 << 2) + 4)
        void* rdx_4 = *rdx_3
        float var_128_1 = zmm1_1[0]
        zmm1_1[0] = zmm1_1[0] f* *(r10_1 + (rcx_6 << 2) + 8)
        uint64_t rcx_7 = rax_13 * 3
        zmm6[0] = zmm6[0] f* *(r10_1 + (rcx_7 << 2) + 4)
        float var_f0_1 = var_128_1
        zmm1_1[0] = zmm1_1[0] f* *(r10_1 + (rcx_7 << 2) + 8)
        zmm7[0] = zmm7[0] f* *(r10_1 + (rcx_7 << 2))
        float var_148_1 = zmm1_1[0]
        float var_e4_1 = var_148_1
        var_f8 = (_mm_unpacklo_ps(zmm7, zmm4_1)).q
        int64_t var_ec_1 = (_mm_unpacklo_ps(zmm7, zmm2_1)).q
        float var_158_1 = zmm1_1[0]
        var_d8 = var_158_1
        float (* var_218_1)[0x4] = &var_198
        int32_t var_220_1 = zmm11.d
        int64_t var_170
        int32_t* var_228_1 = &var_170
        int64_t var_180
        int64_t* var_230_1 = &var_180
        int64_t var_120[0x2]
        int64_t* var_238_1 = &var_120
        int64_t var_e0_1 = (_mm_unpacklo_ps(zmm7, zmm6[0].q)).q
        float var_1b8
        char rax_16
        int64_t zmm6_1
        int128_t zmm8_1
        int64_t zmm9_1
        int64_t zmm10_1
        int32_t zmm11_1
        int128_t zmm12_1
        int32_t* zmm13_1
        int64_t zmm14_1
        rax_16, zmm6_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1 = sub_141626430(
            &var_f8, rdx_4, r8_4, &var_1b8, var_238_1, var_230_1, var_228_1, var_220_1, var_218_1, 
            var_210_1, var_208_1)
        
        if (rax_16 != 0)
            zmm9_1 = var_180
            zmm8_1 = var_1b8 ^ zmm12_1
            int32_t var_178
            rdi_1 = var_178
            zmm10_1 = var_170
            int32_t var_168
            rsi_1 = var_168
        label_14178449d:
            int32_t* rax_17 = arg1[6]
            
            if (not(zmm8_1.d f>= *rax_17))
                *rax_17 = zmm8_1.d
                int64_t* rax_18 = arg1[7]
                *rax_18 = zmm9_1
                rax_18[1].d = rdi_1
                int64_t* rax_19 = arg1[8]
                *rax_19 = zmm10_1
                rax_19[1].d = rsi_1
        else if (not(zmm8_1.d f>= zmm11_1))
            goto label_14178449d
        
        void** rdx_5 = arg1[5]
        float var_e4_2 = var_158_1
        int32_t* var_208_2 = nullptr
        int128_t* r8_5 = rdx_5[1]
        void* rdx_6 = *rdx_5
        var_d8 = var_148_1
        float (* var_218_2)[0x4] = &var_1c8
        int32_t* var_228_2 = &var_1e0
        int64_t var_140
        int64_t* var_230_2 = &var_140
        int64_t* var_238_2 = &var_110
        var_f8 = zmm13_1
        float var_f0_2 = var_128_1
        int64_t var_ec_2 = zmm6_1
        int64_t var_e0_2 = zmm14_1
        char rax_22
        int128_t zmm8_2
        int64_t zmm9_2
        int64_t zmm10_2
        int128_t zmm12_2
        rax_22, zmm8_2, zmm9_2, zmm10_2, zmm11, zmm12_2 = sub_141626430(&var_f8, rdx_6, r8_5, 
            &var_1b0, var_238_2, var_230_2, var_228_2, zmm11_1, var_218_2, zmm11_1, var_208_2)
        
        if (rax_22 != 0)
            zmm9_2 = var_140
            zmm8_2 = var_1b0.d ^ zmm12_2
            int32_t var_138
            rdi_1 = var_138
            zmm10_2 = var_1e0
            rsi_1 = var_1d8
        label_141784565:
            int32_t* rax_23 = arg1[6]
            
            if (not(zmm8_2.d f>= *rax_23))
                *rax_23 = zmm8_2.d
                int64_t* rax_24 = arg1[7]
                *rax_24 = zmm9_2
                rax_24[1].d = rdi_1
                int64_t* rax_25 = arg1[8]
                *rax_25 = zmm10_2
                rax_25[1].d = rsi_1
        else if (not(zmm8_2.d f>= zmm11.d))
            goto label_141784565
        
        r13 = arg2
        r14 = &r14[1]
        r15 += 1
    while (r15 != r12_3)
    
    r14 = var_1a8

float zmm0_2[0x4] = *arg1[6]
float temp0_4 = *arg1[1]
zmm0_2[0] - temp0_4
int64_t* rbx
rbx.b = zmm0_2[0] < temp0_4

if (r14 != 0)
    sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_258)
return zx.q(rbx.b)
