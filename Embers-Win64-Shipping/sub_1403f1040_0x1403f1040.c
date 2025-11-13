// 函数: sub_1403f1040
// 地址: 0x1403f1040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7
int128_t zmm8
int128_t var_78 = zmm8
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t r12 = sx.q(arg7)
uint64_t i_10 = zx.q(arg8)
void* rdi = arg1
void* var_100 = arg1
void* var_120 = arg1
void* rcx = arg4 + (sx.q(arg9) << 2)
int64_t rsi = 0
void* r13 = arg2
void* var_128 = rcx
int32_t* var_d8 = arg3
uint64_t i_6
int64_t var_f8
void var_e8
void var_c8

if (i_10.d s> 0)
    zmm7 = 0x3f800000
    float* rbx_1 = nullptr
    i_6 = i_10
    var_f8 = r12 << 2
    int64_t rsi_1 = var_f8
    zmm6.d = _mm_cvtepi32_ps(zx.o(r12.d)).d f* 0.00999999978f
    void* var_118_1 = &var_e8
    float* var_110_1 = nullptr
    uint64_t i
    
    do
        void* rdi_1 = &var_e8 + rbx_1
        void* rbx_3 = rcx - (sx.q(*(arg5 - &var_e8 + rdi_1) + 2) << 2)
        sub_1403f3300(rbx_3, r12.d, 5, r13)
        void var_b8
        sub_1403f38a0(rbx_3, var_128, r12.d, 5, &var_b8)
        float zmm2_1 = fconvert.s(sub_1403ed620(var_128, r12.d))
        *rdi_1 = zmm2_1
        sub_1403f3930(r13, var_118_1, (zmm2_1 f+ zmm7.d f+ *r13 f+ *(r13 + 0x60)) * 0.0166666675f, 
            5)
        sub_1403f4230(r13, 5, &var_b8, var_120)
        void* var_138_1
        var_138_1.d = 5
        float zmm0_2
        zmm0_2, zmm6, zmm7 = sub_1403f1940(var_120, r13, &var_b8, *rdi_1, var_138_1.d)
        float (* rbx_4)[0x4] = var_110_1
        float zmm1_1[0x4] = *(rbx_4 + arg6)
        *(&var_c8 + rbx_4) = zmm0_2
        zmm1_1[0] = zmm1_1[0] / (zmm1_1[0] * zmm0_2 f+ zmm6.d)
        sub_1403f3180(r13, zmm1_1, 0x19)
        var_118_1 += 4
        rcx = var_128 + rsi_1
        *(&var_f8 + rbx_4) = *(r13 + 0x30)
        rbx_1 = &(*rbx_4)[1]
        r13 += 0x64
        i = i_6
        i_6 -= 1
        var_128 = rcx
        var_120 += 0x14
        var_110_1 = rbx_1
    while (i != 1)
    i_10 = zx.q(arg8)
    rdi = var_100
    rsi = 0

int32_t* r12_1 = var_d8
double zmm0
int128_t zmm1
double zmm2
int128_t zmm3
float zmm4

if (r12_1 != 0)
    zmm4 = 9.99999997e-07f
    zmm3 = zx.o(0)
    uint32_t rbx_5 = 0
    uint64_t rax_8 = 0
    
    if (i_10.d s>= 4)
        void* rdx_9 = &var_e8 - arg6
        void* r8_3 = &var_c8 - arg6
        void var_e4
        void* r9_2 = &var_e4 - arg6
        void var_c4
        void* r10_1 = &var_c4 - arg6
        uint64_t rax_11 = zx.q(((i_10 - 4).d u>> 2) + 1)
        void* rcx_9 = arg6 + 8
        rbx_5 = (rax_11 << 2).d
        uint64_t i_9 = zx.q(rax_11.d)
        rax_8 = rax_11 << 2
        uint64_t i_1
        
        do
            zmm1 = *(rcx_9 - 8)
            zmm2 = *(rcx_9 - 4)
            rcx_9 += 0x10
            zmm0 = zmm1.q
            zmm1.d = zmm1.d f* *(r8_3 + rcx_9 - 0x18)
            zmm0.d = zmm0.d f* *(rdx_9 + rcx_9 - 0x18)
            zmm4 = zmm4 f+ zmm1.d
            zmm1 = *(rcx_9 - 0x10)
            zmm3.d = zmm3.d f+ zmm0.d
            zmm0 = zmm2
            zmm2.d = zmm2.d f* *(r10_1 + rcx_9 - 0x18)
            zmm0.d = zmm0.d f* *(r9_2 + rcx_9 - 0x18)
            zmm4 = zmm4 f+ zmm2.d
            zmm2 = *(rcx_9 - 0xc)
            zmm3.d = zmm3.d f+ zmm0.d
            zmm0 = zmm1.q
            zmm1.d = zmm1.d f* *(r8_3 + rcx_9 - 0x10)
            zmm0.d = zmm0.d f* *(rdx_9 + rcx_9 - 0x10)
            zmm3.d = zmm3.d f+ zmm0.d
            zmm0 = zmm2
            zmm2.d = zmm2.d f* *(r10_1 + rcx_9 - 0x10)
            zmm0.d = zmm0.d f* *(r9_2 + rcx_9 - 0x10)
            zmm4 = zmm4 f+ zmm1.d f+ zmm2.d
            zmm3.d = zmm3.d f+ zmm0.d
            i_1 = i_9
            i_9 -= 1
        while (i_1 != 1)
    
    if (rbx_5 s< i_10.d)
        uint64_t rcx_10 = rax_8 << 2
        uint64_t i_7 = zx.q(i_10.d - rbx_5)
        uint64_t i_2
        
        do
            void* rax_12 = &var_e8 + rcx_10
            rcx_10 += 4
            zmm1 = *(arg6 - &var_e8 + rax_12)
            zmm0 = zmm1.q
            void var_cc
            zmm1.d = zmm1.d f* *(&var_cc + rcx_10)
            zmm0.d = zmm0.d f* *rax_12
            zmm4 = zmm4 f+ zmm1.d
            zmm3.d = zmm3.d f+ zmm0.d
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    zmm3.d = zmm3.d f/ zmm4
    zmm1.d = fconvert.s(log10(fconvert.d(zmm3.d)) * 3.32192809488736)
    zmm1.d = zmm1.d f* 3f
    *r12_1 = zmm1.d

if (i_10.d s> 0)
    void* rax_13 = rdi + 8
    void* rcx_11 = &var_d8
    uint64_t i_8 = zx.q(i_10.d)
    uint64_t i_3
    
    do
        zmm0 = *(rax_13 - 8)
        rcx_11 += 4
        rax_13 += 0x14
        zmm0.d = zmm0.d f+ 0f
        zmm0.d = zmm0.d f+ *(rax_13 - 0x18)
        zmm0.d = zmm0.d f+ *(rax_13 - 0x14)
        zmm0.d = zmm0.d f+ *(rax_13 - 0x10)
        zmm0.d = zmm0.d f+ *(rax_13 - 0xc)
        *(rcx_11 - 4) = zmm0.d
        i_3 = i_8
        i_8 -= 1
    while (i_3 != 1)

zmm2 = 0.00100000005f
int64_t rcx_12 = sx.q(i_10.d)
int64_t i_4 = 0

if (rcx_12 s>= 4)
    do
        zmm2.d = zmm2.d f+ *(&var_f8 + (i_4 << 2))
        i_4 += 4
        zmm2.d = zmm2.d f+ *(&i_6:4 + (i_4 << 2))
        zmm2.d = zmm2.d f+ *(&var_100 + (i_4 << 2))
        zmm2.d = zmm2.d f+ *(&var_100:4 + (i_4 << 2))
    while (i_4 s< rcx_12 - 3)

for (; i_4 s< rcx_12; i_4 += 1)
    zmm2.d = zmm2.d f+ *(&var_f8 + (i_4 << 2))

zmm3 = zx.o(0)
void* i_5 = nullptr

if (rcx_12 s>= 4)
    do
        zmm1 = *(&var_d8 + (i_5 << 2))
        zmm0 = *(&var_d8:4 + (i_5 << 2))
        i_5 += 4
        zmm1.d = zmm1.d f* *(&i_6 + (i_5 << 2))
        zmm0.d = zmm0.d f* *(&i_6:4 + (i_5 << 2))
        zmm1.d = zmm1.d f+ zmm3.d
        zmm3.d = zmm1.d f+ zmm0.d
        void var_e0
        zmm1.d = (*(&var_e0 + (i_5 << 2))).d f* *(&var_100 + (i_5 << 2))
        void var_dc
        zmm0.d = (*(&var_dc + (i_5 << 2))).d f* *(&var_100:4 + (i_5 << 2))
        zmm3.d = zmm3.d f+ zmm1.d
        zmm3.d = zmm3.d f+ zmm0.d
    while (i_5 s< rcx_12 - 3)

while (i_5 s< rcx_12)
    zmm0 = *(&var_d8 + (i_5 << 2))
    i_5 += 1
    zmm0.d = zmm0.d f* *(&var_100:4 + (i_5 << 2))
    zmm3.d = zmm3.d f+ zmm0.d

zmm3.d = zmm3.d f/ zmm2.d

if (rcx_12 s> 0)
    int128_t zmm9
    int128_t var_88_1 = zmm9
    i_5 = rdi + 8
    
    do
        zmm9 = *(i_5 - 8)
        zmm1.d = zmm3.d f- *(&var_d8 + (rsi << 2))
        zmm0.d = (*(&var_f8 + (rsi << 2))).d f+ 0.100000001f
        zmm4 = 0.100000001f f/ zmm0.d f* zmm1.d
        
        zmm8 = zmm9.d f<= 0.100000001f ? 0x3dcccccd : zmm9
        
        zmm6 = *(i_5 - 4)
        zmm0.d = zmm8.q.d f+ 0f
        
        if (not(zmm6.d f> 0.100000001f))
            zmm6 = 0x3dcccccd
        
        zmm1 = *i_5
        zmm0.d = zmm0.d f+ zmm6.d
        
        if (not(zmm1.d f> 0.100000001f))
            zmm1 = 0x3dcccccd
        
        float zmm5 = *(i_5 + 4)
        zmm0.d = zmm0.d f+ zmm1.d
        
        if (not(zmm5 > 0.100000001f))
            zmm5 = 0.100000001f
        
        zmm7 = *(i_5 + 8)
        zmm0.d = zmm0.d f+ zmm5
        
        if (not(zmm7.d f> 0.100000001f))
            zmm7 = 0x3dcccccd
        
        zmm0.d = zmm0.d f+ zmm7.d
        rsi += 1
        i_5 += 0x14
        zmm4 = zmm4 f/ zmm0.d
        zmm8.d = zmm8.d f* zmm4
        zmm6.d = zmm6.d f* zmm4
        zmm1.d = zmm1.d f* zmm4
        zmm8.d = zmm8.d f+ zmm9.d
        *(i_5 - 0x1c) = zmm8.d
        zmm6.d = zmm6.d f+ *(i_5 - 0x18)
        zmm1.d = zmm1.d f+ *(i_5 - 0x14)
        zmm7.d = zmm7.d f* zmm4
        zmm5 = zmm5 * zmm4 f+ *(i_5 - 0x10)
        zmm7.d = zmm7.d f+ *(i_5 - 0xc)
        *(i_5 - 0x18) = zmm6.d
        *(i_5 - 0x14) = zmm1.d
        *(i_5 - 0x10) = zmm5
        *(i_5 - 0xc) = zmm7.d
    while (rsi s< rcx_12)

__security_check_cookie(rax_1 ^ &var_158)
return i_5
