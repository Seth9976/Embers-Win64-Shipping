// 函数: sub_14263f9c0
// 地址: 0x14263f9c0
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
int64_t r15
r15.b = 0
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int32_t* r13_2 = (sx.q(rdi.d) << 5) + *arg1
int128_t* rdx_5 = arg3[1]
*r13_2 = **arg3
*(r13_2 + 8) = *rdx_5
r13_2[6] = 0xffffffff
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbp = sx.q(*r13_2)

if (r9_1 == 1)
label_14263fb38:
    
    if (sub_140cb1a20(arg1, r9_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_17 = (arg1[9].d - 1) & rbp.d
        r13_2[7] = rax_17
        void* rdx_12 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_17)
        void* rax_18 = r9_2
        
        if (rdx_12 != 0)
            rax_18 = rdx_12
        
        r13_2[6] = *(rax_18 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_20 = *(r9_2 + 8)
        
        if (rax_20 != 0)
            r9_2 = rax_20
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r9_1 != 0)
        void* rcx_7 = arg1[8]
        void* r8_2 = &arg1[7]
        
        if (rcx_7 != 0)
            r8_2 = rcx_7
        
        rbx_1 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (r9_1 == 0 || rbx_1 == 0xffffffff)
    label_14263faf5:
        rbx_1 = -1
    else
        int64_t rcx_8 = *arg1
        
        while (true)
            int32_t* rax_13 = sx.q(rbx_1) << 5
            
            if (*(rax_13 + rcx_8) == rbp.d)
                break
            
            rbx_1 = *(rax_13 + rcx_8 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_14263faf5
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_14263fb38
    
    memmove((sx.q(rbx_1) << 5) + *arg1, r13_2, 0x18)
    sub_1405c36f0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r15.b

return arg2
