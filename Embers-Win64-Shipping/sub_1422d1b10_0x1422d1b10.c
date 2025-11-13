// 函数: sub_1422d1b10
// 地址: 0x1422d1b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
int32_t rsi = arg4
int64_t r11 = arg3
int64_t r10 = arg1

if (arg4 s< arg7)
    while ((*(arg2 + 0x29) & 1) == 0)
        int64_t* rdi_3 = (sx.q(rsi) << 5) + *(r10 + 0x38)
        int64_t* var_68
        char* var_60
        int32_t var_58
        int64_t* var_50
        int64_t var_48
        
        if (*(rdi_3 + 0x1c) == 0)
            var_48 = arg13
            var_50 = arg12
            var_58 = arg11 + 1
            var_60 = arg9
            var_68 = sx.q(*(rdi_3 + 0xc)) + arg8
            result, arg5 = sub_1422d1920(r10, arg2, r11, rsi, arg5, arg6, var_68, var_60, var_58, 
                var_50, var_48)
            rsi = zx.d(rdi_3[1].w) - 1
        else if (data_143a2fd9c == 0 || (arg2[5].b & 2) == 0 || (*(rdi_3 + 0x1d) & 1) == 0)
        label_1422d1c3c:
            data_143f4cf48 += 1
            int64_t* rcx_8 = *rdi_3
            var_68 = nullptr
            result = (*(*rcx_8 + 0x90))(rcx_8, arg2, r11, sx.q(*(rdi_3 + 0xc)) + arg8, 0, var_60, 
                var_58, var_50, var_48)
            
            if (result == 0)
                *arg9 = 1
        else
            void* rax_2 = *arg12
            void* r8_3 = (sx.q(arg12[1].d) << 5) + rax_2
            
            if (rax_2 == r8_3)
                goto label_1422d1c3c
            
            while (((*(rax_2 + 0xc) ^ (*(rdi_3 + 0xc) + arg8.d)) | (*(rax_2 + 4) ^ arg10)
                    | (*(rax_2 + 8) ^ arg11) | (*rax_2 ^ rsi)) != 0)
                rax_2 += 0x20
                
                if (rax_2 == r8_3)
                    goto label_1422d1c3c
            
            if (rax_2 == 0)
                goto label_1422d1c3c
            
            data_143f4cf44 += 1
            result = (*(*arg2 + 0x208))(arg2, *(arg12[2] + 0x90), zx.q(*(rax_2 + 0x18)), 
                sx.q(*(rax_2 + 0x1c)), var_68, var_60, var_58, var_50, var_48)
        r10 = arg1
        rsi += 1
        r11 = arg3
        
        if (rsi s>= arg7)
            break

return result
