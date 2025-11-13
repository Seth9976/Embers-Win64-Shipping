// 函数: sub_141b92f60
// 地址: 0x141b92f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f31638 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31638)
    
    if (data_143f31638 == 0xffffffff)
        sub_140b58260(&data_143f31630, u"GetValue", 1)
        _Init_thread_footer(&data_143f31638)

sub_140d3a3a0(arg3, arg1)
int64_t result = data_143f31630
*(arg3 + 8) = result
return result
