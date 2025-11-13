// 函数: sub_1424c02d0
// 地址: 0x1424c02d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f64800 s> *rbx_1)
    _Init_thread_header(&data_143f64800)
    
    if (data_143f64800 == 0xffffffff)
        sub_140b58260(&data_143f647f8, u"GameModeClass", 1)
        _Init_thread_footer(&data_143f64800)

if (data_143f64810 s> *rbx_1)
    _Init_thread_header(&data_143f64810)
    
    if (data_143f64810 == 0xffffffff)
        sub_140b58260(&data_143f64808, u"SpectatorClass", 1)
        _Init_thread_footer(&data_143f64810)

if (data_143f64820 s> *rbx_1)
    _Init_thread_header(&data_143f64820)
    
    if (data_143f64820 == 0xffffffff)
        sub_140b58260(&data_143f64818, u"bReplicatedHasBegunPlay", 1)
        _Init_thread_footer(&data_143f64820)

int32_t result = *rbx_1

if (data_143f64830 s> result)
    result = _Init_thread_header(&data_143f64830)
    
    if (data_143f64830 == 0xffffffff)
        sub_140b58260(&data_143f64828, u"ReplicatedWorldTimeSeconds", 1)
        return _Init_thread_footer(&data_143f64830)

return result
