// 函数: sub_140b5c3a0
// 地址: 0x140b5c3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int32_t rcx = *(arg1 + 0x2064)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(*(rbx + 0x2008))
    int32_t rax_7 = (rsi + 1).d
    *(rbx + 0x2008) = rax_7
    
    if (rax_7 s> *(rbx + 0x200c))
        sub_140b63450(rbx, rsi.d)
    
    void* rdi_1 = rbx + 0x2010
    int32_t rbp_1 = *(rdi_1 + 0x48)
    int32_t rcx_3 = rbp_1
    int32_t rax_8 = *(rdi_1 + 0x4c)
    
    if (rbp_1 + 1 s> rax_8)
        uint64_t r14_3 = zx.q((rbp_1 + 0x20) u>> 5)
        uint32_t rax_9
        int32_t rdx_2
        
        if (r14_3.d u> 0x10)
            int64_t rdx_3 = 4
            
            if (rax_8 + 0x1f u>= 0x20 || zx.q(r14_3.d) u> 4)
                rdx_3 = r14_3 + 0x10 + ((r14_3 * 3) u>> 3)
            
            int64_t rax_13 = sub_140a846a0(rdx_3 << 2, 0)
            rdx_2 = *(rdi_1 + 0x48)
            rax_9 = (rax_13 u>> 2).d
            
            if (r14_3.d s> rax_9)
                rax_9 = 0x7fffffff
        else
            rax_9 = 0x10
            rdx_2 = rbp_1
        
        *(rdi_1 + 0x4c) = rax_9 << 5
        sub_140b61250(rdi_1, rdx_2)
        rcx_3 = *(rdi_1 + 0x48)
    
    *(rdi_1 + 0x48) = rcx_3 + 1
    void* rax_16 = *(rdi_1 + 0x40)
    
    if (rax_16 != 0)
        rdi_1 = rax_16
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1)
    int64_t rdx_7 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_7 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    void* rax = *(rbx + 0x2000)
    void* r8_1 = rbx
    rsi = sx.q(*(rbx + 0x2060))
    
    if (rax != 0)
        r8_1 = rax
    
    int64_t rdx = sx.q(*(r8_1 + rsi * 0x10 + 4))
    *(rbx + 0x2060) = rdx.d
    *(rbx + 0x2064) = rcx - 1
    
    if (rcx != 1)
        void* rax_4 = *(rbx + 0x2000)
        void* rcx_1 = rbx
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        *(rcx_1 + rdx * 0x10) = 0xffffffff

void* r8_2 = rbx + 0x2010
*arg2 = rsi.d
void* rax_23 = *(r8_2 + 0x40)

if (rax_23 != 0)
    r8_2 = rax_23

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rsi.d)
void* rdx_10 = r8_2 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*rdx_10 |= 1 << (rsi.b & 0x1f)
void* rax_28 = *(rbx + 0x2000)

if (rax_28 != 0)
    rbx = rax_28

*(arg2 + 8) = rbx + (sx.q(rsi.d) << 4)
return arg2
