// 函数: sub_14077f8d0
// 地址: 0x14077f8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
*arg1 = &data_142da8628
arg1[6] = 0
sub_1407451e0(&arg1[7])
arg1[0xd].b = 1
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10].d = 0xffffffff
__builtin_memset(&arg1[0x11], 0, 0x28)
*(arg1 + 0xb4) = 0
int64_t rax = sub_140d41340()
int32_t var_10 = 0xffff0001
int16_t var_c = 0xffff
TEB* gsbase
int64_t rcx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
*(arg1 + 0x40) = rax.o

if (data_143ce2200 s> *(0x14 + rcx_2))
    _Init_thread_header(&data_143ce2200)
    
    if (data_143ce2200 == 0xffffffff)
        sub_140b58170(&data_143ce21f8, "root", 1)
        _Init_thread_footer(&data_143ce2200)

arg1[0x16].b &= 0xfe
arg1[0x15] = data_143ce21f8
void*** rax_4 = j_sub_140a82f30(0x118)
void*** rdi = rax_4

if (rax_4 == 0)
    rdi = nullptr
else
    memset(rax_4, 0, 0x118)
    sub_140744780(rdi)
    int64_t* rcx_5 = &rdi[0x1b]
    *rdi = &data_142da8968
    rdi[0x19] = 0
    rdi[0x1a] = 0
    rcx_5[2] = 0
    rcx_5[3].d = 0
    *(rcx_5 + 0x1c) = 0x80
    int64_t* rax_5 = rcx_5[2]
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    *rcx_5 = 0
    rcx_5[1] = 0
    rdi[0x1f].d = 0xffffffff
    *(rdi + 0xfc) = 0
    rdi[0x21] = 0
    rdi[0x22].d = 0

int64_t* rcx_6 = arg1[5]

if (rcx_6 != rdi)
    arg1[5] = rdi
    
    if (rcx_6 != 0)
        (**rcx_6)(rcx_6, 1)

return arg1
