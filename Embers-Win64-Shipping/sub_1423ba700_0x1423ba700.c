// 函数: sub_1423ba700
// 地址: 0x1423ba700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142380d90(arg1, arg2)
*arg1 = &data_14333b830
arg1[8] = &data_14333bb90
arg1[9] = 0
arg1[0xa] = 0
arg1[0xd] = 0
arg1[0xe] = 0
sub_141992f20(&arg1[0x10])
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_1 = zx.q(data_14401b1a0)
arg1[0x15] = 0
arg1[0xc].b |= 1
*(arg1 + 0x5d) = 3

if (data_143cd80cc s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_1 << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0
        && sub_140d23dc0(arg1, 0x30) == 0)
    sub_141997f40(&arg1[0x10])

return arg1
