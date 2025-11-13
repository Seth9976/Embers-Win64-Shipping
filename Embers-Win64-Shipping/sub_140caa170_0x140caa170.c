// 函数: sub_140caa170
// 地址: 0x140caa170
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
int64_t r13
r13.b = 0
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int128_t* rdx_5 = arg3[1]
int64_t* r15_2 = (sx.q(rdi.d) << 5) + *arg1
int64_t rcx_6 = **arg3
*r15_2 = rcx_6
uint32_t rcx_7 = (rcx_6 u>> 4).d
int32_t rdx_7 = (0x9e3779b9 - rcx_7) ^ rcx_7 << 8
*(r15_2 + 8) = *rdx_5
r15_2[3].d = 0xffffffff
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp_2 = neg.d(rcx_7 + rdx_7) ^ rdx_7 u>> 0xd
int32_t rcx_10 = (rcx_7 - rbp_2 - rdx_7) ^ rbp_2 u>> 0xc
int32_t rdx_10 = (rdx_7 - rcx_10 - rbp_2) ^ rcx_10 << 0x10
int32_t rbp_5 = (rbp_2 - rcx_10 - rdx_10) ^ rdx_10 u>> 5
int32_t rcx_13 = (rcx_10 - rbp_5 - rdx_10) ^ rbp_5 u>> 3
int32_t rdx_13 = (rdx_10 - rcx_13 - rbp_5) ^ rcx_13 << 0xa
int32_t rbp_8 = (rbp_5 - rcx_13 - rdx_13) ^ rdx_13 u>> 0xf

if (r10_3 == 1)
label_140caa349:
    
    if (sub_1405b6520(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t rax_32 = (arg1[9].d - 1) & rbp_8
        *(r15_2 + 0x1c) = rax_32
        void* rdx_21 = *(r9_1 + 8)
        int64_t r8_3 = sx.q(rax_32)
        void* rax_33 = r9_1
        
        if (rdx_21 != 0)
            rax_33 = rdx_21
        
        r15_2[3].d = *(rax_33 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_35 = *(r9_1 + 8)
        
        if (rax_35 != 0)
            r9_1 = rax_35
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rcx_14 = arg1[8]
        void* r8_2 = &arg1[7]
        
        if (rcx_14 != 0)
            r8_2 = rcx_14
        
        rbx_1 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_8)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_140caa306:
        rbx_1 = -1
    else
        int64_t rcx_15 = *arg1
        
        while (true)
            int64_t rax_28 = sx.q(rbx_1) << 5
            
            if (*(rax_28 + rcx_15) == rcx_6)
                break
            
            rbx_1 = *(rax_28 + rcx_15 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_140caa306
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_140caa349
    
    memmove((sx.q(rbx_1) << 5) + *arg1, r15_2, 0x18)
    sub_1405c36f0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
