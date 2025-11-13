// 函数: sub_14278a6f0
// 地址: 0x14278a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_e8
void* var_38_1 = __security_cookie ^ &var_e8

if (arg5 != 0)
    int64_t var_a8 = 0
    int64_t var_a0_1 = 0
    int32_t var_b8
    int64_t rbx_1 = *sub_141d3ba20(&var_b8, arg3)
    int64_t* rax_4 = (*(*arg5 + 0x3f8))(arg5, &var_a8)
    int64_t rcx_2 = 0
    int64_t var_98 = rbx_1
    int64_t var_48_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int32_t var_40_1 = 0
    
    if (rax_4 != 0)
        if (arg4 != 0)
            int32_t rax_6 = (*(*arg4 + 0x3e8))(arg4)
            
            if (rax_6 == 1)
                void*** rax_7 = j_sub_140a82f30(zx.q(rax_6 + 0xf))
                void*** rbx_2 = rax_7
                
                if (rax_7 == 0)
                    rbx_2 = nullptr
                else
                    uint32_t rcx_5 = zx.d(arg4[0x16].b)
                    *rbx_2 = &data_1432223b0
                    rbx_2[1].d = rcx_5
                
                sub_140598750(&var_88, &var_b8)
                int32_t rax_8 = var_b8
                char* var_c0_1 = nullptr
                int32_t* var_b0
                *var_b0 = 1
                *(var_b0 + 8) = 0
                var_b0[4] = 0xffffffff
                sub_141d37760(&var_88, &var_b8, *var_b0, var_b0, rax_8, var_c0_1)
                int64_t rcx_9 = sx.q(var_b8) * 3
                int64_t rax_10 = var_88
                int64_t* rcx_10 = *(rax_10 + (rcx_9 << 3) + 8)
                
                if (rcx_10 != rbx_2)
                    *(rax_10 + (rcx_9 << 3) + 8) = rbx_2
                    
                    if (rcx_10 != 0)
                        (**rcx_10)(rcx_10, 1)
        
        sub_140b58170(&var_b8, "None", 1)
        sub_14278f330(arg1, &var_98)
        rcx_2 = var_48_1
    
    int32_t var_40_2 = 0
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    sub_1409aaf90(&var_88)
    
    if (rax_4 != 0)
        (**rax_4)(rax_4, 1)
    
    int64_t rcx_15 = var_a8
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

__security_check_cookie(var_38_1 ^ &var_e8)
