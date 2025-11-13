// 函数: sub_142418e40
// 地址: 0x142418e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5d8f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5d8f0)
    
    if (data_143f5d8f0 == 0xffffffff)
        sub_140b58260(&data_143f5d8e8, u"Intensity", 1)
        _Init_thread_footer(&data_143f5d8f0)

int64_t* rcx = arg1[0x84]

if (rcx != 0 && arg2 != 0 && *(arg2 + 0x28) == data_143f5d8e8)
    (*(*rcx + 0x38))(rcx, arg1)

return sub_141f44af0(arg1, arg2) __tailcall
