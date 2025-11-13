// 函数: sub_141c296e0
// 地址: 0x141c296e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg4)
int32_t r12_1 = *(arg1 + 0x18) << 0xc
int64_t count = r14 << 3
int32_t temp0 = divs.dp.d(sx.q(r12_1 - arg3), arg2)
int32_t rbx_1 = *(arg1 + 0x38) - temp0 * r14.d
int32_t r15_2 = temp0 * arg2 + arg3
memset(arg1 + 0x48, 0, count)
int32_t r9_1 = rbx_1 + r14.d
uint128_t zmm6 = 0x3f30000000000000
float zmm1[0x2]
double zmm2
int32_t temp8_1

do
    int64_t rax_5 = *(arg1 + 0x30)
    int32_t i = r14.d
    int32_t r8_1 = r9_1
    int64_t rcx_2 = sx.q(r15_2) s>> 0xc
    zmm1 = *(rax_5 + (rcx_2 << 2))
    double zmm0_1
    zmm0_1.d = (*(rax_5 + (rcx_2 << 2) + 4)).d f- zmm1[0]
    zmm2 = _mm_cvtps_pd(zmm0_1).q * _mm_cvtepi32_pd(zx.q(r15_2) & 0xfff).q f* zmm6.q
        + _mm_cvtps_pd(zmm1).q
    
    do
        int32_t rax_9 = i & 0x80000007
        
        if (rax_9 s< 0)
            rax_9 = ((rax_9 - 1) | 0xfffffff8) + 1
        
        if (rax_9 - 1 u> 6)
            i -= 1
            int64_t i_2 = sx.q(i)
            r8_1 -= 1
            *(arg1 + (i_2 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q
                * zmm2 f+ *(arg1 + (i_2 << 3) + 0x48)
        label_141c297ff:
            i -= 1
            int64_t i_3 = sx.q(i)
            r8_1 -= 1
            *(arg1 + (i_3 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q
                * zmm2 f+ *(arg1 + (i_3 << 3) + 0x48)
        label_141c29826:
            i -= 1
            int64_t i_4 = sx.q(i)
            r8_1 -= 1
            *(arg1 + (i_4 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q
                * zmm2 f+ *(arg1 + (i_4 << 3) + 0x48)
        label_141c2984d:
            i -= 1
            int64_t i_5 = sx.q(i)
            r8_1 -= 1
            *(arg1 + (i_5 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q
                * zmm2 f+ *(arg1 + (i_5 << 3) + 0x48)
        label_141c29874:
            i -= 1
            int64_t i_6 = sx.q(i)
            r8_1 -= 1
            *(arg1 + (i_6 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q
                * zmm2 f+ *(arg1 + (i_6 << 3) + 0x48)
        label_141c2989b:
            i -= 1
            int64_t i_7 = sx.q(i)
            r8_1 -= 1
            *(arg1 + (i_7 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q
                * zmm2 f+ *(arg1 + (i_7 << 3) + 0x48)
        label_141c298c2:
            i -= 1
            int64_t i_8 = sx.q(i)
            r8_1 -= 1
            *(arg1 + (i_8 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q
                * zmm2 f+ *(arg1 + (i_8 << 3) + 0x48)
        else
            switch (rax_9)
                case 2
                    goto label_141c298c2
                case 3
                    goto label_141c2989b
                case 4
                    goto label_141c29874
                case 5
                    goto label_141c2984d
                case 6
                    goto label_141c29826
                case 7
                    goto label_141c297ff
        
        r8_1 -= 1
        i -= 1
        int64_t i_9 = sx.q(i)
        *(arg1 + (i_9 << 3) + 0x48) = _mm_cvtps_pd(*(arg1 + (sx.q(r8_1) << 2) + 0x848)).q * zmm2 f+
            *(arg1 + (i_9 << 3) + 0x48)
    while (i s> 0)
    
    r9_1 += r14.d
    temp8_1 = r15_2
    r15_2 -= arg2
while (temp8_1 - arg2 s>= 0)
int32_t r15_4 = arg2 - arg3
int32_t temp0_12 = divs.dp.d(sx.q(r12_1 - r15_4), arg2)
int32_t i_1 = r15_4 + temp0_12 * arg2
int32_t rbx_4 = (temp0_12 + 1) * r14.d + *(arg1 + 0x38)
memset(arg1 + 0x448, 0, count)
int32_t r9_2 = rbx_4 + r14.d
uint128_t zmm0_2

do
    int64_t rax_25 = *(arg1 + 0x30)
    int32_t j = r14.d
    int32_t r8_3 = r9_2
    int64_t rcx_9 = sx.q(i_1) s>> 0xc
    zmm1 = *(rax_25 + (rcx_9 << 2))
    zmm0_2.d = (*(rax_25 + (rcx_9 << 2) + 4)).d f- zmm1[0]
    zmm2 = _mm_cvtps_pd(zmm0_2.q).q f* _mm_cvtepi32_pd(zx.q(i_1) & 0xfff).q f* zmm6.q
        f+ _mm_cvtps_pd(zmm1).q
    
    do
        int32_t rax_29 = j & 0x80000007
        
        if (rax_29 s< 0)
            rax_29 = ((rax_29 - 1) | 0xfffffff8) + 1
        
        if (rax_29 - 1 u> 6)
            j -= 1
            int64_t j_1 = sx.q(j)
            r8_3 -= 1
            zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
            zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_1 << 3))
            *(arg1 + 0x448 + (j_1 << 3)) = zmm0_2.q
        label_141c299fd:
            j -= 1
            int64_t j_2 = sx.q(j)
            r8_3 -= 1
            zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
            zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_2 << 3))
            *(arg1 + 0x448 + (j_2 << 3)) = zmm0_2.q
        label_141c29a22:
            j -= 1
            int64_t j_3 = sx.q(j)
            r8_3 -= 1
            zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
            zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_3 << 3))
            *(arg1 + 0x448 + (j_3 << 3)) = zmm0_2.q
        label_141c29a47:
            j -= 1
            int64_t j_4 = sx.q(j)
            r8_3 -= 1
            zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
            zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_4 << 3))
            *(arg1 + 0x448 + (j_4 << 3)) = zmm0_2.q
        label_141c29a6c:
            j -= 1
            int64_t j_5 = sx.q(j)
            r8_3 -= 1
            zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
            zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_5 << 3))
            *(arg1 + 0x448 + (j_5 << 3)) = zmm0_2.q
        label_141c29a91:
            j -= 1
            int64_t j_6 = sx.q(j)
            r8_3 -= 1
            zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
            zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_6 << 3))
            *(arg1 + 0x448 + (j_6 << 3)) = zmm0_2.q
        label_141c29ab6:
            j -= 1
            int64_t j_7 = sx.q(j)
            r8_3 -= 1
            zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
            zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_7 << 3))
            *(arg1 + 0x448 + (j_7 << 3)) = zmm0_2.q
        else
            switch (rax_29)
                case 2
                    goto label_141c29ab6
                case 3
                    goto label_141c29a91
                case 4
                    goto label_141c29a6c
                case 5
                    goto label_141c29a47
                case 6
                    goto label_141c29a22
                case 7
                    goto label_141c299fd
        
        r8_3 -= 1
        j -= 1
        int64_t j_8 = sx.q(j)
        zmm0_2.q = _mm_cvtps_pd((*(arg1 + (sx.q(r8_3) << 2) + 0x848)).q).q f* zmm2
        zmm0_2.q = zmm0_2.q f+ *(arg1 + 0x448 + (j_8 << 3))
        *(arg1 + 0x448 + (j_8 << 3)) = zmm0_2.q
    while (j s> 0)
    
    i_1 -= arg2
    r9_2 -= r14.d
while (i_1 s> 0)

int64_t result

do
    int32_t rax_43 = r14.d & 0x80000007
    
    if (rax_43 s< 0)
        rax_43 = ((rax_43 - 1) | 0xfffffff8) + 1
    
    if (rax_43 - 1 u> 6)
        r14 = zx.q(r14.d - 1)
        int64_t rax_48 = sx.q(r14.d)
        zmm0_2.q = *(arg1 + 0x448 + (rax_48 << 3)) f+ *(arg1 + (rax_48 << 3) + 0x48)
        zmm0_2.q = zmm0_2.q f* arg5
        *(arg6 + (rax_48 << 2)) = _mm_cvtpd_ps(zmm0_2).d
    label_141c29b75:
        r14 = zx.q(r14.d - 1)
        int64_t rax_49 = sx.q(r14.d)
        zmm0_2.q = *(arg1 + 0x448 + (rax_49 << 3)) f+ *(arg1 + (rax_49 << 3) + 0x48)
        zmm0_2.q = zmm0_2.q f* arg5
        *(arg6 + (rax_49 << 2)) = _mm_cvtpd_ps(zmm0_2).d
    label_141c29b93:
        r14 = zx.q(r14.d - 1)
        int64_t rax_50 = sx.q(r14.d)
        zmm0_2.q = *(arg1 + 0x448 + (rax_50 << 3)) f+ *(arg1 + (rax_50 << 3) + 0x48)
        zmm0_2.q = zmm0_2.q f* arg5
        *(arg6 + (rax_50 << 2)) = _mm_cvtpd_ps(zmm0_2).d
    label_141c29bb1:
        r14 = zx.q(r14.d - 1)
        int64_t rax_51 = sx.q(r14.d)
        zmm0_2.q = *(arg1 + 0x448 + (rax_51 << 3)) f+ *(arg1 + (rax_51 << 3) + 0x48)
        zmm0_2.q = zmm0_2.q f* arg5
        *(arg6 + (rax_51 << 2)) = _mm_cvtpd_ps(zmm0_2).d
    label_141c29bcf:
        r14 = zx.q(r14.d - 1)
        int64_t rax_52 = sx.q(r14.d)
        zmm0_2.q = *(arg1 + 0x448 + (rax_52 << 3)) f+ *(arg1 + (rax_52 << 3) + 0x48)
        zmm0_2.q = zmm0_2.q f* arg5
        *(arg6 + (rax_52 << 2)) = _mm_cvtpd_ps(zmm0_2).d
    label_141c29bed:
        r14 = zx.q(r14.d - 1)
        int64_t rax_53 = sx.q(r14.d)
        zmm0_2.q = *(arg1 + 0x448 + (rax_53 << 3)) f+ *(arg1 + (rax_53 << 3) + 0x48)
        zmm0_2.q = zmm0_2.q f* arg5
        *(arg6 + (rax_53 << 2)) = _mm_cvtpd_ps(zmm0_2).d
    label_141c29c0b:
        r14 = zx.q(r14.d - 1)
        int64_t rax_54 = sx.q(r14.d)
        zmm0_2.q = *(arg1 + 0x448 + (rax_54 << 3)) f+ *(arg1 + (rax_54 << 3) + 0x48)
        zmm0_2.q = zmm0_2.q f* arg5
        *(arg6 + (rax_54 << 2)) = _mm_cvtpd_ps(zmm0_2).d
    else
        switch (rax_43)
            case 2
                goto label_141c29c0b
            case 3
                goto label_141c29bed
            case 4
                goto label_141c29bcf
            case 5
                goto label_141c29bb1
            case 6
                goto label_141c29b93
            case 7
                goto label_141c29b75
    
    r14 = zx.q(r14.d - 1)
    result = sx.q(r14.d)
    zmm0_2.q = *(arg1 + 0x448 + (result << 3)) f+ *(arg1 + (result << 3) + 0x48)
    zmm0_2.q = zmm0_2.q f* arg5
    *(arg6 + (result << 2)) = _mm_cvtpd_ps(zmm0_2).d
while (r14.d s> 0)

return result
