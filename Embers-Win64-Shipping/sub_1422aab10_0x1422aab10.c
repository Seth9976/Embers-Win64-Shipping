// 函数: sub_1422aab10
// 地址: 0x1422aab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = zx.o(*arg1)
int32_t r10 = 0
int64_t zmm0 = *arg2
int32_t rbx = arg2[1].d
int32_t r9 = int.d(fconvert.t(arg1[1].d))
int32_t rcx = int.d(zmm2.d)
int32_t rbp = zmm0.d
int32_t rax_1 = int.d(_mm_shuffle_ps(zmm2, zmm2, 0x55).d)
int32_t r8 = rbp - 1

if (rcx s< 0)
    r8 = 0
else if (rcx s< r8)
    r8 = rcx

uint32_t rdx_1 = (zmm0 u>> 0x20).d
int32_t rcx_1 = rdx_1 - 1

if (rax_1 s< 0)
    rcx_1 = 0
else if (rax_1 s< rcx_1)
    rcx_1 = rax_1

int32_t rax_2 = rbx - 1

if (r9 s< 0)
    rax_2 = 0
else if (r9 s< rax_2)
    rax_2 = r9

uint128_t zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
int64_t r9_1 = sx.q((rdx_1 * rax_2 + rcx_1) * rbp + r8)
uint32_t rcx_2 = zx.d(*(arg3 + (r9_1 << 2)))
uint32_t r8_1 = zx.d(*(arg3 + (r9_1 << 2) + 2))
arg5[1] = zx.d(*(arg3 + (r9_1 << 2) + 1))
arg5[2] = r8_1
*arg5 = rcx_2
int32_t rdx_7 = int.d(zmm1.d)
*arg6 = zx.d(*(arg3 + (r9_1 << 2) + 3))
int32_t rbx_1 = *arg2
int32_t r9_2 = int.d(fconvert.t(arg1[1].d))
int32_t r8_2 = rbx_1 - 1
int32_t rax_6 = int.d(zmm2.d)

if (rax_6 s< 0)
    r8_2 = 0
else if (rax_6 s< r8_2)
    r8_2 = rax_6

int32_t rax_7 = *(arg2 + 4)
int32_t rcx_4 = rax_7 - 1

if (rdx_7 s< 0)
    rcx_4 = 0
else if (rdx_7 s< rcx_4)
    rcx_4 = rdx_7

int32_t rdx_9 = arg2[1].d - 1

if (r9_2 s>= 0)
    r10 = rdx_9
    
    if (r9_2 s< rdx_9)
        r10 = r9_2

*arg7 = zx.d(*(sx.q((rax_7 * r10 + rcx_4) * rbx_1 + r8_2) + *arg4))
return arg7
