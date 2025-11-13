// 函数: sub_141b60720
// 地址: 0x141b60720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t result = __security_cookie ^ &var_f8
int64_t result_1 = result
int32_t r9 = *(arg1 + 0x48)

if (r9 != 0)
    int32_t r11_1 = *(arg1 + 0x4c)
    
    if (r11_1 != 0)
        char rcx = (data_1439c7a34).b
        int128_t var_58 = zx.o(0)
        int32_t r8_1 = 0x110
        int64_t* rcx_1 = data_143f0f180
        int32_t var_34_1 = (1 << rcx) - 1
        char rax_3 = *(arg1 + 0x50)
        int32_t var_48_1 = 1
        int128_t var_44_1 = data_143dbb1e0
        char var_30_1 = 0
        int64_t var_28_1 = 0
        int32_t var_20_1 = 0
        
        if (rax_3 != 0)
            r8_1 = 0x100
        
        char rdx_1 = 2
        
        if (rax_3 != 0)
            rdx_1 = 0x1b
        
        void var_a8
        (*(*rcx_1 + 0x560))(rcx_1, &var_a8, &data_143f02b98, r9, r11_1, rdx_1, 1, 1, r8_1, &var_58)
        sub_1405d1600(arg1 - 8, &var_a8)
        sub_1405d1550(&var_a8)
        sub_1408c8cf0(arg1 + 0x10, *(arg1 - 8))
        int64_t* rcx_5 = data_143f0f180
        int32_t var_a0 = 0x10101
        int64_t var_9c_1 = 0
        int32_t var_94_1 = 0
        int64_t var_90_1 = 1
        char var_88_1 = 0
        (*(*rcx_5 + 0x28))(rcx_5, &var_a8, &var_a0)
        sub_1405d1600(arg1 + 0x18, &var_a8)
        sub_1405d1550(&var_a8)
        int64_t* rcx_8 = data_143f0f180
        int32_t var_80 = 0x10101
        int64_t var_7c_1 = 0
        int32_t var_74_1 = 0
        int64_t var_70_1 = 1
        char var_68_1 = 0
        (*(*rcx_8 + 0x28))(rcx_8, &var_a8, &var_80)
        sub_1405d1600(arg1 + 0x20, &var_a8)
        result = sub_1405d1550(&var_a8)

__security_check_cookie(result_1 ^ &var_f8)
return result
