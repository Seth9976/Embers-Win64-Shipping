// 函数: sub_1419e6370
// 地址: 0x1419e6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
float zmm6[0x4] = *(arg1 + 0x44)
float zmm8[0x4] = arg1[9].d
float zmm10[0x4] = arg1[6].d
int128_t zmm12 = *(arg1 + 0x34)
int128_t zmm0
zmm0.d = (*(arg1 + 0x3c)).d f- zmm12.d
int128_t zmm13 = arg1[7].d
int128_t zmm14 = *(arg1 + 0x3c)
zmm0.d = zmm0.d f* 0.5f
int128_t zmm15
zmm15.d = arg1[7].d.d f- zmm10[0]
zmm8[0] = zmm8[0] f- zmm0.d
int128_t zmm1
zmm1.d = zmm0.d f+ zmm8[0]
zmm15.d = zmm15.d f* 0.5f
zmm6[0] = zmm6[0] f- zmm15.d
int32_t var_100 = zmm1.d
zmm15.d = zmm15.d f+ zmm6[0]
int64_t* rax_2 = j_sub_140a82f30(0x58)
void* const rcx = rax_2
float var_118[0x4]

if (rax_2 == 0)
    rcx = nullptr
else
    zmm1 = *(arg1 + 0x4c)
    zmm6[0] = zmm6[0] + zmm6[0]
    *rax_2 = 0
    rax_2[1] = 0
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_1[0] = zmm8[0]
    char var_108_1 = 1
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm6[0]
    zmm6[0] = zmm6[0] * 0.5f
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = var_100
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
    *(rax_2 + 0x30) = temp0_4
    *(rcx + 0x40) = var_108_1.d
    *(rcx + 0x44) = zmm6[0]
    var_118 = temp0_4
    zmm8[0] = zmm8[0] f+ var_100
    zmm8[0] = zmm8[0] * 0.5f
    *(rcx + 0x48) = zmm8[0]
    *(rcx + 0x4c) = zmm1.d
    *(rcx + 0x50) = 0
    __builtin_memset(rcx + 0x10, 0, 0x20)

arg1[2] = rcx
int64_t* rax_4 = j_sub_140a82f30(0x58)
int64_t* rcx_1 = rax_4

if (rax_4 == 0)
    rcx_1 = nullptr
else
    zmm1 = *(arg1 + 0x4c)
    *rax_4 = 0
    rax_4[1] = 0
    float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_5[0] = zmm8[0]
    char var_108_2 = 1
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
    temp0_6[0] = zmm13.d
    zmm13.d = zmm13.d f+ zmm6[0]
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
    temp0_7[0] = zmm14.d
    zmm14.d = zmm14.d f+ zmm8[0]
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
    *(rax_4 + 0x30) = temp0_8
    rcx_1[8].d = var_108_2.d
    zmm14.d = zmm14.d f* 0.5f
    zmm13.d = zmm13.d f* 0.5f
    rcx_1[9].d = zmm14.d
    var_118 = temp0_8
    *(rcx_1 + 0x44) = zmm13.d
    *(rcx_1 + 0x4c) = zmm1.d
    rcx_1[0xa].b = 0
    __builtin_memset(&rcx_1[2], 0, 0x20)

arg1[3] = rcx_1
int64_t* rax_6 = j_sub_140a82f30(0x58)
int64_t* rcx_2 = rax_6

if (rax_6 == 0)
    rcx_2 = nullptr
else
    zmm1 = *(arg1 + 0x4c)
    *rax_6 = 0
    zmm10[0] = zmm10[0] + zmm6[0]
    rax_6[1] = 0
    float temp0_9[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
    temp0_9[0] = zmm12.d
    char var_108_3 = 1
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
    zmm12.d = zmm12.d f+ zmm8[0]
    temp0_10[0] = zmm6[0]
    zmm10[0] = zmm10[0] * 0.5f
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
    temp0_11[0] = zmm8[0]
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
    *(rax_6 + 0x30) = temp0_12
    rcx_2[8].d = var_108_3.d
    *(rcx_2 + 0x44) = zmm10[0]
    zmm12.d = zmm12.d f* 0.5f
    var_118 = temp0_12
    rcx_2[9].d = zmm12.d
    *(rcx_2 + 0x4c) = zmm1.d
    rcx_2[0xa].b = 0
    __builtin_memset(&rcx_2[2], 0, 0x20)

arg1[4] = rcx_2
int64_t* rax_8 = j_sub_140a82f30(0x58)
int64_t* rcx_3 = rax_8

if (rax_8 == 0)
    rcx_3 = nullptr
else
    zmm1 = *(arg1 + 0x4c)
    *rax_8 = 0
    zmm6[0] = zmm6[0] f+ zmm15.d
    rax_8[1] = 0
    float temp0_13[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_13[0] = zmm8[0]
    char var_108_4 = 1
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
    zmm8[0] = zmm8[0] + zmm8[0]
    temp0_14[0] = zmm15.d
    zmm6[0] = zmm6[0] * 0.5f
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
    temp0_15[0] = zmm8[0]
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
    *(rax_8 + 0x30) = temp0_16
    rcx_3[8].d = var_108_4.d
    *(rcx_3 + 0x44) = zmm6[0]
    zmm8[0] = zmm8[0] * 0.5f
    var_118 = temp0_16
    rcx_3[9].d = zmm8[0]
    *(rcx_3 + 0x4c) = zmm1.d
    rcx_3[0xa].b = 0
    __builtin_memset(&rcx_3[2], 0, 0x20)

int64_t r12 = 0
int32_t r15 = 0
float r13 = 0f
arg1[5] = rcx_3
arg1[0xa].b = 1
float (* i)[0x4] = *arg1
void* r11_2 = &i[sx.q(arg1[1].d) * 2]
var_118[0].q = 0
var_118[3] = 0
var_100.q = r11_2

for (; i != r11_2; i = &i[2])
    int32_t rcx_4 = 0
    int64_t rdx_1 = 0
    int64_t* rdi_1
    
    if (arg1[0xa].b != 0)
        zmm1 = *(arg1 + 0x44)
        bool cond:0_1 = zmm1.d f>= *i
        float zmm0_4[0x4] = arg1[9].d
        rax_8.b = zmm0_4[0] >= (*i)[1]
        bool r10_1 = zmm1.d f<= (*i)[2]
        bool r9_1 = zmm0_4[0] <= (*i)[3]
        int64_t var_f8[0x4]
        
        if (cond:0_1 == 0 || rax_8.b == 0)
            rdi_1 = var_f8[0]
        else
            rdi_1 = arg1[4]
            rcx_4 = 1
            var_f8[0] = rdi_1
            rdx_1 = 1
        
        if (r10_1 != 0 && rax_8.b != 0)
            rcx_4 += 1
            var_f8[rdx_1] = arg1[5]
            rdx_1 += 1
            rdi_1 = var_f8[0]
        
        if (cond:0_1 != 0 && r9_1 != 0)
            rcx_4 += 1
            var_f8[rdx_1] = arg1[2]
            rdx_1 += 1
            rdi_1 = var_f8[0]
        
        if (r10_1 != 0 && r9_1 != 0)
            rcx_4 += 1
            var_f8[rdx_1] = arg1[3]
            rdi_1 = var_f8[0]
    
    if (arg1[0xa].b == 0 || rcx_4 != 1)
        int64_t rdi_2 = sx.q(r15)
        r15 = (rdi_2 + 1).d
        var_118[2] = r15
        
        if (r15 s> r13)
            sub_1405c4e40(&var_118)
            r11_2 = var_100.q
            r15 = var_118[2]
            r12 = var_118[0].q
        
        rax_8 = rdi_2 << 5
        *(rax_8 + r12) = *i
        *(rax_8 + r12 + 0x10) = i[1]
    else
        int64_t r13_1 = sx.q(rdi_1[1].d)
        int32_t rax_12 = (r13_1 + 1).d
        rdi_1[1].d = rax_12
        
        if (rax_12 s> *(rdi_1 + 0xc))
            sub_1405c4e40(rdi_1)
            r11_2 = var_100.q
        
        rax_8 = *rdi_1
        int128_t* rcx_7 = r13_1 << 5
        *(rcx_7 + rax_8) = *i
        *(rcx_7 + rax_8 + 0x10) = i[1]
    
    r13 = var_118[3]

float (* result)[0x4] = &var_118

if (arg1 != &var_118)
    int32_t r8_2 = *(arg1 + 0xc)
    arg1[1].d = r15
    
    if (r15 != 0 || r8_2 != 0)
        sub_14083a1f0(arg1, r15, r8_2)
        result = memcpy(*arg1, r12, r15 << 5)
    else
        *(arg1 + 0xc) = 0

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_138)
return result
