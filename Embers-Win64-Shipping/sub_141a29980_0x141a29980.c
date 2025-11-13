// 函数: sub_141a29980
// 地址: 0x141a29980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
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
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r12 = *arg1 + sx.q(rdi.d) * 0x18
int64_t rcx_8 = **arg3
char* rdx_10 = arg3[1]
*r12 = rcx_8
int64_t* r13
r13.b = 0
uint32_t rcx_9 = (rcx_8 u>> 4).d
r12[1].b = *rdx_10
r12[2].d = 0xffffffff
int32_t r10_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rdx_12 = (0x9e3779b9 - rcx_9) ^ rcx_9 << 8
int32_t rbp_5 = neg.d(rcx_9 + rdx_12) ^ rdx_12 u>> 0xd
int32_t rcx_12 = (rcx_9 - rbp_5 - rdx_12) ^ rbp_5 u>> 0xc
int32_t rdx_15 = (rdx_12 - rcx_12 - rbp_5) ^ rcx_12 << 0x10
int32_t rbp_8 = (rbp_5 - rcx_12 - rdx_15) ^ rdx_15 u>> 5
int32_t rcx_15 = (rcx_12 - rbp_8 - rdx_15) ^ rbp_8 u>> 3
int32_t rdx_18 = (rdx_15 - rcx_15 - rbp_8) ^ rcx_15 << 0xa
int32_t rbp_11 = (rbp_8 - rcx_15 - rdx_18) ^ rdx_18 u>> 0xf

if (r10_1 == 1)
label_141a29b9d:
    
    if (sub_1405b6470(arg1, r10_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & rbp_11
        *(r12 + 0x14) = r8_6
        void* rcx_22 = *(r9_2 + 8)
        void* rax_37 = r9_2
        
        if (rcx_22 != 0)
            rax_37 = rcx_22
        
        r12[2].d = *(rax_37 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_23 = *(r9_2 + 8)
        
        if (rcx_23 != 0)
            r9_2 = rcx_23
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_2
    
    if (r10_1 != 0)
        void* rcx_16 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_16 != 0)
            r8_3 = rcx_16
        
        rbx_2 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_11)) << 2))
    
    if (r10_1 == 0 || rbx_2 == 0xffffffff)
    label_141a29b56:
        rbx_2 = -1
    else
        int64_t rdx_23 = *arg1
        
        while (true)
            int64_t rcx_17 = sx.q(rbx_2) * 3
            
            if (*(rdx_23 + (rcx_17 << 3)) == rcx_8)
                break
            
            rbx_2 = *(rdx_23 + (rcx_17 << 3) + 0x10)
            
            if (rbx_2 == 0xffffffff)
                goto label_141a29b56
    
    r13.b = rbx_2 != 0xffffffff
    
    if (rbx_2 == 0xffffffff)
        goto label_141a29b9d
    
    memmove(*arg1 + sx.q(rbx_2) * 0x18, r12, 0x10)
    sub_1405c3640(arg1, rdi.d, 1)
    rdi = zx.q(rbx_2)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
