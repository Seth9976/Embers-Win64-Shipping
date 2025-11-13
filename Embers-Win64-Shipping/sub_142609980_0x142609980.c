// 函数: sub_142609980
// 地址: 0x142609980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f712a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f712a0)
    
    if (data_143f712a0 == 0xffffffff)
        data_143f7129c = 0x31800000
        _Init_thread_footer(&data_143f712a0)

float zmm2 = arg2[1] f- arg1[1]
float zmm0 = arg2[2] f- arg1[2]
float zmm1 = *arg2 - *arg1
int32_t result
result.b = data_143f7129c > zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0
return result
