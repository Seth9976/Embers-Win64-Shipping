// 函数: sub_141708680
// 地址: 0x141708680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x24, sx.q(*(arg2 + 0xc)) * 0x24, r9)
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
    int512_t zmm1_1 = sub_1407453e0(&var_58, arg2)
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        int32_t* rbx_1 = *var_58 + sx.q(i) * 0x24
        int64_t* rcx_19 = arg1[1]
        int32_t* rdx_22 = *rcx_19
        
        if (&rdx_22[1] u<= rcx_19[1])
            *rbx_1 = *rdx_22
            int64_t* rax_32 = arg1[1]
            *rax_32 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rbx_1, zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, rbx_1, 4)
        
        sub_14152dda0(sub_14152dda0(arg1, &rbx_1[1], zmm1_1), &rbx_1[4], zmm1_1)
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

int512_t zmm1 = sub_141735ff0(arg2, arg_8)
int32_t r12 = 0

if (arg_8 s<= 0)
    return arg1

do
    int32_t rdx_9 = *(arg2 + 0x34)
    int64_t rsi_1
    
    if (rdx_9 == 0)
        rsi_1 = zx.q(arg2[1].d)
        int32_t rax_6 = (rsi_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_140adefe0(arg2)
        
        int32_t rbp_1 = arg2[5].d
        sub_1405a4980(&arg2[2], rbp_1 + 1)
        arg2[5].d += 1
        void* r8_7 = &arg2[2]
        void* rax_7 = arg2[4]
        
        if (rax_7 != 0)
            r8_7 = rax_7
        
        int32_t rax_8 = rbp_1
        
        if (rbp_1 s< 0)
            rax_8 = rbp_1 + 0x1f
        
        int64_t rdx_12 = sx.q(rax_8 s>> 5)
        *(r8_7 + (rdx_12 << 2)) &= not.d(1 << (rbp_1.b & 0x1f))
    else
        rsi_1 = sx.q(arg2[6].d)
        int64_t r9_2 = *arg2
        int64_t r8_6 = sx.q(*(r9_2 + rsi_1 * 0x24 + 4))
        arg2[6].d = r8_6.d
        *(arg2 + 0x34) = rdx_9 - 1
        
        if (rdx_9 != 1)
            *(r9_2 + r8_6 * 0x24) = 0xffffffff
    
    void* rax_12 = arg2[4]
    void* r9_3 = &arg2[2]
    
    if (rax_12 != 0)
        r9_3 = rax_12
    
    int32_t rax_13 = rsi_1.d
    
    if (rsi_1.d s< 0)
        rax_13 = (rsi_1 + 0x1f).d
    
    int64_t r8_8 = sx.q(rax_13 s>> 5)
    *(r9_3 + (r8_8 << 2)) |= 1 << (rsi_1.b & 0x1f)
    int64_t rdx_14 = *arg2
    int64_t rcx_11 = sx.q(rsi_1.d) * 9
    *(rdx_14 + (rcx_11 << 2)) = 0
    int32_t* rdx_15 = rdx_14 + (rcx_11 << 2)
    __builtin_memcpy(&rdx_15[1], 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x18)
    rdx_15[7] = 0xffffffff
    int64_t* rcx_12 = arg1[1]
    int32_t* r8_9 = *rcx_12
    
    if (&r8_9[1] u<= rcx_12[1])
        *rdx_15 = *r8_9
        int64_t* rax_18 = arg1[1]
        *rax_18 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_15, zmm1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_15, 4)
    
    sub_14152dda0(sub_14152dda0(arg1, &rdx_15[1], zmm1), &rdx_15[4], zmm1)
    r12 += 1
while (r12 s< arg_8)

return arg1
