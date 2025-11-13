// 函数: sub_1421818d0
// 地址: 0x1421818d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
arg1[5].b &= 0xfc
*arg1 = &data_1432e78b0
*(arg1 + 0x34) = 0
__builtin_memset(&arg1[8], 0, 0x1d)
arg1[0xc] = 0
arg1[0xd] = data_143dbb1f8.q
arg1[0xe].d = data_143dbb200
*(arg1 + 0x74) = data_143dbb1f8.q
int32_t rax_1 = data_143dbb200
arg1[0x10] = 0
*(arg1 + 0x7c) = rax_1
__builtin_memset(&arg1[0x12], 0, 0x1d)
arg1[0x16] = 0
arg1[0x17] = data_143dbb1f8.q
arg1[0x18].d = data_143dbb200
*(arg1 + 0xc4) = data_143dbb1f8.q
int32_t rax_3 = data_143dbb200
arg1[0x1a] = 0
*(arg1 + 0xcc) = rax_3
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[0x1c], 0, 0x1d)
arg1[0x20] = 0
arg1[0x21] = 0

if (data_143f4d810 s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4d810)
    
    if (data_143f4d810 == 0xffffffff)
        sub_140b58260(&data_143f4d808, u"None", 1)
        _Init_thread_footer(&data_143f4d810)

arg1[6].b = 0
int64_t rax_5 = data_143f4d808
*(arg1 + 0x3c) &= 0xfffffffe
*(arg1 + 0x34) = rax_5
*(arg1 + 0x8c) = 0
return arg1
