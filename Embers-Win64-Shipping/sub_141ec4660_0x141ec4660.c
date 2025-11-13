// 函数: sub_141ec4660
// 地址: 0x141ec4660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_1 = result

if (*(arg1 + 0xa0) != 0)
    int32_t rdi_1 = 0
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405a5410(arg2, 0)
    
    int64_t* rcx_1 = *(arg1 + 0xa0)
    result = (*(*rcx_1 + 0x40))(rcx_1)
    int32_t rbp_1 = result.d
    
    if (result.d != 0)
        do
            int64_t* rcx_2 = *(arg1 + 0xa0)
            int64_t r9_1 = *rcx_2
            int32_t var_58
            int32_t var_50
            int32_t var_48
            (*(r9_1 + 0x48))(rcx_2, zx.q(rdi_1), &var_48, r9_1, var_58, var_50)
            int64_t rsi_1 = sx.q(arg2[1].d)
            int32_t var_44
            int32_t var_54_1 = var_44.d
            int32_t rax_2 = (rsi_1 + 1).d
            var_58 = var_48.d
            int32_t var_3c
            int32_t var_4c_1 = (var_3c ^ 0x80000000).d
            int32_t var_40
            var_50 = var_40.d
            arg2[1].d = rax_2
            
            if (rax_2 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            result = *arg2
            rdi_1 += 1
            *(result + rsi_1 * 0x10) = var_58.o
        while (rdi_1 u< rbp_1)

__security_check_cookie(result_1 ^ &var_78)
return result
