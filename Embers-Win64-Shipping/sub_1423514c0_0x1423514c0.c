// 函数: sub_1423514c0
// 地址: 0x1423514c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142350a40(arg1, arg2)
*arg1 = &data_14332c610
arg1[0x2e] = 0
arg1[0x2f] = 0
__builtin_memset(&arg1[0x30], 0, 0x20)
*(arg1 + 0x1a4) = 0
InitializeCriticalSection(&arg1[0x35])
SetCriticalSectionSpinCount(&arg1[0x35], 0xfa0)
arg1[0x3a] = 0
arg1[0x3b] = 0
arg1[0x3d] = 0
arg1[0x3e] = 0
arg1[0x43] = 0
arg1[0x44] = 0
sub_141f79600(&arg1[0x47])
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x56] = 0
arg1[0x57].d = 0
*(arg1 + 0x2bc) = 0
arg1[0x54] = 0
arg1[0x55].d = 0xffffffff
__builtin_memset(&arg1[0x58], 0, 0x20)
__builtin_memset(&arg1[0x5e], 0, 0x14)
*(arg1 + 0x1fc) = 0x3f800000
arg1[0x40].d = 0x3f800000
arg1[0x2c].d = 0x28
arg1[0x3f].d = 0x461c4000
*(arg1 + 0x16f) = 0
*(arg1 + 0x274) = 0
*(arg1 + 0x1a4) = 0
int64_t rbx = sx.q(arg1[0x2f].d)
int32_t rax = (rbx + 1).d
arg1[0x2f].d = rax

if (rax s> *(arg1 + 0x17c))
    sub_1406105e0(&arg1[0x2e])

*(arg1[0x2e] + (rbx << 2)) = 0x42c80000
int64_t rbx_1 = sx.q(arg1[0x2f].d)
int32_t rax_2 = (rbx_1 + 1).d
arg1[0x2f].d = rax_2

if (rax_2 s> *(arg1 + 0x17c))
    sub_1406105e0(&arg1[0x2e])

*(arg1[0x2e] + (rbx_1 << 2)) = 0x43fa0000
int64_t rbx_2 = sx.q(arg1[0x2f].d)
int32_t rax_4 = (rbx_2 + 1).d
arg1[0x2f].d = rax_4

if (rax_4 s> *(arg1 + 0x17c))
    sub_1406105e0(&arg1[0x2e])

*(arg1[0x2e] + (rbx_2 << 2)) = 0x447a0000
int64_t rbx_3 = sx.q(arg1[0x2f].d)
int32_t rax_6 = (rbx_3 + 1).d
arg1[0x2f].d = rax_6

if (rax_6 s> *(arg1 + 0x17c))
    sub_1406105e0(&arg1[0x2e])

*(arg1[0x2e] + (rbx_3 << 2)) = 0x459c4000
*(arg1 + 0x16e) &= 0xf3
arg1[0x3c].d = 0
*(arg1 + 0x1e4) = 0xff
return arg1
