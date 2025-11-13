// 函数: sub_141912100
// 地址: 0x141912100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
void* arg_18 = arg3
int64_t* var_e0 = &arg_18
void* arg_28
int64_t* var_d0 = &arg_28
void* arg_38
int64_t* var_c0 = &arg_38
void* arg_30
void* arg_40
char arg_48

if (data_143f01c92 != 0)
    if (sub_140a80f10() == 0)
        int64_t rdi_1 = data_143f02bc8 + 0xf
        int64_t arg_8 = 0
        void*** rdi_2 = rdi_1 & 0xfffffffffffffff0
        void* rax_2 = &rdi_2[0xa]
        
        if (rax_2 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rdi_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_2 = &rdi_2[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_2
        int128_t var_60 = arg1.o
        *data_143f02ba0 = rdi_2
        int128_t var_50 = (&arg_20).o
        int64_t* var_68 = &arg_8
        data_143f02ba0 = &rdi_2[1]
        int128_t var_40 = (&arg_30).o
        int128_t var_30 = (&arg_40).o
        int64_t* rax_4 = sub_140a82f30(0x50, 8)
        *rax_4 = &data_142ff5c48
        *(rax_4 + 8) = var_68.o
        *(rax_4 + 0x18) = var_60
        *(rax_4 + 0x28) = var_50
        int128_t var_38
        *(rax_4 + 0x38) = var_38
        rax_4[9] = zx.q(&arg_48)
        int64_t* (* var_a8)(int64_t* arg1)
        int64_t* (* rax_5)(int64_t* arg1) = var_a8
        
        if (rax_4 != -8)
            rax_5 = j_sub_141908c60
        
        *rdi_2 = &data_142ff4958
        rdi_2[1] = 0
        rdi_2[2] = rax_5
        rdi_2[4] = 0
        void var_88
        
        if (rdi_2[2] != 0)
            int64_t* rcx_1 = &var_88
            
            if (rax_4 != 0)
                rcx_1 = rax_4
            
            (**rcx_1)(rcx_1)
        
        if (rax_5 != 0)
            int64_t* rcx_2 = &var_88
            
            if (rax_4 != 0)
                rcx_2 = rax_4
            
            (*(*rcx_2 + 0x10))(rcx_2)
        
        int32_t rbx_2 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_2)
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_2
        rdx_2.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rbx_2)
        *arg2 = arg_8
        return arg2
    
    arg4 = arg_20
    arg3 = arg_18

sub_141942fd0(arg1, arg2, arg3, arg4, arg_28, arg_30, arg_38, arg_40, arg_48)
return arg2
