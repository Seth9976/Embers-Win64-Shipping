// 函数: sub_141425100
// 地址: 0x141425100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *arg1
int32_t rbp = 0
uint64_t rsi = arg1[2]
uint64_t rdi = arg1[1]
int32_t r9 = arg3
int64_t r10 = arg2
uint64_t rdx_1 = r14 u>> 0x20
uint64_t r8_1 = rdi u>> 0x20
uint32_t r15_1 = (rsi u>> 0x20).d
uint32_t r13 = r15_1

if (rdx_1.d s>= 0)
    rbp = rdx_1.d

if (r15_1 s>= 0xff)
    r13 = 0xff

arg1.b = 0
int32_t r12_1 = rsi.d - r14.d
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (r8_1.d - rbp s> 0)
    uint32_t rbx_1 = r8_1.d
    
    if (r13 s<= r8_1.d)
        rbx_1 = r13
    
    zmm2 = _mm_cvtepi32_ps(zx.o(r12_1))
    zmm1 = _mm_cvtepi32_ps(zx.o(rdi.d - r14.d))
    zmm0 = _mm_cvtepi32_ps(zx.o(r8_1.d - rdx_1.d))
    zmm5 = _mm_cvtepi32_ps(zx.o(r14.d))
    zmm1.d = zmm1.d f/ zmm0.d
    zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(r15_1 - rdx_1.d)).d
    zmm4 = _mm_cvtepi32_ps(zx.o(rbp - rdx_1.d))
    zmm3 = zmm2
    zmm2 = _mm_min_ss(zmm2.d, zmm1.d)
    zmm3 = _mm_max_ss(zmm3.d, zmm1.d)
    zmm0.d = zmm2.d f* zmm4.d
    zmm1.d = zmm4.d f* zmm3.d
    zmm0.d = zmm0.d f+ zmm5.d
    zmm1.d = zmm1.d f+ zmm5.d
    sub_141425010(zmm0, zmm1, zmm2.d, zmm3.d, rbp, rbx_1, r10, r9)
    rbp = rbx_1 + 1
    arg1.b = 1
    r9 = arg3
    r10 = arg2

int32_t result = r13 - rbp

if (result s> 0)
    zmm2.d = float.s(r12_1)
    zmm0.d = float.s(r15_1 - rdx_1.d)
    zmm2.d = zmm2.d f/ zmm0.d
    zmm0.d = float.s(r15_1 - r8_1.d)
    zmm3.d = float.s(rsi.d - rdi.d)
    zmm3.d = zmm3.d f/ zmm0.d
    zmm4.d = float.s(rbp - rdx_1.d)
    zmm0.d = float.s(r14.d)
    zmm5.d = float.s(rbp - r8_1.d)
    zmm4.d = zmm4.d f* zmm2.d
    zmm5.d = zmm5.d f* zmm3.d
    zmm4.d = zmm4.d f+ zmm0.d
    zmm0.d = float.s(rdi.d)
    zmm5.d = zmm5.d f+ zmm0.d
    
    if (not(zmm4.d f<= zmm5.d))
        zmm1 = zmm2
        zmm2 = zmm3
        zmm3 = zmm1
    
    result, arg1 = sub_141425010(_mm_min_ss(zmm4.d, zmm5.d), _mm_max_ss(zmm4.d, zmm5.d), zmm2.d, 
        zmm3.d, rbp, r13, r10, r9)
    arg1.b = 1

if (arg1.b != 0)
    return result

bool cond:3_1 = r14.d s<= rdi.d
int32_t rcx = rdi.d
int32_t rax_19 = rsi.d

if (r14.d s>= rdi.d)
    rdi = zx.q(r14.d)

if (cond:3_1)
    rcx = r14.d

if (rdi.d s>= rsi.d)
    rax_19 = rdi.d

if (rcx s<= rsi.d)
    rsi = zx.q(rcx)

return sub_141425010(_mm_cvtepi32_ps(zx.o(rsi.d)), _mm_cvtepi32_ps(zx.o(rax_19)), zx.o(0).d, 
    zx.o(0).d, rbp, rbp, arg2, arg3)
