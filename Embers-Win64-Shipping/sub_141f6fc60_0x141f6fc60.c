// 函数: sub_141f6fc60
// 地址: 0x141f6fc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
int32_t result = sub_141f238f0(arg1, arg2)

if (arg2[8].d s>= 0x200)
    int512_t zmm1_1
    result, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a4b70)
    
    if (result s< 9)
        void var_a8
        memset(&var_a8, 0, 0x90)
        void var_78
        void var_48
        result = sub_141f52360(
            sub_141f52360(sub_141f52360(arg2, &var_a8, zmm1_1), &var_78, zmm1_1), &var_48, zmm1_1)

__security_check_cookie(rax_1 ^ &var_c8)
return result
