// 函数: sub_1417897b0
// 地址: 0x1417897b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* rax_2 = *arg1
int32_t* r8 = arg1[2]
int64_t* r12 = arg2
int32_t zmm3 = *(rax_2 + 0x1c)
float zmm1[0x4] = *(rax_2 + 0x18)
float zmm5[0x4] = *(rax_2 + 0x10)
int64_t zmm2 = *(rax_2 + 0x14)
zmm1[0] = zmm1[0] f+ zmm3
zmm1[0] = zmm1[0] f- zmm3
int64_t zmm4 = zmm2
zmm5[0] = zmm5[0] f- zmm3
zmm2.d = zmm2.d f- zmm3
float var_190 = zmm1[0]
zmm5[0] = zmm5[0] f+ zmm3
float var_1f0 = zmm1[0]
zmm4.d = zmm4.d f+ zmm3
zmm1 = var_1f0
int64_t var_1e8 = (_mm_unpacklo_ps(zmm5, zmm2)).q
int64_t var_1dc = (_mm_unpacklo_ps(zmm5, zmm4)).q
float zmm0[0x4] = var_1e8:4.d
zmm2 = *arg1[1]
zmm0[0] = zmm0[0] f- zmm2.d
zmm1[0] = zmm1[0] f- zmm2.d
zmm5[0] = zmm5[0] f- zmm2.d
zmm5[0] = zmm5[0] f+ zmm2.d
var_1e8:4.d = zmm0[0]
zmm0 = var_1dc:4.d
float var_1e0_1 = zmm1[0]
zmm0[0] = zmm0[0] f+ zmm2.d
zmm1 = var_190
zmm1[0] = zmm1[0] f+ zmm2.d
var_1e8.d = zmm5[0]
var_1dc.d = zmm5[0]
var_1dc:4.d = zmm0[0]
float var_1d4_1 = zmm1[0]
int64_t var_108[0x3]
int64_t* rax_6
void* rdx_1
int64_t** r8_1
float zmm7[0x4]
int64_t zmm9
int64_t zmm10
int128_t zmm11
int128_t zmm12
float zmm13[0x4]
float zmm14[0x4]
rax_6, rdx_1, r8_1, zmm7, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
    sub_1417598c0(&var_1e8, &var_108, r8)
var_1e8 = *rax_6
int32_t var_1e0_2 = rax_6[1].d
void* rcx_2 = arg1[3]
int64_t var_1dc_1 = *(rax_6 + 0xc)
int64_t var_1f8
int64_t zmm0_1 = var_1f8
int32_t var_1d4_2 = *(rax_6 + 0x14)
int32_t* var_1a8
int64_t* var_1b0 = &var_1a8
float var_d0
int32_t* var_f0 = &var_d0
int16_t var_d4 = 0
char var_d2 = 0
float var_1c0 = var_1f0
var_1a8 = nullptr
int32_t var_1a0 = 0
int64_t var_1c8 = zmm0_1
int64_t** var_230 = &var_1b0
int64_t* var_238 = &var_1e8
sub_1416ed5f0(rcx_2 + 0xb0, rdx_1, r8_1)
int32_t* r14 = var_1a8
int64_t r15 = 0
void* rcx_4 = &r14[sx.q(var_1a0)]
uint64_t rax_13 = (rcx_4 - r14 + 3) u>> 2

if (r14 u> rcx_4)
    rax_13 = 0

if (rax_13 != 0)
    float rsi_1 = var_1f0
    float var_48_1[0x4] = zmm7
    int64_t var_68_1 = zmm9
    int64_t var_78_1 = zmm10
    int128_t var_88_1 = zmm11
    zmm11 = zx.o(0)
    int128_t var_98_1 = zmm12
    float var_a8_1[0x4] = zmm13
    int32_t var_180_1 = 0
    int32_t var_1c0_1 = 0
    float rdi_1 = var_1f0
    float var_b8_1[0x4] = zmm14
    int64_t var_188 = 0x3f800000
    var_1c8 = 0x3f800000
    
    do
        int64_t r8_2 = *r12
        int128_t* rdx_2 = arg1[4]
        int32_t* var_208_1 = nullptr
        int32_t var_210_1 = zmm11.d
        zmm7 = *rdx_2
        int64_t zmm6_1 = *(rdx_2 + 4)
        int64_t r9_1 = sx.q(*r14) * 3
        float zmm1_1[0x4] = *(rdx_2 + 8)
        void** rdx_3 = arg1[5]
        int64_t r10_1 = *(arg1[3] + 0x38)
        int64_t rcx_5 = sx.q(*(r8_2 + (r9_1 << 2))) * 3
        int64_t rax_17 = sx.q(*(r8_2 + (r9_1 << 2) + 4))
        zmm1_1[0] = zmm1_1[0] f* *(r10_1 + (rcx_5 << 2) + 8)
        zmm7[0] = zmm7[0] f* *(r10_1 + (rcx_5 << 2))
        int64_t zmm4_1
        zmm4_1.d = zmm6_1.d f* *(r10_1 + (rcx_5 << 2) + 4)
        int64_t rcx_6 = rax_17 * 3
        int64_t rax_18 = sx.q(*(r8_2 + (r9_1 << 2) + 8))
        zmm7[0] = zmm7[0] f* *(r10_1 + (rcx_6 << 2))
        int128_t* r8_3 = rdx_3[1]
        int64_t zmm2_1
        zmm2_1.d = zmm6_1.d f* *(r10_1 + (rcx_6 << 2) + 4)
        void* rdx_4 = *rdx_3
        float var_120_1 = zmm1_1[0]
        zmm1_1[0] = zmm1_1[0] f* *(r10_1 + (rcx_6 << 2) + 8)
        int64_t rcx_7 = rax_18 * 3
        zmm6_1.d = zmm6_1.d f* *(r10_1 + (rcx_7 << 2) + 4)
        float var_e8_1 = var_120_1
        zmm1_1[0] = zmm1_1[0] f* *(r10_1 + (rcx_7 << 2) + 8)
        zmm7[0] = zmm7[0] f* *(r10_1 + (rcx_7 << 2))
        float var_130_1 = zmm1_1[0]
        var_f0 = (_mm_unpacklo_ps(zmm7, zmm4_1)).q
        float var_140_1 = zmm1_1[0]
        var_d0 = var_140_1
        float (* var_218_1)[0x4] = &var_188
        int32_t var_220_1 = zmm11.d
        int64_t var_158
        int64_t* var_228_1 = &var_158
        int64_t var_e4_1 = (_mm_unpacklo_ps(zmm7, zmm2_1)).q
        int64_t var_168
        int64_t* var_230_1 = &var_168
        float temp0_4[0x4] = _mm_unpacklo_ps(zmm7, zmm6_1)
        temp0_4[0]
        float var_dc_1 = var_130_1
        int64_t var_d8_1 = temp0_4.q
        float var_1b8
        int64_t var_118[0x2]
        char rax_20
        int64_t zmm6_2
        int128_t zmm8_1
        int64_t zmm9_1
        int64_t zmm10_1
        int32_t zmm11_1
        int128_t zmm12_1
        int32_t* zmm13_1
        int64_t zmm14_1
        rax_20, zmm6_2, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1 = sub_141628040(
            &var_f0, rdx_4, r8_3, &var_1b8, &var_118, var_230_1, var_228_1, var_220_1, var_218_1, 
            var_210_1, var_208_1)
        
        if (rax_20 != 0)
            zmm9_1 = var_168
            zmm8_1 = var_1b8 ^ zmm12_1
            float var_160
            rdi_1 = var_160
            zmm10_1 = var_158
            float var_150
            rsi_1 = var_150
        label_141789b7f:
            int32_t* rax_21 = arg1[6]
            
            if (not(zmm8_1.d f>= *rax_21))
                *rax_21 = zmm8_1.d
                int64_t* rax_22 = arg1[7]
                *rax_22 = zmm9_1
                rax_22[1].d = rdi_1
                int64_t* rax_23 = arg1[8]
                *rax_23 = zmm10_1
                rax_23[1].d = rsi_1
        else if (not(zmm8_1.d f>= zmm11_1))
            goto label_141789b7f
        
        void** rdx_5 = arg1[5]
        int32_t* var_208_2 = nullptr
        float var_dc_2 = var_140_1
        int128_t* r8_4 = rdx_5[1]
        void* rdx_6 = *rdx_5
        int64_t* var_218_2 = &var_1c8
        int64_t* var_228_2 = &var_1f8
        int64_t var_198
        int64_t* var_230_2 = &var_198
        int64_t* var_238_2 = &var_108
        var_f0 = zmm13_1
        float var_e8_2 = var_120_1
        int64_t var_e4_2 = zmm6_2
        int64_t var_d8_2 = zmm14_1
        var_d0 = var_130_1
        char rax_25
        int128_t zmm8_2
        int64_t zmm9_2
        int64_t zmm10_2
        int128_t zmm12_2
        rax_25, zmm8_2, zmm9_2, zmm10_2, zmm11, zmm12_2 = sub_141628040(&var_f0, rdx_6, r8_4, 
            &var_1b0, var_238_2, var_230_2, var_228_2, zmm11_1, var_218_2, zmm11_1, var_208_2)
        
        if (rax_25 != 0)
            zmm9_2 = var_198
            zmm8_2 = var_1b0.d ^ zmm12_2
            rdi_1 = var_190
            zmm10_2 = var_1f8
            rsi_1 = var_1f0
        label_141789c49:
            int32_t* rax_26 = arg1[6]
            
            if (not(zmm8_2.d f>= *rax_26))
                *rax_26 = zmm8_2.d
                int64_t* rax_27 = arg1[7]
                *rax_27 = zmm9_2
                rax_27[1].d = rdi_1
                int64_t* rax_28 = arg1[8]
                *rax_28 = zmm10_2
                rax_28[1].d = rsi_1
        else if (not(zmm8_2.d f>= zmm11.d))
            goto label_141789c49
        
        r12 = arg2
        r14 = &r14[1]
        r15 += 1
    while (r15 != rax_13)
    
    r14 = var_1a8

float zmm0_2[0x4] = *arg1[6]
float temp0_5 = *arg1[1]
zmm0_2[0] - temp0_5
int64_t* rbx
rbx.b = zmm0_2[0] < temp0_5

if (r14 != 0)
    sub_140a74f90(r14)

__security_check_cookie(rax_1 ^ &var_258)
return zx.q(rbx.b)
