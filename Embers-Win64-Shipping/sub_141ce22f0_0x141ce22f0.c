// 函数: sub_141ce22f0
// 地址: 0x141ce22f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbx_1 = sx.q(arg2)
int32_t rdi_1 = arg3
void* r9_1 = arg1

if (rbx_1.d s>= *(arg1 + 0x110))
    return 

void* r8 = arg1 + 0x118
void* rax_1 = *(r8 + 0x10)

if (rax_1 != 0)
    r8 = rax_1

int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rbx_1.d)

if (not(test_bit(*(r8 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)), rbx_1.d & 0x1f))
        || rdi_1 s< 0 || rdi_1 s>= *(r9_1 + 0x148))
    return 

void* r8_1 = r9_1 + 0x150
void* rax_6 = *(r8_1 + 0x10)

if (rax_6 != 0)
    r8_1 = rax_6

int32_t temp2_1
int32_t temp3_1
temp2_1:temp3_1 = sx.q(rdi_1)

if (not(test_bit(*(r8_1 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)), rdi_1 & 0x1f)))
    return 

void* rax_12 = *(r9_1 + 0x108) + rbx_1 * 0x28
int64_t* rax_15 = (sx.q(*(rax_12 + 0x20)) << 4) + *(r9_1 + 0x140)
int64_t rcx_5 = sx.q(rax_15[1].d)

if (rcx_5.d != 0)
    int32_t rbp_1 = 0
    int32_t r13_1 = 0
    int64_t r12
    r12.b = **rax_15 != rbx_1.d
    int64_t rsi_1 = 0
    
    do
        int64_t r9_2 = sx.q(rbp_1)
        rsi_1 += 1
        rbp_1 += 1
        
        if (rsi_1 s< rcx_5)
            int32_t* rcx_6 = *rax_15 + (rsi_1 << 2)
            
            do
                int32_t rax_18
                rax_18.b = *rcx_6 != rbx_1.d
                
                if (zx.d(r12.b) != rax_18)
                    break
                
                rbp_1 += 1
                rsi_1 += 1
                rcx_6 = &rcx_6[1]
            while (rsi_1 s< rcx_5)
        
        int32_t r15_2 = rbp_1 - r9_2.d
        
        if (r12.b != 0)
            if (r13_1 != r9_2.d)
                int64_t rcx_7 = *rax_15
                memmove(rcx_7 + (sx.q(r13_1) << 2), rcx_7 + (r9_2 << 2), r15_2 << 2)
            
            r13_1 += r15_2
        
        r12.b ^= 1
    while (rsi_1 s< rcx_5)
    
    r9_1 = arg1
    rax_15[1].d = r13_1
    rdi_1 = arg3

*(rax_12 + 0x20) = rdi_1
uint64_t* rdi_5 = (sx.q(rdi_1) << 4) + *(r9_1 + 0x140)
int64_t rsi_2 = sx.q(rdi_5[1].d)
int32_t rax_21 = (rsi_2 + 1).d
rdi_5[1].d = rax_21

if (rax_21 s> *(rdi_5 + 0xc))
    sub_1405a4cf0(rdi_5)

*(*rdi_5 + (rsi_2 << 2)) = rbx_1.d
