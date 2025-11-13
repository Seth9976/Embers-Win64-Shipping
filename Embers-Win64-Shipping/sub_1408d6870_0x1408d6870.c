// 函数: sub_1408d6870
// 地址: 0x1408d6870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
int64_t* rcx = &arg1[0xb]
*arg1 = &data_142e0e3b8
arg1[6] = 0
arg1[7] = 0
arg1[9] = 0
arg1[0xa] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
void* rcx_1 = &arg1[0x15]
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
arg1[0x13] = 0
arg1[0x14] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
__builtin_memset(&arg1[0x1d], 0, 0x38)
int64_t var_28
sub_140d15b50(&var_28, arg1[2])
int64_t var_20
int64_t rdi = var_20
arg1[0x21] = var_28

if (&arg1[0x22] != &var_20)
    int32_t r8_1 = *(arg1 + 0x11c)
    int32_t var_18
    arg1[0x23].d = var_18
    
    if (var_18 != 0 || r8_1 != 0)
        sub_1405a4c70(&arg1[0x22], var_18, r8_1)
        memcpy(arg1[0x22], rdi, var_18 * 2)
        rdi = var_20
    else
        *(arg1 + 0x11c) = 0

if (rdi != 0)
    sub_140a74f90(rdi)

arg1[5].d = (arg1[5].d & 0xfffffffb) | 3
return arg1
