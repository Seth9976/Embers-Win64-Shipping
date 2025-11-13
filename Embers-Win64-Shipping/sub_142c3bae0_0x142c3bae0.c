// 函数: sub_142c3bae0
// 地址: 0x142c3bae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
void* result = sub_142c19030(&var_e8, 0, arg2, arg3)
int32_t i = 0

if (*arg1 u> 0)
    do
        uint64_t i_1 = zx.q(i)
        char* r9_1 = *(arg1 + (i_1 << 3) + 0x20)
        
        if (r9_1 != 0)
            int32_t rdx = arg1[i_1 + 2]
            void* var_e0_1 = &var_e8
            int32_t var_34_1 = rdx
            int32_t var_30
            bool var_d4_1 = var_30 == 1
            int32_t var_d0_1 = rdx
            char var_1a
            bool var_d3_1 = var_1a != 0
            int64_t var_c8
            __builtin_memset(&var_c8, 0, 0x18)
            int32_t var_28
            int32_t var_d8_1 = var_28
            void* var_a0_1 = &var_e8
            int64_t var_88
            __builtin_memset(&var_88, 0, 0x18)
            int32_t var_98_1 = var_28
            char var_1b
            int32_t rax
            
            if (var_30 == 1 || var_1b != 0)
                rax.b = 1
            else
                rax.b = 0
            
            char var_94_1 = rax.b
            char var_93_1 = 1
            int32_t var_90_1 = 0xffffffff
            result = j_sub_142c147e0(&var_e8, r9_1, (i_1 << 5) + 0x48 + arg1)
        
        i += 1
    while (i u< *arg1)

return result
