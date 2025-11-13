// 函数: sub_1407d15a0
// 地址: 0x1407d15a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
uint64_t var_8 = rbp
int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    int32_t rbp_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rbp_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rbp_1 & 0x1f).b)
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rdi * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r9 + r8 * 0x18) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdi.d)
rbp.b = 0
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r12 = *arg1 + sx.q(rdi.d) * 0x18
int64_t rcx_8 = **arg3
int32_t* rdx_10 = arg3[1]
*r12 = rcx_8
r12[1].d = *rdx_10
r12[2].d = 0xffffffff
int32_t r10_1 = arg1[1].d - *(arg1 + 0x34)
int32_t r13_2 = (rcx_8 u>> 0x20).d * 0x17 + rcx_8.d

if (r10_1 == 1)
label_1407d176d:
    
    if (sub_1407e9370(arg1, r10_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & r13_2
        *(r12 + 0x14) = r8_6
        void* rcx_15 = *(r9_2 + 8)
        void* rax_25 = r9_2
        
        if (rcx_15 != 0)
            rax_25 = rcx_15
        
        r12[2].d = *(rax_25 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_16 = *(r9_2 + 8)
        
        if (rcx_16 != 0)
            r9_2 = rcx_16
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_2
    
    if (r10_1 != 0)
        void* rcx_9 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_9 != 0)
            r8_3 = rcx_9
        
        rbx_2 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(r13_2)) << 2))
    
    if (r10_1 == 0 || rbx_2 == 0xffffffff)
    label_1407d1726:
        rbx_2 = -1
    else
        int64_t rdx_14 = *arg1
        
        while (true)
            int64_t rcx_10 = sx.q(rbx_2) * 3
            
            if (*(rdx_14 + (rcx_10 << 3)) == rcx_8)
                break
            
            rbx_2 = *(rdx_14 + (rcx_10 << 3) + 0x10)
            
            if (rbx_2 == 0xffffffff)
                goto label_1407d1726
    
    rbp.b = rbx_2 != 0xffffffff
    
    if (rbx_2 == 0xffffffff)
        goto label_1407d176d
    
    memmove(*arg1 + sx.q(rbx_2) * 0x18, r12, 0x10)
    sub_1405c3640(arg1, rdi.d, 1)
    rdi = zx.q(rbx_2)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
