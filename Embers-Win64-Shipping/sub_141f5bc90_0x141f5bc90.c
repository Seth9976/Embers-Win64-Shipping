// 函数: sub_141f5bc90
// 地址: 0x141f5bc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1[1].d)
int128_t zmm7 = arg2
int32_t rsi = (r9 - 1).d

if (r9.d == 0)
    return *arg3

int32_t* r8 = *arg1
int32_t r10 = (r9 - 1).d

if (not(zmm7.d f< *r8))
    int64_t rbx_1 = r9 - 1
    int32_t rdi_1 = 0
    arg2 = r8[rbx_1 * 5]
    
    if (not(zmm7.d f>= arg2.d))
        r10 = 0
        
        if (r9.d s> 1)
            do
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r9.d + r10)
                int32_t rax_5 = (temp1_1 - temp0_1) s>> 1
                float temp2_1 = r8[sx.q(rax_5) * 5]
                zmm7.d f- temp2_1
                
                if (zmm7.d f< temp2_1)
                    r9 = zx.q(rax_5)
                
                if (zmm7.d f< temp2_1)
                    rax_5 = r10
                
                r10 = rax_5
            while (r9.d - r10 s> 1)
    
    if (r10 != 0xffffffff)
        if (r10 != rsi)
        label_141f5bd6d:
            int64_t rdx
            
            if (arg1[2].b == 0 || r10 != rsi)
                rdx.b = 0
            else
                rdx.b = 1
            
            char temp3_1 = rdx.b
            int64_t rcx_1 = sx.q(r10) * 5
            
            if (temp3_1 == 0)
                rdi_1 = r10 + 1
            
            int64_t r9_1 = sx.q(rdi_1) * 5
            int128_t zmm8
            
            if (temp3_1 == 0)
                zmm8.d = r8[r9_1].d f- r8[rcx_1]
            else
                zmm8 = *(arg1 + 0x14)
            
            if (not(zmm8.d f<= 0f))
                char rax_12 = r8[rcx_1 + 4].b
                
                if (rax_12 != 2)
                    zmm7.d = zmm7.d f- r8[rcx_1]
                    zmm7.d = zmm7.d f/ zmm8.d
                    
                    if (rax_12 == 0)
                        arg2.d = r8[r9_1 + 1].d f- r8[rcx_1 + 1]
                        arg2.d = arg2.d f* zmm7.d
                        arg2.d = arg2.d f+ r8[rcx_1 + 1]
                        return arg2.d
                    
                    int128_t zmm6
                    zmm6.d = zmm7.d f* zmm7.d
                    int128_t zmm3
                    zmm3.d = zmm6.d f* zmm7.d
                    float zmm5 = zmm6.d * 3f
                    float zmm2 = zmm3.d - (zmm6.d f+ zmm6.d)
                    float zmm0 = zmm8.d f* r8[rcx_1 + 3]
                    int128_t zmm4
                    zmm4.d = zmm3.d f+ zmm3.d
                    zmm8.d = zmm8.d f* r8[r9_1 + 2]
                    zmm3.d = zmm3.d f- zmm6.d
                    arg2.d = zmm4.d f- zmm5
                    zmm8.d = zmm8.d f* zmm3.d
                    arg2.d = arg2.d f+ 1f
                    arg2.d = arg2.d f* r8[rcx_1 + 1]
                    return (zmm2 f+ zmm7.d) * zmm0 f+ arg2.d f+ zmm8.d
                        + (zmm5 f- zmm4.d) f* r8[r9_1 + 1]
            
            return r8[rcx_1 + 1]
        
        if (arg1[2].b == 0)
            return r8[rbx_1 * 5 + 1]
        
        arg2.d = arg2.d f+ *(arg1 + 0x14)
        
        if (not(zmm7.d f>= arg2.d))
            goto label_141f5bd6d

return r8[1]
