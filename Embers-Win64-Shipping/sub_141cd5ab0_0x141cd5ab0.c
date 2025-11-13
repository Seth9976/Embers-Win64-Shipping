// 函数: sub_141cd5ab0
// 地址: 0x141cd5ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 6, sx.q(*(arg2 + 0xc)) << 6)
int64_t r9 = *arg1
(*(r9 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9)
int64_t* rcx_1 = arg1[1]
int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = arg2[1].d - *(arg2 + 0x34)
    int32_t* rdx_16 = *rcx_1
    
    if (&rdx_16[1] u> rcx_1[1])
        int32_t* rdx_17 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_17, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_17, 4)
    else
        arg_8 = *rdx_16
        *rcx_1 += 4
    
    void* var_58
    int512_t zmm1_1 = sub_1407453e0(&var_58, arg2)
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        void* rbx_3 = (sx.q(i) << 6) + *var_58
        (*(*arg1 + 0x140))(arg1, rbx_3)
        zmm1_1 = sub_141cd3770(arg1, rbx_3 + 8, zmm1_1)
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

sub_141cdbb00(arg2, arg_8)
int32_t r15 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rcx_4 = *(arg2 + 0x34)
    int64_t rdi_1
    
    if (rcx_4 == 0)
        rdi_1 = zx.q(arg2[1].d)
        int32_t rax_9 = (rdi_1 + 1).d
        arg2[1].d = rax_9
        
        if (rax_9 s> *(arg2 + 0xc))
            sub_1405c4fe0(arg2)
        
        int32_t rsi_1 = arg2[5].d
        sub_1405a4980(&arg2[2], rsi_1 + 1)
        arg2[5].d += 1
        void* rcx_7 = &arg2[2]
        void* rax_10 = arg2[4]
        
        if (rax_10 != 0)
            rcx_7 = rax_10
        
        int32_t rax_11 = rsi_1
        
        if (rsi_1 s< 0)
            rax_11 = rsi_1 + 0x1f
        
        void* rdx_12 = rcx_7 + (sx.q(rax_11 s>> 5) << 2)
        *rdx_12 &= not.d(1 << (rsi_1.b & 0x1f))
    else
        rdi_1 = sx.q(arg2[6].d)
        uint64_t r8_6 = *arg2
        int64_t rdx_9 = sx.q(*((rdi_1 << 6) + r8_6 + 4))
        arg2[6].d = rdx_9.d
        *(arg2 + 0x34) = rcx_4 - 1
        
        if (rcx_4 != 1)
            *((rdx_9 << 6) + r8_6) = 0xffffffff
    
    void* rax_16 = arg2[4]
    void* rcx_9 = &arg2[2]
    
    if (rax_16 != 0)
        rcx_9 = rax_16
    
    int32_t rax_17 = rdi_1.d
    
    if (rdi_1.d s< 0)
        rax_17 = (rdi_1 + 0x1f).d
    
    void* r8_7 = rcx_9 + (sx.q(rax_17 s>> 5) << 2)
    *r8_7 |= 1 << (rdi_1.b & 0x1f)
    int64_t rsi_5 = (sx.q(rdi_1.d) << 6) + *arg2
    *rsi_5 = 0
    *(rsi_5 + 0x10) = 4
    *(rsi_5 + 0x18) = 0
    *(rsi_5 + 8) = &data_142e1c898
    __builtin_memset(rsi_5 + 0x20, 0, 0x14)
    int512_t zmm1 = sub_14090c570(rsi_5 + 8, 0)
    *(rsi_5 + 0x38) = 0xffffffff
    (*(*arg1 + 0x140))(arg1, rsi_5)
    sub_141cd3770(arg1, rsi_5 + 8, zmm1)
    r15 += 1
while (r15 s< arg_8)

return arg1
