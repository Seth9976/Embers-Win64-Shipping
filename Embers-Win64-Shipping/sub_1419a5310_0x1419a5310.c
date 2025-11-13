// 函数: sub_1419a5310
// 地址: 0x1419a5310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10
sub_14197cf90(&arg_10, 2, 2)
int64_t* rcx_1 = arg_10
int64_t var_48
(*(*rcx_1 + 8))(rcx_1, &var_48)
int64_t* rcx_2 = arg_10
int64_t var_58
(*(*rcx_2 + 8))(rcx_2, &var_58)
int32_t rdi

if (data_143f0f1b7 != 0)
    int64_t rdi_1 = var_48
    void*** rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t arg_20 = 0
    void* rax_2 = &rcx_5[3]
    int64_t arg_18 = 0
    
    if (rax_2 u> *(arg1 + 0x38))
        sub_140b0e3d0(&arg1[0x30], 0x20)
        rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_2 = &rcx_5[3]
    
    *(arg1 + 0x30) = rax_2
    int64_t* rax_3 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_3 = rcx_5
    *(arg1 + 8) = &rcx_5[1]
    rcx_5[2] = rdi_1
    rdi = 5
    *rcx_5 = &data_142f284f8
    rcx_5[1] = 0
    int128_t zmm2_1 = sub_1419a4a10(arg1, 5)
    int64_t r14_1 = var_58
    void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_12[3]
    
    if (rax_5 u> *(arg1 + 0x38))
        sub_140b0e3d0(&arg1[0x30], 0x20)
        rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_12[3]
    
    *(arg1 + 0x30) = rax_5
    int64_t* rax_6 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_6 = rcx_12
    *(arg1 + 8) = &rcx_12[1]
    *rcx_12 = &data_142f284f8
    rcx_12[2] = r14_1
    rcx_12[1] = 0
    void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_18[2]
    
    if (rax_8 u> *(arg1 + 0x38))
        sub_140b0e3d0(&arg1[0x30], 0x18)
        rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_18[2]
    
    *(arg1 + 0x30) = rax_8
    int64_t* rax_9 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_9 = rcx_18
    *(arg1 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142dd5b50
    int32_t rsi_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rsi_1)
    int128_t entry_zmm3
    
    if (*(arg1 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg1, zmm2_1, entry_zmm3)
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_4
    rdx_4.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rsi_1)
    int64_t* rcx_25 = data_143f0f180
    int64_t r9_1
    r9_1.b = 1
    char rax_12
    int64_t r9_2
    rax_12, r9_2 = (*(*rcx_25 + 0x328))(rcx_25, var_48, &arg_20, r9_1, 0xffffffff)
    
    if (rax_12 != 0)
        int64_t* rcx_26 = data_143f0f180
        r9_2.b = 1
        
        if ((*(*rcx_26 + 0x328))(rcx_26, var_58, &arg_18, r9_2, 0xffffffff) != 0)
            int64_t rax_15 = arg_18
            int32_t zmm0_1 = float.s(rax_15 - arg_20)
            
            if (rax_15 - arg_20 s< 0)
                zmm0_1 = zmm0_1 f+ 1.84467441e+19f
            
            float zmm1_1 = 2500000f f/ zmm0_1
            int32_t rax_18 = int.d(zmm1_1 + zmm1_1 - 0.5f) s>> 1
            
            if (rax_18 s>= 1)
                rdi = 0x7d0
                
                if (rax_18 s< 0x7d0)
                    rdi = rax_18
            else
                rdi = 1
else
    rdi = 5

data_143f13c9c = rdi
int64_t* var_50

if (var_50 != 0 && var_58 != 0)
    (*(*var_50 + 0x10))(var_50, &var_58)
    int64_t var_50_1 = 0

sub_14081c9d0(&var_58)
int64_t* var_40

if (var_40 != 0 && var_48 != 0)
    (*(*var_40 + 0x10))(var_40, &var_48)
    int64_t var_40_1 = 0

sub_14081c9d0(&var_48)
return sub_1405d1550(&arg_10)
