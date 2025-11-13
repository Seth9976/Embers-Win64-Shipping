// 函数: sub_142836ea4
// 地址: 0x142836ea4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg2 + 0x28)
int64_t r12 = arg3
int32_t rbp = arg1

for (; i != 0; i = i[1])
    for (int64_t* j = *(*i + 0x28); j != 0; j = j[1])
        for (int64_t* k = *(*j + 0x10); k != 0; k = k[1])
            int32_t temp0_1 = rbp
            rbp -= 0xa
            
            if (temp0_1 - 0xa s< 0)
                return sub_142835944(3, "Preset modulator chunk size mismatch", arg3)
            
            int16_t* rax_3 = malloc(0xa)
            *k = rax_3
            int16_t arg_10
            
            if ((*(arg4 + 0x18))(&arg_10, 2, r12) == 0xffffffff)
                return 0
            
            *rax_3 = arg_10
            int16_t var_38
            
            if ((*(arg4 + 0x18))(&var_38, 2, r12) == 0xffffffff)
                return 0
            
            rax_3[1] = var_38
            int16_t var_34
            
            if ((*(arg4 + 0x18))(&var_34, 2, r12) == 0xffffffff)
                return 0
            
            rax_3[2] = var_34
            int16_t var_30
            
            if ((*(arg4 + 0x18))(&var_30, 2, r12) == 0xffffffff)
                return 0
            
            rax_3[3] = var_30
            int16_t var_2c
            int32_t rax_11
            rax_11, arg3 = (*(arg4 + 0x18))(&var_2c, 2, r12)
            
            if (rax_11 == 0xffffffff)
                return 0
            
            rax_3[4] = var_2c

if (rbp != 0)
    if (rbp != 0xa)
        return sub_142835944(3, "Preset modulator chunk size mismatch", arg3)
    
    if ((*(arg4 + 0x20))(r12, 0xa, 1) == 0xffffffff)
        return 0

return 1
