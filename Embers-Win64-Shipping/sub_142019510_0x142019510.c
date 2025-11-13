// 函数: sub_142019510
// 地址: 0x142019510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t rdi = 0
*arg1 = &data_1432a3938
__builtin_memset(&arg1[0xc], 0, 0x20)
*(arg1 + 0x54) = 0xbf800000
arg1[0xb].d = 0xbf800000
sub_1422f23d0(&arg1[6])
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x11].d = data_143dbb180.d
arg1[0x10].d = data_143dbb180.d
uint32_t rax_3 = (data_143dbb180 u>> 0x20).d
*(arg1 + 0x8c) = rax_3
*(arg1 + 0x84) = rax_3
arg1[0x12] = -1
arg1[0x13].d = 1
arg1[0x16].d = 0
*(arg1 + 0xb4) = 0x41200000
arg1[0x17].d = 0x500
arg1[0x18].d = 0x2d0
*(arg1 + 0xc4) = 0x500
arg1[0x19].d = 0x2d0
*(arg1 + 0xd4) = 0xbf800000
arg1[0x1b].d = 0xbf800000
arg1[0x1d].d = 0

if (*(arg1 + 0xec) != 0)
    sub_1405dadb0(&arg1[0x1c], 0)

arg1[0x1f].d = 0

if (*(arg1 + 0xfc) != 0)
    sub_1405dadb0(&arg1[0x1e], 0)

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_3 = zx.q(data_14401b1a0)
arg1[0x20].d = 0x3f800000
*(arg1 + 0xcc) = 0xbf800000
arg1[0x1a].d = 0xbf800000
void* rsi = *(ThreadLocalStoragePointer + (rcx_3 << 3))

if (data_143f40738 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f40738)
    
    if (data_143f40738 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_10 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.FullScreenMode", r8_1)
        
        if (rax_10 != 0)
            int64_t rdx = *rax_10
            rdi = (*(rdx + 0x58))(rax_10, rdx)
        
        data_143f40730 = rdi
        _Init_thread_footer(&data_143f40738)

arg1[0x14].d = *data_143f40730
sub_1422f23d0(&arg1[6])

if (data_143cd80cc s> *(rsi + 0x14))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    sub_1420435c0(arg1)

*(arg1 + 0x29) = 0
*(arg1 + 0x104) = 0
arg1[0x21].d = 0x3e8
return arg1
