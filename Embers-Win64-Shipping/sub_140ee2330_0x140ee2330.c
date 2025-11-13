// 函数: sub_140ee2330
// 地址: 0x140ee2330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142edf4d8
__builtin_memset(&arg1[3], 0, 0x30)
void* rcx = &arg1[9]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
arg1[0x11].b = 0
*(arg1 + 0x89) = sub_140da6080()
int64_t* rcx_1 = data_143e2a170
int32_t rax_3 = (*(*rcx_1 + 0x90))(rcx_1)
*(arg1 + 0x8c) = 0x3f800000
char rdx = 0
*(arg1 + 0x94) = 0

if (rax_3 u<= 2)
    rdx = rax_3.b

*(arg1 + 0x8a) = rdx
__builtin_memset(&arg1[0x13], 0, 0x14)
*(arg1 + 0xac) = 0x3f800000
__builtin_memset(arg1 + 0xb4, 0, 0x18)
arg1[0x1a] = 0
arg1[0x1b] = 0
sub_140a6e480(&arg1[0x1c])
sub_140a6edc0(&arg1[0x1e])
sub_140a6ed50(&arg1[0x20])
__builtin_memset(&arg1[0x21], 0, 0x11)
arg1[0x24] = 0
arg1[0x25].d = 0
*arg1 = &data_142ee0df0
sub_140ddd070(&arg1[0x26], arg3)
arg1[0x74] = arg2
arg1[0x75] = 0
arg1[0x76] = 0
arg1[0x73] = &data_142ee0dc8
arg1[0x77].b = 0
arg1[0x78].w = 0x100
arg1[0x79] = 0
arg1[0x7a].d = 0
sub_140de06c0(arg3)
return arg1
