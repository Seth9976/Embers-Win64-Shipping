// 函数: sub_14231fe20
// 地址: 0x14231fe20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0

if ((*(arg1 + 0x71c) & 2) != 0)
    int32_t var_d0 = arg4[1].d
    int32_t var_c0 = arg3[1].d
    int64_t var_d8 = *arg4
    int64_t var_c8 = *arg3
    return sub_141f28450(arg1, arg2, &var_c8, &var_d8, arg5, arg6, arg7)

uint128_t var_b8
memset(&var_b8, 0, 0x88)
int32_t i = 0
int32_t var_b0 = 0x3f800000

if (*(arg1 + 0x808) s> 0)
    int32_t** r14_1 = nullptr
    
    do
        int32_t* rcx_1 = *(r14_1 + *(arg1 + 0x800))
        
        if (rcx_1 != 0)
            char var_e8_2 = arg7
            int64_t var_f0_2 = arg6
            
            if (sub_142225740(rcx_1, &var_b8, arg3, arg4, arg5) != 0)
                if (rdi.b == 0 || not(var_b0.d f>= *(arg2 + 8)))
                    *arg2 = var_b8
                    int128_t var_a8
                    arg2[1] = var_a8
                    uint128_t var_98
                    arg2[2] = var_98
                    int128_t var_88
                    arg2[3] = var_88
                    uint128_t var_78
                    arg2[4] = var_78
                    int128_t var_68
                    arg2[5] = var_68
                    uint128_t var_58
                    arg2[6] = var_58
                    int128_t var_48
                    arg2[7] = var_48
                    int64_t var_38
                    arg2[8].q = var_38
                
                rdi.b = 1
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x808))

return zx.q(rdi.b)
