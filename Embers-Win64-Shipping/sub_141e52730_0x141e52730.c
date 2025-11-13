// 函数: sub_141e52730
// 地址: 0x141e52730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 7, sx.q(*(arg2 + 0xc)) << 7)
int64_t r9 = *arg1
(*(r9 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9)
int64_t* rcx_1 = arg1[1]
void* var_58
void var_50
int32_t var_4c
void* var_48
int32_t var_40
int32_t i_2
int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = arg2[1].d - *(arg2 + 0x34)
    int32_t* rdx_20 = *rcx_1
    
    if (&rdx_20[1] u> rcx_1[1])
        int32_t* rdx_21 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_21, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_21, 4)
    else
        arg_8 = *rdx_20
        *rcx_1 += 4
    
    sub_1407453e0(&var_58, arg2)
    
    for (int32_t i = i_2; i s< *(var_48 + 0x18); i = i_2)
        void* rbx_3 = (sx.q(i) << 7) + *var_58
        (*(*arg1 + 0x140))(arg1, rbx_3)
        sub_141e6b020(rbx_3 + 8, arg1)
        var_40 &= not.d(var_4c)
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
sub_1407453e0(&var_58, arg2)

for (int32_t i_1 = i_2; i_1 s< *(var_48 + 0x18); i_1 = i_2)
    sub_141e50f10((sx.q(i_1) << 7) + 8 + *var_58)
    var_40 &= not.d(var_4c)
    sub_14059bdd0(&var_50)

arg2[1].d = 0

if (*(arg2 + 0xc) != rdi)
    sub_140888ba0(arg2, rdi)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rdi)
int32_t r12 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rcx_11 = *(arg2 + 0x34)
    int64_t rdi_1
    
    if (rcx_11 == 0)
        rdi_1 = zx.q(arg2[1].d)
        int32_t rax_14 = (rdi_1 + 1).d
        arg2[1].d = rax_14
        
        if (rax_14 s> *(arg2 + 0xc))
            sub_1408888d0(arg2)
        
        int32_t r14_1 = arg2[5].d
        sub_1405a4980(&arg2[2], r14_1 + 1)
        arg2[5].d += 1
        void* rcx_14 = &arg2[2]
        void* rax_15 = arg2[4]
        
        if (rax_15 != 0)
            rcx_14 = rax_15
        
        int32_t rax_16 = r14_1
        
        if (r14_1 s< 0)
            rax_16 = r14_1 + 0x1f
        
        void* rdx_14 = rcx_14 + (sx.q(rax_16 s>> 5) << 2)
        *rdx_14 &= not.d(1 << (r14_1.b & 0x1f))
    else
        rdi_1 = sx.q(arg2[6].d)
        uint64_t r8_6 = *arg2
        int64_t rdx_11 = sx.q(*((rdi_1 << 7) + r8_6 + 4))
        arg2[6].d = rdx_11.d
        *(arg2 + 0x34) = rcx_11 - 1
        
        if (rcx_11 != 1)
            *((rdx_11 << 7) + r8_6) = 0xffffffff
    
    void* rax_21 = arg2[4]
    void* rcx_16 = &arg2[2]
    
    if (rax_21 != 0)
        rcx_16 = rax_21
    
    int32_t rax_22 = rdi_1.d
    
    if (rdi_1.d s< 0)
        rax_22 = (rdi_1 + 0x1f).d
    
    void* r8_7 = rcx_16 + (sx.q(rax_22 s>> 5) << 2)
    *r8_7 |= 1 << (rdi_1.b & 0x1f)
    int64_t rdx_18 = (sx.q(rdi_1.d) << 7) + *arg2
    __builtin_memset(rdx_18, 0, 0x38)
    void* r8_8 = rdx_18 + 0x38
    *(r8_8 + 0x1c) = 0x80
    void* rax_25 = *(r8_8 + 0x10)
    
    if (rax_25 != 0)
        r8_8 = rax_25
    
    __builtin_memset(r8_8, 0, 0x1c)
    *(rdx_18 + 0x58) = 0xffffffff
    *(rdx_18 + 0x5c) = 0
    *(rdx_18 + 0x68) = 0
    *(rdx_18 + 0x70) = 0
    *(rdx_18 + 0x78) = 0xffffffff
    (*(*arg1 + 0x140))(arg1)
    sub_141e6b020(rdx_18 + 8, arg1)
    r12 += 1
while (r12 s< arg_8)

return arg1
