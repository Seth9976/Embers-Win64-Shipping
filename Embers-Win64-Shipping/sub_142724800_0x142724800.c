// 函数: sub_142724800
// 地址: 0x142724800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f724c4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f724c4)
    
    if (data_143f724c4 == 0xffffffff)
        data_143f724b8 = 0xff
        sub_140b58260(&data_143f724bc, u"Invalid", 1)
        _Init_thread_footer(&data_143f724c4)

int64_t rdx

if (*(arg1 + 0x44) != data_143f724b8)
    rdx = *(arg1 + 0x48)
else
    char rcx = data_143f72518
    rdx = *(arg1 + 0x18)
    data_143f72518 = rcx + 1
    *(arg1 + 0x44) = rcx
    *(arg1 + 0x48) = rdx

*arg2 = *(arg1 + 0x44)
*(arg2 + 4) = rdx
return arg2
