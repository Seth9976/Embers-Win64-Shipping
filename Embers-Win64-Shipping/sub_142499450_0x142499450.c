// 函数: sub_142499450
// 地址: 0x142499450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f62960 s> *rbx_1)
    _Init_thread_header(&data_143f62960)
    
    if (data_143f62960 == 0xffffffff)
        sub_140b58260(&data_143f62958, u"PlayerState", 1)
        _Init_thread_footer(&data_143f62960)

int32_t result = *rbx_1

if (data_143f62970 s> result)
    result = _Init_thread_header(&data_143f62970)
    
    if (data_143f62970 == 0xffffffff)
        sub_140b58260(&data_143f62968, u"Pawn", 1)
        return _Init_thread_footer(&data_143f62970)

return result
