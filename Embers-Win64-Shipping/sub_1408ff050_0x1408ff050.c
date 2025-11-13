// 函数: sub_1408ff050
// 地址: 0x1408ff050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r10_1 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r10_1) = 0xffffffff

void* rax_6 = arg1[4]
void* r8 = &arg1[2]

if (rax_6 != 0)
    r8 = rax_6

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* rax_11 = *arg3
int64_t* rcx_6 = arg3[1]
int64_t* r15_2 = (sx.q(rdi.d) << 5) + *arg1
*r15_2 = *rax_11
r15_2[1].d = rax_11[1].d
r15_2[2] = *rcx_6
r15_2[3].d = 0xffffffff
int64_t rbx_1 = *r15_2
int32_t rax_14 = sub_140b5ead0(rbx_1.d)
int32_t r9 = r15_2[1].d
int32_t rdx_7 = ((rbx_1 u>> 0x20).d + rax_14 - r9) ^ r9 u>> 0xd
int32_t rcx_12 = (0x9e3779b9 - rdx_7 - r9) ^ rdx_7 << 8
int32_t rbp_3 = (r9 - rdx_7 - rcx_12) ^ rcx_12 u>> 0xd
int32_t rdx_10 = (rdx_7 - rbp_3 - rcx_12) ^ rbp_3 u>> 0xc
int32_t rcx_15 = (rcx_12 - rdx_10 - rbp_3) ^ rdx_10 << 0x10
int32_t rbp_6 = (rbp_3 - rdx_10 - rcx_15) ^ rcx_15 u>> 5
int32_t rdx_13 = (rdx_10 - rbp_6 - rcx_15) ^ rbp_6 u>> 3
int32_t rcx_18 = (rcx_15 - rdx_13 - rbp_6) ^ rdx_13 << 0xa
int32_t rbp_9 = (rbp_6 - rdx_13 - rcx_18) ^ rcx_18 u>> 0xf
int64_t r13
r13.b = 0
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)

if (r10_3 == 1)
label_1408ff26a:
    
    if (sub_140901150(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_35 = (arg1[9].d - 1) & rbp_9
        *(r15_2 + 0x1c) = rax_35
        void* rdx_21 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_35)
        void* rax_36 = r9_1
        
        if (rdx_21 != 0)
            rax_36 = rdx_21
        
        r15_2[3].d = *(rax_36 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_38 = *(r9_1 + 8)
        
        if (rax_38 != 0)
            r9_1 = rax_38
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi.d
else
    void* rcx_20
    int32_t rbx_3
    
    if (r10_3 != 0)
        rcx_20 = arg1[8]
        void* r8_2 = &arg1[7]
        
        if (rcx_20 != 0)
            r8_2 = rcx_20
        
        rbx_3 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_9)) << 2))
    
    if (r10_3 == 0 || rbx_3 == 0xffffffff)
    label_1408ff227:
        rbx_3 = -1
    else
        int64_t rdx_17 = *arg1
        
        while (true)
            int64_t rax_31 = sx.q(rbx_3) << 5
            
            if (*(rax_31 + rdx_17) != *r15_2 || *(rax_31 + rdx_17 + 8) != r9)
                rcx_20.b = 0
            else
                rcx_20.b = 1
            
            if (rcx_20.b != 0)
                break
            
            rbx_3 = *(rax_31 + rdx_17 + 0x18)
            
            if (rbx_3 == 0xffffffff)
                goto label_1408ff227
    
    r13.b = rbx_3 != 0xffffffff
    
    if (rbx_3 == 0xffffffff)
        goto label_1408ff26a
    
    memmove((sx.q(rbx_3) << 5) + *arg1, r15_2, 0x18)
    sub_1405c36f0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_3)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
