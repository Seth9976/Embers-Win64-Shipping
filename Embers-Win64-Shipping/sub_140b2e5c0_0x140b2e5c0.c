// 函数: sub_140b2e5c0
// 地址: 0x140b2e5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[2]
*arg1 = 0
arg1[1] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
arg1[0xa] = 0
arg1[0xb] = 0
void* rcx = &arg1[0xc]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x15] = 0
arg1[0x16] = 0
__builtin_memset(&arg1[0x17], 0, 0x20)
arg1[0x14].d = 0
sub_1408d84f0(arg1)
sub_1408d84f0(&arg1[0xa])
int32_t i_1 = arg1[0x16].d
int64_t* rbx = arg1[0x15]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rbx
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0x16].d = 0

if (*(arg1 + 0xb4) != 0)
    sub_14061cd70(&arg1[0x15], 0)

arg1[0x18].d = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405dadb0(&arg1[0x17], 0)

arg1[0x1a].d = 0

if (*(arg1 + 0xd4) != 0)
    sub_1405c5510(&arg1[0x19], 0)

return arg1
