// 函数: sub_140bd7280
// 地址: 0x140bd7280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x18, sx.q(*(arg2 + 0xc)) * 0x18, r9)
int64_t r9_1 = *arg1
(*(r9_1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9_1)
int64_t* rcx_1 = arg1[1]
int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = arg2[1].d - *(arg2 + 0x34)
    int32_t* rdx_18 = *rcx_1
    
    if (&rdx_18[1] u> rcx_1[1])
        int32_t* rdx_19 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_19, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_19, 4)
    else
        arg_8 = *rdx_18
        *rcx_1 += 4
    
    int64_t* var_58
    sub_1407453e0(&var_58, arg2)
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        int64_t rbx_1 = *var_58 + sx.q(i) * 0x18
        (*(*arg1 + 0x140))(arg1, rbx_1)
        (*(*arg1 + 0x130))(arg1, rbx_1 + 8)
        int32_t var_4c
        int32_t var_40 = var_40 & not.d(var_4c)
        void var_50
        sub_14059bdd0(&var_50)
    
    return arg1

arg_8 = 0
int32_t* rdx_6 = *rcx_1

if (&rdx_6[1] u> rcx_1[1])
    int32_t* rdx_7 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_7, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_7, 4)
else
    arg_8 = *rdx_6
    *rcx_1 += 4

int32_t rdi = arg_8
arg2[1].d = 0

if (*(arg2 + 0xc) != rdi)
    sub_1405a5130(arg2, rdi)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rdi)
int32_t r15 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rdx_10 = *(arg2 + 0x34)
    int64_t rdi_1
    
    if (rdx_10 == 0)
        rdi_1 = zx.q(arg2[1].d)
        int32_t rax_6 = (rdi_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        int32_t rbp_1 = arg2[5].d
        sub_1405a4980(&arg2[2], rbp_1 + 1)
        arg2[5].d += 1
        void* rcx_9 = &arg2[2]
        void* rax_7 = arg2[4]
        
        if (rax_7 != 0)
            rcx_9 = rax_7
        
        int32_t rax_8 = rbp_1
        
        if (rbp_1 s< 0)
            rax_8 = rbp_1 + 0x1f
        
        void* rdx_13 = rcx_9 + (sx.q(rax_8 s>> 5) << 2)
        *rdx_13 &= not.d(1 << (rbp_1.b & 0x1f))
    else
        rdi_1 = sx.q(arg2[6].d)
        int64_t r9_2 = *arg2
        int64_t r8_6 = sx.q(*(r9_2 + rdi_1 * 0x18 + 4))
        arg2[6].d = r8_6.d
        *(arg2 + 0x34) = rdx_10 - 1
        
        if (rdx_10 != 1)
            *(r9_2 + r8_6 * 0x18) = 0xffffffff
    
    void* rax_13 = arg2[4]
    void* rcx_11 = &arg2[2]
    
    if (rax_13 != 0)
        rcx_11 = rax_13
    
    int32_t rax_14 = rdi_1.d
    
    if (rdi_1.d s< 0)
        rax_14 = (rdi_1 + 0x1f).d
    
    void* r8_7 = rcx_11 + (sx.q(rax_14 s>> 5) << 2)
    *r8_7 |= 1 << (rdi_1.b & 0x1f)
    int64_t rdx_15 = *arg2
    int64_t rcx_14 = sx.q(rdi_1.d) * 3
    *(rdx_15 + (rcx_14 << 3)) = 0
    void* rdx_16 = rdx_15 + (rcx_14 << 3)
    *(rdx_16 + 8) = 0
    *(rdx_16 + 0x10) = 0xffffffff
    (*(*arg1 + 0x140))(arg1)
    (*(*arg1 + 0x130))(arg1, rdx_16 + 8)
    r15 += 1
while (r15 s< arg_8)

return arg1
