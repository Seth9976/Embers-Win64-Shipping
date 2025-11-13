// 函数: sub_1420c7780
// 地址: 0x1420c7780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10

if (arg2 != 0)
    void* rcx = arg2[0x1a]
    
    if (rcx != 0 && sub_1423c1990(rcx, 0) == 2)
        sub_140d3a3a0(&arg1[0x10], arg2)
        int64_t r12 = 0
        arg1[0x12].b = arg3
        int64_t* var_c8 = nullptr
        int32_t var_bc = 0
        int32_t rsi
        
        if (arg2[0x1a] == 0)
            rsi = 0
        else
            char rax_3 = (*(*arg2 + 0x318))(arg2)
            void* rcx_3 = arg2[0x1a]
            
            if (rax_3 == 0)
                rsi = *(rcx_3 + 0x20)
            else
                rsi = sub_1423c1c80(rcx_3)
        
        int32_t r15 = rsi - 0xb
        
        if (r15 s<= 0)
            r15 = 0
        
        int32_t result_1 = rsi - r15
        arg1[2] = result_1
        
        if (result_1 s> 0)
            sub_1405a4d70(&var_c8)
        
        memset(var_c8, 0, sx.q(result_1) << 3)
        int128_t zmm6
        int128_t zmm7
        int128_t zmm8
        int128_t zmm9
        zmm6, zmm7, zmm8, zmm9 = sub_1423c19f0(arg2, r15, var_c8)
        int32_t* rax_5 = arg2[0x1a]
        int32_t r8_3
        int32_t r9
        
        if (rax_5 == 0)
            r9 = 0
            r8_3 = 0
        else
            r9 = rax_5[1]
            r8_3 = *rax_5
        
        char rcx_7 = r15.b
        *arg1 = ((r8_3 - 1) s>> rcx_7) + 1
        arg1[1] = ((r9 - 1) s>> rcx_7) + 1
        char rcx_9 = (arg1[2]).b - 1
        int32_t r9_6 = (((((r9 - 1) s>> rcx_7) + 1) * (((r8_3 - 1) s>> rcx_7) + 1)) << 2)
            - (((r9 - 1) s>> rcx_7 s>> rcx_9) + 1) * (((r8_3 - 1) s>> rcx_7 s>> rcx_9) + 1)
        int32_t rdx_8 = r9_6 s/ 3
        int32_t rax_11 = arg1[0xe]
        
        if (rdx_8 s> rax_11)
            arg1[0xe] = rdx_8
            
            if (rdx_8 s> arg1[0xf])
                sub_1406105e0(&arg1[0xc])
        else if (rdx_8 s< rax_11 && rdx_8 != rax_11)
            arg1[0xe] = rdx_8
            sub_1405dac90(&arg1[0xc])
        
        int32_t i = 0
        
        if (arg1[2] s> 0)
            int64_t* r15_1 = var_c8
            
            do
                int32_t rdx_10 = arg1[1]
                char rcx_12 = i.b
                int32_t r10_1 = *arg1
                int32_t r9_10 = (((r10_1 - 1) s>> rcx_12) + 1) * (((rdx_10 - 1) s>> rcx_12) + 1)
                memcpy(*(arg1 + 0x30) + (sx.q(((r10_1 * rdx_10 - r9_10) << 2) s/ 3) << 2), *r15_1, 
                    r9_10 << 2)
                i += 1
                r15_1 = &r15_1[1]
            while (i s< arg1[2])
        
        void* rdi_1 = &arg1[4]
        int32_t rcx_15 = *(rdi_1 + 8)
        int32_t rax_19 = arg1[1] + 1
        
        if (rax_19 s> rcx_15)
            *(rdi_1 + 8) = rax_19
            
            if (rax_19 s> *(rdi_1 + 0xc))
                sub_1406105e0(rdi_1)
        else if (rax_19 s< rcx_15 && rax_19 != rcx_15)
            *(rdi_1 + 8) = rax_19
            sub_1405dac90(rdi_1)
        
        void* r11 = &arg1[8]
        int32_t rcx_18 = *(r11 + 8)
        int32_t rax_22 = (*arg1 + 1) * arg1[1]
        
        if (rax_22 s> rcx_18)
            *(r11 + 8) = rax_22
            
            if (rax_22 s> *(r11 + 0xc))
                sub_1406105e0(r11)
                r11 = &arg1[8]
        else if (rax_22 s< rcx_18 && rax_22 != rcx_18)
            *(r11 + 8) = rax_22
            sub_1405dac90(r11)
            r11 = &arg1[8]
        
        **rdi_1 = 0
        
        if (arg1[1] s>= 1)
            int128_t var_48_1 = zmm6
            int32_t* r10_5 = 4
            int32_t r9_11 = 0
            int128_t var_58_1 = zmm7
            int128_t var_68_1 = zmm8
            int128_t var_78_1 = zmm9
            int32_t* var_d8_1 = 4
            int32_t arg_20 = 0
            
            do
                int32_t rdx_16 = *arg1
                int32_t rsi_1 = 1
                int64_t r8_9 = *var_c8 + (sx.q(r9_11 * rdx_16) << 2)
                int64_t rcx_22 = sx.q((rdx_16 + 1) * r9_11)
                int64_t rax_30 = *r11
                *(rax_30 + (rcx_22 << 2)) = 0
                float* rcx_23 = rax_30 + (rcx_22 << 2)
                int32_t rax_31 = *arg1
                uint128_t zmm0_1
                
                if (rax_31 s>= 1)
                    uint32_t r15_2 = zx.d(arg3)
                    float* rdi_2 = rcx_23
                    
                    do
                        arg_10.d = *(r8_9 - rcx_23 + rdi_2)
                        char rax_33 = sub_140d3e110(&arg1[0x10])
                        void* rax_34
                        
                        if (rax_33 != 0)
                            rax_34 = sub_140d3c6e0(&arg1[0x10])
                        
                        int32_t* rax_35
                        uint128_t zmm1_1
                        void var_98
                        
                        if (rax_33 == 0 || (*(rax_34 + 0x60) & 1) == 0)
                            uint32_t rax_37 = zx.d(arg_10:1.b)
                            zmm0_1 = _mm_cvtepi32_ps(zx.o(arg_10:2.b))
                            uint32_t rax_38 = zx.d(arg_10.b)
                            zmm0_1.d = zmm0_1.d f* 0.00392156886f
                            zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_37)).d f* 0.00392156886f
                            int32_t var_a8 = zmm0_1.d
                            uint32_t rax_39 = zx.d(arg_10:3.b)
                            int32_t var_a4_1 = zmm1_1.d
                            rax_35 = &var_a8
                            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_38)).d f* 0.00392156886f
                            zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_39)).d f* 0.00392156886f
                            int32_t var_a0_1 = zmm0_1.d
                            int32_t var_9c_1 = zmm1_1.d
                        else
                            rax_35 = sub_140acc920(&var_98, &arg_10)
                        uint128_t var_b8_1 = *rax_35
                        float zmm2_1
                        
                        if (arg3 == 0)
                            zmm0_1.d = var_b8_1:4.d.d f* 0.589999974f
                            zmm1_1.d = var_b8_1:8.d.d f* 0.109999999f
                            zmm2_1 = var_b8_1.d * 0.300000012f f+ zmm0_1.d f+ zmm1_1.d
                        else if (r15_2 == 1)
                            zmm2_1 = var_b8_1.d
                        else if (r15_2 == 2)
                            zmm2_1 = var_b8_1:4.d
                        else if (r15_2 == 3)
                            zmm2_1 = var_b8_1:8.d
                        else if (r15_2 == 4)
                            zmm2_1 = var_b8_1:0xc.d
                        else
                            zmm2_1 = 1f
                        
                        rsi_1 += 1
                        rdi_2[1] = zmm2_1 + *rdi_2
                        rdi_2 = &rdi_2[1]
                        rax_31 = *arg1
                    while (rsi_1 s<= rax_31)
                    
                    r9_11 = arg_20
                    rdi_1 = &arg1[4]
                    r10_5 = var_d8_1
                    r11 = &arg1[8]
                    r12 = 0
                
                int64_t rcx_31 = *rdi_1
                r9_11 += 1
                arg_20 = r9_11
                zmm0_1.d = rcx_23[sx.q(rax_31)].d f+ *(rcx_31 + r10_5 - 4)
                *(r10_5 + rcx_31) = zmm0_1.d
                r10_5 = &r10_5[1]
                var_d8_1 = r10_5
            while (r9_11 + 1 s<= arg1[1])
        
        int64_t* rsi_2 = var_c8
        int64_t result = sx.q(result_1)
        int64_t* rbx_1 = rsi_2
        void* rcx_32 = &rsi_2[result]
        uint64_t rdi_6 = (rcx_32 - rsi_2 + 7) u>> 3
        
        if (rsi_2 u> rcx_32)
            rdi_6 = 0
        
        if (rdi_6 != 0)
            do
                result = sub_140a74f90(*rbx_1)
                r12 += 1
                rbx_1 = &rbx_1[1]
            while (r12 != rdi_6)
        
        if (rsi_2 == 0)
            return result
        
        return sub_140a74f90(rsi_2)

sub_140d3a3a0(&arg_10, nullptr)
*(arg1 + 0x40) = arg_10
arg_10 = 0
return sub_140d23f50(u"Importance Texture only supports RGBA8 textures", 2) __tailcall
