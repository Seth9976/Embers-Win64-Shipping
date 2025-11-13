// 函数: sub_14232a730
// 地址: 0x14232a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[2].b = 2
arg1[3] = 0
arg1[4].b = 2
arg1[5] = 0
sub_1422b4e50(&arg1[6])
sub_142287b50(&arg1[0x17])
sub_1422877b0(&arg1[0x1f])
sub_1422b4de0(&arg1[0x27])
sub_1422b4da0(&arg1[0x38])
arg1[0x42].d = 0xffffffff
void* rcx_5 = &arg1[0x64]
*(arg1 + 0x214) = 4
arg1[0x41] = &data_143328778
__builtin_memset(&arg1[0x43], 0, 0xe0)
__builtin_memset(arg1 + 0x2fc, 0, 0x24)
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax = *(rcx_5 + 0x10)

if (rax != 0)
    rcx_5 = rax

*rcx_5 = 0
*(rcx_5 + 8) = 0
void* rcx_6 = &arg1[0x6e]
arg1[0x68].d = 0xffffffff
*(arg1 + 0x344) = 0
arg1[0x6a] = 0
arg1[0x6b].d = 0
arg1[0x6c] = 0
arg1[0x6d] = 0
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_1 = *(rcx_6 + 0x10)

if (rax_1 != 0)
    rcx_6 = rax_1

*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x72].d = 0xffffffff
*(arg1 + 0x394) = 0
arg1[0x74] = 0
arg1[0x75].d = 0
arg1[0x76].w = 0
*(arg1 + 0x3b4) = 0
__builtin_memset(&arg1[0x78], 0, 0x24)
arg1[0x7f] = 0
arg1[0x80].d = 0
*(arg1 + 0x404) = 0
arg1[0x7d] = 0
arg1[0x7e].d = 0xffffffff
arg1[0x81].d = (arg1[0x81].d & 0xfffffffd) | 1
return arg1
