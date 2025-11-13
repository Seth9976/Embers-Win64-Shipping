// 函数: sub_141c49d20
// 地址: 0x141c49d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f34b30 s> *rbx_1)
    _Init_thread_header(&data_143f34b30)
    
    if (data_143f34b30 == 0xffffffff)
        sub_140b58260(&data_143f34b28, &data_142d6be30, 1)
        _Init_thread_footer(&data_143f34b30)

if (data_143f34b40 s> *rbx_1)
    _Init_thread_header(&data_143f34b40)
    
    if (data_143f34b40 == 0xffffffff)
        sub_140b58260(&data_143f34b38, u"OPUS", 1)
        _Init_thread_footer(&data_143f34b40)

if (data_143f34b50 s> *rbx_1)
    _Init_thread_header(&data_143f34b50)
    
    if (data_143f34b50 == 0xffffffff)
        sub_140b58260(&data_143f34b48, &data_143206710, 1)
        _Init_thread_footer(&data_143f34b50)

sub_14236bfb0(arg3, nullptr)
*arg2 = data_143f34b28
return arg2
