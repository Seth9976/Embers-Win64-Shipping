// 函数: sub_1405a8200
// 地址: 0x1405a8200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4d20(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rdi = sx.q(arg1[6].d)
    int64_t r10_1 = *arg1
    int64_t r8 = sx.q(*(r10_1 + rdi * 0x14 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r10_1 + r8 * 0x14) = 0xffffffff

void* rax_2 = arg1[4]
void* r9 = &arg1[2]

if (rax_2 != 0)
    r9 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9 + (r8_1 << 2)) |= 1 << (rdi.b & 0x1f)
int64_t* r15 = *arg1 + sx.q(rdi.d) * 0x14
int32_t* rdx_6 = arg3[1]
int64_t rcx_7 = **arg3
*r15 = rcx_7
r15[1].d = *rdx_6
*(r15 + 0xc) = 0xffffffff
int32_t r13_1 = sub_140b5ead0(rcx_7.d) + rcx_7:4.d
int64_t rbp
rbp.b = 0
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)

if (r10_3 == 1)
label_1405a838e:
    
    if (sub_1405b6680(arg1, r10_3, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_18 = (arg1[9].d - 1) & r13_1
        r15[2].d = rax_18
        void* rdx_12 = *(r9_2 + 8)
        int64_t r8_6 = sx.q(rax_18)
        void* rax_19 = r9_2
        
        if (rdx_12 != 0)
            rax_19 = rdx_12
        
        *(r15 + 0xc) = *(rax_19 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2))
        void* rax_21 = *(r9_2 + 8)
        
        if (rax_21 != 0)
            r9_2 = rax_21
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_6) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rdx_7 = arg1[8]
        void* r9_1 = &arg1[7]
        
        if (rdx_7 != 0)
            r9_1 = rdx_7
        
        rbx_1 = *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r13_1)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1405a8347:
        rbx_1 = -1
    else
        int64_t r8_5 = *arg1
        
        while (true)
            int64_t rdx_8 = sx.q(rbx_1) * 5
            
            if (*(r8_5 + (rdx_8 << 2)) == *r15)
                break
            
            rbx_1 = *(r8_5 + (rdx_8 << 2) + 0xc)
            
            if (rbx_1 == 0xffffffff)
                goto label_1405a8347
    
    rbp.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1405a838e
    
    memmove(*arg1 + sx.q(rbx_1) * 0x14, r15, 0xc)
    sub_1405c3870(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
