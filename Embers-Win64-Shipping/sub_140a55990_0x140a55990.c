// 函数: sub_140a55990
// 地址: 0x140a55990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rdi

if (rcx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_5 = (rdi + 1).d
    arg1[1].d = rax_5
    
    if (rax_5 s> *(arg1 + 0xc))
        sub_1405c4e40(arg1)
    
    int32_t rbp_1 = arg1[5].d
    void* rbx_1 = &arg1[2]
    sub_1405a4980(rbx_1, rbp_1 + 1)
    *(rbx_1 + 0x18) += 1
    void* rax_6 = *(rbx_1 + 0x10)
    
    if (rax_6 != 0)
        rbx_1 = rax_6
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1)
    int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
    *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
else
    rdi = sx.q(arg1[6].d)
    int64_t r9 = *arg1
    int64_t rdx = sx.q(*((rdi << 5) + r9 + 4))
    arg1[6].d = rdx.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *((rdx << 5) + r9) = 0xffffffff

void* rax_13 = arg1[4]
void* r8 = &arg1[2]

if (rax_13 != 0)
    r8 = rax_13

int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rdi.d)
void* r8_1 = r8 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int128_t* rdx_9 = arg3[1]
int64_t* r13
r13.b = 0
int64_t* r15_2 = (sx.q(rdi.d) << 5) + *arg1
int64_t rcx_7 = **arg3
*r15_2 = rcx_7
uint32_t rcx_8 = (rcx_7 u>> 4).d
int32_t rdx_11 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
*(r15_2 + 8) = *rdx_9
r15_2[3].d = 0xffffffff
int32_t r10_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp_5 = neg.d(rcx_8 + rdx_11) ^ rdx_11 u>> 0xd
int32_t rcx_11 = (rcx_8 - rbp_5 - rdx_11) ^ rbp_5 u>> 0xc
int32_t rdx_14 = (rdx_11 - rcx_11 - rbp_5) ^ rcx_11 << 0x10
int32_t rbp_8 = (rbp_5 - rcx_11 - rdx_14) ^ rdx_14 u>> 5
int32_t rcx_14 = (rcx_11 - rbp_8 - rdx_14) ^ rbp_8 u>> 3
int32_t rdx_17 = (rdx_14 - rcx_14 - rbp_8) ^ rcx_14 << 0xa
int32_t rbp_11 = (rbp_8 - rcx_14 - rdx_17) ^ rdx_17 u>> 0xf

if (r10_1 == 1)
label_140a55bb8:
    
    if (sub_1405b6520(arg1, r10_1, 0) == 0)
        void* r9_2 = &arg1[7]
        int32_t rax_39 = (arg1[9].d - 1) & rbp_11
        *(r15_2 + 0x1c) = rax_39
        void* rdx_25 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_39)
        void* rax_40 = r9_2
        
        if (rdx_25 != 0)
            rax_40 = rdx_25
        
        r15_2[3].d = *(rax_40 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_42 = *(r9_2 + 8)
        
        if (rax_42 != 0)
            r9_2 = rax_42
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi.d
else
    int32_t rbx_2
    
    if (r10_1 != 0)
        void* rcx_15 = arg1[8]
        void* r8_2 = &arg1[7]
        
        if (rcx_15 != 0)
            r8_2 = rcx_15
        
        rbx_2 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_11)) << 2))
    
    if (r10_1 == 0 || rbx_2 == 0xffffffff)
    label_140a55b66:
        rbx_2 = -1
    else
        int64_t rcx_16 = *arg1
        
        while (true)
            int64_t rax_35 = sx.q(rbx_2) << 5
            
            if (*(rax_35 + rcx_16) == rcx_7)
                break
            
            rbx_2 = *(rax_35 + rcx_16 + 0x18)
            
            if (rbx_2 == 0xffffffff)
                goto label_140a55b66
    
    r13.b = rbx_2 != 0xffffffff
    
    if (rbx_2 == 0xffffffff)
        goto label_140a55bb8
    
    void* rcx_19 = (sx.q(rbx_2) << 5) + *arg1
    *(rcx_19 + 8) = 0
    *(rcx_19 + 0x10) = 0xffffffff
    memmove(rcx_19, r15_2, 0x18)
    sub_1405c36f0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_2)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
