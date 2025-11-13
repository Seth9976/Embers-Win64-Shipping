// 函数: sub_1408f81b0
// 地址: 0x1408f81b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142018d10(arg1, arg2)
int64_t* rcx = &arg1[0x68]
*arg1 = &data_142e17138
__builtin_memset(&arg1[0x61], 0, 0x20)
arg1[0x65].d = 0x3f651eb8
arg1[0x66] = 0
arg1[0x67] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x72]
arg1[0x6c].d = 0xffffffff
*(arg1 + 0x364) = 0
arg1[0x6e] = 0
arg1[0x6f].d = 0
arg1[0x70] = 0
arg1[0x71] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x76].d = 0xffffffff
*(arg1 + 0x3b4) = 0
arg1[0x78] = 0
arg1[0x79].d = 0
arg1[0x7a] = 0
arg1[0x47] = sub_1408fb610()
arg1[0x48] = sub_1408fb7a0()
return arg1
