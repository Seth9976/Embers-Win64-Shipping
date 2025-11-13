// 函数: sub_140380f80
// 地址: 0x140380f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg7)
int64_t r12 = sx.q(arg5)
int64_t r13 = sx.q(arg3)
int32_t i_3 = 0
int64_t rbp = sx.q(arg4)
int64_t r14 = arg1
int64_t rbx = r13
int64_t rdx = 0
uint64_t rax

if (r13 s>= 4)
    void* r9 = arg2 + 8
    int16_t* rcx_3 = r14 + (((rbp + 1) * r15 + r12) << 1)
    int64_t i_9 = ((r13 - 4) u>> 2) + 1
    rdx = i_9 << 2
    int64_t i
    
    do
        r9 += 0x10
        *(r9 - 0x18) = _mm_cvtepi32_ps(zx.o(sx.d(rcx_3[r15 * (0 - 1)]))).d
        *(r9 - 0x14) = _mm_cvtepi32_ps(zx.o(sx.d(*rcx_3)))[0]
        *(r9 - 0x10) = _mm_cvtepi32_ps(zx.o(sx.d(rcx_3[r15]))).d
        rax = zx.q(sx.d(rcx_3[r15 * 2]))
        rcx_3 = &rcx_3[r15 * 4]
        *(r9 - 0xc) = _mm_cvtepi32_ps(zx.o(rax.d))[0]
        i = i_9
        i_9 -= 1
    while (i != 1)
    rbp = zx.q(arg4)
    r14 = arg1
    r15 = zx.q(arg7)

if (rdx s< rbx)
    int64_t rax_4 = sx.q(r15.d)
    int16_t* r8_4 = r14 + (((sx.q(rbp.d) + rdx) * rax_4 + r12) << 1)
    
    do
        rax = zx.q(sx.d(*r8_4))
        rdx += 1
        r8_4 = &r8_4[rax_4]
        *(arg2 + (rdx << 2) - 4) = _mm_cvtepi32_ps(zx.o(rax.d)).d
    while (rdx s< rbx)

int64_t rsi_3 = sx.q(arg6)
int64_t r10_3
uint128_t zmm0

if (rsi_3.d s<= 0xffffffff)
    if (rsi_3.d == 0xfffffffe)
        int64_t r10_4 = 1
        int64_t rsi_4 = sx.q(r15.d)
        
        if (1 s< rsi_4)
            int64_t r13_1 = sx.q(arg4)
            
            do
                int64_t rcx_17 = 0
                
                if (rbx s>= 4)
                    void* r8_10 = arg2 + 8
                    int16_t* r9_4 = r14 + (((r13_1 + 1) * rsi_4 + r10_4) << 1)
                    int64_t i_7 = ((rbx - 4) u>> 2) + 1
                    rcx_17 = i_7 << 2
                    int64_t i_1
                    
                    do
                        r8_10 += 0x10
                        zmm0.d =
                            _mm_cvtepi32_ps(zx.o(sx.d(r9_4[rsi_4 * (0 - 1)]))).d f+ *(r8_10 - 0x18)
                        *(r8_10 - 0x18) = zmm0.d
                        zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*r9_4))).d f+ *(r8_10 - 0x14)
                        *(r8_10 - 0x14) = zmm0.d
                        float temp0_13[0x4] = _mm_cvtepi32_ps(zx.o(sx.d(r9_4[rsi_4])))
                        temp0_13[0] = temp0_13[0] f+ *(r8_10 - 0x10)
                        *(r8_10 - 0x10) = temp0_13[0]
                        rax = zx.q(sx.d(r9_4[rsi_4 * 2]))
                        r9_4 = &r9_4[rsi_4 * 4]
                        zmm0.d = _mm_cvtepi32_ps(zx.o(rax.d)).d f+ *(r8_10 - 0xc)
                        *(r8_10 - 0xc) = zmm0.d
                        i_1 = i_7
                        i_7 -= 1
                    while (i_1 != 1)
                
                r14 = arg1
                
                if (rcx_17 s< rbx)
                    int16_t* rdx_8 = r14 + (((rcx_17 + r13_1) * rsi_4 + r10_4) << 1)
                    
                    do
                        rax = zx.q(sx.d(*rdx_8))
                        rcx_17 += 1
                        rdx_8 = &rdx_8[rsi_4]
                        zmm0.d = _mm_cvtepi32_ps(zx.o(rax.d)).d f+ *(arg2 + (rcx_17 << 2) - 4)
                        *(arg2 + (rcx_17 << 2) - 4) = zmm0.d
                    while (rcx_17 s< rbx)
                
                r10_4 += 1
            while (r10_4 s< rsi_4)
            
            r13 = zx.q(arg3)
    
    r10_3 = zx.q(arg7)
else
    int64_t rdx_2 = 0
    
    if (rbx s>= 4)
        int64_t r9_2 = sx.q(r15.d)
        void* r10_2 = arg2 + 8
        int16_t* rcx_11 = r14 + (((sx.q(rbp.d) + 1) * r9_2 + rsi_3) << 1)
        int64_t i_10 = ((r13 - 4) u>> 2) + 1
        rdx_2 = i_10 << 2
        int64_t i_2
        
        do
            r10_2 += 0x10
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(rcx_11[r9_2 * (0 - 1)]))).d f+ *(r10_2 - 0x18)
            *(r10_2 - 0x18) = zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*rcx_11))).d f+ *(r10_2 - 0x14)
            *(r10_2 - 0x14) = zmm0.d
            float temp0_8[0x4] = _mm_cvtepi32_ps(zx.o(sx.d(rcx_11[r9_2])))
            temp0_8[0] = temp0_8[0] f+ *(r10_2 - 0x10)
            *(r10_2 - 0x10) = temp0_8[0]
            rax = zx.q(sx.d(rcx_11[r9_2 * 2]))
            rcx_11 = &rcx_11[r9_2 * 4]
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax.d)).d f+ *(r10_2 - 0xc)
            *(r10_2 - 0xc) = zmm0.d
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
    
    if (rdx_2 s>= rbx)
        r10_3 = zx.q(arg7)
    else
        r10_3 = sx.q(arg7)
        int16_t* r8_9 = arg1 + (((sx.q(arg4) + rdx_2) * r10_3 + rsi_3) << 1)
        
        do
            rax = zx.q(sx.d(*r8_9))
            rdx_2 += 1
            r8_9 = &r8_9[r10_3]
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax.d)).d f+ *(arg2 + (rdx_2 << 2) - 4)
            *(arg2 + (rdx_2 << 2) - 4) = zmm0.d
        while (rdx_2 s< rbx)

uint128_t zmm2

zmm2 = r10_3.d != 0xfffffffe ? 0x37800000 : 0xb7800000

float zmm1[0x4]

if (r13.d s> 0 && r13.d u>= 8)
    zmm1 = zmm2.d
    float temp0_16[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    int32_t rax_19 = r13.d & 0x80000007
    
    if (rax_19 s< 0)
        rax_19 = ((rax_19 - 1) | 0xfffffff8) + 1
    
    do
        int64_t i_5 = sx.q(i_3)
        *(arg2 + (i_5 << 2)) = _mm_mul_ps(*(arg2 + (i_5 << 2)), temp0_16)
        rax = zx.q(i_3 + 4)
        i_3 += 8
        int64_t rcx_18 = sx.q(rax.d)
        *(arg2 + (rcx_18 << 2)) = _mm_mul_ps(*(arg2 + (rcx_18 << 2)), temp0_16)
    while (i_3 s< r13.d - rax_19)

int64_t i_6 = sx.q(i_3)

if (i_6 s>= rbx)
    return 

if (rbx - i_6 s>= 4)
    rax = arg2 + 8 + (i_6 << 2)
    int64_t i_8 = ((rbx - i_6 - 4) u>> 2) + 1
    i_6 += i_8 << 2
    int64_t i_4
    
    do
        zmm1 = zmm2
        rax += 0x10
        zmm0.d = zmm2.d f* *(rax - 0x18)
        zmm1[0] = zmm1[0] f* *(rax - 0x14)
        *(rax - 0x18) = zmm0.d
        *(rax - 0x14) = zmm1[0]
        zmm1 = zmm2
        zmm0.d = zmm2.d f* *(rax - 0x10)
        zmm1[0] = zmm1[0] f* *(rax - 0xc)
        *(rax - 0x10) = zmm0.d
        *(rax - 0xc) = zmm1[0]
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)

while (i_6 s< rbx)
    i_6 += 1
    zmm0.d = zmm2.d f* *(arg2 + (i_6 << 2) - 4)
    *(arg2 + (i_6 << 2) - 4) = zmm0.d
