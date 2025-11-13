// 函数: sub_140e90740
// 地址: 0x140e90740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
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
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(r9 + rdi * 0x28 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r9 + r8 * 0x28) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r14 = *arg1 + sx.q(rdi.d) * 0x28
int64_t* rcx_8 = *arg3
int64_t* rdx_10 = arg3[1]
*r14 = *rcx_8
void* rax_16 = rcx_8[1]
r14[1] = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

r14[2] = *rdx_10
void* rax_18 = rdx_10[1]
r14[3] = rax_18

if (rax_18 != 0)
    *(rax_18 + 8) += 1

r14[4].d = 0xffffffff
int64_t r9_1 = *r14
int64_t* r12
r12.b = 0
int32_t r10_1 = arg1[1].d - *(arg1 + 0x34)
uint32_t rcx_10 = (r9_1 u>> 4).d
int32_t rdx_12 = (0x9e3779b9 - rcx_10) ^ rcx_10 << 8
int32_t rbp_5 = neg.d(rcx_10 + rdx_12) ^ rdx_12 u>> 0xd
int32_t rcx_13 = (rcx_10 - rbp_5 - rdx_12) ^ rbp_5 u>> 0xc
int32_t rdx_15 = (rdx_12 - rcx_13 - rbp_5) ^ rcx_13 << 0x10
int32_t rbp_8 = (rbp_5 - rcx_13 - rdx_15) ^ rdx_15 u>> 5
int32_t rcx_16 = (rcx_13 - rbp_8 - rdx_15) ^ rbp_8 u>> 3
int32_t rdx_18 = (rdx_15 - rcx_16 - rbp_8) ^ rcx_16 << 0xa
int32_t rbp_11 = (rbp_8 - rcx_16 - rdx_18) ^ rdx_18 u>> 0xf

if (r10_1 == 1)
label_140e90988:
    
    if (sub_140d1a980(arg1, r10_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & rbp_11
        *(r14 + 0x24) = r8_6
        void* rcx_24 = *(r9_2 + 8)
        void* rax_39 = r9_2
        
        if (rcx_24 != 0)
            rax_39 = rcx_24
        
        r14[4].d = *(rax_39 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_25 = *(r9_2 + 8)
        
        if (rcx_25 != 0)
            r9_2 = rcx_25
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_2
    
    if (r10_1 != 0)
        void* rcx_17 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_17 != 0)
            r8_3 = rcx_17
        
        rbx_2 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_11)) << 2))
    
    if (r10_1 == 0 || rbx_2 == 0xffffffff)
    label_140e90936:
        rbx_2 = -1
    else
        int64_t rdx_23 = *arg1
        
        while (true)
            int64_t rcx_18 = sx.q(rbx_2) * 5
            
            if (*(rdx_23 + (rcx_18 << 3)) == r9_1)
                break
            
            rbx_2 = *(rdx_23 + (rcx_18 << 3) + 0x20)
            
            if (rbx_2 == 0xffffffff)
                goto label_140e90936
    
    r12.b = rbx_2 != 0xffffffff
    
    if (rbx_2 == 0xffffffff)
        goto label_140e90988
    
    void* rbp_12 = *arg1 + sx.q(rbx_2) * 0x28
    sub_140e53610(rbp_12)
    memmove(rbp_12, r14, 0x20)
    sub_1405c3590(arg1, rdi.d, 1)
    rdi = zx.q(rbx_2)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r12.b

return arg2
