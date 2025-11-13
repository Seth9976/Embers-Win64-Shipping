// 函数: sub_141d94960
// 地址: 0x141d94960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[5]
arg1[1] = 0
arg1[2] = 0
*arg1 = &data_143239268
arg1[3] = 0
arg1[4] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
arg1[0xb] = 0
arg1[0xc].d = 0
arg1[0xd] = 0
arg1[0xe] = 0
void* rcx = &arg1[0xf]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 0
arg1[0x15] = 0
arg1[0x16].d = 0
arg1[0x17] = 0
arg1[0x18].d = 0
__builtin_memset(&arg1[0x19], 0, 0x24)
arg1[0x1e] = 0
arg1[0x1f] = 0
arg1[0x20].d = 0xffffffff
__builtin_memset(&arg1[0x21], 0, 0x54)
__builtin_memset(&arg1[0x2c], 0, 0x11)
*(arg1 + 0x174) = 0
arg1[0x2f] = -1
__builtin_memset(&arg1[0x30], 0, 0x20)
sub_140b4c2a0(&arg1[0x34])
arg1[0x34] = &data_143239020
__builtin_memset(&arg1[0x46], 0, 0x15)
sub_140b4c2a0(&arg1[0x49])
arg1[0x49] = &data_143239020
__builtin_memset(&arg1[0x5b], 0, 0x15)
sub_140b4c2a0(&arg1[0x5e])
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_4 = zx.q(data_14401b1a0)
arg1[0x5e] = &data_143239020
__builtin_memset(&arg1[0x70], 0, 0x15)
int64_t rcx_5 = *(ThreadLocalStoragePointer + (rcx_4 << 3))
__builtin_memset(&arg1[0x73], 0, 0x18)

if (data_143f38820 s> *(0x14 + rcx_5))
    _Init_thread_header(&data_143f38820)
    
    if (data_143f38820 == 0xffffffff)
        int64_t* rax_5 = sub_140b257f0()
        int16_t* const rcx_9
        
        if (rax_5[1].d == 0)
            rcx_9 = &data_142d40450
        else
            rcx_9 = *rax_5
        
        int16_t* const var_18 = rcx_9
        wchar16 const* const var_10_1 = u"Demos/"
        data_143f38810 = 0
        data_143f38818.q = 0
        sub_140b0f5f0(&data_143f38810, &var_18, 2)
        atexit(&data_142cf8a90)
        _Init_thread_footer(&data_143f38820)

arg1[0x76] = 0
int32_t rsi = data_143f38818
int64_t rbp = data_143f38810
arg1[0x77].d = rsi

if (rsi != 0)
    sub_1405a4c70(&arg1[0x76], rsi, 0)
    memcpy(arg1[0x76], rbp, rsi * 2)
else
    *(arg1 + 0x3bc) = 0

void* rcx_8 = &arg1[0x7b]
arg1[0x78].b = 0
arg1[0x79] = 0
arg1[0x7a] = 0
*(rcx_8 + 0x10) = 0
*(rcx_8 + 0x18) = 0
*(rcx_8 + 0x1c) = 0x80
void* rax_3 = *(rcx_8 + 0x10)

if (rax_3 != 0)
    rcx_8 = rax_3

*rcx_8 = 0
*(rcx_8 + 8) = 0
arg1[0x7f].d = 0xffffffff
*(arg1 + 0x3fc) = 0
arg1[0x81] = 0
arg1[0x82].d = 0
return arg1
