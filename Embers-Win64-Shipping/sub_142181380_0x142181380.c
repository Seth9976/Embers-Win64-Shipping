// 函数: sub_142181380
// 地址: 0x142181380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0xe]
*arg1 = &data_1432e7f40
arg1[5] = 0
*(arg1 + 0x37) &= 0x7e
arg1[7].b &= 0xfe
*(arg1 + 0x35) = 3
arg1[8] = 0
arg1[9] = 0
arg1[0xb].d = 0x3f800000
*(arg1 + 0x5c) = 0xffff
arg1[0xc] = 0
arg1[0xd] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x18]
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
arg1[0x16] = 0
arg1[0x17] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x22]
arg1[0x1c].d = 0xffffffff
*(arg1 + 0xe4) = 0
arg1[0x1e] = 0
arg1[0x1f].d = 0
arg1[0x20] = 0
arg1[0x21] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*rcx_2 = 0
*(rcx_2 + 8) = 0
uint64_t rcx_3 = zx.q(data_14401b1a0)
arg1[0x26].d = 0xffffffff
*(arg1 + 0x134) = 0
arg1[0x28] = 0
int64_t rcx_4 = *(ThreadLocalStoragePointer + (rcx_3 << 3))
arg1[0x29].d = 0
arg1[0x2a] = 0
arg1[0x2b] = 0
__builtin_memset(&arg1[0x32], 0, 0x20)

if (data_143f4d830 s> *(0x14 + rcx_4))
    _Init_thread_header(&data_143f4d830)
    
    if (data_143f4d830 == 0xffffffff)
        sub_140b58260(&data_143f4d828, u"Particle Emitter", 1)
        _Init_thread_footer(&data_143f4d830)

int64_t rax_4 = data_143f4d828
*(arg1 + 0x37) |= 0x10
arg1[5] = rax_4
arg1[0xa].d = 0
return arg1
