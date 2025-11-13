// 函数: sub_1422ca250
// 地址: 0x1422ca250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
sub_1405d1600(arg1 + 0x10, sub_1422c11f0(arg1, &arg_18))
char result = sub_1405d1550(&arg_18)
void* rcx_2 = *(arg1 + 0x10)

if (rcx_2 != 0)
    char rdx_2
    
    if (data_1439c7a0c == 0 || data_1439c8a60 == 0)
        rdx_2 = 0
    else
        rdx_2 = 1
    
    result = *(arg1 + 0x20) | rdx_2
    
    if (result != 0)
        void* arg_10
        int64_t arg_20
        void* const rdx_3
        int32_t rbx_1
        int32_t rsi_1
        
        if (*(arg1 + 0x28) == 0)
            rdx_3 = nullptr
            arg_20 = 0
            rsi_1 = 0
            rbx_1 = 2
        else
            arg_10 = rcx_2
            *(rcx_2 + 8) += 1
            rdx_3 = arg_10
            rsi_1 = 1
            rbx_1 = 0
        
        void var_38
        int128_t* rax_1 = sub_141961de0(&var_38, rdx_3, 0x1c)
        int64_t* rcx_4 = data_143f0f180
        void arg_8
        (*(*rcx_4 + 0x4b0))(rcx_4, &arg_8, &data_143f02b98, rax_1)
        sub_1405d1600(arg1 + 0x18, &arg_8)
        result = sub_1405ec8a0(&arg_8)
        
        if (rbx_1 != 0)
            result = sub_1405d1550(&arg_20)
        
        if (rsi_1 != 0)
            return sub_1405d1550(&arg_10)

return result
