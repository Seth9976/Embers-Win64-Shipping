// 函数: sub_142707620
// 地址: 0x142707620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg5
void* rbp = arg1
int32_t r10 = *(rbx + 0xc)
int32_t rdx = arg4[1].d
int64_t* r14 = arg3
int64_t* r15 = arg4

if (rdx s> r10)
    sub_14083ad30(rbx, rdx)
    r10 = *(rbx + 0xc)

int64_t rsi = sx.q(rbx[1].d)
int32_t rax = (rsi + 1).d
rbx[1].d = rax

if (rax s> r10)
    sub_14083a7e0(rbx)

int64_t rax_1 = *rbx
int64_t rcx_2 = rsi * 3
*(rax_1 + (rcx_2 << 2)) = *arg2
*(rax_1 + (rcx_2 << 2) + 8) = arg2[1].d

if (r15[1].d s> 2)
    int32_t* rax_3 = 8
    int64_t var_58_1 = *arg2
    uint32_t r14_1 = var_58_1:4.d
    int32_t i_1 = 2
    int32_t* var_68_1 = 8
    arg5.d = r14_1
    int32_t i
    
    do
        int64_t rcx_3 = *r15
        int32_t r15_1 = *(rbp + 0x40)
        int32_t r8 = var_58_1.d
        int64_t r12_1 = *(rbp + 0x48)
        int32_t rcx_4 = *(rax_3 + rcx_3)
        uint32_t temp0_1 = divu.dp.d(0:rcx_4, r15_1)
        int32_t r10_2 = r15_1 * r8
        uint32_t temp1_1 = modu.dp.d(0:rcx_4, r15_1)
        
        if (*(sx.q(r10_2 + r14_1) + r12_1) u> 0)
        label_142707833:
            int64_t rdi_5 = sx.q(rbx[1].d)
            int32_t rax_16 = *(rcx_3 + var_68_1 - 4)
            uint32_t temp1_2 = modu.dp.d(0:rax_16, r15_1)
            int32_t rcx_22 = (rdi_5 + 1).d
            r14_1 = temp1_2
            arg5.d = temp1_2
            var_58_1.d = divu.dp.d(0:rax_16, r15_1)
            var_58_1:4.d = temp1_2
            rbx[1].d = rcx_22
            
            if (rcx_22 s> *(rbx + 0xc))
                sub_14083a7e0(rbx)
            
            int64_t rax_18 = *rbx
            int64_t rcx_24 = rdi_5 * 3
            *(rax_18 + (rcx_24 << 2)) = var_58_1
            *(rax_18 + (rcx_24 << 2) + 8) = 0
        else
            int32_t rbp_1 = -1
            int32_t r13_1 = -1
            
            if (temp0_1 s> r8)
                rbp_1 = 1
            
            if (temp1_1 s> r14_1)
                r13_1 = 1
            
            int32_t temp15_1
            int32_t temp16_1
            temp15_1:temp16_1 = sx.q(temp0_1 - r8)
            int32_t temp17_1
            int32_t temp18_1
            temp17_1:temp18_1 = sx.q(temp1_1 - r14_1)
            int32_t r11_4 = ((temp16_1 ^ temp15_1) - temp15_1) * 2
            uint32_t rax_14 = r14_1
            int32_t rdi_4 = ((temp18_1 ^ temp17_1) - temp17_1) * 2
            
            if (r11_4 s<= rdi_4)
                int32_t rdx_8 = r11_4 - (rdi_4 s>> 1)
                
                while (rax_14 != temp1_1)
                    int32_t rcx_14 = r8 + rbp_1
                    
                    if (rdx_8 s< 0)
                        rcx_14 = r8
                    
                    rax_14 += r13_1
                    r8 = rcx_14
                    int32_t rcx_16 = rdx_8 - rdi_4
                    
                    if (rdx_8 s< 0)
                        rcx_16 = rdx_8
                    
                    rdx_8 = r11_4 + rcx_16
                    
                    if (*(sx.q(r8 * r15_1 + rax_14) + r12_1) u> 0)
                        goto label_142707833
            else
                int32_t r9_2 = rdi_4 - (r11_4 s>> 1)
                
                if (r8 != temp0_1)
                    do
                        uint32_t rcx_8 = rax_14 + r13_1
                        
                        if (r9_2 s< 0)
                            rcx_8 = rax_14
                        
                        r10_2 += r15_1 * rbp_1
                        rax_14 = rcx_8
                        r8 += rbp_1
                        int32_t rcx_10 = r9_2 - r11_4
                        
                        if (r9_2 s< 0)
                            rcx_10 = r9_2
                        
                        r9_2 = rdi_4 + rcx_10
                        
                        if (*(sx.q(r10_2 + rax_14) + r12_1) u> 0)
                            goto label_142707833
                    while (r8 != temp0_1)
                    
                    r14_1 = arg5.d
        
        i = i_1 + 1
        r15 = arg4
        rax_3 = &var_68_1[1]
        rbp = arg1
        i_1 = i
        var_68_1 = rax_3
    while (i s< r15[1].d)
    r14 = arg3

int64_t rdi_6 = sx.q(rbx[1].d)
int32_t rax_20 = (rdi_6 + 1).d
rbx[1].d = rax_20

if (rax_20 s> *(rbx + 0xc))
    sub_14083a7e0(rbx)

int64_t rax_21 = *rbx
int64_t rdx_12 = rdi_6 * 3
*(rax_21 + (rdx_12 << 2)) = *r14
int32_t result = r14[1].d
*(rax_21 + (rdx_12 << 2) + 8) = result
int32_t rdx_13 = rbx[1].d

if (*(rbx + 0xc) == rdx_13)
    return result

return sub_14083ad30(rbx, rdx_13)
