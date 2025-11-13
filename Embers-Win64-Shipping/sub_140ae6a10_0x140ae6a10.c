// 函数: sub_140ae6a10
// 地址: 0x140ae6a10
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
arg1[0xa].w = 0
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd] = 0
void* rcx = &arg1[0xe]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x20]
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
arg1[0x16].d = 0x13b3b
__builtin_memset(&arg1[0x17], 0, 0x48)
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
int64_t* rax_3 = data_14399fe80
void* rcx_4 = &rax_3[sx.q(data_14399fe88) * 2]

if (rax_3 != rcx_4)
    while (rax_3[1].d == 0 || *rax_3 == 0)
        rax_3 = &rax_3[2]
        
        if (rax_3 == rcx_4)
            return arg1
    
    sub_140920c10(&data_14399fe80, arg1)

return arg1
