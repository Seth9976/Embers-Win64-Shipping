// 函数: sub_142892db0
// 地址: 0x142892db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rdi = sx.q(arg5)
int64_t r12 = arg2
int64_t rbp = arg4
int32_t r9_1

if (sub_142890f30(arg1, 0x2000) == 0)
    r9_1 = rdi.d
else
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q((rdi + 7).d)
    r9_1 = ((temp0_1 & 7) + temp1_1) s>> 3

void* r10 = *arg1
int64_t r15 = sx.q(*(r10 + 4))

if ((*(r10 + 0x10) & 0x100000) == 0)
    int32_t rbx_2 = 0
    int32_t temp2_1 = rdi.d
    
    if (temp2_1 s<= 0)
        *arg3 = 0
        rbx_2.b = temp2_1 == 0
        return zx.q(rbx_2)
    
    int64_t r13_1 = sx.q(*(arg1 + 0x14))
    int64_t rcx_2 = sx.q(r9_1)
    int64_t r8_5 = r13_1 - rbp + r12
    int32_t rdx_5
    rdx_5.b = r8_5 u> neg.q(rcx_2)
    int32_t rcx_3 = 0
    int32_t rax_11
    rax_11.b = r8_5 u< rcx_2
    
    if (r8_5 != 0)
        rcx_3 = rdx_5 | rax_11
    
    int32_t rax_12
    rax_12.b = r9_1 s> 0
    
    if ((rax_12 & rcx_3) == 0)
        if (r13_1.d == 0 && (*(arg1 + 0x7c) & rdi.d) == 0)
            if ((*(r10 + 0x20))(arg1, r12, rbp, rdi) == 0)
                *arg3 = 0
                return 0
            
            *arg3 = rdi.d
            return 1
        
        if (r15.d s> 0x20)
            sub_1428bc530()
            noreturn
        
        if (r13_1.d == 0)
            goto label_142892fba
        
        int32_t rcx_7 = r15.d - r13_1.d
        
        if (rcx_7 s> rdi.d)
            memcpy(&arg1[7] + r13_1, rbp, rdi.d)
            *(arg1 + 0x14) += rdi.d
            *arg3 = 0
            return 1
        
        int64_t rbx_3 = sx.q(rcx_7)
        memcpy(&arg1[7] + r13_1, rbp, rbx_3.d)
        rdi = zx.q(rdi.d - rcx_7)
        rbp += rbx_3
        
        if ((*(*arg1 + 0x20))(arg1, r12, &arg1[7], r15) != 0)
            r12 += r15
            rbx_2 = r15.d
        label_142892fba:
            *arg3 = rbx_2
            uint32_t count = (r15 - 1).d & rdi.d
            int32_t rdi_1 = rdi.d - count
            
            if (rdi_1 s<= 0)
                goto label_142892fe8
            
            if ((*(*arg1 + 0x20))(arg1, r12, rbp, sx.q(rdi_1)) != 0)
                *arg3 += rdi_1
            label_142892fe8:
                
                if (count != 0)
                    memcpy(&arg1[7], sx.q(rdi_1) + rbp, count)
                
                *(arg1 + 0x14) = count
                return 1
    else
        sub_1428a5670(6, 0xa7, 0xa2, "crypto\evp\evp_enc.c", 0x147)
else
    int32_t rax_6
    int32_t rbx_1
    
    if (r15.d == 1)
        int64_t rcx = sx.q(r9_1)
        int64_t r8_1 = r12 - rbp
        int32_t rdx_2
        rdx_2.b = r8_1 u> neg.q(rcx)
        int32_t rax_5
        rax_5.b = r8_1 u< rcx
        rax_6 = 0
        
        if (r8_1 != 0)
            rax_6 = rdx_2 | rax_5
        
        rbx_1.b = r9_1 s> 0
    
    if (r15.d != 1 || (rbx_1 & rax_6) == 0)
        int32_t rax_7 = (*(r10 + 0x20))(arg1, r12, rbp, rdi)
        
        if (rax_7 s>= 0)
            *arg3 = rax_7
            return 1
    else
        sub_1428a5670(6, 0xa7, 0xa2, "crypto\evp\evp_enc.c", 0x136)

return 0
