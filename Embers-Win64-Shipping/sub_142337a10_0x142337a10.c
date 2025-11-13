// 函数: sub_142337a10
// 地址: 0x142337a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s<= 0)
    return 

int64_t rdx = *(arg2 + 0x28)
int64_t* r14_1 = nullptr

do
    void* rdi_1 = *(r14_1 + *arg1)
    int64_t* rcx = *(rdi_1 + 0x18)
    
    if (rcx != 0)
        int64_t rcx_1 = sx.q((*(*rcx + 0x90))(rcx))
        *(arg2 + 0x28) += rcx_1
        rdx = *(arg2 + 0x28)
    
    int64_t* rcx_2 = *(rdi_1 + 0x28)
    
    if (rcx_2 != 0)
        int64_t rcx_3 = sx.q((*(*rcx_2 + 0x90))(rcx_2))
        *(arg2 + 0x28) += rcx_3
        rdx = *(arg2 + 0x28)
    
    int64_t rcx_6 = zx.q(*(rdi_1 + 0xec) * *(rdi_1 + 0xe8)) + rdx
    *(arg2 + 0x28) = rcx_6
    int64_t rdx_5 =
        zx.q((*(rdi_1 + 0xa8) * *(rdi_1 + 0xa4) + *(rdi_1 + 0xa0)) * *(rdi_1 + 0xac)) + rcx_6
    *(arg2 + 0x28) = rdx_5
    int32_t rcx_7
    rcx_7.b = *(rdi_1 + 0x160) != 0
    *(arg2 + 0x28) = zx.q((rcx_7 + 2) * *(rdi_1 + 0x17c) + (*(rdi_1 + 0x1b8) << 2)) + rdx_5
    uint64_t rax_10 = zx.q(sub_14229e780(rdi_1 + 0xf8))
    *(arg2 + 0x28) += rax_10
    *(arg2 + 0x28) += zx.q(*(rdi_1 + 0x204) * *(rdi_1 + 0x200))
    int64_t rax = sub_141e42c30(rdi_1 + 0x300)
    *(arg2 + 0x28) += rax
    i += 1
    rdx = *(arg2 + 0x28)
    r14_1 = &r14_1[1]
while (i s< arg1[1].d)
