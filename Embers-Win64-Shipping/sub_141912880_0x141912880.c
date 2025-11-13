// 函数: sub_141912880
// 地址: 0x141912880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t* arg_50
int64_t* rdi = arg_50
int32_t* var_e0 = &arg_20
int32_t arg_30
int32_t* var_d0 = &arg_30
int32_t arg_40
int32_t* var_c0 = &arg_40
int32_t arg_28
char arg_38
int32_t arg_48

if (data_143f01c92 == 0)
    sub_1419459d0(arg1, arg2, arg4, arg_28, arg_30, arg_38, arg_40, arg_48, rdi)
else if (sub_140a80f10() != 0)
    sub_1419459d0(arg1, arg2, arg_20, arg_28, arg_30, arg_38, arg_40, arg_48, rdi)
else
    int64_t rdi_2 = *(arg3 + 0x30) + 0xf
    arg_50 = nullptr
    void*** rdi_3 = rdi_2 & 0xfffffffffffffff0
    void* rax_2 = &rdi_3[0xa]
    
    if (rax_2 u> *(arg3 + 0x38))
        sub_140b0e3d0(&arg3[0x30], 0x60)
        rdi_3 = (*(arg3 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = &rdi_3[0xa]
    
    *(arg3 + 0x30) = rax_2
    int64_t* rax_3 = *(arg3 + 8)
    *(arg3 + 0x14) += 1
    *rax_3 = rdi_3
    int128_t var_60_1 = arg1.o
    *(arg3 + 8) = &rdi_3[1]
    int128_t var_50_1 = (&arg_28).o
    int64_t* var_68_1 = &arg_50
    int128_t var_40_1 = (&arg_38).o
    int128_t var_30_1 = (&arg_48).o
    void*** rax_4 = sub_140a82f30(0x50, 8)
    *rax_4 = &data_142ff5c48
    *(rax_4 + 8) = var_68_1.o
    *(rax_4 + 0x18) = var_60_1
    *(rax_4 + 0x28) = var_50_1
    int128_t var_38
    *(rax_4 + 0x38) = var_38
    rax_4[9] = rdi
    int64_t* (* var_a8)(int64_t* arg1)
    int64_t* (* rax_5)(int64_t* arg1) = var_a8
    
    if (rax_4 != -8)
        rax_5 = j_sub_141908470
    
    *rdi_3 = &data_142ff4958
    rdi_3[1] = 0
    rdi_3[2] = rax_5
    rdi_3[4] = 0
    void var_88
    
    if (rdi_3[2] != 0)
        void*** rcx_2 = &var_88
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        (**rcx_2)(rcx_2)
    
    if (rax_5 != 0)
        void* rcx_3 = &var_88
        
        if (rax_4 != 0)
            rcx_3 = rax_4
        
        (*(*rcx_3 + 0x10))(rcx_3)
    
    int32_t rbx_2 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_2)
    
    if (*(arg3 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg3, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_3
    rdx_3.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbx_2)
    *arg2 = arg_50
return arg2
