// 函数: sub_1408d9550
// 地址: 0x1408d9550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg3)
int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
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
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x18) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t rbp
rbp.b = 0
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int64_t* r15 = *arg1 + sx.q(rdi.d) * 0x18
int64_t rcx_8 = **arg4
*r15 = rcx_8
r15[1] = 0
r15[2].d = 0xffffffff
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)

if (r10_3 == 1)
label_1408d96cd:
    
    if (sub_1405b6470(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & r12.d
        *(r15 + 0x14) = r8_6
        void* rcx_15 = *(r9_1 + 8)
        void* rax_14 = r9_1
        
        if (rcx_15 != 0)
            rax_14 = rcx_15
        
        r15[2].d = *(rax_14 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_16 = *(r9_1 + 8)
        
        if (rcx_16 != 0)
            r9_1 = rcx_16
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rcx_9 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_9 != 0)
            r8_3 = rcx_9
        
        rbx_1 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & r12) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1408d9686:
        rbx_1 = -1
    else
        int64_t rdx_9 = *arg1
        
        while (true)
            int64_t rcx_10 = sx.q(rbx_1) * 3
            
            if (*(rdx_9 + (rcx_10 << 3)) == rcx_8)
                break
            
            rbx_1 = *(rdx_9 + (rcx_10 << 3) + 0x10)
            
            if (rbx_1 == 0xffffffff)
                goto label_1408d9686
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1408d96cd
    
    memmove(*arg1 + sx.q(rbx_1) * 0x18, r15, 0x10)
    sub_1405c3640(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg5 != 0)
    *arg5 = rbp.b

return arg2
