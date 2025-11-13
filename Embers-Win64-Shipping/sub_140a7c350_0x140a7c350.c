// 函数: sub_140a7c350
// 地址: 0x140a7c350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t var_38

if (arg3[1].d s> 1 && arg4[1].d s> 1)
    int64_t* rax_1 = sub_140a6e720(&var_38, arg2, arg3, arg4)
    int64_t rbp_1 = sx.q(arg1[1].d)
    int32_t rcx_1 = (rbp_1 + 1).d
    arg1[1].d = rcx_1
    
    if (rcx_1 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rcx_5 = (rbp_1 << 4) + *arg1
    *rcx_5 = 0
    *rcx_5 = *rax_1
    *rax_1 = 0
    rcx_5[1].d = rax_1[1].d
    *(rcx_5 + 0xc) = *(rax_1 + 0xc)
    rax_1[1] = 0
    int64_t rbp_2 = var_38
    
    if (rbp_2 != 0)
        int64_t* rcx_6 = data_143ddb3f0
        
        if (rcx_6 == 0)
            sub_140a750a0()
            rcx_6 = data_143ddb3f0
        
        (*(*rcx_6 + 0x30))(rcx_6, rbp_2)

int64_t var_28

if (arg4[1].d s> 1)
    var_38 = 0
    int64_t var_30_1 = 0
    int64_t* rax_6 = sub_140a6e720(&var_28, arg2, &var_38, arg4)
    int64_t rbp_3 = sx.q(arg1[1].d)
    int32_t rcx_8 = (rbp_3 + 1).d
    arg1[1].d = rcx_8
    
    if (rcx_8 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rcx_12 = (rbp_3 << 4) + *arg1
    *rcx_12 = 0
    *rcx_12 = *rax_6
    *rax_6 = 0
    rcx_12[1].d = rax_6[1].d
    *(rcx_12 + 0xc) = *(rax_6 + 0xc)
    rax_6[1] = 0
    int64_t rdi_2 = var_28
    
    if (rdi_2 != 0)
        int64_t* rcx_13 = data_143ddb3f0
        
        if (rcx_13 == 0)
            sub_140a750a0()
            rcx_13 = data_143ddb3f0
        
        (*(*rcx_13 + 0x30))(rcx_13, rdi_2)

if (arg3[1].d s> 1)
    var_38 = 0
    int64_t var_30_2 = 0
    int64_t* rax_11 = sub_140a6e720(&var_28, arg2, arg3, &var_38)
    int64_t rsi_1 = sx.q(arg1[1].d)
    int32_t rcx_15 = (rsi_1 + 1).d
    arg1[1].d = rcx_15
    
    if (rcx_15 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    int64_t* rcx_19 = (rsi_1 << 4) + *arg1
    *rcx_19 = 0
    *rcx_19 = *rax_11
    *rax_11 = 0
    rcx_19[1].d = rax_11[1].d
    *(rcx_19 + 0xc) = *(rax_11 + 0xc)
    rax_11[1] = 0
    int64_t rdi_4 = var_28
    
    if (rdi_4 != 0)
        int64_t* rcx_20 = data_143ddb3f0
        
        if (rcx_20 == 0)
            sub_140a750a0()
            rcx_20 = data_143ddb3f0
        
        (*(*rcx_20 + 0x30))(rcx_20, rdi_4)

int64_t rdi_5 = sx.q(arg1[1].d)
int32_t rax_16 = (rdi_5 + 1).d
arg1[1].d = rax_16

if (rax_16 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

sub_140596d10((rdi_5 << 4) + *arg1, arg2)
return arg1
