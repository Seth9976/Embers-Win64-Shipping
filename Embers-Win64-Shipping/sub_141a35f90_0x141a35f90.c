// 函数: sub_141a35f90
// 地址: 0x141a35f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(*(arg2 + 0x1c))

if (rsi.d == 0xffffffff)
    void* rdi_1 = *(arg1 + 8)
    int32_t var_34_1 = 0
    int32_t rax_1 = *(rdi_1 + 0x58)
    rsi = sx.q(*(rdi_1 + 0x48))
    int32_t rax_2 = (rsi + 1).d
    *(rdi_1 + 0x48) = rax_2
    
    if (rax_2 s> *(rdi_1 + 0x4c))
        sub_14083a7e0(rdi_1 + 0x40)
    
    int64_t rax_3 = *(rdi_1 + 0x40)
    uint64_t rcx_1 = rsi * 3
    *(rax_3 + (rcx_1 << 2)) = rax_1.q
    *(rax_3 + (rcx_1 << 2) + 8) = 1
    int64_t rdi_2 = sx.q(*(rdi_1 + 0x58))
    int32_t rax_5 = *(rdi_1 + 0x58) + 1
    
    if (rax_5 s> rdi_2.d)
        *(rdi_1 + 0x58) = rax_5
        int32_t rbp_2 = rax_5 - rdi_2.d
        
        if (rax_5 s> *(rdi_1 + 0x5c))
            sub_1405a4cf0(rdi_1 + 0x50)
        
        if (rbp_2 != 0)
            __builtin_memset(*(rdi_1 + 0x50) + (rdi_2 << 2), 0xffffffff, zx.q(rbp_2) << 2)
    else if (rax_5 s< rdi_2.d && rax_5 != rdi_2.d)
        *(rdi_1 + 0x58) = rax_5
        sub_1405dac90(rdi_1 + 0x50)
    
    *(arg2 + 0x1c) = rsi.d

int32_t rbx_2 = *(arg1 + 0x10)
void* r12_1 = *(arg1 + 8)
int64_t rcx_5 = sx.q(rsi.d) * 3
int64_t rax_8 = *(r12_1 + 0x40)
int32_t rdx_2 = *(rax_8 + (rcx_5 << 2) + 8)
int32_t* rsi_1 = rax_8 + (rcx_5 << 2)
int32_t rcx_6 = *(rax_8 + (rcx_5 << 2) + 4)
int64_t r15

if (rcx_6 + 1 s<= rdx_2)
    r15 = zx.q(*rsi_1)
else
    int32_t rax_10 = rdx_2 * 2
    int32_t rcx_7 = 2
    
    if (rax_10 s>= 2)
        rcx_7 = rax_10
    
    rsi_1[2] = rcx_7
    r15 = sx.q(*(r12_1 + 0x58))
    int64_t rdi_4 = sx.q(*(r12_1 + 0x58))
    int32_t rax_11 = r15.d + rcx_7
    
    if (rax_11 s> rdi_4.d)
        *(r12_1 + 0x58) = rax_11
        int32_t rbp_4 = rax_11 - rdi_4.d
        
        if (rax_11 s> *(r12_1 + 0x5c))
            sub_1405a4cf0(r12_1 + 0x50)
        
        if (rbp_4 != 0)
            __builtin_memset(*(r12_1 + 0x50) + (rdi_4 << 2), 0xffffffff, zx.q(rbp_4) << 2)
    else if (rax_11 s< rdi_4.d && rax_11 != rdi_4.d)
        *(r12_1 + 0x58) = rax_11
        sub_1405dac90(r12_1 + 0x50)
    
    int64_t rcx_12 = *(r12_1 + 0x50)
    memmove(rcx_12 + (r15 << 2), rcx_12 + (sx.q(*rsi_1) << 2), rsi_1[1] << 2)
    *rsi_1 = r15.d
    rcx_6 = rsi_1[1]

int64_t result = *(r12_1 + 0x50)
*(result + (sx.q(r15.d + rcx_6) << 2)) = rbx_2
rsi_1[1] += 1
return result
