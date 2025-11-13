// 函数: sub_1427788c0
// 地址: 0x1427788c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_e8
void* var_38_1 = __security_cookie ^ &var_e8

if (arg5 != 0 && (*(*arg1 + 0x308))().b != 0)
    int64_t var_a8 = 0
    int64_t var_a0_1 = 0
    int32_t var_b8
    int64_t rbx_2 = *sub_142779a50(&var_b8, arg3)
    int64_t* rax_5 = (*(*arg5 + 0x3f8))(arg5, &var_a8)
    int64_t rcx_2 = 0
    int64_t var_98 = rbx_2
    int64_t var_48_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int32_t var_40_1 = 0
    
    if (rax_5 != 0)
        if (arg4 != 0)
            int32_t rax_7 = (*(*arg4 + 0x3e8))(arg4)
            int32_t* var_b0
            int32_t* rcx_7
            void*** rbx_3
            
            if (rax_7 == 1)
                void*** rax_10 = j_sub_140a82f30(0x10)
                rbx_3 = rax_10
                
                if (rax_10 == 0)
                    rbx_3 = nullptr
                else
                    uint32_t rcx_8 = zx.d(arg4[0x16].b)
                    *rbx_3 = &data_1432223b0
                    rbx_3[1].d = rcx_8
                
                sub_140598750(&var_88, &var_b8)
                rcx_7 = var_b0
                *rcx_7 = 1
            label_142778a2c:
                int32_t rax_11 = var_b8
                *(rcx_7 + 8) = 0
                rcx_7[4] = 0xffffffff
                sub_141d37760(&var_88, &var_b8, *rcx_7, rcx_7, rax_11, nullptr)
                int64_t rcx_11 = sx.q(var_b8) * 3
                int64_t rax_13 = var_88
                int64_t* rcx_12 = *(rax_13 + (rcx_11 << 3) + 8)
                
                if (rcx_12 != rbx_3)
                    *(rax_13 + (rcx_11 << 3) + 8) = rbx_3
                    
                    if (rcx_12 != 0)
                        (**rcx_12)(rcx_12, 1)
            else if (rax_7 == 3)
                void*** rax_9 = j_sub_140a82f30(zx.q(rax_7 + 0xd))
                rbx_3 = rax_9
                
                if (rax_9 == 0)
                    rbx_3 = nullptr
                else
                    int32_t rcx_5 = arg4[0x16].d
                    *rbx_3 = &data_1434a00a8
                    rbx_3[1].d = rcx_5
                
                sub_140598750(&var_88, &var_b8)
                rcx_7 = var_b0
                *rcx_7 = 3
                goto label_142778a2c
        
        sub_140b58170(&var_b8, "None", 1)
        sub_1427795e0(arg1, &var_98)
        rcx_2 = var_48_1
    
    int32_t var_40_2 = 0
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    sub_1409aaf90(&var_88)
    
    if (rax_5 != 0)
        (**rax_5)(rax_5, 1)
    
    int64_t rcx_17 = var_a8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

__security_check_cookie(var_38_1 ^ &var_e8)
