// 函数: sub_14210a950
// 地址: 0x14210a950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023d68
__builtin_memset(&arg1[8], 0, 0x14)
TEB* gsbase

if (data_143f49228 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49228)
    
    if (data_143f49228 == 0xffffffff)
        _vfprintf_p_l(&data_143f49210, u"Math", u"MaterialExpression")
        atexit(sub_142d045b0)
        _Init_thread_footer(&data_143f49228)
        *(arg1 + 0x54) = 0x3f800000
        return arg1

*(arg1 + 0x54) = 0x3f800000
return arg1
