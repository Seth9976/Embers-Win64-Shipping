// 函数: sub_1426ac5c0
// 地址: 0x1426ac5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[2].d
int32_t rbx_1 = rbx - 1

if (rbx - 1 s>= 0)
    int64_t r14_2 = sx.q(rbx_1) * 0x18
    int64_t r12_1 = r14_2
    int64_t r15_2 = sx.q(rbx_1 + 1) * 0x18
    int32_t temp1_1
    
    do
        int64_t rcx_1 = arg2[1]
        
        if (*(r14_2 + rcx_1 + 0x10) == arg3 && *(r14_2 + rcx_1 + 0x12) == 1)
            int32_t rdx = arg2[2].d
            int32_t rax_3 = rdx - rbx_1
            
            if (rax_3 != 1)
                memmove(rcx_1 + r12_1, r15_2 + rcx_1, (rax_3 - 1) * 0x18)
                rdx = arg2[2].d
            
            arg2[2].d = rdx - 1
        
        r15_2 -= 0x18
        r12_1 -= 0x18
        r14_2 -= 0x18
        temp1_1 = rbx_1
        rbx_1 -= 1
    while (temp1_1 - 1 s>= 0)

int32_t i = 0
int64_t var_38
char var_25

if (*(arg1 + 0x28) s> 0)
    int64_t r14_3 = 0
    
    do
        uint64_t rax = *(arg1 + 0x20)
        int64_t rcx_3 = *(r14_3 + rax)
        
        if (rcx_3 != 0 && *(r14_3 + rax + 8) == 0)
            var_25 &= 0xfe
            int64_t var_30_1 = rcx_3
            var_38 = 0
            int16_t var_28_1 = arg3
            char var_26_1 = 2
            sub_1426a96e0(arg2, &var_38)
        
        i += 1
        r14_3 += 0x10
    while (i s< *(arg1 + 0x28))

int32_t i_1 = 0

if (*(arg1 + 0x18) s<= 0)
    return 

int64_t r14_4 = 0

do
    int64_t rcx_5 = *(r14_4 + *(arg1 + 0x10))
    
    if (rcx_5 != 0)
        var_25 &= 0xfe
        var_38 = rcx_5
        int64_t var_30_2 = 0
        int16_t var_28_2 = arg3
        char var_26_2 = 2
        sub_1426a96e0(arg2, &var_38)
    
    i_1 += 1
    r14_4 += 8
while (i_1 s< *(arg1 + 0x18))
