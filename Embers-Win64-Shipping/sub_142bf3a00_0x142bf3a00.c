// 函数: sub_142bf3a00
// 地址: 0x142bf3a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
*arg4 = 0
*arg3 = 0
void* r10 = *(arg1 + 0x40)
int32_t result = (*(r10 + 0x168))(arg1, *(arg1 + 0x48), zx.q(arg2), arg3, arg4, *(r10 + 0x58))

if (result == 0)
    *arg4 = 0
    *arg3 = 0
    void* r10_1 = *(arg1 + 0x40)
    result = (*(r10_1 + 0x170))(arg1, *(arg1 + 0x48), zx.q(arg2), arg3, arg4, *(r10_1 + 0x60))
    
    if (result != 0)
        void* rax_4 = *(arg1 + 0x40)
        int32_t rax_5 = (*(rax_4 + 0x148))(arg1, *(arg1 + 0x48), zx.q(arg2), *(rax_4 + 0x38))
        void* r10_2 = *(arg1 + 0x40)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_5)
        int64_t rdx_4 = *(arg1 + 0x48)
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x30)
        
        if ((*(r10_2 + 0x120))(arg1, rdx_4, &var_68, *(r10_2 + 0x10)) != 0)
            result = var_68.d
        else
            result = int.d(_mm_cvtepi32_pd(zx.q(*(arg1 + 0x24))).q f* 0.80000000000000004)
        
        *arg3 -= (temp1_1 - temp0_1) s>> 1
        *arg4 -= result

__security_check_cookie(rax_1 ^ &var_98)
return result
