// 函数: sub_142838a58
// 地址: 0x142838a58
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg1 + 0xf98)
int32_t* rsi = arg4
int64_t rbp = *(arg1 + 0xdc8)
int32_t* rdi = arg3
int128_t zmm6 = *(arg1 + 0xf90)
int128_t zmm7 = *(arg1 + 0xf94)
int128_t zmm8 = *(arg1 + 0xf88)
int128_t zmm9 = *(arg1 + 0xf8c)
int128_t zmm10 = *(arg1 + 0xf6c)
int128_t zmm11 = *(arg1 + 0xf80)
int128_t zmm12 = *(arg1 + 0xf84)
int128_t zmm13 = *(arg1 + 0xf78)
int128_t zmm14 = *(arg1 + 0xf7c)
double _X = _mm_cvtps_pd(zmm10.q)
int128_t zmm15 = *(arg1 + 0xf70)
int64_t i_10 = sx.q(arg2)

if (not(0x3bc79ca10c924223 f<= fabs(_X)))
    zmm10 = zx.o(0)

int64_t i_5 = i_10
double zmm0
float zmm1[0x2]

if (i_10.d s> 0)
    float zmm2
    int128_t zmm3
    
    if (r15 s<= 0)
        int64_t rax_2 = 0
        
        do
            zmm3 = *(rbp + (rax_2 << 2))
            zmm0.d = zmm11.q.d f* zmm10.d
            zmm1 = zmm12.q
            zmm1[0] = zmm1[0] f* zmm15.d
            zmm3.d = zmm3.d f- zmm0.d
            zmm0.d = zmm14.q.d f* zmm10.d
            zmm3.d = zmm3.d f- zmm1[0]
            zmm2 = zmm3.d f+ zmm15.d
            zmm15 = zmm10
            zmm10 = zmm3
            *(rbp + (rax_2 << 2)) = zmm2 f* zmm13.d f+ zmm0.d
            rax_2 += 1
        while (rax_2 s< i_5)
    else
        int64_t rdx = 0
        
        do
            zmm3 = *(rbp + (rdx << 2))
            zmm0.d = zmm11.q.d f* zmm10.d
            int32_t rax_1 = r15
            r15 -= 1
            zmm1 = zmm12.q
            zmm1[0] = zmm1[0] f* zmm15.d
            zmm3.d = zmm3.d f- zmm0.d
            zmm0.d = zmm14.q.d f* zmm10.d
            zmm3.d = zmm3.d f- zmm1[0]
            zmm2 = zmm3.d f+ zmm15.d
            zmm15 = zmm10
            zmm10 = zmm3
            *(rbp + (rdx << 2)) = zmm2 f* zmm13.d f+ zmm0.d
            
            if (rax_1 s> 0)
                zmm11.d = zmm11.d f+ zmm6.d
                zmm12.d = zmm12.d f+ zmm7.d
                zmm13.d = zmm13.d f+ zmm8.d
                zmm14.d = zmm14.d f+ zmm9.d
            
            rdx += 1
        while (rdx s< i_5)

zmm1 = *(arg1 + 0xf9c)

if (_mm_cvtps_pd(zmm1) <= -0.5 || 0.5f <= zmm1[0])
    zmm0 = *(arg1 + 0xfa0)
    zmm0.d f- 0f
    
    if ((is_unordered.d(zmm0.d, 0f) || not(zmm0.d f== 0f)) && i_10.d s> 0)
        int64_t i_7 = i_5
        void* rax_6 = rbp - rdi
        int64_t i
        
        do
            zmm0.d = (*(rdi + rax_6)).d f* *(arg1 + 0xfa0)
            zmm0.d = zmm0.d f+ *rdi
            *rdi = zmm0.d
            rdi = &rdi[1]
            i = i_7
            i_7 -= 1
        while (i != 1)
    
    zmm0 = *(arg1 + 0xfa4)
    zmm0.d f- 0f
    
    if ((is_unordered.d(zmm0.d, 0f) || not(zmm0.d f== 0f)) && i_10.d s> 0)
        int64_t i_8 = i_5
        double* rax_8 = rbp - rsi
        int64_t i_1
        
        do
            zmm0.d = (*(rax_8 + rsi)).d f* *(arg1 + 0xfa4)
            zmm0.d = zmm0.d f+ *rsi
            *rsi = zmm0.d
            rsi = &rsi[1]
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
else if (i_10.d s> 0)
    int64_t i_6 = i_5
    float (* rax_4)[0x2] = rbp - rdi
    float* rsi_1 = rsi - rdi
    int64_t i_2
    
    do
        zmm1 = *(rax_4 + rdi)
        zmm1[0] = zmm1[0] f* *(arg1 + 0xfa0)
        zmm0.d = zmm1.d f+ *rdi
        *rdi = zmm0.d
        zmm1[0] = zmm1[0] f+ *(rsi_1 + rdi)
        *(rsi_1 + rdi) = zmm1[0]
        rdi = &rdi[1]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)

int32_t* rax_9 = arg5

if (rax_9 != 0)
    zmm0 = *(arg1 + 0xfac)
    zmm0.d f- 0f
    
    if ((is_unordered.d(zmm0.d, 0f) || not(zmm0.d f== 0f)) && i_10.d s> 0)
        int64_t i_9 = i_5
        double* rdx_2 = rbp - rax_9
        int64_t i_3
        
        do
            zmm0.d = (*(rdx_2 + rax_9)).d f* *(arg1 + 0xfac)
            zmm0.d = zmm0.d f+ *rax_9
            *rax_9 = zmm0.d
            rax_9 = &rax_9[1]
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)

int32_t* result = arg6

if (result != 0)
    zmm0 = *(arg1 + 0xfb4)
    zmm0.d f- 0f
    
    if ((is_unordered.d(zmm0.d, 0f) || not(zmm0.d f== 0f)) && i_10.d s> 0)
        void* rbp_1 = rbp - result
        int64_t i_4
        
        do
            zmm0.d = (*(result + rbp_1)).d f* *(arg1 + 0xfb4)
            zmm0.d = zmm0.d f+ *result
            *result = zmm0.d
            result = &result[1]
            i_4 = i_5
            i_5 -= 1
        while (i_4 != 1)

*(arg1 + 0xf6c) = zmm10.d
*(arg1 + 0xf70) = zmm15.d
*(arg1 + 0xf80) = zmm11.d
*(arg1 + 0xf84) = zmm12.d
*(arg1 + 0xf78) = zmm13.d
*(arg1 + 0xf7c) = zmm14.d
*(arg1 + 0xf98) = r15
return result
