// 函数: sub_140b91f20
// 地址: 0x140b91f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    int32_t rsi_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rsi_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_2 = *(rbx_1 + 0x10)
    
    if (rax_2 != 0)
        rbx_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rsi_1.b & 0x1f))
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
int32_t* r13 = *arg1 + sx.q(rdi.d) * 0x18
int64_t* rdx_10 = arg3[1]
int64_t* rbp
rbp.b = 0
*r13 = **arg3
*(r13 + 8) = *rdx_10
r13[4] = 0xffffffff
int32_t r9_2 = arg1[1].d - *(arg1 + 0x34)
int64_t rsi_3 = sx.q(*r13)

if (r9_2 == 1)
label_140b920cc:
    
    if (sub_140b9ddc0(arg1, r9_2, 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t r8_6 = (arg1[9].d - 1) & rsi_3.d
        r13[5] = r8_6
        void* rcx_15 = *(r9_3 + 8)
        void* rax_22 = r9_3
        
        if (rcx_15 != 0)
            rax_22 = rcx_15
        
        r13[4] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2))
        void* rcx_16 = *(r9_3 + 8)
        
        if (rcx_16 != 0)
            r9_3 = rcx_16
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_6)) << 2)) = rdi.d
else
    int32_t rbx_2
    
    if (r9_2 != 0)
        void* rcx_9 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_9 != 0)
            r8_3 = rcx_9
        
        rbx_2 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & rsi_3) << 2))
    
    if (r9_2 == 0 || rbx_2 == 0xffffffff)
    label_140b92085:
        rbx_2 = -1
    else
        int64_t rdx_14 = *arg1
        
        while (true)
            int64_t rcx_10 = sx.q(rbx_2) * 3
            
            if (*(rdx_14 + (rcx_10 << 3)) == rsi_3.d)
                break
            
            rbx_2 = *(rdx_14 + (rcx_10 << 3) + 0x10)
            
            if (rbx_2 == 0xffffffff)
                goto label_140b92085
    
    rbp.b = rbx_2 != 0xffffffff
    
    if (rbx_2 == 0xffffffff)
        goto label_140b920cc
    
    memmove(*arg1 + sx.q(rbx_2) * 0x18, r13, 0x10)
    sub_1405c3640(arg1, rdi.d, 1)
    rdi = zx.q(rbx_2)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = rbp.b

return arg2
