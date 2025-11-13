// 函数: sub_14263f2a0
// 地址: 0x14263f2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1407756d0(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x34 + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x34 + r10_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r15
r15.b = 0
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int128_t* r13_1 = sx.q(rdi.d) * 0x34 + *arg1
*r13_1 = *arg3
r13_1[1] = arg3[1]
r13_1[2].q = arg3[2].q
*(r13_1 + 0x28) = *(arg3 + 0x28)
*(r13_1 + 0x2c) = 0xffffffff
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbp = sx.q(*r13_1)

if (r9_1 == 1)
label_14263f418:
    
    if (sub_14264c8f0(arg1, r9_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & rbp.d
        r13_1[3].d = rax_14
        void* rdx_12 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_14)
        void* rax_15 = r9_2
        
        if (rdx_12 != 0)
            rax_15 = rdx_12
        
        *(r13_1 + 0x2c) = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_17 = *(r9_2 + 8)
        
        if (rax_17 != 0)
            r9_2 = rax_17
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r9_1 != 0)
        void* rcx_6 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_6 != 0)
            r8_3 = rcx_6
        
        rbx_1 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (r9_1 == 0 || rbx_1 == 0xffffffff)
    label_14263f3d5:
        rbx_1 = -1
    else
        int64_t rdx_8 = *arg1
        
        while (true)
            int32_t* rcx_7 = sx.q(rbx_1) * 0x34
            
            if (*(rcx_7 + rdx_8) == rbp.d)
                break
            
            rbx_1 = *(rcx_7 + rdx_8 + 0x2c)
            
            if (rbx_1 == 0xffffffff)
                goto label_14263f3d5
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_14263f418
    
    memmove(sx.q(rbx_1) * 0x34 + *arg1, r13_1, 0x2c)
    sub_1426656e0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r15.b

return arg2
