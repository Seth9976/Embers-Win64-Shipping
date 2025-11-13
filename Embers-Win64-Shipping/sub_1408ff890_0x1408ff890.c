// 函数: sub_1408ff890
// 地址: 0x1408ff890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142e1af30
InitializeCriticalSection(&arg1[3])
SetCriticalSectionSpinCount(&arg1[3], 0xfa0)
arg1[8] = 0
arg1[9] = 0
void* rdx = &arg1[0xa]
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

__builtin_memset(rdx, 0, 0x1c)
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14].d = 1
sub_1409014d0(&arg1[8], 1)
void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "ImageWrapper", 1)
j_sub_140b3db50()
arg1[0x15] = j_sub_140b407e0(&data_143de7d78, rbx)
__builtin_memset(&arg1[0x16], 0, 0x21)
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
arg1[0x1e] = *arg2
void* rax_4 = arg2[1]
arg1[0x1f] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[0x20] = *arg3
void* rax_6 = arg3[1]
arg1[0x21] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[0x22] = data_143dbb180
__builtin_memset(&arg1[0x23], 0, 0x18)
arg1[0x26].d = 0xffffffff
__builtin_memset(&arg1[0x27], 0, 0x31)
return arg1
