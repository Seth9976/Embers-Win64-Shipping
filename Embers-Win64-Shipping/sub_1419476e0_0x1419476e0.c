// 函数: sub_1419476e0
// 地址: 0x1419476e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t* arg_28
int32_t* rdi = arg_28
int32_t* var_60 = rdi
int64_t* var_50 = arg4

if (data_143f01c92 != 0)
    if (sub_140a80f10() == 0)
        void*** rdi_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_2 = &rdi_3[0xa]
        
        if (rax_2 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rdi_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_2 = &rdi_3[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_2
        *data_143f02ba0 = rdi_3
        data_143f02ba0 = &rdi_3[1]
        void*** rax_4 = sub_140a82f30(0x28, 8)
        *rax_4 = &data_142ec17e8
        *(rax_4 + 8) = (&arg_10).o
        *(rax_4 + 0x18) = arg6.o
        int64_t (* var_48)(int64_t* arg1)
        int64_t (* rax_5)(int64_t* arg1) = var_48
        
        if (rax_4 != -8)
            rax_5 = sub_141932310
        
        rdi_3[1] = 0
        *rdi_3 = &data_142ff4958
        rdi_3[2] = rax_5
        rdi_3[4] = 0
        void var_28
        
        if (rdi_3[2] != 0)
            void*** rcx_1 = &var_28
            
            if (rax_4 != 0)
                rcx_1 = rax_4
            
            (**rcx_1)(rcx_1)
        
        if (rax_5 != 0)
            void*** rcx_2 = &var_28
            
            if (rax_4 != 0)
                rcx_2 = rax_4
            
            (*rcx_2)[2](rcx_2)
        
        int32_t rbx_2 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rbx_2)
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg3, arg5)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_2
        rdx_2.b = 1
        sub_14198b7d0()
        return sub_140b38680("FlushRHIThreadTotal", rbx_2)
    
    arg2 = arg_10

void* rax_12 = (*(*arg2 + 8))(arg2)
*rdi = *(rax_12 + 0x60)
*arg6 = *(rax_12 + 0x64)
int64_t result = sub_1419401a0(rax_12, 0, 0, 0, &arg_28)
*arg4 = result
return result
