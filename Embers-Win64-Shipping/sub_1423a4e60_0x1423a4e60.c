// 函数: sub_1423a4e60
// 地址: 0x1423a4e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = &arg1[0x17]
*arg1 = arg2
arg1[0x16].b = arg5
*(r10 + 0x1c) = 0x80
void* rax_1 = *(r10 + 0x10)

if (rax_1 != 0)
    r10 = rax_1

__builtin_memset(r10, 0, 0x1c)
sub_1423b7af0(arg1, arg3, zx.q(arg4), arg6, sub_1423b7f00(arg1, arg6), 0)
arg1[0xf] = data_143dbb3b8
arg1[0x10].d = 0x3f800000
int32_t rcx_1

if (arg2 != 0)
    rcx_1 = 0x40

if (arg2 == 0 || (*(arg2 + 0x3d) & 0x10) == 0)
    rcx_1 = 0

*(arg1 + 0xb4) = ((*(arg1 + 0xb4) & 0xffffffbf) | rcx_1) & 0xfffffc7f
int32_t rax_6 = *(arg1 + 0x64)
arg1[0x11].d = rax_6
*(arg1 + 0x8c) = rax_6
*(arg1 + 0x94) = rax_6
*(arg1 + 0x9c) = rax_6
*(arg1 + 0x84) = 0
arg1[0x12].d = 0
*(arg1 + 0xa4) = 0
arg1[0x13].d = 0
return arg1
