// 函数: sub_1426c5aa0
// 地址: 0x1426c5aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg3
int32_t rax = arg4

if (arg4 == 0xffffffff)
    rax = *(arg3 + 0x124)

arg1[1].d = rax

if (arg4 == 0xffffffff)
    int64_t rdx = sx.q(*(arg3 + 0x124))
    arg1[1].d = rdx.d
    int32_t r8
    
    if (rdx.d s>= 0 && rdx.d s< arg3[1].d)
        r8 = *(*arg3 + (rdx << 3) + 4)
    
    if (rdx.d s< 0 || rdx.d s>= arg3[1].d || test_bit(r8, 0x1e) || r8 s< 0)
        int32_t i = rdx.d + 1
        arg1[1].d = i
        
        while (i s< arg3[1].d)
            int32_t r8_1 = *(*arg3 + (sx.q(i) << 3) + 4)
            
            if (not(test_bit(r8_1, 0x1e)) && r8_1 s>= 0)
                break
            
            i += 1
            arg1[1].d = i
else
    arg1[1].d = arg4

char rcx_2 = *(arg1 + 0x22)
arg1[4].b = *(arg2 + 0x48)
*(arg1 + 0x21) = *(arg2 + 0x49)
char rax_5 = 4

if ((*(arg2 + 0x34) & 0xfd) != 0)
    rax_5 = 0

rcx_2 = (rcx_2 & 0xfb) | rax_5
*(arg1 + 0x22) = rcx_2
double zmm1

if (0f f>= *(arg3 + 0x14c))
    zmm1 = -1.0
else
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm1 = float.d(performanceCount)
    rcx_2 = *(arg1 + 0x22)
    int64_t temp0_1 = _mm_cvtps_pd(*(arg3 + 0x14c))
    zmm1 = zmm1 f* data_143d796f8 + 16777216.0 f+ temp0_1

arg1[3] = 0
*(arg1 + 0x22) = (rcx_2 & 0xfd) | 1
arg1[2] = zmm1
return arg1
