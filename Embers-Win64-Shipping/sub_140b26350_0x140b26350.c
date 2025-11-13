// 函数: sub_140b26350
// 地址: 0x140b26350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
TEB* gsbase

if (data_143de69c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de69c0)
    
    if (data_143de69c0 == 0xffffffff)
        QueryPerformanceCounter(&performanceCount)
        data_143de69b8 = float.d(performanceCount) f* data_143d796f8 + 16777216.0
        _Init_thread_footer(&data_143de69c0)

int64_t result = QueryPerformanceCounter(&performanceCount)
int64_t zmm1 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

if (arg2 == 0 && zmm1 f- data_143de69b8 f<= data_1439a4b80)
    return result

data_143de69b8 = zmm1
return sub_140b29d00(arg1)
