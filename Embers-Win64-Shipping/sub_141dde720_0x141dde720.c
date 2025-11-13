// 函数: sub_141dde720
// 地址: 0x141dde720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e90840(arg1, arg2)
int64_t* rcx = &arg1[0x6d]
*arg1 = &data_14323fab0
arg1[0x65] = &data_14323fe58
arg1[0x66] = 0
arg1[0x67] = 0
__builtin_memset(&arg1[0x69], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x8b]
arg1[0x71].d = 0xffffffff
*(arg1 + 0x38c) = 0
arg1[0x73] = 0
arg1[0x74].d = 0
__builtin_memset(&arg1[0x75], 0, 0xb0)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
void* rcx_2 = &arg1[0x95]
arg1[0x8f].d = 0xffffffff
*(arg1 + 0x47c) = 0
arg1[0x91] = 0
arg1[0x92].d = 0
arg1[0x93] = 0
arg1[0x94] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x99].d = 0xffffffff
*(arg1 + 0x4cc) = 0
arg1[0x9b] = 0
arg1[0x9c].d = 0
return arg1
