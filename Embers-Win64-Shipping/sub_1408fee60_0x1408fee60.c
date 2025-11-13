// 函数: sub_1408fee60
// 地址: 0x1408fee60
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
int64_t r15
r15.b = 0
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* r13_2 = (sx.q(rdi.d) << 4) + *arg1
int32_t* rax_11 = *arg3
*r13_2 = rax_11
r13_2[1].d = 0xffffffff
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbp = sx.q(*rax_11)

if (r9_1 == 1)
label_1408fefca:
    
    if (sub_1409010a0(arg1, r9_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t r8_5 = (arg1[9].d - 1) & rbp.d
        *(r13_2 + 0xc) = r8_5
        void* rcx_14 = *(r9_2 + 8)
        void* rax_15 = r9_2
        
        if (rcx_14 != 0)
            rax_15 = rcx_14
        
        r13_2[1].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2))
        void* rcx_15 = *(r9_2 + 8)
        
        if (rcx_15 != 0)
            r9_2 = rcx_15
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r9_1 != 0)
        void* rcx_6 = arg1[8]
        void* r8_2 = &arg1[7]
        
        if (rcx_6 != 0)
            r8_2 = rcx_6
        
        rbx_1 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (r9_1 == 0 || rbx_1 == 0xffffffff)
    label_1408fef87:
        rbx_1 = -1
    else
        int64_t rdx_8 = *arg1
        
        while (true)
            int64_t rcx_8 = sx.q(rbx_1) * 2
            
            if (**(rdx_8 + (rcx_8 << 3)) == rbp.d)
                break
            
            rbx_1 = *(rdx_8 + (rcx_8 << 3) + 8)
            
            if (rbx_1 == 0xffffffff)
                goto label_1408fef87
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1408fefca
    
    memmove((sx.q(rbx_1) << 4) + *arg1, r13_2, 8)
    sub_140906230(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r15.b

return arg2
