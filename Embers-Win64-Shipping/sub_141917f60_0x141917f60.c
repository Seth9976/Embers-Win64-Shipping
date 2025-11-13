// 函数: sub_141917f60
// 地址: 0x141917f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t arg_18 = arg3
int32_t r11 = arg4
int64_t rbx = arg3
int32_t* var_80 = &arg_20
int32_t arg_30
int32_t* var_70 = &arg_30
int64_t arg_40
int64_t* var_60 = &arg_40
int32_t arg_38

if (data_143f01c92 != 0)
    if (sub_140a80f10() == 0)
        void*** rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        void* rax_2 = &rdi_3[0xa]
        
        if (rax_2 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x60)
            rdi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax_2 = &rdi_3[0xa]
        
        *(arg2 + 0x30) = rax_2
        int64_t* rax_3 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_3 = rdi_3
        *(arg2 + 8) = &rdi_3[1]
        void*** rax_4 = sub_140a82f30(0x38, 8)
        *rax_4 = &data_142ff5bc8
        *(rax_4 + 8) = (&arg_18).o
        *(rax_4 + 0x18) = arg7.o
        *(rax_4 + 0x28) = (&arg_38).o
        int64_t (* var_58)(int64_t* arg1)
        int64_t (* rax_5)(int64_t* arg1) = var_58
        
        if (rax_4 != -8)
            rax_5 = sub_14190a490
        
        rdi_3[1] = 0
        *rdi_3 = &data_142ff4958
        rdi_3[2] = rax_5
        rdi_3[4] = 0
        void var_38
        
        if (rdi_3[2] != 0)
            void*** rcx_2 = &var_38
            
            if (rax_4 != 0)
                rcx_2 = rax_4
            
            (**rcx_2)(rcx_2)
        
        if (rax_5 != 0)
            void*** rcx_3 = &var_38
            
            if (rax_4 != 0)
                rcx_3 = rax_4
            
            (*rcx_3)[2](rcx_3)
        
        int32_t rbx_2 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_2)
        
        if (*(arg2 + 0x14) u> 0)
            j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_3
        rdx_3.b = 1
        sub_14198b7d0()
        return sub_140b38680("FlushRHIThreadTotal", rbx_2)
    
    r11 = arg_20
    rbx = arg_18

int64_t* rcx_7 = data_143f0f180
return (*(*rcx_7 + 0x2b8))(rcx_7, rbx, zx.q(r11), arg7, arg_30, arg_38, arg_40)
