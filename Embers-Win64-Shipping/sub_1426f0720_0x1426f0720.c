// 函数: sub_1426f0720
// 地址: 0x1426f0720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_141750030(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x3c + r10_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x3c + r10_1) = 0xffffffff

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
int32_t* r15_1 = sx.q(rdi.d) * 0x3c + *arg1
*r15_1 = **arg3
*(r15_1 + 4) = *rdx_5
r15_1[3] = rdx_5[1].d
*(r15_1 + 0x10) = *(rdx_5 + 0xc)
r15_1[6] = *(rdx_5 + 0x14)
*(r15_1 + 0x1c) = rdx_5[3]
r15_1[9] = rdx_5[4].d
r15_1[0xa].b = *(rdx_5 + 0x24)
r15_1[0xb] ^= (rdx_5[5].d ^ r15_1[0xb]) & 1
r15_1[0xc] = *(rdx_5 + 0x2c)
r15_1[0xd] = 0xffffffff
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbp = sx.q(*r15_1)

if (r9_1 == 1)
label_1426f08d8:
    
    if (sub_1426f6b40(arg1, r9_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_23 = (arg1[9].d - 1) & rbp.d
        r15_1[0xe] = rax_23
        void* rdx_13 = *(r9_2 + 8)
        int64_t r8_4 = sx.q(rax_23)
        void* rax_24 = r9_2
        
        if (rdx_13 != 0)
            rax_24 = rdx_13
        
        r15_1[0xd] = *(rax_24 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_26 = *(r9_2 + 8)
        
        if (rax_26 != 0)
            r9_2 = rax_26
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r9_1 != 0)
        void* rcx_7 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_7 != 0)
            r8_3 = rcx_7
        
        rbx_1 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (r9_1 == 0 || rbx_1 == 0xffffffff)
    label_1426f0895:
        rbx_1 = -1
    else
        int64_t rdx_9 = *arg1
        
        while (true)
            int32_t* rcx_8 = sx.q(rbx_1) * 0x3c
            
            if (*(rcx_8 + rdx_9) == rbp.d)
                break
            
            rbx_1 = *(rcx_8 + rdx_9 + 0x34)
            
            if (rbx_1 == 0xffffffff)
                goto label_1426f0895
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1426f08d8
    
    memmove(sx.q(rbx_1) * 0x3c + *arg1, r15_1, 0x34)
    sub_14270b2e0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
