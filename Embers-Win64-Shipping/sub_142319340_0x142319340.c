// 函数: sub_142319340
// 地址: 0x142319340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa8) == 0)
    sub_141ee69e0(arg1)

int64_t r14
r14.b = 0

if ((*(arg1 + 0x71c) & 2) != 0)
    int32_t var_e0 = arg4[1].d
    int32_t var_d0 = arg3[1].d
    int64_t var_e8 = *arg4
    int64_t var_d8 = *arg3
    return sub_141f1e580(arg1, arg2, &var_d8, &var_e8, arg5)

uint128_t zmm6 = 0x7f7fffff
uint128_t var_c8
memset(&var_c8, 0, 0x88)
int32_t i = 0
int32_t var_c0 = 0x3f800000

if (*(arg1 + 0x808) s> 0)
    void** rsi_1 = nullptr
    
    do
        void* rcx_2 = *(rsi_1 + *(arg1 + 0x800))
        
        if (rcx_2 != 0
                && sub_14221b950(rcx_2, &var_c8, arg3, arg4, *(arg5 + 0x10), *(arg5 + 0x13)) != 0)
            uint128_t zmm0_1 = var_c0
            r14.b = 1
            
            if (not(zmm6.d f<= zmm0_1.d))
                zmm6 = zmm0_1
                *arg2 = var_c8
                int128_t var_b8
                arg2[1] = var_b8
                uint128_t var_a8
                arg2[2] = var_a8
                int128_t var_98
                arg2[3] = var_98
                uint128_t var_88
                arg2[4] = var_88
                int128_t var_78
                arg2[5] = var_78
                uint128_t var_68
                arg2[6] = var_68
                int128_t var_58
                arg2[7] = var_58
                int64_t var_48
                arg2[8].q = var_48
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg1 + 0x808))

return zx.q(r14.b)
