// 函数: sub_140f57ef0
// 地址: 0x140f57ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void* rdi = arg3
void* rax_2
float zmm7[0x4]

if (arg1[0x5c].d != 0)
    zmm7 = *(arg3 + 4)
    rax_2 = rdi
else
    zmm7 = *arg3
    rax_2 = arg3 + 4

float zmm12[0x4] = *rax_2
void* rax_3 = sub_140f48630(arg1)
int64_t* rsi = nullptr
float zmm0[0x4] = *(rax_3 + 0xc)
float zmm10[0x4] = *(rax_3 + 8)
float zmm15[0x4] = zmm10
zmm0[0] = zmm0[0] * 0.5f
zmm15[0] = zmm15[0] * 0.5f
float var_168 = zmm0[0]

if (arg1[0x58].d != 0)
    int64_t* rcx = arg1[0x57]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x58].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x57]
        
        arg1[0x56].b = (*(*rcx_1 + 0x48))(rcx_1)

float zmm6[0x4] = zx.o(0)
float zmm8[0x4]

if (arg1[0x56].b == 0)
    zmm8 = zx.o(0)
else
    zmm8 = zmm10

zmm0 = arg1[0x75].d
uint128_t zmm1
float zmm2[0x4]

if (zmm0[0] f!= *(arg1 + 0x3ac))
    if (arg1[0x6f].d != 0)
        int64_t* rcx_2 = arg1[0x6e]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (arg1[0x6f].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg1[0x6e]
            
            (*(*rcx_3 + 0x48))(rcx_3)
            arg1[0x6d].d = zmm0[0]
    
    zmm1 = arg1[0x75].d
    zmm2 = arg1[0x6d].d
    zmm0 = *(arg1 + 0x3ac)
    zmm2[0] = zmm2[0] f- zmm1.d
    zmm0[0] = zmm0[0] f- zmm1.d
    zmm2[0] = zmm2[0] / zmm0[0]
    
    if (not(zmm2[0] < 0f))
        zmm6 = _mm_min_ss(zmm2[0], 0x3f800000)
else
    zmm6 = _mm_min_ss(0x3f800000[0], 0x3f800000)

bool cond:2 = arg1[0x5c].d != 1
zmm10[0] = zmm10[0] + zmm8[0]
zmm0 = *rdi
zmm1 = *(rdi + 0x10)
zmm8[0] = zmm8[0] * 0.5f
float zmm11[0x4] = zmm12
float zmm9[0x4] = zmm7
zmm11[0] = zmm11[0] * 0.5f
zmm9[0] = zmm9[0] - zmm10[0]
float var_110[0x4] = zmm0
zmm0 = *(rdi + 0x20)
zmm9[0] = zmm9[0] * zmm6[0]
zmm10 = zmm11
zmm10[0] = zmm10[0] - var_168
uint128_t var_100 = zmm1
zmm1 = zx.o(*(rdi + 0x30))
zmm9[0] = zmm9[0] + zmm8[0]
zmm8 = zmm7
uint40_t var_e0 = zmm1.5
zmm8[0] = zmm8[0] - zmm15[0]
float var_148
int64_t var_140
int64_t var_134
uint128_t var_12c
char var_114
uint128_t zmm3

if (not(cond:2))
    uint128_t zmm4_1
    zmm4_1.d = data_143dbb1f0.d.d f* zmm7[0]
    var_140 = 0x3f800000
    float var_144_1 = zmm12[0]
    float zmm5_1 = zmm7[0]
    zmm12[0] = zmm12[0] f* data_143dbb1f0:4.d
    int32_t var_138_1 = 0
    zmm7[0] = zmm7[0] * -1.21679644e-08f
    zmm1.d = zmm4_1.d f* 1.21679644e-08f
    zmm3.d = zmm4_1.d f* 1f
    zmm12[0] = zmm12[0] * 1f
    zmm1.d = zmm1.d f+ zmm12[0]
    var_148 = zmm7[0]
    zmm12[0] = zmm12[0] * 1.21679644e-08f
    zmm7[0] = zmm7[0] f- zmm1.d
    zmm3.d = zmm3.d f- zmm12[0]
    float var_160[0x4] = data_142ee7630
    zmm7[0] = zmm7[0] f+ zmm4_1.d
    zmm3.d = zmm3.d f+ zmm5_1 * 1f
    float var_150_1 = zmm7[0]
    zmm3.d = zmm3.d f+ zmm12[0]
    int32_t var_14c_1 = zmm3.d
    zmm8, zmm9, zmm10, zmm11 = sub_1408b8950(&var_12c, &var_160, rdi + 0x1c)
    var_114 |= 1
    var_140:4.d = *(rdi + 0xc)
    var_140.d = *(rdi + 8)
    int32_t var_138_2 = (*(rdi + 0x10)).d
    var_134 = 0
    zmm1 = sub_140d96150(&var_110, &var_148)

int64_t r15

if (arg7 == 0)
    r15.b = 0x20
else
    if (arg1[0x34].d != 0)
        int64_t* rcx_6 = arg1[0x33]
        
        if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
            int64_t* rcx_7
            
            if (arg1[0x34].d == 0)
                rcx_7 = nullptr
            else
                rcx_7 = arg1[0x33]
            
            arg1[0x32].b = (*(*rcx_7 + 0x48))(rcx_7)
    
    if (arg1[0x32].b == 0)
        r15.b = 0x20
    else
        r15.b = 0

zmm8[0] = zmm8[0] - zmm15[0]
zmm12 = *(arg1[0x55] + 0x338)
zmm12[0] = zmm12[0] * 0.5f
zmm11[0] = zmm11[0] - zmm12[0]

if (arg1[0x34].d != 0)
    int64_t* rcx_8 = arg1[0x33]
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x28))(rcx_8) != 0)
        int64_t* rcx_9
        
        if (arg1[0x34].d == 0)
            rcx_9 = nullptr
        else
            rcx_9 = arg1[0x33]
        
        arg1[0x32].b = (*(*rcx_9 + 0x48))(rcx_9)

if (arg1[0x32].b != 0 && arg1[0x5b].d != 0)
    int64_t* rcx_10 = arg1[0x5a]
    
    if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
        if (arg1[0x5b].d != 0)
            rsi = arg1[0x5a]
        
        arg1[0x59].b = (*(*rsi + 0x48))(rsi)

void* rsi_2

if (arg1[0x32].b == 0 || arg1[0x59].b != 0)
    rsi_2 = arg1[0x55] + 0x118
else
    char rax_25 = (*(*arg1 + 0x1c8))(arg1)
    void* rsi_1 = arg1[0x55]
    
    if (rax_25 == 0)
        rsi_2 = rsi_1 + 8
    else
        rsi_2 = rsi_1 + 0x90

void* rax_26 = sub_140f48630(arg1)
int128_t* rax_27 = sub_140e11270(&arg1[0x5d], zmm1)
int32_t* r8_1 = rax_27
uint32_t rdx_2 = zx.d(rax_27[1].b)

if (rdx_2 != 0)
    if (rdx_2 == 1)
        r8_1 = *(rax_27 + 0x18)
    else if (rdx_2 == 3)
        r8_1 = &arg6[8]
    else
        r8_1 = &arg6[4]

uint32_t rcx_15 = zx.d(*(rsi_2 + 0x30))
void* rdx_4 = rsi_2 + 0x20

if (rcx_15 != 0)
    if (rcx_15 == 1)
        rdx_4 = *(rdx_4 + 0x18)
    else if (rcx_15 == 3)
        rdx_4 = &arg6[8]
    else
        rdx_4 = &arg6[4]

float zmm5_2[0x4] = *rdx_4
zmm2 = r8_1[1]
zmm3 = r8_1[2]
zmm5_2[0] = zmm5_2[0] f* *r8_1
float zmm4_2 = r8_1[3]
zmm7 = var_110[2]
zmm5_2[0] = zmm5_2[0] f* *arg6
float temp0_3[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55)
temp0_3[0] = temp0_3[0] * zmm2[0]
zmm2 = zmm0[1]
float var_178 = zmm5_2[0]
temp0_3[0] = temp0_3[0] f* arg6[1]
int128_t* var_180 = &var_178
float temp0_4[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa)
temp0_4[0] = temp0_4[0] f* zmm3.d
var_140 = 0
zmm3 = var_100:0xc.d
float temp0_5[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
temp0_4[0] = temp0_4[0] f* arg6[2]
char var_188 = r15.b
temp0_5[0] = temp0_5[0] * zmm4_2
zmm4_2 = zmm7[0]
float var_170 = temp0_4[0]
zmm15[0] = zmm15[0] f* zmm3.d
temp0_5[0] = temp0_5[0] f* arg6[3]
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm4_2 = zmm4_2 * zmm11[0]
float var_16c = temp0_5[0]
zmm11[0] = zmm11[0] * zmm2[0]
float var_174 = temp0_3[0]
float zmm1_1[0x4] = zmm0[2]
zmm11[0] = zmm11[0] + zmm15[0]
float zmm0_2[0x4] = zmm0[0]
zmm3.d = zmm0_2[0]
zmm11[0] = zmm11[0] * zmm1_1[0]
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm11[0] = zmm11[0] + zmm0[3]
zmm3.d = zmm2[0]
zmm7[0] = zmm7[0] * zmm15[0]
zmm15[0] = zmm15[0] * zmm0_2[0]
zmm7[0] = zmm7[0] + var_110[3]
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm1_1[0]
float var_144_2 = zmm4_2 f+ var_100.d
zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
zmm11[0] = zmm11[0] + zmm15[0]
var_140.d = zmm7[0]
var_148 = zmm7[0]
var_134.d = zmm8[0]
var_134:4.d = zmm12[0]
zmm11[0] = zmm11[0] f+ var_e0.d
var_12c = zmm3
int64_t var_11c = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
int128_t* rax_29 =
    sub_140e11270(&arg1[0x65], sub_140db3600(arg4, arg5, &var_148, rsi_2, var_188, var_180))
int128_t* r8_3 = rax_29
uint32_t rax_30 = zx.d(rax_29[1].b)

if (rax_30 != 0)
    if (rax_30 == 1)
        r8_3 = *(r8_3 + 0x18)
    else if (rax_30 == 3)
        r8_3 = &arg6[8]
    else
        r8_3 = &arg6[4]

uint32_t rcx_20 = zx.d(*(rax_26 + 0x30))
void* rdx_6 = rax_26 + 0x20

if (rcx_20 != 0)
    if (rcx_20 == 1)
        rdx_6 = *(rdx_6 + 0x18)
    else if (rcx_20 == 3)
        rdx_6 = &arg6[8]
    else
        rdx_6 = &arg6[4]

float zmm5_3[0x4] = *rdx_6
float zmm2_1 = *(r8_3 + 4)
float zmm3_1 = *(r8_3 + 8)
zmm5_3[0] = zmm5_3[0] f* *r8_3
int32_t zmm4_3 = *(r8_3 + 0xc)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55)
zmm5_3[0] = zmm5_3[0] f* *arg6
temp0_11[0] = temp0_11[0] * zmm2_1
var_178 = zmm5_3[0]
float temp0_12[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa)
temp0_11[0] = temp0_11[0] f* arg6[1]
float temp0_13[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
temp0_13[0] = temp0_13[0] f* zmm4_3
temp0_12[0] = temp0_12[0] * zmm3_1
temp0_13[0] = temp0_13[0] f* arg6[3]
temp0_12[0] = temp0_12[0] f* arg6[2]
float var_16c_1 = temp0_13[0]
float var_174_1 = temp0_11[0]
float var_170_1 = temp0_12[0]
void* rax_32 = sub_140f48630(arg1)
zmm7 = var_110[2]
float zmm1_3[0x4] = zmm0[2]
float zmm5_4 = zmm7[0]
uint128_t zmm4_4 = var_100:0xc.d
zmm2_1 = zmm0[1]
zmm3_1 = zmm7[0]
zmm9[0] = zmm9[0] f* zmm4_4.d
var_140 = 0
_mm_shuffle_ps(zmm4_4, zmm4_4, 0xe1)
zmm10[0] = zmm10[0] * zmm2_1
zmm5_4 = zmm5_4 * zmm9[0]
zmm9[0] = zmm9[0] + zmm10[0]
float zmm0_3[0x4] = zmm0[0]
zmm5_4 = zmm5_4 + var_110[3]
zmm3_1 = zmm3_1 * zmm10[0] f+ var_100.d
zmm9[0] = zmm9[0] + zmm0[3]
zmm4_4.d = zmm0_3[0]
zmm9[0] = zmm9[0] * zmm0_3[0]
_mm_shuffle_ps(zmm4_4, zmm4_4, 0xc6)
zmm4_4.d = zmm2_1
zmm10[0] = zmm10[0] * zmm1_3[0]
var_148 = zmm5_4
float var_144_3 = zmm3_1
var_140.d = zmm7[0]
zmm9[0] = zmm9[0] + zmm10[0]
var_134.d = (*(rax_32 + 8))[0]
_mm_shuffle_ps(zmm4_4, zmm4_4, 0x27)
zmm4_4.d = zmm1_3[0]
zmm1_3 = *(rax_32 + 0xc)
zmm9[0] = zmm9[0] f+ var_e0.d
zmm4_4 = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x39)
char var_114_2 = ((var_e0:4.b & 1) * 2) | ((((var_e0:4.b & 1) * 2) | (var_114 & 0xfc)) & 0xfc)
int128_t* var_180_1 = &var_178
var_134:4.d = zmm1_3[0]
int64_t var_11c_1 = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
var_12c = zmm4_4
sub_140db3600(arg4, arg5 + 1, &var_148, rax_26, r15.b, var_180_1)
__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(arg5 + 1)
