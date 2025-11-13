// 函数: sub_141cf7a70
// 地址: 0x141cf7a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    int32_t rdx = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&arg1[1], rdi_1.d + 1)
        rdx = arg1[2].d
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    arg1[2].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x14))
        sub_140594770(&arg1[1])
    
    UnDecorator::getReferenceType(arg1[1], arg3, (rdi_1.d + 1) * 2)

sub_140b58260(&arg1[3], arg3, 1)
__builtin_memset(&arg1[4], 0, 0x18)
void* rcx_4 = &arg1[7]
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
InitializeCriticalSection(&arg1[0xf])
SetCriticalSectionSpinCount(&arg1[0xf], 0xfa0)
arg1[0x14].d = 0x5a6f12e1
*(arg1 + 0xa4) = 9
arg1[0x15] = -1
__builtin_memset(&arg1[0x16], 0, 0x1e)
__builtin_memset(&arg1[0x1a], 0, 0x18)
arg1[0x1d] = 1
int64_t arg_8 = 0
sub_1405a4d70(&arg1[0x1c])
int64_t* rcx_8 = arg1[0x1c]
int64_t var_38 = 0
int32_t rdx_5 = 0
int32_t var_30 = 0
*rcx_8 = 0
int32_t rcx_9 = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
__builtin_memset(&arg1[0x21], 0, 0x2c)
arg1[0x28] = 0
arg1[0x29].b = arg4
*(arg1 + 0x149) = 0
int32_t var_2c = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rdi_3 = -1
    
    do
        rdi_3 += 1
    while (arg3[rdi_3] != 0)
    
    if (rdi_3.d + 1 s> 0)
        sub_1405947f0(&var_38, rdi_3.d + 1)
        rcx_9 = var_2c
        rdx_5 = var_30
    
    int32_t rax_3 = rdi_3.d + 1 + rdx_5
    int32_t var_30_1 = rax_3
    
    if (rax_3 s> rcx_9)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg3, (rdi_3.d + 1) * 2)

int32_t rax_4 = sub_141d04e90(&var_38)
int64_t rcx_14 = var_38
*(arg1 + 0x14c) = rax_4

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

arg1[0x2a].w = 0
arg1[0x2b] = 0
InitializeCriticalSection(&arg1[0x2c])
SetCriticalSectionSpinCount(&arg1[0x2c], 0xfa0)
arg1[0x31].b = 0
*(arg1 + 0x18c) = 0xffffffff
arg1[0x32].b = 0
int64_t* rax_5
int512_t zmm1
rax_5, zmm1 = sub_141d05170(arg1, arg2)

if (rax_5 != 0)
    int64_t r9 = *arg2
    arg1[0x27] = *(*(r9 + 0xa0))(arg2, &arg_8, arg3, r9)
    sub_141d06310(arg1, rax_5, arg5, zmm1)

return arg1
