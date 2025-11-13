// 函数: sub_142af9700
// 地址: 0x142af9700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 8)
char* rdx = r9 + 0x5e
int32_t rax_2

if (*(r9 + 0x5e) != 0)
    if (*(*(r9 + 0x30) + 0x120) == 0)
        rax_2.b = *(r9 + 0x8c) u<= 0xff
    else
        rax_2 = sx.d(*(r9 + 0x5f))

int32_t r8

if (*(r9 + 0x5e) == 0 || rax_2 == 0)
    rdx = *(r9 + 0x28)
    r8 = sx.d(*(r9 + 0x59))
else
    r8 = 1

void* result = *(r9 + 0x30)
*(r9 + 0x5f) = 0

if (*(result + 0xfc) == 0xc)
    char arg_8
    char* rcx = &arg_8
    int32_t rcx_1
    void arg_9
    
    if (r8 == 1)
        if (*(r9 + 0x50) == 2)
            *(r9 + 0x50) = 1
            rcx = &arg_9
            arg_8 = 0xf
        
        *rcx = *rdx
        rcx_1 = rcx.d + 1
    else
        if (r8 != 2)
            *arg3 = 1
            return result
        
        if (*(r9 + 0x50) u<= 1)
            *(r9 + 0x50) = 2
            rcx = &arg_9
            arg_8 = 0xe
        
        *rcx = *rdx
        rcx[1] = rdx[1]
        rcx_1 = rcx.d + 2
    r8 = rcx_1 - &arg_8
    rdx = &arg_8

return sub_142b6b230(arg1, rdx, r8, arg2, arg3)
