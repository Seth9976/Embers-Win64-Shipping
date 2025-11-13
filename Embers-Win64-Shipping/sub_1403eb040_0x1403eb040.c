// 函数: sub_1403eb040
// 地址: 0x1403eb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3[0]
int64_t rsi = sx.q(arg5)
int32_t j_17 = 0
int32_t i_12 = (rsi - 1).d
int64_t i_11 = sx.q(i_12)
int64_t i_1 = i_11
float zmm11[0x4] = arg4
float zmm7[0x4] = arg3
float zmm0[0x4]

if (i_11 s>= 4)
    int128_t* rdx_1 = arg1 - arg2
    void* rcx_1 = &arg2[-1 + i_11]
    int64_t i_10 = ((i_11 - 4) u>> 2) + 1
    i_1 -= i_10 << 2
    int64_t i
    
    do
        zmm0 = *(rdx_1 + rcx_1)
        arg3 = zmm7
        rcx_1 -= 0x10
        zmm7[0] = zmm7[0] f* *(rdx_1 + rcx_1 + 0x14)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rdx_1 + rcx_1 + 0x10) = zmm0[0]
        zmm0 = *(rcx_1 + 0x10)
        arg3[0] = arg3[0] f* *(rcx_1 + 0x14)
        zmm0[0] = zmm0[0] - arg3[0]
        *(rcx_1 + 0x10) = zmm0[0]
        zmm0 = *(rdx_1 + rcx_1 + 0xc)
        zmm7[0] = zmm7[0] f* *(rdx_1 + rcx_1 + 0x10)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rdx_1 + rcx_1 + 0xc) = zmm0[0]
        zmm0 = *(rcx_1 + 0xc)
        zmm7[0] = zmm7[0] f* *(rcx_1 + 0x10)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rcx_1 + 0xc) = zmm0[0]
        zmm0 = *(rdx_1 + rcx_1 + 8)
        zmm7[0] = zmm7[0] f* *(rdx_1 + rcx_1 + 0xc)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rdx_1 + rcx_1 + 8) = zmm0[0]
        zmm0 = *(rcx_1 + 8)
        zmm7[0] = zmm7[0] f* *(rcx_1 + 0xc)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rcx_1 + 8) = zmm0[0]
        zmm0 = *(rdx_1 + rcx_1 + 4)
        zmm7[0] = zmm7[0] f* *(rdx_1 + rcx_1 + 8)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rdx_1 + rcx_1 + 4) = zmm0[0]
        zmm0 = *(rcx_1 + 4)
        zmm7[0] = zmm7[0] f* *(rcx_1 + 8)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rcx_1 + 4) = zmm0[0]
        i = i_10
        i_10 -= 1
    while (i != 1)

if (i_1 s> 0)
    int128_t* rax_3 = &arg2[-1 + i_1]
    void* rcx_3 = arg1 - arg2
    
    do
        zmm0 = *(rax_3 + rcx_3)
        arg3 = zmm7
        i_1 -= 1
        rax_3 -= 4
        zmm7[0] = zmm7[0] f* *(rax_3 + rcx_3 + 8)
        zmm0[0] = zmm0[0] - zmm7[0]
        *(rax_3 + rcx_3 + 4) = zmm0[0]
        zmm0 = *(rax_3 + 4)
        arg3[0] = arg3[0] f* *(rax_3 + 8)
        zmm0[0] = zmm0[0] - arg3[0]
        *(rax_3 + 4) = zmm0[0]
    while (i_1 s> 0)

int32_t i_2 = 0
float zmm10[0x4] = 0x3f800000
zmm7[0] = zmm7[0] f* *arg1
zmm7[0] = zmm7[0] * zmm7[0]
zmm10[0] = 1f - zmm7[0]
zmm7[0] = zmm7[0] + 1f
zmm7[0] = zmm7[0] f* *arg2
float zmm4[0x4] = zmm10
float zmm5[0x4] = zmm10
zmm4[0] = zmm4[0] / zmm7[0]
zmm7[0] = zmm7[0] + 1f
zmm5[0] = zmm5[0] / zmm7[0]
float zmm1[0x4]

if (rsi.d s> 0 && rsi.d u>= 8)
    zmm1 = zmm4[0]
    arg3 = zmm5[0]
    zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
    arg3 = _mm_shuffle_ps(arg3, arg3, 0)
    
    if (arg2 u> &arg1[i_11] || &arg2[i_11] u< arg1)
        int32_t rax_6 = rsi.d & 0x80000007
        
        if (rax_6 s< 0)
            rax_6 = ((rax_6 - 1) | 0xfffffff8) + 1
        
        do
            int64_t i_6 = sx.q(i_2)
            *(arg1 + (i_6 << 2)) = _mm_mul_ps(*(arg1 + (i_6 << 2)), zmm1)
            *(arg2 + (i_6 << 2)) = _mm_mul_ps(*(arg2 + (i_6 << 2)), arg3)
            int32_t rax_9 = i_2 + 4
            i_2 += 8
            int64_t rcx_5 = sx.q(rax_9)
            *(arg1 + (rcx_5 << 2)) = _mm_mul_ps(*(arg1 + (rcx_5 << 2)), zmm1)
            *(arg2 + (rcx_5 << 2)) = _mm_mul_ps(*(arg2 + (rcx_5 << 2)), arg3)
        while (i_2 s< rsi.d - rax_6)

int64_t i_9 = sx.q(i_2)

if (i_9 s< rsi)
    if (rsi - i_9 s>= 4)
        int64_t rcx_7 = arg1 - arg2
        void* rax_13 = &arg2[1 + i_9]
        int64_t i_7 = ((rsi - i_9 - 4) u>> 2) + 1
        i_9 += i_7 << 2
        int64_t i_3
        
        do
            rax_13 += 0x10
            zmm4[0] = zmm4[0] f* *(rcx_7 + rax_13 - 0x14)
            *(rcx_7 + rax_13 - 0x14) = zmm4[0]
            zmm5[0] = zmm5[0] f* *(rax_13 - 0x14)
            *(rax_13 - 0x14) = zmm5[0]
            zmm4[0] = zmm4[0] f* *(rcx_7 + rax_13 - 0x10)
            *(rcx_7 + rax_13 - 0x10) = zmm4[0]
            zmm5[0] = zmm5[0] f* *(rax_13 - 0x10)
            *(rax_13 - 0x10) = zmm5[0]
            zmm4[0] = zmm4[0] f* *(rcx_7 + rax_13 - 0xc)
            *(rcx_7 + rax_13 - 0xc) = zmm4[0]
            zmm5[0] = zmm5[0] f* *(rax_13 - 0xc)
            *(rax_13 - 0xc) = zmm5[0]
            zmm4[0] = zmm4[0] f* *(rcx_7 + rax_13 - 8)
            *(rcx_7 + rax_13 - 8) = zmm4[0]
            zmm5[0] = zmm5[0] f* *(rax_13 - 8)
            *(rax_13 - 8) = zmm5[0]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
    
    if (i_9 s< rsi)
        void* rax_14 = &arg2[i_9]
        int64_t rcx_9 = arg1 - arg2
        int64_t i_8 = rsi - i_9
        int64_t i_4
        
        do
            rax_14 += 4
            zmm4[0] = zmm4[0] f* *(rcx_9 + rax_14 - 4)
            *(rcx_9 + rax_14 - 4) = zmm4[0]
            zmm5[0] = zmm5[0] f* *(rax_14 - 4)
            *(rax_14 - 4) = zmm5[0]
            i_4 = i_8
            i_8 -= 1
        while (i_4 != 1)

uint128_t zmm8 = 0x7fffffffffffffff
int32_t i_5 = 0
float zmm6[0x4]
float var_48[0x4] = zmm6
int64_t result

do
    int32_t j = 0
    result = 0
    arg4 = 0xbf800000
    
    if (rsi.d s>= 4)
        int32_t r10_1 = (rsi - 3).d
        int32_t j_21 = 2
        float (* r9_4)[0x4] = arg1 - arg2
        void* rcx_10 = &arg2[1]
        result = zx.q(((r10_1 - 1) u>> 2) + 1) << 2
        
        do
            zmm1 = *(rcx_10 - 4)
            zmm0 = _mm_cvtps_pd((*(r9_4 + rcx_10 - 4))[0].q)
            zmm1 = _mm_cvtps_pd(zmm1[0].q)
            arg3 = _mm_cvtpd_ps(_mm_and_pd(zmm0, zmm8))
            zmm0 = _mm_cvtpd_ps(_mm_and_pd(zmm1, zmm8))
            
            if (not(arg3[0] > zmm0[0]))
                arg3 = zmm0
            
            if (not(arg3[0] <= arg4[0]))
                arg4 = arg3
                j_17 = j
            
            zmm1 = *rcx_10
            zmm0 = _mm_cvtps_pd((*(r9_4 + rcx_10))[0].q)
            zmm1 = _mm_cvtps_pd(zmm1[0].q)
            arg3 = _mm_cvtpd_ps(_mm_and_pd(zmm0, zmm8))
            zmm0 = _mm_cvtpd_ps(_mm_and_pd(zmm1, zmm8))
            
            if (not(arg3[0] > zmm0[0]))
                arg3 = zmm0
            
            if (not(arg3[0] <= arg4[0]))
                arg4 = arg3
                j_17 = j_21 - 1
            
            zmm1 = *(rcx_10 + 4)
            zmm0 = _mm_cvtps_pd((*(r9_4 + rcx_10 + 4))[0].q)
            zmm1 = _mm_cvtps_pd(zmm1[0].q)
            arg3 = _mm_cvtpd_ps(_mm_and_pd(zmm0, zmm8))
            zmm0 = _mm_cvtpd_ps(_mm_and_pd(zmm1, zmm8))
            
            if (not(arg3[0] > zmm0[0]))
                arg3 = zmm0
            
            if (not(arg3[0] <= arg4[0]))
                arg4 = arg3
                j_17 = j_21
            
            zmm1 = *(rcx_10 + 8)
            zmm0 = _mm_cvtps_pd((*(rcx_10 + r9_4 + 8))[0].q)
            zmm1 = _mm_cvtps_pd(zmm1[0].q)
            arg3 = _mm_cvtpd_ps(_mm_and_pd(zmm0, zmm8))
            zmm0 = _mm_cvtpd_ps(_mm_and_pd(zmm1, zmm8))
            
            if (not(arg3[0] > zmm0[0]))
                arg3 = zmm0
            
            if (not(arg3[0] <= arg4[0]))
                arg4 = arg3
                j_17 = j_21 + 1
            
            j += 4
            rcx_10 += 0x10
            j_21 += 4
        while (j s< r10_1)
    
    if (j s< rsi.d)
        result = &arg2[result]
        
        do
            zmm1 = *result
            zmm0 = _mm_cvtps_pd((*(result + arg1 - arg2))[0].q)
            zmm1 = _mm_cvtps_pd(zmm1[0].q)
            arg3 = _mm_cvtpd_ps(_mm_and_pd(zmm0, zmm8))
            zmm0 = _mm_cvtpd_ps(_mm_and_pd(zmm1, zmm8))
            
            if (not(arg3[0] > zmm0[0]))
                arg3 = zmm0
            
            if (not(arg3[0] <= arg4[0]))
                arg4 = arg3
                j_17 = j
            
            j += 1
            result += 4
        while (j s< rsi.d)
    
    if (zmm11[0] >= arg4[0])
        break
    
    int64_t r9_5 = 1
    
    if (rsi.d s> 1 && i_12 u>= 8)
        arg3[0] = arg_18.d
        arg3 = _mm_shuffle_ps(arg3, arg3, 0)
        
        if (arg2 u> &arg1[i_11] || &arg2[i_11] u< arg1)
            int32_t rax_20 = i_12 & 0x80000007
            
            if (rax_20 s< 0)
                rax_20 = ((rax_20 - 1) | 0xfffffff8) + 1
            
            int32_t r10_2 = 0
            
            do
                int64_t rdx_7 = sx.q(r10_2)
                r9_5 += 8
                int64_t rcx_14 = sx.q(r10_2 + 1)
                *(arg1 + (rdx_7 << 2)) =
                    _mm_add_ps(_mm_mul_ps(*(arg1 + (rcx_14 << 2)), arg3), *(arg1 + (rdx_7 << 2)))
                *(arg2 + (rdx_7 << 2)) =
                    _mm_add_ps(_mm_mul_ps(*(arg2 + (rcx_14 << 2)), arg3), *(arg2 + (rdx_7 << 2)))
                int64_t rdx_8 = sx.q(r10_2 + 4)
                int32_t rax_25 = r10_2 + 5
                r10_2 += 8
                int64_t rcx_15 = sx.q(rax_25)
                *(arg1 + (rdx_8 << 2)) =
                    _mm_add_ps(_mm_mul_ps(*(arg1 + (rcx_15 << 2)), arg3), *(arg1 + (rdx_8 << 2)))
                *(arg2 + (rdx_8 << 2)) =
                    _mm_add_ps(_mm_mul_ps(*(arg2 + (rcx_15 << 2)), arg3), *(arg2 + (rdx_8 << 2)))
            while (r10_2 + 1 s< rsi.d - rax_20)
    
    if (r9_5 s< rsi)
        if (rsi - r9_5 s>= 4)
            int32_t* rdx_10 = arg1 - arg2
            void* rcx_17 = &arg2[-1 + r9_5]
            int64_t j_18 = ((rsi - r9_5 - 4) u>> 2) + 1
            r9_5 += j_18 << 2
            int64_t j_1
            
            do
                void* rax_29 = rcx_17 + 0xc
                rcx_17 += 0x10
                zmm7[0] = zmm7[0] f* *(rdx_10 + rcx_17 - 0xc)
                zmm7[0] = zmm7[0] f+ *(rdx_10 + rcx_17 - 0x10)
                *(rdx_10 + rcx_17 - 0x10) = zmm7[0]
                zmm7[0] = zmm7[0] f* *(rcx_17 - 0xc)
                zmm7[0] = zmm7[0] f+ *(rcx_17 - 0x10)
                *(rcx_17 - 0x10) = zmm7[0]
                zmm7[0] = zmm7[0] f* *(rcx_17 + rdx_10 - 8)
                zmm7[0] = zmm7[0] f+ *(rdx_10 + rcx_17 - 0xc)
                *(rdx_10 + rcx_17 - 0xc) = zmm7[0]
                zmm7[0] = zmm7[0] f* *(rcx_17 - 8)
                zmm7[0] = zmm7[0] f+ *(rcx_17 - 0xc)
                *(rcx_17 - 0xc) = zmm7[0]
                zmm7[0] = zmm7[0] f* *(rdx_10 + rcx_17 - 4)
                zmm7[0] = zmm7[0] f+ *(rcx_17 + rdx_10 - 8)
                *(rcx_17 + rdx_10 - 8) = zmm7[0]
                zmm7[0] = zmm7[0] f* *rax_29
                zmm7[0] = zmm7[0] f+ *(rcx_17 - 8)
                *(rcx_17 - 8) = zmm7[0]
                zmm7[0] = zmm7[0] f* *(rdx_10 + rcx_17)
                zmm7[0] = zmm7[0] f+ *(rdx_10 + rcx_17 - 4)
                *(rdx_10 + rcx_17 - 4) = zmm7[0]
                zmm7[0] = zmm7[0] f* *rcx_17
                zmm7[0] = zmm7[0] f+ *rax_29
                *rax_29 = zmm7[0]
                j_1 = j_18
                j_18 -= 1
            while (j_1 != 1)
        
        if (r9_5 s< rsi)
            int32_t* rdx_12 = arg1 - arg2
            void* rcx_19 = &arg2[-1 + r9_5]
            int64_t j_19 = rsi - r9_5
            int64_t j_2
            
            do
                rcx_19 += 4
                zmm7[0] = zmm7[0] f* *(rdx_12 + rcx_19)
                zmm7[0] = zmm7[0] f+ *(rcx_19 + rdx_12 - 4)
                *(rcx_19 + rdx_12 - 4) = zmm7[0]
                zmm7[0] = zmm7[0] f* *rcx_19
                zmm7[0] = zmm7[0] f+ *(rcx_19 - 4)
                *(rcx_19 - 4) = zmm7[0]
                j_2 = j_19
                j_19 -= 1
            while (j_2 != 1)
    
    arg3 = 0x3f800000
    int64_t r8_9 = 0
    arg3[0] = 1f / zmm4[0]
    zmm4 = 0x3f800000
    zmm4[0] = 1f / zmm5[0]
    
    if (rsi.d s> 0 && rsi.d u>= 8)
        zmm1 = arg3[0]
        zmm5 = zmm4[0]
        int32_t j_3 = 0
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0)
        
        if (arg2 u> &arg1[i_11] || &arg2[i_11] u< arg1)
            int32_t rax_32 = rsi.d & 0x80000007
            
            if (rax_32 s< 0)
                rax_32 = ((rax_32 - 1) | 0xfffffff8) + 1
            
            do
                int64_t j_11 = sx.q(j_3)
                r8_9 += 8
                *(arg1 + (j_11 << 2)) = _mm_mul_ps(*(arg1 + (j_11 << 2)), zmm1)
                *(arg2 + (j_11 << 2)) = _mm_mul_ps(*(arg2 + (j_11 << 2)), zmm5)
                int32_t rax_35 = j_3 + 4
                j_3 += 8
                int64_t rcx_21 = sx.q(rax_35)
                *(arg1 + (rcx_21 << 2)) = _mm_mul_ps(*(arg1 + (rcx_21 << 2)), zmm1)
                *(arg2 + (rcx_21 << 2)) = _mm_mul_ps(*(arg2 + (rcx_21 << 2)), zmm5)
            while (j_3 s< rsi.d - rax_32)
    
    if (r8_9 s< rsi)
        if (rsi - r8_9 s>= 4)
            int64_t rcx_23 = arg1 - arg2
            void* rax_39 = &arg2[1 + r8_9]
            int64_t j_13 = ((rsi - r8_9 - 4) u>> 2) + 1
            r8_9 += j_13 << 2
            int64_t j_4
            
            do
                rax_39 += 0x10
                arg3[0] = arg3[0] f* *(rcx_23 + rax_39 - 0x14)
                *(rcx_23 + rax_39 - 0x14) = arg3[0]
                zmm4[0] = zmm4[0] f* *(rax_39 - 0x14)
                *(rax_39 - 0x14) = zmm4[0]
                arg3[0] = arg3[0] f* *(rcx_23 + rax_39 - 0x10)
                *(rcx_23 + rax_39 - 0x10) = arg3[0]
                zmm4[0] = zmm4[0] f* *(rax_39 - 0x10)
                *(rax_39 - 0x10) = zmm4[0]
                arg3[0] = arg3[0] f* *(rcx_23 + rax_39 - 0xc)
                *(rcx_23 + rax_39 - 0xc) = arg3[0]
                zmm4[0] = zmm4[0] f* *(rax_39 - 0xc)
                *(rax_39 - 0xc) = zmm4[0]
                arg3[0] = arg3[0] f* *(rcx_23 + rax_39 - 8)
                *(rcx_23 + rax_39 - 8) = arg3[0]
                zmm4[0] = zmm4[0] f* *(rax_39 - 8)
                *(rax_39 - 8) = zmm4[0]
                j_4 = j_13
                j_13 -= 1
            while (j_4 != 1)
        
        if (r8_9 s< rsi)
            void* rax_40 = &arg2[r8_9]
            int64_t rcx_25 = arg1 - arg2
            int64_t j_14 = rsi - r8_9
            int64_t j_5
            
            do
                rax_40 += 4
                arg3[0] = arg3[0] f* *(rcx_25 + rax_40 - 4)
                *(rcx_25 + rax_40 - 4) = arg3[0]
                zmm4[0] = zmm4[0] f* *(rax_40 - 4)
                *(rax_40 - 4) = zmm4[0]
                j_5 = j_14
                j_14 -= 1
            while (j_5 != 1)
    
    zmm6 = 0x3f7d70a4
    arg3 = _mm_cvtepi32_ps(zx.o(i_5))
    arg4[0] = arg4[0] - zmm11[0]
    arg3[0] = arg3[0] * 0.100000001f
    arg3[0] = arg3[0] + 0.800000012f
    zmm1 = _mm_cvtepi32_ps(zx.o(j_17 + 1))
    arg3[0] = arg3[0] * arg4[0]
    zmm1[0] = zmm1[0] * arg4[0]
    arg3[0] = arg3[0] / zmm1[0]
    zmm6[0] = 0.99000001f - arg3[0]
    sub_1403ecf60(arg1, rsi.d, zmm6[0])
    arg3 = zmm6
    result = sub_1403ecf60(arg2, rsi.d, arg3[0])
    int64_t j_7 = rsi - 1
    
    if (j_7 s>= 4)
        void* rcx_29 = &arg2[-1 + j_7]
        int64_t rdx_21 = arg1 - arg2
        int64_t j_20 = ((rsi - 5) u>> 2) + 1
        result = j_20 << 2
        j_7 -= result
        int64_t j_6
        
        do
            zmm0 = *(rcx_29 + rdx_21)
            arg3 = zmm7
            rcx_29 -= 0x10
            zmm7[0] = zmm7[0] f* *(rcx_29 + rdx_21 + 0x14)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_29 + rdx_21 + 0x10) = zmm0[0]
            zmm0 = *(rcx_29 + 0x10)
            arg3[0] = arg3[0] f* *(rcx_29 + 0x14)
            zmm0[0] = zmm0[0] - arg3[0]
            *(rcx_29 + 0x10) = zmm0[0]
            zmm0 = *(rcx_29 + rdx_21 + 0xc)
            zmm7[0] = zmm7[0] f* *(rcx_29 + rdx_21 + 0x10)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_29 + rdx_21 + 0xc) = zmm0[0]
            zmm0 = *(rcx_29 + 0xc)
            zmm7[0] = zmm7[0] f* *(rcx_29 + 0x10)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_29 + 0xc) = zmm0[0]
            zmm0 = *(rcx_29 + rdx_21 + 8)
            zmm7[0] = zmm7[0] f* *(rcx_29 + rdx_21 + 0xc)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_29 + rdx_21 + 8) = zmm0[0]
            zmm0 = *(rcx_29 + 8)
            zmm7[0] = zmm7[0] f* *(rcx_29 + 0xc)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_29 + 8) = zmm0[0]
            zmm0 = *(rcx_29 + rdx_21 + 4)
            zmm7[0] = zmm7[0] f* *(rcx_29 + rdx_21 + 8)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_29 + rdx_21 + 4) = zmm0[0]
            zmm0 = *(rcx_29 + 4)
            zmm7[0] = zmm7[0] f* *(rcx_29 + 8)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_29 + 4) = zmm0[0]
            j_6 = j_20
            j_20 -= 1
        while (j_6 != 1)
    
    if (j_7 s> 0)
        result = &arg2[-1 + j_7]
        float (* rcx_31)[0x4] = arg1 - arg2
        
        do
            zmm0 = *(rcx_31 + result)
            arg3 = zmm7
            j_7 -= 1
            result -= 4
            zmm7[0] = zmm7[0] f* *(rcx_31 + result + 8)
            zmm0[0] = zmm0[0] - zmm7[0]
            *(rcx_31 + result + 4) = zmm0[0]
            zmm0 = *(result + 4)
            arg3[0] = arg3[0] f* *(result + 8)
            zmm0[0] = zmm0[0] - arg3[0]
            *(result + 4) = zmm0[0]
        while (j_7 s> 0)
    
    zmm4 = zmm10
    zmm5 = zmm10
    int64_t r8_10 = 0
    zmm7[0] = zmm7[0] f* *arg1
    zmm7[0] = zmm7[0] + 1f
    zmm4[0] = zmm4[0] / zmm7[0]
    zmm7[0] = zmm7[0] f* *arg2
    arg5 = zmm4[0]
    zmm7[0] = zmm7[0] + 1f
    zmm5[0] = zmm5[0] / zmm7[0]
    
    if (rsi.d s> 0 && rsi.d u>= 8)
        zmm1 = arg5
        arg3 = zmm5[0]
        result = &arg1[i_11]
        int32_t j_8 = 0
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        arg3 = _mm_shuffle_ps(arg3, arg3, 0)
        
        if (arg2 u> result || &arg2[i_11] u< arg1)
            int32_t rax_44 = rsi.d & 0x80000007
            
            if (rax_44 s< 0)
                rax_44 = ((rax_44 - 1) | 0xfffffff8) + 1
            
            do
                int64_t j_12 = sx.q(j_8)
                r8_10 += 8
                *(arg1 + (j_12 << 2)) = _mm_mul_ps(*(arg1 + (j_12 << 2)), zmm1)
                *(arg2 + (j_12 << 2)) = _mm_mul_ps(*(arg2 + (j_12 << 2)), arg3)
                result = zx.q(j_8 + 4)
                j_8 += 8
                int64_t rcx_33 = sx.q(result.d)
                *(arg1 + (rcx_33 << 2)) = _mm_mul_ps(*(arg1 + (rcx_33 << 2)), zmm1)
                *(arg2 + (rcx_33 << 2)) = _mm_mul_ps(*(arg2 + (rcx_33 << 2)), arg3)
            while (j_8 s< rsi.d - rax_44)
    
    if (r8_10 s< rsi)
        result = rsi - r8_10
        
        if (result s>= 4)
            int64_t rcx_35 = arg1 - arg2
            result = &arg2[1 + r8_10]
            int64_t j_15 = ((rsi - r8_10 - 4) u>> 2) + 1
            r8_10 += j_15 << 2
            int64_t j_9
            
            do
                result += 0x10
                zmm4[0] = zmm4[0] f* *(result + rcx_35 - 0x14)
                *(result + rcx_35 - 0x14) = zmm4[0]
                zmm5[0] = zmm5[0] f* *(result - 0x14)
                *(result - 0x14) = zmm5[0]
                zmm4[0] = zmm4[0] f* *(result + rcx_35 - 0x10)
                *(result + rcx_35 - 0x10) = zmm4[0]
                zmm5[0] = zmm5[0] f* *(result - 0x10)
                *(result - 0x10) = zmm5[0]
                zmm4[0] = zmm4[0] f* *(rcx_35 + result - 0xc)
                *(rcx_35 + result - 0xc) = zmm4[0]
                zmm5[0] = zmm5[0] f* *(result - 0xc)
                *(result - 0xc) = zmm5[0]
                zmm4[0] = zmm4[0] f* *(result + rcx_35 - 8)
                *(result + rcx_35 - 8) = zmm4[0]
                zmm5[0] = zmm5[0] f* *(result - 8)
                *(result - 8) = zmm5[0]
                j_9 = j_15
                j_15 -= 1
            while (j_9 != 1)
        
        if (r8_10 s< rsi)
            result = &arg2[r8_10]
            int64_t rcx_37 = arg1 - arg2
            int64_t j_16 = rsi - r8_10
            int64_t j_10
            
            do
                result += 4
                zmm4[0] = zmm4[0] f* *(result + rcx_37 - 4)
                *(result + rcx_37 - 4) = zmm4[0]
                zmm5[0] = zmm5[0] f* *(result - 4)
                *(result - 4) = zmm5[0]
                j_10 = j_16
                j_16 -= 1
            while (j_10 != 1)
    
    i_5 += 1
while (i_5 s< 0xa)

return result
