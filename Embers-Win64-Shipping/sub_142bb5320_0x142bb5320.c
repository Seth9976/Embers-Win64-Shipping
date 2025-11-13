// 函数: sub_142bb5320
// 地址: 0x142bb5320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x32]
int64_t rdi = *(*arg1 + 0x98)

if (rcx != 0)
    sub_142bacda0(rcx)
    arg1[0x32] = 0

sub_142b99980(rdi, arg1[0x27])
int64_t rdx_1 = arg1[0x29]
arg1[0x27] = 0
*(arg1 + 0x134) = 0
sub_142b99980(rdi, rdx_1)
arg1[0x29] = 0
arg1[0x28].w = 0
sub_142bb4700(&arg1[0x2a])
sub_142b99980(rdi, arg1[0x14])
int64_t rdx_3 = arg1[0x16]
arg1[0x14] = 0
int64_t result = sub_142b99980(rdi, rdx_3)
*(arg1 + 0x94) = 0
__builtin_memset(&arg1[0x15], 0, 0x18)
arg1[0x33] = -1
return result
