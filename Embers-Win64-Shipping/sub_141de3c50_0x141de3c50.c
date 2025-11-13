// 函数: sub_141de3c50
// 地址: 0x141de3c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *arg4
int64_t* rsi = *arg1
int64_t rbp = *arg3
int64_t r12 = sx.q(arg1[1].d)
int128_t* result
uint32_t zmm1[0x8]
result, zmm1 = sub_1400f5e30(*rsi, *arg5, *(rbp + (sx.q(*rdi) << 2)), rsi[1].d)

if (r12 s> 1)
    void* rbx_1 = &rsi[3]
    void* rdi_1 = &rdi[1]
    int64_t i_2 = r12 - 1
    int64_t i
    
    do
        result, zmm1 = sub_1400f5d80(*rbx_1, *arg5, *(rbp + (sx.q(*rdi_1) << 2)), *(rbx_1 + 8))
        rbx_1 += 0x18
        rdi_1 += 4
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r12.d s> 1)
    result, zmm1 = sub_141e451a0(arg5, zmm1)

if (*(arg2 + 8) s> 0)
    result = arg3
    int32_t* var_58_1 = (*arg4).q
    uint128_t zmm0_1 = *arg2
    zmm1[0].o = *result
    int64_t* var_38_1 = zmm0_1.q
    int32_t rdi_2 = _mm_bsrli_si128(zmm0_1, 8).d
    int64_t var_48_1 = zmm1[0].q
    
    if (rdi_2 s> 0)
        *(var_48_1 + (sx.q(*var_58_1) << 2))
        result = sub_141deeaf0(arg6, var_38_1)
        
        if (rdi_2 s> 1)
            float** r10_1 = &var_38_1[4]
            void* r11_1 = &var_58_1[1]
            uint64_t i_3 = zx.q(rdi_2 - 1)
            uint64_t i_1
            
            do
                result = sx.q(*r11_1)
                float zmm1_1 = *(var_48_1 + (result << 2))
                
                if (not(zmm1_1 <= 9.99999975e-06f))
                    int32_t j = 0
                    
                    if (arg6[1].d s> 0)
                        float* rdx_3 = *r10_1
                        int64_t rcx_4 = 0
                        
                        do
                            int64_t r8 = *arg6
                            
                            if (*(r8 + rcx_4 + 4) != 0 || *(rdx_3 + rcx_4 + 4) != 0)
                                result.b = 1
                            else
                                result.b = 0
                            
                            *(r8 + rcx_4 + 4) = result.b
                            result = *arg6
                            j += 1
                            rdx_3 = *r10_1
                            *(result + rcx_4) = zmm1_1 f* *(rdx_3 + rcx_4) f+ *(result + rcx_4)
                            rcx_4 += 8
                        while (j s< arg6[1].d)
                
                r11_1 += 4
                r10_1 = &r10_1[4]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)

return result
