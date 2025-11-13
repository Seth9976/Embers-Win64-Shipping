// 函数: sub_141708a30
// 地址: 0x141708a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x38, sx.q(*(arg2 + 0xc)) * 0x38, r9)
int64_t r9_1 = *arg1
(*(r9_1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9_1)
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
        int64_t* rcx_16 = arg1[1]
        int32_t* rdx_19 = *rcx_16
        int32_t* rdi_2 = sx.q(i) * 0x38 + *var_58
        
        if (&rdx_19[1] u<= rcx_16[1])
            *rdi_2 = *rdx_19
            int64_t* rax_32 = arg1[1]
            *rax_32 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2, zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2, 4)
        
        (*(*(rdi_2 + 8) + 0x90))(&rdi_2[2], arg1)
        int32_t var_4c
        int32_t var_40 = var_40 & not.d(var_4c)
        void var_50
        sub_14059bdd0(&var_50)
    
    return arg1

arg_8 = 0
int32_t* rdx_5 = *rcx_1

if (&rdx_5[1] u> rcx_1[1])
    int32_t* rdx_6 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_6, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_6, 4)
else
    arg_8 = *rdx_5
    *rcx_1 += 4

int512_t zmm1 = sub_141736080(arg2, arg_8)
int32_t r15 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rdx_8 = *(arg2 + 0x34)
    int64_t rsi_1
    
    if (rdx_8 == 0)
        rsi_1 = zx.q(arg2[1].d)
        int32_t rax_6 = (rsi_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1406798d0(arg2)
        
        int32_t rbp_1 = arg2[5].d
        sub_1405a4980(&arg2[2], rbp_1 + 1)
        arg2[5].d += 1
        void* r8_6 = &arg2[2]
        void* rax_7 = arg2[4]
        
        if (rax_7 != 0)
            r8_6 = rax_7
        
        int32_t rax_8 = rbp_1
        
        if (rbp_1 s< 0)
            rax_8 = rbp_1 + 0x1f
        
        int64_t rdx_11 = sx.q(rax_8 s>> 5)
        *(r8_6 + (rdx_11 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
    else
        rsi_1 = sx.q(arg2[6].d)
        int64_t r9_2 = *arg2
        int64_t r8_5 = sx.q(*(rsi_1 * 0x38 + r9_2 + 4))
        arg2[6].d = r8_5.d
        *(arg2 + 0x34) = rdx_8 - 1
        
        if (rdx_8 != 1)
            *(r8_5 * 0x38 + r9_2) = 0xffffffff
    
    void* rax_12 = arg2[4]
    void* r9_3 = &arg2[2]
    
    if (rax_12 != 0)
        r9_3 = rax_12
    
    int32_t rax_13 = rsi_1.d
    
    if (rsi_1.d s< 0)
        rax_13 = (rsi_1 + 0x1f).d
    
    int64_t r8_7 = sx.q(rax_13 s>> 5)
    *(r9_3 + (r8_7 << 2)) |= 1 << (rsi_1.b & 0x1f)
    int32_t* rdx_14 = sx.q(rsi_1.d) * 0x38 + *arg2
    *rdx_14 = 0
    rdx_14[4] = 0x1010101
    rdx_14[5].b = 1
    *(rdx_14 + 8) = &data_142fc4870
    __builtin_memcpy(&rdx_14[6], 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x18)
    rdx_14[0xc] = 0xffffffff
    int64_t* rcx_11 = arg1[1]
    int32_t* r8_8 = *rcx_11
    
    if (&r8_8[1] u<= rcx_11[1])
        *rdx_14 = *r8_8
        int64_t* rax_18 = arg1[1]
        *rax_18 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_14, zmm1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_14, 4)
    
    (*(*(rdx_14 + 8) + 0x90))(&rdx_14[2], arg1)
    r15 += 1
while (r15 s< arg_8)

return arg1
