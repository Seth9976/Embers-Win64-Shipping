// 函数: sub_141a7c660
// 地址: 0x141a7c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f2b2f8 s> *rbx_1)
    _Init_thread_header(&data_143f2b2f8)
    
    if (data_143f2b2f8 == 0xffffffff)
        sub_140b58260(&data_143f2b2f0, u"bReversePlayback", 1)
        _Init_thread_footer(&data_143f2b2f8)

if (data_143f2b308 s> *rbx_1)
    _Init_thread_header(&data_143f2b308)
    
    if (data_143f2b308 == 0xffffffff)
        sub_140b58260(&data_143f2b300, u"StartTime", 1)
        _Init_thread_footer(&data_143f2b308)

if (data_143f2b318 s> *rbx_1)
    _Init_thread_header(&data_143f2b318)
    
    if (data_143f2b318 == 0xffffffff)
        sub_140b58260(&data_143f2b310, u"DurationFrames", 1)
        _Init_thread_footer(&data_143f2b318)

if (data_143f2b328 s> *rbx_1)
    _Init_thread_header(&data_143f2b328)
    
    if (data_143f2b328 == 0xffffffff)
        sub_140b58260(&data_143f2b320, u"PlaybackSettings", 1)
        _Init_thread_footer(&data_143f2b328)

if (data_143f2b338 s> *rbx_1)
    _Init_thread_header(&data_143f2b338)
    
    if (data_143f2b338 == 0xffffffff)
        sub_140b58260(&data_143f2b330, u"NetSyncProps", 1)
        _Init_thread_footer(&data_143f2b338)

void* result = **arg2

if (result != 0)
    return *(result + 0x28)

void* result_1 = result
return result
