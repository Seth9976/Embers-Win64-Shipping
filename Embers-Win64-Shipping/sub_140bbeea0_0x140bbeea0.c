// 函数: sub_140bbeea0
// 地址: 0x140bbeea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e85f80
arg1[2] = 0
arg1[1] = &data_142e85fb0
arg1[3].b = 0
*(arg1 + 0x19) = 0
__builtin_memset(&arg1[4], 0, 0x16)
arg1[6].d
arg1[0xa] = 0
arg1[0xb] = 0
InitializeCriticalSection(&arg1[0xc])
SetCriticalSectionSpinCount(&arg1[0xc], 0xfa0)
arg1[0x11] = 0
arg1[0x12] = 0
InitializeCriticalSection(&arg1[0x13])
SetCriticalSectionSpinCount(&arg1[0x13], 0xfa0)
__builtin_memset(&arg1[0x18], 0, 0x20)
InitializeCriticalSection(&arg1[0x1c])
SetCriticalSectionSpinCount(&arg1[0x1c], 0xfa0)
arg1[0x21] = 0
void* rcx_6 = &arg1[0x23]
arg1[0x22] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_1 = *(rcx_6 + 0x10)

if (rax_1 != 0)
    rcx_6 = rax_1

*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x27].d = 0xffffffff
*(arg1 + 0x13c) = 0
arg1[0x29] = 0
arg1[0x2a].d = 0
arg1[0x2b] = arg3
int64_t* rax_2 = j_sub_140a82f30(0x10)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0

arg1[0x2d] = rax_2
void* rcx_7 = &arg1[0x31]
arg1[0x2c] = rax_2
__builtin_memset(&arg1[0x2e], 0, 0x18)
*(rcx_7 + 0x10) = 0
*(rcx_7 + 0x18) = 0
*(rcx_7 + 0x1c) = 0x80
void* rax_3 = *(rcx_7 + 0x10)

if (rax_3 != 0)
    rcx_7 = rax_3

*rcx_7 = 0
*(rcx_7 + 8) = 0
arg1[0x35].d = 0xffffffff
*(arg1 + 0x1ac) = 0
arg1[0x37] = 0
arg1[0x38].d = 0
InitializeCriticalSection(&arg1[0x39])
SetCriticalSectionSpinCount(&arg1[0x39], 0xfa0)
arg1[0x3e].d = 0
void* rcx_10 = &arg1[0x44]
*(arg1 + 0x1f4) = 0
arg1[0x3f].d = 0
__builtin_memset(&arg1[0x40], 0, 0x20)
*(rcx_10 + 0x10) = 0
*(rcx_10 + 0x18) = 0
*(rcx_10 + 0x1c) = 0x80
void* rax_4 = *(rcx_10 + 0x10)

if (rax_4 != 0)
    rcx_10 = rax_4

*rcx_10 = 0
*(rcx_10 + 8) = 0
arg1[0x48].d = 0xffffffff
*(arg1 + 0x244) = 0
arg1[0x4a] = 0
arg1[0x4b].d = 0
__builtin_memset(arg1 + 0x264, 0, 0x14)
arg1[0x4f] = arg2
InitializeCriticalSection(&arg1[0x50])
SetCriticalSectionSpinCount(&arg1[0x50], 0xfa0)
arg1[0x55] = 0
void* rcx_13 = &arg1[0x57]
arg1[0x56] = 0
*(rcx_13 + 0x10) = 0
*(rcx_13 + 0x18) = 0
*(rcx_13 + 0x1c) = 0x80
void* rax_5 = *(rcx_13 + 0x10)

if (rax_5 != 0)
    rcx_13 = rax_5

*rcx_13 = 0
*(rcx_13 + 8) = 0
arg1[0x5b].d = 0xffffffff
*(arg1 + 0x2dc) = 0
arg1[0x5d] = 0
arg1[0x5e].d = 0
__builtin_memset(&arg1[0x5f], 0, 0x31)
sub_140a956a0(&arg1[0x66])
__builtin_memset(&arg1[0x67], 0, 0x34)
__builtin_memset(&arg1[0x6e], 0, 0x18)
sub_140bd5ce0(&arg1[0x71])
__builtin_memset(&arg1[0x78], 0, 0x40)
arg1[0x7f]
memset(&arg1[0x80], 0, 0x400000)
__builtin_memset(&arg1[0x80080], 0, 0x18)
arg1[0x80082]
memset(&arg1[0x80083], 0, 0x400000)
__builtin_memset(&arg1[0x100083], 0, 0x18)
arg1[0x100085]
memset(&arg1[0x100086], 0, 0x400000)
arg1[0x180086] = 0
arg1[0x180087] = 0
arg1[0x180088] = 0
arg1[0x180089] = 0
data_143de5452 = 1
int64_t r14 = sx.q(arg1[0x180087].d)
int32_t rax_9 = (r14 + 1).d
arg1[0x180087].d = rax_9

if (rax_9 s> *(arg1 + 0xc0043c))
    sub_1405a4d70(&arg1[0x180086])

arg1[0x180086][r14] = &arg1[0x100083]
int64_t r14_1 = sx.q(arg1[0x180087].d)
int32_t rax_11 = (r14_1 + 1).d
arg1[0x180087].d = rax_11

if (rax_11 s> *(arg1 + 0xc0043c))
    sub_1405a4d70(&arg1[0x180086])

arg1[0x180086][r14_1] = &arg1[0x80080]
int64_t r14_2 = sx.q(arg1[0x180087].d)
int32_t rax_13 = (r14_2 + 1).d
arg1[0x180087].d = rax_13

if (rax_13 s> *(arg1 + 0xc0043c))
    sub_1405a4d70(&arg1[0x180086])

arg1[0x180086][r14_2] = &arg1[0x7d]
int64_t rdx_3 = 0
void*** rcx_22 = arg1[0x180086]
uint64_t r8_1 = sx.q(arg1[0x180087].d) << 3 u>> 3

if (rcx_22 u> &rcx_22[arg1[0x180087]])
    r8_1 = 0

if (r8_1 != 0)
    do
        void** rax_17 = *rcx_22
        rcx_22 = &rcx_22[1]
        rdx_3 += 1
        *rax_17 = &arg1[0x71]
    while (rdx_3 != r8_1)

int64_t rdi_2 = sx.q(arg1[0x180089].d)
int32_t rax_18 = (rdi_2 + 4).d
arg1[0x180089].d = rax_18

if (rax_18 s> *(arg1 + 0xc0044c))
    sub_1405a4df0(&arg1[0x180088])

int64_t rax_19 = arg1[0x180088]
int64_t rcx_24 = rdi_2 * 3
void* var_40 = &arg1[0x80080]
*(rax_19 + (rcx_24 << 3)) = 0
*(rax_19 + (rcx_24 << 3) + 8) = 0
*(rax_19 + (rcx_24 << 3) + 0x10) = 0
*(rax_19 + (rcx_24 << 3) + 0x18) = 0
*(rax_19 + (rcx_24 << 3) + 0x20) = 0
*(rax_19 + (rcx_24 << 3) + 0x28) = 0
*(rax_19 + (rcx_24 << 3) + 0x30) = 0
*(rax_19 + (rcx_24 << 3) + 0x38) = 0
*(rax_19 + (rcx_24 << 3) + 0x40) = 0
*(rax_19 + (rcx_24 << 3) + 0x48) = 0
*(rax_19 + (rcx_24 << 3) + 0x50) = 0
*(rax_19 + (rcx_24 << 3) + 0x58) = 0
int128_t* rax_20 = arg1[0x180088]
void* var_40_1 = &arg1[0x80080]
*rax_20 = sub_140bc6110.o
rax_20[1].q = 1.q
void* rax_21 = arg1[0x180088]
void* var_40_2 = &arg1[0x80080]
*(rax_21 + 0x18) = sub_140bc6140.o
*(rax_21 + 0x28) = 1.q
void* rax_22 = arg1[0x180088]
void* var_40_3 = &arg1[0x100083]
*(rax_22 + 0x30) = sub_140bc60f0.o
*(rax_22 + 0x40) = 0.q
void* rax_23 = arg1[0x180088]
*(rax_23 + 0x48) = sub_140bc6290.o
*(rax_23 + 0x58) = 0.q
arg1[7] = sub_140a491d0(0)
arg1[8] = sub_140a491d0(0)
arg1[9] = sub_140a491d0(0)
arg1[0x18008a].d = 0
data_143e1a81c = TlsAlloc()
arg1[0x4f]
sub_140bc4510(&arg1[0x7a])
return arg1
