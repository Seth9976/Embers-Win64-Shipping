// 函数: sub_141c40010
// 地址: 0x141c40010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
int64_t r12 = *arg2
int32_t rdx = *(arg3 + 0xc)
int64_t r14 = arg1[1].q
int32_t rcx = 0
arg3[1].d = 0

if (rdi s> rdx)
    sub_140775b10(arg3, rdi)
    rcx = arg3[1].d
    rdx = *(arg3 + 0xc)

int32_t result = rcx + rdi
arg3[1].d = result

if (result s> rdx)
    result = sub_140775270(arg3)

uint64_t r15 = *arg3
int32_t rsi = 0

if (rdi != 0)
    int32_t rbx_1
    int32_t temp1_1
    
    do
        rbx_1 = rdi
        
        if (*(arg1 + 8) s<= rdi)
            rbx_1 = *(arg1 + 8)
        
        int64_t rcx_4 = sx.q(rsi)
        sub_141c40d70(arg1, r12 + (rcx_4 << 2), sub_141c3bdb0(arg1[2].q, rbx_1, 0), rbx_1, 
            r15 + (rcx_4 << 2), r14)
        void* r8_2 = arg1[2].q
        int32_t temp0_1 = *(r8_2 + 0x38)
        *(r8_2 + 0x38) -= rbx_1
        int32_t rax_2
        
        if (temp0_1 - rbx_1 s>= 0)
            int32_t rcx_6 = *(r8_2 + 0x40)
            int32_t rax_5 = *(r8_2 + 0x30) - rcx_6 - rbx_1
            
            if (rax_5 s<= 0)
                *(r8_2 + 0x20) = *(r8_2 + 0x10) - (sx.q(rax_5) << 2)
                rax_2 = neg.d(rax_5)
            else
                *(r8_2 + 0x20) += sx.q(rbx_1) << 2
                rax_2 = rcx_6 + rbx_1
        else
            *(r8_2 + 0x20) = *(r8_2 + 0x10)
            rax_2 = 0
            *(r8_2 + 0x38) = 0
        
        *(r8_2 + 0x40) = rax_2
        result = sub_141c33790(arg1[2].q, r14, rbx_1)
        rsi += rbx_1
        temp1_1 = rdi
        rdi -= rbx_1
    while (temp1_1 != rbx_1)

return result
