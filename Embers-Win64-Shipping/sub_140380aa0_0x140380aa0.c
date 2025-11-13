// 函数: sub_140380aa0
// 地址: 0x140380aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r12 = sx.q(arg3)
int32_t i_3 = 0
int64_t r13 = sx.q(arg4)
int64_t r9 = sx.q(arg7)
int64_t r15 = sx.q(arg5)
int64_t r14 = arg1
int64_t rdx = 0
int64_t rbx = r12
float zmm0[0x4]
float zmm1[0x4]

if (r12 s>= 4)
    void* r9_1 = arg2 + 8
    result = r14 + (((r13 + 1) * r9 + r15) << 2)
    int64_t i_6 = ((r12 - 4) u>> 2) + 1
    rdx = i_6 << 2
    int64_t i
    
    do
        zmm0 = *(result + ((r9 * (0 - 1)) << 2))
        r9_1 += 0x10
        zmm0[0] = zmm0[0] * 32768f
        *(r9_1 - 0x18) = zmm0[0]
        zmm1 = *result
        zmm1[0] = zmm1[0] * 32768f
        *(r9_1 - 0x14) = zmm1[0]
        zmm0 = *(result + r9 * 4)
        zmm0[0] = zmm0[0] * 32768f
        *(r9_1 - 0x10) = zmm0[0]
        zmm1 = result[r9].d
        result = &result[r9 * 2]
        zmm1[0] = zmm1[0] * 32768f
        *(r9_1 - 0xc) = zmm1[0]
        i = i_6
        i_6 -= 1
    while (i != 1)
    r14 = arg1
    r9 = zx.q(arg7)

if (rdx s< rbx)
    int64_t rax = sx.q(r9.d)
    result = r14 + (((rdx + r13) * rax + r15) << 2)
    
    do
        zmm0 = *result
        rdx += 1
        result += rax << 2
        zmm0[0] = zmm0[0] * 32768f
        *(arg2 + (rdx << 2) - 4) = zmm0[0]
    while (rdx s< rbx)

int64_t rsi_3 = sx.q(arg6)
int64_t r9_3

if (rsi_3.d s<= 0xffffffff)
    if (rsi_3.d == 0xfffffffe)
        int64_t r10_3 = 1
        int64_t rsi_4 = sx.q(r9.d)
        
        if (1 s< rsi_4)
            do
                int64_t rcx_17 = 0
                
                if (rbx s>= 4)
                    void* r8_10 = arg2 + 8
                    float (* r9_4)[0x4] = arg1 + (((r13 + 1) * rsi_4 + r10_3) << 2)
                    result = ((rbx - 4) u>> 2) + 1
                    rcx_17 = result << 2
                    void* const* i_1
                    
                    do
                        zmm0 = (*r9_4)[rsi_4 * (0 - 1)]
                        r8_10 += 0x10
                        zmm0[0] = zmm0[0] * 32768f
                        zmm0[0] = zmm0[0] f+ *(r8_10 - 0x18)
                        *(r8_10 - 0x18) = zmm0[0]
                        zmm1 = *r9_4
                        zmm1[0] = zmm1[0] * 32768f
                        zmm1[0] = zmm1[0] f+ *(r8_10 - 0x14)
                        *(r8_10 - 0x14) = zmm1[0]
                        zmm0 = (*r9_4)[rsi_4]
                        zmm0[0] = zmm0[0] * 32768f
                        zmm0[0] = zmm0[0] f+ *(r8_10 - 0x10)
                        *(r8_10 - 0x10) = zmm0[0]
                        zmm1 = (*r9_4)[rsi_4 * 2]
                        r9_4 = &r9_4[rsi_4]
                        zmm1[0] = zmm1[0] * 32768f
                        zmm1[0] = zmm1[0] f+ *(r8_10 - 0xc)
                        *(r8_10 - 0xc) = zmm1[0]
                        i_1 = result
                        result -= 1
                    while (i_1 != 1)
                
                if (rcx_17 s< rbx)
                    result = (rcx_17 + r13) * rsi_4 + r10_3
                    float (* rdx_8)[0x4] = arg1 + (result << 2)
                    
                    do
                        zmm0 = *rdx_8
                        rcx_17 += 1
                        rdx_8 = &(*rdx_8)[rsi_4]
                        zmm0[0] = zmm0[0] * 32768f
                        zmm0[0] = zmm0[0] f+ *(arg2 + (rcx_17 << 2) - 4)
                        *(arg2 + (rcx_17 << 2) - 4) = zmm0[0]
                    while (rcx_17 s< rbx)
                
                r10_3 += 1
            while (r10_3 s< rsi_4)
            
            r12 = zx.q(arg3)
    
    r9_3 = zx.q(arg7)
else
    int64_t rdx_2 = 0
    
    if (rbx s>= 4)
        int64_t r9_2 = sx.q(r9.d)
        void* r10_2 = arg2 + 8
        result = r14 + (((r13 + 1) * r9_2 + rsi_3) << 2)
        int64_t i_7 = ((r12 - 4) u>> 2) + 1
        rdx_2 = i_7 << 2
        int64_t i_2
        
        do
            zmm0 = *(result + ((r9_2 * (0 - 1)) << 2))
            r10_2 += 0x10
            zmm0[0] = zmm0[0] * 32768f
            zmm0[0] = zmm0[0] f+ *(r10_2 - 0x18)
            *(r10_2 - 0x18) = zmm0[0]
            zmm1 = *result
            zmm1[0] = zmm1[0] * 32768f
            zmm1[0] = zmm1[0] f+ *(r10_2 - 0x14)
            *(r10_2 - 0x14) = zmm1[0]
            zmm0 = *(result + r9_2 * 4)
            zmm0[0] = zmm0[0] * 32768f
            zmm0[0] = zmm0[0] f+ *(r10_2 - 0x10)
            *(r10_2 - 0x10) = zmm0[0]
            zmm1 = result[r9_2].d
            result = &result[r9_2 * 2]
            zmm1[0] = zmm1[0] * 32768f
            zmm1[0] = zmm1[0] f+ *(r10_2 - 0xc)
            *(r10_2 - 0xc) = zmm1[0]
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    if (rdx_2 s>= rbx)
        r9_3 = zx.q(arg7)
    else
        r9_3 = sx.q(arg7)
        result = arg1 + (((rdx_2 + r13) * r9_3 + rsi_3) << 2)
        
        do
            zmm0 = *result
            rdx_2 += 1
            result += r9_3 << 2
            zmm0[0] = zmm0[0] * 32768f
            zmm0[0] = zmm0[0] f+ *(arg2 + (rdx_2 << 2) - 4)
            *(arg2 + (rdx_2 << 2) - 4) = zmm0[0]
        while (rdx_2 s< rbx)

float zmm2[0x4]

zmm2 = r9_3.d != 0xfffffffe ? 0x3f000000 : 0xbf000000

if (r12.d s> 0 && r12.d u>= 8)
    zmm1 = zmm2[0]
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    int32_t rax_10 = r12.d & 0x80000007
    
    if (rax_10 s< 0)
        rax_10 = ((rax_10 - 1) | 0xfffffff8) + 1
    
    do
        int64_t i_5 = sx.q(i_3)
        *(arg2 + (i_5 << 2)) = _mm_mul_ps(*(arg2 + (i_5 << 2)), zmm1)
        result = zx.q(i_3 + 4)
        i_3 += 8
        int64_t rcx_18 = sx.q(result.d)
        *(arg2 + (rcx_18 << 2)) = _mm_mul_ps(*(arg2 + (rcx_18 << 2)), zmm1)
    while (i_3 s< r12.d - rax_10)

int64_t i_8 = sx.q(i_3)

if (i_8 s< rbx)
    result = rbx - i_8
    
    if (result s>= 4)
        result = arg2 + 8 + (i_8 << 2)
        int64_t i_9 = ((rbx - i_8 - 4) u>> 2) + 1
        i_8 += i_9 << 2
        int64_t i_4
        
        do
            result = &result[2]
            zmm2[0] = zmm2[0] f* result[-3].d
            zmm2[0] = zmm2[0] f* *(result - 0x14)
            result[-3].d = zmm2[0]
            *(result - 0x14) = zmm2[0]
            zmm2[0] = zmm2[0] f* result[-2].d
            zmm2[0] = zmm2[0] f* *(result - 0xc)
            result[-2].d = zmm2[0]
            *(result - 0xc) = zmm2[0]
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    while (i_8 s< rbx)
        i_8 += 1
        zmm2[0] = zmm2[0] f* *(arg2 + (i_8 << 2) - 4)
        *(arg2 + (i_8 << 2) - 4) = zmm2[0]

return result
