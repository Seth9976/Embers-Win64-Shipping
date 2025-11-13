// 函数: sub_14210ba10
// 地址: 0x14210ba10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x49) &= 0xfe
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432c9510
__builtin_memset(&arg1[0xa], 0, 0x78)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0xca) |= 2

if (data_143f48b70 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f48b70)
    
    if (data_143f48b70 == 0xffffffff)
        _vfprintf_p_l(&data_143f48b58, u"Texture", u"MaterialExpression")
        atexit(sub_142d04d20)
        _Init_thread_footer(&data_143f48b70)

*(arg1 + 0xca) |= 1
arg1[0x19].b = 0
*(arg1 + 0xcb) = 0
*(arg1 + 0xcc) = 0xffffffff
return arg1
