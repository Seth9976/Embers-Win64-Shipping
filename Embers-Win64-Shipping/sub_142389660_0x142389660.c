// 函数: sub_142389660
// 地址: 0x142389660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ca8
uint64_t result = __security_cookie ^ &var_ca8
uint64_t result_1 = result
int64_t* r15 = arg2[1]
void* rbp_1

if (*(arg1 + 0x54) == 0)
    rbp_1 = *arg2

if (*(arg1 + 0x54) != 0 || rbp_1 == 0 || r15 == 0)
    for (int32_t i = *(arg1 + 8); i s< *(arg1 + 0x100); i += 1)
        int64_t* rdi_3 = arg1 + 0x108 + sx.q(i) * 0x50
        sub_1405d16e0(rdi_3, nullptr)
        sub_1405d16e0(&rdi_3[1], nullptr)
        sub_1405d16e0(&rdi_3[2], nullptr)
        sub_1405d16e0(&rdi_3[3], nullptr)
        sub_14081d930(&rdi_3[4], nullptr)
        sub_14081d930(&rdi_3[5], nullptr)
        sub_14081d930(&rdi_3[6], nullptr)
        sub_14081d930(&rdi_3[7], nullptr)
        sub_14081d930(&rdi_3[8], nullptr)
        result = sub_14081d930(&rdi_3[9], nullptr)
else
    int64_t rsi = sx.q(*(arg1 + 8))
    int32_t var_48_1 = 0
    
    if (rsi.d s< *(arg1 + 0x100))
        int64_t r14_1 = rsi << 3
        void var_c88
        
        do
            arg3, arg4 = sub_14237d140(sx.q(rsi.d) * 0x50 + 0x108 + arg1, *(r14_1 + *r15), 
                &var_c88, arg4, arg3)
            rsi = zx.q(rsi.d + 1)
            r14_1 += 8
        while (rsi.d s< *(arg1 + 0x100))
        
        if (var_48_1 != 0)
            sub_14198a900(&data_143f02b98, &var_c88, var_48_1, 1, arg3, arg4)
    
    *(r15 + 0x5f) = *(arg1 + 8)
    result.b = r15[1].b - *(arg1 + 8)
    *(rbp_1 + 0x3c) = result.b

__security_check_cookie(result_1 ^ &var_ca8)
return result
