// 函数: sub_1420f2b90
// 地址: 0x1420f2b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4f50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x30 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r10_1 + r8 * 0x30) = 0xffffffff

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
int128_t* rdx_5 = arg3[1]
int64_t* r15_2 = sx.q(rdi.d) * 0x30 + *arg1
int64_t rcx_8 = **arg3
*r15_2 = rcx_8
uint32_t rcx_9 = (rcx_8 u>> 4).d
*(r15_2 + 8) = *rdx_5
int32_t rdx_7 = (0x9e3779b9 - rcx_9) ^ rcx_9 << 8
*(r15_2 + 0x18) = rdx_5[1]
r15_2[5].d = 0xffffffff
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp_2 = neg.d(rcx_9 + rdx_7) ^ rdx_7 u>> 0xd
int32_t rcx_12 = (rcx_9 - rbp_2 - rdx_7) ^ rbp_2 u>> 0xc
int32_t rdx_10 = (rdx_7 - rcx_12 - rbp_2) ^ rcx_12 << 0x10
int32_t rbp_5 = (rbp_2 - rcx_12 - rdx_10) ^ rdx_10 u>> 5
int32_t rcx_15 = (rcx_12 - rbp_5 - rdx_10) ^ rbp_5 u>> 3
int32_t rdx_13 = (rdx_10 - rcx_15 - rbp_5) ^ rcx_15 << 0xa
int32_t rbp_8 = (rbp_5 - rcx_15 - rdx_13) ^ rdx_13 u>> 0xf

if (r10_3 == 1)
label_1420f2d80:
    
    if (sub_1411dd6b0(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_29 = (arg1[9].d - 1) & rbp_8
        *(r15_2 + 0x2c) = rax_29
        void* rdx_22 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_29)
        void* rax_30 = r9_1
        
        if (rdx_22 != 0)
            rax_30 = rdx_22
        
        r15_2[5].d = *(rax_30 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_32 = *(r9_1 + 8)
        
        if (rax_32 != 0)
            r9_1 = rax_32
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rcx_16 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_16 != 0)
            r8_3 = rcx_16
        
        rbx_1 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_8)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1420f2d39:
        rbx_1 = -1
    else
        int64_t rdx_18 = *arg1
        
        while (true)
            int64_t rcx_18 = sx.q(rbx_1) * 6
            
            if (*(rdx_18 + (rcx_18 << 3)) == rcx_8)
                break
            
            rbx_1 = *(rdx_18 + (rcx_18 << 3) + 0x28)
            
            if (rbx_1 == 0xffffffff)
                goto label_1420f2d39
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1420f2d80
    
    memmove(sx.q(rbx_1) * 0x30 + *arg1, r15_2, 0x28)
    sub_1407c2ba0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
