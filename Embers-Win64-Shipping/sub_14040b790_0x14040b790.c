// 函数: sub_14040b790
// 地址: 0x14040b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x2] = 0x26901d7d
int32_t i_2 = 0
float zmm6[0x4] = arg3
int64_t* rbx = arg1
uint32_t r8 = 0
double zmm0
float zmm1[0x4]

if (arg2 s>= 4)
    uint64_t rax_3 = zx.q(((arg2 - 4) u>> 2) + 1)
    uint64_t i_7 = zx.q(rax_3.d)
    r8 = (rax_3 << 2).d
    uint64_t i
    
    do
        zmm0 = *arg1
        zmm1 = *(arg1 + 4)
        arg3 = arg1[1].d
        zmm0.d = zmm0.d f* zmm0.d
        zmm1[0] = zmm1[0] * zmm1[0]
        arg3[0] = arg3[0] * arg3[0]
        float zmm3 = *(arg1 + 0xc)
        zmm0.d = zmm0.d f+ zmm4[0]
        arg1 = &arg1[2]
        zmm4 = zmm0
        zmm4[0] = zmm4[0] + zmm1[0]
        zmm4[0] = zmm4[0] + arg3[0]
        zmm4[0] = zmm4[0] + zmm3 * zmm3
        i = i_7
        i_7 -= 1
    while (i != 1)

if (r8 s< arg2)
    int64_t i_8 = sx.q(arg2 - r8)
    int64_t i_1
    
    do
        zmm0 = *arg1
        arg1 += 4
        zmm0.d = zmm0.d f* zmm0.d
        zmm0.d = zmm0.d f+ zmm4[0]
        zmm4 = zmm0
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

float result[0x4] = sqrt(_mm_cvtps_pd(zmm4))
arg3 = 0x3f800000
zmm1 = zx.o(0)
zmm1[0] = fconvert.s(result[0].q)
arg3[0] = 1f / zmm1[0]
arg3[0] = arg3[0] * zmm6[0]

if (arg2 s> 0)
    if (arg2 u>= 4)
        zmm1 = arg3[0]
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        int32_t rax_7 = arg2 & 0x80000003
        
        if (rax_7 s< 0)
            rax_7 = ((rax_7 - 1) | 0xfffffffc) + 1
        
        do
            result = *rbx
            i_2 += 4
            rbx = &rbx[2]
            result = _mm_mul_ps(result, zmm1)
            *(rbx - 0x10) = result
        while (i_2 s< arg2 - rax_7)
    
    if (i_2 s< arg2)
        if (arg2 - i_2 s>= 4)
            uint64_t rax_16 = zx.q(((arg2 - i_2 - 4) u>> 2) + 1)
            uint64_t i_6 = zx.q(rax_16.d)
            i_2 += (rax_16 << 2).d
            uint64_t i_3
            
            do
                rbx = &rbx[2]
                arg3[0] = arg3[0] f* rbx[-2].d
                arg3[0] = arg3[0] f* *(rbx - 0xc)
                rbx[-2].d = arg3[0]
                *(rbx - 0xc) = arg3[0]
                result = arg3
                result[0] = result[0] f* rbx[-1].d
                arg3[0] = arg3[0] f* *(rbx - 4)
                rbx[-1].d = result[0]
                *(rbx - 4) = arg3[0]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
        
        if (i_2 s< arg2)
            int64_t i_5 = sx.q(arg2 - i_2)
            int64_t i_4
            
            do
                result = arg3
                rbx += 4
                result[0] = result[0] f* *(rbx - 4)
                *(rbx - 4) = result[0]
                i_4 = i_5
                i_5 -= 1
            while (i_4 != 1)

return result
