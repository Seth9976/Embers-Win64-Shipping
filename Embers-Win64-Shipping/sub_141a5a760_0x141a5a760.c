// 函数: sub_141a5a760
// 地址: 0x141a5a760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141a52670() != arg1)
    int64_t* rcx = *(arg1 + 0x110)
    
    if (rcx != 0)
        void* rax_2 = (*(*rcx + 0x280))(rcx)
        uint128_t var_80 = *(arg1 + 0x90)
        int64_t rdi_1
        
        if (rax_2 != 0)
            rdi_1 = var_80.q
        
        if (rax_2 == 0 || rdi_1.b == 2)
            *arg2 = 0x3f800000
            arg2[1].d = 0
            arg2[2] = 0
            arg2[3] = 0
        else
            int64_t rbx_1 = *(rax_2 + 0x108)
            int64_t rdx_1 = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x108)
            uint128_t zmm6
            
            if (rdx_1.d != rbx_1.d || (rdx_1 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                zmm6.q = _mm_cvtepi32_pd(zx.q((rdx_1 u>> 0x20).d * rbx_1.d)).q
                    f/ _mm_cvtepi32_pd(zx.q((rbx_1 u>> 0x20).d * rdx_1.d))
            else
                zmm6 = 0x3ff0000000000000
            
            sub_141a53510(&var_80, arg1 + 0xe0, rax_2)
            int64_t rbx_4 = var_80.q
            int32_t var_9c = 0x3f800000
            int32_t arg_c = 0
            int32_t var_a8 = 0x3f800000
            float temp0_3 = _mm_cvtpd_ps(zmm6)
            int64_t rax_7 = 0
            
            if (rbx_4.b == 0)
                rax_7 = 4
            
            int32_t rbx_6 = (rbx_4 u>> 0x20).d + *(rax_7 + &data_14302eb88)
            int64_t rax_8 = 0
            
            if (rdi_1.b == 0)
                rax_8 = 4
            
            float var_b8 = temp0_3 f* *(arg1 + 0xf0)
            int64_t var_98_1 = neg.d(*(rax_8 + &data_14302eb88) + (rdi_1 u>> 0x20).d).q
            int32_t arg_8
            arg_8.q = 0
            int64_t var_b4_1 = 0
            arg_c = 0
            int64_t var_a4_1 = rbx_6.q
            float var_90[0x4]
            sub_141a359a0(&var_b8, sub_141a359a0(&var_90, &var_a8, &var_b8), &var_9c)
            
            if (*(arg1 + 0xe4) != 0)
                int64_t rax_17 = var_80:8.q
                arg_c = 0
                int64_t rcx_7 = 0
                
                if (rax_17.b == 1)
                    rcx_7 = 4
                
                var_9c = 0x3f800000
                int32_t arg_1c = (rax_17 u>> 0x20).d + *(rcx_7 + &data_14302eb90)
                int64_t var_98_2 = (*(arg1 + 0xec)).q
                int64_t* rax_22 = sub_141a359a0(&var_90, &var_9c, &var_b8)
                int64_t var_68_1 = 0x3f800000
                int32_t var_60_1 = 0
                int128_t* var_58 = nullptr
                zmm6 = zx.o(*rax_22)
                var_80:8.d = rax_22[1].d
                var_80:0xc.q = rbx_6.q
                int64_t var_50_1 = 1
                sub_1405c4d20(&var_58)
                int128_t* rcx_10 = var_58
                uint128_t zmm0_4
                zmm0_4.q = zmm6.q
                *rcx_10 = zmm0_4
                int32_t var_70
                rcx_10[1].d = var_70
                *arg2 = var_68_1
                arg2[1].d = var_60_1
                arg2[2] = rcx_10
                arg2[3].d = var_50_1.d
                *(arg2 + 0x1c) = var_50_1:4.d
            else
                *arg2 = var_b8.q
                arg2[1].d = var_b4_1:4.d
                arg2[2] = 0
                arg2[3] = 0
        
        return arg2

*arg2 = 0x3f800000
arg2[1].d = 0
arg2[2] = 0
arg2[3] = 0
return arg2
