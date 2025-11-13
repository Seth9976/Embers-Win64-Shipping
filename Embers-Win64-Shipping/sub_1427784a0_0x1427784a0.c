// 函数: sub_1427784a0
// 地址: 0x1427784a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
void* result = __security_cookie ^ &var_e8
void* result_1 = result

if (arg5 != 0 && *(arg1 + 0x408) != 0)
    int64_t var_a8 = 0
    int64_t var_a0_1 = 0
    int32_t var_b8
    int64_t rbx_1 = *sub_142779a50(&var_b8, arg3)
    int64_t* rax_3 = (*(*arg5 + 0x3f8))(arg5, &var_a8)
    int64_t rcx_2 = 0
    int64_t var_98 = rbx_1
    int64_t var_48_1 = 0
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int32_t var_40_1 = 0
    
    if (rax_3 != 0)
        if (arg4 != 0)
            int32_t rax_5 = (*(*arg4 + 0x3e8))(arg4)
            int32_t* var_b0
            int32_t* rcx_7
            void*** rbx_2
            
            if (rax_5 == 1)
                void*** rax_8 = j_sub_140a82f30(0x10)
                rbx_2 = rax_8
                
                if (rax_8 == 0)
                    rbx_2 = nullptr
                else
                    uint32_t rcx_8 = zx.d(arg4[0x16].b)
                    *rbx_2 = &data_1432223b0
                    rbx_2[1].d = rcx_8
                
                sub_140598750(&var_88, &var_b8)
                rcx_7 = var_b0
                *rcx_7 = 1
            label_142778600:
                int32_t rax_9 = var_b8
                *(rcx_7 + 8) = 0
                rcx_7[4] = 0xffffffff
                sub_141d37760(&var_88, &var_b8, *rcx_7, rcx_7, rax_9, nullptr)
                int64_t rcx_11 = sx.q(var_b8) * 3
                int64_t rax_11 = var_88
                int64_t* rcx_12 = *(rax_11 + (rcx_11 << 3) + 8)
                
                if (rcx_12 != rbx_2)
                    *(rax_11 + (rcx_11 << 3) + 8) = rbx_2
                    
                    if (rcx_12 != 0)
                        (**rcx_12)(rcx_12, 1)
            else if (rax_5 == 3)
                void*** rax_7 = j_sub_140a82f30(zx.q(rax_5 + 0xd))
                rbx_2 = rax_7
                
                if (rax_7 == 0)
                    rbx_2 = nullptr
                else
                    int32_t rcx_5 = arg4[0x16].d
                    *rbx_2 = &data_1434a00a8
                    rbx_2[1].d = rcx_5
                
                sub_140598750(&var_88, &var_b8)
                rcx_7 = var_b0
                *rcx_7 = 3
                goto label_142778600
        
        sub_140b58170(&var_b8, "None", 1)
        int64_t rdi_1 = sx.q(*(arg1 + 0x418))
        int32_t rax_13 = (rdi_1 + 1).d
        *(arg1 + 0x418) = rax_13
        
        if (rax_13 s> *(arg1 + 0x41c))
            sub_14090a6a0(arg1 + 0x410)
        
        sub_141d2d5a0(rdi_1 * 0x60 + *(arg1 + 0x410), &var_98)
        rcx_2 = var_48_1
    
    int32_t var_40_2 = 0
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    result = sub_1409aaf90(&var_88)
    
    if (rax_3 != 0)
        result = (**rax_3)(rax_3, 1)
    
    int64_t rcx_20 = var_a8
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)

__security_check_cookie(result_1 ^ &var_e8)
return result
