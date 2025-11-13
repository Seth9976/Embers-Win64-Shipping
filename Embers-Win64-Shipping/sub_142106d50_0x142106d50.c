// 函数: sub_142106d50
// 地址: 0x142106d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cfb38
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x3c)

if (data_143f48fe8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f48fe8)
    
    if (data_143f48fe8 == 0xffffffff)
        _vfprintf_p_l(&data_143f48fd0, u"Math", u"MaterialExpression")
        atexit(sub_142d02f50)
        _Init_thread_footer(&data_143f48fe8)

*(arg1 + 0x7c) = 0
arg1[0x10].d = 0
*(arg1 + 0x84) = 0x3f800000
return arg1
