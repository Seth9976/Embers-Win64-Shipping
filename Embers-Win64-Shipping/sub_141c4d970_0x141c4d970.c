// 函数: sub_141c4d970
// 地址: 0x141c4d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e70380(arg1)
arg1[0xf7].b = 0
*arg1 = &data_143209798
CRITICAL_SECTION* rsi = nullptr
arg1[0xf6] = &data_143209948
__builtin_memset(&arg1[0xf8], 0, 0x30)
arg1[0xfe] = arg2
arg1[0xff] = 0
arg1[0x100].d = 0
*(arg1 + 0x804) = 0x3f800000
*(arg1 + 0x80c) = 0
*(arg1 + 0x814) = 0x3f800000
*(arg1 + 0x81c) = 0
*(arg1 + 0x824) = 0x3f800000
*(arg1 + 0x82c) = 0
*(arg1 + 0x834) = 0x3f800000
*(arg1 + 0x83c) = 0
*(arg1 + 0x844) = 0x3f800000
*(arg1 + 0x84c) = 0
*(arg1 + 0x854) = 0x3f800000
*(arg1 + 0x85c) = 0
*(arg1 + 0x864) = 0x3f800000
*(arg1 + 0x86c) = 0
*(arg1 + 0x874) = 0x3f800000
*(arg1 + 0x87c) = 0
*(arg1 + 0x884) = 0x3f800000
*(arg1 + 0x88c) = 0
*(arg1 + 0x894) = 0x3f800000
*(arg1 + 0x89c) = 0
*(arg1 + 0x8a4) = 0x3f800000
arg1[0x115] = 0
arg1[0x116] = 0
arg1[0x118] = 0
arg1[0x119] = 0
arg1[0x11b].d = 0xffffffff
*(arg1 + 0x8dc) = 0x400
arg1[0x11c].d = 1
arg1[0x11d] = 0
arg1[0x11e].d = 0xac44
*(arg1 + 0x8f4) = 0
arg1[0x11f].d = 0
arg1[0x120] = 0
arg1[0x121] = 0
arg1[0x122].d = 0xbf800000
__builtin_memset(&arg1[0x123], 0, 0x18)
arg1[0x126] = 0x3fa999999999999a
sub_141c4d6a0(&arg1[0x127])
arg1[0x130] = 0
void* rcx_1 = &arg1[0x132]
arg1[0x131] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x136].d = 0xffffffff
*(arg1 + 0x9b4) = 0
arg1[0x138] = 0
arg1[0x139].d = 0
__builtin_memset(&arg1[0x13a], 0, 0x20)
InitializeCriticalSection(&arg1[0x13e])
SetCriticalSectionSpinCount(&arg1[0x13e], 0xfa0)
arg1[0x143] = 0
arg1[0x144] = 0
int64_t* rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0

arg1[0x147] = rax_1
void* rcx_4 = &arg1[0x14a]
arg1[0x146] = rax_1
arg1[0x148] = 0
arg1[0x149] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x14e].d = 0xffffffff
*(arg1 + 0xa74) = 0
arg1[0x150] = 0
arg1[0x151].d = 0
arg1[0x152] = nullptr
arg1[0x153] = -1
int64_t* rax_3 = j_sub_140a82f30(0x50)

if (rax_3 == 0)
    rax_3 = nullptr
else
    *rax_3 = 0
    rax_3[2] = 0
    rax_3[4] = 0

arg1[0x155] = rax_3
arg1[0x154] = rax_3
*(arg1 + 0x352) |= 0x20
arg1[0x156].w = 0
CRITICAL_SECTION* rax_4 = j_sub_140a82f30(0x1d0)

if (rax_4 != 0)
    rsi = sub_141c4dfe0(rax_4, arg1)

void arg_8

if (&arg1[0x152] == &arg_8)
    if (rsi != 0)
        sub_141c50e00(rsi)
        j_sub_140a74f90(rsi)
    
    return arg1

CRITICAL_SECTION* rbp = arg1[0x152]
arg1[0x152] = rsi

if (rbp != 0)
    sub_141c50e00(rbp)
    j_sub_140a74f90(rbp)

return arg1
