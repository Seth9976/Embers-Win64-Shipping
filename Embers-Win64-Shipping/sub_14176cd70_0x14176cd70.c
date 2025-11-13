// 函数: sub_14176cd70
// 地址: 0x14176cd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t result = zx.q(arg1[0xd][0])

if (result.d == 1)
    result = sub_14175d3e0(arg1, arg2, arg3, arg4)
else if (result.d == 2)
    int64_t* rbx_1 = arg1[6][0].q
    int64_t* rdi_1 = *(arg1 + 0x68)
    int32_t i = 0
    
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
            float zmm11[0x4]
            sub_1416fd0f0(arg1, &var_98, &var_c8, zmm6, zmm11)
            uint64_t var_d8[0x2]
            result, zmm11 = sub_14176cf00(&var_d8, &arg1[8], rbx_1, rdi_1, arg2, arg3, arg4)
            i += 1
            arg1[7][0] = *result + arg1[7][0]
            (*arg1)[0x1d] = *(result + 4) + (*arg1)[0x1d]
            (*arg1)[0x1e] = *(result + 8) + (*arg1)[0x1e]
        while (i s< *(arg3 + 0xc))
else if (result.d == 3)
    result = sub_14175d2b0(arg1, arg2, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_118)
return result
