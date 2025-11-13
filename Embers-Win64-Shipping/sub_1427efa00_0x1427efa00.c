// 函数: sub_1427efa00
// 地址: 0x1427efa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg8
int64_t* r14 = arg1
*arg11 = 0
*arg10 = 0xffffffff

if (rbx != 0)
    __builtin_memset(arg7, 0xffffffff, zx.q(rbx) << 2)

int32_t r13 = 0
int32_t rax_3 = (*(*r14 + 0xc8))(r14)
int32_t r12 = 0

if (rax_3 != 0)
    do
        int64_t rax_4 = *r14
        int64_t* var_1a8 = nullptr
        int32_t var_1e8
        void** const* var_1e0
        int16_t* var_1d8
        int64_t* var_1d0
        int64_t var_1c8
        int64_t var_1c0
        int32_t var_1b8
        (*(rax_4 + 0xd0))(r14, &var_1a8, 1, zx.q(r12), var_1e8, var_1e0, var_1d8, var_1d0, var_1c8, 
            var_1c0, var_1b8)
        float var_c8[0x8]
        int32_t zmm6_1
        int32_t zmm7_1
        arg4, zmm6_1, zmm7_1 = sub_141ecfe50(&var_c8, var_1a8, r14, arg4)
        int64_t var_190_1 = 0
        int64_t var_198 = 0
        char var_186_1 = 0
        int16_t var_188_1 = arg12[1].w
        int128_t* rax_10
        
        if ((*(arg12 + 0xc) | *(arg12 + 8) | *(arg12 + 4) | *arg12) == 0)
            int64_t* rcx_5 = var_1a8
            void var_a8
            rax_10 = (*(*rcx_5 + 0xb0))(rcx_5, &var_a8)
        else
            int128_t var_118
            rax_10 = &var_118
            var_118 = *arg12
        
        int64_t* rcx_6 = var_1a8
        var_198.o = *rax_10
        void var_98
        (*(*rcx_6 + 0x40))(rcx_6, &var_98)
        int32_t var_d4_1 = 0x7f7fffff
        int16_t var_f0_1 = 0
        int128_t var_108 = zx.o(0)
        int32_t var_ec
        __builtin_memset(&var_ec, 0, 0x18)
        int32_t var_f8_1 = 0xffffffff
        int32_t rdi_3 = rbx - r13
        int128_t* rax_13
        int32_t rcx_7
        
        if (rbx != r13)
            rcx_7 = rdi_3
            rax_13 = (sx.q(r13) << 6) + arg6
        else
            rcx_7 = 1
            rax_13 = &var_108
        
        int128_t zmm0_1 = data_142fc5a80
        int64_t var_170_1 = 0
        int64_t var_168_1 = 0
        int16_t var_158_1 = 0
        int64_t var_154_1 = 0
        int32_t var_14c_1 = 0
        char var_130_1 = 0
        int32_t i_5 = 0
        var_1b8 = zmm7_1
        var_1c0 = arg14
        var_1c8 = arg13
        var_1d0 = &var_198
        int128_t* var_128_1 = rax_13
        int16_t arg_20
        var_1d8 = &arg_20
        void** const var_178 = &data_14325a568
        var_1e0 = &var_178
        int32_t var_120_1 = rcx_7
        arg_20 = *arg5
        int32_t var_160_1 = 0xffffffff
        var_1e8 = zmm6_1
        (*(*arg2 + 0x2f8))(arg2, &var_98, &var_c8, arg3, var_1e8, var_1e0, var_1d8, var_1d0, 
            var_1c8, var_1c0, var_1b8)
        uint64_t i_4 = zx.q(i_5)
        *arg11 |= i_4.d u>= rdi_3
        
        if (rdi_3 == 0)
            i_4 = 0
        else if (i_4.d != 0)
            int32_t rcx_10 = r13
            uint64_t i_2 = i_4
            uint64_t i
            
            do
                if (rcx_10 u< rbx)
                    *(arg7 + (zx.q(rcx_10) << 2)) = r12
                
                rcx_10 += 1
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        if (var_130_1 != 0)
            arg4 = zmm0_1:0xc.d
            
            if (*arg10 == 0xffffffff || not(arg4.d f>= *(arg9 + 0x34)))
                *arg10 = r12
                *arg9 = var_170_1.o
                arg9[1].q = var_160_1.q
                *(arg9 + 0x18) = var_158_1
                *(arg9 + 0x1c) = var_154_1.o
                *(arg9 + 0x2c) = zmm0_1:4.d.d
                arg9[3].d = zmm0_1:8.d.d
                *(arg9 + 0x34) = arg4.d
                int32_t var_138
                *(arg9 + 0x38) = var_138
            
            int64_t r8_2 = sx.q(r13 - 1)
            
            if (r13 - 1 s>= 0)
                if (r8_2 + 1 s>= 4)
                    uint64_t i_3 = (r8_2 + 1) u>> 2
                    int32_t* rdi_5 = arg6 - 0x1c + (r8_2 << 6)
                    int64_t r14_1 = sx.q(r13)
                    int64_t r11_1 = sx.q(i_4.d)
                    void* r10_2 = arg7 - 8 + (r8_2 << 2)
                    r8_2 -= i_3 << 2
                    uint64_t i_1
                    
                    do
                        if (not(arg4.d f>= rdi_5[0x14]))
                            int64_t rdx_7 = r14_1 + r11_1
                            i_4 = zx.q(i_4.d - 1)
                            int128_t* rcx_14 = ((rdx_7 - 1) << 6) + arg6
                            r11_1 -= 1
                            *(rdi_5 + 0x1c) = *rcx_14
                            *(rdi_5 + 0x2c) = rcx_14[1].q
                            rdi_5[0xd].w = *(rcx_14 + 0x18)
                            rdi_5[0xe] = *(rcx_14 + 0x1c)
                            rdi_5[0xf] = rcx_14[2].d
                            rdi_5[0x10] = *(rcx_14 + 0x24)
                            rdi_5[0x11] = *(rcx_14 + 0x28)
                            rdi_5[0x12] = *(rcx_14 + 0x2c)
                            rdi_5[0x13] = rcx_14[3].d
                            rdi_5[0x14] = *(rcx_14 + 0x34)
                            rdi_5[0x15] = *(rcx_14 + 0x38)
                            arg4 = zmm0_1:0xc.d
                            *(r10_2 + 8) = *(arg7 + (rdx_7 << 2) - 4)
                        
                        if (not(arg4.d f>= rdi_5[4]))
                            int64_t rdx_8 = r14_1 + r11_1
                            i_4 = zx.q(i_4.d - 1)
                            int128_t* rcx_17 = ((rdx_8 - 1) << 6) + arg6
                            r11_1 -= 1
                            *(rdi_5 - 0x24) = *rcx_17
                            *(rdi_5 - 0x14) = rcx_17[1].q
                            rdi_5[-3].w = *(rcx_17 + 0x18)
                            rdi_5[-2] = *(rcx_17 + 0x1c)
                            rdi_5[-1] = rcx_17[2].d
                            *rdi_5 = *(rcx_17 + 0x24)
                            rdi_5[1] = *(rcx_17 + 0x28)
                            rdi_5[2] = *(rcx_17 + 0x2c)
                            rdi_5[3] = rcx_17[3].d
                            rdi_5[4] = *(rcx_17 + 0x34)
                            rdi_5[5] = *(rcx_17 + 0x38)
                            arg4 = zmm0_1:0xc.d
                            *(r10_2 + 4) = *(arg7 + (rdx_8 << 2) - 4)
                        
                        if (not(arg4.d f>= rdi_5[-0xc]))
                            int64_t rdx_9 = r14_1 + r11_1
                            i_4 = zx.q(i_4.d - 1)
                            int128_t* rcx_20 = ((rdx_9 - 1) << 6) + arg6
                            r11_1 -= 1
                            *(rdi_5 - 0x64) = *rcx_20
                            *(rdi_5 - 0x54) = rcx_20[1].q
                            rdi_5[-0x13].w = *(rcx_20 + 0x18)
                            rdi_5[-0x12] = *(rcx_20 + 0x1c)
                            rdi_5[-0x11] = rcx_20[2].d
                            rdi_5[-0x10] = *(rcx_20 + 0x24)
                            rdi_5[-0xf] = *(rcx_20 + 0x28)
                            rdi_5[-0xe] = *(rcx_20 + 0x2c)
                            rdi_5[-0xd] = rcx_20[3].d
                            rdi_5[-0xc] = *(rcx_20 + 0x34)
                            rdi_5[-0xb] = *(rcx_20 + 0x38)
                            arg4 = zmm0_1:0xc.d
                            *r10_2 = *(arg7 + (rdx_9 << 2) - 4)
                        
                        if (not(arg4.d f>= rdi_5[-0x1c]))
                            int64_t rdx_10 = r14_1 + r11_1
                            i_4 = zx.q(i_4.d - 1)
                            int128_t* rcx_23 = ((rdx_10 - 1) << 6) + arg6
                            r11_1 -= 1
                            *(rdi_5 - 0xa4) = *rcx_23
                            *(rdi_5 - 0x94) = rcx_23[1].q
                            rdi_5[-0x23].w = *(rcx_23 + 0x18)
                            rdi_5[-0x22] = *(rcx_23 + 0x1c)
                            rdi_5[-0x21] = rcx_23[2].d
                            rdi_5[-0x20] = *(rcx_23 + 0x24)
                            rdi_5[-0x1f] = *(rcx_23 + 0x28)
                            rdi_5[-0x1e] = *(rcx_23 + 0x2c)
                            rdi_5[-0x1d] = rcx_23[3].d
                            rdi_5[-0x1c] = *(rcx_23 + 0x34)
                            rdi_5[-0x1b] = *(rcx_23 + 0x38)
                            arg4 = zmm0_1:0xc.d
                            *(r10_2 - 4) = *(arg7 + (rdx_10 << 2) - 4)
                        
                        r10_2 -= 0x10
                        rdi_5 -= 0x100
                        i_1 = i_3
                        i_3 -= 1
                    while (i_1 != 1)
                    r14 = arg1
                
                if (r8_2 s>= 0)
                    void* rdi_7 = arg6 + 0x24 + (r8_2 << 6)
                    int64_t r10_3 = sx.q(i_4.d)
                    int64_t temp2_1
                    
                    do
                        if (not(arg4.d f>= *(rdi_7 + 0x10)))
                            int64_t rdx_11 = sx.q(r13) + r10_3
                            i_4 = zx.q(i_4.d - 1)
                            void* rcx_26 = ((rdx_11 - 1) << 6) + arg6
                            r10_3 -= 1
                            *(rdi_7 - 0x24) = *rcx_26
                            *(rdi_7 - 0x14) = *(rcx_26 + 0x10)
                            *(rdi_7 - 0xc) = *(rcx_26 + 0x18)
                            *(rdi_7 - 8) = *(rcx_26 + 0x1c)
                            *(rdi_7 - 4) = *(rcx_26 + 0x20)
                            *rdi_7 = *(rcx_26 + 0x24)
                            *(rdi_7 + 4) = *(rcx_26 + 0x28)
                            *(rdi_7 + 8) = *(rcx_26 + 0x2c)
                            *(rdi_7 + 0xc) = *(rcx_26 + 0x30)
                            *(rdi_7 + 0x10) = *(rcx_26 + 0x34)
                            *(rdi_7 + 0x14) = *(rcx_26 + 0x38)
                            arg4 = zmm0_1:0xc.d
                            *(arg7 + (r8_2 << 2)) = *(arg7 + (rdx_11 << 2) - 4)
                        
                        rdi_7 -= 0x40
                        temp2_1 = r8_2
                        r8_2 -= 1
                    while (temp2_1 - 1 s>= 0)
                
                rbx = arg8
        
        r12 += 1
        r13 += i_4.d
    while (r12 u< rax_3)

return zx.q(r13)
