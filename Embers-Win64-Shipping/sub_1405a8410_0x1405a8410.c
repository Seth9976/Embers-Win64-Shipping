// 函数: sub_1405a8410
// 地址: 0x1405a8410
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
int128_t* rdx_5 = arg3[1]
int64_t* r15_2 = (sx.q(rdi.d) << 5) + *arg1
int64_t rcx_6 = **arg3
*r15_2 = rcx_6
*(r15_2 + 8) = *rdx_5
r15_2[3].d = 0xffffffff
int32_t r13_1 = sub_140b5ead0(rcx_6.d) + rcx_6:4.d
int64_t rbp
rbp.b = 0
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)

if (r10_3 == 1)
label_1405a859a:
    
    if (sub_1405b67e0(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_19 = (arg1[9].d - 1) & r13_1
        *(r15_2 + 0x1c) = rax_19
        void* rdx_11 = *(r9_1 + 8)
        int64_t r8_5 = sx.q(rax_19)
        void* rax_20 = r9_1
        
        if (rdx_11 != 0)
            rax_20 = rdx_11
        
        r15_2[3].d = *(rax_20 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2))
        void* rax_22 = *(r9_1 + 8)
        
        if (rax_22 != 0)
            r9_1 = rax_22
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_5) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rdx_6 = arg1[8]
        void* r9 = &arg1[7]
        
        if (rdx_6 != 0)
            r9 = rdx_6
        
        rbx_1 = *(r9 + (((sx.q(arg1[9].d) - 1) & sx.q(r13_1)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1405a8557:
        rbx_1 = -1
    else
        int64_t rdx_7 = *arg1
        
        while (true)
            int64_t rax_15 = sx.q(rbx_1) << 5
            
            if (*(rax_15 + rdx_7) == *r15_2)
                break
            
            rbx_1 = *(rax_15 + rdx_7 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1405a8557
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1405a859a
    
    memmove((sx.q(rbx_1) << 5) + *arg1, r15_2, 0x18)
    sub_1405c36f0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
