// 函数: sub_1421091c0
// 地址: 0x1421091c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cf0b8
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x28)

if (data_143f49028 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49028)
    
    if (data_143f49028 == 0xffffffff)
        _vfprintf_p_l(&data_143f49010, u"Math", u"MaterialExpression")
        atexit(sub_142d03c70)
        _Init_thread_footer(&data_143f49028)

arg1[0xd].d = 0
*(arg1 + 0x6c) = 0x3f800000
return arg1
