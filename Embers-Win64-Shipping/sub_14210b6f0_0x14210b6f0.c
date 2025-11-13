// 函数: sub_14210b6f0
// 地址: 0x14210b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432cfdc0
TEB* gsbase

if (data_143f49068 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f49068)
    
    if (data_143f49068 == 0xffffffff)
        _vfprintf_p_l(&data_143f49050, u"Coordinates", u"MaterialExpression")
        atexit(sub_142d04b00)
        _Init_thread_footer(&data_143f49068)

*(arg1 + 0x44) = 0x3f800000
arg1[9].d = 0x3f800000
return arg1
