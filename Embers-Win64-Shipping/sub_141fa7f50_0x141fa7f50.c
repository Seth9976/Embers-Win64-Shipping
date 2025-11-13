// 函数: sub_141fa7f50
// 地址: 0x141fa7f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 4, sx.q(*(arg2 + 0xc)) << 4)
int64_t r9 = *arg1
(*(r9 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9)
int64_t* rcx_1 = arg1[1]
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
    
    void* var_58
    sub_1407453e0(&var_58, arg2)
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        void* rdi_3 = (sx.q(i) << 4) + *var_58
        (*(*arg1 + 0x168))(arg1, rdi_3)
        int64_t* rcx_19 = arg1[1]
        char* r8_8 = *rcx_19
        
        if (&r8_8[1] u> rcx_19[1])
            (*(*arg1 + 0x150))(arg1, rdi_3 + 4, 1)
        else
            *(rdi_3 + 4) = *r8_8
            int64_t* rax_36 = arg1[1]
            *rax_36 += 1
        
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

int32_t rsi = arg_8
arg2[1].d = 0

if (*(arg2 + 0xc) != rsi)
    sub_1405a5410(arg2, rsi)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rsi)
int32_t r15 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rcx_5 = *(arg2 + 0x34)
    int64_t rsi_1
    
    if (rcx_5 == 0)
        rsi_1 = zx.q(arg2[1].d)
        int32_t rax_9 = (rsi_1 + 1).d
        arg2[1].d = rax_9
        
        if (rax_9 s> *(arg2 + 0xc))
            sub_140610660(arg2)
        
        int32_t rbp_1 = arg2[5].d
        sub_1405a4980(&arg2[2], rbp_1 + 1)
        arg2[5].d += 1
        void* rcx_8 = &arg2[2]
        void* rax_10 = arg2[4]
        
        if (rax_10 != 0)
            rcx_8 = rax_10
        
        int32_t rax_11 = rbp_1
        
        if (rbp_1 s< 0)
            rax_11 = rbp_1 + 0x1f
        
        void* rdx_13 = rcx_8 + (sx.q(rax_11 s>> 5) << 2)
        *rdx_13 &= not.d(1 << (rbp_1.b & 0x1f))
    else
        rsi_1 = sx.q(arg2[6].d)
        uint64_t r8_6 = *arg2
        int64_t rdx_10 = sx.q(*(r8_6 + rsi_1 * 0x10 + 4))
        arg2[6].d = rdx_10.d
        *(arg2 + 0x34) = rcx_5 - 1
        
        if (rcx_5 != 1)
            *(r8_6 + rdx_10 * 0x10) = 0xffffffff
    
    void* rax_16 = arg2[4]
    void* rcx_10 = &arg2[2]
    
    if (rax_16 != 0)
        rcx_10 = rax_16
    
    int32_t rax_17 = rsi_1.d
    
    if (rsi_1.d s< 0)
        rax_17 = (rsi_1 + 0x1f).d
    
    void* r8_7 = rcx_10 + (sx.q(rax_17 s>> 5) << 2)
    *r8_7 |= 1 << (rsi_1.b & 0x1f)
    int64_t rdx_17 = (sx.q(rsi_1.d) << 4) + *arg2
    *rdx_17 = 0
    *(rdx_17 + 4) = 0
    *(rdx_17 + 8) = 0xffffffff
    (*(*arg1 + 0x168))(arg1)
    int64_t* rcx_14 = arg1[1]
    char* rdx_18 = *rcx_14
    
    if (&rdx_18[1] u> rcx_14[1])
        (*(*arg1 + 0x150))(arg1, rdx_17 + 4, 1)
    else
        *(rdx_17 + 4) = *rdx_18
        int64_t* rax_23 = arg1[1]
        *rax_23 += 1
    
    r15 += 1
while (r15 s< arg_8)

return arg1
