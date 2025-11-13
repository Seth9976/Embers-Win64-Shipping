// 函数: sub_1412c7690
// 地址: 0x1412c7690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1)
char result = sub_1411a4ac0(data_143f0f1a0, rbp.d)
int32_t rdi = arg2[1].d
char result_1 = result

if (rdi s> 0)
    int64_t rcx_1 = *arg2
    int64_t var_70 = 0
    int64_t var_68_1 = 0
    int32_t arg_10 = 1
    result = sub_1412563a0(rcx_1, rdi, arg5)
    
    if (result_1 != 0)
        char rax = sub_141421520(rbp.d)
        
        if (rax != 0 && var_68_1:4.d != rdi)
            sub_141105150(&var_70, rdi)
        
        int32_t rdi_2 = (rdi * arg6) << 2
        int32_t var_60
        sub_14125eb50(&data_1439b6580, &var_60, rdi_2)
        void* var_58
        void* rsi_1 = var_58
        *arg4 = rsi_1
        int64_t* rcx_4 = data_143f0f180
        int32_t var_b0_1 = 1
        int32_t var_88_1 = arg6
        var_b0_1.q = &var_70
        void var_78
        void var_74
        sub_1412603c0(rax, arg2, arg3, 
            (*(*rcx_4 + 0x130))(rcx_4, &data_143f02b98, rsi_1, 0, rdi_2, 1), rdi_2, var_b0_1, 
            &arg_10, &var_74, &var_78, (*1111")[rbp])
        int64_t* rcx_7 = data_143f0f180
        (*(*rcx_7 + 0x138))(rcx_7, &data_143f02b98, *arg4)
        int32_t var_50 = var_60
        int32_t var_5c
        int32_t var_4c_1 = var_5c
        void* var_48_1 = rsi_1
        
        if (rsi_1 != 0)
            *(rsi_1 + 8) += 1
        
        sub_1412957f0(&data_1439b6580, &var_50)
        return sub_1405d1550(&var_58)

return result
