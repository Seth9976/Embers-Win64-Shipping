// 函数: sub_141c7e6a0
// 地址: 0x141c7e6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7 = arg2

if (*(arg1 + 0x3c) == 0)
    return 

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rcx_1 = *(arg1 + 0x6c)
uint128_t zmm2
zmm2.q = float.d(performanceCount)
zmm2.q = zmm2.q f* data_143d796f8
arg1[0xc].b = 0
zmm2.q = zmm2.q f+ 16777216.0
arg1[0x13] = zmm2.q
uint128_t zmm0

if (rcx_1 s> 0)
    arg2 = zx.o(arg1[0x14])
    
    if (not(arg2.q f== 0.0))
        zmm0.q = zmm2.q f- arg2.q
        zmm0.q = zmm0.q f* -1000.0
        
        if (neg.d(rcx_1) - int.d(zmm0.q) s<= 0)
            *(arg1 + 0x74) = 0
        else
            *(arg1 + 0x74) += 1

int32_t rcx_4 = *(arg1 + 0x74)

if (rcx_4 s<= 0 || rcx_4 s<= sx.d(arg1[0xe].b))
    zmm0.q = fconvert.d(zmm7.d)
    zmm0.q = zmm0.q f/ arg1[0x16]
else
    zmm0 = 0x3ff0000000000000

char rax_3 = arg1[0xa].b
char rcx_5 = rax_3
arg2 = _mm_cvtpd_ps(zmm0)
arg1[0x17].d = arg2.d
uint128_t zmm3 = arg2

if (rax_3 s> 0)
    int32_t rdx_1 = arg1[7].d
    
    if (rdx_1 s> 0)
        zmm2.q = zmm2.q f- arg1[0xb]
        zmm0 = _mm_cvtepi32_ps(zx.o(rdx_1))
        
        if (not(_mm_cvtpd_ps(zmm2).d f<= zmm0.d))
            sub_141c7ecb0(arg1, 0)
            zmm3 = arg1[0x17].d
            rcx_5 = arg1[0xa].b

zmm3 = __maxss_xmmss_memss(zmm3.d, 0x3e800000)
sub_141c7d910(sx.q(rcx_5) * 0x30 + arg1[8], arg1 + 0x1c, zmm3.d)
uint128_t zmm0_1
zmm0_1.q = arg1[0x13] f- arg1[0xf]
int32_t rax

if (zmm0_1.q f<= 1.0)
    rax = *arg1
else
    int32_t rcx_10 = 0
    int32_t rax_6 = arg1[0x12].d + 1
    
    if (rax_6 s< arg1[0x11].d)
        rcx_10 = rax_6
    
    uint128_t* rdx_3 = sx.q(rcx_10) * 0x1c
    arg1[0x12].d = rcx_10
    int64_t rcx_11 = arg1[0x10]
    *(rdx_3 + rcx_11) = *arg1
    *(rdx_3 + rcx_11 + 0x10) = arg1[2]
    *(rdx_3 + rcx_11 + 0x18) = arg1[3].d
    arg1[0xf] = arg1[0x13]
    rax = 0
    *arg1 = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x14) = 0

arg1[0xd].d = 0
*(arg1 + 0x3e) = 0
arg1[0x15].d = rax
