// 函数: sub_1417a1310
// 地址: 0x1417a1310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x20)
int64_t* r9 = &arg1[4]
r9[2] = 0
r9[3].d = 0
*(r9 + 0x1c) = 0x80
int64_t* rax = r9[2]

if (rax != 0)
    r9 = rax

*r9 = 0
r9[1] = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
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
void* rcx_1 = &arg1[0x1a]
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
__builtin_memset(&arg1[0x16], 0, 0x20)
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x24]
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
arg1[0x22] = 0
arg1[0x23] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

__builtin_memset(rcx_2, 0, 0x1c)
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0
arg1[0x2a] = 0
arg1[0x2b].d = 0
__builtin_memset(&arg1[0x2c], 0, 0x20)

if (arg1 != arg2)
    int32_t r8 = *(arg1 + 0xc)
    int64_t* rbx_1 = *arg2
    int32_t i_1 = arg2[1].d
    arg1[1].d = i_1
    
    if (i_1 != 0 || r8 != 0)
        sub_1407c3650(arg1, i_1, r8)
        int64_t* rcx_4 = *arg1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t zmm0_1 = *rbx_1
                rbx_1 += 0xc
                *rcx_4 = zmm0_1
                rcx_4 += 0xc
                *(rcx_4 - 4) = *(rbx_1 - 4)
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        *(arg1 + 0xc) = 0

arg1[0x30] = 0
sub_1417b10e0(arg1, arg3, arg4, arg5)
return arg1
