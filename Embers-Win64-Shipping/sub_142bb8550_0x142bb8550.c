// 函数: sub_142bb8550
// 地址: 0x142bb8550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* r14 = *(arg1 + 0x2e0)
uint64_t result

if (r14 != 0)
    int32_t i_3 = *(r14 + 4)
    void var_58
    sub_142bbb300(*(r14 + 0x108), &var_58, i_3)
    int32_t i_2 = arg2
    
    if (arg2 u> i_3)
        i_2 = i_3
    
    int32_t i_4 = 0
    
    if (i_2 != 0)
        int32_t* rdi_1 = arg3
        int64_t rbx_1 = 0
        i_4 = i_2
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            int32_t rax_2 = sub_142bbb230(r14 + 0xa8 + rbx_1, *(&var_58 - arg3 + rdi_1))
            rbx_1 += 0x18
            *rdi_1 = rax_2
            rdi_1 = &rdi_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (i_4 u< arg2)
        __builtin_memset(&arg3[zx.q(i_4)], 0, zx.q(arg2 - i_4) << 2)
    
    result = 0
else
    result = zx.q((r14 + 6).d)

__security_check_cookie(rax_1 ^ &var_78)
return result
