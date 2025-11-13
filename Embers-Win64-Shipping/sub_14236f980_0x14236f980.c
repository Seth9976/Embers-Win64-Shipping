// 函数: sub_14236f980
// 地址: 0x14236f980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
void var_228
sub_14234f710(&var_228, arg5)
int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* r14_1 = nullptr
    int64_t r15_1 = 0
    
    do
        int64_t rbx_1 = *(arg1 + 0x28)
        
        if (*(r14_1 + rbx_1) != 0)
            float var_1cc_1 = *(*(arg1 + 0x48) + r15_1) f* *(arg5 + 0x5c)
            int64_t* rbx_2 = *(r14_1 + rbx_1)
            (*(*rbx_2 + 0x298))(rbx_2, arg2, sub_142365fb0(arg3, rbx_2, i), arg4, &var_228, arg6, 
                arg3, arg6, arg4)
        
        i += 1
        r15_1 += 4
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x30))

int64_t result = sub_142351ee0(&var_228)
__security_check_cookie(rax_1 ^ &var_278)
return result
