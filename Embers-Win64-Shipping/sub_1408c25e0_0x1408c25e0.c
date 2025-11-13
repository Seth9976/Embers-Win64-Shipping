// 函数: sub_1408c25e0
// 地址: 0x1408c25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 4) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x90) = 2
sub_141f98e50(&arg1[0x10])
*(arg1 + 0x78) = 0
*(arg1 + 0x118) = 2
sub_141f98e50(&arg1[0x98])
*(arg1 + 0x100) = 0
*(arg1 + 0x1a0) = 2
sub_141f98e50(&arg1[0x120])
*(arg1 + 0x188) = 0
int64_t i_3 = 4
__builtin_memset(&arg1[0x1a8], 0, 0x19)
void* rbx_1 = &arg1[0x1c8]
int64_t i_5 = 4
int64_t i

do
    sub_141f98e50(rbx_1)
    rbx_1 -= -0x80
    i = i_5
    i_5 -= 1
while (i != 1)
*(arg1 + 0x3c8) = 2
void* rbx_2 = &arg1[0x3d0]
int64_t i_4 = 4
int64_t i_1

do
    sub_141f98e50(rbx_2)
    rbx_2 -= -0x80
    i_1 = i_4
    i_4 -= 1
while (i_1 != 1)
*(arg1 + 0x5d0) = 2
void* rbx_3 = &arg1[0x5d8]
void* result
int64_t i_2

do
    result = sub_141f98e50(rbx_3)
    rbx_3 -= -0x80
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
*(arg1 + 0x7d8) = 2
*(arg1 + 0x7e0) = i_3.d
*(arg1 + 0x7e4) = i_3.w
return result
