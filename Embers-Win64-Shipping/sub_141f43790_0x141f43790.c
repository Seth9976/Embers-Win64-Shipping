// 函数: sub_141f43790
// 地址: 0x141f43790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1
int32_t i = *(arg1 + 0xd8) - 1
uint64_t rax

if (i s>= 1)
    int64_t i_2 = sx.q(i)
    int64_t rdi_1 = i_2 << 3
    int64_t rsi_1 = i_2 - 1
    int64_t r15_1 = rdi_1
    int64_t r14_2 = sx.q(i + 1) << 3
    
    do
        int64_t r9_1 = *(r8 + 0xd0)
        int64_t rdx_1 = *(rdi_1 + r9_1)
        
        if (rdx_1 != 0)
            int64_t rcx = rsi_1
            
            if (rsi_1 s>= 0)
                rax = rdi_1 - 8 + r9_1
                int64_t temp1_1
                
                do
                    if (rdx_1 == *rax)
                        int32_t rcx_1 = *(r8 + 0xd8)
                        int32_t rax_3 = rcx_1 - i
                        
                        if (rax_3 != 1)
                            memmove(r15_1 + r9_1, r14_2 + r9_1, (rax_3 - 1) << 3)
                            r8 = arg1
                            rcx_1 = *(r8 + 0xd8)
                        
                        *(r8 + 0xd8) = rcx_1 - 1
                        break
                    
                    rax -= 8
                    temp1_1 = rcx
                    rcx -= 1
                while (temp1_1 - 1 s>= 0)
        
        i -= 1
        r14_2 -= 8
        r15_1 -= 8
        rdi_1 -= 8
        rsi_1 -= 1
    while (i s>= 1)

if (*(r8 + 0xe8) == 0)
    return 

int64_t r14_3 = 0
uint64_t* rbp_1 = r8 + 0xd0
int64_t arg_18 = 0
uint64_t rdx_3 = *rbp_1
int64_t r9_2 = 0
uint64_t arg_10 = rdx_3
int64_t r10_1 = sx.q(rbp_1[1].d) << 3
uint64_t r10_2 = r10_1 u>> 3

if (rdx_3 u> r10_1 + rdx_3)
    r10_2 = 0

uint64_t arg_20 = r10_2

if (r10_2 != 0)
    int64_t r12
    int64_t var_38_1 = r12
    
    do
        int64_t r15_2 = *rdx_3
        
        if (r15_2 != 0)
            int64_t rcx_3 = sx.q(*(r8 + 0xe8))
            
            if (rcx_3.d != 0)
                int32_t r13_1 = 0
                int32_t rdi_2 = 0
                int64_t rbx_1 = 0
                r12.b = **(r8 + 0xe0) != r15_2
                
                do
                    int64_t r9_3 = sx.q(rdi_2)
                    rbx_1 += 1
                    rdi_2 += 1
                    
                    if (rbx_1 s< rcx_3)
                        int64_t rcx_4 = *(r8 + 0xe0) + (rbx_1 << 3)
                        
                        do
                            int32_t rax_9
                            rax_9.b = *rcx_4 != r15_2
                            
                            if (zx.d(r12.b) != rax_9)
                                break
                            
                            rdi_2 += 1
                            rbx_1 += 1
                            rcx_4 += 8
                        while (rbx_1 s< rcx_3)
                    
                    int32_t rsi_3 = rdi_2 - r9_3.d
                    
                    if (r12.b != 0)
                        if (r13_1 != r9_3.d)
                            int64_t rcx_5 = *(r8 + 0xe0)
                            memmove(rcx_5 + (sx.q(r13_1) << 3), rcx_5 + (r9_3 << 3), rsi_3 << 3)
                            r8 = arg1
                        
                        r13_1 += rsi_3
                    
                    r12.b ^= 1
                while (rbx_1 s< rcx_3)
                
                rdx_3 = arg_10
                r9_2 = arg_18
                r10_2 = arg_20
                *(r8 + 0xe8) = r13_1
        
        rdx_3 += 8
        r9_2 += 1
        arg_10 = rdx_3
        arg_18 = r9_2
    while (r9_2 != r10_2)
    
    rbp_1 = r8 + 0xd0

int64_t* rdi_3 = *(r8 + 0xe0)
uint64_t r15_4 = sx.q(*(r8 + 0xe8)) << 3 u>> 3

if (rdi_3 u> &rdi_3[sx.q(*(r8 + 0xe8))])
    r15_4 = 0

if (r15_4 == 0)
    return 

do
    int64_t i_1 = *rdi_3
    
    if (i_1 != 0)
        uint64_t rdx_6 = *rbp_1
        int64_t r8_5 = sx.q(rbp_1[1].d)
        uint64_t rcx_7 = rdx_6
        int64_t rsi_4 = r8_5 << 3
        rax = rsi_4 + rdx_6
        
        if (rdx_6 != rax)
            while (*rcx_7 != i_1)
                rcx_7 += 8
                
                if (rcx_7 == rax)
                    goto label_141f43a30
        
        if (rdx_6 == rax || ((rcx_7 - rdx_6) s>> 3).d == 0xffffffff)
        label_141f43a30:
            int32_t rax_12 = (r8_5 + 1).d
            rbp_1[1].d = rax_12
            
            if (rax_12 s> *(rbp_1 + 0xc))
                sub_1405a4d70(rbp_1)
            
            *(rsi_4 + *rbp_1) = i_1
    
    rdi_3 = &rdi_3[1]
    r14_3 += 1
while (r14_3 != r15_4)
