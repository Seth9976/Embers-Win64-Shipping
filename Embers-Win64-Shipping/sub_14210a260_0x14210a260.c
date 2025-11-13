// 函数: sub_14210a260
// 地址: 0x14210a260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cbb60
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x3c)
void* rdi = *(ThreadLocalStoragePointer + (rcx << 3))
arg1[0x11].w = 0x100
*(arg1 + 0x8a) = 0

if (data_143f48bb0 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f48bb0)
    
    if (data_143f48bb0 == 0xffffffff)
        _vfprintf_p_l(&data_143f48b98, u"VirtualTexture", u"MaterialExpression")
        atexit(sub_142d04330)
        _Init_thread_footer(&data_143f48bb0)

*arg1 = &data_1432cbde8
__builtin_memset(&arg1[0x12], 0, 0x20)

if (data_143f48bd0 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f48bd0)
    
    if (data_143f48bd0 == 0xffffffff)
        _vfprintf_p_l(&data_143f48bb8, u"Parameters", u"MaterialExpression")
        atexit(sub_142d04380)
        _Init_thread_footer(&data_143f48bd0)

arg1[7].b |= 1
return arg1
