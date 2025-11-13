// 函数: sub_14217c900
// 地址: 0x14217c900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
*(arg1 + 0x22c) = 0
double zmm7[0x2] = arg2
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm6[0x2] = zx.o(0)
bool cond:0 = zmm7[0].d f> 5f
zmm6[0] = float.d(performanceCount)
zmm6[0] = zmm6[0] f* data_143d796f8
zmm6[0] = zmm6[0] + 16777216.0
zmm6[0] = zmm6[0] f- *(arg1 + 0x220)
*(arg1 + 0x220) = zmm6.q
char rax

if (cond:0 || _mm_cvtpd_ps(zmm6) f> 5f)
    rax = 1
else
    rax = 0

arg2 = zx.o(0)
*(arg1 + 0x744) = rax
arg2[0] = fconvert.d(zmm7[0].d)
arg2[0] = arg2[0] f+ *(arg1 + 0x218)
zmm7[0].d = zmm7[0].d f+ *(arg1 + 0x210)
*(arg1 + 0x218) = arg2.q
*(arg1 + 0x210) = zmm7[0].d
sub_14217e6b0(arg1)

if (*(arg1 + 0x88) == 0)
    int32_t rax_1 = *(arg1 + 0x98)
    int64_t rbx_1 = sx.q(rax_1 - 1)
    
    if (rax_1 - 1 s>= 0)
        int64_t temp1_1
        
        do
            int64_t* rcx_2 = *(*(arg1 + 0x90) + (rbx_1 << 3))
            
            if (*(rcx_2 + 0x134) == 1)
                (*(*rcx_2 + 0x2d8))(rcx_2)
            
            temp1_1 = rbx_1
            rbx_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    if (*(arg1 + 0xf8) s> 0)
        void* rbx_2 = *(arg1 + 0xf0)
        void* rbp_1 = rbx_2 + sx.q(*(arg1 + 0xf8)) * 0x18
        
        if (rbx_2 != rbp_1)
            do
                if (zmm6[0] f- *(rbx_2 + 0x10) f< _mm_cvtepi32_pd(zx.q(*(arg1 + 0x100))))
                    break
                
                sub_142173fa0(arg1 + 0xa0, rbx_2)
                rsi += 1
                rbx_2 += 0x18
            while (rbx_2 != rbp_1)
            
            if (rsi s> 0)
                sub_140974890(arg1 + 0xf0, 0, rsi, 1)

int32_t rbx_3 = *(arg1 + 0x194)
char result = sub_140b5b8a0(*(arg1 + 0x190), 0x11a)
int32_t rcx_6
rcx_6.b = rbx_3 == 0

if ((rcx_6.b & result) == 0)
    data_143f3d170 = 0
else
    sub_140b3cdd0()
    result = sub_140b40280()
    
    if (result == 0)
        data_143f3d170 = 0
    else
        bool cond:3_1 = *(arg1 + 0x88) == 0
        data_143f3d170 = 1
        
        if (not(cond:3_1))
            data_143f3d170 = 0

return result
