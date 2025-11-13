// 函数: sub_1421d8460
// 地址: 0x1421d8460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432fc320
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[9], 0, 0x18)
int64_t rcx_1 = *(ThreadLocalStoragePointer + (rcx << 3))
arg1[0xf] = 0
arg1[0x10] = 0

if (data_143f509a8 s> *(0x14 + rcx_1))
    _Init_thread_header(&data_143f509a8)
    
    if (data_143f509a8 == 0xffffffff)
        sub_140b58260(&data_143f509a0, u"VertSurfaceActor", 1)
        _Init_thread_footer(&data_143f509a8)

arg1[5].b |= 0x4f
arg1[6].b = 0
arg1[8].d |= 2
arg1[0xc].d &= 0xfffffffe
arg1[0x11].d &= 0xfffffffd
arg1[9] = data_143f509a0
*(arg1 + 0x8c) = 0
*(arg1 + 0x44) = 0x3f800000
return arg1
