// 函数: sub_14256acb0
// 地址: 0x14256acb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f6bfb8 s> *rbx_1)
    _Init_thread_header(&data_143f6bfb8)
    
    if (data_143f6bfb8 == 0xffffffff)
        sub_140b58260(&data_143f6bfb0, u"TargetViewRotation", 1)
        _Init_thread_footer(&data_143f6bfb8)

int32_t result = *rbx_1

if (data_143f6bfc8 s> result)
    result = _Init_thread_header(&data_143f6bfc8)
    
    if (data_143f6bfc8 == 0xffffffff)
        sub_140b58260(&data_143f6bfc0, u"SpawnLocation", 1)
        return _Init_thread_footer(&data_143f6bfc8)

return result
