// 函数: sub_140ee0250
// 地址: 0x140ee0250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140638a00(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0xc + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r10_1 + r8 * 0xc) = 0xffffffff

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
int32_t* r13 = *arg1 + sx.q(rdi.d) * 0xc
*r13 = *arg3
r13[1] = 0xffffffff
int32_t r9_1 = arg1[1].d - *(arg1 + 0x34)
int64_t rbp = sx.q(*r13)

if (r9_1 == 1)
label_140ee03bc:
    
    if (sub_14090a260(arg1, r9_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & rbp.d
        r13[2] = r8_6
        void* rcx_13 = *(r9_2 + 8)
        void* rax_14 = r9_2
        
        if (rcx_13 != 0)
            rax_14 = rcx_13
        
        r13[1] = *(rax_14 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_14 = *(r9_2 + 8)
        
        if (rcx_14 != 0)
            r9_2 = rcx_14
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r9_1 != 0)
        void* rcx_7 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_7 != 0)
            r8_3 = rcx_7
        
        rbx_1 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (r9_1 == 0 || rbx_1 == 0xffffffff)
    label_140ee0375:
        rbx_1 = -1
    else
        int64_t rdx_9 = *arg1
        
        while (true)
            int64_t rcx_8 = sx.q(rbx_1) * 3
            
            if (*(rdx_9 + (rcx_8 << 2)) == rbp.d)
                break
            
            rbx_1 = *(rdx_9 + (rcx_8 << 2) + 4)
            
            if (rbx_1 == 0xffffffff)
                goto label_140ee0375
    
    r15.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_140ee03bc
    
    memmove(*arg1 + sx.q(rbx_1) * 0xc, r13, 4)
    sub_14090a460(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r15.b

return arg2
