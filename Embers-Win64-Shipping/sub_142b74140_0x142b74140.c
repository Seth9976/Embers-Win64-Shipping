// 函数: sub_142b74140
// 地址: 0x142b74140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
int32_t i = arg3

if (arg3 s> 5)
    do
        uint32_t rcx = zx.d(*(rbx + 2))
        void* rsi_1 = rbx + 4
        void* rdi_1 = rsi_1
        
        if (rcx u>= 0xfc00)
            rdi_1 += 2
            
            if (rcx == 0xffff)
                rdi_1 = rsi_1 + 4
        
        void* rbp_1 = arg1[0xe]
        int32_t rdi_3 = ((rdi_1 - *arg1) s>> 1).d
        int32_t rdx = *(rbp_1 + 8)
        char rax_2
        
        if (rdx + 1 s< 0 || *(rbp_1 + 0xc) s< rdx + 1)
            rax_2 = sub_142ae7df0(rbp_1, rdx + 1, arg4)
        
        if ((rdx + 1 s>= 0 && *(rbp_1 + 0xc) s>= rdx + 1) || rax_2 != 0)
            *(*(rbp_1 + 0x18) + (sx.q(*(rbp_1 + 8)) << 2)) = rdi_3
            *(rbp_1 + 8) += 1
        
        int16_t rax_4 = arg1[6].w
        int32_t rbp_3
        
        if (rax_4 s< 0)
            rbp_3 = *(arg1 + 0x34)
        else
            rbp_3 = sx.d(rax_4) s>> 5
        
        void* rdi_4 = arg1[0xe]
        int32_t rdx_2 = *(rdi_4 + 8)
        char rax_5
        
        if (rdx_2 + 1 s< 0 || *(rdi_4 + 0xc) s< rdx_2 + 1)
            rax_5 = sub_142ae7df0(rdi_4, rdx_2 + 1, arg4)
        
        if ((rdx_2 + 1 s>= 0 && *(rdi_4 + 0xc) s>= rdx_2 + 1) || rax_5 != 0)
            *(*(rdi_4 + 0x18) + (sx.q(*(rdi_4 + 8)) << 2)) = (i - (i s>> 1)) << 0x10 | rbp_3
            *(rdi_4 + 8) += 1
        
        uint32_t rcx_7 = zx.d(*(rbx + 2))
        i s>>= 1
        
        if (rcx_7 u>= 0xfc00)
            if (rcx_7 != 0xffff)
                rcx_7 = (rcx_7 + 0x400) << 0x10 | zx.d(*rsi_1)
                rsi_1 += 2
            else
                rcx_7 = zx.d(*rsi_1) << 0x10 | zx.d(*(rsi_1 + 2))
                rsi_1 += 4
        
        rbx = rsi_1 + (sx.q(rcx_7) << 1)
    while (i s> 5)

uint32_t rcx_10 = zx.d(*(rbx + 2))
void* rbx_1 = rbx + 4
uint32_t rcx_11 = rcx_10 & 0x7fff
int16_t arg_18 = *rbx
uint32_t rdi_5

if (rcx_11 u>= 0x4000)
    uint32_t rax_13
    uint32_t rdi_6
    
    if (rcx_11 u>= 0x7fff)
        rdi_6 = zx.d(*rbx_1)
        rax_13 = zx.d(*(rbx_1 + 2))
    else
        rax_13 = zx.d(*rbx_1)
        rdi_6 = rcx_11 - 0x4000
    
    rdi_5 = rdi_6 << 0x10 | rax_13
else
    rdi_5 = rcx_11

if (rcx_11 u>= 0x4000)
    if (rcx_11 u>= 0x7fff)
        rbx_1 += 4
    else
        rbx_1 += 2

void* rsi_2 = arg1[0xe]
int32_t rbp_6 = ((rbx_1 - *arg1) s>> 1).d
int32_t rdx_8 = *(rsi_2 + 8)
char rax_14

if (rdx_8 + 1 s< 0 || *(rsi_2 + 0xc) s< rdx_8 + 1)
    rax_14 = sub_142ae7df0(rsi_2, rdx_8 + 1, arg4)

if ((rdx_8 + 1 s>= 0 && *(rsi_2 + 0xc) s>= rdx_8 + 1) || rax_14 != 0)
    *(*(rsi_2 + 0x18) + (sx.q(*(rsi_2 + 8)) << 2)) = rbp_6
    *(rsi_2 + 8) += 1

int16_t rax_16 = arg1[6].w
int32_t rbp_8

if (rax_16 s< 0)
    rbp_8 = *(arg1 + 0x34)
else
    rbp_8 = sx.d(rax_16) s>> 5

void* rsi_3 = arg1[0xe]
int32_t rdx_10 = *(rsi_3 + 8)
char rax_17

if (rdx_10 + 1 s< 0 || *(rsi_3 + 0xc) s< rdx_10 + 1)
    rax_17 = sub_142ae7df0(rsi_3, rdx_10 + 1, arg4)

if ((rdx_10 + 1 s>= 0 && *(rsi_3 + 0xc) s>= rdx_10 + 1) || rax_17 != 0)
    *(*(rsi_3 + 0x18) + (sx.q(*(rsi_3 + 8)) << 2)) = ((i << 0x10) - 0x10000) | rbp_8
    *(rsi_3 + 8) += 1

arg_18 = arg_18
sub_142a48d70(&arg1[5], &arg_18, 0, 1)

if ((rcx_10 u>> 0xf).b == 0)
    return rbx_1 + (sx.q(rdi_5) << 1)

arg1[1] = 0
*(arg1 + 0x6c) = rdi_5
return 0
