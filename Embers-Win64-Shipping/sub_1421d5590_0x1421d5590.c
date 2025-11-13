// 函数: sub_1421d5590
// 地址: 0x1421d5590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x18 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r10_1 + r8 * 0x18) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r13
r13.b = 0
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r12 = *arg1 + sx.q(rdi.d) * 0x18
int64_t rcx_7 = **arg3
*r12 = rcx_7
uint32_t rcx_8 = (rcx_7 u>> 4).d
r12[1] = 0
r12[2].d = 0xffffffff
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)
int32_t rdx_7 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
int32_t rbp_2 = neg.d(rcx_8 + rdx_7) ^ rdx_7 u>> 0xd
int32_t rcx_11 = (rcx_8 - rbp_2 - rdx_7) ^ rbp_2 u>> 0xc
int32_t rdx_10 = (rdx_7 - rcx_11 - rbp_2) ^ rcx_11 << 0x10
int32_t rbp_5 = (rbp_2 - rcx_11 - rdx_10) ^ rdx_10 u>> 5
int32_t rcx_14 = (rcx_11 - rbp_5 - rdx_10) ^ rbp_5 u>> 3
int32_t rdx_13 = (rdx_10 - rcx_14 - rbp_5) ^ rcx_14 << 0xa
int32_t rbp_8 = (rbp_5 - rcx_14 - rdx_13) ^ rdx_13 u>> 0xf

if (r10_3 == 1)
label_1421d576d:
    
    if (sub_1405b6470(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & rbp_8
        *(r12 + 0x14) = r8_6
        void* rcx_21 = *(r9_1 + 8)
        void* rax_29 = r9_1
        
        if (rcx_21 != 0)
            rax_29 = rcx_21
        
        r12[2].d = *(rax_29 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_22 = *(r9_1 + 8)
        
        if (rcx_22 != 0)
            r9_1 = rcx_22
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rcx_15 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_15 != 0)
            r8_3 = rcx_15
        
        rbx_1 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_8)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1421d5726:
        rbx_1 = -1
    else
        int64_t rdx_18 = *arg1
        
        while (true)
            int64_t rcx_16 = sx.q(rbx_1) * 3
            
            if (*(rdx_18 + (rcx_16 << 3)) == rcx_7)
                break
            
            rbx_1 = *(rdx_18 + (rcx_16 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1421d5726
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1421d576d
    
    memmove(*arg1 + sx.q(rbx_1) * 0x18, r12, 0x10)
    sub_1405c3640(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
