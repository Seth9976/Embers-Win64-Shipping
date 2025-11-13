// 函数: sub_141c3fe90
// 地址: 0x141c3fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
int64_t r13 = *arg2
int32_t rdx = *(arg3 + 0xc)
arg3[1].d = 0
int32_t r8 = 0

if (rdi s> rdx)
    sub_140775b10(arg3, rdi)
    r8 = arg3[1].d
    rdx = *(arg3 + 0xc)

int32_t rax = r8 + rdi
arg3[1].d = rax

if (rax s> rdx)
    sub_140775270(arg3)

arg4[1].d = 0
int32_t rdx_3 = 0

if (rdi s> *(arg4 + 0xc))
    sub_140775b10(arg4, rdi)
    rdx_3 = arg4[1].d

int32_t result = rdx_3 + rdi
arg4[1].d = result

if (result s> *(arg4 + 0xc))
    result = sub_140775270(arg4)

int64_t r15 = *arg3
int32_t rsi_1 = 0
uint64_t r12 = *arg4

if (rdi != 0)
    int32_t rbx_1
    int32_t temp1_1
    
    do
        rbx_1 = rdi
        
        if (*(arg1 + 8) s<= rdi)
            rbx_1 = *(arg1 + 8)
        
        int64_t rcx_5 = sx.q(rsi_1)
        int64_t r14_1 = r12 + (rcx_5 << 2)
        sub_141c40d70(arg1, (rcx_5 << 2) + r13, sub_141c3bdb0(arg1[2].q, rbx_1, 0), rbx_1, 
            r15 + (rcx_5 << 2), r14_1)
        void* rdx_8 = arg1[2].q
        int32_t temp0_1 = *(rdx_8 + 0x38)
        *(rdx_8 + 0x38) -= rbx_1
        int32_t rax_3
        
        if (temp0_1 - rbx_1 s>= 0)
            int32_t rcx_7 = *(rdx_8 + 0x40)
            int32_t rax_6 = *(rdx_8 + 0x30) - rcx_7 - rbx_1
            
            if (rax_6 s<= 0)
                *(rdx_8 + 0x20) = *(rdx_8 + 0x10) - (sx.q(rax_6) << 2)
                rax_3 = neg.d(rax_6)
            else
                *(rdx_8 + 0x20) += sx.q(rbx_1) << 2
                rax_3 = rcx_7 + rbx_1
        else
            *(rdx_8 + 0x20) = *(rdx_8 + 0x10)
            rax_3 = 0
            *(rdx_8 + 0x38) = 0
        
        *(rdx_8 + 0x40) = rax_3
        result = sub_141c33790(arg1[2].q, r14_1, rbx_1)
        rsi_1 += rbx_1
        temp1_1 = rdi
        rdi -= rbx_1
    while (temp1_1 != rbx_1)

return result
