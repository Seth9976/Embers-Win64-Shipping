// 函数: sub_141f21320
// 地址: 0x141f21320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f3b180 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f3b180)
    
    if (data_143f3b180 == 0xffffffff)
        sub_140b58260(&data_143f3b178, u"Radius", 1)
        _Init_thread_footer(&data_143f3b180)

if (data_143f3b190 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f3b190)
    
    if (data_143f3b190 == 0xffffffff)
        sub_140b58260(&data_143f3b188, u"AttenuationRadius", 1)
        _Init_thread_footer(&data_143f3b190)

void* result

if (arg2 == 0)
    result = nullptr
    int64_t arg_10 = 0
else
    result = *(arg2 + 0x28)

if (result == data_143f3b178)
    result = zx.q(*(arg1 + 0x324))
    arg1[0x65].d = result.d
else if (result != data_143f3b188)
    return sub_141f21070(arg1, arg2)

if ((*(arg1 + 0x20c) & 2) != 0)
    return sub_141ee8490(arg1)

void* rcx_2 = arg1[0x56]

if (rcx_2 == 0)
    return result

return sub_141f2b280(rcx_2, arg1[0x65].d)
