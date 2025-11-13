// 函数: sub_141a1da60
// 地址: 0x141a1da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int128_t zmm4 = arg3
int32_t rsi = (r8 - 1).d

if (r8.d != 0)
    int32_t* r11_1 = *arg1
    int32_t r9 = (r8 - 1).d
    int64_t rdi_1
    
    if (not(zmm4.d f< *r11_1))
        rdi_1 = r8 - 1
        
        if (not(zmm4.d f>= *(rdi_1 * 0x2c + r11_1)))
            r9 = 0
            
            if (r8.d s> 1)
                do
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r8.d + r9)
                    int32_t rax_6 = (temp1_1 - temp0_1) s>> 1
                    float temp2_1 = *(sx.q(rax_6) * 0x2c + r11_1)
                    zmm4.d f- temp2_1
                    
                    if (zmm4.d f< temp2_1)
                        r8 = zx.q(rax_6)
                    
                    if (zmm4.d f< temp2_1)
                        rax_6 = r9
                    
                    r9 = rax_6
                while (r8.d - r9 s> 1)
    
    if (zmm4.d f< *r11_1 || r9 == 0xffffffff)
        int32_t rax_17 = r11_1[9]
        *arg2 = *(r11_1 + 0x1c)
        arg2[1].d = rax_17
    else
        int64_t zmm0
        
        if (r9 != rsi)
        label_141a1db67:
            
            if (arg1[2].b == 0 || r9 != rsi)
                r8.b = 0
            else
                r8.b = 1
            
            int32_t rcx_1 = 0
            void* rdx_3 = sx.q(r9) * 0x2c + r11_1
            
            if (r8.b == 0)
                rcx_1 = r9 + 1
            
            void* rcx_3 = sx.q(rcx_1) * 0x2c + r11_1
            int128_t zmm6
            
            if (r8.b == 0)
                zmm6.d = (*rcx_3).d f- *rdx_3
            else
                zmm6 = *(arg1 + 0x14)
            
            int32_t arg_8 = zmm6.d
            char rax_15
            
            if (not(zmm6.d f<= 0f))
                rax_15 = *(rdx_3 + 0x28)
            
            if (zmm6.d f<= 0f || rax_15 == 2)
                *arg2 = 0
                arg2[1].d = 0
            else
                arg3.d = 1f f/ zmm6.d
                int32_t var_ac_1 = arg3.d
                int128_t zmm1
                
                if (rax_15 != 0)
                    zmm4.d = zmm4.d f- *rdx_3
                    zmm1 = *(rdx_3 + 8)
                    int64_t zmm3
                    zmm3.d = zmm6.q.d f* *(rdx_3 + 0x20)
                    zmm0.d = zmm6.q.d f* *(rdx_3 + 0x1c)
                    int128_t zmm5 = *(rdx_3 + 0xc)
                    int128_t zmm7 = *(rcx_3 + 0x14)
                    int32_t var_b4_1 = zmm0.d
                    zmm0.d = zmm6.q.d f* *(rdx_3 + 0x24)
                    int128_t zmm9
                    zmm9.d = zmm6.d f+ zmm6.d
                    int128_t zmm10 = *(rcx_3 + 0x18)
                    int32_t var_b8_1 = zmm0.d
                    zmm4.d = zmm4.d f/ zmm6.d
                    int128_t zmm11 = *(rdx_3 + 4)
                    arg3.d = (*(rcx_3 + 8)).d f* 6f
                    int128_t zmm15
                    zmm15.d = zmm1.d f* -6f
                    zmm1.d = zmm1.d f* 6f
                    int128_t zmm12
                    zmm12.d = zmm4.d f* zmm4.d
                    int32_t arg_18 = zmm4.d
                    zmm0.d = zmm3.d f* 4f
                    int128_t zmm8
                    zmm8.d = (*(rcx_3 + 0xc)).d f* 6f
                    zmm15.d = zmm15.d f- zmm0.d
                    int128_t zmm14
                    zmm14.d = (*(rcx_3 + 4)).d f* 6f
                    zmm0.d = zmm9.q.d f* zmm7.d
                    zmm7.d = zmm7.d f* arg_8
                    zmm15.d = zmm15.d f- zmm0.d
                    zmm7.d = zmm7.d f+ zmm3.d
                    zmm15.d = zmm15.d f+ arg3.d
                    zmm7.d = zmm7.d f* 3f
                    zmm15.d = zmm15.d f* arg_18
                    zmm7.d = zmm7.d f+ zmm1.d
                    zmm1.d = zmm9.d f* zmm10.d
                    zmm10.d = zmm10.d f* arg_8
                    zmm7.d = zmm7.d f- arg3.d
                    arg3.d = zmm5.d f* -6f
                    zmm5.d = zmm5.d f* 6f
                    zmm7.d = zmm7.d f* zmm12.d
                    zmm15.d = zmm15.d f+ zmm7.d
                    zmm7 = var_b8_1
                    zmm10.d = zmm10.d f+ zmm7.d
                    zmm0.d = zmm7.q.d f* 4f
                    arg3.d = arg3.d f- zmm0.d
                    zmm10.d = zmm10.d f* 3f
                    zmm10.d = zmm10.d f+ zmm5.d
                    zmm5 = var_b4_1
                    arg3.d = arg3.d f- zmm1.d
                    zmm1.d = zmm11.d f* -6f
                    zmm10.d = zmm10.d f- zmm8.d
                    arg3.d = arg3.d f+ zmm8.d
                    zmm10.d = zmm10.d f* zmm12.d
                    arg3.d = arg3.d f* arg_18
                    arg3.d = arg3.d f+ zmm10.d
                    zmm15.d = zmm15.d f+ zmm3.d
                    arg3.d = arg3.d f+ zmm7.d
                    zmm0.d = zmm5.q.d f* 4f
                    zmm11.d = zmm11.d f* 6f
                    zmm1.d = zmm1.d f- zmm0.d
                    zmm0 = *(rcx_3 + 0x10)
                    zmm9.d = zmm9.d f* zmm0.d
                    zmm0.d = zmm0.d f* arg_8
                    zmm1.d = zmm1.d f- zmm9.d
                    zmm0.d = zmm0.d f+ zmm5.d
                    zmm1.d = zmm1.d f+ zmm14.d
                    zmm0.d = zmm0.d f* 3f
                    zmm1.d = zmm1.d f* arg_18
                    zmm0.d = zmm0.d f+ zmm11.d
                    zmm0.d = zmm0.d f- zmm14.d
                    zmm0.d = zmm0.d f* zmm12.d
                    zmm1.d = zmm1.d f+ zmm0.d
                    zmm0 = var_ac_1
                    zmm15.d = zmm15.d f* zmm0.d
                    arg3.d = arg3.d f* zmm0.d
                    zmm1.d = zmm1.d f+ zmm5.d
                    *(arg2 + 4) = zmm15.d
                    arg2[1].d = arg3.d
                    zmm1.d = zmm1.d f* zmm0.d
                    *arg2 = zmm1.d
                else
                    zmm0.d = (*(rcx_3 + 4)).d f- *(rdx_3 + 4)
                    zmm1.d = (*(rcx_3 + 8)).d f- *(rdx_3 + 8)
                    zmm0.d = zmm0.d f* arg3.d
                    zmm1.d = zmm1.d f* arg3.d
                    *arg2 = zmm0.d
                    zmm0.d = (*(rcx_3 + 0xc)).d f- *(rdx_3 + 0xc)
                    *(arg2 + 4) = zmm1.d
                    zmm0.d = zmm0.d f* arg3.d
                    arg2[1].d = zmm0.d
        else
            int32_t* rax_9 = rdi_1 * 0x2c
            
            if (arg1[2].b != 0)
                zmm0.d = (*(arg1 + 0x14)).d f+ *(rax_9 + r11_1)
                
                if (zmm4.d f< zmm0.d)
                    goto label_141a1db67
                
                int32_t rax_11 = r11_1[6]
                *arg2 = *(r11_1 + 0x10)
                arg2[1].d = rax_11
            else
                int32_t rax_10 = *(rax_9 + r11_1 + 0x18)
                *arg2 = *(rax_9 + r11_1 + 0x10)
                arg2[1].d = rax_10
else
    int32_t rax_1 = arg4[1].d
    *arg2 = *arg4
    arg2[1].d = rax_1

return arg2
