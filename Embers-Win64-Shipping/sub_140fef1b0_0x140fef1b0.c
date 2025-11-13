// 函数: sub_140fef1b0
// 地址: 0x140fef1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t r10 = zx.q(*(arg2 + 0x60))
float zmm2 = arg4[2]
uint128_t zmm0
zmm0.d = float.s(r10)

if (not(zmm2 f< zmm0.d))
    arg4[2] = zmm0.d
    zmm2 = zmm0.d

uint64_t r8 = zx.q(*(arg2 + 0x64))
uint128_t zmm1 = arg4[3]
zmm0.d = float.s(r8)

if (not(zmm1.d f< zmm0.d))
    arg4[3] = zmm0.d
    zmm1 = zmm0

int32_t rdx = int.d(fconvert.t(*arg4))
int32_t var_44 = 1
int32_t rbx = 0
int32_t var_50 = 0
int32_t rcx = int.d(fconvert.t(arg4[1]))
int32_t r9 = 0

if (rdx s>= 0)
    rbx = rdx

int32_t var_58 = rbx
int32_t zmm3 = arg5[1]
int32_t rsi = int.d(zmm1.d)

if (rcx s>= 0)
    r9 = rcx

int32_t rax_3 = neg.d(rcx)
int32_t var_54 = r9

if (rcx s>= 0)
    rax_3 = 0

int32_t rbp = int.d(zmm2)
int32_t var_48 = rsi
zmm2 = *arg5
int32_t rax_5 = neg.d(rdx)
int32_t var_4c = rbp
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_3))

if (rdx s>= 0)
    rax_5 = 0

zmm4.d = zmm4.d f+ zmm3
uint128_t zmm5
zmm5.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f+ zmm2
zmm0.d = float.s(zx.q(*(arg3 + 0x60)))
zmm1.d = _mm_cvtepi32_ps(zx.o(rbp - rbx)).d f+ zmm5.d
rdx.b = zmm0.d f>= zmm1.d
zmm0.d = float.s(zx.q(*(arg3 + 0x64)))
zmm1.d = _mm_cvtepi32_ps(zx.o(rsi - r9)).d f+ zmm4.d
uint64_t result
result.b = zmm0.d f>= zmm1.d
rdx.b &= result.b

if (zmm2 > arg5[2] || not(zmm3 f<= arg5[3]))
    rdx.b = 0

if (rbx s< 0 || rbp s> r10.d)
    rcx.b = 0
else
    rcx.b = 1

if (r9 s< 0 || rsi s> r8.d)
    result.b = 0
else
    result.b = 1

result.b &= rcx.b

if (rbx s<= rbp && r9 s<= rsi && result.b != 0 && rdx.b != 0)
    int64_t* rcx_1 = *(arg1 + 0x150)
    result = (*(*rcx_1 + 0x170))(rcx_1, *(arg3 + 0xa0), 0, int.q(zmm5.d), (int.q(zmm4.d)).d, 0, 
        *(arg2 + 0xa0), 0, &var_58)

__security_check_cookie(rax_1 ^ &var_a8)
return result
