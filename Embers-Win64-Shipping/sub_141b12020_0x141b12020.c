// 函数: sub_141b12020
// 地址: 0x141b12020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void** const var_130 = &data_143052b80
int64_t rax_2 = data_143f2c678

if (rax_2 == 0)
    rax_2 = sub_141a54240(&data_143f2c678, 0)

int32_t var_100 = arg6[0x5b].d
void* var_108
int64_t* var_140 = &var_108
char rdx_1 = *(arg6 + 0x2dc)
var_108 = arg6[0x5a]
sub_1405c5900(&arg6[0x1f], rax_2, &var_130, arg2, rdx_1, var_140)
int32_t rax_3 = *(arg4 + 0x24)
int32_t var_128 = 0x3f800000
void** const rdx_3

if (rax_3 == 0x80000000)
    void*** rdx_4 = 0x10
    
    if (*(arg4 + 0x20) != 0)
        rdx_4 = 4
    
    rdx_3 = *(rdx_4 + arg4)
else
    var_130.d = rax_3
    var_130:4.d = 0
    rdx_3 = var_130

sub_141a467f0(*(arg1 + 8) + 0x100, rdx_3, &var_128)
int32_t rax_4 = *(arg4 + 0x24)
void** const rdx_5

if (rax_4 == 0x80000000)
    void*** rdx_6 = 0x10
    
    if (*(arg4 + 0x20) != 0)
        rdx_6 = 4
    
    rdx_5 = *(rdx_6 + arg4)
else
    var_130.d = rax_4
    var_130:4.d = 0
    rdx_5 = var_130

char r8_2
int32_t zmm0_1
zmm0_1, r8_2 = sub_141a47dc0(*(arg1 + 8), rdx_5)
int128_t zmm1
zmm1.d = var_128.d f* zmm0_1
bool cond:2 = zmm1.d f== arg2[0x46].d
var_128 = zmm1.d

if (not(cond:2))
    sub_141ef78b0(arg2, zmm1, r8_2)

int32_t rax_5 = *(arg4 + 0x24)
int32_t var_118[0x4]
var_118[0] = 0x3f800000
void** const rdx_7

if (rax_5 == 0x80000000)
    int64_t* rdx_8 = 0x10
    
    if (*(arg4 + 0x20) != 0)
        rdx_8 = 4
    
    rdx_7 = *(rdx_8 + arg4)
else
    var_130.d = rax_5
    var_130:4.d = 0
    rdx_7 = var_130

char r8_4
int128_t zmm8
int32_t zmm9_1
r8_4, zmm8, zmm9_1 = sub_141a467f0(*(arg1 + 8) + 0x1a0, rdx_7, &var_118)
uint128_t zmm1_1 = var_118[0]

if (not(zmm1_1.d f== arg2[0x4a].d))
    sub_141ef68b0(arg2, zmm1_1, r8_4)

void* r15 = *(arg1 + 8)
int64_t rbx = *(r15 + 0x90)
uint32_t rbx_1

if (rbx.b == 2)
    rbx_1 = 0
else if (rbx.b != 1)
    rbx_1 = (rbx u>> 0x20).d + 1
else
    rbx_1 = (rbx u>> 0x20).d

void* rax_7 = sub_140d226f0(r15, sub_141a6e000())
double zmm2[0x2] = zx.o(0)
var_130.d = rbx_1
var_130:4.d = 0
int64_t r8_5 = *(rax_7 + 0x108)
uint32_t rdx_11 = (r8_5 u>> 0x20).d
var_130 = var_130
uint128_t zmm0_2
zmm0_2.d = _mm_cvtepi32_ps(zx.o(rdx_11)).d f* var_130:4.d
zmm2[0] = float.d(sx.q(rdx_11) * sx.q(rbx_1))
zmm0_2 = _mm_cvtps_pd(zmm0_2.q)
zmm1_1 = _mm_cvtepi32_pd(zx.q(r8_5.d))
zmm2[0] = zmm2[0] f+ zmm0_2.q
zmm2[0] = zmm2[0] f/ zmm1_1.q
float temp0_3[0x4] = _mm_cvtpd_ps(zmm2)
void* rax_10
int512_t zmm1_2
rax_10, zmm1_2 = sub_141af0560(arg3)
void* rcx_12 = *(arg1 + 8)
int64_t r9_1 = *(arg4 + 0x18)
var_108 = rax_10
int64_t r10 = sx.q(*(rcx_12 + 0xe8))
int64_t* r15_1 = *(rcx_12 + 0xe0)
int32_t rcx_13 = *(arg4 + 0x24)
void** const rcx_14

if (rcx_13 == 0x80000000)
    int64_t* rcx_15 = 0x10
    
    if (*(arg4 + 0x20) != 0)
        rcx_15 = 4
    
    rcx_14 = *(rcx_15 + arg4)
else
    var_130.d = rcx_13
    var_130:4.d = 0
    rcx_14 = var_130

zmm2 = zx.o(0)
var_130.d = r10.d
var_130:4.d = 0
var_130 = var_130
zmm1_2.o = var_130:4.d
uint32_t rdx_13 = (r9_1 u>> 0x20).d
int64_t r8_6 = sx.q(rdx_13)
int64_t zmm3 = float.d(r9_1.d)
void** const var_120 = rcx_14
float zmm0_3[0x2] = var_120:4.d
zmm2[0].d = float.s(rdx_13)
zmm0_3[0] = zmm0_3[0] f* zmm2[0].d
zmm1_2.d = zmm1_2.d f* zmm2[0].d
double temp0_4[0x2] = _mm_cvtps_pd(zmm0_3)
double temp0_5[0x2] = _mm_cvtps_pd(zmm1_2.q)
temp0_4[0] = temp0_4[0] f+ float.d(sx.q(rcx_14.d) * r8_6)
temp0_4[0] = temp0_4[0] f/ zmm3
float temp0_6[0x2] = _mm_cvtps_pd(temp0_3[0].q)
temp0_4[0] = temp0_4[0] f- temp0_6
temp0_5[0] = temp0_5[0] f+ float.d(r10 * r8_6)
temp0_5[0] = temp0_5[0] f/ zmm3
zmm1_2.o = _mm_cvtps_pd(_mm_cvtpd_ps(temp0_5))
temp0_4[0] = temp0_4[0] f+ zmm1_2.q
float zmm7[0x4] = _mm_cvtpd_ps(temp0_4)

if (not(zmm7[0] f< zmm9_1) && r15_1 != 0)
    float zmm0_4[0x4] = sub_141a52fb0(r15_1)
    
    if (not(zmm0_4[0] f<= zmm9_1))
        zmm1_2.o = zmm0_4
        float zmm0_5[0x4]
        zmm0_5, zmm1_2, zmm8, zmm9_1 = sub_140a454f0(zmm7, zmm1_2.o)
        zmm7 = zmm0_5

char rax_17 = (*(*arg2 + 0x540))(arg2)
char var_138_1

if (rax_17 != 0)
    var_138_1 = 0

if (rax_17 == 0 || arg2[0x3e] != r15_1)
    var_138_1 = 1

int128_t var_58 = zmm8
rbx_1.b = 0
int64_t* rax_19 = (*(*arg6 + 0x78))(arg6)
int64_t rdx_14 = *rax_19
int32_t* result = (*(rdx_14 + 0x150))(rax_19, rdx_14)
float zmm6[0x4]

if (result != 0)
    int64_t* rax_21 = (*(*arg6 + 0x78))(arg6)
    int64_t rdx_15 = *rax_21
    int64_t* rax_23
    uint32_t zmm0_6[0x4]
    rax_23, zmm0_6 = sub_142437e30((*(rdx_15 + 0x150))(rax_21, rdx_15), 0, 1)
    int64_t rdx_16 = *rax_23
    result = (*(rdx_16 + 0x638))(rax_23, rdx_16)
    zmm0_6[0] = zmm0_6[0] f- 1f
    
    if (_mm_and_ps(zmm0_6, 0x7fffffff)[0] f<= 9.99999994e-09f || data_1439e5884 == 0)
        int64_t* rax_25 = (*(*arg6 + 0x78))(arg6)
        int64_t rdx_17 = *rax_25
        zmm6 = *((*(rdx_17 + 0x150))(rax_25, rdx_17) + 0x52c)
        zmm1_2 = sub_140d3a3a0(&var_120, arg2)
        result = sub_141b1f9a0(rax_10 + 0x58, &var_130, var_120)
        
        if (*result != 0xffffffff)
            zmm1_2 = sub_140d3a3a0(&var_120, arg2)
            sub_141b1f9a0(rax_10 + 0x58, &var_130, var_120)
            int64_t rax_27 = sx.q(var_130.d)
            void* const rcx_30
            
            if (rax_27.d == 0xffffffff)
                rcx_30 = nullptr
            else
                rcx_30 = *(rax_10 + 0x58) + rax_27 * 0x14
            
            zmm6[0] = zmm6[0] f- *(rcx_30 + 8)
            rbx_1 = 0
            result = 1
            zmm6[0] = zmm6[0] - zmm7[0]
            
            if (_mm_and_ps(zmm6, 0x7fffffff)[0] f> data_1439e5880)
                rbx_1 = 1

if (var_138_1 != 0 || rbx_1.b != 0)
    arg2[0x42].b &= 0xf7
    arg2[0x42].b |= arg5 << 3
    void* rax_30 = *(arg1 + 8)
    
    if (*(rax_30 + 0x2f1) != 0)
        arg2[0x4c] = *(rax_30 + 0x2f8)
    
    char r8_10
    result, r8_10 = (*(*arg2 + 0x540))(arg2)
    
    if (result.b != 0 || rbx_1.b != 0)
        result, r8_10 = (*(*arg2 + 0x538))(arg2)
    
    if (arg2[0x3e] != r15_1)
        result, r8_10, zmm1_2, zmm7, zmm9_1 = sub_141ef6f00(arg2, r15_1, zmm1_2)
    
    arg2[0x42].b &= 0xbf
    
    if (not(zmm7[0] f< zmm9_1))
        zmm1_2.o = zmm7
        (*(*arg2 + 0x530))(arg2, zmm1_2)
        int64_t* rax_36 = (*(*arg6 + 0x78))(arg6)
        int64_t rdx_24 = *rax_36
        result, r8_10 = (*(rdx_24 + 0x150))(rax_36, rdx_24)
        
        if (result != 0)
            sub_140d3a3a0(&var_120, arg2)
            int64_t* rbx_4 = var_108 + 0x58
            
            if (*sub_141b1f9a0(rbx_4, &var_130, var_120) == 0xffffffff)
                sub_140d3a3a0(&var_108, arg2)
                sub_141aee070(rbx_4, &var_108)
            
            int64_t* rax_39 = (*(*arg6 + 0x78))(arg6)
            int64_t rdx_29 = *rax_39
            zmm6 = *((*(rdx_29 + 0x150))(rax_39, rdx_29) + 0x52c)
            sub_140d3a3a0(&var_108, arg2)
            r8_10 = sub_141b1f9a0(rbx_4, &var_130, var_108)
            int64_t rax_41 = sx.q(var_130.d)
            
            if (rax_41.d == 0xffffffff)
                result = nullptr
            else
                result = *rbx_4 + rax_41 * 0x14
            
            zmm6[0] = zmm6[0] - zmm7[0]
            result[2] = zmm6[0]
    
    if (*(arg4 + 0x48) == 3)
        zmm1_2.o = 0x3d4ccccd
        result = sub_141efc8f0(arg2, zmm1_2.o, r8_10)

if (arg5 != 0)
    result = sub_141ee2210(arg2)
    
    if (result != 0)
        int128_t zmm6_1 = *(arg2 + 0x1c0)
        int128_t zmm7_1 = *(arg2 + 0x1d0)
        zmm8 = *(arg2 + 0x1e0)
        int64_t var_b0_1 = arg2[0xe8]
        void*** rax_44 = sub_140a82f30(0x50, 0x10)
        *(rax_44 + 0x10) = result.o
        *rax_44 = &data_14305db80
        *(rax_44 + 0x20) = zmm6_1
        *(rax_44 + 0x30) = zmm7_1
        *(rax_44 + 0x40) = zmm8
        void*** var_e8_1 = rax_44
        void* (* var_f8)(int64_t* arg1)
        void* (* rax_45)(int64_t* arg1) = var_f8
        
        if (rax_44 != -0x10)
            rax_45 = sub_141b080a0
        
        var_f8 = rax_45
        result = sub_141e85cb0(&var_f8, var_138_1)

__security_check_cookie(rax_1 ^ &var_168)
return result
