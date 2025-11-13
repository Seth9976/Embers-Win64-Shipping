// 函数: sub_142abb2e0
// 地址: 0x142abb2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x18)

if (rbx == 0 || *(arg1 + 0x20) s> 0 || arg3 s>= arg4)
    return 

int32_t rbp_1 = *(arg1 + 0x24)
int32_t r13_1 = *(rbx + 8)
char rax_1

if (r13_1 + 1 s< 0 || *(rbx + 0xc) s< r13_1 + 1)
    rax_1 = sub_142ae7df0(rbx, r13_1 + 1, arg1 + 0x20)

if ((r13_1 + 1 s>= 0 && *(rbx + 0xc) s>= r13_1 + 1) || rax_1 != 0)
    *(*(rbx + 0x18) + (sx.q(*(rbx + 8)) << 2)) = rbp_1
    *(rbx + 8) += 1

void* rbx_1 = *(arg1 + 0x18)
int32_t rdx_2 = *(rbx_1 + 8)
char rax_3

if (rdx_2 + 1 s< 0 || *(rbx_1 + 0xc) s< rdx_2 + 1)
    rax_3 = sub_142ae7df0(rbx_1, rdx_2 + 1, arg1 + 0x20)

if ((rdx_2 + 1 s>= 0 && *(rbx_1 + 0xc) s>= rdx_2 + 1) || rax_3 != 0)
    *(*(rbx_1 + 0x18) + (sx.q(*(rbx_1 + 8)) << 2)) = arg2
    *(rbx_1 + 8) += 1

void* rbx_2 = *(arg1 + 0x18)
int32_t rbp_3 = *(arg1 + 8) + arg3
int32_t rdx_4 = *(rbx_2 + 8)
char rax_5

if (rdx_4 + 1 s< 0 || *(rbx_2 + 0xc) s< rdx_4 + 1)
    rax_5 = sub_142ae7df0(rbx_2, rdx_4 + 1, arg1 + 0x20)

if ((rdx_4 + 1 s>= 0 && *(rbx_2 + 0xc) s>= rdx_4 + 1) || rax_5 != 0)
    *(*(rbx_2 + 0x18) + (sx.q(*(rbx_2 + 8)) << 2)) = rbp_3
    *(rbx_2 + 8) += 1

void* rbx_3 = *(arg1 + 0x18)
int32_t rbp_5 = *(arg1 + 8) + arg4
int32_t rdx_6 = *(rbx_3 + 8)
void* rax

if (rdx_6 + 1 s< 0 || *(rbx_3 + 0xc) s< rdx_6 + 1)
    rax = sub_142ae7df0(rbx_3, rdx_6 + 1, arg1 + 0x20)

if ((rdx_6 + 1 s>= 0 && *(rbx_3 + 0xc) s>= rdx_6 + 1) || rax.b != 0)
    *(*(rbx_3 + 0x18) + (sx.q(*(rbx_3 + 8)) << 2)) = rbp_5
    *(rbx_3 + 8) += 1

if (*(arg1 + 0x20) s> 0)
    sub_142ae7f90(*(arg1 + 0x18), r13_1)
