// 函数: sub_1403f7720
// 地址: 0x1403f7720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg6
int64_t r11 = arg3
uint128_t zmm13 = 0x40a00000
int128_t zmm8 = zx.o(0)
uint128_t zmm0
uint128_t zmm2

if (rbx == 2)
    uint128_t zmm3 = zx.o(0)
    int16_t* rsi_1 = *(arg1 + 0x20)
    int64_t r14_1 = sx.q(arg7)
    int64_t i_3 = 8
    int16_t* rbx_1 = rsi_1
    uint128_t zmm1
    int64_t i
    
    do
        int32_t rax_1 = sx.d(*rbx_1)
        rbx_1 = &rbx_1[1]
        zmm2 = zx.o(0)
        int64_t r8 = sx.q(rax_1 << arg5)
        int64_t rdx = sx.q(sx.d(*rbx_1) << arg5)
        
        if (r8 s< rdx)
            if (rdx - r8 s>= 4)
                void* rcx_1 = arg2 + ((r14_1 + r8) << 2)
                int64_t r9_1 = neg.q(r14_1)
                int64_t j_5 = ((rdx - r8 - 4) u>> 2) + 1
                r8 += j_5 << 2
                int64_t j
                
                do
                    zmm1 = *(4 - (r14_1 << 2) + rcx_1)
                    zmm0 = *(rcx_1 + (neg.q(r14_1) << 2))
                    rcx_1 += 0x10
                    zmm0.d = zmm0.d f* *(rcx_1 - 0x10)
                    zmm1.d = zmm1.d f* *(rcx_1 - 0xc)
                    zmm0.d = zmm0.d f+ zmm2.d
                    zmm2 = zmm1
                    zmm1.d = (*(rcx_1 + (r9_1 << 2) - 4)).d f* *(rcx_1 - 4)
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm0.d = (*(rcx_1 + (r9_1 << 2) - 8)).d f* *(rcx_1 - 8)
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    j = j_5
                    j_5 -= 1
                while (j != 1)
            
            if (r8 s< rdx)
                void* rax_13 = arg2 + (r8 << 2)
                int64_t j_8 = rdx - r8
                int64_t j_1
                
                do
                    zmm0 = *(rax_13 + (r14_1 << 2))
                    rax_13 += 4
                    zmm0.d = zmm0.d f* *(rax_13 - 4)
                    zmm0.d = zmm0.d f+ zmm2.d
                    zmm2 = zmm0
                    j_1 = j_8
                    j_8 -= 1
                while (j_1 != 1)
        
        zmm2.d = zmm2.d f+ zmm3.d
        zmm3 = zmm2
        i = i_3
        i_3 -= 1
    while (i != 1)
    zmm3.d = zmm3.d f* 0.125f
    zmm0 = zmm3
    
    if (not(0f f<= zmm3.d))
        zmm0 ^= 0x80000000
    
    if (not(zmm0.d f<= 1f))
        zmm3 = 0x3f800000
    else if (not(0f f<= zmm3.d))
        zmm3 ^= 0x80000000
    
    int64_t rax_14 = sx.q(arg11)
    uint128_t zmm9 = zmm3
    
    if (rax_14 s> 8)
        int16_t* rbx_2 = &rsi_1[8]
        int64_t i_4 = rax_14 - 8
        int64_t i_1
        
        do
            int32_t rax_15 = sx.d(*rbx_2)
            rbx_2 = &rbx_2[1]
            zmm2 = zx.o(0)
            int64_t r8_1 = sx.q(rax_15 << arg5)
            int64_t rdx_1 = sx.q(sx.d(*rbx_2) << arg5)
            
            if (r8_1 s>= rdx_1)
                zmm0 = zmm2
            else
                if (rdx_1 - r8_1 s>= 4)
                    void* rcx_3 = arg2 + ((r14_1 + r8_1) << 2)
                    int64_t r9_3 = neg.q(r14_1)
                    int64_t j_6 = ((rdx_1 - r8_1 - 4) u>> 2) + 1
                    r8_1 += j_6 << 2
                    int64_t j_2
                    
                    do
                        zmm1 = *(4 - (r14_1 << 2) + rcx_3)
                        zmm0 = *(rcx_3 + (neg.q(r14_1) << 2))
                        rcx_3 += 0x10
                        zmm0.d = zmm0.d f* *(rcx_3 - 0x10)
                        zmm1.d = zmm1.d f* *(rcx_3 - 0xc)
                        zmm0.d = zmm0.d f+ zmm2.d
                        zmm2 = zmm1
                        zmm1.d = (*(rcx_3 + (r9_3 << 2) - 4)).d f* *(rcx_3 - 4)
                        zmm2.d = zmm2.d f+ zmm0.d
                        zmm0.d = (*(rcx_3 + (r9_3 << 2) - 8)).d f* *(rcx_3 - 8)
                        zmm2.d = zmm2.d f+ zmm0.d
                        zmm2.d = zmm2.d f+ zmm1.d
                        j_2 = j_6
                        j_6 -= 1
                    while (j_2 != 1)
                
                if (r8_1 s< rdx_1)
                    void* rax_27 = arg2 + (r8_1 << 2)
                    int64_t j_9 = rdx_1 - r8_1
                    int64_t j_3
                    
                    do
                        zmm0 = *(rax_27 + (r14_1 << 2))
                        rax_27 += 4
                        zmm0.d = zmm0.d f* *(rax_27 - 4)
                        zmm0.d = zmm0.d f+ zmm2.d
                        zmm2 = zmm0
                        j_3 = j_9
                        j_9 -= 1
                    while (j_3 != 1)
                
                if (0f f<= zmm2.d)
                    zmm0 = zmm2
                else
                    zmm0 = zmm2 ^ 0x80000000
            
            if (not(zmm0.d f> zmm9.d))
                zmm9 = zmm2
                
                if (not(0f f<= zmm2.d))
                    zmm9 ^= 0x80000000
            
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    zmm0 = zmm9
    
    if (not(0f f<= zmm9.d))
        zmm0 ^= 0x80000000
    
    if (not(zmm0.d f<= 1f))
        zmm9 = 0x3f800000
    else if (not(0f f<= zmm9.d))
        zmm9 ^= 0x80000000
    
    zmm3.d = zmm3.d f* zmm3.d
    zmm0.d = 1.00100005f f- zmm3.d
    zmm9.d = zmm9.d f* zmm9.d
    int128_t zmm7
    zmm7.d = 1.00100005f f- zmm9.d
    uint128_t zmm11
    zmm11.d = fconvert.s(log(_mm_cvtps_pd(zmm0.q).q) * 1.4426950408889634)
    uint128_t zmm10
    zmm10.d = zmm11.d f* 0.5f
    zmm0.q = log(_mm_cvtps_pd(zmm7.q)).q f* 1.4426950408889634
    zmm1.d = fconvert.s(zmm0.q)
    
    if (not(zmm10.d f> zmm1.d))
        zmm10 = zmm1
    
    zmm11.d = zmm11.d f* 0.75f
    zmm0 = 0xc0800000
    
    if (not(-4f f> zmm11.d))
        zmm0 = zmm11
    
    zmm10.d = zmm10.d f* 0.5f
    zmm0.d = zmm0.d f+ 5f
    zmm10 ^= 0x80000000
    zmm13 = zmm0
    zmm0.d = (*arg9).d f+ 0.25f
    
    if (not(zmm10.d f> zmm0.d))
        zmm0 = zmm10
    
    r11 = arg3
    rbx = arg6
    *arg9 = zmm0.d

int64_t i_2 = 0

do
    if (arg4 - 1 s> 0)
        int32_t rcx_4 = 2 - arg4
        void* rdx_2 = r11 + ((sx.q(*(arg1 + 8)) * i_2) << 2)
        uint64_t j_7 = zx.q(arg4 - 1)
        uint64_t j_4
        
        do
            zmm0 = zx.o(rcx_4)
            rcx_4 += 2
            rdx_2 += 4
            zmm0.d = _mm_cvtepi32_ps(zmm0).d f* *(rdx_2 - 4)
            zmm8.d = zmm8.d f+ zmm0.d
            j_4 = j_7
            j_7 -= 1
        while (j_4 != 1)
    
    i_2 += 1
while (i_2 s< sx.q(rbx))

zmm2 = 0xc0000000
zmm8.d = zmm8.d f/ _mm_cvtepi32_ps(zx.o((arg4 - 1) * rbx)).d
zmm8.d = zmm8.d f+ 1f
zmm8.d = zmm8.d f/ 6f

if (zmm8.d f> 2f)
    zmm8 = 0x40000000
else if (not(-2f f<= zmm8.d))
    zmm8 = 0xc0000000
else if (not(zmm8.d f<= 2f))
    zmm8 = 0x40000000

zmm13.d = zmm13.d f- zmm8.d
zmm0.d = arg10.d f* 2f
zmm13.d = zmm13.d f- arg12
zmm13.d = zmm13.d f- zmm0.d

if (*arg8 != 0)
    zmm0.d = (*(arg8 + 8)).d f+ 0.0500000007f
    zmm0.d = zmm0.d f* 2f
    
    if (zmm0.d f> 2f)
        zmm2 = 0x40000000
    else if (not(-2f f> zmm0.d))
        if (zmm0.d f<= 2f)
            zmm2 = zmm0
        else
            zmm2 = 0x40000000
    
    zmm13.d = zmm13.d f- zmm2.d

zmm13.d = zmm13.d f+ 0.5f
zmm0.q = fconvert.d(zmm13.d)
int32_t result = int.d(floor(zmm0.q))

if (result s< 0)
    return 0

if (result s> 0xa)
    return 0xa

return result
