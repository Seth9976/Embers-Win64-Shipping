// 函数: sub_141ed5cc0
// 地址: 0x141ed5cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
*(arg1 + 0x210) |= 0x10
void* result = sub_141c51970(arg1 + 0x268, arg2)

if ((*(arg1 + 0x8a) & 1) != 0)
    result = sub_141ee2210(arg1)
    
    if (result != 0)
        int64_t rax_2 = *(arg1 + 0x740)
        void** var_3b8
        sub_141db7640(&var_3b8, arg2)
        void*** rax_3 = sub_140a82f30(0x3b8, 8)
        *rax_3 = &data_143264880
        rax_3[1] = result
        rax_3[2] = rax_2
        sub_141db7640(&rax_3[3], &var_3b8)
        *rax_3 = &data_1432648a0
        void* (* var_408)(int64_t* arg1)
        void* (* rax_4)(int64_t* arg1) = var_408
        void*** var_3f8_1 = rax_3
        
        if (rax_3 != -8)
            rax_4 = sub_141ed9c40
        
        var_408 = rax_4
        char var_418
        sub_141e85cb0(&var_408, var_418)
        result = sub_141c51350(&var_3b8)

__security_check_cookie(rax_1 ^ &var_438)
return result
