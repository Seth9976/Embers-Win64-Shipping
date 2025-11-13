// 函数: sub_141a1c140
// 地址: 0x141a1c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142105d70(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143024500
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x30)
int64_t rcx_1 = *(ThreadLocalStoragePointer + (rcx << 3))
arg1[0x10] = 0
arg1[0x11] = 0

if (data_143f29400 s> *(0x14 + rcx_1))
    _Init_thread_header(&data_143f29400)
    
    if (data_143f29400 == 0xffffffff)
        _vfprintf_p_l(&data_143f293e8, u"Landscape", u"Landscape")
        atexit(sub_142cf4990)
        _Init_thread_footer(&data_143f29400)

arg1[7].b |= 1
arg1[0xe].d = 0
int32_t var_10 = 0
*(arg1 + 0x74) = (_mm_unpacklo_ps(zx.o(0), (zx.o(0)).q)).q
*(arg1 + 0x7c) = 0
return arg1
