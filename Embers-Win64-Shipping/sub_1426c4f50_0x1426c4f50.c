// 函数: sub_1426c4f50
// 地址: 0x1426c4f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e8fdc0(arg1)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143475068
arg1[0x44] = &data_1434758e0
arg1[0x97] = &data_143475938
__builtin_memset(&arg1[0x99], 0, 0x20)
*(arg1 + 0x4f4) |= 7
*(arg1 + 0x4ec) = 0
arg1[0x9d].d = 0xbf800000
arg1[0x9f].b = 3
arg1[0xa0].b &= 0xe0
*(arg1 + 0x504) = 0xbf800000
arg1[0xa1].d = 0xbf800000
*(arg1 + 0x50c) = 0xbf800000
arg1[0xa2].d = 0x3f000000
__builtin_memset(&arg1[0xa3], 0, 0x38)
TEB* gsbase

if (data_143f72320 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f72320)
    
    if (data_143f72320 == 0xffffffff)
        sub_140b58260(&data_143f72318, u"NoCollision", 1)
        _Init_thread_footer(&data_143f72320)

int64_t* rcx_2 = arg1[0x52]
int64_t r8
r8.b = 1
(*(*rcx_2 + 0x620))(rcx_2, data_143f72318, r8)
arg1[0xa0].b = data_143a2d220
*(arg1 + 0x504) = data_143a2d224
arg1[0xa1].d = data_143a2d228
*(arg1 + 0x50c) = data_143a2d22c
arg1[0xa2].d = data_143a2d230
arg1[0xa3] = data_143a2d238
sub_140597df0(&arg1[0xa4], &data_143a2d240)
*(arg1 + 0x32) &= 0xfd
*(arg1 + 0x32) |= 4
void* rax_5 = arg1[0x51]

if (rax_5 != 0)
    *(rax_5 + 0x384) = 0

return arg1
