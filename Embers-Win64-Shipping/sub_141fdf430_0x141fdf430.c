// 函数: sub_141fdf430
// 地址: 0x141fdf430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int32_t* r11 = arg2
int32_t rbp = (r8 - 1).d

if (r8.d == 0)
    *arg2 = *arg4
    return arg2

int32_t* r10 = *arg1
int32_t r9 = (r8 - 1).d

if (arg3.d f< *r10)
    *r11 = *(r10 + 4)
else
    int64_t rbx_1 = r8 - 1
    int32_t rsi_1 = 0
    
    if (not(arg3.d f>= r10[rbx_1 * 8]))
        r9 = 0
        
        if (r8.d s> 1)
            do
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r8.d + r9)
                int32_t rax_7 = (temp1_1 - temp0_1) s>> 1
                float temp2_1 = r10[sx.q(rax_7) * 8]
                arg3.d f- temp2_1
                
                if (arg3.d f< temp2_1)
                    r8 = zx.q(rax_7)
                
                if (arg3.d f< temp2_1)
                    rax_7 = r9
                
                r9 = rax_7
            while (r8.d - r9 s> 1)
    
    if (r9 == 0xffffffff)
        *r11 = *(r10 + 4)
    else
        uint128_t zmm0
        
        if (r9 != rbp)
        label_141fdf527:
            
            if (arg1[2].b == 0 || r9 != rbp)
                arg2.b = 0
            else
                arg2.b = 1
            
            int32_t* rcx_3 = sx.q(r9) << 5
            
            if (arg2.b == 0)
                rsi_1 = r9 + 1
            
            void* rax_13 = &r10[sx.q(rsi_1) * 8]
            uint128_t zmm8
            
            if (arg2.b == 0)
                zmm8.d = (*rax_13).d f- *(rcx_3 + r10)
            else
                zmm8 = *(arg1 + 0x14)
            
            char rdx
            
            if (not(zmm8.d f<= 0f))
                rdx = *(rcx_3 + r10 + 0x1c)
            
            if (zmm8.d f<= 0f || rdx == 2)
                *r11 = *(rcx_3 + r10 + 4)
            else
                uint128_t zmm7
                zmm7.d = arg3.d f- *(rcx_3 + r10)
                zmm7.d = zmm7.d f/ zmm8.d
                uint128_t zmm1
                
                if (rdx != 0)
                    zmm1.d = zmm7.d f* zmm7.d
                    arg3.d = zmm8.d f* *(rcx_3 + r10 + 0x14)
                    zmm0.d = zmm1.d f* 3f
                    uint128_t zmm5
                    zmm5.d = zmm1.d f* zmm7.d
                    float zmm3 = zmm5.d f- zmm1.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    uint128_t zmm4
                    zmm4.d = zmm5.d f+ zmm5.d
                    zmm5.d = zmm5.d f- zmm1.d
                    zmm1.d = zmm8.d f* *(rax_13 + 0xc)
                    uint128_t zmm6
                    zmm6.d = zmm0.d f- zmm4.d
                    zmm4.d = zmm4.d f- zmm0.d
                    zmm1.d = zmm1.d f* zmm3
                    zmm5.d = zmm5.d f+ zmm7.d
                    zmm4.d = zmm4.d f+ 1f
                    arg3.d = arg3.d f* zmm5.d
                    zmm0 = zmm4
                    zmm4.d = zmm4.d f* *(rcx_3 + r10 + 8)
                    zmm0.d = zmm0.d f* *(rcx_3 + r10 + 4)
                    arg3.d = arg3.d f+ zmm0.d
                    zmm0 = zmm6
                    zmm6.d = zmm6.d f* *(rax_13 + 8)
                    zmm0.d = zmm0.d f* *(rax_13 + 4)
                    arg3.d = arg3.d f+ zmm1.d
                    zmm1.d = zmm8.d f* *(rcx_3 + r10 + 0x18)
                    zmm8.d = zmm8.d f* *(rax_13 + 0x10)
                    zmm1.d = zmm1.d f* zmm5.d
                    arg3.d = arg3.d f+ zmm0.d
                    zmm8.d = zmm8.d f* zmm3
                    zmm1.d = zmm1.d f+ zmm4.d
                    *r11 = arg3.d
                    zmm1.d = zmm1.d f+ zmm8.d
                    zmm1.d = zmm1.d f+ zmm6.d
                    r11[1] = zmm1.d
                else
                    zmm0.d = (*(rax_13 + 4)).d f- *(rcx_3 + r10 + 4)
                    zmm1.d = (*(rax_13 + 8)).d f- *(rcx_3 + r10 + 8)
                    zmm0.d = zmm0.d f* zmm7.d
                    zmm1.d = zmm1.d f* zmm7.d
                    zmm0.d = zmm0.d f+ *(rcx_3 + r10 + 4)
                    zmm1.d = zmm1.d f+ *(rcx_3 + r10 + 8)
                    *r11 = zmm0.d
                    r11[1] = zmm1.d
        else if (arg1[2].b != 0)
            zmm0.d = (*(arg1 + 0x14)).d f+ r10[rbx_1 * 8]
            
            if (not(arg3.d f>= zmm0.d))
                goto label_141fdf527
            
            *r11 = *(r10 + 4)
        else
            *r11 = *((rbx_1 << 5) + r10 + 4)

return r11
