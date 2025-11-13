// 函数: sub_141a35cb0
// 地址: 0x141a35cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(*(arg2 + 0x1c))

if (rdi.d == 0xffffffff)
    void* rbx_1 = *(arg1 + 8)
    int32_t var_34_1 = 0
    int32_t rax_1 = *(rbx_1 + 0x58)
    rdi = sx.q(*(rbx_1 + 0x48))
    int32_t rax_2 = (rdi + 1).d
    *(rbx_1 + 0x48) = rax_2
    
    if (rax_2 s> *(rbx_1 + 0x4c))
        sub_14083a7e0(rbx_1 + 0x40)
    
    int64_t rax_3 = *(rbx_1 + 0x40)
    uint64_t rcx_1 = rdi * 3
    *(rax_3 + (rcx_1 << 2)) = rax_1.q
    *(rax_3 + (rcx_1 << 2) + 8) = 1
    int64_t rbx_2 = sx.q(*(rbx_1 + 0x58))
    int32_t rax_5 = *(rbx_1 + 0x58) + 1
    
    if (rax_5 s> rbx_2.d)
        *(rbx_1 + 0x58) = rax_5
        
        if (rax_5 s> *(rbx_1 + 0x5c))
            sub_1405a4cf0(rbx_1 + 0x50)
        
        memset(*(rbx_1 + 0x50) + (rbx_2 << 2), 0, sx.q(rax_5 - rbx_2.d) << 2)
    else if (rax_5 s< rbx_2.d && rax_5 != rbx_2.d)
        *(rbx_1 + 0x58) = rax_5
        sub_1405dac90(rbx_1 + 0x50)
    
    *(arg2 + 0x1c) = rdi.d

int32_t r12 = *(arg1 + 0x10)
void* r15_1 = *(arg1 + 8)
int64_t rcx_5 = sx.q(rdi.d) * 3
int64_t rax_8 = *(r15_1 + 0x40)
int32_t rdx_2 = *(rax_8 + (rcx_5 << 2) + 8)
int32_t* rbx_3 = rax_8 + (rcx_5 << 2)
int32_t rcx_6 = *(rax_8 + (rcx_5 << 2) + 4)
int64_t r14_1

if (rcx_6 + 1 s<= rdx_2)
    r14_1 = zx.q(*rbx_3)
else
    int32_t rax_10 = rdx_2 * 2
    int32_t rcx_7 = 2
    
    if (rax_10 s>= 2)
        rcx_7 = rax_10
    
    rbx_3[2] = rcx_7
    r14_1 = sx.q(*(r15_1 + 0x58))
    int64_t rdi_1 = sx.q(*(r15_1 + 0x58))
    int32_t rax_11 = r14_1.d + rcx_7
    
    if (rax_11 s> rdi_1.d)
        *(r15_1 + 0x58) = rax_11
        
        if (rax_11 s> *(r15_1 + 0x5c))
            sub_1405a4cf0(r15_1 + 0x50)
        
        memset(*(r15_1 + 0x50) + (rdi_1 << 2), 0, sx.q(rax_11 - rdi_1.d) << 2)
    else if (rax_11 s< rdi_1.d && rax_11 != rdi_1.d)
        *(r15_1 + 0x58) = rax_11
        sub_1405dac90(r15_1 + 0x50)
    
    int64_t rcx_11 = *(r15_1 + 0x50)
    memmove(rcx_11 + (r14_1 << 2), rcx_11 + (sx.q(*rbx_3) << 2), rbx_3[1] << 2)
    *rbx_3 = r14_1.d
    rcx_6 = rbx_3[1]

int64_t result = *(r15_1 + 0x50)
*(result + (sx.q(r14_1.d + rcx_6) << 2)) = r12
rbx_3[1] += 1
return result
