// 函数: sub_141d74770
// 地址: 0x141d74770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
__builtin_memset(arg1, 0, 0x28)
arg1[6] = 0
arg1[7] = 0
*(arg1 + 0x44) = 0xea60
arg1[9].d = 1
arg1[0xa].d = 0xea60
*(arg1 + 0x54) = 1
arg1[0xb].d = 0x500
*(arg1 + 0x5c) = 0x2d0
int64_t var_28
int64_t* rax = sub_140b2b230(&var_28)

if (arg1 != rax)
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg1 = *rax
    *rax = 0
    arg1[1].d = rax[1].d
    *(arg1 + 0xc) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140b20bf0(arg1)
arg1[5].w = 0
*(arg1 + 0x2c) = 0
arg1[2] = 0

if (arg1[3] != u"{world}")
    int32_t rdx_1 = 0
    arg1[4].d = 0
    
    if (*(arg1 + 0x24) != 8)
        sub_1405947f0(&arg1[3], 8)
        rdx_1 = arg1[4].d
    
    arg1[4].d = rdx_1 + 8
    
    if (rdx_1 + 8 s> *(arg1 + 0x24))
        sub_140594770(&arg1[3])
    
    *arg1[3] = *u"{world}"

int32_t arg_c = 1
arg1[0xa] = 0x18.q
arg_c = 1
*(arg1 + 0x44) = 0x18.q
*(arg1 + 0x4c) = 0
arg1[8].b = 4
arg1[0xc] = 0x10100
arg1[0xd].d = 0x10

if (arg1[6] != u".avi")
    arg1[7].d = 0
    
    if (*(arg1 + 0x3c) != 5)
        sub_1405947f0(&arg1[6], 5)
        rdi = arg1[7].d
    
    arg1[7].d = rdi + 5
    
    if (rdi + 5 s> *(arg1 + 0x3c))
        sub_140594770(&arg1[6])
    
    uint64_t* rcx_9 = arg1[6]
    *rcx_9 = 0x6900760061002e
    rcx_9[1].w = 0

return arg1
