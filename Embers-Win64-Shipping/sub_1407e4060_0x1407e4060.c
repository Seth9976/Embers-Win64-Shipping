// 函数: sub_1407e4060
// 地址: 0x1407e4060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_142dc3688
__builtin_memset(arg1 + 0x34, 0, 0xa4)
*(arg1 + 0xf4) = 1
*(arg1 + 0xdc) = _mm_unpacklo_ps(0xc2c80000, 0xc2c80000)
arg1[0x1d] = _mm_unpacklo_ps(0x42c80000, 0x42c80000)
int32_t var_20 = 0xc2c80000
*(arg1 + 0xe4) = 0xc2c80000
int32_t var_14 = 0x42c80000
arg1[0x1e].d = 0x42c80000
arg1[0x1f].d = 0
__builtin_memcpy(arg1 + 0xfc, 
    "\x04\x00\x00\x00\x00\x00\x00\x3e\x00\x00\x80\x3e\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
    0x18)
sub_14081a5b0(&arg1[0x23])
arg1[0x27] = 0
void* rcx_1 = &arg1[0x2d]
arg1[0x28] = 0
arg1[0x29].d &= 0xffffffd0
*(arg1 + 0x14c) = 0x3e000000
*(arg1 + 0x154) = 1
arg1[0x2b] = 0
arg1[0x2c] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x31].d = 0xffffffff
*(arg1 + 0x18c) = 0
arg1[0x33] = 0
arg1[0x34].d = 0
arg1[0x35].d |= 4
__builtin_memset(&arg1[0x36], 0, 0x40)
__builtin_memset(&arg1[0x3f], 0, 0x20)
void* rcx_2 = &arg1[0x43]
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x47].d = 0xffffffff
*(arg1 + 0x23c) = 0
arg1[0x49] = 0
arg1[0x4a].d = 0
arg1[0x4b].b = 0
*(arg1 + 0x25c) = 0
InitializeCriticalSection(&arg1[0x4c])
SetCriticalSectionSpinCount(&arg1[0x4c], 0xfa0)
sub_14081a5b0(&arg1[0x51])
arg1[0x55].d &= 0xfffffffe
*(arg1 + 0x2ac) = 0x3f800000
return arg1
