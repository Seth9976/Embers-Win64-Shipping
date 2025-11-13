// 函数: sub_141c6e280
// 地址: 0x141c6e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg2 + 0x10)
int32_t var_cc
int32_t rdi_1 = var_cc | 1
float (* var_c8)[0x4] = nullptr
int32_t var_bc = 0
int32_t var_cc_1 = rdi_1
float var_d8

if (not(zmm0 >= 20f))
    var_d8 = 20f
else if (zmm0 >= 20000f)
    var_d8 = 20000f
else
    var_d8 = zmm0

zmm0 = *(arg2 + 0x18)

if (not(zmm0 >= 0.100000001f))
    int32_t var_d4 = 0x3dcccccd
else if (zmm0 >= 2f)
    int32_t var_d4_2 = 0x40000000
else
    float var_d4_1 = zmm0

zmm0 = *(arg2 + 0x14)
float zmm7[0x4] = 0x3a83126f

if (zmm0 >= 0.00100000005f)
    zmm0 = _mm_min_ss(zmm0, 0x40fe147b)
else
    zmm0 = 0.00100000005f

int32_t var_c0 = 1
int128_t zmm6
zmm6.d = logf(_mm_max_ss(zmm0, 0x322bcc77)).d f* 8.68588924f
sub_1405a4f90(&var_c8)
float zmm1[0x4] = var_d8.o
float (* rsi)[0x4] = var_c8
int32_t rdi_2 = rdi_1 | 1
float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
temp0_3[0] = zmm6.d
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
*rsi = temp0_4
float zmm0_2 = *(arg2 + 0x1c)
var_d8.o = temp0_4
int32_t var_cc_2 = rdi_2
float var_d8_1

if (not(zmm0_2 >= 20f))
    var_d8_1 = 20f
else if (zmm0_2 >= 20000f)
    var_d8_1 = 20000f
else
    var_d8_1 = zmm0_2

zmm0_2 = *(arg2 + 0x24)

if (not(zmm0_2 >= 0.100000001f))
    int32_t var_d4_3 = 0x3dcccccd
else if (zmm0_2 >= 2f)
    int32_t var_d4_5 = 0x40000000
else
    float var_d4_4 = zmm0_2

zmm0_2 = *(arg2 + 0x20)

if (zmm0_2 >= 0.00100000005f)
    zmm0_2 = _mm_min_ss(zmm0_2, 0x40fe147b)
else
    zmm0_2 = 0.00100000005f

float zmm0_3[0x4] = logf(_mm_max_ss(zmm0_2, 0x322bcc77))
int64_t r14 = sx.q(var_c0)
int32_t r12 = var_bc
zmm0_3[0] = zmm0_3[0] * 8.68588924f
int32_t r15 = (r14 + 1).d
float var_d0 = zmm0_3[0]

if (r15 s> r12)
    sub_1405a4f90(&var_c8)
    r12 = var_bc
    rsi = var_c8

int32_t rdi_3 = rdi_2 | 1
int32_t var_cc_3 = rdi_3
rsi[r14] = var_d8_1.o
zmm0_3 = *(arg2 + 0x28)
float var_d8_2

if (not(zmm0_3[0] >= 20f))
    var_d8_2 = 20f
else if (zmm0_3[0] >= 20000f)
    var_d8_2 = 20000f
else
    var_d8_2 = zmm0_3[0]

zmm0_3 = *(arg2 + 0x30)

if (not(zmm0_3[0] >= 0.100000001f))
    int32_t var_d4_6 = 0x3dcccccd
else if (zmm0_3[0] >= 2f)
    int32_t var_d4_8 = 0x40000000
else
    float var_d4_7 = zmm0_3[0]

zmm0_3 = *(arg2 + 0x2c)

if (zmm0_3[0] >= 0.00100000005f)
    zmm0_3 = _mm_min_ss(zmm0_3[0], 0x40fe147b)
else
    zmm0_3 = 0x3a83126f

float zmm0_4[0x4] = logf(_mm_max_ss(zmm0_3[0], 0x322bcc77)[0])
int32_t r14_1 = r15 + 1
zmm0_4[0] = zmm0_4[0] * 8.68588924f
float var_d0_1 = zmm0_4[0]

if (r14_1 s> r12)
    sub_1405a4f90(&var_c8)
    r12 = var_bc
    rsi = var_c8

int32_t var_cc_4 = rdi_3 | 1
rsi[sx.q(r15)] = var_d8_2.o
zmm0_4 = *(arg2 + 0x34)
float var_d8_3

if (not(zmm0_4[0] >= 20f))
    var_d8_3 = 20f
else if (zmm0_4[0] >= 20000f)
    var_d8_3 = 20000f
else
    var_d8_3 = zmm0_4[0]

zmm0_4 = *(arg2 + 0x3c)

if (not(zmm0_4[0] >= 0.100000001f))
    int32_t var_d4_9 = 0x3dcccccd
else if (zmm0_4[0] >= 2f)
    int32_t var_d4_11 = 0x40000000
else
    float var_d4_10 = zmm0_4[0]

zmm0_4 = *(arg2 + 0x38)

if (not(zmm0_4[0] < 0.00100000005f))
    zmm7 = _mm_min_ss(zmm0_4[0], 0x40fe147b)

uint32_t zmm0_5[0x4] = logf(_mm_max_ss(zmm7[0], 0x322bcc77)[0])
int32_t rbx_1 = r14_1 + 1
zmm0_5[0] = zmm0_5[0] f* 8.68588924f
uint32_t var_d0_2 = zmm0_5[0]

if (rbx_1 s> r12)
    sub_1405a4f90(&var_c8)
    rsi = var_c8

rsi[sx.q(r14_1)] = var_d8_3.o

if (*(arg1 + 0xe8) != rbx_1)
label_141c6e679:
    
    if (arg1 + 0xe0 != &var_c8)
        int32_t r8_2 = *(arg1 + 0xec)
        *(arg1 + 0xe8) = rbx_1
        
        if (rbx_1 != 0 || r8_2 != 0)
            sub_1405a4be0(arg1 + 0xe0, rbx_1, r8_2)
            memcpy(*(arg1 + 0xe0), rsi, rbx_1 << 4)
        else
            *(arg1 + 0xec) = rbx_1
    
    EnterCriticalSection(arg1 + 0xb8)
    *(arg1 + 0xa0) = 1
    sub_1405b0be0(arg1 + 0xa8, arg1 + 0xe0)
    
    if (arg1 != -0xb8)
        LeaveCriticalSection(arg1 + 0xb8)
else
    int32_t r8_1 = 0
    
    if (rbx_1 s> 0)
        void* r9_1 = *(arg1 + 0xe0)
        float* rcx_4 = &(*rsi)[1]
        void* rdx_4 = r9_1 + 4
        
        do
            if (((rcx_4[2] ^ *(rdx_4 + 8)).b & 1) != 0)
                goto label_141c6e679
            
            zmm0_5 = *rcx_4
            zmm0_5[0] = zmm0_5[0] f- *rdx_4
            
            if (_mm_and_ps(zmm0_5, 0x7fffffff)[0] f> 9.99999994e-09f)
                goto label_141c6e679
            
            zmm0_5 = rcx_4[-1]
            zmm0_5[0] = zmm0_5[0] f- *(r9_1 - rsi + rcx_4 - 4)
            
            if (_mm_and_ps(zmm0_5, 0x7fffffff)[0] f> 9.99999994e-09f)
                goto label_141c6e679
            
            zmm0_5 = rcx_4[1]
            zmm0_5[0] = zmm0_5[0] f- *(rdx_4 + 4)
            
            if (_mm_and_ps(zmm0_5, 0x7fffffff)[0] f> 9.99999994e-09f)
                goto label_141c6e679
            
            r8_1 += 1
            rcx_4 = &rcx_4[4]
            rdx_4 += 0x10
        while (r8_1 s< rbx_1)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t result
result.b = 1
return result
