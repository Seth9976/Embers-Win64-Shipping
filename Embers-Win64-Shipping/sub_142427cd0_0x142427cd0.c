// 函数: sub_142427cd0
// 地址: 0x142427cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e8f9b0(arg1)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432546f8
void* rax = arg1[0x47]
*(rax + 0x20e) |= 2
void* rax_1 = arg1[0x47]
*(rax_1 + 0x20e) |= 4
TEB* gsbase

if (data_143f5ea90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f5ea90)
    
    if (data_143f5ea90 == 0xffffffff)
        sub_140b58260(&data_143f5ea88, u"OverlapAll", 1)
        _Init_thread_footer(&data_143f5ea90)

int64_t* rcx_1 = arg1[0x47]
int64_t r8
r8.b = 1
(*(*rcx_1 + 0x620))(rcx_1, data_143f5ea88, r8)
sub_141f256b0(arg1[0x47], 1)
sub_141dd8f80(arg1, 0)
sub_141dd7d00(arg1, 0)
int64_t r8_1
r8_1.b = 1
*arg1 = &data_1430131c8
arg1[0x4b].d = 0x7fffffff
*(arg1 + 0x25c) = 0x80000000
int64_t* rcx_5 = arg1[0x47]
(*(*rcx_5 + 0x620))(rcx_5, data_143f3a590, r8_1)
*(arg1 + 0x22c) |= 1
int32_t arg_c = 3
arg1[0x4b] = 1.q
*(arg1 + 0x225) = 0x9bb9
*(arg1 + 0x224) = 0x19
*(arg1 + 0x227) = 0xff
return arg1
