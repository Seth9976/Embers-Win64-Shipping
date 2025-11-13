// 函数: sub_1420da960
// 地址: 0x1420da960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x18, sx.q(*(arg2 + 0xc)) * 0x18, r9)
int64_t r9_1 = *arg1
(*(r9_1 + 8))(arg1, zx.q(arg2[5].d + 0x1f) u>> 5 << 2, zx.q(*(arg2 + 0x2c) + 0x1f) u>> 5 << 2, r9_1)
int64_t* rcx_1 = arg1[1]
int32_t arg_8
int32_t arg_10

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
    sub_1407453e0(&var_58, arg2)
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        void* rdi_1 = *var_58 + sx.q(i) * 0x18
        (*(*arg1 + 0x130))(arg1, rdi_1)
        int64_t* rcx_20 = arg1[1]
        int32_t* rdx_22 = *rcx_20
        
        if (&rdx_22[1] u> rcx_20[1])
            int32_t rax_30
            rax_30.b = *(rdi_1 + 8) != 0
            arg_10 = rax_30
            (*(*arg1 + 0x150))(arg1, &arg_10, 4)
            *(rdi_1 + 8) = arg_10 != 0
        else
            void* rax_28
            rax_28.b = *rdx_22 != 0
            *(rdi_1 + 8) = rax_28.b
            int64_t* rax_29 = arg1[1]
            *rax_29 += 4
        
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
    sub_1405a5130(arg2, rsi)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rsi)
int32_t r15 = 0

if (arg_8 s> 0)
    do
        int32_t rdx_10 = *(arg2 + 0x34)
        int64_t rsi_1
        
        if (rdx_10 == 0)
            rsi_1 = zx.q(arg2[1].d)
            int32_t rax_6 = (rsi_1 + 1).d
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_1405a4df0(arg2)
            
            sub_1405b2ba0(&arg2[2], 0)
        else
            rsi_1 = sx.q(arg2[6].d)
            int64_t r9_2 = *arg2
            int64_t r8_6 = sx.q(*(r9_2 + rsi_1 * 0x18 + 4))
            arg2[6].d = r8_6.d
            *(arg2 + 0x34) = rdx_10 - 1
            
            if (rdx_10 != 1)
                *(r9_2 + r8_6 * 0x18) = 0xffffffff
        
        void* rax_7 = arg2[4]
        void* rcx_9 = &arg2[2]
        
        if (rax_7 != 0)
            rcx_9 = rax_7
        
        int32_t rax_8 = rsi_1.d
        
        if (rsi_1.d s< 0)
            rax_8 = (rsi_1 + 0x1f).d
        
        void* r8_7 = rcx_9 + (sx.q(rax_8 s>> 5) << 2)
        *r8_7 |= 1 << (rsi_1.b & 0x1f)
        int64_t rdx_13 = *arg2
        int64_t rcx_12 = sx.q(rsi_1.d) * 3
        *(rdx_13 + (rcx_12 << 3)) = 0
        *(rdx_13 + (rcx_12 << 3) + 8) = 0
        void* rsi_2 = rdx_13 + (rcx_12 << 3)
        *(rsi_2 + 0x10) = 0xffffffff
        (*(*arg1 + 0x130))(arg1, rsi_2)
        int64_t* rcx_14 = arg1[1]
        int32_t* rdx_15 = *rcx_14
        
        if (&rdx_15[1] u> rcx_14[1])
            int32_t rax_15
            rax_15.b = *(rsi_2 + 8) != 0
            arg_10 = rax_15
            (*(*arg1 + 0x150))(arg1, &arg_10, 4)
            *(rsi_2 + 8) = arg_10 != 0
        else
            void* rax_13
            rax_13.b = *rdx_15 != 0
            *(rsi_2 + 8) = rax_13.b
            int64_t* rax_14 = arg1[1]
            *rax_14 += 4
        
        r15 += 1
    while (r15 s< arg_8)

return arg1
