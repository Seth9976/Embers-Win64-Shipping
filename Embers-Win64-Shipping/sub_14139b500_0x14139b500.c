// 函数: sub_14139b500
// 地址: 0x14139b500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
char rdi = arg3
sub_141096650(arg2)
int32_t rbx = (*U"1111")[sx.q(*(arg1 + 0x3d0))]
int32_t var_1b8 = rbx
char result = sub_1419a4830(rbx)

if (result == 0)
    int64_t var_148 = 0
    int32_t var_140_1 = 0
    int16_t var_138_1 = 0
    int64_t var_130_1 = 0
    int32_t var_128_1 = 0
    int16_t var_120_1 = 0
    int64_t var_118_1 = 0
    int32_t var_110_1 = 0
    int16_t var_108_1 = 0
    int64_t var_100_1 = 0
    int32_t var_f8_1 = 0
    int16_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    int32_t var_e0_1 = 0
    int16_t var_d8_1 = 0
    int64_t var_d0_1 = 0
    int32_t var_c8_1 = 0
    int16_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    int32_t var_b0_1 = 0
    int16_t var_a8_1 = 0
    int64_t var_a0_1 = 0
    int32_t var_98_1 = 0
    int16_t var_90_1 = 0
    int32_t var_1b4 = 0xffffffff
    int32_t var_13c_1 = 0xffffffff
    int32_t var_124_1 = 0xffffffff
    int32_t var_10c_1 = 0xffffffff
    int32_t var_f4_1 = 0xffffffff
    int32_t var_dc_1 = 0xffffffff
    int32_t var_c4_1 = 0xffffffff
    int32_t var_ac_1 = 0xffffffff
    int32_t var_94_1 = 0xffffffff
    int64_t* var_1a8
    int64_t* var_88[0x8]
    int32_t rax_3 = sub_14139cd20(arg1, &var_88, &var_1b4, &var_1a8)
    int64_t r12_1 = sx.q(rax_3)
    
    if (rax_3 s> 0)
        int64_t rdx_1 = 0
        int64_t* r8_1 = &var_148
        
        do
            int64_t* rax_4 = var_88[rdx_1]
            r8_1 = &r8_1[3]
            int32_t var_168_1 = 0
            rdx_1 += 1
            int32_t var_164_1 = 0xffffffff
            *(r8_1 - 0x18) = (*(*rax_4 + 8)).o
            r8_1[-1] = 0x101.q
        while (rdx_1 s< r12_1)
    
    int128_t var_1a0_1 = data_142d57d10
    int128_t zmm0_1 = data_142d57920
    uint128_t var_190_1 = data_142d3f800
    uint64_t r15_1 = zx.q(sub_1410a09e0(rbx))
    uint64_t r14_1 = zx.q(r15_1.d)
    
    if (r15_1 s< r12_1)
        int32_t rdi_1 = var_1b4
        void* r12_2 = &(&var_148)[r15_1 * 3]
        
        do
            if (r15_1.d != rdi_1 || not(test_bit(data_143f13cc8, zx.q(rbx))))
                int64_t* rcx_6 = *r12_2
                void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                var_1a8 = rcx_6
                void* rax_9 = &rbx_3[0xa]
                
                if (rax_9 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x58)
                    rcx_6 = var_1a8
                    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_9 = &rbx_3[0xa]
                
                *(arg2 + 0x30) = rax_9
                int64_t* rax_10 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_10 = rbx_3
                *(arg2 + 8) = &rbx_3[1]
                rbx_3[1] = 0
                *rbx_3 = &data_142d56628
                rbx_3[2].d = var_1a0_1.d
                __builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
                *(rbx_3 + 0x34) = zmm0_1:4.d
                rbx_3[7].d = zmm0_1:8.d
                *(rbx_3 + 0x3c) = zmm0_1:0xc.d
                rbx_3[8] = rcx_6
                rbx_3[9] = rcx_6
                
                if ((*(*rcx_6 + 8))() == 0)
                    int64_t* rcx_8 = rbx_3[8]
                    
                    if ((*(*rcx_8 + 0x18))(rcx_8) == 0)
                        int64_t* rcx_9 = rbx_3[8]
                        
                        if ((*(*rcx_9 + 0x20))(rcx_9) == 0)
                            int64_t* rcx_10 = rbx_3[8]
                            (*(*rcx_10 + 0x10))(rcx_10)
                
                int64_t* rcx_11 = rbx_3[9]
                
                if ((*(*rcx_11 + 8))(rcx_11) == 0)
                    int64_t* rcx_12 = rbx_3[9]
                    
                    if ((*(*rcx_12 + 0x18))(rcx_12) == 0)
                        int64_t* rcx_13 = rbx_3[9]
                        
                        if ((*(*rcx_13 + 0x20))(rcx_13) == 0)
                            int64_t* rcx_14 = rbx_3[9]
                            (*(*rcx_14 + 0x10))(rcx_14)
                
                rbx = var_1b8
            
            r15_1 = zx.q(r15_1.d + 1)
            r14_1 += 1
            r12_2 += 0x18
        while (r14_1 s< r12_1)
        
        rdi = arg3
    
    void* rax_30 = *(arg1 + 0x40)
    int32_t rbx_6 = 0
    *(arg1 + 0x408) = 0xffffffff
    int64_t rsi_1 = *(rax_30 + 8)
    
    if ((rdi & 0xf0) == 0x20)
        rbx_6 = 0x10
    
    int32_t rax_32
    rax_32.b = (rdi & 0xf) == 2
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_33 = &rcx_17[4]
    
    if (rax_33 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x28)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_33 = &rcx_17[4]
    
    *(arg2 + 0x30) = rax_33
    int64_t* rax_34 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_34 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    result = -0x18
    *rcx_17 = &data_142f115e8
    rcx_17[2].d = rbx_6 | rax_32
    rcx_17[3] = rsi_1

__security_check_cookie(rax_1 ^ &var_1d8)
return result
