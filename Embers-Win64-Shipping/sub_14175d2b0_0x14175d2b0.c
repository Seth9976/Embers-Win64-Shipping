// 函数: sub_14175d2b0
// 地址: 0x14175d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
uint64_t* result = __security_cookie ^ &var_118
uint64_t* result_1 = result
int64_t* rbx = arg1[6][0].q
int32_t i = 0
int64_t* rdi = *(arg1 + 0x68)

if (*(arg3 + 0xc) s> 0)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    
    do
        zmm6 = *arg4
        void var_98
        sub_141682450(&var_98, arg1[6][0].q)
        void var_c8
        sub_141682450(&var_c8, *(arg1 + 0x68))
        (*arg1)[0x27] = zmm6[0]
        sub_1416fe020(arg1, &var_98, &var_c8, zmm6)
        uint64_t var_d8[0x2]
        result = sub_14176cf00(&var_d8, &arg1[8], rbx, rdi, arg2, arg3, arg4)
        i += 1
        arg1[7][0] = *result + arg1[7][0]
        (*arg1)[0x1d] = *(result + 4) + (*arg1)[0x1d]
        (*arg1)[0x1e] = result[1].d f+ (*arg1)[0x1e]
    while (i s< *(arg3 + 0xc))

__security_check_cookie(result_1 ^ &var_118)
return result
