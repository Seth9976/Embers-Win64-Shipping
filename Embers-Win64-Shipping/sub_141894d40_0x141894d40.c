// 函数: sub_141894d40
// 地址: 0x141894d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141802500()
int64_t* rcx = *(arg1 + 0x200)
int32_t rax_1 = (*(*rcx + 8))(rcx, arg1 + 0x10, arg1 + 0xd0, arg1 + 0xe0)
int64_t* rcx_1 = *(arg1 + 0x200)
*(arg1 + 0x10c) = rax_1
*(arg1 + 0x110) = (*(*rcx_1 + 8))(rcx_1, arg1 + 0x20, arg1 + 0xd0, arg1 + 0xe0)
double zmm6[0x2] = zx.o(0)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm8 = 0x4170000000000000
double zmm7[0x2] = zx.o(0)
zmm7[0] = float.d(performanceCount)
zmm7[0] = zmm7[0] f* data_143d796f8
zmm7[0] = zmm7[0] f+ zmm8.q
bool z

if (0 == *(arg1 + 0x104))
    *(arg1 + 0x104) = 0
    z = true
else
    *(arg1 + 0x104)
    z = false

if (not(z))
    bool z_1
    
    do
        data_143de5458 += 1
        int64_t* rax_5 = sub_140a242a0()
        int64_t r8_2 = *rax_5
        (*(r8_2 + 0x30))(rax_5, 2, r8_2)
        zmm6 = _mm_cvtpd_ps(zmm6)
        sub_140a35180(sub_140b18f30(), zmm6)
        int64_t* rcx_5 = *(arg1 + 0x1d0)
        (*(*rcx_5 + 0x20))(rcx_5, arg1 + 0xf0)
        sub_140b19e60()
        void* rdx_3 = data_1439a8bd0
        (*(rdx_3 + 0x48))(&data_1439a8bd0, rdx_3)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        uint128_t zmm0_1
        zmm0_1.q = 0x3f847ae147ae147b
            f- (float.d(performanceCount_1) f* data_143d796f8 f+ zmm8.q - zmm7[0])
        zmm0_1.d = fconvert.s(zmm0_1.q)
        sub_140b73230(_mm_max_ss(zmm0_1.d, 0))
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        double zmm0_2[0x2] = zx.o(0)
        zmm0_2[0] = float.d(performanceCount_2)
        zmm0_2[0] = zmm0_2[0] f* data_143d796f8
        zmm0_2[0] = zmm0_2[0] f+ zmm8.q
        zmm6 = zmm0_2
        zmm6[0] = zmm6[0] - zmm7[0]
        zmm7 = zmm0_2
        
        if (0 == *(arg1 + 0x104))
            *(arg1 + 0x104) = 0
            z_1 = true
        else
            *(arg1 + 0x104)
            z_1 = false
    while (not(z_1))

sub_140b19e60()
void* rdx_4 = data_1439a8bd0
(*(rdx_4 + 0x48))(&data_1439a8bd0, rdx_4)
bool z_2

if (0 == *(arg1 + 0x108))
    *(arg1 + 0x108) = 0
    z_2 = true
else
    *(arg1 + 0x108)
    z_2 = false

uint64_t result
result.b = not(z_2)
return result
