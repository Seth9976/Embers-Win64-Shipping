// 函数: sub_142427bf0
// 地址: 0x142427bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e8f9b0(arg1)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432546f8
void* rax = arg1[0x47]
*(rax + 0x20e) |= 2
void* rax_1 = arg1[0x47]
*(rax_1 + 0x20e) |= 4
TEB* gsbase

if (data_143f5ea90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f5ea90)
    
    if (data_143f5ea90 == 0xffffffff)
        sub_140b58260(&data_143f5ea88, u"OverlapAll", 1)
        _Init_thread_footer(&data_143f5ea90)

int64_t* rcx_2 = arg1[0x47]
int64_t r8
r8.b = 1
(*(*rcx_2 + 0x620))(rcx_2, data_143f5ea88, r8)
sub_141f256b0(arg1[0x47], 1)
sub_141dd8f80(arg1, 0)
sub_141dd7d00(arg1, 0)
return arg1
