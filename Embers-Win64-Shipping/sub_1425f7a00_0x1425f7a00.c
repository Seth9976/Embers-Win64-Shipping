// 函数: sub_1425f7a00
// 地址: 0x1425f7a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int32_t rbp_1 = arg1[5].d
    void* rsi_1 = &arg1[2]
    int32_t rax_6 = *(rsi_1 + 0x1c)
    int32_t rcx_2 = rbp_1
    
    if (rbp_1 + 1 s> rax_6)
        uint64_t rcx_3 = 4
        uint64_t r14_3 = zx.q((rbp_1 + 0x20) u>> 5)
        int32_t rdx_2
        
        if (r14_3.d u> 4)
            if (rax_6 + 0x1f u>= 0x20 || zx.q(r14_3.d) u> 4)
                rcx_3 = r14_3 + 0x10 + ((r14_3 * 3) u>> 3)
            
            int64_t rax_10 = sub_140a846a0(rcx_3 << 2, 0)
            rdx_2 = *(rsi_1 + 0x18)
            uint32_t rax_11 = (rax_10 u>> 2).d
            
            if (r14_3.d s> rax_11)
                rax_11 = 0x7fffffff
            
            rcx_3 = zx.q(rax_11)
        else
            rdx_2 = rbp_1
        
        *(rsi_1 + 0x1c) = rcx_3.d << 5
        sub_1405a4410(rsi_1, rdx_2)
        rcx_2 = *(rsi_1 + 0x18)
    
    *(rsi_1 + 0x18) = rcx_2 + 1
    void* rax_13 = *(rsi_1 + 0x10)
    
    if (rax_13 != 0)
        rsi_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbp_1)
    int64_t rdx_6 = sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5)
    *(rsi_1 + (rdx_6 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    rdi = sx.q(arg1[6].d)
    int64_t r8_1 = *arg1
    int64_t rdx = sx.q(*(r8_1 + rdi * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8_1 + rdx * 0x10) = 0xffffffff

void* rax_20 = arg1[4]
void* r8_2 = &arg1[2]
*arg2 = rdi.d

if (rax_20 != 0)
    r8_2 = rax_20

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* rdx_9 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*rdx_9 |= 1 << (rdi.b & 0x1f)
*(arg2 + 8) = (sx.q(rdi.d) << 4) + *arg1
return arg2
