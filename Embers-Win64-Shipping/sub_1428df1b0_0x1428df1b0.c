// 函数: sub_1428df1b0
// 地址: 0x1428df1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x118)
int64_t* rax = *arg2

if (rax == 0)
    rax = sub_1428f3ca0()
    *arg2 = rax
    
    if (rax == 0)
        return 0
    
    goto label_1428df1e5

label_1428df1e5:

if (arg2[3] == 0)
    if (arg2[5] == 0)
        return 0
    
    sub_1428f3900(rax, 2, 2, 0)
    arg2[3] = sub_1428f3850(*arg2, arg2[5])

int64_t* rax_2

if (arg2[9].d != 2)
    rax_2 = sub_1428f3ac0(*arg2, arg2[3], 0, 0)

if (arg2[9].d != 2 && rax_2 != 0)
label_1428df309:
    int64_t rax_7 = sub_1428f37d0(*arg2, arg2[8])
    arg2[2] = rax_7
    
    if (rax_7 != 0)
        int64_t rax_9
        int32_t rax_10
        
        if (arg2[4].d == 0)
            rax_9 = sub_1428f37d0(*arg2, arg2[7])
            arg2[1] = rax_9
            
            if (rax_9 != 0)
                rax_10 = rax_9(0x30000)
        
        if (arg2[4].d != 0 || (rax_9 != 0 && rax_10 u>= 0x30000))
            int128_t var_d8_1 = *arg1
            int128_t var_c8_1 = arg1[1]
            int128_t var_b8_1 = arg1[2]
            int128_t var_a8_1 = arg1[3]
            int128_t var_98_1 = arg1[4]
            int128_t var_88_1 = arg1[5]
            int128_t var_78_1 = arg1[6]
            int128_t var_68_1 = arg1[7]
            int128_t var_58_1 = arg1[8]
            int128_t var_48_1 = arg1[9]
            int128_t zmm0_1 = arg1[0xb]
            int128_t var_38_1 = arg1[0xa]
            void* var_f8 = &data_143feccd8
            void* var_f0
            void* var_e8
            void* var_e0
            sub_1428a6a40(&var_f0, &var_e8, &var_e0)
            sub_1428e3460(arg1)
            
            if (arg2[2](arg1, arg2[5], &var_f8) != 0)
                if (arg2[6].d s<= 0)
                    return 1
                
                int32_t rax_12 = sub_142921ac0(arg1)
                
                if (rax_12 != 0)
                    return 1
                
                if (arg2[6].d s<= 1)
                    sub_1428a49e0()
                    return 1
                
                sub_1428a5670(rax_12 + 0x26, 0xb6, rax_12 + 0x67, "crypto\engine\eng_dyn.c", 0x1f6)
            else
                int64_t* rcx_17 = *arg2
                arg2[2] = 0
                arg2[1] = 0
                sub_1428f39b0(rcx_17)
                *arg2 = 0
                sub_1428a5670(0x26, 0xb6, 0x6d, "crypto\engine\eng_dyn.c", 0x1e5)
                *arg1 = var_d8_1
                arg1[1] = var_c8_1
                arg1[2] = var_b8_1
                arg1[3] = var_a8_1
                arg1[4] = var_98_1
                arg1[5] = var_88_1
                arg1[6] = var_78_1
                arg1[7] = var_68_1
                arg1[8] = var_58_1
                arg1[9] = var_48_1
                arg1[0xa] = var_38_1
                arg1[0xb] = zmm0_1
        else
            int64_t* rcx_13 = *arg2
            arg2[2] = 0
            arg2[1] = 0
            sub_1428f39b0(rcx_13)
            *arg2 = 0
            sub_1428a5670(0x26, 0xb6, 0x91, "crypto\engine\eng_dyn.c", 0x1c6)
    else
        int64_t* rcx_10 = *arg2
        arg2[2] = 0
        sub_1428f39b0(rcx_10)
        *arg2 = 0
        sub_1428a5670(0x26, 0xb6, 0x68, "crypto\engine\eng_dyn.c", 0x1ab)
else
    if (arg2[9].d != 0)
        int32_t rax_3 = sub_142898c70(arg2[0xa])
        
        if (rax_3 s< 1)
            goto label_1428df2e5
        
        int32_t rdi_1 = 0
        
        if (rax_3 s<= 0)
            goto label_1428df2e5
        
        while (true)
            sub_142898ea0(arg2[0xa], rdi_1)
            char* rax_5 = sub_1428f3c20(*arg2, arg2[3])
            
            if (rax_5 == 0)
                goto label_1428df2e5
            
            if (sub_1428f3ac0(*arg2, rax_5, 0, 0) != 0)
                sub_1428a6780(rax_5)
                break
            
            sub_1428a6780(rax_5)
            rdi_1 += 1
            
            if (rdi_1 s>= rax_3)
                goto label_1428df2e5
        
        goto label_1428df309
    
label_1428df2e5:
    sub_1428a5670(0x26, 0xb6, 0x84, "crypto\engine\eng_dyn.c", 0x19e)
    sub_1428f39b0(*arg2)
    *arg2 = 0

return 0
