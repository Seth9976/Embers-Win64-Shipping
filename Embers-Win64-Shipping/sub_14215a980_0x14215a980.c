// 函数: sub_14215a980
// 地址: 0x14215a980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x34)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1406798d0(arg1)
    
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
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t r8 = sx.q(*(rdi * 0x38 + r9 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8 * 0x38 + r9) = 0xffffffff

void* rax_9 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_9 != 0)
    r8_1 = rax_9

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdi.d)
void* r8_2 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rdi.b & 0x1f)
int128_t* rdx_9 = arg3[1]
int64_t* r15
r15.b = 0
int32_t* r12_1 = sx.q(rdi.d) * 0x38 + *arg1
*r12_1 = **arg3
*(r12_1 + 8) = *rdx_9
*(r12_1 + 0x18) = rdx_9[1]
*(r12_1 + 0x28) = rdx_9[2].q
r12_1[0xc] = 0xffffffff
int32_t r9_2 = arg1[1].d - *(arg1 + 0x34)
int64_t rbp_3 = sx.q(*r12_1)

if (r9_2 == 1)
label_14215ab3b:
    
    if (sub_140aecff0(arg1, r9_2, 0) == 0)
        void* r9_3 = &arg1[7]
        int32_t rax_21 = (arg1[9].d - 1) & rbp_3.d
        r12_1[0xd] = rax_21
        void* rdx_17 = *(r9_3 + 8)
        int64_t r8_4 = sx.q(rax_21)
        void* rax_22 = r9_3
        
        if (rdx_17 != 0)
            rax_22 = rdx_17
        
        r12_1[0xc] = *(rax_22 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_24 = *(r9_3 + 8)
        
        if (rax_24 != 0)
            r9_3 = rax_24
        
        *(r9_3 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi.d
else
    int32_t rbx_2
    
    if (r9_2 != 0)
        void* rcx_8 = arg1[8]
        void* r8_3 = &arg1[7]
        
        if (rcx_8 != 0)
            r8_3 = rcx_8
        
        rbx_2 = *(r8_3 + (((sx.q(arg1[9].d) - 1) & rbp_3) << 2))
    
    if (r9_2 == 0 || rbx_2 == 0xffffffff)
    label_14215aaf8:
        rbx_2 = -1
    else
        int64_t rdx_13 = *arg1
        
        while (true)
            int32_t* rcx_9 = sx.q(rbx_2) * 0x38
            
            if (*(rcx_9 + rdx_13) == rbp_3.d)
                break
            
            rbx_2 = *(rcx_9 + rdx_13 + 0x30)
            
            if (rbx_2 == 0xffffffff)
                goto label_14215aaf8
    
    r15.b = rbx_2 != 0xffffffff
    
    if (rbx_2 == 0xffffffff)
        goto label_14215ab3b
    
    memmove(sx.q(rbx_2) * 0x38 + *arg1, r12_1, 0x30)
    sub_140afe9e0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_2)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r15.b

return arg2
