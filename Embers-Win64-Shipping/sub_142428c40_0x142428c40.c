// 函数: sub_142428c40
// 地址: 0x142428c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143348ff8
arg1[5] = &data_143349278
__builtin_memset(&arg1[0xd], 0, 0x61)
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x21] = 0
arg1[0x22] = 0
arg1[0x23].b = data_1439c7a08.b
*(arg1 + 0x11b) &= 0xf7
*(arg1 + 0x11e) |= 0x10
__builtin_memset(&arg1[0x29], 0, 0x20)
arg1[0x2d].d = 0xffffffff
sub_141e70d50(&arg1[0x2e])
arg1[0x32] = 0
arg1[0x33] = 0
__builtin_memset(&arg1[0x37], 0, 0x40)
__builtin_memset(&arg1[0x40], 0, 0x20)
sub_141eb62e0(&arg1[0x44])
arg1[0x5d] = 0
void* rcx_2 = &arg1[0x63]
arg1[0x5e] = 0
arg1[0x5f] = 2
arg1[0x61] = 0
arg1[0x62] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_1 = *(rcx_2 + 0x10)

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x67].d = 0xffffffff
*(arg1 + 0x33c) = 0
arg1[0x69] = 0
arg1[0x6a].d = 0
arg1[0x6b] = 0
arg1[0x6c] = 0
arg1[0x6e] = 0
arg1[0x6f] = 0
arg1[0x70] = 2
arg1[0x71] = 0
arg1[0x72] = 0
arg1[0x73] = 2
arg1[0x74] = 0
arg1[0x75] = 0
arg1[0x76] = 2
arg1[0x77] = 0
arg1[0x78] = 0
arg1[0x79] = 2
arg1[0x7a] = 0
arg1[0x7b] = 0
arg1[0x7c] = 2
arg1[0x7d] = 0
arg1[0x7e] = 0
arg1[0x7f] = 2
sub_1423fd810(&arg1[0x80], nullptr)
arg1[0x8d] = 0
j_sub_1423c0390()
int64_t rdx = data_143f5b210
arg1[0x8e] = (*(rdx + 8))(&data_143f5b210, rdx)
sub_1423b9d00(&arg1[0x8f])
arg1[0x8f] = &data_143348fb8
sub_1423b9d00(&arg1[0x95])
arg1[0x95] = &data_143348fd8
arg1[0x9c] = 0
arg1[0x9d] = 0
arg1[0x9e] = 2
__builtin_memset(&arg1[0x9f], 0, 0x20)
arg1[0xad].w = 0x200
__builtin_memset(&arg1[0xae], 0, 0x28)
*(arg1 + 0x59c) = 0
arg1[0xb5] = 0
arg1[0xb6] = 0
arg1[0xb7] = 2
arg1[0xb8] = 0
arg1[0xb9] = 0
arg1[0xba] = 2
arg1[0xbb] = 0
arg1[0xbc] = 0
arg1[0xbd] = 2
sub_14220b410(&arg1[0xbe])
sub_1423a50c0(&arg1[0xc9], sub_1425be690())
arg1[0xc9] = &data_143297e10
void*** rax_4 = j_sub_140a82f30(0x160)
void*** rax_5

if (rax_4 == 0)
    rax_5 = nullptr
else
    rax_5 = sub_1423cf3a0(rax_4, 0)

arg1[0x60] = rax_5
sub_140920c10(&data_143a30668, arg1)
void* rax_6 = j_sub_140a82f30(0x90)

if (rax_6 == 0)
    arg1[0xb4] = 0
    return arg1

arg1[0xb4] = sub_1420770c0(rax_6)
return arg1
