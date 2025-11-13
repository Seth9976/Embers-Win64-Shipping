// 函数: sub_1420d8c50
// 地址: 0x1420d8c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_1432c0f20
arg1[5] = &data_1432c1180
sub_1423fd810(&arg1[6], nullptr)
__builtin_memset(&arg1[0x13], 0, 0x28)
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x20] = 0
arg1[0x21] = 0
__builtin_memset(&arg1[0x23], 0, 0x20)
j_sub_1423c0390()
int64_t rdx = data_143f5b210
arg1[0x27] = (*(rdx + 8))(&data_143f5b210, rdx)
int64_t* rax_1 = j_sub_140a82f30(0x28)
int64_t* rax_2

if (rax_1 == 0)
    rax_2 = nullptr
else
    rax_2 = sub_142287b90(rax_1)

arg1[0x28] = rax_2
int64_t* rax_3 = j_sub_140a82f30(0x18)
int64_t* rax_4

if (rax_3 == 0)
    rax_4 = nullptr
else
    rax_4 = sub_142287c00(rax_3)

arg1[0x29] = rax_4
arg1[0x2d].d = data_143f481c4
arg1[0x2e] = 0
arg1[0x2f] = 0
data_143f481c4 += 1
__builtin_memset(&arg1[0x36], 0, 0x18)
arg1[0x3a] = 0
arg1[0x3b] = 0
arg1[0x40] = 0
arg1[0x41] = 0
arg1[0x42] = 2
arg1[0x43].d = 0xffffffff
*(arg1 + 0x21c) = 0
arg1[0x44].d = 0xffffffff
__builtin_memset(arg1 + 0x224, 0, 0x14)
arg1[0x47] = 2
__builtin_memset(&arg1[0x4a], 0, 0x30)
*(arg1 + 0x1f6) &= 0xdf
*(arg1 + 0x1f4) &= 0xef
return arg1
