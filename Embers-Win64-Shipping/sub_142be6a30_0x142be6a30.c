// 函数: sub_142be6a30
// 地址: 0x142be6a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_b8 = 0

if (arg2 s>= 0 && arg3 s>= 0)
    if (arg9 != 0)
    label_142be6aba:
        void var_78
        sub_142b96970(&var_78, arg7, arg8)
        void* rax_5 = png_create_read_struct("1.5.2", &var_b8, sub_142be7080, sub_140594850)
        void* var_b0 = rax_5
        
        if (rax_5 == 0)
            return 0x40
        
        int32_t* rax_7 = png_create_info_struct(rax_5)
        int32_t* var_98 = rax_7
        
        if (rax_7 == 0)
            var_b8 = 0x40
            png_destroy_read_struct(&var_b0, nullptr, nullptr)
            return zx.q(var_b8)
        
        void var_108
        
        if (__intrinsic_setjmp(png_set_longjmp_fn(var_b0, longjmp, 0x100), &var_108) != 0)
            var_b8 = 3
        else
            png_set_read_fn(var_b0, &var_78, sub_142be7d40)
            png_read_info(var_b0, var_98)
            uint32_t var_a8
            int32_t var_a4
            uint32_t var_a0
            uint32_t var_90
            int32_t var_8c
            png_get_IHDR(var_b0, var_98, &var_8c, &var_a4, &var_a0, &var_a8, &var_90, nullptr, 
                nullptr)
            
            if (var_b8 == 0)
                int32_t r8_2 = var_a4
                int32_t rdx_6 = var_8c
                
                if (arg9 != 0)
                label_142be6bfa:
                    
                    if (arg9 == 0)
                    label_142be6c42:
                        uint32_t rax_17 = var_a8
                        
                        if (rax_17 == 3)
                            png_set_expand(var_b0)
                            rax_17 = var_a8
                        
                        if (rax_17 == 0)
                            png_set_expand_gray_1_2_4_to_8(var_b0)
                        
                        if (png_get_valid(var_b0, var_98, 0x10) != 0)
                            png_set_tRNS_to_alpha(var_b0)
                        
                        uint32_t rax_19 = var_a0
                        
                        if (rax_19 == 0x10)
                            png_set_strip_16(var_b0)
                            rax_19 = var_a0
                        
                        if (rax_19 s< 8)
                            png_set_packing(var_b0)
                        
                        if ((var_a8 & 0xfffffffb) == 0)
                            png_set_gray_to_rgb(var_b0)
                        
                        if (var_90 != 0)
                            png_set_interlace_handling(var_b0)
                        
                        png_set_filler(var_b0, 0xff, 1)
                        png_read_update_info(var_b0, var_98)
                        png_get_IHDR(var_b0, var_98, &var_8c, &var_a4, &var_a0, &var_a8, &var_90, 
                            nullptr, nullptr)
                        
                        if (var_a0 != 8)
                            var_b8 = 3
                        else
                            uint32_t rcx_21 = var_a8
                            
                            if (((rcx_21 - 2) & 0xfffffffb) != 0)
                                var_b8 = 3
                            else if (arg10 == 0)
                                void (* rdx_10)(int64_t arg1, void* arg2, int64_t arg3) =
                                    sub_142be7c80
                                
                                if (rcx_21 == 2)
                                    rdx_10 = sub_142be7040
                                
                                png_set_read_user_transform_fn(var_b0, rdx_10)
                                
                                if (arg9 == 0)
                                label_142be6dad:
                                    void* rax_22 = sub_142b99a90(arg6, 8, 0, var_a4, 0, &var_b8)
                                    
                                    if (var_b8 == 0)
                                        if (var_a4 s> 0)
                                            void* r8_4 = rax_22
                                            
                                            do
                                                int32_t rax_25 = rbx + arg3
                                                rbx += 1
                                                r8_4 += 8
                                                *(r8_4 - 8) = sx.q(rax_25 * *(arg1 + 0x70))
                                                    + *(arg1 + 0x78) + sx.q(arg2 << 2)
                                            while (rbx s< var_a4)
                                        
                                        png_read_image(var_b0, rax_22)
                                        sub_142b99980(arg6, rax_22)
                                        png_read_end(var_b0, var_98)
                                    else
                                        var_b8 = 0x40
                                else
                                    int32_t rax_21 =
                                        sub_142b98ac0(arg1, *(arg1 + 0x70) * *(arg1 + 0x68))
                                    var_b8 = rax_21
                                    
                                    if (rax_21 == 0)
                                        goto label_142be6dad
                    else
                        *arg5 = r8_2.w
                        arg5[1] = rdx_6.w
                        *(arg1 + 0x6c) = zx.d(rdx_6.w)
                        *(arg1 + 0x68) = zx.d(*arg5)
                        *(arg1 + 0x82) = 7
                        *(arg1 + 0x70) = *(arg1 + 0x6c) << 2
                        *(arg1 + 0x80) = 0x100
                        
                        if (*(arg1 + 0x68) u<= 0x7fff && *(arg1 + 0x6c) u<= 0x7fff)
                            goto label_142be6c42
                        
                        var_b8 = 0xa
                else if (rdx_6 == zx.d(arg5[1]) && r8_2 == zx.d(*arg5))
                    goto label_142be6bfa
        
        png_destroy_read_struct(&var_b0, &var_98, nullptr)
        sub_142b964e0(&var_78)
        return zx.q(var_b8)
    
    if (zx.d(arg5[1]) + arg2 u<= *(arg1 + 0x6c) && zx.d(*arg5) + arg3 u<= *(arg1 + 0x68)
            && arg4 == 0x20 && *(arg1 + 0x82) == 7)
        goto label_142be6aba

return 6
