// 函数: sub_141eb2910
// 地址: 0x141eb2910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg2 + 0xc0)
int32_t rax_1 = rdx & 0x80000001

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffe) + 1

void* rbx_2 = sx.q(rax_1) * 0x60 + arg2
int32_t rcx = *(rbx_2 + 0x20)

if (*(rbx_2 + 8) << 6 s<= rcx)
    void* rax_7 = j_sub_140a82f30(0x4000)
    void* const rbp_1
    
    if (rax_7 == 0)
        rbp_1 = nullptr
    else
        memset(rax_7, 0, 0x4000)
        rbp_1 = sub_141eb5060(rax_7)
    
    int64_t rdi_2 = sx.q(*(rbx_2 + 8))
    int32_t rax_9 = (rdi_2 + 1).d
    *(rbx_2 + 8) = rax_9
    
    if (rax_9 s> *(rbx_2 + 0xc))
        sub_1405a4d70(rbx_2)
    
    *(*rbx_2 + (rdi_2 << 3)) = rbp_1
    rdx = *(arg2 + 0xc0)
    rcx = *(rbx_2 + 0x20)

arg1[1] = rcx
*arg1 = rdx
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rcx)
int32_t rdx_3 = temp0 & 0x3f
int32_t rax_13 = temp1 + rdx_3
sub_141eb6c80((sx.q((rax_13 & 0x3f) - rdx_3) << 8) + *(*rbx_2 + (sx.q(rax_13 s>> 6) << 3)), arg3)
sub_141eb0420(arg2, 0)
*(rbx_2 + 0x20) += 1
return arg1
