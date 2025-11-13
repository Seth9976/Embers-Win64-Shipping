// 函数: sub_1424c0210
// 地址: 0x1424c0210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f64788 s> *rbx_1)
    _Init_thread_header(&data_143f64788)
    
    if (data_143f64788 == 0xffffffff)
        sub_140b58260(&data_143f64780, u"MatchState", 1)
        _Init_thread_footer(&data_143f64788)

int32_t result = *rbx_1

if (data_143f64798 s> result)
    result = _Init_thread_header(&data_143f64798)
    
    if (data_143f64798 == 0xffffffff)
        sub_140b58260(&data_143f64790, u"ElapsedTime", 1)
        return _Init_thread_footer(&data_143f64798)

return result
