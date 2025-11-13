// 函数: sub_140b737b0
// 地址: 0x140b737b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

FILETIME creationTime
creationTime.dwLowDateTime = 0
creationTime.dwHighDateTime = 0
FILETIME exitTime[0x2]
exitTime[0].dwLowDateTime.q = 0
FILETIME kernelTime
kernelTime.dwLowDateTime = 0
kernelTime.dwHighDateTime = 0
FILETIME userTime
userTime.dwLowDateTime = 0
userTime.dwHighDateTime = 0
int64_t systemTimeAsFileTime = 0
GetProcessTimes(GetCurrentProcess(), &creationTime, &exitTime, &kernelTime, &userTime)
GetSystemTimeAsFileTime(&systemTimeAsFileTime)
uint64_t dwLowDateTime = zx.q(userTime.dwLowDateTime)
uint128_t zmm1 = 0x43f0000000000000
uint64_t rcx_3 = zx.q(userTime.dwHighDateTime) << 0x20
uint128_t zmm3
zmm3.q = float.d(rcx_3 + dwLowDateTime)

if (rcx_3 + dwLowDateTime s< 0)
    zmm3.q = zmm3.q f+ zmm1.q

uint64_t dwLowDateTime_1 = zx.q(kernelTime.dwLowDateTime)
uint64_t rcx_6 = zx.q(kernelTime.dwHighDateTime) << 0x20
double zmm0 = float.d(rcx_6 + dwLowDateTime_1)

if (rcx_6 + dwLowDateTime_1 s< 0)
    zmm0 = zmm0 f+ zmm1.q

zmm3.q = zmm3.q f+ zmm0
uint64_t rax_1 = zx.q(systemTimeAsFileTime.d)
double zmm4 = 9.9999999999999995e-08
uint64_t rcx_9 = zx.q(systemTimeAsFileTime:4.d) << 0x20
zmm3.q = zmm3.q f* zmm4
int64_t zmm2 = float.d(rcx_9 + rax_1)

if (rcx_9 + rax_1 s< 0)
    zmm2 = zmm2 f+ zmm1.q

uint64_t dwLowDateTime_2 = zx.q(creationTime.dwLowDateTime)
uint64_t rcx_12 = zx.q(creationTime.dwHighDateTime) << 0x20
zmm0 = float.d(rcx_12 + dwLowDateTime_2)

if (rcx_12 + dwLowDateTime_2 s< 0)
    zmm0 = zmm0 f+ zmm1.q

dwLowDateTime_2.b = 1
zmm1.q = zmm3.q f- data_143e19e78
zmm2 = zmm2 f* zmm4 f- zmm0 * zmm4

if (not(zmm1.q f<= 0.0))
    data_143e19e78 = zmm3.q
    zmm0 = zmm2 f- data_143e19e70
    data_143e19e70 = zmm2
    zmm1.q = zmm1.q f/ zmm0
    zmm1.q = zmm1.q f* 100.0
    data_143e18640 = _mm_cvtpd_ps(zmm1).d

return dwLowDateTime_2
