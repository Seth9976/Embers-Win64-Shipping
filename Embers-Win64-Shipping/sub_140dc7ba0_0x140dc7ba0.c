// 函数: sub_140dc7ba0
// 地址: 0x140dc7ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm11
uint128_t var_88 = zmm11
int128_t zmm12
int128_t var_98 = zmm12
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* rsi = *arg2
char r8 = arg1[5].b
int128_t var_158 = *(rsi + 8)
int32_t var_1a0
sub_140ae16d0(&var_158, &var_1a0, r8)
int64_t r9 = 0
int32_t* rcx_1 = *(rsi + 0x40)
int32_t r15 = 1
int64_t zmm1 = arg2[3]
uint128_t zmm8 = 0x3f800000
char r8_1 = *(arg2 + 0x4d)
int32_t r12 = 1
uint128_t zmm9 = arg2[9].d
int32_t var_124 = 0x3f800000
uint128_t zmm14 = zx.o(0)
float var_128 = 1f
uint128_t zmm13 = zx.o(0)
uint128_t zmm6 = 0x3f800000
uint128_t var_198 = *(arg2 + 8)
uint64_t var_160 = arg2[5]
float var_180
int32_t var_170
int32_t var_16c
int32_t var_168
uint128_t zmm10

if (rcx_1 == 0)
    zmm10 = *(arg1 + 0x24)
    var_180 = zmm10.d
    var_168 = zmm10.d
    var_16c = 0x3f800000
    var_170 = 0x3f800000
else
    int32_t rax_2 = rcx_1[6]
    zmm11 = *(arg1 + 0x24)
    r9 = *(rcx_1 + 0x10)
    
    if (rax_2 != 0)
        r15 = rax_2
    
    int32_t rax_3 = rcx_1[7]
    
    if (rax_3 != 0)
        r12 = rax_3
    
    bool cond:1_1 = *(rsi + 0x38) == 0
    uint128_t zmm0_1
    zmm0_1.d = float.s(zx.q(r15))
    zmm10.d = zmm11.d f/ zmm0_1.d
    zmm0_1.d = float.s(zx.q(r12))
    var_180 = zmm10.d
    zmm11.d = zmm11.d f/ zmm0_1.d
    var_168 = zmm11.d
    
    if (cond:1_1)
        zmm12 = rcx_1[2]
        zmm14.d = zmm10.d f+ *rcx_1
        zmm0_1 = rcx_1[3]
        zmm13.d = zmm11.d f+ rcx_1[1]
    else
        zmm14 = *(rsi + 0x28)
        zmm13 = *(rsi + 0x2c)
        zmm12.d = (*(rsi + 0x30)).d f- zmm14.d
        zmm0_1.d = (*(rsi + 0x34)).d f- zmm13.d
        zmm14.d = zmm14.d f+ zmm10.d
        zmm13.d = zmm13.d f+ zmm11.d
    
    var_170 = zmm0_1.d
    var_16c = zmm12.d
    zmm8.d = zmm14.d f+ zmm12.d
    zmm6.d = zmm13.d f+ zmm0_1.d
    var_124 = zmm8.d
    var_128 = zmm6.d

int32_t rcx_2 = *(rsi + 0x48)
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x20)
int32_t rcx_3 = *(rsi + 0x4c)
int64_t rbx
rbx.b = ((rcx_2 - 1) & 0xfffffffd) == 0
bool rdx_1 = rcx_2 - 2 u<= 1
bool cond:3 = ((rcx_3 - 1) & 0xfffffffd) == 0
bool cond:4 = rcx_3 - 2 u<= 1
int128_t* rax_11 = sub_140e0db30(arg1, arg2[6].d, &var_f8, r9, 2, 0, r8_1, 
    rdx_1 << 6 | rbx.b << 5 | *(arg2 + 0x4f), arg2)
uint128_t zmm0_2

if (rbx.b == 0)
    zmm12 = 0x3f800000
else
    zmm0_2.d = float.s(zx.q(r15))
    zmm12.d = arg2[5].d.d f/ zmm0_2.d

if (rdx_1 == 0)
    zmm11 = 0x3f800000
else
    zmm0_2.d = float.s(zx.q(r12))
    zmm11.d = (*(arg2 + 0x2c)).d f/ zmm0_2.d

bool cond:5 = *(rsi + 0x50) == 3
int32_t var_174 = 0
uint128_t zmm7_1

if (not(cond:5))
    zmm7_1 = *(rsi + 0x18)

int64_t result
char var_1f8
char var_1f0
char var_1e8
float var_1c8
uint128_t zmm1_1
uint128_t zmm2
uint128_t zmm3

if (not(cond:5) && (zmm7_1.d f!= 0f || 0f f!= *(rsi + 0x1c) || 0f f!= *(rsi + 0x20)
        || not(0f f== *(rsi + 0x24))))
    uint128_t zmm5_1 = var_16c
    uint128_t zmm4_1
    
    if (zmm7_1.d f<= 0f)
        zmm4_1 = zmm14
    else
        zmm4_1.d = zmm7_1.d f* zmm5_1.d
        zmm4_1.d = zmm4_1.d f+ zmm14.d
        zmm4_1.d = zmm4_1.d f+ zmm10.d
    
    zmm3 = *(rsi + 0x1c)
    zmm1_1 = var_168
    float var_144_1 = zmm4_1.d
    
    if (zmm3.d f<= 0f)
        zmm2 = zmm13
    else
        zmm2.d = zmm3.d f* var_170
        zmm2.d = zmm2.d f+ zmm13.d
        zmm2.d = zmm2.d f+ zmm1_1.d
    
    zmm0_2 = *(rsi + 0x20)
    zmm10 = zmm8
    int32_t var_138_1 = zmm2.d
    
    if (not(zmm0_2.d f<= 0f))
        zmm0_2.d = zmm0_2.d f* zmm5_1.d
        zmm10.d = zmm10.d f- zmm0_2.d
        zmm10.d = zmm10.d f+ var_180
    
    zmm0_2 = *(rsi + 0x24)
    zmm5_1 = zmm6
    float var_140_1 = zmm10.d
    
    if (not(zmm0_2.d f<= 0f))
        zmm0_2.d = zmm0_2.d f* var_170
        zmm5_1.d = zmm5_1.d f- zmm0_2.d
        zmm5_1.d = zmm5_1.d f+ zmm1_1.d
    
    float var_148_1 = zmm5_1.d
    
    if (cond:3 != 0 || cond:4 != 0)
        var_180 = zmm8.d
        zmm0_2 = zmm14
        int32_t var_168_1 = zmm0_2.d
        zmm1_1 = zmm13
        int32_t var_11c_1 = zmm1_1.d
        
        if (cond:3 != 0)
            zmm14 = zmm8
            zmm8 = zmm0_2
            var_124 = zmm0_2.d
            zmm0_2.d = zmm4_1.d f- var_168_1
            zmm1_1.d = var_180.d f- zmm0_2.d
            var_144_1 = zmm1_1.d
            zmm1_1.d = zmm10.d f- var_168_1
            zmm0_2.d = var_180.d f- zmm1_1.d
            zmm1_1 = var_11c_1
            var_140_1 = zmm0_2.d
        
        if (cond:4 != 0)
            zmm4_1 = zmm6.d
            zmm0_2.d = zmm2.d f- zmm1_1.d
            var_128 = zmm1_1.d
            zmm13 = zmm6
            zmm6 = zmm1_1
            zmm1_1.d = zmm5_1.d f- var_11c_1
            zmm2.d = zmm4_1.d f- zmm0_2.d
            zmm0_2.d = zmm4_1.d f- zmm1_1.d
            var_138_1 = zmm2.d
            var_148_1 = zmm0_2.d
    
    zmm4_1 = arg2[5].d
    zmm0_2.d = float.s(zx.q(r15))
    zmm1_1.d = float.s(zx.q(r12))
    zmm7_1.d = zmm7_1.d f* zmm0_2.d
    zmm5_1.d = (*(rsi + 0x20)).d f* zmm0_2.d
    zmm10.d = (*(rsi + 0x24)).d f* zmm1_1.d
    zmm0_2.d = zmm4_1.d f- zmm5_1.d
    zmm3.d = zmm3.d f* zmm1_1.d
    zmm5_1 = *(arg2 + 0x2c)
    float var_168_2 = zmm7_1.d
    zmm1_1.d = zmm5_1.d f- zmm10.d
    float var_134_1 = zmm3.d
    float var_130_1 = zmm1_1.d
    float var_12c_1 = zmm0_2.d
    
    if (not(zmm0_2.d f>= zmm7_1.d))
        zmm7_1.d = zmm4_1.d f* 0.5f
        var_168_2 = zmm7_1.d
        var_12c_1 = zmm7_1.d
    
    if (not(zmm1_1.d f>= zmm3.d))
        zmm3.d = zmm5_1.d f* 0.5f
        var_134_1 = zmm3.d
        var_130_1 = zmm3.d
    
    int32_t rax_16 = var_1a0
    int64_t* rcx_8 = rax_11[4].q
    zmm4_1.d = zmm4_1.d f* zmm9.d
    int64_t rbx_1 = sx.q(rcx_8[1].d)
    zmm5_1.d = zmm5_1.d f* zmm9.d
    zmm4_1.d = zmm4_1.d f+ zmm4_1.d
    int32_t var_1b0 = zmm1.d.d
    zmm5_1.d = zmm5_1.d f+ zmm5_1.d
    var_1c8 = zmm14.d
    int32_t var_1c4 = zmm13.d
    int32_t var_1c0 = zmm12.d
    zmm4_1.d = zmm4_1.d f+ 0.5f
    int32_t var_1bc = zmm11.d
    int32_t var_1ac = zmm1:4.d.d
    zmm5_1.d = zmm5_1.d f+ 0.5f
    int32_t var_1b8 = 0
    int32_t var_1b4 = 0
    int16_t var_1a4 = (int.d(zmm4_1.d) s>> 1).w
    int16_t var_1a2 = (int.d(zmm5_1.d) s>> 1).w
    int32_t rax_21 = (rbx_1 + 1).d
    rcx_8[1].d = rax_21
    
    if (rax_21 s> *(rcx_8 + 0xc))
        sub_1405c4ec0(rcx_8)
        zmm2 = var_138_1
    
    int64_t rdx_4 = rbx_1 * 5
    int64_t rcx_9 = *rax_11[4].q
    zmm3 = var_134_1
    int32_t var_1c4_1 = zmm2.d
    zmm2 = var_198:0xc.d
    *(rcx_9 + (rdx_4 << 3)) = var_1c8.o
    *(rcx_9 + (rdx_4 << 3) + 0x10) = var_1b8.o
    *(rcx_9 + (rdx_4 << 3) + 0x20) = rax_16.q
    *(rax_11 + 0x64) += 1
    int32_t rax_23 = var_1a0
    int64_t* rcx_10 = rax_11[4].q
    zmm0_2.d = var_198:8.d.d f* zmm3.d
    zmm2.d = zmm2.d f* zmm3.d
    int64_t rbx_2 = sx.q(rcx_10[1].d)
    zmm1_1.d = zmm1.d.d f+ zmm0_2.d
    float var_118_1 = zmm0_2.d
    zmm0_2.d = zmm1:4.d.d f+ zmm2.d
    float var_114_1 = zmm2.d
    zmm2 = *(arg2 + 0x2c)
    var_1c8 = zmm14.d
    int32_t var_1b0_1 = zmm1_1.d
    zmm1_1.d = zmm9.d f* arg2[5].d
    int32_t var_1ac_1 = zmm0_2.d
    zmm0_2.d = zmm3.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1c0_1 = zmm12.d
    int32_t var_1bc_1 = zmm11.d
    int32_t var_1b8_1 = 0
    int32_t var_1b4_1 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t rax_25 = (int.d(zmm1_1.d) s>> 1).w
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_1 = rax_25
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_1a2_1 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_28 = (rbx_2 + 1).d
    rcx_10[1].d = rax_28
    
    if (rax_28 s> *(rcx_10 + 0xc))
        sub_1405c4ec0(rcx_10)
    
    int64_t rdx_6 = rbx_2 * 5
    int64_t rcx_11 = *rax_11[4].q
    zmm2.d = var_198:4.d.d f* zmm7_1.d
    *(rcx_11 + (rdx_6 << 3)) = var_1c8.o
    *(rcx_11 + (rdx_6 << 3) + 0x10) = var_1b8_1.o
    *(rcx_11 + (rdx_6 << 3) + 0x20) = rax_23.q
    *(rax_11 + 0x64) += 1
    int32_t rax_30 = var_1a0
    zmm0_2 = var_198.d
    int64_t* rcx_12 = rax_11[4].q
    var_1c8 = var_144_1.d
    zmm0_2.d = zmm0_2.d f* zmm7_1.d
    int64_t rbx_3 = sx.q(rcx_12[1].d)
    float var_16c_1 = zmm2.d
    zmm1_1.d = zmm1.d.d f+ zmm0_2.d
    float var_170_1 = zmm0_2.d
    zmm0_2.d = zmm1:4.d.d f+ zmm2.d
    int32_t var_1c4_2 = zmm13.d
    zmm2 = arg2[5].d
    int32_t var_1c0_2 = zmm12.d
    int32_t var_1b0_2 = zmm1_1.d
    zmm1_1.d = zmm2.d f* zmm9.d
    int32_t var_1ac_2 = zmm0_2.d
    zmm0_2.d = zmm7_1.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1bc_2 = zmm11.d
    int32_t var_1b8_2 = zmm0_2.d
    int32_t var_1b4_2 = 0
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_31 = int.d(zmm1_1.d)
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_1a4_2 = (rax_31 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_1a2_2 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_35 = (rbx_3 + 1).d
    rcx_12[1].d = rax_35
    
    if (rax_35 s> *(rcx_12 + 0xc))
        sub_1405c4ec0(rcx_12)
    
    int64_t rdx_8 = rbx_3 * 5
    int64_t rcx_13 = *rax_11[4].q
    int32_t var_1c0_3 = zmm12.d
    int32_t var_1bc_3 = zmm11.d
    *(rcx_13 + (rdx_8 << 3)) = var_1c8.o
    *(rcx_13 + (rdx_8 << 3) + 0x10) = var_1b8_2.o
    zmm1_1.d = var_170_1.d f+ var_118_1
    *(rcx_13 + (rdx_8 << 3) + 0x20) = rax_30.q
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int32_t rax_37 = var_1a0
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    zmm2 = *(arg2 + 0x2c)
    int64_t* rcx_14 = rax_11[4].q
    var_1c8 = var_144_1.d
    int32_t var_1b0_3 = zmm1_1.d
    int64_t rbx_4 = sx.q(rcx_14[1].d)
    zmm1_1.d = zmm3.d f* zmm9.d
    int32_t var_1c4_3 = var_138_1.d
    zmm0_2.d = var_16c_1.d f+ var_114_1
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_1ac_3 = zmm0_2.d
    int32_t rax_38 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_3 = (rax_38 s>> 1).w
    zmm0_2.d = var_134_1.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1b4_3 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t rax_41 = (int.d(zmm1_1.d) s>> 1).w
    zmm1_1.d = zmm7_1.d f/ zmm3.d
    int16_t var_1a2_3 = rax_41
    int32_t rax_42 = (rbx_4 + 1).d
    rcx_14[1].d = rax_42
    int32_t var_1b8_3 = zmm1_1.d
    
    if (rax_42 s> *(rcx_14 + 0xc))
        sub_1405c4ec0(rcx_14)
    
    int64_t rdx_10 = rbx_4 * 5
    int64_t rcx_15 = *rax_11[4].q
    zmm3 = var_12c_1
    zmm2.d = var_198:4.d.d f* zmm3.d
    *(rcx_15 + (rdx_10 << 3)) = var_1c8.o
    *(rcx_15 + (rdx_10 << 3) + 0x10) = var_1b8_3.o
    *(rcx_15 + (rdx_10 << 3) + 0x20) = rax_37.q
    *(rax_11 + 0x64) += 1
    zmm0_2 = var_198.d
    int32_t rax_44 = var_1a0
    int64_t* rcx_16 = rax_11[4].q
    var_1c8 = var_140_1.d
    zmm0_2.d = zmm0_2.d f* zmm3.d
    int64_t rbx_5 = sx.q(rcx_16[1].d)
    int32_t var_120_2 = zmm2.d
    float var_108_1 = zmm0_2.d
    zmm1_1.d = zmm0_2.d f+ zmm1.d
    zmm0_2 = zmm2
    int32_t var_1c4_4 = zmm13.d
    zmm2 = arg2[5].d
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    int32_t var_1c0_4 = zmm12.d
    int32_t var_1b0_4 = zmm1_1.d
    zmm1_1.d = zmm2.d f* zmm9.d
    int32_t var_1ac_4 = zmm0_2.d
    zmm0_2.d = zmm3.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1bc_4 = zmm11.d
    int32_t var_1b8_4 = zmm0_2.d
    int32_t var_1b4_4 = 0
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_45 = int.d(zmm1_1.d)
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_1a4_4 = (rax_45 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_1a2_4 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_49 = (rbx_5 + 1).d
    rcx_16[1].d = rax_49
    
    if (rax_49 s> *(rcx_16 + 0xc))
        sub_1405c4ec0(rcx_16)
    
    int64_t rdx_12 = rbx_5 * 5
    int64_t rcx_17 = *rax_11[4].q
    int32_t var_1c0_5 = zmm12.d
    int32_t var_1bc_5 = zmm11.d
    *(rcx_17 + (rdx_12 << 3)) = var_1c8.o
    *(rcx_17 + (rdx_12 << 3) + 0x10) = var_1b8_4.o
    zmm1_1.d = var_108_1.d f+ var_118_1
    *(rcx_17 + (rdx_12 << 3) + 0x20) = rax_44.q
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int32_t rax_51 = var_1a0
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    zmm2 = *(arg2 + 0x2c)
    int64_t* rcx_18 = rax_11[4].q
    var_1c8 = var_140_1.d
    int32_t var_1b0_5 = zmm1_1.d
    int64_t rbx_6 = sx.q(rcx_18[1].d)
    zmm1_1.d = zmm3.d f* zmm9.d
    int32_t var_1c4_5 = var_138_1.d
    zmm0_2.d = var_120_2.d f+ var_114_1
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_1ac_5 = zmm0_2.d
    int32_t rax_52 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_5 = (rax_52 s>> 1).w
    zmm0_2.d = var_134_1.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1b4_5 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_54 = int.d(zmm1_1.d)
    zmm1_1.d = var_12c_1.d f/ zmm3.d
    int16_t var_1a2_5 = (rax_54 s>> 1).w
    int32_t rax_56 = (rbx_6 + 1).d
    rcx_18[1].d = rax_56
    int32_t var_1b8_5 = zmm1_1.d
    
    if (rax_56 s> *(rcx_18 + 0xc))
        sub_1405c4ec0(rcx_18)
    
    int64_t rdx_14 = rbx_6 * 5
    int64_t rcx_19 = *rax_11[4].q
    zmm3 = var_160.d
    zmm2.d = var_198:4.d.d f* zmm3.d
    *(rcx_19 + (rdx_14 << 3)) = var_1c8.o
    *(rcx_19 + (rdx_14 << 3) + 0x10) = var_1b8_5.o
    *(rcx_19 + (rdx_14 << 3) + 0x20) = rax_51.q
    *(rax_11 + 0x64) += 1
    int32_t rax_58 = var_1a0
    int64_t* rcx_20 = rax_11[4].q
    zmm0_2.d = var_198.d.d f* zmm3.d
    var_180 = zmm2.d
    int64_t rbx_7 = sx.q(rcx_20[1].d)
    int32_t var_11c_2 = zmm0_2.d
    zmm1_1.d = zmm0_2.d f+ zmm1.d
    zmm0_2 = zmm2
    var_1c8 = zmm8.d
    zmm2 = arg2[5].d
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    int32_t var_1c4_6 = zmm13.d
    int32_t var_1b0_6 = zmm1_1.d
    zmm1_1.d = zmm2.d f* zmm9.d
    int32_t var_1ac_6 = zmm0_2.d
    zmm0_2.d = zmm3.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1c0_6 = zmm12.d
    int32_t var_1bc_6 = zmm11.d
    int32_t var_1b8_6 = zmm0_2.d
    int32_t var_1b4_6 = 0
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_59 = int.d(zmm1_1.d)
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_1a4_6 = (rax_59 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_1a2_6 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_63 = (rbx_7 + 1).d
    rcx_20[1].d = rax_63
    
    if (rax_63 s> *(rcx_20 + 0xc))
        sub_1405c4ec0(rcx_20)
    
    int64_t rdx_16 = rbx_7 * 5
    zmm0_2 = var_1c8.o
    int64_t rcx_21 = *rax_11[4].q
    var_1c8 = zmm8.d
    int32_t var_1c0_7 = zmm12.d
    int32_t var_1bc_7 = zmm11.d
    *(rcx_21 + (rdx_16 << 3)) = zmm0_2
    *(rcx_21 + (rdx_16 << 3) + 0x10) = var_1b8_6.o
    zmm1_1.d = var_11c_2.d f+ var_118_1
    *(rcx_21 + (rdx_16 << 3) + 0x20) = rax_58.q
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int32_t rax_65 = var_1a0
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    zmm2 = *(arg2 + 0x2c)
    int64_t* rcx_22 = rax_11[4].q
    int32_t var_1b0_7 = zmm1_1.d
    zmm1_1.d = zmm3.d f* zmm9.d
    int64_t rbx_8 = sx.q(rcx_22[1].d)
    int32_t var_1c4_7 = var_138_1.d
    zmm0_2.d = var_180.d f+ var_114_1
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_1ac_7 = zmm0_2.d
    int32_t rax_66 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_7 = (rax_66 s>> 1).w
    zmm0_2.d = var_134_1.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1b4_7 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_68 = int.d(zmm1_1.d)
    zmm1_1.d = var_160.d.d f/ zmm3.d
    int16_t var_1a2_7 = (rax_68 s>> 1).w
    int32_t rax_70 = (rbx_8 + 1).d
    rcx_22[1].d = rax_70
    int32_t var_1b8_7 = zmm1_1.d
    
    if (rax_70 s> *(rcx_22 + 0xc))
        sub_1405c4ec0(rcx_22)
    
    int64_t rdx_18 = rbx_8 * 5
    int64_t rcx_23 = *rax_11[4].q
    zmm3 = var_130_1
    zmm2.d = var_198:0xc.d.d f* zmm3.d
    *(rcx_23 + (rdx_18 << 3)) = var_1c8.o
    *(rcx_23 + (rdx_18 << 3) + 0x10) = var_1b8_7.o
    *(rcx_23 + (rdx_18 << 3) + 0x20) = rax_65.q
    *(rax_11 + 0x64) += 1
    int32_t rax_72 = var_1a0
    int64_t* rcx_24 = rax_11[4].q
    int32_t var_1c4_8 = var_148_1.d
    zmm0_2.d = var_198:8.d.d f* zmm3.d
    int64_t rbx_9 = sx.q(rcx_24[1].d)
    float var_10c_1 = zmm2.d
    float var_110_1 = zmm0_2.d
    zmm1_1.d = zmm0_2.d f+ zmm1.d
    var_1c8 = zmm14.d
    zmm0_2.d = zmm2.d f+ zmm1:4.d
    zmm2 = *(arg2 + 0x2c)
    int32_t var_1c0_8 = zmm12.d
    int32_t var_1b0_8 = zmm1_1.d
    zmm1_1.d = zmm9.d f* arg2[5].d
    int32_t var_1ac_8 = zmm0_2.d
    zmm0_2.d = zmm3.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1bc_8 = zmm11.d
    int32_t var_1b8_8 = 0
    int32_t var_1b4_8 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t rax_74 = (int.d(zmm1_1.d) s>> 1).w
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_8 = rax_74
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_1a2_8 = (int.d(zmm1_1.d) s>> 1).w
    int32_t rax_77 = (rbx_9 + 1).d
    rcx_24[1].d = rax_77
    
    if (rax_77 s> *(rcx_24 + 0xc))
        sub_1405c4ec0(rcx_24)
    
    int64_t rdx_20 = rbx_9 * 5
    int64_t rcx_25 = *rax_11[4].q
    int32_t var_1c0_9 = zmm12.d
    int32_t var_1bc_9 = zmm11.d
    *(rcx_25 + (rdx_20 << 3)) = var_1c8.o
    *(rcx_25 + (rdx_20 << 3) + 0x10) = var_1b8_8.o
    zmm1_1.d = var_110_1.d f+ var_170_1
    *(rcx_25 + (rdx_20 << 3) + 0x20) = rax_72.q
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int32_t rax_79 = var_1a0
    zmm1_1.d = zmm1_1.d f+ zmm1.d
    zmm2 = *(arg2 + 0x2c)
    int64_t* rcx_26 = rax_11[4].q
    var_1c8 = var_144_1.d
    int32_t var_1b0_9 = zmm1_1.d
    int64_t rbx_10 = sx.q(rcx_26[1].d)
    zmm1_1.d = zmm3.d f* zmm9.d
    int32_t var_1c4_9 = var_148_1.d
    zmm0_2.d = var_10c_1.d f+ var_16c_1
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_1ac_9 = zmm0_2.d
    int32_t rax_80 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_9 = (rax_80 s>> 1).w
    zmm0_2.d = var_130_1.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1b4_9 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t rax_83 = (int.d(zmm1_1.d) s>> 1).w
    zmm1_1.d = zmm7_1.d f/ zmm3.d
    int16_t var_1a2_9 = rax_83
    int32_t rax_84 = (rbx_10 + 1).d
    rcx_26[1].d = rax_84
    int32_t var_1b8_9 = zmm1_1.d
    
    if (rax_84 s> *(rcx_26 + 0xc))
        sub_1405c4ec0(rcx_26)
    
    int64_t rdx_22 = rbx_10 * 5
    int64_t rcx_27 = *rax_11[4].q
    zmm7_1 = zmm1.d
    int32_t var_1c0_10 = zmm12.d
    int32_t var_1bc_10 = zmm11.d
    *(rcx_27 + (rdx_22 << 3)) = var_1c8.o
    *(rcx_27 + (rdx_22 << 3) + 0x10) = var_1b8_9.o
    zmm1_1.d = var_110_1.d f+ var_108_1
    *(rcx_27 + (rdx_22 << 3) + 0x20) = rax_79.q
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    int32_t rax_86 = var_1a0
    zmm2 = *(arg2 + 0x2c)
    zmm1_1.d = zmm1_1.d f+ zmm7_1.d
    int64_t* rcx_28 = rax_11[4].q
    var_1c8 = var_140_1.d
    int32_t var_1b0_10 = zmm1_1.d
    int64_t rbx_11 = sx.q(rcx_28[1].d)
    zmm1_1.d = zmm3.d f* zmm9.d
    int32_t var_1c4_10 = var_148_1.d
    zmm0_2.d = var_10c_1.d f+ var_120_2
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_1ac_10 = zmm0_2.d
    int32_t rax_87 = int.d(zmm1_1.d)
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_10 = (rax_87 s>> 1).w
    zmm0_2.d = var_130_1.d f/ zmm2.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1b4_10 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_89 = int.d(zmm1_1.d)
    zmm1_1.d = var_12c_1.d f/ zmm3.d
    int16_t var_1a2_10 = (rax_89 s>> 1).w
    int32_t rax_91 = (rbx_11 + 1).d
    rcx_28[1].d = rax_91
    int32_t var_1b8_10 = zmm1_1.d
    
    if (rax_91 s> *(rcx_28 + 0xc))
        sub_1405c4ec0(rcx_28)
    
    zmm0_2 = var_1c8.o
    int64_t* rax_92 = rax_11[4].q
    int64_t rdx_24 = rbx_11 * 5
    var_1c8 = zmm8.d
    int64_t rcx_29 = *rax_92
    int32_t var_1c0_11 = zmm12.d
    int32_t var_1bc_11 = zmm11.d
    *(rcx_29 + (rdx_24 << 3)) = zmm0_2
    *(rcx_29 + (rdx_24 << 3) + 0x10) = var_1b8_10.o
    zmm1_1.d = var_110_1.d f+ var_11c_2
    *(rcx_29 + (rdx_24 << 3) + 0x20) = rax_86.q
    *(rax_11 + 0x64) += 1
    zmm3 = arg2[5].d
    zmm2 = *(arg2 + 0x2c)
    zmm1_1.d = zmm1_1.d f+ zmm7_1.d
    int32_t var_1c4_11 = var_148_1.d
    zmm0_2.d = var_10c_1.d f+ var_180
    int32_t var_1b0_11 = zmm1_1.d
    zmm1_1.d = zmm3.d f* zmm9.d
    int32_t var_1a8_11 = var_1a0
    zmm0_2.d = zmm0_2.d f+ zmm1:4.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    int32_t var_1ac_11 = zmm0_2.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    zmm0_2.d = var_130_1.d f/ zmm2.d
    int32_t rax_94 = int.d(zmm1_1.d)
    int32_t var_1b4_11 = zmm0_2.d
    zmm1_1.d = zmm2.d f* zmm9.d
    int16_t var_1a4_11 = (rax_94 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t rax_96 = int.d(zmm1_1.d)
    zmm1_1.d = var_160.d.d f/ zmm3.d
    int16_t var_1a2_11 = (rax_96 s>> 1).w
    int32_t var_1b8_11 = zmm1_1.d
    sub_140de7940(rax_11, &var_1c8)
    zmm3 = var_160:4.d
    zmm2 = *(arg2 + 0x2c)
    int32_t var_1a8_12 = var_1a0
    zmm7_1.d = var_198:8.d.d f* zmm3.d
    int32_t var_1c4_12 = zmm6.d
    zmm6.d = var_198:0xc.d.d f* zmm3.d
    var_1c8 = zmm14.d
    int32_t var_1c0_12 = zmm12.d
    int32_t var_1bc_12 = zmm11.d
    float var_1b0_12 = zmm7_1.d f+ zmm1.d
    float zmm1_2 = zmm9.d f* arg2[5].d
    float var_1ac_12 = zmm6.d f+ zmm1:4.d
    int32_t rax_99 = int.d(zmm1_2 + zmm1_2 + 0.5f)
    zmm1_2 = zmm2.d f* zmm9.d
    int16_t var_1a4_12 = (rax_99 s>> 1).w
    int32_t var_1b8_12 = 0
    int16_t var_1a2_12 = (int.d(zmm1_2 + zmm1_2 + 0.5f) s>> 1).w
    float var_1b4_12 = zmm3.d f/ zmm2.d
    sub_140de7940(rax_11, &var_1c8)
    zmm3 = arg2[5].d
    int32_t rax_103 = var_1a0
    zmm2 = *(arg2 + 0x2c)
    int128_t zmm15 = var_128
    var_1c8 = var_144_1
    int32_t var_1a8_13 = rax_103
    int32_t var_1c4_13 = zmm15.d
    int32_t var_1c0_13 = zmm12.d
    float var_1b0_13 = zmm7_1.d + var_170_1 f+ zmm1.d
    float zmm1_3 = zmm3.d f* zmm9.d
    int32_t var_1bc_13 = zmm11.d
    float var_1ac_13 = zmm6.d + var_16c_1 f+ zmm1:4.d
    float var_1b4_13 = var_160:4.d f/ zmm2.d
    int32_t rax_104 = int.d(zmm1_3 + zmm1_3 + 0.5f)
    zmm1_3 = zmm2.d f* zmm9.d
    int16_t var_1a4_13 = (rax_104 s>> 1).w
    int16_t var_1a2_13 = (int.d(zmm1_3 + zmm1_3 + 0.5f) s>> 1).w
    float var_1b8_13 = var_168_2 f/ zmm3.d
    sub_140de7940(rax_11, &var_1c8)
    zmm2.d = zmm6.d f+ var_120_2
    int32_t rax_108 = var_1a0
    zmm3 = arg2[5].d
    var_1c8 = var_140_1
    int32_t var_1a8_14 = rax_108
    int32_t var_1c4_14 = zmm15.d
    int32_t var_1c0_14 = zmm12.d
    int32_t var_1bc_14 = zmm11.d
    float zmm0_5 = zmm1:4.d f+ zmm2.d
    zmm2 = *(arg2 + 0x2c)
    float var_1b0_14 = zmm1.d + zmm7_1.d + var_108_1
    float zmm1_4 = zmm3.d f* zmm9.d
    float var_1ac_14 = zmm0_5
    int32_t rax_109 = int.d(zmm1_4 + zmm1_4 + 0.5f)
    zmm1_4 = zmm2.d f* zmm9.d
    int16_t var_1a4_14 = (rax_109 s>> 1).w
    int16_t var_1a2_14 = (int.d(zmm1_4 + zmm1_4 + 0.5f) s>> 1).w
    float var_1b8_14 = var_12c_1 f/ zmm3.d
    float var_1b4_14 = var_160:4.d f/ zmm2.d
    sub_140de7940(rax_11, &var_1c8)
    zmm3 = arg2[5].d
    zmm2 = *(arg2 + 0x2c)
    zmm7_1.d = zmm7_1.d f+ var_11c_2
    zmm6.d = zmm6.d f+ var_180
    int32_t var_1a8_15 = var_1a0
    var_1c8 = zmm8.d
    int32_t var_1c4_15 = zmm15.d
    int32_t var_1c0_15 = zmm12.d
    int32_t var_1bc_15 = zmm11.d
    float var_1b0_15 = zmm1.d f+ zmm7_1.d
    float zmm1_5 = zmm3.d f* zmm9.d
    float var_1ac_15 = zmm1:4.d f+ zmm6.d
    float var_1b4_15 = var_160:4.d f/ zmm2.d
    int32_t rax_114 = int.d(zmm1_5 + zmm1_5 + 0.5f)
    zmm1_5 = zmm2.d f* zmm9.d
    int16_t var_1a4_15 = (rax_114 s>> 1).w
    int16_t var_1a2_15 = (int.d(zmm1_5 + zmm1_5 + 0.5f) s>> 1).w
    float var_1b8_15 = var_160.d f/ zmm3.d
    sub_140de7940(rax_11, &var_1c8)
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
    sub_140de7260(rax_11, 0xa)
    sub_140de7260(rax_11, 5)
    sub_140de7260(rax_11, 0xa)
    sub_140de7260(rax_11, 7)
    sub_140de7260(rax_11, 7)
    sub_140de7260(rax_11, 0xa)
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
    sub_140de7260(rax_11, 0xe)
    sub_140de7260(rax_11, 0xa)
    sub_140de7260(rax_11, 0xe)
    sub_140de7260(rax_11, 0xb)
    sub_140de7260(rax_11, 0xb)
    sub_140de7260(rax_11, 0xe)
    result = sub_140de7260(rax_11, 0xf)
    
    if (data_143e24364 != 0)
        zmm3 = arg2[5].d
        zmm2 = *(arg2 + 0x2c)
        int32_t rbx_12 = var_174
        int32_t r15_1 = *(rax_11 + 0x64)
        uint128_t zmm0_7
        zmm0_7.d = 1f f/ zmm9.d
        int32_t var_1a8_16 = rbx_12
        var_1c8 = zmm14.d
        var_180 = zmm0_7.d
        zmm8 = zmm0_7 ^ data_142d3f780
        int32_t var_1c4_16 = zmm13.d
        zmm0_7.d = zmm8.d f* var_198:4.d
        zmm7_1.d = zmm8.d f* var_198:8.d
        zmm6.d = zmm8.d f* var_198:0xc.d
        int32_t var_1c0_16 = zmm12.d
        int32_t var_1bc_16 = zmm11.d
        zmm0_7.d = zmm0_7.d f+ zmm6.d
        zmm0_7.d = zmm0_7.d f+ zmm1:4.d
        float var_1b0_16 = zmm8.d f* var_198.d f+ zmm7_1.d f+ zmm1.d
        float zmm1_6 = zmm3.d f* zmm9.d
        int32_t var_1ac_16 = zmm0_7.d
        zmm0_7.d = zmm8.d f/ zmm2.d
        int32_t var_1b4_16 = zmm0_7.d
        int32_t rax_118 = int.d(zmm1_6 + zmm1_6 + 0.5f)
        zmm1_6 = zmm2.d f* zmm9.d
        int16_t var_1a4_16 = (rax_118 s>> 1).w
        int16_t var_1a2_16 = (int.d(zmm1_6 + zmm1_6 + 0.5f) s>> 1).w
        float var_1b8_16 = zmm8.d f/ zmm3.d
        sub_140de7940(rax_11, &var_1c8)
        zmm3 = arg2[5].d
        zmm2 = *(arg2 + 0x2c)
        zmm7_1.d = zmm7_1.d f+ var_170_1
        zmm6.d = zmm6.d f+ var_16c_1
        float zmm1_7 = zmm3.d f* zmm9.d
        int32_t var_1a8_17 = rbx_12
        zmm7_1.d = zmm7_1.d f+ zmm1.d
        zmm6.d = zmm6.d f+ zmm1:4.d
        var_1c8 = var_144_1
        int32_t var_1c4_17 = zmm13.d
        int32_t var_1c0_17 = zmm12.d
        int32_t var_1bc_17 = zmm11.d
        int32_t var_1b0_17 = zmm7_1.d
        int32_t var_1ac_17 = zmm6.d
        int32_t rax_122 = int.d(zmm1_7 + zmm1_7 + 0.5f)
        zmm1_7 = zmm2.d f* zmm9.d
        int16_t var_1a4_17 = (rax_122 s>> 1).w
        int16_t var_1a2_17 = (int.d(zmm1_7 + zmm1_7 + 0.5f) s>> 1).w
        float var_1b8_17 = var_168_2 f/ zmm3.d
        float var_1b4_17 = zmm8.d f/ zmm2.d
        sub_140de7940(rax_11, &var_1c8)
        zmm3 = arg2[5].d
        zmm2 = var_198:0xc.d
        var_1c8 = var_140_1
        int32_t var_1a8_18 = rbx_12
        zmm2.d = zmm2.d f* zmm8.d
        int32_t var_1c4_18 = zmm13.d
        zmm2.d = zmm2.d f+ var_120_2
        int32_t var_1c0_18 = zmm12.d
        int32_t var_1bc_18 = zmm11.d
        float zmm0_9 = zmm1:4.d f+ zmm2.d
        zmm2 = *(arg2 + 0x2c)
        float var_1b0_18 = zmm1.d + var_198:8.d f* zmm8.d + var_108_1
        float zmm1_8 = zmm3.d f* zmm9.d
        float var_1ac_18 = zmm0_9
        float var_1b4_18 = zmm8.d f/ zmm2.d
        int32_t rax_126 = int.d(zmm1_8 + zmm1_8 + 0.5f)
        zmm1_8 = zmm2.d f* zmm9.d
        int16_t var_1a4_18 = (rax_126 s>> 1).w
        int16_t var_1a2_18 = (int.d(zmm1_8 + zmm1_8 + 0.5f) s>> 1).w
        float var_1b8_18 = var_12c_1 f/ zmm3.d
        sub_140de7940(rax_11, &var_1c8)
        zmm6 = var_180
        float zmm4_2 = var_160.d f+ zmm6.d
        zmm7_1 = var_124
        float zmm5_2 = -1f f/ zmm9.d
        int32_t var_1a8_19 = rbx_12
        zmm3.d = var_198.d.d f* zmm4_2
        zmm2.d = var_198:4.d.d f* zmm4_2
        zmm3.d = zmm3.d f+ var_198:8.d * zmm5_2
        var_1c8 = zmm7_1.d
        int32_t var_1c4_19 = zmm13.d
        float zmm1_9 = zmm1.d f+ zmm3.d
        int32_t var_1c0_19 = zmm12.d
        zmm3 = arg2[5].d
        zmm2.d = zmm2.d f+ var_198:0xc.d * zmm5_2
        int32_t var_1bc_19 = zmm11.d
        float var_1b0_19 = zmm1_9
        zmm1_9 = zmm3.d f* zmm9.d
        float var_1ac_19 = zmm1:4.d f+ zmm2.d
        zmm2 = *(arg2 + 0x2c)
        int32_t rax_130 = int.d(zmm1_9 + zmm1_9 + 0.5f)
        float var_1b4_19 = zmm5_2 f/ zmm2.d
        zmm1_9 = zmm2.d f* zmm9.d
        int16_t var_1a4_19 = (rax_130 s>> 1).w
        float var_1b8_19 = zmm4_2 f/ zmm3.d
        int16_t var_1a2_19 = (int.d(zmm1_9 + zmm1_9 + 0.5f) s>> 1).w
        sub_140de7940(rax_11, &var_1c8)
        zmm3 = arg2[5].d
        zmm13 = var_138_1
        int32_t var_1a8_20 = rbx_12
        zmm2.d = var_198:4.d.d f* zmm8.d
        float zmm0_11 = var_198.d f* zmm8.d + var_118_1
        var_1c8 = zmm14.d
        zmm2.d = zmm2.d f+ var_114_1
        int32_t var_1c4_20 = zmm13.d
        int32_t var_1c0_20 = zmm12.d
        float zmm1_10 = zmm1.d + zmm0_11
        int32_t var_1bc_20 = zmm11.d
        zmm0_11 = zmm1:4.d f+ zmm2.d
        zmm2 = *(arg2 + 0x2c)
        float var_1b0_20 = zmm1_10
        zmm1_10 = zmm3.d f* zmm9.d
        float var_1ac_20 = zmm0_11
        float var_1b4_20 = var_134_1 f/ zmm2.d
        int32_t rax_134 = int.d(zmm1_10 + zmm1_10 + 0.5f)
        zmm1_10 = zmm2.d f* zmm9.d
        int16_t var_1a4_20 = (rax_134 s>> 1).w
        int16_t var_1a2_20 = (int.d(zmm1_10 + zmm1_10 + 0.5f) s>> 1).w
        float var_1b8_20 = zmm8.d f/ zmm3.d
        sub_140de7940(rax_11, &var_1c8)
        int32_t var_1a8_21 = rbx_12
        zmm3 = arg2[5].d
        float var_1c4_21 = var_148_1
        float zmm1_11 = zmm8.d f* var_198.d + var_110_1
        float zmm0_12 = zmm8.d f* var_198:4.d
        var_1c8 = zmm14.d
        int32_t var_1c0_21 = zmm12.d
        int32_t var_1bc_21 = zmm11.d
        float var_1b0_21 = zmm1_11 f+ zmm1.d
        zmm1_11 = zmm3.d f* zmm9.d
        float var_1ac_21 = zmm0_12 + var_10c_1 f+ zmm1:4.d
        zmm2 = *(arg2 + 0x2c)
        float var_1b4_21 = var_130_1 f/ zmm2.d
        int32_t rax_138 = int.d(zmm1_11 + zmm1_11 + 0.5f)
        zmm1_11 = zmm2.d f* zmm9.d
        int16_t var_1a4_21 = (rax_138 s>> 1).w
        int16_t var_1a2_21 = (int.d(zmm1_11 + zmm1_11 + 0.5f) s>> 1).w
        float var_1b8_21 = zmm8.d f/ zmm3.d
        sub_140de7940(rax_11, &var_1c8)
        zmm6.d = zmm6.d f+ var_160.d
        zmm3 = arg2[5].d
        zmm2 = *(arg2 + 0x2c)
        var_1c8 = zmm7_1.d
        int32_t var_1c4_22 = zmm13.d
        int32_t var_1c0_22 = zmm12.d
        int32_t var_1a8_22 = rbx_12
        int32_t var_1bc_22 = zmm11.d
        float var_1b0_22 = zmm6.d f* var_198.d + var_118_1 f+ zmm1.d
        float zmm1_12 = zmm3.d f* zmm9.d
        float var_1ac_22 = zmm6.d f* var_198:4.d + var_114_1 f+ zmm1:4.d
        float var_1b8_22 = zmm6.d f/ zmm3.d
        int32_t rax_142 = int.d(zmm1_12 + zmm1_12 + 0.5f)
        zmm1_12 = zmm2.d f* zmm9.d
        int16_t var_1a4_22 = (rax_142 s>> 1).w
        int16_t var_1a2_22 = (int.d(zmm1_12 + zmm1_12 + 0.5f) s>> 1).w
        float var_1b4_22 = var_134_1 f/ zmm2.d
        sub_140de7940(rax_11, &var_1c8)
        int32_t var_1a8_23 = rbx_12
        zmm3 = arg2[5].d
        float var_1c4_23 = var_148_1
        float zmm0_14 = zmm6.d f* var_198:4.d
        float zmm1_13 = zmm6.d f* var_198.d + var_110_1
        var_1c8 = zmm7_1.d
        int32_t var_1c0_23 = zmm12.d
        int32_t var_1bc_23 = zmm11.d
        float var_1b0_23 = zmm1_13 f+ zmm1.d
        float var_1ac_23 = zmm0_14 + var_10c_1 f+ zmm1:4.d
        zmm2 = *(arg2 + 0x2c)
        zmm1_13 = zmm3.d f* zmm9.d
        zmm6.d = zmm6.d f/ zmm3.d
        int32_t var_1b8_23 = zmm6.d
        float var_1b4_23 = var_130_1 f/ zmm2.d
        int32_t rax_146 = int.d(zmm1_13 + zmm1_13 + 0.5f)
        zmm1_13 = zmm2.d f* zmm9.d
        int16_t var_1a4_23 = (rax_146 s>> 1).w
        int16_t var_1a2_23 = (int.d(zmm1_13 + zmm1_13 + 0.5f) s>> 1).w
        sub_140de7940(rax_11, &var_1c8)
        zmm3 = arg2[5].d
        zmm13 = var_180
        zmm2.d = zmm8.d f* var_198.d
        int32_t var_1a8_24 = rbx_12
        zmm6.d = zmm13.d f+ var_160:4.d
        var_1c8 = zmm14.d
        float zmm1_14 = zmm8.d f* var_198:4.d
        zmm8.d = zmm8.d f/ zmm3.d
        int32_t var_1c4_24 = zmm15.d
        int32_t var_1c0_24 = zmm12.d
        int32_t var_1bc_24 = zmm11.d
        zmm2.d = zmm2.d f+ zmm6.d f* var_198:8.d
        int32_t var_1b8_24 = zmm8.d
        zmm2.d = zmm2.d f+ zmm1.d
        int32_t var_1b0_24 = zmm2.d
        zmm2 = *(arg2 + 0x2c)
        float var_1ac_24 = zmm1_14 + zmm6.d f* var_198:0xc.d f+ zmm1:4.d
        zmm1_14 = zmm3.d f* zmm9.d
        float var_1b4_24 = zmm6.d f/ zmm2.d
        int32_t rax_150 = int.d(zmm1_14 + zmm1_14 + 0.5f)
        zmm1_14 = zmm2.d f* zmm9.d
        int16_t var_1a4_24 = (rax_150 s>> 1).w
        int16_t var_1a2_24 = (int.d(zmm1_14 + zmm1_14 + 0.5f) s>> 1).w
        sub_140de7940(rax_11, &var_1c8)
        float zmm1_15 = zmm6.d f* var_198:8.d
        var_1c8 = var_144_1
        int32_t var_1c4_25 = zmm15.d
        int32_t var_1c0_25 = zmm12.d
        int32_t var_1bc_25 = zmm11.d
        zmm3 = arg2[5].d
        zmm2 = *(arg2 + 0x2c)
        float var_1b0_25 = zmm1_15 + var_170_1 f+ zmm1.d
        zmm1_15 = zmm3.d f* zmm9.d
        int32_t var_1a8_25 = rbx_12
        float var_1ac_25 = zmm6.d f* var_198:0xc.d + var_16c_1 f+ zmm1:4.d
        float var_1b4_25 = zmm6.d f/ zmm2.d
        int32_t rax_154 = int.d(zmm1_15 + zmm1_15 + 0.5f)
        zmm1_15 = zmm2.d f* zmm9.d
        int16_t var_1a4_25 = (rax_154 s>> 1).w
        int16_t var_1a2_25 = (int.d(zmm1_15 + zmm1_15 + 0.5f) s>> 1).w
        float var_1b8_25 = var_168_2 f/ zmm3.d
        sub_140de7940(rax_11, &var_1c8)
        var_1e8.q = &var_174
        var_158.d = var_140_1
        var_1f0.q = &var_158
        var_1f8.d = zmm9.d
        var_158:4.d = zmm15.d
        var_158:8.d = zmm12.d
        var_158:0xc.d = zmm11.d
        var_180 = var_12c_1
        int32_t var_17c_1 = zmm6.d
        int32_t* rax_158
        int32_t zmm7_2
        rax_158, zmm7_2 =
            sub_140dd3620(&var_1c8, &var_198, &var_180, &arg2[5], var_1f8, var_1f0, var_1e8)
        sub_140de7940(rax_11, rax_158)
        var_158.d = zmm7_2
        float zmm0_18 = zmm13.d f+ var_160.d
        zmm13.d = zmm13.d f+ var_160:4.d
        var_158:4.d = zmm15.d
        var_1e8.q = &var_174
        var_158:8.d = zmm12.d
        var_1f0.q = &var_158
        var_180 = zmm0_18
        var_158:0xc.d = zmm11.d
        int32_t var_17c_2 = zmm13.d
        var_1f8.d = zmm9.d
        sub_140de7940(rax_11, 
            sub_140dd3620(&var_1c8, &var_198, &var_180, &arg2[5], var_1f8, var_1f0, var_1e8))
        sub_140de7260(rax_11, r15_1)
        sub_140de7260(rax_11, r15_1 + 1)
        sub_140de7260(rax_11, 2)
        sub_140de7260(rax_11, 2)
        sub_140de7260(rax_11, 0)
        sub_140de7260(rax_11, r15_1)
        sub_140de7260(rax_11, r15_1 + 1)
        sub_140de7260(rax_11, r15_1 + 2)
        sub_140de7260(rax_11, 4)
        sub_140de7260(rax_11, 4)
        sub_140de7260(rax_11, 2)
        sub_140de7260(rax_11, r15_1 + 1)
        sub_140de7260(rax_11, r15_1 + 2)
        sub_140de7260(rax_11, r15_1 + 3)
        sub_140de7260(rax_11, 6)
        sub_140de7260(rax_11, 6)
        sub_140de7260(rax_11, 4)
        sub_140de7260(rax_11, r15_1 + 2)
        sub_140de7260(rax_11, r15_1)
        sub_140de7260(rax_11, 0)
        sub_140de7260(rax_11, 1)
        sub_140de7260(rax_11, 1)
        sub_140de7260(rax_11, r15_1 + 4)
        sub_140de7260(rax_11, r15_1)
        sub_140de7260(rax_11, r15_1 + 4)
        sub_140de7260(rax_11, 1)
        sub_140de7260(rax_11, 8)
        sub_140de7260(rax_11, 8)
        sub_140de7260(rax_11, r15_1 + 5)
        sub_140de7260(rax_11, r15_1 + 4)
        sub_140de7260(rax_11, r15_1 + 5)
        sub_140de7260(rax_11, 8)
        sub_140de7260(rax_11, 0xc)
        sub_140de7260(rax_11, 0xc)
        sub_140de7260(rax_11, r15_1 + 8)
        sub_140de7260(rax_11, r15_1 + 5)
        sub_140de7260(rax_11, 6)
        sub_140de7260(rax_11, r15_1 + 3)
        sub_140de7260(rax_11, r15_1 + 6)
        sub_140de7260(rax_11, r15_1 + 6)
        sub_140de7260(rax_11, 7)
        sub_140de7260(rax_11, 6)
        sub_140de7260(rax_11, 7)
        sub_140de7260(rax_11, r15_1 + 6)
        sub_140de7260(rax_11, r15_1 + 7)
        sub_140de7260(rax_11, r15_1 + 7)
        sub_140de7260(rax_11, 0xb)
        sub_140de7260(rax_11, 7)
        sub_140de7260(rax_11, 0xb)
        sub_140de7260(rax_11, r15_1 + 7)
        sub_140de7260(rax_11, r15_1 + 0xb)
        sub_140de7260(rax_11, r15_1 + 0xb)
        sub_140de7260(rax_11, 0xf)
        sub_140de7260(rax_11, 0xb)
        sub_140de7260(rax_11, 0xc)
        sub_140de7260(rax_11, 0xd)
        sub_140de7260(rax_11, r15_1 + 9)
        sub_140de7260(rax_11, r15_1 + 9)
        sub_140de7260(rax_11, r15_1 + 8)
        sub_140de7260(rax_11, 0xc)
        sub_140de7260(rax_11, 0xd)
        sub_140de7260(rax_11, 0xe)
        sub_140de7260(rax_11, r15_1 + 0xa)
        sub_140de7260(rax_11, r15_1 + 0xa)
        sub_140de7260(rax_11, r15_1 + 9)
        sub_140de7260(rax_11, 0xd)
        sub_140de7260(rax_11, 0xe)
        sub_140de7260(rax_11, 0xf)
        sub_140de7260(rax_11, r15_1 + 0xb)
        sub_140de7260(rax_11, r15_1 + 0xb)
        sub_140de7260(rax_11, r15_1 + 0xa)
        result = sub_140de7260(rax_11, 0xe)
else
    if (cond:3 != 0 || cond:4 != 0)
        if (cond:3 != 0)
            var_124 = zmm14.d
            zmm14 = zmm8
        
        if (cond:4 != 0)
            var_128 = zmm13.d
            zmm13 = zmm6
    
    zmm1_1.d = zmm9.d f* arg2[5].d
    int32_t var_1a8_26 = var_1a0
    zmm6 = zmm1.d
    zmm7_1 = zmm1:4.d
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    var_1c8 = zmm14.d
    int32_t var_1c4_26 = zmm13.d
    int32_t var_1c0_26 = zmm12.d
    int32_t var_1bc_26 = zmm11.d
    int32_t var_1b0_26 = zmm6.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int32_t var_1ac_26 = zmm7_1.d
    int32_t var_1b8_26 = 0
    int32_t var_1b4_26 = 0
    int32_t rax_162 = int.d(zmm1_1.d)
    zmm1_1.d = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_1a4_26 = (rax_162 s>> 1).w
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f+ 0.5f
    int16_t var_1a2_26 = (int.d(zmm1_1.d) s>> 1).w
    sub_140de7940(rax_11, &var_1c8)
    zmm3 = var_160.d
    zmm2 = arg2[5].d
    zmm10 = var_124
    int32_t var_1a8_27 = var_1a0
    float zmm0_19 = var_198:4.d f* zmm3.d
    float zmm1_16 = var_198.d f* zmm3.d f+ zmm6.d
    var_1c8 = zmm10.d
    int32_t var_1c4_27 = zmm13.d
    int32_t var_1c0_27 = zmm12.d
    int32_t var_1bc_27 = zmm11.d
    int32_t var_1b4_27 = 0
    float var_1b0_27 = zmm1_16
    zmm1_16 = zmm2.d f* zmm9.d
    float var_1ac_27 = zmm0_19 f+ zmm7_1.d
    float var_1b8_27 = zmm3.d f/ zmm2.d
    int32_t rax_167 = int.d(zmm1_16 + zmm1_16 + 0.5f)
    zmm1_16 = zmm9.d f* *(arg2 + 0x2c)
    int16_t var_1a4_27 = (rax_167 s>> 1).w
    int16_t var_1a2_27 = (int.d(zmm1_16 + zmm1_16 + 0.5f) s>> 1).w
    sub_140de7940(rax_11, &var_1c8)
    zmm3 = var_160:4.d
    float var_1c4_28 = var_128
    float zmm0_20 = var_198:0xc.d f* zmm3.d
    float zmm1_17 = var_198:8.d f* zmm3.d f+ zmm6.d
    var_1c8 = zmm14.d
    int32_t var_1c0_28 = zmm12.d
    int32_t var_1bc_28 = zmm11.d
    float var_1b0_28 = zmm1_17
    zmm2 = *(arg2 + 0x2c)
    zmm1_17 = zmm9.d f* arg2[5].d
    int32_t var_1a8_28 = var_1a0
    float var_1ac_28 = zmm0_20 f+ zmm7_1.d
    int32_t var_1b8_28 = 0
    float var_1b4_28 = zmm3.d f/ zmm2.d
    int32_t rax_172 = int.d(zmm1_17 + zmm1_17 + 0.5f)
    zmm1_17 = zmm2.d f* zmm9.d
    int16_t var_1a4_28 = (rax_172 s>> 1).w
    int16_t var_1a2_28 = (int.d(zmm1_17 + zmm1_17 + 0.5f) s>> 1).w
    sub_140de7940(rax_11, &var_1c8)
    var_1e8.q = &var_1a0
    var_158.d = zmm10.d
    var_1f0.q = &var_158
    var_1f8.d = zmm9.d
    var_158:4.d = var_128.d
    var_158:8.d = zmm12.d
    var_158:0xc.d = zmm11.d
    sub_140de7940(rax_11, 
        sub_140dd3620(&var_1c8, &var_198, &var_160, &arg2[5], var_1f8, var_1f0, var_1e8))
    sub_140de7260(rax_11, 0)
    sub_140de7260(rax_11, 1)
    sub_140de7260(rax_11, 2)
    sub_140de7260(rax_11, 2)
    sub_140de7260(rax_11, 1)
    result = sub_140de7260(rax_11, 3)
    
    if (data_143e24364 != 0)
        int32_t rsi_1 = *(rax_11 + 0x64)
        var_1e8.q = &var_174
        zmm8.d = 1f f/ zmm9.d
        var_1f0.q = &var_158
        var_158.d = zmm14.d
        var_158:4.d = zmm13.d
        uint128_t zmm6_1 = zmm8 ^ data_142d3f780
        var_180 = zmm6_1.d
        int32_t var_17c_3 = zmm6_1.d
        var_158:8.d = zmm12.d
        var_158:0xc.d = zmm11.d
        var_1f8.d = zmm9.d
        int32_t* rax_177
        int32_t zmm6_2
        rax_177, zmm6_2 =
            sub_140dd3620(&var_1c8, &var_198, &var_180, &arg2[5], var_1f8, var_1f0, var_1e8)
        sub_140de7940(rax_11, rax_177)
        var_158.d = zmm10.d
        var_158:4.d = zmm13.d
        var_1e8.q = &var_174
        var_158:8.d = zmm12.d
        var_1f0.q = &var_158
        var_180 = zmm8.d f+ var_160.d
        var_158:0xc.d = zmm11.d
        int32_t var_17c_4 = zmm6_2
        var_1f8.d = zmm9.d
        int32_t* rax_178
        float zmm6_3
        int32_t zmm7_3
        rax_178, zmm6_3, zmm7_3 =
            sub_140dd3620(&var_1c8, &var_198, &var_180, &arg2[5], var_1f8, var_1f0, var_1e8)
        sub_140de7940(rax_11, rax_178)
        var_158.d = zmm14.d
        var_158:4.d = zmm7_3
        var_1e8.q = &var_174
        var_158:8.d = zmm12.d
        var_1f0.q = &var_158
        float var_17c_5 = zmm8.d f+ var_160:4.d
        var_158:0xc.d = zmm11.d
        var_180 = zmm6_3
        var_1f8.d = zmm9.d
        int32_t* rax_179
        int32_t zmm7_4
        rax_179, zmm7_4 =
            sub_140dd3620(&var_1c8, &var_198, &var_180, &arg2[5], var_1f8, var_1f0, var_1e8)
        sub_140de7940(rax_11, rax_179)
        var_158.d = zmm10.d
        float zmm0_23 = zmm8.d f+ var_160.d
        zmm8.d = zmm8.d f+ var_160:4.d
        var_158:4.d = zmm7_4
        var_1e8.q = &var_174
        var_158:8.d = zmm12.d
        var_1f0.q = &var_158
        var_160.d = zmm0_23
        var_158:0xc.d = zmm11.d
        var_160:4.d = zmm8.d
        var_1f8.d = zmm9.d
        sub_140de7940(rax_11, 
            sub_140dd3620(&var_1c8, &var_198, &var_160, &arg2[5], var_1f8, var_1f0, var_1e8))
        sub_140de7260(rax_11, rsi_1)
        sub_140de7260(rax_11, rsi_1 + 1)
        sub_140de7260(rax_11, 1)
        sub_140de7260(rax_11, rsi_1)
        sub_140de7260(rax_11, 1)
        sub_140de7260(rax_11, 0)
        sub_140de7260(rax_11, rsi_1)
        sub_140de7260(rax_11, 2)
        sub_140de7260(rax_11, rsi_1 + 2)
        sub_140de7260(rax_11, rsi_1)
        sub_140de7260(rax_11, 0)
        sub_140de7260(rax_11, 2)
        sub_140de7260(rax_11, 1)
        sub_140de7260(rax_11, rsi_1 + 1)
        sub_140de7260(rax_11, rsi_1 + 3)
        sub_140de7260(rax_11, 1)
        sub_140de7260(rax_11, rsi_1 + 3)
        sub_140de7260(rax_11, 3)
        sub_140de7260(rax_11, 2)
        sub_140de7260(rax_11, 3)
        sub_140de7260(rax_11, rsi_1 + 3)
        sub_140de7260(rax_11, rsi_1 + 3)
        sub_140de7260(rax_11, rsi_1 + 2)
        result = sub_140de7260(rax_11, 2)
__security_check_cookie(rax_1 ^ &var_218)
return result
