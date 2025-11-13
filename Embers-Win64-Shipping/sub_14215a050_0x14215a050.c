// 函数: sub_14215a050
// 地址: 0x14215a050
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
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r15 = *arg1 + sx.q(rdi.d) * 0x18
int64_t* rdx_10 = arg3[1]
int64_t rcx_8 = **arg3
*r15 = rcx_8
r15[1] = *rdx_10
r15[2].d = 0xffffffff
int32_t r13_2 = sub_140b5ead0(rcx_8.d) + rcx_8:4.d
rbp.b = 0
int32_t r10_1 = arg1[1].d - *(arg1 + 0x34)

if (r10_1 == 1)
label_14215a21e:
    
    if (sub_1406c8a40(arg1, r10_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_25 = (arg1[9].d - 1) & r13_2
        *(r15 + 0x14) = rax_25
        void* rdx_16 = *(r9_2 + 8)
        int64_t r8_7 = sx.q(rax_25)
        void* rax_26 = r9_2
        
        if (rdx_16 != 0)
            rax_26 = rdx_16
        
        r15[2].d = *(rax_26 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2))
        void* rax_28 = *(r9_2 + 8)
        
        if (rax_28 != 0)
            r9_2 = rax_28
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_7) << 2)) = rdi.d
else
    int32_t rbx_2
    
    if (r10_1 != 0)
        void* rdx_11 = arg1[8]
        void* r9_1 = &arg1[7]
        
        if (rdx_11 != 0)
            r9_1 = rdx_11
        
        rbx_2 = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r13_2)) << 2))
    
    if (r10_1 == 0 || rbx_2 == 0xffffffff)
    label_14215a1d7:
        rbx_2 = -1
    else
        int64_t r8_6 = *arg1
        
        while (true)
            int64_t rdx_12 = sx.q(rbx_2) * 3
            
            if (*(r8_6 + (rdx_12 << 3)) == *r15)
                break
            
            rbx_2 = *(r8_6 + (rdx_12 << 3) + 0x10)
            
            if (rbx_2 == 0xffffffff)
                goto label_14215a1d7
    
    rbp.b = rbx_2 != 0xffffffff
    
    if (rbx_2 == 0xffffffff)
        goto label_14215a21e
    
    memmove(*arg1 + sx.q(rbx_2) * 0x18, r15, 0x10)
    sub_1406c8ce0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_2)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
