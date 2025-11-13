// 函数: sub_141971910
// 地址: 0x141971910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419683d0(&data_1439c8130)
int64_t rbp = 0
int64_t* rbx = data_1439c81e8
int64_t rdi = 0
uint64_t rsi_1 = sx.q(data_1439c81f0) << 3 u>> 3

if (rbx u> &rbx[sx.q(data_1439c81f0)])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t* rcx_1 = *rbx
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, 1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

bool cond:0 = data_1439c81f4 == 0
data_1439c81f0 = 0

if (not(cond:0))
    sub_1405c5570(&data_1439c81e8, 0)

int64_t performanceCount
TEB* gsbase

if (data_143f0fb70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f0fb70)
    
    if (data_143f0fb70 == 0xffffffff)
        QueryPerformanceCounter(&performanceCount)
        data_143f0fb68 = float.d(performanceCount) f* data_143d796f8 + 16777216.0
        _Init_thread_footer(&data_143f0fb70)

QueryPerformanceCounter(&performanceCount)
int64_t rbx_1 = data_143f01ff8
int64_t zmm6 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (data_143de5480 != 0)
    rbp.b = GetCurrentThreadId() != data_143de5470

int32_t result = *(rbx_1 + (rbp << 2))

if (result != 0 && not(zmm6 f- data_143f0fb68 f< _mm_cvtepi32_pd(zx.q(result))))
    data_143f0fb68 = zmm6
    AcquireSRWLockExclusive(&data_143f02050)
    performanceCount.d = 2
    sub_14195bd90(&data_143f02050, 2, &performanceCount)
    int32_t rdx_1 = performanceCount.d
    
    if (((rdx_1 u>> 1).b & 1) != 0)
        ReleaseSRWLockExclusive(&data_143f02050)
    else if ((rdx_1.b & 1) != 0)
        ReleaseSRWLockShared(&data_143f02050)
    
    return sub_141969b00(&data_1439c8130)

return result
