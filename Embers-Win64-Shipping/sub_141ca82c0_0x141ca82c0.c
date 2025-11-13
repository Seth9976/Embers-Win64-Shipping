// 函数: sub_141ca82c0
// 地址: 0x141ca82c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x4c0)

if (rcx != 0)
    sub_141ca7f80(rcx, arg2)

int64_t rdi = sx.q(*(arg1 + 0x4d0))
int64_t* arg_8 = arg2

if (rdi.d s< *(arg1 + 0x4e0))
    int64_t rsi_1 = rdi
    int64_t rbp_1 = rdi
    
    do
        if (sub_141c99d90(&arg_8, *(arg1 + 0x4d8) + (sx.q(rdi.d) << 3)).b != 0)
            if (rsi_1 != rbp_1)
                int64_t rax_2 = *(arg1 + 0x4d8)
                int64_t rdx_1 = *(rax_2 + (rsi_1 << 3))
                *(rax_2 + (rsi_1 << 3)) = *(rax_2 + (rbp_1 << 3))
                *(rax_2 + (rbp_1 << 3)) = rdx_1
            
            rbp_1 += 1
        
        rdi = zx.q(rdi.d + 1)
        rsi_1 += 1
    while (rdi.d s< *(arg1 + 0x4e0))

int64_t rdi_1 = sx.q(*(arg1 + 0x4e8))
arg_8 = arg2

if (rdi_1.d s>= *(arg1 + 0x4f8))
    return 

int64_t* r14_2 = rdi_1 << 4
int64_t rsi_2 = rdi_1
int64_t* r15_1 = r14_2
int64_t rbp_2 = rdi_1

do
    if (sub_141c99e20(&arg_8, (sx.q(rdi_1.d) << 4) + *(arg1 + 0x4f0)).b != 0)
        if (rsi_2 != rbp_2)
            int64_t rax_3 = *(arg1 + 0x4f0)
            int64_t rcx_5 = *(r14_2 + rax_3)
            int64_t* rdx_5 = r14_2 + rax_3
            void* r8_2 = r15_1 + rax_3
            *rdx_5 = *(r15_1 + rax_3)
            *r8_2 = rcx_5
            int64_t rcx_6 = rdx_5[1]
            rdx_5[1] = *(r8_2 + 8)
            *(r8_2 + 8) = rcx_6
        
        rbp_2 += 1
        r15_1 = &r15_1[2]
    
    rdi_1 = zx.q(rdi_1.d + 1)
    rsi_2 += 1
    r14_2 = &r14_2[2]
while (rdi_1.d s< *(arg1 + 0x4f8))
