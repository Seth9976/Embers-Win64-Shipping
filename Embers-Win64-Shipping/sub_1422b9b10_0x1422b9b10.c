// 函数: sub_1422b9b10
// 地址: 0x1422b9b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0x70) = 0

if (*(arg3 + 0x74) != 0)
    sub_1422cfab0(arg3 + 0x30, 0)

*(arg3 + 0xbc) = *(arg1 + 0x78)
char rdx = 4
char r14 = 8
*(arg3 + 0xa8) = *(arg1 + 0x58)
int32_t i = 0
int32_t rcx_1 = *(arg1 + 0x78)
char r12 = *(arg1 + 0x80)

if (r12 == 0)
    r14 = 4

uint64_t result = zx.q(rcx_1 - 1)
char r15_1 = r14 * rcx_1.b

if (result.d s> 0)
    int32_t var_30_1 = 0
    
    if (r12 == 0)
        rdx = 0xd
    
    char var_2b_1 = r15_1
    char var_2a_1 = rdx
    char var_29_1 = 4
    
    do
        int64_t rsi_1 = sx.q(*(arg3 + 0x70))
        int32_t rax_3 = (rsi_1 + 1).d
        *(arg3 + 0x70) = rax_3
        char var_2c_1 = r14 * i.b
        
        if (rax_3 s> *(arg3 + 0x74))
            sub_1410348f0(arg3 + 0x30)
        
        i += 2
        *(arg3 + 0x30 + rsi_1 * 0x10) = (arg1 + 0x28).o
        rcx_1 = *(arg1 + 0x78)
        result = zx.q(rcx_1 - 1)
    while (i s< result.d)

if (i s< rcx_1)
    int64_t rdi_1 = sx.q(*(arg3 + 0x70))
    char rax_7 = 2
    int32_t var_30_2 = 0
    char var_2b_2 = r15_1
    char var_29_2 = 4
    char var_2c_2 = r14 * i.b
    
    if (r12 == 0)
        rax_7 = 0xc
    
    char var_2a_2 = rax_7
    int32_t rax_8 = (rdi_1 + 1).d
    *(arg3 + 0x70) = rax_8
    
    if (rax_8 s> *(arg3 + 0x74))
        sub_1410348f0(arg3 + 0x30)
    
    result = rdi_1 * 2
    *(arg3 + 0x30 + (result << 3)) = (arg1 + 0x28).o

return result
