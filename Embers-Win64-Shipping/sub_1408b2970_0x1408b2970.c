// 函数: sub_1408b2970
// 地址: 0x1408b2970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = *arg2
int32_t rcx = 0
uint128_t result_10 = *(arg2 + 8)
uint128_t result_12 = *(arg2 + 0xc)
uint128_t zmm9 = *(arg2 + 4)
uint128_t result
result.d = result_12.d f+ result_10.d
uint128_t result_1
result_1.d = zmm4.d f+ zmm9.d
result.d = result.d f+ result_1.d
result.d = result.d f* 0.309017003f
result_1.d = zmm4.d f+ result.d
result_1.d = result_1.d f+ result_1.d
result_1.d = result_1.d f- 0.5f
int32_t r9 = int.d(result_1.d)
result_1.d = zmm9.d f+ result.d
int32_t r9_1 = r9 s>> 1
result_1.d = result_1.d f+ result_1.d
result_1.d = result_1.d f- 0.5f
int32_t r10 = int.d(result_1.d)
result_1.d = result_10.d f+ result.d
int32_t r10_1 = r10 s>> 1
result_1.d = result_1.d f+ result_1.d
result_1.d = result_1.d f- 0.5f
int32_t r11 = int.d(result_1.d)
result_1.d = result_12.d f+ result.d
int32_t r11_1 = r11 s>> 1
result_1.d = result_1.d f+ result_1.d
result_1.d = result_1.d f- 0.5f
uint128_t result_7 = _mm_cvtepi32_ps(zx.o(r10_1))
int32_t rbx_1 = int.d(result_1.d) s>> 1
result_1 = _mm_cvtepi32_ps(zx.o(r9_1))
result.d = _mm_cvtepi32_ps(zx.o(rbx_1 + r11_1 + r10_1 + r9_1)).d f* 0.138196602f
result_1.d = result_1.d f- result.d
result_7.d = result_7.d f- result.d
zmm4.d = zmm4.d f- result_1.d
zmm9.d = zmm9.d f- result_7.d
result_1 = _mm_cvtepi32_ps(zx.o(r11_1))
result_7 = _mm_cvtepi32_ps(zx.o(rbx_1))

if (zmm4.d f> zmm9.d)
    rcx = 0x80

int32_t rax_3 = 0
result_1.d = result_1.d f- result.d
int32_t result_22 = zmm4.d
result_7.d = result_7.d f- result.d
result_10.d = result_10.d f- result_1.d
result_12.d = result_12.d f- result_7.d

if (result_10.d f> result_12.d)
    rax_3 = 4

int32_t rax_4 = 0

if (zmm4.d f> result_10.d)
    rax_4 = 0x40

int32_t rax_5 = 0

if (zmm9.d f> result_12.d)
    rax_5 = 8

int32_t rax_6 = 0

if (zmm4.d f> result_12.d)
    rax_6 = 0x10

int32_t rax_7 = 0

if (zmm9.d f> result_10.d)
    rax_7 = 0x20

uint64_t rax_8 = zx.q(rax_7 + rcx + rax_3 + rax_4 + rax_5 + rax_6)
uint64_t rdx = zx.q(rax_8.d)
char rax_9 = *(rax_8 + &data_142e002e0)
int32_t r8
r8.b = rax_9 u>= 3
int32_t rbp
rbp.b = rax_9 u>= 2
char rax_10 = *(rdx + 0x142e002e1)
int32_t rsi
rsi.b = rax_9 u>= 1
result_1 = _mm_cvtepi32_ps(zx.o(r8))
int32_t rsi_1
rsi_1.b = rax_10 u>= 3
int32_t r13
r13.b = rax_10 u>= 2
char rax_11 = *(zx.q(rax_8.d) + 0x142e002e2)
int32_t r14
r14.b = rax_10 u>= 1
result_7.d = zmm4.d f- result_1.d
int32_t r14_1
r14_1.b = rax_11 u>= 3
result_1 = _mm_cvtepi32_ps(zx.o(rsi_1))
int32_t rcx_6
rcx_6.b = rax_11 u>= 2
char rax_12 = *(rdx + 0x142e002e3)
int32_t r15
r15.b = rax_11 u>= 1
result_7.d = result_7.d f+ 0.138196602f
uint128_t result_16
result_16.d = zmm9.d f- result_1.d
int32_t r15_1
r15_1.b = rax_12 u>= 3
int32_t rdx_1
rdx_1.b = rax_12 u>= 2
int32_t r12
r12.b = rax_12 u>= 1
int32_t result_17 = result_7.d
result_16.d = result_16.d f+ 0.138196602f
uint128_t result_11
result_11.d = result_10.d f- _mm_cvtepi32_ps(zx.o(r14_1)).d
result_11.d = result_11.d f+ 0.138196602f
uint128_t result_3
result_3.d = result_12.d f- _mm_cvtepi32_ps(zx.o(r15_1)).d
result_3.d = result_3.d f+ 0.138196602f
result.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(rbp)).d
result.d = result.d f+ 0.276393205f
int32_t result_18 = result.d
result.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(r13)).d
result.d = result.d f+ 0.276393205f
uint128_t result_9
result_9.d = result_10.d f- _mm_cvtepi32_ps(zx.o(rcx_6)).d
int32_t result_4 = result.d
result_9.d = result_9.d f+ 0.276393205f
uint128_t result_14
result_14.d = result_12.d f- _mm_cvtepi32_ps(zx.o(rdx_1)).d
result_14.d = result_14.d f+ 0.276393205f
result.d = zmm4.d f- _mm_cvtepi32_ps(zx.o(rsi)).d
result.d = result.d f+ 0.414589792f
int32_t result_5 = result.d
result.d = zmm9.d f- _mm_cvtepi32_ps(zx.o(r14)).d
result.d = result.d f+ 0.414589792f
int32_t result_19 = result.d
result.d = result_10.d f- _mm_cvtepi32_ps(zx.o(r15)).d
result.d = result.d f+ 0.414589792f
uint128_t result_2
result_2.d = result_12.d f- _mm_cvtepi32_ps(zx.o(r12)).d
uint128_t result_8
result_8.d = result_10.d f- 0.44721359f
uint128_t result_13
result_13.d = result_12.d f- 0.44721359f
result_2.d = result_2.d f+ 0.414589792f
result_7.d = zmm4.d f- 0.44721359f
int32_t result_6 = result_8.d
result_8 = zx.o(0)
int32_t result_20 = result_7.d
result_7.d = zmm9.d f- 0.44721359f
result_1.d = zmm4.d f* zmm4.d
uint128_t result_15
result_15.d = 0.600000024f f- result_1.d
int32_t result_21 = result_7.d
result_1.d = zmm9.d f* zmm9.d
result_7.d = result_10.d f* result_10.d
result_15.d = result_15.d f- result_1.d
result_1.d = result_12.d f* result_12.d
result_15.d = result_15.d f- result_7.d
result_15.d = result_15.d f- result_1.d

if (result_15.d f>= 0f)
    result_7 = zmm9.d
    result_1 = result_7
    result_15.d = result_15.d f* result_15.d
    int32_t rcx_11 = (r10_1 * 0x7a69) ^ (r11_1 * 0x1b3b) ^ (r9_1 * 0x653) ^ (rbx_1 * 0x3f5) ^ *arg1
    int32_t rcx_12 = rcx_11 * rcx_11 * rcx_11 * 0xec4d
    int32_t rdx_4 = rcx_12 s>> 0xd ^ rcx_12
    int32_t rcx_15 = rdx_4 u>> 3 & 3
    
    if (rcx_15 == 1)
        result_10 = result_22
        result_1 = result_12
        result_12 = result_7
    else if (rcx_15 == 2)
        result_1 = result_10
        result_10 = result_12
        result_12 = result_22
    
    if ((rdx_4.b & 4) == 0)
        result_1 ^= 0x80000000
    
    if ((rdx_4.b & 2) == 0)
        result_10 ^= 0x80000000
    
    if ((rdx_4.b & 1) == 0)
        result_12 ^= 0x80000000
    
    result_10.d = result_10.d f+ result_1.d
    result_15.d = result_15.d f* result_15.d
    result_10.d = result_10.d f+ result_12.d
    result_10.d = result_10.d f* result_15.d
else
    result_10 = zx.o(0)

result_15 = result_17
result_7.d = result_16.d f* result_16.d
result_1.d = result_15.d f* result_15.d
result_12.d = 0.600000024f f- result_1.d
result_1.d = result_11.d f* result_11.d
result_12.d = result_12.d f- result_7.d
result_7.d = result_3.d f* result_3.d
result_12.d = result_12.d f- result_1.d
result_12.d = result_12.d f- result_7.d

if (result_12.d f>= 0f)
    result_12.d = result_12.d f* result_12.d
    result_1 = result_16
    int32_t rdx_9 = ((rsi_1 + r10_1) * 0x7a69) ^ ((r14_1 + r11_1) * 0x1b3b) ^ ((r8 + r9_1) * 0x653)
        ^ ((r15_1 + rbx_1) * 0x3f5) ^ *arg1
    int32_t rdx_10 = rdx_9 * rdx_9 * rdx_9 * 0xec4d
    int32_t r8_3 = rdx_10 s>> 0xd ^ rdx_10
    int32_t rcx_23 = r8_3 u>> 3 & 3
    
    if (rcx_23 == 1)
        result_1 = result_3
        result_11 = result_15
        result_3 = result_16
    else if (rcx_23 == 2)
        result_1 = result_11
        result_11 = result_3
        result_3 = result_15
    
    if ((r8_3.b & 4) == 0)
        result_1 ^= 0x80000000
    
    if ((r8_3.b & 2) == 0)
        result_11 ^= 0x80000000
    
    if ((r8_3.b & 1) == 0)
        result_3 ^= 0x80000000
    
    result_11.d = result_11.d f+ result_1.d
    result_12.d = result_12.d f* result_12.d
    result_11.d = result_11.d f+ result_3.d
    result_11.d = result_11.d f* result_12.d
else
    result_11 = zx.o(0)

result_15 = result_18
result_3 = result_4
result_1.d = result_15.d f* result_15.d
result_7.d = result_3.d f* result_3.d
result_12.d = 0.600000024f f- result_1.d
result_1.d = result_9.d f* result_9.d
result_12.d = result_12.d f- result_7.d
result_7.d = result_14.d f* result_14.d
result_12.d = result_12.d f- result_1.d
result_12.d = result_12.d f- result_7.d

if (result_12.d f>= 0f)
    result_12.d = result_12.d f* result_12.d
    result_1 = result_3
    int32_t rdx_15 = ((r10_1 + r13) * 0x7a69) ^ ((rcx_6 + r11_1) * 0x1b3b) ^ ((r9_1 + rbp) * 0x653)
        ^ ((rdx_1 + rbx_1) * 0x3f5) ^ *arg1
    int32_t rdx_16 = rdx_15 * rdx_15 * rdx_15 * 0xec4d
    int32_t r8_6 = rdx_16 s>> 0xd ^ rdx_16
    int32_t rcx_31 = r8_6 u>> 3 & 3
    
    if (rcx_31 == 1)
        result_1 = result_14
        result_9 = result_15
        result_14 = result_3
    else if (rcx_31 == 2)
        result_1 = result_9
        result_9 = result_14
        result_14 = result_15
    
    if ((r8_6.b & 4) == 0)
        result_1 ^= 0x80000000
    
    if ((r8_6.b & 2) == 0)
        result_9 ^= 0x80000000
    
    if ((r8_6.b & 1) == 0)
        result_14 ^= 0x80000000
    
    result_9.d = result_9.d f+ result_1.d
    result_12.d = result_12.d f* result_12.d
    result_9.d = result_9.d f+ result_14.d
    result_9.d = result_9.d f* result_12.d
else
    result_9 = zx.o(0)

result_3 = result_5
result_14 = result_19
result_1.d = result_3.d f* result_3.d
result_7.d = result_14.d f* result_14.d
result_12.d = 0.600000024f f- result_1.d
result_1.d = result.d f* result.d
result_12.d = result_12.d f- result_7.d
result_7.d = result_2.d f* result_2.d
result_12.d = result_12.d f- result_1.d
result_12.d = result_12.d f- result_7.d

if (result_12.d f>= 0f)
    result_1 = result_14
    result_12.d = result_12.d f* result_12.d
    int32_t rdx_21 = ((r15 + r11_1) * 0x1b3b) ^ ((rsi + r9_1) * 0x653) ^ ((r14 + r10_1) * 0x7a69)
        ^ ((r12 + rbx_1) * 0x3f5) ^ *arg1
    int32_t rdx_22 = rdx_21 * rdx_21 * rdx_21 * 0xec4d
    int32_t r8_9 = rdx_22 s>> 0xd ^ rdx_22
    int32_t rcx_39 = r8_9 u>> 3 & 3
    
    if (rcx_39 == 1)
        result_1 = result_2
        result = result_3
        result_2 = result_14
    else if (rcx_39 == 2)
        result_1 = result
        result = result_2
        result_2 = result_3
    
    if ((r8_9.b & 4) == 0)
        result_1 ^= 0x80000000
    
    if ((r8_9.b & 2) == 0)
        result ^= 0x80000000
    
    if ((r8_9.b & 1) == 0)
        result_2 ^= 0x80000000
    
    result.d = result.d f+ result_1.d
    result_12.d = result_12.d f* result_12.d
    result.d = result.d f+ result_2.d
    result.d = result.d f* result_12.d
else
    result = zx.o(0)

result_14 = result_20
result_12 = result_21
result_2 = result_6
result_1.d = result_14.d f* result_14.d
result_7.d = result_12.d f* result_12.d
zmm4.d = 0.600000024f f- result_1.d
result_1.d = result_2.d f* result_2.d
zmm4.d = zmm4.d f- result_7.d
result_7.d = result_13.d f* result_13.d
zmm4.d = zmm4.d f- result_1.d
zmm4.d = zmm4.d f- result_7.d

if (not(zmm4.d f< 0f))
    zmm4.d = zmm4.d f* zmm4.d
    result_1 = result_12
    result_8 = result_2
    int32_t rdx_27 = ((r10_1 + 1) * 0x7a69) ^ ((r11_1 + 1) * 0x1b3b) ^ ((r9_1 + 1) * 0x653)
        ^ ((rbx_1 + 1) * 0x3f5) ^ *arg1
    int32_t rdx_28 = rdx_27 * rdx_27 * rdx_27 * 0xec4d
    int32_t r8_12 = rdx_28 s>> 0xd ^ rdx_28
    int32_t rcx_47 = r8_12 u>> 3 & 3
    
    if (rcx_47 == 1)
        result_1 = result_13
        result_8 = result_14
        result_13 = result_12
    else if (rcx_47 == 2)
        result_8 = result_13
        result_1 = result_2
        result_13 = result_14
    
    if ((r8_12.b & 4) == 0)
        result_1 ^= 0x80000000
    
    if ((r8_12.b & 2) == 0)
        result_8 ^= 0x80000000
    
    if ((r8_12.b & 1) == 0)
        result_13 ^= 0x80000000
    
    result_8.d = result_8.d f+ result_1.d
    zmm4.d = zmm4.d f* zmm4.d
    result_8.d = result_8.d f+ result_13.d
    result_8.d = result_8.d f* zmm4.d

result.d = result.d f+ result_8.d
result_10.d = result_10.d f+ result_11.d
result.d = result.d f+ result_9.d
result.d = result.d f+ result_10.d
result.d = result.d f* 27f
return result
