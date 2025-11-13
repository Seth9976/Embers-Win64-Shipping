// 函数: sub_14255d550
// 地址: 0x14255d550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f6b128 s> *rbx_1)
    _Init_thread_header(&data_143f6b128)
    
    if (data_143f6b128 == 0xffffffff)
        sub_140b58260(&data_143f6b120, u"RemoteViewPitch", 1)
        _Init_thread_footer(&data_143f6b128)

if (data_143f6b138 s> *rbx_1)
    _Init_thread_header(&data_143f6b138)
    
    if (data_143f6b138 == 0xffffffff)
        sub_140b58260(&data_143f6b130, u"PlayerState", 1)
        _Init_thread_footer(&data_143f6b138)

int32_t result = *rbx_1

if (data_143f6b148 s> result)
    result = _Init_thread_header(&data_143f6b148)
    
    if (data_143f6b148 == 0xffffffff)
        sub_140b58260(&data_143f6b140, u"Controller", 1)
        return _Init_thread_footer(&data_143f6b148)

return result
