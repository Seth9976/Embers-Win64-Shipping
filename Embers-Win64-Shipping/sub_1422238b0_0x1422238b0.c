// 函数: sub_1422238b0
// 地址: 0x1422238b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
uint32_t* r12 = arg2
int64_t* rsi = nullptr
void* rbx = **(arg1[2] + 0x40)
float zmm6[0x4] = arg3[3]
float zmm8[0x4] = arg3[6]
void* var_140 = rbx
int64_t* var_138 = nullptr
uint32_t result = zx.d(*(arg1[0x1f] + (sx.q(*arg3 + arg3[1]) << 1)))
int64_t* r15_1 = sx.q(*(arg1 + 0x114) * result) + arg1[0x1e]
int32_t* r14_1 = sx.q(arg1[6].d) + r15_1
(*(*arg1 + 0xc8))(arg1, r15_1, &arg1[0xa], &data_143dbb1f8)
int32_t i = 0
int64_t* var_188

if (*(rbx + 0x78) s> 0)
    int64_t* r12_1 = nullptr
    
    do
        int64_t* rsi_1 = *(r12_1 + *(rbx + 0x70))
        
        if (rsi_1 != 0 && rsi_1[5].b s< 0)
            var_188 = r15_1
            (*(*rsi_1 + 0x268))(rsi_1, arg1, zx.q(sub_1421b7be0(arg1, rsi_1)), zmm6, var_188)
            rbx = var_140
        
        i += 1
        r12_1 = &r12_1[1]
    while (i s< *(rbx + 0x78))
    
    rsi = var_138
    r12 = arg2

uint128_t zmm0
zmm0.d = 1f f/ *(r15_1 + 0x1c)

if (not(zmm0.d f>= 0.00100000005f))
    *(r15_1 + 0x1c) = 0x4479ffff

int64_t* rcx_3 = *(rbx + 0x48)

if (rcx_3 != 0)
    var_188 = r15_1
    (*(*rcx_3 + 0x268))(zmm0, arg1, zx.q(arg1[6].d), zmm6, var_188)

(*(*arg1 + 0xd0))(arg1, r15_1, 1f, zmm6, var_188)
int64_t* rbx_2 = *(arg1[3] + 0xc0)
void* rax_14
int64_t rax_15
void* rdx_5

if (rbx_2 != 0)
    rax_14 = sub_142546fa0()
    rdx_5 = rbx_2[2]
    rax_15 = sx.q(*(rax_14 + 0x38))

if (rbx_2 == 0 || rax_15.d s> *(rdx_5 + 0x38)
        || *(*(rdx_5 + 0x30) + (rax_15 << 3)) != rax_14 + 0x30)
    rbx_2 = nullptr

void var_128
(*(*rbx_2 + 0x408))(rbx_2, &var_128, arg1[0x49], 0)
void var_f8
(*(*rbx_2 + 0x408))(rbx_2, &var_f8, arg1[0x4a], 0)
*r14_1 |= 0xfffffff
r14_1[1] = 0
float var_e8[0x4]
float temp0[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0x55)
zmm8[0] = zmm8[0] f+ arg3[5]
float zmm4 = temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xaa)
int32_t* zmm5 = temp0_1[0].q
r14_1[3] = zmm8[0]
zmm0 = zx.o(arg3[1])
float var_118[0x4]
uint128_t zmm3
zmm3.d = var_e8.d f- var_118[0]
r14_1[9] &= 0xfffffffe
zmm0 = _mm_cvtepi32_ps(zmm0)
r14_1[6] = 1
float temp0_3[0x4] = _mm_shuffle_ps(var_118, var_118, 0x55)
zmm4 = zmm4 - temp0_3[0]
float temp0_4[0x4] = _mm_shuffle_ps(var_118, var_118, 0xaa)
r14_1[4] = zmm0.d
zmm5.d = zmm5.d f- temp0_4[0]
int32_t* var_168
var_168.d = var_118[0]
zmm0.d = zmm3.d f* zmm3.d
var_168:4.d = temp0_3[0]
int32_t* zmm1
zmm1.d = zmm5.d f* zmm5.d
float var_160 = temp0_4[0]
float temp0_5[0x4] = _mm_sqrt_ss(0, zmm4 * zmm4 f+ zmm0.d f+ zmm1.d)

if (temp0_5[0] <= 9.99999994e-09f)
    zmm3 = data_143dbb1f8
    zmm4 = data_143dbb1fc
    zmm5 = data_143dbb200
else
    int128_t zmm7
    zmm7.d = 1f / temp0_5[0]
    zmm3.d = zmm3.d f* zmm7.d
    zmm4 = zmm4 f* zmm7.d
    zmm5.d = zmm5.d f* zmm7.d

uint64_t r9_1 = zx.q(*(arg1 + 0x25c))
int32_t rax_19 = r9_1.d
int32_t var_148 = zmm5.d
uint32_t* var_150
var_150:4.d = zmm4
var_150.d = zmm3.d

if (r9_1.d == 0)
    temp0_5[0] = temp0_5[0] * 0.5f
    zmm3.d = zmm3.d f* temp0_5[0]
    zmm4 = zmm4 * temp0_5[0]
    zmm5.d = zmm5.d f* temp0_5[0]
    temp0_5[0] = temp0_5[0] f* arg1[0x4b].d
label_142223c7b:
    temp0_4[0] = temp0_4[0] f+ zmm5.d
    temp0_3[0] = temp0_3[0] + zmm4
    var_118[0] = var_118[0] f+ zmm3.d
    var_160 = temp0_4[0]
    var_168:4.d = temp0_3[0]
    var_168.d = var_118[0]
else
    if (rax_19 == 1)
        zmm0.d = arg1[0x4b].d.d f* 0.5f
        temp0_5[0] = temp0_5[0] f* zmm0.d
        zmm3.d = zmm3.d f* temp0_5[0]
        zmm4 = zmm4 * temp0_5[0]
        zmm5.d = zmm5.d f* temp0_5[0]
        goto label_142223c7b
    
    if (rax_19 == 2)
        zmm0.d = arg1[0x4b].d.d f* 0.5f
        temp0_5[0] = temp0_5[0] f* zmm0.d
        zmm3.d = zmm3.d f* temp0_5[0]
        zmm4 = zmm4 * temp0_5[0]
        zmm5.d = zmm5.d f* temp0_5[0]
        var_e8[0] = var_e8[0] f- zmm3.d
        temp0[0] = temp0[0] - zmm4
        temp0_1[0] = temp0_1[0] f- zmm5.d
        var_168.d = var_e8[0]
        var_168:4.d = temp0[0]
        var_160 = temp0_1[0]
    else
        sub_140af98a0("Unknown", 0xc82, u"Invalid Width Mode for trail: %u", r9_1)
        sub_140afbb40()

r15_1[2] = var_168
*r15_1 = var_168
r15_1[3].d = var_160
r15_1[1].d = var_160
*(r14_1 + 0x28) = var_150
r14_1[0xc] = var_148
r14_1[0x10] = temp0_5[0]
uint32_t rcx_8 = *r12

if (rcx_8 != 0xffffffff)
    rsi = sx.q(*(arg1 + 0x114) * rcx_8) + arg1[0x1e]
    void* rbx_4 = sx.q(arg1[6].d) + rsi
    int32_t rcx_9 = *rbx_4
    void* var_188_2
    int64_t* var_180_2
    void* var_178_2
    int64_t* rdx_8
    int32_t* r8_7
    int64_t* r9_3
    
    if ((rcx_9 & 0xf0000000) != 0x40000000 || (rcx_9 & 0x3fff) != 0x3fff)
        int32_t rcx_12 = (rcx_9 & 0xfffffff) | 0x20000000
        var_178_2 = rbx_4
        var_180_2 = rsi
        var_188_2 = r14_1
        *rbx_4 = ((result << 0xe ^ rcx_12) & 0xfffc000) ^ rcx_12
        r8_7 = nullptr
        *r14_1 |= 0xfffc000
        r9_3 = r15_1
        *r14_1 = ((*r12 | 0xffffc000) & 0xfffffff) | 0x40000000
        rdx_8 = nullptr
    else
        *rbx_4 = (result & 0x3fff) << 0xe | 0x80003fff
        *r14_1 |= 0xfffc000
        *r14_1 = ((*r12 | 0xffffc000) & 0xfffffff) | 0x40000000
        (*(*arg1 + 0x258))(arg1, 0, 0, r15_1, r14_1, rsi, rbx_4)
        r9_3 = rsi
        var_178_2 = nullptr
        r8_7 = r14_1
        var_180_2 = nullptr
        rdx_8 = r15_1
        var_188_2 = rbx_4
    
    (*(*arg1 + 0x258))(arg1, rdx_8, r8_7, r9_3, var_188_2, var_180_2, var_178_2)
    
    if (((*(arg1[0x47] + 0x30)).b & 6) == 2)
        int64_t rcx_15 = 0
        int32_t rdx_10 = *rbx_4 & 0x3fff
        int64_t r8_8 = 0
        
        if (rdx_10 != 0x3fff)
            rcx_15 = sx.q(*(arg1 + 0x114) * rdx_10) + arg1[0x1e]
            r8_8 = sx.q(arg1[6].d) + rcx_15
        
        (*(*arg1 + 0x258))(arg1, r15_1, r14_1, rsi, rbx_4, rcx_15, r8_8)
        *(r14_1 + 0x34) = *(rbx_4 + 0x34)
        r14_1[0xf] = *(rbx_4 + 0x3c)
else
    *r14_1 = 0x4fffffff
    *arg1[0x44] = 0
    r14_1[5] = 0
    r14_1[0x11] = 0

if (arg3[7].b == 1)
    if (*r12 != 0xffffffff)
        zmm0.d = r15_1[3].d.d f- rsi[3].d
        float zmm2 = *(r15_1 + 0x14) f- *(rsi + 0x14)
        zmm1.d = r15_1[2].d.d f- rsi[2].d
        int32_t* rax_54 = arg1[0x44]
        zmm0.d = zmm0.d f* zmm0.d
        zmm1.d = zmm1.d f* zmm1.d
        zmm0.d = _mm_sqrt_ss(0, zmm2 * zmm2 f+ zmm1.d f+ zmm0.d).d f+ *rax_54
        *rax_54 = zmm0.d
        zmm0.d = (*arg1[0x44]).d f/ *(arg1[0x47] + 0x34)
        r14_1[5] = zmm0.d
    else
        r14_1[5] = 0

*r12 = result
arg1[0x23].d += 1
__security_check_cookie(rax_1 ^ &var_1a8)
return result
