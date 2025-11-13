// 函数: sub_142bb7920
// 地址: 0x142bb7920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_7e8
int64_t rax_1 = __security_cookie ^ &var_7e8
int32_t* rbx = arg5
int32_t result

if ((arg4 & 0x10) == 0)
    void var_778
    result = (**(*(arg1 + 0x2a0) + 0x18))(&var_778, arg1, 0, 0, *(arg1 + 0x248), *(arg1 + 0x2e0), 
        0, 0, sub_142bbac80)
    
    if (result == 0)
        int32_t rdi_3 = 0
        int32_t var_104_1 = *(arg1 + 0x220)
        int64_t var_100_1 = *(arg1 + 0x228)
        int64_t var_f8_1 = *(arg1 + 0x230)
        int64_t var_f0_1 = *(arg1 + 0x238)
        int64_t var_58_1 = *(arg1 + 0x2f8)
        int32_t var_50_1 = *(arg1 + 0x2f0)
        char var_71a_1 = 1
        char var_71c_1 = 0
        
        if (arg3 != 0)
            do
                char var_798 = 0
                void var_790
                
                if (sub_142bbace0(&var_778, arg2 + rdi_3, &var_790, &var_798) != 0)
                    *rbx = 0
                else
                    void* var_770
                    int64_t* rcx_4 = *(*(var_770 + 0xd0) + 0x50)
                    
                    if (rcx_4 != 0)
                        (*(*rcx_4 + 8))(rcx_4[1], &var_790)
                    
                    int32_t var_738
                    *rbx = sub_142b96160(var_738) s>> 0x10
                
                rdi_3 += 1
                rbx = &rbx[1]
            while (rdi_3 u< arg3)
        
        result = 0
else
    if (arg3 != 0)
        __builtin_memset(rbx, 0, zx.q(arg3) << 2)
    
    result = 0

__security_check_cookie(rax_1 ^ &var_7e8)
return result
