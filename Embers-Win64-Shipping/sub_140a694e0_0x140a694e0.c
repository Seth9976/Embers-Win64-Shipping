// 函数: sub_140a694e0
// 地址: 0x140a694e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x1844)
void* rbx = arg1
int64_t rsi

if (r9 == 0)
    rsi = zx.q(*(arg1 + 0x1808))
    int32_t rax_3 = (rsi + 1).d
    *(arg1 + 0x1808) = rax_3
    
    if (rax_3 s> *(arg1 + 0x180c))
        sub_140a88910(arg1, rsi.d)
    
    void* rdi_1 = rbx + 0x1810
    int32_t rbp_1 = *(rdi_1 + 0x28)
    int32_t rcx_2 = rbp_1
    int32_t rax_4 = *(rdi_1 + 0x2c)
    
    if (rbp_1 + 1 s> rax_4)
        uint64_t r14_3 = zx.q((rbp_1 + 0x20) u>> 5)
        uint32_t rcx_3
        int32_t rdx_2
        
        if (r14_3.d u> 8)
            int64_t rdx_3 = 4
            
            if (rax_4 + 0x1f u>= 0x20 || zx.q(r14_3.d) u> 4)
                rdx_3 = r14_3 + 0x10 + ((r14_3 * 3) u>> 3)
            
            int64_t* r9_1 = data_143ddb3f0
            int64_t rcx_5 = rdx_3 << 2
            
            if (r9_1 != 0)
                int64_t rax_9 = (*(*r9_1 + 0x38))(r9_1, rcx_5, 0)
                rdx_2 = *(rdi_1 + 0x28)
                rcx_5 = rax_9
            else
                rdx_2 = rbp_1
            
            rcx_3 = (rcx_5 u>> 2).d
            
            if (r14_3.d s> rcx_3)
                rcx_3 = 0x7fffffff
        else
            rcx_3 = 8
            rdx_2 = rbp_1
        
        *(rdi_1 + 0x2c) = rcx_3 << 5
        sub_140a84a70(rdi_1, rdx_2)
        rcx_2 = *(rdi_1 + 0x28)
    
    *(rdi_1 + 0x28) = rcx_2 + 1
    void* rax_11 = *(rdi_1 + 0x20)
    
    if (rax_11 != 0)
        rdi_1 = rax_11
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1)
    int64_t rdx_8 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_8 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    void* rax = *(arg1 + 0x1800)
    void* r8_1 = arg1
    rsi = sx.q(*(arg1 + 0x1840))
    
    if (rax != 0)
        r8_1 = rax
    
    int64_t r10_1 = sx.q(*(r8_1 + rsi * 0x18 + 4))
    *(rbx + 0x1840) = r10_1.d
    *(rbx + 0x1844) = r9 - 1
    
    if (r9 != 1)
        void* rax_2 = *(rbx + 0x1800)
        void* rdx = rbx
        
        if (rax_2 != 0)
            rdx = rax_2
        
        *(rdx + r10_1 * 0x18) = 0xffffffff

void* r8_2 = rbx + 0x1810
*arg2 = rsi.d
void* rax_18 = *(r8_2 + 0x20)

if (rax_18 != 0)
    r8_2 = rax_18

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rsi.d)
void* rdx_11 = r8_2 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_11 |= 1 << (rsi.b & 0x1f)
void* rax_23 = *(rbx + 0x1800)

if (rax_23 != 0)
    rbx = rax_23

*(arg2 + 8) = rbx + sx.q(rsi.d) * 0x18
return arg2
