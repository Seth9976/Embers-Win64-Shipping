// 函数: sub_140438eb0
// 地址: 0x140438eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a387e0()
TEB* gsbase

if (data_143cec448 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cec448)
    
    if (data_143cec448 == 0xffffffff)
        sub_140b58260(&data_143cec440, u"EngineCryptoFeature", 1)
        _Init_thread_footer(&data_143cec448)

(*(data_14399e720 + 0x18))(&data_14399e720, data_143cec440, &data_1439866f8)
return atexit(sub_142cb67c0) __tailcall
