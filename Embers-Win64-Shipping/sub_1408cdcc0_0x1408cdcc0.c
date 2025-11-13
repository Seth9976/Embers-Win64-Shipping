// 函数: sub_1408cdcc0
// 地址: 0x1408cdcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    int32_t rbp_1 = arg1[5].d
    void* rdi_1 = &arg1[2]
    int32_t rax_2 = *(rdi_1 + 0x1c)
    int32_t rcx_3 = rbp_1
    
    if (rbp_1 + 1 s> rax_2)
        uint64_t rcx_4 = 4
        uint64_t r14_3 = zx.q((rbp_1 + 0x20) u>> 5)
        int32_t rdx_2
        
        if (r14_3.d u> 4)
            if (rax_2 + 0x1f u>= 0x20 || zx.q(r14_3.d) u> 4)
                rcx_4 = r14_3 + 0x10 + ((r14_3 * 3) u>> 3)
            
            int64_t rax_6 = sub_140a846a0(rcx_4 << 2, 0)
            rdx_2 = *(rdi_1 + 0x18)
            uint32_t rax_7 = (rax_6 u>> 2).d
            
            if (r14_3.d s> rax_7)
                rax_7 = 0x7fffffff
            
            rcx_4 = zx.q(rax_7)
        else
            rdx_2 = rbp_1
        
        *(rdi_1 + 0x1c) = rcx_4.d << 5
        sub_1405a4410(rdi_1, rdx_2)
        rcx_3 = *(rdi_1 + 0x18)
    
    *(rdi_1 + 0x18) = rcx_3 + 1
    void* rax_9 = *(rdi_1 + 0x10)
    
    if (rax_9 != 0)
        rdi_1 = rax_9
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbp_1)
    int64_t rdx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
    *(rdi_1 + (rdx_6 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t rdx = sx.q(*(r9_1 + rsi * 0x18 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + rdx * 0x18) = 0xffffffff

void* rax_16 = arg1[4]
void* r8_2 = &arg1[2]
*arg2 = rsi.d

if (rax_16 != 0)
    r8_2 = rax_16

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* rdx_9 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*rdx_9 |= 1 << (rsi.b & 0x1f)
*(arg2 + 8) = *arg1 + sx.q(rsi.d) * 0x18
return arg2
