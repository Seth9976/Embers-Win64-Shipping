// 函数: sub_140b4d450
// 地址: 0x140b4d450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0xa2c)
void* rbx = arg1
int64_t rsi

if (r9 == 0)
    rsi = zx.q(*(arg1 + 0xa08))
    int32_t rax_3 = (rsi + 1).d
    *(arg1 + 0xa08) = rax_3
    
    if (rax_3 s> *(arg1 + 0xa0c))
        sub_140b52990(arg1, rsi.d)
    
    void* rdi_1 = rbx + 0xa10
    int32_t rbp_1 = *(rdi_1 + 0x10)
    int32_t rcx_2 = rbp_1
    int32_t rax_4 = *(rdi_1 + 0x14)
    
    if (rbp_1 + 1 s> rax_4)
        uint64_t r14_3 = zx.q((rbp_1 + 0x20) u>> 5)
        uint32_t rax_5
        int32_t rdx_2
        
        if (r14_3.d u> 2)
            int64_t rdx_3 = 4
            
            if (rax_4 + 0x1f u>= 0x20 || zx.q(r14_3.d) u> 4)
                rdx_3 = r14_3 + 0x10 + ((r14_3 * 3) u>> 3)
            
            int64_t rax_9 = sub_140a846a0(rdx_3 << 2, 0)
            rdx_2 = *(rdi_1 + 0x10)
            rax_5 = (rax_9 u>> 2).d
            
            if (r14_3.d s> rax_5)
                rax_5 = 0x7fffffff
        else
            rax_5 = 2
            rdx_2 = rbp_1
        
        *(rdi_1 + 0x14) = rax_5 << 5
        sub_140b51c80(rdi_1, rdx_2)
        rcx_2 = *(rdi_1 + 0x10)
    
    *(rdi_1 + 0x10) = rcx_2 + 1
    void* rax_12 = *(rdi_1 + 8)
    
    if (rax_12 != 0)
        rdi_1 = rax_12
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1)
    int64_t rdx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_7 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    void* rax = *(arg1 + 0xa00)
    void* r8_1 = arg1
    rsi = sx.q(*(arg1 + 0xa28))
    
    if (rax != 0)
        r8_1 = rax
    
    int64_t r10_1 = sx.q(*(r8_1 + rsi * 0x28 + 4))
    *(rbx + 0xa28) = r10_1.d
    *(rbx + 0xa2c) = r9 - 1
    
    if (r9 != 1)
        void* rax_2 = *(rbx + 0xa00)
        void* rdx = rbx
        
        if (rax_2 != 0)
            rdx = rax_2
        
        *(rdx + r10_1 * 0x28) = 0xffffffff

void* r8_2 = rbx + 0xa10
*arg2 = rsi.d
void* rax_19 = *(r8_2 + 8)

if (rax_19 != 0)
    r8_2 = rax_19

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rsi.d)
void* rdx_10 = r8_2 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_10 |= 1 << (rsi.b & 0x1f)
void* rax_24 = *(rbx + 0xa00)

if (rax_24 != 0)
    rbx = rax_24

*(arg2 + 8) = rbx + sx.q(rsi.d) * 0x28
return arg2
