// 函数: sub_1421069b0
// 地址: 0x1421069b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf618
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x3c)

if (data_143f49388 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49388)
    
    if (data_143f49388 == 0xffffffff)
        _vfprintf_p_l(&data_143f49370, u"Utility", u"MaterialExpression")
        atexit(sub_142d02d80)
        _Init_thread_footer(&data_143f49388)

*(arg1 + 0x7c) = 0x3d4ccccd
arg1[0x10] = 0x3f000000
return arg1
