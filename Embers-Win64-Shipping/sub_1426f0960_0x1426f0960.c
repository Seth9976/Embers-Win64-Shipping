// 函数: sub_1426f0960
// 地址: 0x1426f0960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x38 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x38 + r10_1) = 0xffffffff

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
int64_t* rdx_5 = arg3[1]
int64_t* r15_1 = sx.q(rdi.d) * 0x38 + *arg1
*r15_1 = **arg3
r15_1[1] = *rdx_5
r15_1[2] = 0
r15_1[2] = rdx_5[1]
rdx_5[1] = 0
r15_1[3].d = rdx_5[2].d
*(r15_1 + 0x1c) = *(rdx_5 + 0x14)
rdx_5[2] = 0
r15_1[4].b = rdx_5[3].b
*(r15_1 + 0x24) = *(rdx_5 + 0x1c)
*(r15_1 + 0x2c) ^= (*(rdx_5 + 0x24) ^ *(r15_1 + 0x2c)) & 1
r15_1[6].d = 0xffffffff
int64_t r9 = *r15_1
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp_1 = (r9 u>> 0x20).d * 0x17 + r9.d

if (r10_3 == 1)
label_1426f0b3a:
    
    if (sub_1426f6bf0(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & rbp_1
        *(r15_1 + 0x34) = r8_6
        void* rcx_13 = *(r9_1 + 8)
        void* rax_25 = r9_1
        
        if (rcx_13 != 0)
            rax_25 = rcx_13
        
        r15_1[6].d = *(rax_25 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_14 = *(r9_1 + 8)
        
        if (rcx_14 != 0)
            r9_1 = rcx_14
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rcx_7 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_7 != 0)
            r8_3 = rcx_7
        
        rbx_1 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_1)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1426f0ae6:
        rbx_1 = -1
    else
        int64_t rdx_9 = *arg1
        
        while (true)
            int64_t* rcx_8 = sx.q(rbx_1) * 0x38
            
            if (*(rcx_8 + rdx_9) == r9)
                break
            
            rbx_1 = *(rcx_8 + rdx_9 + 0x30)
            
            if (rbx_1 == 0xffffffff)
                goto label_1426f0ae6
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1426f0b3a
    
    void* rbp_3 = sx.q(rbx_1) * 0x38 + *arg1
    int64_t rcx_9 = *(rbp_3 + 0x10)
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    memmove(rbp_3, r15_1, 0x30)
    sub_140afe9e0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
