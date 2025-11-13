// 函数: sub_14103b010
// 地址: 0x14103b010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
void* result = *(arg1 + 0xc8)
void* rdi = arg2

if (result != 0 && *(result + 0x28) == 0)
    if ((*(arg1 + 0x208) & 0x400000) == 0)
        if (arg2 == 0)
            rdi = result + 0x88
        
        int64_t* rax_2 = sub_141022ce0(*(arg1 + 0x78))
        int64_t var_28
        (*(*rax_2 + 0xc8))(rax_2, &var_28, 0, 1, rdi)
        *(arg1 + 0x20c)
        int64_t rdx_1 = var_28
        *(arg1 + 0x150) = rdx_1.d
        result = sub_14105c0e0(rdi, rdx_1)
    else
        *(arg1 + 0x150) = 0

__security_check_cookie(rax_1 ^ &var_58)
return result
