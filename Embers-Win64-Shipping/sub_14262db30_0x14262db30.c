// 函数: sub_14262db30
// 地址: 0x14262db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
int32_t* r10 = arg2
int128_t zmm7
int128_t var_38 = zmm7
int128_t zmm8
int128_t var_48 = zmm8
int128_t zmm9
int128_t var_58 = zmm9
int128_t zmm10
int128_t var_68 = zmm10
int128_t zmm11
int128_t var_78 = zmm11
int64_t rbx = sx.q(arg4)
void* const* result

if (arg3 s<= 0)
label_14262dc94:
    result.b = 0
else
    int64_t rdi_1 = sx.q(arg5)
    int64_t r11_1 = 0
    
    while (true)
        uint64_t rcx = zx.q(*r10)
        
        if (rcx.d != rbx.d && rcx.d != rdi_1.d)
            result = zx.q(r10[1])
            
            if (result.d != rbx.d && result.d != rdi_1.d)
                int64_t rdx = sx.q((result * 3).d)
                int64_t r8 = rdi_1 * 3
                int128_t zmm4 = *(arg1 + (r8 << 2) + 8)
                int64_t r9 = rbx * 3
                float zmm3 = *(arg1 + (r8 << 2))
                zmm9 = *(arg1 + (r9 << 2) + 8)
                zmm10 = *(arg1 + (r9 << 2))
                int64_t rcx_1 = sx.q((rcx * 3).d)
                float zmm5 = *(arg1 + (rcx_1 << 2) + 8)
                zmm6 = *(arg1 + (rcx_1 << 2))
                zmm8.d = zmm9.d f- zmm5
                float zmm1 = *(arg1 + (rdx << 2)) f- zmm6.d
                float zmm2 = *(arg1 + (rdx << 2) + 8) - zmm5
                zmm7.d = zmm4.d f- zmm5
                zmm8.d = zmm8.d f* zmm1
                zmm7.d = zmm7.d f* zmm1
                zmm7.d = zmm7.d f- (zmm3 f- zmm6.d) * zmm2
                zmm8.d = zmm8.d f- (zmm10.d f- zmm6.d) * zmm2
                
                if (not(zmm8.d f* zmm7.d >= 0f))
                    zmm4.d = zmm4.d f- zmm9.d
                    zmm6.d = zmm6.d f- zmm10.d
                    zmm4.d = zmm4.d f* zmm6.d
                    zmm3 = (zmm3 f- zmm10.d) * (zmm5 f- zmm9.d) f- zmm4.d
                    
                    if ((zmm3 f+ zmm8.d f- zmm7.d) * zmm3 < 0f)
                        result.b = 1
                        break
        
        r11_1 += 1
        r10 = &r10[4]
        
        if (r11_1 s>= sx.q(arg3))
            goto label_14262dc94

return result
