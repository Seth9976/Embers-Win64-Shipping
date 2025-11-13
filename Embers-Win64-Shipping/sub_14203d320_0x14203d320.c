// 函数: sub_14203d320
// 地址: 0x14203d320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
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
uint64_t rcx_2 = zx.q(data_14401b1a0)
arg1[0x20].d = 0x3f800000
*(arg1 + 0xcc) = 0xbf800000
arg1[0x1a].d = 0xbf800000
void* rsi = *(ThreadLocalStoragePointer + (rcx_2 << 3))

if (data_143f40738 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f40738)
    
    if (data_143f40738 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_7 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.FullScreenMode", r8_1)
        
        if (rax_7 != 0)
            int64_t rdx_1 = *rax_7
            rdi = (*(rdx_1 + 0x58))(rax_7, rdx_1)
        
        data_143f40730 = rdi
        _Init_thread_footer(&data_143f40738)

arg1[0x14].d = *data_143f40730
sub_1422f23d0(&arg1[6])
int32_t result = *(rsi + 0x14)

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    result = sub_1420435c0(arg1)

*(arg1 + 0x29) = 0
*(arg1 + 0x104) = 0
arg1[0x21].d = 0x3e8
return result
