// 函数: sub_140dc60b0
// 地址: 0x140dc60b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm15
uint128_t var_c8 = zmm15
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* r14 = *arg2
char r8 = arg1[5].b
int64_t* var_128 = arg1
int128_t var_108 = *(r14 + 8)
int32_t var_180
sub_140ae16d0(&var_108, &var_180, r8)
int32_t* rcx_1 = *(r14 + 0x40)
int128_t zmm10 = 0x3f800000
int32_t r13 = 1
int64_t zmm1 = arg2[3]
int64_t r9 = 0
char r8_1 = *(arg2 + 0x4d)
uint128_t zmm6 = 0x3f800000
uint128_t zmm9 = arg2[9].d
int32_t r12 = 1
int32_t var_140 = 0x3f800000
int32_t r15 = 1
uint128_t zmm12 = zx.o(0)
uint128_t zmm11 = zx.o(0)
uint128_t zmm14 = 0x3f800000
uint128_t var_158 = *(arg2 + 8)
uint64_t var_120 = arg2[5]
int32_t var_178
int32_t var_170
int32_t var_164
int32_t var_160
uint128_t zmm7
uint128_t zmm8

if (rcx_1 == 0)
    zmm7 = *(arg1 + 0x24)
    zmm8 = 0x3f800000
    var_164 = zmm7.d
    var_160 = zmm7.d
    var_178 = 0x3f800000
    var_170 = 0x3f800000
else
    int32_t rax_2 = rcx_1[6]
    zmm8 = *(arg1 + 0x24)
    r9 = *(rcx_1 + 0x10)
    
    if (rax_2 != 0)
        r12 = rax_2
    
    int32_t rax_3 = rcx_1[7]
    
    if (rax_3 != 0)
        r15 = rax_3
    
    uint128_t zmm0_1
    zmm0_1.d = float.s(zx.q(r12))
    zmm7.d = zmm8.d f/ zmm0_1.d
    zmm0_1.d = float.s(zx.q(r15))
    var_164 = zmm7.d
    zmm8.d = zmm8.d f/ zmm0_1.d
    var_160 = zmm8.d
    
    if (*(r14 + 0x38) == 0)
        zmm15 = rcx_1[2]
        zmm0_1 = rcx_1[3]
        zmm11.d = zmm8.d f+ rcx_1[1]
        zmm12.d = zmm7.d f+ *rcx_1
        var_178 = zmm15.d
        zmm8 = zmm15
        var_170 = zmm0_1.d
        zmm6.d = zmm11.d f+ zmm0_1.d
        zmm14.d = zmm12.d f+ zmm15.d
        var_140 = zmm6.d
    else
        zmm11 = *(r14 + 0x2c)
        zmm12 = *(r14 + 0x28)
        zmm15.d = (*(r14 + 0x30)).d f- zmm12.d
        zmm0_1.d = (*(r14 + 0x34)).d f- zmm11.d
        zmm11.d = zmm11.d f+ zmm8.d
        zmm12.d = zmm12.d f+ zmm7.d
        var_178 = zmm15.d
        zmm8 = zmm15
        var_170 = zmm0_1.d
        zmm6.d = zmm11.d f+ zmm0_1.d
        zmm14.d = zmm12.d f+ zmm15.d
        var_140 = zmm6.d

int32_t rcx_2 = *(r14 + 0x48)
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x20)
int32_t rcx_3 = *(r14 + 0x4c)
int64_t* rbx
rbx.b = ((rcx_2 - 1) & 0xfffffffd) == 0
bool rdx_1 = rcx_2 - 2 u<= 1
bool cond:4 = ((rcx_3 - 1) & 0xfffffffd) == 0
bool cond:5 = rcx_3 - 2 u<= 1
int128_t* rax_11 = sub_140e0db30(var_128, arg2[6].d, &var_f8, r9, 2, 0, r8_1, 
    rdx_1 << 6 | rbx.b << 5 | *(arg2 + 0x4f), arg2)
uint128_t zmm0_2

if (rbx.b == 0)
    zmm15 = 0x3f800000
else
    zmm0_2.d = float.s(zx.q(r12))
    zmm15.d = arg2[5].d.d f/ zmm0_2.d

if (rdx_1 != 0)
    zmm0_2.d = float.s(zx.q(r15))
    zmm10.d = (*(arg2 + 0x2c)).d f/ zmm0_2.d

var_128:4.d = var_120:4.d.d
var_128.d = 0
uint128_t zmm2_1

if (*(r14 + 0x50) != 3)
    zmm2_1 = *(r14 + 0x18)

int32_t rbx_12
int32_t rsi_1
int32_t r14_1
int32_t var_1a8
uint128_t zmm1_1
uint128_t zmm3

if (*(r14 + 0x50) != 3 && (zmm2_1.d f!= 0f || 0f f!= *(r14 + 0x1c) || 0f f!= *(r14 + 0x20)
        || not(0f f== *(r14 + 0x24))))
    if (zmm2_1.d f<= 0f)
        zmm3 = zmm12
    else
        zmm3.d = zmm2_1.d f* zmm8.d
        zmm3.d = zmm3.d f+ zmm12.d
        zmm3.d = zmm3.d f+ zmm7.d
    
    zmm7 = *(r14 + 0x1c)
    uint128_t zmm4_1 = var_170
    zmm1_1 = var_160
    int32_t var_13c_1 = zmm3.d
    
    if (zmm7.d f<= 0f)
        zmm8 = zmm11
    else
        zmm8.d = zmm7.d f* zmm4_1.d
        zmm8.d = zmm8.d f+ zmm11.d
        zmm8.d = zmm8.d f+ zmm1_1.d
    
    zmm0_2 = *(r14 + 0x20)
    uint128_t zmm5_1 = zmm14
    
    if (not(zmm0_2.d f<= 0f))
        zmm0_2.d = zmm0_2.d f* var_178
        zmm5_1.d = zmm5_1.d f- zmm0_2.d
        zmm5_1.d = zmm5_1.d f+ var_164
    
    zmm0_2 = *(r14 + 0x24)
    int32_t var_178_1 = zmm5_1.d
    
    if (zmm0_2.d f<= 0f)
        zmm4_1 = zmm6
    else
        zmm0_2.d = zmm0_2.d f* zmm4_1.d
        zmm4_1.d = zmm6.d f- zmm0_2.d
        zmm4_1.d = zmm4_1.d f+ zmm1_1.d
    
    int32_t var_16c_1 = zmm4_1.d
    
    if (cond:4 != 0 || cond:5 != 0)
        int32_t var_164_1 = zmm14.d
        zmm0_2 = zmm12
        int32_t var_130_1 = zmm0_2.d
        zmm1_1 = zmm11
        var_128.d = zmm1_1.d
        
        if (cond:4 != 0)
            zmm12 = zmm14
            zmm14 = zmm0_2
            zmm0_2.d = zmm3.d f- var_130_1
            zmm1_1.d = var_164_1.d f- zmm0_2.d
            var_13c_1 = zmm1_1.d
            zmm1_1.d = zmm5_1.d f- var_130_1
            zmm0_2.d = var_164_1.d f- zmm1_1.d
            zmm1_1 = var_128.d
            var_178_1 = zmm0_2.d
        
        if (cond:5 != 0)
            zmm3 = zmm6.d
            zmm0_2.d = zmm8.d f- zmm1_1.d
            var_140 = zmm1_1.d
            zmm1_1.d = zmm4_1.d f- var_128.d
            zmm11 = zmm6
            zmm8.d = zmm3.d f- zmm0_2.d
            zmm0_2.d = zmm3.d f- zmm1_1.d
            var_16c_1 = zmm0_2.d
    
    zmm3 = arg2[5].d
    zmm0_2.d = float.s(zx.q(r12))
    zmm1_1.d = float.s(zx.q(r15))
    zmm2_1.d = zmm2_1.d f* zmm0_2.d
    zmm4_1.d = (*(r14 + 0x20)).d f* zmm0_2.d
    zmm6.d = (*(r14 + 0x24)).d f* zmm1_1.d
    zmm0_2.d = zmm3.d f- zmm4_1.d
    int32_t var_160_1 = zmm2_1.d
    zmm4_1 = *(arg2 + 0x2c)
    zmm7.d = zmm7.d f* zmm1_1.d
    zmm5_1.d = zmm4_1.d f- zmm6.d
    int32_t var_138_1 = zmm5_1.d
    float var_170_1 = zmm0_2.d
    
    if (not(zmm0_2.d f>= zmm2_1.d))
        zmm2_1.d = zmm3.d f* 0.5f
        var_160_1 = zmm2_1.d
        var_170_1 = zmm2_1.d
    
    if (not(zmm5_1.d f>= zmm7.d))
        zmm7.d = zmm4_1.d f* 0.5f
        var_138_1 = zmm7.d
    
    zmm0_2 = zmm1.d
    zmm2_1 = zmm1:4.d
    int64_t* rcx_8 = rax_11[4].q
    zmm1_1.d = zmm0_2.d f+ zmm0_2.d
    zmm3.d = zmm3.d f* zmm9.d
    zmm4_1.d = zmm4_1.d f* zmm9.d
    int64_t rbx_1 = sx.q(rcx_8[1].d)
    zmm1_1.d = zmm1_1.d f+ 0.5f
    var_1a8 = zmm12.d
    zmm3.d = zmm3.d f+ zmm3.d
    int32_t var_1a4 = zmm11.d
    zmm4_1.d = zmm4_1.d f+ zmm4_1.d
    int32_t var_1a0 = zmm15.d
    int32_t var_19c = zmm10.d
    int32_t var_198 = 0
    int32_t var_194 = 0
    int32_t rax_17 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm2_1.d f+ zmm2_1.d
    zmm3.d = zmm3.d f+ 0.5f
    zmm4_1.d = zmm4_1.d f+ 0.5f
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190 = _mm_cvtepi32_ps(zx.o(rax_17)).d
    int32_t rax_20 = var_180
    int16_t var_184 = (int.d(zmm3.d) s>> 1).w
    int32_t var_18c = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1)).d
    int16_t var_182 = (int.d(zmm4_1.d) s>> 1).w
    int32_t rax_25 = (rbx_1 + 1).d
    rcx_8[1].d = rax_25
    
    if (rax_25 s> *(rcx_8 + 0xc))
        sub_1405c4ec0(rcx_8)
    
    int64_t rdx_4 = rbx_1 * 5
    int64_t rcx_9 = *rax_11[4].q
    zmm2_1.d = var_158:0xc.d.d f* zmm7.d
    *(rcx_9 + (rdx_4 << 3)) = var_1a8.o
    *(rcx_9 + (rdx_4 << 3) + 0x10) = var_198.o
    *(rcx_9 + (rdx_4 << 3) + 0x20) = rax_20.q
    *(rax_11 + 0x64) += 1
    int64_t* rcx_10 = rax_11[4].q
    zmm0_2.d = var_158:8.d.d f* zmm7.d
    int32_t var_168_1 = zmm2_1.d
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    int64_t rbx_2 = sx.q(rcx_10[1].d)
    zmm1_1.d = zmm0_2.d f+ zmm1.d
    int32_t var_118_1 = zmm0_2.d
    var_1a8 = zmm12.d
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    int32_t var_1a4_1 = zmm8.d
    int32_t var_1a0_1 = zmm15.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_19c_1 = zmm10.d
    int32_t var_198_1 = 0
    zmm2_1.d = zmm2_1.d f+ 0.5f
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_27 = int.d(zmm1_1.d)
    zmm1_1.d = zmm9.d f* arg2[5].d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_1 = _mm_cvtepi32_ps(zx.o(rax_27 s>> 1)).d
    int32_t rax_29 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t rax_31 = var_180
    int16_t var_184_1 = (int.d(zmm1_1.d) s>> 1).w
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int32_t var_18c_1 = _mm_cvtepi32_ps(zx.o(rax_29 s>> 1)).d
    zmm0_2.d = zmm7.d f/ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_194_1 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_182_1 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_36 = (rbx_2 + 1).d
    rcx_10[1].d = rax_36
    
    if (rax_36 s> *(rcx_10 + 0xc))
        sub_1405c4ec0(rcx_10)
    
    int64_t rdx_6 = rbx_2 * 5
    int64_t rcx_11 = *rax_11[4].q
    zmm3 = var_160_1
    zmm2_1.d = var_158:4.d.d f* zmm3.d
    *(rcx_11 + (rdx_6 << 3)) = var_1a8.o
    *(rcx_11 + (rdx_6 << 3) + 0x10) = var_198_1.o
    *(rcx_11 + (rdx_6 << 3) + 0x20) = rax_31.q
    *(rax_11 + 0x64) += 1
    zmm0_2 = var_158.d
    int64_t* rcx_12 = rax_11[4].q
    var_1a8 = var_13c_1.d
    zmm0_2.d = zmm0_2.d f* zmm3.d
    int64_t rbx_3 = sx.q(rcx_12[1].d)
    float var_110_1 = zmm2_1.d
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    int32_t var_114_1 = zmm0_2.d
    zmm1_1.d = zmm0_2.d f+ zmm1.d
    int32_t var_1a4_2 = zmm11.d
    int32_t var_1a0_2 = zmm15.d
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    int32_t var_19c_2 = zmm10.d
    int32_t var_194_2 = 0
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm2_1.d = zmm2_1.d f+ 0.5f
    zmm1_1.d = zmm1_1.d f+ 0.5f
    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1))
    int32_t rax_40 = int.d(zmm2_1.d)
    zmm2_1 = arg2[5].d
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int32_t var_190_2 = zmm0_2.d
    int32_t rax_42 = var_180
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_18c_2 = _mm_cvtepi32_ps(zx.o(rax_40 s>> 1)).d
    zmm0_2.d = zmm3.d f/ zmm2_1.d
    int32_t rax_43 = int.d(zmm1_1.d)
    int32_t var_198_2 = zmm0_2.d
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_184_2 = (rax_43 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_182_2 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_47 = (rbx_3 + 1).d
    rcx_12[1].d = rax_47
    
    if (rax_47 s> *(rcx_12 + 0xc))
        sub_1405c4ec0(rcx_12)
    
    int64_t rdx_8 = rbx_3 * 5
    int64_t rcx_13 = *rax_11[4].q
    zmm2_1.d = var_110_1.d f+ var_168_1
    int32_t var_1a4_3 = zmm8.d
    *(rcx_13 + (rdx_8 << 3)) = var_1a8.o
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    *(rcx_13 + (rdx_8 << 3) + 0x10) = var_198_2.o
    zmm1_1.d = var_114_1.d f+ var_118_1
    *(rcx_13 + (rdx_8 << 3) + 0x20) = rax_42.q
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    int64_t* rcx_14 = rax_11[4].q
    zmm2_1.d = zmm2_1.d f+ 0.5f
    var_1a8 = var_13c_1.d
    int32_t var_1a0_3 = zmm15.d
    int32_t var_19c_3 = zmm10.d
    int64_t rbx_4 = sx.q(rcx_14[1].d)
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_50 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm3.d f* zmm9.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_3 = _mm_cvtepi32_ps(zx.o(rax_50)).d
    int32_t rax_51 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t rax_53 = var_180
    int32_t rax_54 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int16_t var_184_3 = (rax_54 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_18c_3 = _mm_cvtepi32_ps(zx.o(rax_51 s>> 1)).d
    zmm0_2.d = zmm7.d f/ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_194_3 = zmm0_2.d
    int32_t rax_56 = int.d(zmm1_1.d)
    zmm1_1.d = var_160_1.d f/ zmm3.d
    int16_t var_182_3 = (rax_56 s>> 1).w
    int32_t rax_58 = (rbx_4 + 1).d
    rcx_14[1].d = rax_58
    int32_t var_198_3 = zmm1_1.d
    
    if (rax_58 s> *(rcx_14 + 0xc))
        sub_1405c4ec0(rcx_14)
    
    int64_t rdx_10 = rbx_4 * 5
    int64_t rcx_15 = *rax_11[4].q
    zmm3 = var_170_1
    zmm2_1.d = var_158:4.d.d f* zmm3.d
    *(rcx_15 + (rdx_10 << 3)) = var_1a8.o
    *(rcx_15 + (rdx_10 << 3) + 0x10) = var_198_3.o
    *(rcx_15 + (rdx_10 << 3) + 0x20) = rax_53.q
    *(rax_11 + 0x64) += 1
    zmm0_2 = var_158.d
    int64_t* rcx_16 = rax_11[4].q
    var_1a8 = var_178_1.d
    zmm0_2.d = zmm0_2.d f* zmm3.d
    int64_t rbx_5 = sx.q(rcx_16[1].d)
    int32_t var_130_2 = zmm2_1.d
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    int32_t var_134_2 = zmm0_2.d
    zmm1_1.d = zmm0_2.d f+ zmm1.d
    int32_t var_1a4_4 = zmm11.d
    int32_t var_1a0_4 = zmm15.d
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    int32_t var_19c_4 = zmm10.d
    int32_t var_194_4 = 0
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm2_1.d = zmm2_1.d f+ 0.5f
    zmm1_1.d = zmm1_1.d f+ 0.5f
    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1))
    int32_t rax_62 = int.d(zmm2_1.d)
    zmm2_1 = arg2[5].d
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int32_t var_190_4 = zmm0_2.d
    int32_t rax_64 = var_180
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_18c_4 = _mm_cvtepi32_ps(zx.o(rax_62 s>> 1)).d
    zmm0_2.d = zmm3.d f/ zmm2_1.d
    int32_t rax_65 = int.d(zmm1_1.d)
    int32_t var_198_4 = zmm0_2.d
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_184_4 = (rax_65 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_182_4 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_69 = (rbx_5 + 1).d
    rcx_16[1].d = rax_69
    
    if (rax_69 s> *(rcx_16 + 0xc))
        sub_1405c4ec0(rcx_16)
    
    int64_t rdx_12 = rbx_5 * 5
    int64_t rcx_17 = *rax_11[4].q
    zmm2_1.d = var_130_2.d f+ var_168_1
    int32_t var_1a4_5 = zmm8.d
    *(rcx_17 + (rdx_12 << 3)) = var_1a8.o
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    *(rcx_17 + (rdx_12 << 3) + 0x10) = var_198_4.o
    zmm1_1.d = var_134_2.d f+ var_118_1
    *(rcx_17 + (rdx_12 << 3) + 0x20) = rax_64.q
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    int64_t* rcx_18 = rax_11[4].q
    zmm2_1.d = zmm2_1.d f+ 0.5f
    var_1a8 = var_178_1.d
    int32_t var_1a0_5 = zmm15.d
    int32_t var_19c_5 = zmm10.d
    int64_t rbx_6 = sx.q(rcx_18[1].d)
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_72 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm3.d f* zmm9.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_5 = _mm_cvtepi32_ps(zx.o(rax_72)).d
    int32_t rax_73 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t rax_75 = var_180
    int32_t rax_76 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int16_t var_184_5 = (rax_76 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_18c_5 = _mm_cvtepi32_ps(zx.o(rax_73 s>> 1)).d
    zmm0_2.d = zmm7.d f/ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_194_5 = zmm0_2.d
    int32_t rax_78 = int.d(zmm1_1.d)
    zmm1_1.d = var_170_1.d f/ zmm3.d
    int16_t var_182_5 = (rax_78 s>> 1).w
    int32_t rax_80 = (rbx_6 + 1).d
    rcx_18[1].d = rax_80
    int32_t var_198_5 = zmm1_1.d
    
    if (rax_80 s> *(rcx_18 + 0xc))
        sub_1405c4ec0(rcx_18)
    
    int64_t rdx_14 = rbx_6 * 5
    int64_t rcx_19 = *rax_11[4].q
    zmm3 = var_120.d
    zmm2_1.d = var_158:4.d.d f* zmm3.d
    *(rcx_19 + (rdx_14 << 3)) = var_1a8.o
    *(rcx_19 + (rdx_14 << 3) + 0x10) = var_198_5.o
    *(rcx_19 + (rdx_14 << 3) + 0x20) = rax_75.q
    *(rax_11 + 0x64) += 1
    int64_t* rcx_20 = rax_11[4].q
    zmm0_2.d = var_158.d.d f* zmm3.d
    float var_164_2 = zmm2_1.d
    int64_t rbx_7 = sx.q(rcx_20[1].d)
    var_128.d = zmm0_2.d
    zmm1_1.d = zmm0_2.d f+ zmm1.d
    int32_t var_1a4_6 = zmm11.d
    zmm11 = zmm1:4.d
    zmm2_1.d = zmm2_1.d f+ zmm11.d
    var_1a8 = zmm14.d
    int32_t var_1a0_6 = zmm15.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_19c_6 = zmm10.d
    int32_t var_194_6 = 0
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    zmm2_1.d = zmm2_1.d f+ 0.5f
    zmm0_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_1.d) s>> 1))
    int32_t rax_84 = int.d(zmm2_1.d)
    zmm2_1 = arg2[5].d
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int32_t var_190_6 = zmm0_2.d
    int32_t rax_86 = var_180
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_18c_6 = _mm_cvtepi32_ps(zx.o(rax_84 s>> 1)).d
    zmm0_2.d = zmm3.d f/ zmm2_1.d
    int32_t rax_87 = int.d(zmm1_1.d)
    int32_t var_198_6 = zmm0_2.d
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_184_6 = (rax_87 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_182_6 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_91 = (rbx_7 + 1).d
    rcx_20[1].d = rax_91
    
    if (rax_91 s> *(rcx_20 + 0xc))
        sub_1405c4ec0(rcx_20)
    
    int64_t rdx_16 = rbx_7 * 5
    int64_t rcx_21 = *rax_11[4].q
    zmm2_1.d = var_164_2.d f+ var_168_1
    int32_t var_1a4_7 = zmm8.d
    zmm8 = zmm1.d
    *(rcx_21 + (rdx_16 << 3)) = var_1a8.o
    zmm2_1.d = zmm2_1.d f+ zmm11.d
    *(rcx_21 + (rdx_16 << 3) + 0x10) = var_198_6.o
    zmm1_1.d = var_128.d.d f+ var_118_1
    *(rcx_21 + (rdx_16 << 3) + 0x20) = rax_86.q
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int64_t* rcx_22 = rax_11[4].q
    zmm1_1.d = zmm1_1.d f+ zmm8.d
    var_1a8 = zmm14.d
    zmm2_1.d = zmm2_1.d f+ 0.5f
    int32_t var_1a0_7 = zmm15.d
    int32_t var_19c_7 = zmm10.d
    int64_t rbx_8 = sx.q(rcx_22[1].d)
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_94 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm3.d f* zmm9.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_7 = _mm_cvtepi32_ps(zx.o(rax_94)).d
    int32_t rax_95 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    zmm7.d = zmm7.d f/ zmm2_1.d
    int32_t rax_97 = var_180
    int16_t var_184_7 = (int.d(zmm1_1.d) s>> 1).w
    int32_t var_194_7 = zmm7.d
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int32_t var_18c_7 = _mm_cvtepi32_ps(zx.o(rax_95 s>> 1)).d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_2.d = var_120.d.d f/ zmm3.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_198_7 = zmm0_2.d
    int16_t var_182_7 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_102 = (rbx_8 + 1).d
    rcx_22[1].d = rax_102
    
    if (rax_102 s> *(rcx_22 + 0xc))
        sub_1405c4ec0(rcx_22)
    
    int64_t rdx_18 = rbx_8 * 5
    int64_t rcx_23 = *rax_11[4].q
    zmm4_1 = var_138_1
    zmm7 = var_16c_1
    zmm3 = var_158:0xc.d
    *(rcx_23 + (rdx_18 << 3)) = var_1a8.o
    *(rcx_23 + (rdx_18 << 3) + 0x10) = var_198_7.o
    *(rcx_23 + (rdx_18 << 3) + 0x20) = rax_97.q
    *(rax_11 + 0x64) += 1
    int64_t* rcx_24 = rax_11[4].q
    zmm0_2.d = var_158:8.d.d f* zmm4_1.d
    zmm3.d = zmm3.d f* zmm4_1.d
    int64_t rbx_9 = sx.q(rcx_24[1].d)
    zmm1_1.d = zmm8.d f+ zmm0_2.d
    int32_t var_16c_2 = zmm0_2.d
    var_1a8 = zmm12.d
    zmm2_1.d = zmm11.d f+ zmm3.d
    int32_t var_1a4_8 = zmm7.d
    int32_t var_1a0_8 = zmm15.d
    int32_t var_19c_8 = zmm10.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_168_2 = zmm3.d
    int32_t var_198_8 = 0
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    zmm2_1.d = zmm2_1.d f+ 0.5f
    int32_t rax_104 = int.d(zmm1_1.d)
    zmm1_1.d = zmm9.d f* arg2[5].d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_8 = _mm_cvtepi32_ps(zx.o(rax_104 s>> 1)).d
    int32_t rax_106 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t rax_108 = var_180
    int16_t var_184_8 = (int.d(zmm1_1.d) s>> 1).w
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int32_t var_18c_8 = _mm_cvtepi32_ps(zx.o(rax_106 s>> 1)).d
    zmm0_2.d = zmm4_1.d f/ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_194_8 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_182_8 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_113 = (rbx_9 + 1).d
    rcx_24[1].d = rax_113
    
    if (rax_113 s> *(rcx_24 + 0xc))
        sub_1405c4ec0(rcx_24)
        zmm4_1 = var_138_1
        zmm3 = var_168_2
    
    int64_t rdx_20 = rbx_9 * 5
    zmm0_2 = var_1a8.o
    int64_t rcx_25 = *rax_11[4].q
    zmm11 = var_13c_1
    zmm2_1.d = var_110_1.d f+ zmm3.d
    var_1a8 = zmm11.d
    *(rcx_25 + (rdx_20 << 3)) = zmm0_2
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    *(rcx_25 + (rdx_20 << 3) + 0x10) = var_198_8.o
    zmm1_1.d = var_114_1.d f+ var_16c_2
    *(rcx_25 + (rdx_20 << 3) + 0x20) = rax_108.q
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int64_t* rcx_26 = rax_11[4].q
    zmm1_1.d = zmm1_1.d f+ zmm8.d
    int32_t var_1a4_9 = zmm7.d
    zmm8 = var_160_1
    zmm2_1.d = zmm2_1.d f+ 0.5f
    int32_t var_1a0_9 = zmm15.d
    int64_t rbx_10 = sx.q(rcx_26[1].d)
    int32_t var_19c_9 = zmm10.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_116 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm3.d f* zmm9.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_9 = _mm_cvtepi32_ps(zx.o(rax_116)).d
    int32_t rax_117 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t rax_119 = var_180
    int32_t rax_120 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int16_t var_184_9 = (rax_120 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_18c_9 = _mm_cvtepi32_ps(zx.o(rax_117 s>> 1)).d
    zmm0_2.d = zmm4_1.d f/ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_194_9 = zmm0_2.d
    int16_t rax_123 = (int.d(zmm1_1.d) s>> 1).w
    zmm1_1.d = zmm8.d f/ zmm3.d
    int16_t var_182_9 = rax_123
    int32_t rax_124 = (rbx_10 + 1).d
    rcx_26[1].d = rax_124
    int32_t var_198_9 = zmm1_1.d
    
    if (rax_124 s> *(rcx_26 + 0xc))
        sub_1405c4ec0(rcx_26)
        zmm4_1 = var_138_1
    
    int64_t rdx_22 = rbx_10 * 5
    int64_t rcx_27 = *rax_11[4].q
    zmm2_1.d = var_130_2.d f+ var_168_2
    int32_t var_1a4_10 = zmm7.d
    *(rcx_27 + (rdx_22 << 3)) = var_1a8.o
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    *(rcx_27 + (rdx_22 << 3) + 0x10) = var_198_9.o
    zmm1_1.d = var_134_2.d f+ var_16c_2
    *(rcx_27 + (rdx_22 << 3) + 0x20) = rax_119.q
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    int64_t* rcx_28 = rax_11[4].q
    zmm2_1.d = zmm2_1.d f+ 0.5f
    var_1a8 = var_178_1.d
    int32_t var_1a0_10 = zmm15.d
    int32_t var_19c_10 = zmm10.d
    int64_t rbx_11 = sx.q(rcx_28[1].d)
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_127 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm3.d f* zmm9.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_10 = _mm_cvtepi32_ps(zx.o(rax_127)).d
    int32_t rax_128 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t rax_130 = var_180
    int32_t rax_131 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int16_t var_184_10 = (rax_131 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_18c_10 = _mm_cvtepi32_ps(zx.o(rax_128 s>> 1)).d
    zmm0_2.d = zmm4_1.d f/ zmm2_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_194_10 = zmm0_2.d
    int32_t rax_133 = int.d(zmm1_1.d)
    zmm1_1.d = var_170_1.d f/ zmm3.d
    int16_t var_182_10 = (rax_133 s>> 1).w
    int32_t rax_135 = (rbx_11 + 1).d
    rcx_28[1].d = rax_135
    int32_t var_198_10 = zmm1_1.d
    
    if (rax_135 s> *(rcx_28 + 0xc))
        sub_1405c4ec0(rcx_28)
        zmm4_1 = var_138_1
    
    zmm0_2 = var_1a8.o
    int64_t rdx_24 = rbx_11 * 5
    int64_t rcx_29 = *rax_11[4].q
    zmm2_1.d = var_164_2.d f+ var_168_2
    var_1a8 = zmm14.d
    int32_t var_1a4_11 = zmm7.d
    *(rcx_29 + (rdx_24 << 3)) = zmm0_2
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    *(rcx_29 + (rdx_24 << 3) + 0x10) = var_198_10.o
    zmm1_1.d = var_128.d.d f+ var_16c_2
    *(rcx_29 + (rdx_24 << 3) + 0x20) = rax_130.q
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int32_t var_1a0_11 = zmm15.d
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    zmm2_1.d = zmm2_1.d f+ 0.5f
    int32_t var_19c_11 = zmm10.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_138 = int.d(zmm1_1.d) s>> 1
    zmm1_1.d = zmm3.d f* zmm9.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_190_11 = _mm_cvtepi32_ps(zx.o(rax_138)).d
    int32_t rax_139 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    zmm4_1.d = zmm4_1.d f/ zmm2_1.d
    int32_t var_188_11 = var_180
    int16_t var_184_11 = (int.d(zmm1_1.d) s>> 1).w
    int32_t var_194_11 = zmm4_1.d
    zmm1_1.d = zmm2_1.d f* zmm9.d
    int32_t var_18c_11 = _mm_cvtepi32_ps(zx.o(rax_139 s>> 1)).d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_2.d = var_120.d.d f/ zmm3.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_198_11 = zmm0_2.d
    int16_t var_182_11 = (int.d(zmm1_1.d) s>> 1).w
    sub_140de7940(rax_11, &var_1a8)
    zmm3 = var_120:4.d
    zmm7 = var_140
    uint128_t zmm0_3
    zmm0_3.d = var_158:8.d.d f* zmm3.d
    zmm2_1.d = var_158:0xc.d.d f* zmm3.d
    var_1a8 = zmm12.d
    zmm12 = zmm1.d
    float zmm1_2 = zmm0_3.d f+ zmm12.d
    int32_t var_168_3 = zmm0_3.d
    float var_16c_3 = zmm2_1.d
    zmm2_1.d = zmm2_1.d f+ zmm1:4.d
    int32_t var_1a4_12 = zmm7.d
    int32_t var_1a0_12 = zmm15.d
    int32_t var_19c_12 = zmm10.d
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    int32_t var_198_12 = 0
    int32_t var_190_12 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_2 + zmm1_2 + 0.5f) s>> 1)).d
    zmm1_2 = zmm9.d f* arg2[5].d
    zmm2_1.d = zmm2_1.d f+ 0.5f
    int32_t rax_148 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t var_188_12 = var_180
    int16_t var_184_12 = (int.d(zmm1_2 + zmm1_2 + 0.5f) s>> 1).w
    zmm1_2 = zmm2_1.d f* zmm9.d
    int32_t var_18c_12 = _mm_cvtepi32_ps(zx.o(rax_148 s>> 1)).d
    zmm0_3.d = zmm3.d f/ zmm2_1.d
    int32_t var_194_12 = zmm0_3.d
    int16_t var_182_12 = (int.d(zmm1_2 + zmm1_2 + 0.5f) s>> 1).w
    sub_140de7940(rax_11, &var_1a8)
    uint128_t zmm13 = var_168_3
    var_1a8 = zmm11.d
    uint128_t zmm0_4
    zmm0_4.d = zmm13.d f+ var_114_1
    zmm11 = zmm1:4.d
    int32_t var_1a4_13 = zmm7.d
    zmm3.d = zmm11.d f+ var_16c_3 + var_110_1
    int32_t var_1a0_13 = zmm15.d
    int32_t var_19c_13 = zmm10.d
    zmm2_1.d = zmm12.d f+ zmm0_4.d
    zmm3.d = zmm3.d f+ zmm3.d
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    zmm3.d = zmm3.d f+ 0.5f
    zmm2_1.d = zmm2_1.d f+ 0.5f
    int32_t rax_155 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    zmm0_4 = _mm_cvtepi32_ps(zx.o(rax_155 s>> 1))
    int32_t rax_157 = int.d(zmm3.d)
    zmm3 = arg2[5].d
    float zmm1_3 = zmm3.d f* zmm9.d
    int32_t var_190_13 = zmm0_4.d
    int32_t var_188_13 = var_180
    int32_t var_18c_13 = _mm_cvtepi32_ps(zx.o(rax_157 s>> 1)).d
    zmm8.d = zmm8.d f/ zmm3.d
    int32_t rax_160 = int.d(zmm1_3 + zmm1_3 + 0.5f)
    zmm1_3 = zmm2_1.d f* zmm9.d
    int16_t var_184_13 = (rax_160 s>> 1).w
    int16_t var_182_13 = (int.d(zmm1_3 + zmm1_3 + 0.5f) s>> 1).w
    zmm0_4.d = var_120:4.d.d f/ zmm2_1.d
    int32_t var_198_13 = zmm8.d
    int32_t var_194_13 = zmm0_4.d
    sub_140de7940(rax_11, &var_1a8)
    zmm3.d = var_130_2.d f+ var_16c_3
    var_1a8 = var_178_1.d
    uint128_t zmm0_5
    zmm0_5.d = var_134_2.d f+ zmm13.d
    int32_t var_1a4_14 = zmm7.d
    int32_t var_1a0_14 = zmm15.d
    zmm2_1.d = zmm11.d f+ zmm3.d
    int32_t var_19c_14 = zmm10.d
    zmm3 = arg2[5].d
    float zmm1_4 = zmm12.d f+ zmm0_5.d
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    zmm2_1.d = zmm2_1.d f+ 0.5f
    int32_t rax_164 = int.d(zmm1_4 + zmm1_4 + 0.5f)
    zmm1_4 = zmm3.d f* zmm9.d
    int32_t var_190_14 = _mm_cvtepi32_ps(zx.o(rax_164 s>> 1)).d
    int32_t rax_166 = int.d(zmm2_1.d)
    zmm2_1 = *(arg2 + 0x2c)
    int32_t var_188_14 = var_180
    int32_t rax_169 = int.d(zmm1_4 + zmm1_4 + 0.5f)
    zmm1_4 = zmm2_1.d f* zmm9.d
    int16_t var_184_14 = (rax_169 s>> 1).w
    int32_t var_18c_14 = _mm_cvtepi32_ps(zx.o(rax_166 s>> 1)).d
    zmm0_5.d = var_120:4.d.d f/ zmm2_1.d
    int32_t var_194_14 = zmm0_5.d
    int16_t var_182_14 = (int.d(zmm1_4 + zmm1_4 + 0.5f) s>> 1).w
    float var_198_14 = var_170_1 f/ zmm3.d
    sub_140de7940(rax_11, &var_1a8)
    uint128_t zmm0_6
    zmm0_6.d = var_128.d.d f+ zmm13.d
    var_1a8 = zmm14.d
    int32_t var_1a4_15 = zmm7.d
    int32_t var_1a0_15 = zmm15.d
    zmm12.d = zmm12.d f+ zmm0_6.d
    int32_t var_19c_15 = zmm10.d
    zmm11.d = zmm11.d f+ var_164_2 + var_16c_3
    zmm12.d = zmm12.d f+ zmm12.d
    zmm11.d = zmm11.d f+ zmm11.d
    zmm12.d = zmm12.d f+ 0.5f
    zmm11.d = zmm11.d f+ 0.5f
    int32_t var_190_15 = _mm_cvtepi32_ps(zx.o(int.d(zmm12.d) s>> 1)).d
    zmm3 = arg2[5].d
    zmm2_1 = *(arg2 + 0x2c)
    float zmm1_5 = zmm3.d f* zmm9.d
    int32_t var_188_15 = var_180
    int32_t var_18c_15 = _mm_cvtepi32_ps(zx.o(int.d(zmm11.d) s>> 1)).d
    zmm0_6.d = var_120.d.d f/ zmm3.d
    int32_t rax_178 = int.d(zmm1_5 + zmm1_5 + 0.5f)
    int32_t var_198_15 = zmm0_6.d
    zmm1_5 = zmm2_1.d f* zmm9.d
    int16_t var_184_15 = (rax_178 s>> 1).w
    int16_t var_182_15 = (int.d(zmm1_5 + zmm1_5 + 0.5f) s>> 1).w
    float var_194_15 = var_120:4.d f/ zmm2_1.d
    sub_140de7940(rax_11, &var_1a8)
    sub_140de7260(rax_11, 0)
    sub_140de7260(rax_11, 1)
    sub_140de7260(rax_11, 2)
    sub_140de7260(rax_11, 2)
    sub_140de7260(rax_11, 1)
    sub_140de7260(rax_11, 3)
    sub_140de7260(rax_11, 2)
    sub_140de7260(rax_11, 3)
    sub_140de7260(rax_11, 4)
    sub_140de7260(rax_11, 4)
    sub_140de7260(rax_11, 3)
    sub_140de7260(rax_11, 5)
    sub_140de7260(rax_11, 4)
    sub_140de7260(rax_11, 5)
    sub_140de7260(rax_11, 6)
    sub_140de7260(rax_11, 6)
    sub_140de7260(rax_11, 5)
    sub_140de7260(rax_11, 7)
    sub_140de7260(rax_11, 1)
    sub_140de7260(rax_11, 8)
    sub_140de7260(rax_11, 3)
    sub_140de7260(rax_11, 3)
    sub_140de7260(rax_11, 8)
    sub_140de7260(rax_11, 9)
    sub_140de7260(rax_11, 3)
    sub_140de7260(rax_11, 9)
    sub_140de7260(rax_11, 5)
    sub_140de7260(rax_11, 5)
    sub_140de7260(rax_11, 9)
    rbx_12 = 0xa
    sub_140de7260(rax_11, 0xa)
    sub_140de7260(rax_11, 5)
    sub_140de7260(rax_11, 0xa)
    sub_140de7260(rax_11, 7)
    sub_140de7260(rax_11, 7)
    sub_140de7260(rax_11, 0xa)
    rsi_1 = 0xb
    sub_140de7260(rax_11, 0xb)
    sub_140de7260(rax_11, 8)
    sub_140de7260(rax_11, 0xc)
    sub_140de7260(rax_11, 9)
    sub_140de7260(rax_11, 9)
    sub_140de7260(rax_11, 0xc)
    sub_140de7260(rax_11, 0xd)
    sub_140de7260(rax_11, 9)
    sub_140de7260(rax_11, 0xd)
    sub_140de7260(rax_11, 0xa)
    sub_140de7260(rax_11, 0xa)
    sub_140de7260(rax_11, 0xd)
    r13 = 0xe
    sub_140de7260(rax_11, 0xe)
    r14_1 = 0xf
else
    if (cond:4 != 0 || cond:5 != 0)
        zmm0_2 = zmm12
        
        if (cond:4 != 0)
            zmm12 = zmm14
            zmm14 = zmm0_2
        
        if (cond:5 != 0)
            var_140 = zmm11.d
            zmm11 = zmm6
    
    zmm6 = zmm1.d
    zmm7 = zmm1:4.d
    zmm1_1.d = zmm6.d f+ zmm6.d
    var_1a8 = zmm12.d
    int32_t var_1a4_16 = zmm11.d
    int32_t var_1a0_16 = zmm15.d
    int32_t var_19c_16 = zmm10.d
    int32_t var_198_16 = 0
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_194_16 = 0
    int32_t rax_183 = int.d(zmm1_1.d)
    zmm1_1.d = zmm7.d f+ zmm7.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_185 = int.d(zmm1_1.d)
    int32_t var_190_16 = _mm_cvtepi32_ps(zx.o(rax_183 s>> 1)).d
    zmm1_1.d = zmm9.d f* arg2[5].d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_188_16 = var_180
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_18c_16 = _mm_cvtepi32_ps(zx.o(rax_185 s>> 1)).d
    int32_t rax_188 = int.d(zmm1_1.d)
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_184_16 = (rax_188 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_182_16 = (int.d(zmm1_1.d) s>> 1).w
    sub_140de7940(rax_11, &var_1a8)
    zmm3 = var_120.d
    zmm2_1.d = var_158:4.d.d f* zmm3.d
    float zmm1_6 = var_158.d f* zmm3.d f+ zmm6.d
    var_1a8 = zmm14.d
    int32_t var_1a4_17 = zmm11.d
    zmm2_1.d = zmm2_1.d f+ zmm7.d
    int32_t var_1a0_17 = zmm15.d
    int32_t var_19c_17 = zmm10.d
    zmm2_1.d = zmm2_1.d f+ zmm2_1.d
    zmm2_1.d = zmm2_1.d f+ 0.5f
    uint128_t zmm0_7 = _mm_cvtepi32_ps(zx.o(int.d(zmm1_6 + zmm1_6 + 0.5f) s>> 1))
    int32_t rax_194 = int.d(zmm2_1.d)
    zmm2_1 = arg2[5].d
    zmm1_6 = zmm2_1.d f* zmm9.d
    int32_t var_190_17 = zmm0_7.d
    int32_t var_188_17 = var_180
    int32_t var_18c_17 = _mm_cvtepi32_ps(zx.o(rax_194 s>> 1)).d
    int32_t rax_197 = int.d(zmm1_6 + zmm1_6 + 0.5f)
    zmm1_6 = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_184_17 = (rax_197 s>> 1).w
    int32_t var_194_17 = 0
    zmm3.d = zmm3.d f/ zmm2_1.d
    int32_t var_198_17 = zmm3.d
    int16_t var_182_17 = (int.d(zmm1_6 + zmm1_6 + 0.5f) s>> 1).w
    sub_140de7940(rax_11, &var_1a8)
    char var_1c8
    var_1c8.q = &var_180
    var_108.d = zmm12.d
    char var_1d0
    var_1d0.q = &var_108
    char var_1d8
    var_1d8.d = zmm9.d
    var_108:4.d = var_140.d
    var_108:8.d = zmm15.d
    var_108:0xc.d = zmm10.d
    int32_t* rax_201
    int32_t zmm7_1
    rax_201, zmm7_1 =
        sub_140dd3500(&var_1a8, &var_158, &var_128, &arg2[5], var_1d8, var_1d0, var_1c8)
    sub_140de7940(rax_11, rax_201)
    var_108.d = zmm14.d
    var_1c8.q = &var_180
    var_108:4.d = zmm7_1
    var_1d0.q = &var_108
    var_1d8.d = zmm9.d
    var_108:8.d = zmm15.d
    var_108:0xc.d = zmm10.d
    sub_140de7940(rax_11, 
        sub_140dd3500(&var_1a8, &var_158, &var_120, &arg2[5], var_1d8, var_1d0, var_1c8))
    rsi_1 = 2
    rbx_12 = 0
    r14_1 = 3
sub_140de7260(rax_11, rbx_12)
sub_140de7260(rax_11, r13)
sub_140de7260(rax_11, rsi_1)
sub_140de7260(rax_11, rsi_1)
sub_140de7260(rax_11, r13)
int64_t result = sub_140de7260(rax_11, r14_1)
__security_check_cookie(rax_1 ^ &var_1f8)
return result
