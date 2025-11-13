// 函数: sub_1423b8450
// 地址: 0x1423b8450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*(r10_1 + rdi * 0x10 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + rdx * 0x10) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r13
r13.b = 0
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t rax_11 = *arg3
int64_t* r12_2 = (sx.q(rdi.d) << 4) + *arg1
uint32_t rcx_7 = (rax_11 u>> 4).d
*r12_2 = rax_11
int32_t rdx_6 = (0x9e3779b9 - rcx_7) ^ rcx_7 << 8
r12_2[1].d = 0xffffffff
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp_2 = neg.d(rdx_6 + rcx_7) ^ rdx_6 u>> 0xd
int32_t rcx_10 = (rcx_7 - rdx_6 - rbp_2) ^ rbp_2 u>> 0xc
int32_t rdx_9 = (rdx_6 - rcx_10 - rbp_2) ^ rcx_10 << 0x10
int32_t rbp_5 = (rbp_2 - rdx_9 - rcx_10) ^ rdx_9 u>> 5
int32_t rcx_13 = (rcx_10 - rdx_9 - rbp_5) ^ rbp_5 u>> 3
int32_t rdx_12 = (rdx_9 - rcx_13 - rbp_5) ^ rcx_13 << 0xa
int32_t rbp_8 = (rbp_5 - rdx_12 - rcx_13) ^ rdx_12 u>> 0xf

if (r10_3 == 1)
label_1423b8618:
    
    if (sub_140b9dd10(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t r8_5 = (arg1[9].d - 1) & rbp_8
        *(r12_2 + 0xc) = r8_5
        void* rcx_21 = *(r9_1 + 8)
        void* rax_31 = r9_1
        
        if (rcx_21 != 0)
            rax_31 = rcx_21
        
        r12_2[1].d = *(rax_31 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2))
        void* rcx_22 = *(r9_1 + 8)
        
        if (rcx_22 != 0)
            r9_1 = rcx_22
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rcx_14 = arg1[8]
        void* r8_2 = &arg1[7]
        
        if (rcx_14 != 0)
            r8_2 = rcx_14
        
        rbx_1 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_8)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1423b85d5:
        rbx_1 = -1
    else
        int64_t rcx_15 = *arg1
        
        while (true)
            int64_t rax_28 = sx.q(rbx_1) * 2
            
            if (*(rcx_15 + (rax_28 << 3)) == rax_11)
                break
            
            rbx_1 = *(rcx_15 + (rax_28 << 3) + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_1423b85d5
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1423b8618
    
    memmove((sx.q(rbx_1) << 4) + *arg1, r12_2, 8)
    sub_140906230(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
