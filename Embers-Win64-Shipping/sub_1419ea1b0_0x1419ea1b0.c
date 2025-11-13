// 函数: sub_1419ea1b0
// 地址: 0x1419ea1b0
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
void* r8_1 = r8 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_1 |= 1 << (rdi.b & 0x1f)
int64_t* r12_2 = (sx.q(rdi.d) << 5) + *arg1
sub_1419e9df0(arg3, r12_2)
r12_2[3].d = 0xffffffff
int64_t r9 = *r12_2
int64_t r13
r13.b = 0
int32_t r10_3 = arg1[1].d - *(arg1 + 0x34)
uint32_t rcx_8 = (r9 u>> 4).d
int32_t rdx_7 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
int32_t rbp_2 = neg.d(rcx_8 + rdx_7) ^ rdx_7 u>> 0xd
int32_t rcx_11 = (rcx_8 - rdx_7 - rbp_2) ^ rbp_2 u>> 0xc
int32_t rdx_10 = (rdx_7 - rcx_11 - rbp_2) ^ rcx_11 << 0x10
int32_t rbp_5 = (rbp_2 - rdx_10 - rcx_11) ^ rdx_10 u>> 5
int32_t rcx_14 = (rcx_11 - rdx_10 - rbp_5) ^ rbp_5 u>> 3
int32_t rdx_13 = (rdx_10 - rcx_14 - rbp_5) ^ rcx_14 << 0xa
int32_t rbp_8 = (rbp_5 - rdx_13 - rcx_14) ^ rdx_13 u>> 0xf

if (r10_3 == 1)
label_1419ea39a:
    
    if (sub_1405b6520(arg1, r10_3, 0) == 0)
        void* r9_1 = &arg1[7]
        int32_t r8_5 = (arg1[9].d - 1) & rbp_8
        *(r12_2 + 0x1c) = r8_5
        void* rcx_21 = *(r9_1 + 8)
        void* rax_30 = r9_1
        
        if (rcx_21 != 0)
            rax_30 = rcx_21
        
        r12_2[3].d = *(rax_30 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2))
        void* rcx_22 = *(r9_1 + 8)
        
        if (rcx_22 != 0)
            r9_1 = rcx_22
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & sx.q(r8_5)) << 2)) = rdi.d
else
    int32_t rbx_1
    
    if (r10_3 != 0)
        void* rcx_15 = arg1[8]
        void* r8_2 = &arg1[7]
        
        if (rcx_15 != 0)
            r8_2 = rcx_15
        
        rbx_1 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & sx.q(rbp_8)) << 2))
    
    if (r10_3 == 0 || rbx_1 == 0xffffffff)
    label_1419ea346:
        rbx_1 = -1
    else
        int64_t rcx_16 = *arg1
        
        while (true)
            int64_t rax_27 = sx.q(rbx_1) << 5
            
            if (*(rax_27 + rcx_16) == r9)
                break
            
            rbx_1 = *(rax_27 + rcx_16 + 0x18)
            
            if (rbx_1 == 0xffffffff)
                goto label_1419ea346
    
    r13.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        goto label_1419ea39a
    
    void* rbp_11 = (sx.q(rbx_1) << 5) + *arg1
    int64_t rcx_17 = *(rbp_11 + 8)
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    memmove(rbp_11, r12_2, 0x18)
    sub_1405c36f0(arg1, rdi.d, 1)
    rdi = zx.q(rbx_1)

*arg2 = rdi.d

if (arg4 != 0)
    *arg4 = r13.b

return arg2
