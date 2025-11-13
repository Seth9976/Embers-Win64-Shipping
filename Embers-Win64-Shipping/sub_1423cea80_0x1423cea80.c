// 函数: sub_1423cea80
// 地址: 0x1423cea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432546f8
TEB* gsbase

if (data_143f5b570 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f5b570)
    
    if (data_143f5b570 == 0xffffffff)
        sub_140b58260(&data_143f5b568, u"Trigger", 1)
        _Init_thread_footer(&data_143f5b570)

int64_t* rcx = arg1[0x47]
int64_t r8
r8.b = 1
(*(*rcx + 0x620))(rcx, data_143f5b568, r8)
*(arg1 + 0x22c) |= 1
*(arg1 + 0x225) = 0x64ff
*(arg1 + 0x224) = 0x64
*(arg1 + 0x227) = 0xff
return arg1
