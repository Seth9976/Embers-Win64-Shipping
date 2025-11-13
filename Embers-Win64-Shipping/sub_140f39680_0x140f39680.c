// 函数: sub_140f39680
// 地址: 0x140f39680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x29) |= 0x30
arg1[0x75].d = *(arg2 + 0x1d0)
*(arg1 + 0x3ac) = *(arg2 + 0x1d4)
sub_140692f90(&arg1[0x76], arg2 + 0x1d8)
arg1[0x72].d = *(arg2 + 0x1b8)
*(arg1 + 0x394) = *(arg2 + 0x1bc)
sub_1407473e0(&arg1[0x73], arg2 + 0x1c0)
arg1[0x78].d = *(arg2 + 0x1e8)
*(arg1 + 0x3c4) = *(arg2 + 0x1ec)
sub_140692f90(&arg1[0x79], arg2 + 0x1f0)
arg1[0x7b].b = *(arg2 + 0x200)
*(arg1 + 0x3d9) = *(arg2 + 0x201)
sub_140692f90(&arg1[0x7c], arg2 + 0x208)
*(arg1 + 0x45c) = 0
arg1[0x5b].d = *(arg2 + 0x1b0)
*(arg1 + 0x2dc) = *(arg2 + 0x1b4)
sub_140de1b90(&arg1[0x57], arg2 + 0x1a0)
sub_140f5b150(arg1)
int32_t var_30 = 0
int64_t (* result_1)(int64_t* arg1) = sub_140f5b150
int128_t var_28 = result_1.o
int64_t* result = sub_140e8edc0(&result_1, arg1, &var_28)
int64_t* result_2 = result
int64_t rbx_1 = 0

if (result[1].d != 0 && *result != 0)
    sub_140599630(&data_14399fb68, 1)
    
    if (result_2[1].d != 0)
        int64_t* rcx_7 = *result_2
        void arg_8
        
        if (rcx_7 != 0)
            rbx_1 = *(*(*rcx_7 + 0x30))(rcx_7, &arg_8)
    
    int64_t rbp_1 = sx.q(data_14399fb70)
    int32_t rax_12 = (rbp_1 + 1).d
    bool cond:0_1 = rax_12 s<= data_14399fb74
    data_14399fb70 = rax_12
    
    if (not(cond:0_1))
        sub_1405a4f90(&data_14399fb68)
    
    int64_t* rcx_10 = (rbp_1 << 4) + data_14399fb68
    *rcx_10 = 0
    *rcx_10 = *result_2
    *result_2 = 0
    result = zx.q(result_2[1].d)
    rcx_10[1].d = result.d
    result_2[1].d = 0

if (var_30 == 0)
    result = result_1
label_140f3988c:
    
    if (result != 0)
        result = sub_140a74f90(result)
else
    int64_t (* result_3)(int64_t* arg1) = result_1
    
    if (result_3 != 0)
        (*(*result_3 + 0x38))(result_3, 0)
        result = result_1
        
        if (result != 0)
            result = sub_140a84c80(result, 0, 0)
            result_1 = result
        
        int32_t var_30_1 = 0
        goto label_140f3988c

arg1[0x7f] = rbx_1
return result
