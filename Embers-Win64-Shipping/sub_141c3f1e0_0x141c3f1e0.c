// 函数: sub_141c3f1e0
// 地址: 0x141c3f1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)
int32_t r14 = 0
int32_t* rbp = *arg2
int32_t rcx = *(arg3 + 0xc)
arg3[1].d = 0
int32_t rdx = 0

if (rsi.d s> rcx)
    sub_140775b10(arg3, rsi.d)
    rdx = arg3[1].d
    rcx = *(arg3 + 0xc)

int32_t rax = rdx + rsi.d
arg3[1].d = rax

if (rax s> rcx)
    sub_140775270(arg3)

uint32_t zmm1[0x4] = *(arg1 + 4)
float zmm0[0x4] = *(arg1 + 8)
zmm1[0] = zmm1[0] f* *(arg1 + 0xc)
uint64_t r8 = *arg3
zmm0[0] = zmm0[0] f* *rbp
zmm1[0] = zmm1[0] f+ zmm0[0]
*r8 = zmm1[0]

if (rsi s> 1)
    void* r10_1 = 1
    
    if (rsi s>= 5)
        void* rdx_3 = rbp - r8
        int64_t i_3 = ((rsi - 5) u>> 2) + 1
        void* rcx_3 = r8 + 8
        r14 = (i_3 << 2).d
        r10_1 = (i_3 << 2) + 1
        int64_t i
        
        do
            zmm1 = *(rdx_3 + rcx_3 - 4)
            zmm1[0] = zmm1[0] f* *(arg1 + 8)
            zmm0 = *(rcx_3 - 8)
            zmm0[0] = zmm0[0] f* *(arg1 + 4)
            zmm1[0] = zmm1[0] f+ zmm0[0]
            *(rcx_3 - 4) = zmm1[0]
            zmm1[0] = zmm1[0] f* *(arg1 + 4)
            zmm0 = *(rdx_3 + rcx_3)
            zmm0[0] = zmm0[0] f* *(arg1 + 8)
            zmm0[0] = zmm0[0] f+ zmm1[0]
            *rcx_3 = zmm0[0]
            zmm0[0] = zmm0[0] f* *(arg1 + 4)
            zmm1 = *(rdx_3 + rcx_3 + 4)
            zmm1[0] = zmm1[0] f* *(arg1 + 8)
            zmm1[0] = zmm1[0] f+ zmm0[0]
            *(rcx_3 + 4) = zmm1[0]
            zmm0 = *(rdx_3 + rcx_3 + 8)
            zmm0[0] = zmm0[0] f* *(arg1 + 8)
            zmm1[0] = zmm1[0] f* *(arg1 + 4)
            zmm0[0] = zmm0[0] f+ zmm1[0]
            *(rcx_3 + 8) = zmm0[0]
            rcx_3 += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    if (r10_1 s< rsi)
        int64_t rcx_4 = r8 + (r10_1 << 2)
        int64_t rdx_4 = r8 + (sx.q(r14) << 2)
        void* i_4 = rsi - r10_1
        void* i_1
        
        do
            zmm1 = *(rcx_4 + rbp - r8)
            zmm0 = *(arg1 + 4)
            zmm0[0] = zmm0[0] f* *rdx_4
            rdx_4 += 4
            zmm1[0] = zmm1[0] f* *(arg1 + 8)
            zmm1[0] = zmm1[0] f+ zmm0[0]
            *rcx_4 = zmm1[0]
            rcx_4 += 4
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)

float zmm4[0x4] = data_142ff88b0
float zmm5[0x4] = data_143205590

if (rsi.d s> 0)
    uint64_t rcx_5 = r8
    uint64_t i_5 = zx.q(((rsi - 1).d u>> 2) + 1)
    uint64_t i_2
    
    do
        float zmm2[0x4] = *rcx_5
        rcx_5 += 0x10
        *(rcx_5 - 0x10) = _mm_and_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm5, zmm2, 1), _mm_cmpeq_ps(zmm2, zmm4, 1)), 
            data_143f34880 ^ zmm2) ^ zmm2
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

int32_t result = *(r8 + (rsi << 2) - 4)
*(arg1 + 0xc) = result
return result
