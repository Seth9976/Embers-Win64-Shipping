// 函数: sub_142109280
// 地址: 0x142109280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf0b8
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x28)

if (data_143f48e88 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f48e88)
    
    if (data_143f48e88 == 0xffffffff)
        _vfprintf_p_l(&data_143f48e70, u"Math", u"MaterialExpression")
        atexit(sub_142d03cc0)
        _Init_thread_footer(&data_143f48e88)

arg1[0xd].d = 0
*(arg1 + 0x6c) = 0x3f800000
return arg1
