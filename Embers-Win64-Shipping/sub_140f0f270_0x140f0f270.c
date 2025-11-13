// 函数: sub_140f0f270
// 地址: 0x140f0f270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1[5]
int32_t r13 = arg6
void* rbx = arg3
int64_t rdi = arg2
int128_t zmm11
zmm11.d = 1f f/ *(arg3 + 8)
int64_t* rsi = arg1
int32_t var_118 = r13
void* rax_2 = sx.q(arg1[6].d) * 0x58 + r15
int32_t rbp = r13

if (r15 != rax_2)
    int32_t* r14_1 = r15 + 0x3c
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int32_t* var_110_1 = r14_1
    
    do
        zmm9.d = zmm11.d f* r14_1[-3]
        zmm10.d = zmm11.d f* r14_1[-2]
        zmm8.d = zmm11.d f* r14_1[-1]
        zmm7.d = zmm11.d f* *r14_1
        float zmm1 = zmm9.d f* *(rbx + 0x1c)
        zmm8.d = zmm8.d f+ zmm9.d
        float zmm0 = zmm10.d f* *(rbx + 0x24)
        zmm7.d = zmm7.d f+ zmm10.d
        zmm8.d = zmm8.d f- zmm9.d
        zmm9.d = zmm9.d f* *(rbx + 0x20)
        zmm7.d = zmm7.d f- zmm10.d
        zmm10.d = zmm10.d f* *(rbx + 0x28)
        float zmm5 = zmm8.d
        zmm8.d = zmm8.d f* *(rbx + 0x20)
        zmm10.d = zmm10.d f+ zmm9.d
        zmm6 = zmm7
        zmm7.d = zmm7.d f* *(rbx + 0x28)
        int32_t var_dc_1 = zmm8.d
        zmm10.d = zmm10.d f+ *(rbx + 0x30)
        zmm6.d = zmm6.d f* *(rbx + 0x24)
        float var_e0_1 = zmm5 f* *(rbx + 0x1c)
        int32_t var_e4_1 = zmm10.d
        float var_e8 = zmm1 + zmm0 f+ *(rbx + 0x2c)
        int32_t var_d8_1 = zmm6.d
        int32_t var_d4_1 = zmm7.d
        float var_108
        sub_140dbe170(&var_e8, &var_108)
        float var_104
        float var_100
        float var_fc
        
        if (not(var_108 f> arg4[2]) && not(var_100 f< *arg4) && not(var_104 f> arg4[3])
                && not(var_fc f< arg4[1]))
            char var_120
            int32_t rax_4 = (*(*rsi + 0x48))(rsi, rdi, r15, &r14_1[-0xb], &rsi[0x26], rbx, arg4, 
                arg5, r13, arg7, arg8, var_120, var_118, var_110_1)
            int64_t* rsi_1 = *r15
            int32_t rbp_1 = rax_4 + 1
            void* rax_7 = &rsi_1[sx.q(r14_1[-0xd]) * 2]
            
            if (rsi_1 != rax_7)
                do
                    int64_t* rcx_3 = *rsi_1
                    void var_c0
                    int64_t* rax_9 = (*(*rcx_3 + 8))(rcx_3, &var_c0)
                    int64_t* var_f8 = *rax_9
                    int64_t* rax_11 = rax_9[1]
                    
                    if (rax_11 != 0)
                        rax_11[1].d += 1
                    
                    int64_t* var_b8
                    
                    if (var_b8 != 0)
                        var_b8[1].d -= 1
                        
                        if (var_b8[1].d == 1)
                            (**var_b8)(var_b8)
                            int32_t temp1_1 = *(var_b8 + 0xc)
                            *(var_b8 + 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                (*(*var_b8 + 8))(var_b8, 1)
                    
                    int64_t* rcx_7 = *rsi_1
                    void var_b0
                    int64_t* rax_15 = (*(*rcx_7 + 0x28))(rcx_7, &var_b0)
                    int64_t* rbx_2 = rax_15[1]
                    int64_t* r14_2 = *rax_15
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d += 1
                    
                    int64_t* var_a8
                    
                    if (var_a8 != 0)
                        var_a8[1].d -= 1
                        
                        if (var_a8[1].d == 1)
                            (**var_a8)(var_a8)
                            int32_t temp3_1 = *(var_a8 + 0xc)
                            *(var_a8 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*var_a8 + 8))(var_a8, 1)
                    
                    rdi = arg2
                    int32_t rax_19
                    
                    if (r14_2 == 0)
                        int64_t* rcx_17 = var_f8
                        rax_19 = (*(*rcx_17 + 0x90))(rcx_17, rdi, r15, rsi_1, &arg1[0x26], arg3, 
                            arg4, arg5, rax_4 + 1, arg7, arg8, var_120)
                    else
                        var_120 = arg8
                        char var_128_1
                        var_128_1.q = arg7
                        int64_t var_130_1
                        var_130_1.d = rax_4 + 1
                        int32_t var_138_1
                        var_138_1.q = arg5
                        rax_19 = (*(*r14_2 + 8))(r14_2, rdi, r15, &var_f8, rsi_1, &arg1[0x26], 
                            arg3, arg4, var_138_1, var_130_1, var_128_1, var_120)
                    
                    if (rbp_1 s>= rax_19)
                        rax_19 = rbp_1
                    
                    rbp_1 = rax_19
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            (**rbx_2)(rbx_2)
                            int32_t temp6_1 = *(rbx_2 + 0xc)
                            *(rbx_2 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                (*(*rbx_2 + 8))(rbx_2, 1)
                    
                    if (rax_11 != 0)
                        rax_11[1].d -= 1
                        
                        if (rax_11[1].d == 1)
                            (**rax_11)(rax_11)
                            int32_t temp7_1 = *(rax_11 + 0xc)
                            *(rax_11 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rax_11 + 8))(rax_11, 1)
                    
                    rsi_1 = &rsi_1[2]
                while (rsi_1 != rax_7)
                
                rbx = arg3
                r14_1 = var_110_1
            
            rsi = arg1
            int32_t rax_26 = (*(*rsi + 0x48))(rsi, rdi, r15, &r14_1[-7], &rsi[0x26], rbx, arg4, 
                arg5, rbp_1, arg7, arg8, var_120)
            r13 = arg6
            
            if (var_118 s>= rax_26)
                rax_26 = var_118
            
            rbp = rax_26
            var_118 = rax_26
        
        r14_1 = &r14_1[0x16]
        r15 = &r15[0xb]
        var_110_1 = r14_1
    while (r15 != rax_2)

return zx.q(rbp)
