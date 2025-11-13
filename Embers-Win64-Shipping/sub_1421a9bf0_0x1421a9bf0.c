// 函数: sub_1421a9bf0
// 地址: 0x1421a9bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*(arg1 + 0x29) = (*(arg1 + 0x29) & 0xf3) | 3
arg1[5].b = (arg1[5].b & 0x17) | 0x80
*arg1 = &data_1432f0e38
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[6], 0, 0x25)
int64_t rcx_1 = *(ThreadLocalStoragePointer + (rcx << 3))
arg1[0xb] = 0
arg1[0xc] = 0
__builtin_memset(&arg1[0xe], 0, 0x1d)
arg1[0x12] = 0
arg1[0x13] = 0

if (data_143f4fa48 s> *(0x14 + rcx_1))
    _Init_thread_header(&data_143f4fa48)
    
    if (data_143f4fa48 == 0xffffffff)
        sub_140b58260(&data_143f4fa40, u"None", 1)
        _Init_thread_footer(&data_143f4fa48)

arg1[5].b |= 3
arg1[0xd].d |= 1
arg1[0x14].d &= 0xfffffffe
arg1[0x15].d &= 0xfffffffe
*(arg1 + 0xa4) = 0
*(arg1 + 0xac) = 0
arg1[6] = data_143f4fa40
return arg1
