// 函数: sub_1420423c0
// 地址: 0x1420423c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

TEB* gsbase

if (data_143f407a0 s> *(*(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14))
    _Init_thread_header(&data_143f407a0)
    
    if (data_143f407a0 == 0xffffffff)
        data_143f4079c = data_14399fa50
        _Init_thread_footer(&data_143f407a0)

if (data_14399fa50 == data_143f4079c)
    return 

int32_t rax_3 = *(arg2 + 0x614)
uint128_t performanceCount_1 = zx.o(*(arg2 + 0x60c))
float zmm12[0x4] = *(arg2 + 0x508)
uint128_t zmm8
zmm8.d = performanceCount_1.d f- data_143f407b0
int32_t arg_10 = (*(arg2 + 0x504)).d
uint128_t zmm0 = *(arg2 + 0x514)
float zmm13[0x4] = *(arg2 + 0x518)
int64_t performanceCount = performanceCount_1.q
int128_t zmm10 = performanceCount:4.d
int128_t zmm9 = rax_3
int128_t zmm7
zmm7.d = zmm10.d f- data_143f407b4
int32_t arg_18 = zmm0.d
int128_t zmm6
zmm6.d = zmm9.d f- data_143f407b8
float zmm15[0x4] = *(arg2 + 0x528)
int32_t arg_20 = (*(arg2 + 0x524)).d
QueryPerformanceCounter(&performanceCount)
int32_t rdx = data_143f40638
float zmm2[0x4] = zx.o(0)
zmm2[0].q = float.d(performanceCount)
data_143f4079c = data_14399fa50
data_143f407b0 = performanceCount_1.d
zmm2[0].q = zmm2[0].q f* data_143d796f8
data_143f407b4 = zmm10.d
data_143f407b8 = zmm9.d
zmm2[0].q = zmm2[0].q f+ 16777216.0
zmm0.q = zmm2.q f- data_143f407a8
data_143f407a8 = zmm2.q
zmm2 = *(arg2 + 0x60c)
zmm0.d = 1f f/ _mm_cvtpd_ps(zmm0)
uint128_t zmm14
zmm14.d = zmm0.d f* zmm8.d
zmm8 = zmm0
zmm0.d = zmm0.d f* zmm6.d
zmm8.d = zmm8.d f* zmm7.d
performanceCount.d = zmm0.d
sub_140b43f30("PosX", rdx, zmm2, 0)
sub_140b43f30("PosY", data_143f40638, *(arg2 + 0x610), 0)
sub_140b43f30("PosZ", data_143f40638, *(arg2 + 0x614), 0)
sub_140b43f30("ForwardX", data_143f40638, zmm12, 0)
sub_140b43f30("ForwardY", data_143f40638, zmm13, 0)
sub_140b43f30("ForwardZ", data_143f40638, zmm15, 0)
sub_140b43f30(&data_1432a3e0c, data_143f40638, arg_10, 0)
sub_140b43f30(&data_1432a3e10, data_143f40638, arg_18, 0)
sub_140b43f30(&data_1432a3e14, data_143f40638, arg_20, 0)
float zmm0_1 = performanceCount.d
zmm14.d = zmm14.d f* zmm14.d
zmm8.d = zmm8.d f* zmm8.d
zmm14.d = zmm14.d f+ zmm8.d
zmm14.d = zmm14.d f+ zmm0_1 * zmm0_1
sub_140b43f30("Speed", data_143f40638, _mm_sqrt_ss(0, zmm14.d), 0)
