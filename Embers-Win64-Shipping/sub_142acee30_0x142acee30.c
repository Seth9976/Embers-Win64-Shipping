// 函数: sub_142acee30
// 地址: 0x142acee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = sub_142a4bbc0()
int64_t* rcx = *(arg1 + 0x80)

if (rcx != 0 && not(zmm0.q f< *(arg1 + 0x88)))
    return (*(*rcx + 0x40))(rcx)

void arg_10
void* var_68 = &arg_10
void arg_18
void* var_70 = &arg_18
void var_58
int32_t var_54
int32_t arg_8
void arg_20
sub_142accb70(zmm0, &arg_8, &var_54, &var_58, &arg_20)
uint64_t zmm7 = sub_142acc900(arg_8, 0, 1) f* 86400.0
uint64_t result
uint64_t zmm0_2
zmm0_2, result = sub_142acc900(arg_8 + 1, 0, 1)
int16_t rdi = *(arg1 + 0x48)
int16_t r14 = *(arg1 + 0x4a)
uint64_t zmm1 = zmm0_2 f* 86400.0
int16_t rbp = *(arg1 + 0x4c) + rdi + r14
int16_t r9_1 = 0

if (0 s>= rbp)
label_142acf013:
    result.b = 0
else
    int16_t r11_1 = neg.w(rdi)
    
    while (true)
        uint64_t r10_1
        uint64_t rdx_1
        int64_t r8_1
        
        if (r9_1 s>= rdi)
            int16_t rax_2 = r9_1 + r11_1
            
            if (rax_2 s>= r14)
                r8_1 = *(arg1 + 0x60)
                rdx_1 = zx.q(sx.d(rax_2 + neg.w(r14)))
                r10_1 = zx.q(*(r8_1 + (sx.q((rdx_1 * 2).d) << 2))) << 0x20
                    | zx.q(*(r8_1 + (sx.q(((rdx_1 << 1) + 1).d) << 2)))
            else
                r10_1 = sx.q(*(*(arg1 + 0x58) + (sx.q(rax_2) << 2)))
        else
            r8_1 = *(arg1 + 0x50)
            rdx_1 = zx.q(sx.d(r9_1))
            r10_1 = zx.q(*(r8_1 + (sx.q((rdx_1 * 2).d) << 2))) << 0x20
                | zx.q(*(r8_1 + (sx.q(((rdx_1 << 1) + 1).d) << 2)))
        zmm0_2 = float.d(r10_1)
        
        if (zmm0_2 f>= zmm1)
            goto label_142acf013
        
        if (not(zmm0_2 f< zmm7))
            uint16_t rdx_2
            
            if (r9_1 s< 0)
                rdx_2 = 0
            else
                rdx_2 = zx.w(*(sx.q(r9_1) + *(arg1 + 0x78)))
            
            if (*(*(arg1 + 0x70) + (sx.q(sx.d(rdx_2 * 2) + 1) << 2)) != 0)
                result.b = 1
                break
            
            if (not(zmm0_2 f<= zmm7))
                int16_t rax_9 = rdi - 1 + r11_1
                uint16_t rdx_3
                
                if (rax_9 + r9_1 s< 0)
                    rdx_3 = 0
                else
                    rdx_3 = zx.w(*(sx.q(rax_9 + r9_1) + *(arg1 + 0x78)))
                
                if (*(*(arg1 + 0x70) + (sx.q(sx.d(rdx_3 * 2) + 1) << 2)) != 0)
                    result.b = 1
                    break
        
        r9_1 += 1
        
        if (r9_1 s>= rbp)
            goto label_142acf013

return result
