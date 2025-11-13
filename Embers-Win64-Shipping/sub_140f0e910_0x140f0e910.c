// 函数: sub_140f0e910
// 地址: 0x140f0e910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
float zmm7[0x4]
float var_48[0x4] = zmm7
int128_t zmm8
int128_t var_58 = zmm8
int128_t zmm9
int128_t var_68 = zmm9
char r14 = (arg10 ^ 1) << 5
bool cond:0 = 0f f>= *(arg1 + 0x11c)
int64_t* var_168 = arg5
float zmm0
float zmm1[0x4]

if (not(cond:0))
    zmm0 = *(arg1 + 0x10c)
    zmm1 = *(arg1 + 0x108)
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm1[0] = zmm1[0] + zmm0 * zmm0

int64_t rsi

if (cond:0 || zmm1[0] <= 0f)
    rsi.b = 0
else
    rsi.b = 1

int64_t* rcx = *arg4
void var_118
(*(*rcx + 0x38))(rcx, &var_118)
int64_t* rcx_1 = *arg4
int32_t var_148
(*(*rcx_1 + 0x10))(rcx_1, &var_148)
zmm1 = *(arg1 + 0x10c)
bool cond:2 = zmm1[0] <= 0f
zmm0 = *(arg6 + 8)
int128_t zmm14
zmm14.d = 1f / zmm0
zmm1[0] = zmm1[0] * zmm0
float zmm15[0x4]

if (cond:2)
    zmm15 = zx.o(0)
else
    zmm15 = zmm1

float zmm11[0x4] = *(arg1 + 0x108)
float zmm13[0x4]

if (zmm11[0] <= 0f)
    zmm13 = zx.o(0)
else
    zmm13 = zmm11
    zmm13[0] = zmm13[0] * zmm0

float zmm12[0x4]

if (zmm1[0] >= 0f)
    zmm12 = zx.o(0)
else
    zmm12 = zmm1 ^ 0x80000000

if (zmm11[0] >= 0f)
    zmm11 = zx.o(0)
else
    zmm11[0] = zmm11[0] * zmm0
    zmm11 ^= 0x80000000

int32_t var_144
int64_t var_138
sub_140eec190(&var_138, var_144 - var_148)
int32_t rsi_1 = arg8
float var_178
int32_t var_130
void var_128
void var_120
float var_110
char var_dc
int64_t* r12_2
float zmm0_1[0x4]
float zmm2
float zmm3

if (rsi.b == 0)
    r12_2 = &arg5[1]
else
    zmm0_1 = *(arg1 + 0x110)
    rsi_1 += 1
    zmm0_1[0] = zmm0_1[0] f* *arg9
    int64_t* rcx_3 = *arg4
    zmm1 = *(arg1 + 0x114)
    zmm1[0] = zmm1[0] f* arg9[1]
    var_178 = zmm0_1[0]
    zmm0_1 = *(arg1 + 0x118)
    zmm0_1[0] = zmm0_1[0] f* arg9[2]
    float var_174_1 = zmm1[0]
    zmm1 = *(arg1 + 0x11c)
    zmm1[0] = zmm1[0] f* arg9[3]
    float var_170_1 = zmm0_1[0]
    float var_16c_1 = zmm1[0]
    int32_t r12_1
    
    if (var_130 == 0)
        r12_1 = 0
    else
        r12_1 = var_130 - 1
    
    int32_t* rax_7 = (*(*rcx_3 + 0x38))(rcx_3, &var_128)
    zmm13[0] = zmm13[0] f+ *rax_7
    zmm15[0] = zmm15[0] f+ rax_7[1]
    int64_t rax_8 = *rcx_3
    zmm13[0] = zmm13[0] f* zmm14.d
    zmm15[0] = zmm15[0] f* zmm14.d
    int32_t* rax_9 = (*(rax_8 + 0x18))(rcx_3, &var_120)
    zmm8 = *(arg6 + 8)
    int32_t zmm4_1 = *(arg6 + 0x24)
    zmm2 = *(arg6 + 0x1c)
    zmm3 = *(arg6 + 0x28)
    zmm1 = *(arg6 + 0x20)
    char rcx_5 = *(arg6 + 0x34)
    zmm15[0] = zmm15[0] f* zmm4_1
    zmm13[0] = zmm13[0] * zmm2
    int128_t zmm10
    zmm10.d = zmm14.d f* *rax_9
    zmm9.d = zmm14.d f* rax_9[1]
    zmm13[0] = zmm13[0] + zmm15[0]
    zmm13[0] = zmm13[0] * zmm1[0]
    int64_t* rax_12 = &var_168[1]
    zmm15[0] = zmm15[0] * zmm3
    var_dc = ((rcx_5 & 1) * 2) | (var_dc & 0xfc)
    zmm13[0] = zmm13[0] f+ *(arg6 + 0x2c)
    float* var_188_1 = &var_178
    zmm13[0] = zmm13[0] + zmm15[0]
    int64_t* var_158_1
    var_158_1.d = zmm2
    var_158_1:4.d = zmm1[0]
    zmm13[0] = zmm13[0] f+ *(arg6 + 0x30)
    int32_t var_150_1 = zmm4_1
    float var_14c_1 = zmm3
    zmm13[0] = zmm13[0] f* zmm8.d
    int64_t var_104_1 = 0
    float var_f4_1[0x4] = var_158_1.o
    var_168 = rax_12
    zmm15[0] = zmm15[0] f* zmm8.d
    int32_t var_1a8_1 = 0
    zmm13[0] = zmm13[0] f+ *(arg6 + 0xc)
    zmm0_1 = _mm_unpacklo_ps(zmm13, zmm13[0].q)
    zmm15[0] = zmm15[0] f+ *(arg6 + 0x10)
    int64_t var_e4_1 = zmm0_1.q
    int32_t var_108_1 = zmm8.d
    var_110 = zmm13[0]
    int32_t var_fc_1 = zmm10.d
    float var_10c_1 = zmm15[0]
    int32_t var_f8_1 = zmm9.d
    sub_140db40e0(arg7, rsi_1, &var_110, &var_138, var_1a8_1, r12_1, rax_12, r14, var_188_1)
    r12_2 = var_168

uint32_t rcx_7 = zx.d(*(arg1 + 0xf0))
int64_t* r15_1 = *arg4
void* rbx_1

if (rcx_7 == 0)
    rbx_1 = arg1 + 0xe0
else if (rcx_7 == 1)
    rbx_1 = *(arg1 + 0xf8)
else if (rcx_7 == 3)
    rbx_1 = &arg9[8]
else
    rbx_1 = &arg9[4]

zmm1 = *(rbx_1 + 4)
zmm0_1 = *rbx_1
zmm3 = *(rbx_1 + 0xc) f* arg9[3]
zmm2 = *(rbx_1 + 8) f* arg9[2]
zmm1[0] = zmm1[0] f* arg9[1]
zmm0_1[0] = zmm0_1[0] f* *arg9
var_168:4.d = zmm1[0]
float var_160 = zmm2
var_168.d = zmm0_1[0]
float var_15c = zmm3
int32_t rbx_2

if (var_130 == 0)
    rbx_2 = 0
else
    rbx_2 = var_130 - 1

int32_t* rax_15 = (*(*r15_1 + 0x38))(r15_1, &var_120)
zmm11[0] = zmm11[0] f+ *rax_15
zmm12[0] = zmm12[0] f+ rax_15[1]
int64_t rax_16 = *r15_1
zmm11[0] = zmm11[0] f* zmm14.d
zmm12[0] = zmm12[0] f* zmm14.d
int32_t* rax_17 = (*(rax_16 + 0x18))(r15_1, &var_128)
zmm8 = *(arg6 + 8)
int32_t zmm4_2 = *(arg6 + 0x24)
zmm2 = *(arg6 + 0x1c)
zmm3 = *(arg6 + 0x28)
zmm1 = *(arg6 + 0x20)
char rdx_9 = *(arg6 + 0x34) & 1
zmm12[0] = zmm12[0] f* zmm4_2
zmm11[0] = zmm11[0] * zmm2
zmm9.d = zmm14.d f* *rax_17
zmm14.d = zmm14.d f* rax_17[1]
zmm11[0] = zmm11[0] + zmm12[0]
zmm11[0] = zmm11[0] * zmm1[0]
zmm12[0] = zmm12[0] * zmm3
int64_t** var_188_2 = &var_168
zmm11[0] = zmm11[0] f+ *(arg6 + 0x2c)
var_178 = zmm2
zmm11[0] = zmm11[0] + zmm12[0]
float var_174_2 = zmm1[0]
int32_t var_170_2 = zmm4_2
float var_16c_2 = zmm3
zmm0_1 = var_178.o
char var_dc_1 = (rdx_9 * 2) | (var_dc & 0xfc)
zmm11[0] = zmm11[0] f+ *(arg6 + 0x30)
float var_f4_2[0x4] = zmm0_1
zmm11[0] = zmm11[0] f* zmm8.d
zmm0_1 = _mm_unpacklo_ps(zmm11, zmm11[0].q)
zmm12[0] = zmm12[0] f* zmm8.d
int64_t var_104_2 = 0
zmm11[0] = zmm11[0] f+ *(arg6 + 0xc)
int64_t var_e4_2 = zmm0_1.q
zmm12[0] = zmm12[0] f+ *(arg6 + 0x10)
int32_t var_108_2 = zmm8.d
int32_t var_fc_2 = zmm9.d
var_110 = zmm11[0]
int32_t var_f8_2 = zmm14.d
float var_10c_2 = zmm12[0]
sub_140db40e0(arg7, rsi_1 + 1, &var_110, &var_138, 0, rbx_2, r12_2, r14, var_188_2)
int64_t rcx_12 = var_138

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(rsi_1 + 1)
