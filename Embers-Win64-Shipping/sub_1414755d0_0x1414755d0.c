// 函数: sub_1414755d0
// 地址: 0x1414755d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
arg1[3].d = arg5
*(arg1 + 0x1c) = arg6
arg1[4] = arg7
arg1[5] = arg8
arg1[6].d = arg9
*(arg1 + 0x34) = arg10
*arg1 = arg2
arg1[1] = arg3
arg1[2] = arg4
__builtin_memset(&arg1[7], 0, 0x20)
int32_t i_2 = arg1[8].d
int64_t* rbx = arg1[7]
int32_t r12 = *(arg1[4] + 8)

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rbx_1 = 0
arg1[8].d = 0

if (*(arg1 + 0x44) != r12)
    sub_14083ae30(&arg1[7], r12)
    rbx_1 = arg1[8].d

int64_t rdi = sx.q(*(arg1[4] + 8))
int32_t rax_8 = rbx_1 + rdi.d
arg1[8].d = rax_8

if (rax_8 s> *(arg1 + 0x44))
    sub_14083a990(&arg1[7], rbx_1)

memset((sx.q(rbx_1) << 4) + arg1[7], 0, rdi << 4)
int32_t i_3 = arg1[0xa].d
int64_t* rbx_2 = arg1[9]
int32_t r14 = *(arg1[5] + 8)

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[0xa].d = 0

if (*(arg1 + 0x54) != r14)
    sub_14083ae30(&arg1[9], r14)
    rbp = arg1[0xa].d

int64_t rbx_3 = sx.q(*(arg1[5] + 8))
int32_t rax_11 = rbx_3.d + rbp
arg1[0xa].d = rax_11

if (rax_11 s> *(arg1 + 0x54))
    sub_14083a990(&arg1[9], rbp)

memset((sx.q(rbp) << 4) + arg1[9], 0, rbx_3 << 4)
return arg1
