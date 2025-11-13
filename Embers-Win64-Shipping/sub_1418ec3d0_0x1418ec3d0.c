// 函数: sub_1418ec3d0
// 地址: 0x1418ec3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi

if (*(arg1 + 0x78) != 0 || data_143efb31c != 0)
    rdi = sub_14197f080().d
else
    rdi = 0

if (data_1439c7238 == 0 || rdi s<= 0)
    return 

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm6[0x2] = zx.o(0)
int128_t zmm8
zmm8.q = float.d(performanceCount)
zmm8.q = zmm8.q f* data_143d796f8
*(arg1 + 0x34) += 1
uint64_t rax = zx.q(*(arg1 + 0x34))
zmm6[0] = float.d(rdi)
zmm8.q = zmm8.q f+ 16777216.0
zmm6[0] = zmm6[0] * 16.666666666666668
int128_t zmm7
zmm7.q = zmm8.q f- *(arg1 + 0x38)
double zmm1 = zmm6[0] * 0.10000000000000001
zmm7.q = zmm7.q f* 1000.0
zmm7.q = zmm7.q f+ *(arg1 + 0x40)
*(arg1 + 0x40) = zmm7.q
zmm7.q = zmm7.q f/ float.d(rax)
zmm7.q = zmm7.q f+ zmm1

if (rax.d u> 0x3e8)
    *(arg1 + 0x40) = zmm7.q
    *(arg1 + 0x34) = 1

if (not(zmm7.q f>= zmm6[0]))
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    zmm6[0] = zmm6[0] f- zmm7.q
    zmm6[0] = zmm6[0] * 0.0010000000474974513
    sub_140b732d0(_mm_cvtpd_ps(zmm6).d)
    QueryPerformanceCounter(&performanceCount)
    data_143f138d0 += performanceCount.d - performanceCount_1.d
    data_143f138e0 += 1

*(arg1 + 0x38) = zmm8.q
