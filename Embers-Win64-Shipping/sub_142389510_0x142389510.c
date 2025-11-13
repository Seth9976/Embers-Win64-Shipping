// 函数: sub_142389510
// 地址: 0x142389510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e68
uint64_t result = __security_cookie ^ &var_e68
uint64_t result_1 = result
void* rbp = *arg2
int64_t* r14 = arg2[1]

if (*(arg1 + 0x54) != 0 || rbp == 0 || r14 == 0)
    for (int32_t i = *(arg1 + 8); i s< *(arg1 + 0x100); i += 1)
        result = sub_142396d40((sx.q(i) + 3) * 0x58 + arg1)
else
    int64_t rsi_1 = sx.q(*(arg1 + 8))
    int32_t var_48_1 = 0
    
    if (rsi_1.d s< *(arg1 + 0x100))
        int64_t r15_1 = rsi_1 << 3
        void var_e48
        
        do
            *(rbp + 0x13f)
            void* rbx_1 = *(r15_1 + *r14)
            sub_142338a60()
            arg3, arg4 =
                sub_14237d390((sx.q(rsi_1.d) + 3) * 0x58 + arg1, rbx_1, &var_e48, arg4, arg3)
            rsi_1 = zx.q(rsi_1.d + 1)
            r15_1 += 8
        while (rsi_1.d s< *(arg1 + 0x100))
        
        if (var_48_1 != 0)
            sub_14198a900(&data_143f02b98, &var_e48, var_48_1, 1, arg3, arg4)
    
    char rax_4 = *(arg1 + 8)
    *(r14 + 0x14) = rax_4
    *(r14 + 0x13) = rax_4
    result.b = r14[1].b - *(arg1 + 8)
    *(rbp + 0x3c) = result.b

__security_check_cookie(result_1 ^ &var_e68)
return result
