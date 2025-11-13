// 函数: sub_141cd7100
// 地址: 0x141cd7100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x18, sx.q(*(arg2 + 0xc)) * 0x18, r9)
int64_t r9_1 = *arg1
(*(r9_1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9_1)
int64_t* rcx_1 = arg1[1]
int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = arg2[1].d - *(arg2 + 0x34)
    int32_t* rdx_17 = *rcx_1
    
    if (&rdx_17[1] u> rcx_1[1])
        int32_t* rdx_18 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_18, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_18, 4)
    else
        arg_8 = *rdx_17
        *rcx_1 += 4
    
    int64_t* var_58
    int512_t zmm1_1 = sub_1407453e0(&var_58, arg2)
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        void* rbx_1 = *var_58 + sx.q(i) * 0x18
        (*(*arg1 + 0x140))(arg1, rbx_1)
        sub_141cd7860(arg1, rbx_1 + 8, zmm1_1)
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

int512_t zmm1 = sub_141cdbe10(arg2, arg_8)
int32_t r15 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rdx_9 = *(arg2 + 0x34)
    int64_t rdi_1
    
    if (rdx_9 == 0)
        rdi_1 = zx.q(arg2[1].d)
        int32_t rax_6 = (rdi_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        int32_t rbp_1 = arg2[5].d
        sub_1405a4980(&arg2[2], rbp_1 + 1)
        arg2[5].d += 1
        void* rcx_8 = &arg2[2]
        void* rax_7 = arg2[4]
        
        if (rax_7 != 0)
            rcx_8 = rax_7
        
        int32_t rax_8 = rbp_1
        
        if (rbp_1 s< 0)
            rax_8 = rbp_1 + 0x1f
        
        void* rdx_12 = rcx_8 + (sx.q(rax_8 s>> 5) << 2)
        *rdx_12 &= not.d(1 << (rbp_1.b & 0x1f))
    else
        rdi_1 = sx.q(arg2[6].d)
        int64_t r9_2 = *arg2
        int64_t r8_6 = sx.q(*(r9_2 + rdi_1 * 0x18 + 4))
        arg2[6].d = r8_6.d
        *(arg2 + 0x34) = rdx_9 - 1
        
        if (rdx_9 != 1)
            *(r9_2 + r8_6 * 0x18) = 0xffffffff
    
    void* rax_13 = arg2[4]
    void* rcx_10 = &arg2[2]
    
    if (rax_13 != 0)
        rcx_10 = rax_13
    
    int32_t rax_14 = rdi_1.d
    
    if (rdi_1.d s< 0)
        rax_14 = (rdi_1 + 0x1f).d
    
    void* r8_7 = rcx_10 + (sx.q(rax_14 s>> 5) << 2)
    *r8_7 |= 1 << (rdi_1.b & 0x1f)
    int64_t rdx_14 = *arg2
    int64_t rcx_13 = sx.q(rdi_1.d) * 3
    *(rdx_14 + (rcx_13 << 3)) = 0
    void* rdx_15 = rdx_14 + (rcx_13 << 3)
    *(rdx_15 + 8) = 0
    *(rdx_15 + 0x10) = 0xffffffff
    (*(*arg1 + 0x140))(arg1)
    sub_141cd7860(arg1, rdx_15 + 8, zmm1)
    r15 += 1
while (r15 s< arg_8)

return arg1
