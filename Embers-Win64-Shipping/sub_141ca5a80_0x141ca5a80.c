// 函数: sub_141ca5a80
// 地址: 0x141ca5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 8) s> 1)
    return sub_141ca5b90(arg1 - 0x28, arg2) __tailcall

*arg2 = *(arg1 + 0x278)
arg2[1] = *(arg1 + 0x279)
arg2[2] = *(arg1 + 0x27a)
arg2[3] = *(arg1 + 0x27b)
arg2[4] = *(arg1 + 0x27c)
arg2[5] = *(arg1 + 0x27d)
arg2[6] = *(arg1 + 0x27e)
arg2[7] = *(arg1 + 0x27f)
char result = *(arg1 + 0x280)
arg2[8] = result

if (&arg2[0x10] == arg1 + 0x288)
    return result

void* rbx_1 = &arg2[0x48]
int64_t rdi_1 = sx.q(*(arg1 + 0x2d0))
sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
void* rax_8 = *(arg1 + 0x2c8)
void* rdx = arg1 + 0x2c0
void* r9_1 = *(rbx_1 + 8)

if (rax_8 != 0)
    rdx = rax_8

if (r9_1 != 0)
    rbx_1 = r9_1

memcpy(rbx_1, rdx, (rdi_1 << 2).d)
*(arg2 + 0x58) = rdi_1.d
return sub_141c951a0(&arg2[0x10], arg1 + 0x288)
