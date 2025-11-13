// 函数: sub_1420f46f0
// 地址: 0x1420f46f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x90, sx.q(*(arg2 + 0xc)) * 0x90, r9)
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
    
    void* var_58
    int512_t zmm1_1 = sub_1407453e0(&var_58, arg2)
    void* var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(var_48 + 0x18); i = i_1)
        int32_t* rdi_3 = sx.q(i) * 0x90 + *var_58
        sub_1409ac860(arg1, rdi_3, zmm1_1)
        int64_t* rcx_20 = arg1[1]
        int32_t* rdx_22 = *rcx_20
        
        if (&rdx_22[1] u<= rcx_20[1])
            rdi_3[4] = *rdx_22
            int64_t* rax_27 = arg1[1]
            *rax_27 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_3[4], zmm1_1)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_3[4], 4)
        
        sub_1420f56e0(arg1, &rdi_3[8], zmm1_1)
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

sub_1420f8280(arg2, arg_8)
int32_t rbp = 0

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
            sub_140dbc660(arg2)
        
        sub_1405b2ba0(&arg2[2], 0)
    else
        rsi_1 = sx.q(arg2[6].d)
        int64_t r9_2 = *arg2
        int64_t r8_6 = sx.q(*(r9_2 + rsi_1 * 0x90 + 4))
        arg2[6].d = r8_6.d
        *(arg2 + 0x34) = rdx_9 - 1
        
        if (rdx_9 != 1)
            *(r9_2 + r8_6 * 0x90) = 0xffffffff
    
    void* rax_7 = arg2[4]
    void* rcx_10 = &arg2[2]
    
    if (rax_7 != 0)
        rcx_10 = rax_7
    
    int32_t rax_8 = rsi_1.d
    
    if (rsi_1.d s< 0)
        rax_8 = (rsi_1 + 0x1f).d
    
    void* r8_7 = rcx_10 + (sx.q(rax_8 s>> 5) << 2)
    *r8_7 |= 1 << (rsi_1.b & 0x1f)
    int32_t* rdx_14 = sx.q(rsi_1.d) * 0x90 + *arg2
    *rdx_14 = 0
    *(rdx_14 + 8) = 0
    rdx_14[4] = 0xffffffff
    *(rdx_14 + 0x20) = data_14399f6e0
    int512_t zmm1
    zmm1.o = data_14399f6f0
    *(rdx_14 + 0x30) = zmm1.o
    *(rdx_14 + 0x40) = data_14399f700
    zmm1.o = data_14399f710
    *(rdx_14 + 0x50) = zmm1.o
    __builtin_memset(&rdx_14[0x18], 0, 0x18)
    rdx_14[0x20] = 0xffffffff
    sub_1409ac860(arg1, rdx_14, zmm1)
    int64_t* rcx_14 = arg1[1]
    int32_t* rdx_15 = *rcx_14
    
    if (&rdx_15[1] u<= rcx_14[1])
        rdx_14[4] = *rdx_15
        int64_t* rax_14 = arg1[1]
        *rax_14 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &rdx_14[4], zmm1)
    else
        (*(*arg1 + 0x150))(arg1, &rdx_14[4], 4)
    
    sub_1420f56e0(arg1, &rdx_14[8], zmm1)
    rbp += 1
while (rbp s< arg_8)

return arg1
