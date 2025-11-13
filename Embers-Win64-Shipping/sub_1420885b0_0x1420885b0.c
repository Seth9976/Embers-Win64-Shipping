// 函数: sub_1420885b0
// 地址: 0x1420885b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg1[1].d)
float* r11 = arg2
int32_t rbp = (r10 - 1).d

if (r10.d == 0)
    *arg2 = *arg4
    return arg2

int32_t* r8 = *arg1
int32_t r9 = (r10 - 1).d

if (arg3.d f< *r8)
    *r11 = r8[1]
else
    int64_t rdi_1 = r10 - 1
    int32_t rsi_1 = 0
    
    if (not(arg3.d f>= r8[rdi_1 * 5]))
        r9 = 0
        
        if (r10.d s> 1)
            do
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r10.d + r9)
                int32_t rax_6 = (temp1_1 - temp0_1) s>> 1
                float temp2_1 = r8[sx.q(rax_6) * 5]
                arg3.d f- temp2_1
                
                if (arg3.d f< temp2_1)
                    r10 = zx.q(rax_6)
                
                if (arg3.d f< temp2_1)
                    rax_6 = r9
                
                r9 = rax_6
            while (r10.d - r9 s> 1)
    
    if (r9 == 0xffffffff)
        *r11 = r8[1]
    else if (r9 != rbp)
    label_1420886a7:
        
        if (arg1[2].b == 0 || r9 != rbp)
            arg2.b = 0
        else
            arg2.b = 1
        
        char temp3_1 = arg2.b
        int64_t rcx_1 = sx.q(r9) * 5
        
        if (temp3_1 == 0)
            rsi_1 = r9 + 1
        
        int64_t r9_1 = sx.q(rsi_1) * 5
        int128_t zmm8
        
        if (temp3_1 == 0)
            zmm8.d = r8[r9_1].d f- r8[rcx_1]
        else
            zmm8 = *(arg1 + 0x14)
        
        char rax_13
        
        if (not(zmm8.d f<= 0f))
            rax_13 = r8[rcx_1 + 4].b
        
        if (zmm8.d f<= 0f || rax_13 == 2)
            *r11 = r8[rcx_1 + 1]
        else
            int128_t zmm7
            zmm7.d = arg3.d f- r8[rcx_1]
            zmm7.d = zmm7.d f/ zmm8.d
            
            if (rax_13 != 0)
                int128_t zmm6
                zmm6.d = zmm7.d f* zmm7.d
                int128_t zmm3
                zmm3.d = zmm6.d f* zmm7.d
                float zmm5 = zmm6.d * 3f
                arg3.d = zmm3.d f- (zmm6.d f+ zmm6.d)
                float zmm0 = zmm8.d f* r8[rcx_1 + 3]
                float zmm4 = zmm3.d f+ zmm3.d
                zmm8.d = zmm8.d f* r8[r9_1 + 2]
                zmm3.d = zmm3.d f- zmm6.d
                arg3.d = arg3.d f+ zmm7.d
                zmm8.d = zmm8.d f* zmm3.d
                arg3.d = arg3.d f* zmm0
                arg3.d = arg3.d f+ (zmm4 - zmm5 + 1f) f* r8[rcx_1 + 1]
                arg3.d = arg3.d f+ zmm8.d
                arg3.d = arg3.d f+ (zmm5 - zmm4) f* r8[r9_1 + 1]
                *r11 = arg3.d
            else
                *r11 = (r8[r9_1 + 1] f- r8[rcx_1 + 1]) f* zmm7.d f+ r8[rcx_1 + 1]
    else
        int64_t rax_9 = rdi_1 * 5
        
        if (arg1[2].b != 0)
            if (not(arg3.d f>= *(arg1 + 0x14) f+ r8[rax_9]))
                goto label_1420886a7
            
            *r11 = r8[1]
        else
            *r11 = r8[rax_9 + 1]

return r11
