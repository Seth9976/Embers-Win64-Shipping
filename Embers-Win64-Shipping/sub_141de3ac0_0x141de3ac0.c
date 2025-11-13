// 函数: sub_141de3ac0
// 地址: 0x141de3ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg1
int128_t* rdi = *arg3
int64_t r15 = sx.q(arg1[1].d)
uint64_t result
uint32_t zmm1[0x8]
result, zmm1 = sub_1400f5e30(*rsi, *arg4, *rdi, rsi[1].d)

if (r15 s> 1)
    void* rbx_1 = &rsi[3]
    void* rdi_1 = rdi + 4
    int64_t i_2 = r15 - 1
    int64_t i
    
    do
        result, zmm1 = sub_1400f5d80(*rbx_1, *arg4, *rdi_1, *(rbx_1 + 8))
        rbx_1 += 0x18
        rdi_1 += 4
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r15.d s> 1)
    result, zmm1 = sub_141e451a0(arg4, zmm1)

if (*(arg2 + 8) s> 0)
    zmm1[0].o = *arg2
    int64_t zmm0_1 = (*arg3).q
    int64_t* var_28_1 = zmm1[0].q
    zmm1[0].o = _mm_bsrli_si128(zmm1[0].o, 8)
    uint32_t rdi_2 = zmm1[0]
    
    if (rdi_2 s> 0)
        *zmm0_1
        result = sub_141deeaf0(arg5, var_28_1)
        
        if (rdi_2 s> 1)
            result = zx.q(rdi_2 - 1)
            uint64_t i_3 = zx.q(result.d)
            void* r10_1 = &var_28_1[4]
            float* r11_1 = zmm0_1 + 4
            uint64_t i_1
            
            do
                float zmm1_1 = *r11_1
                
                if (not(zmm1_1 <= 9.99999975e-06f))
                    int32_t j = 0
                    
                    if (arg5[1].d s> 0)
                        int64_t rdx_3 = *r10_1
                        float* rcx_4 = nullptr
                        
                        do
                            int64_t r8 = *arg5
                            
                            if (*(rcx_4 + r8 + 4) != 0 || *(rcx_4 + rdx_3 + 4) != 0)
                                result.b = 1
                            else
                                result.b = 0
                            
                            *(rcx_4 + r8 + 4) = result.b
                            result = *arg5
                            j += 1
                            rdx_3 = *r10_1
                            *(rcx_4 + result) = zmm1_1 f* *(rcx_4 + rdx_3) f+ *(rcx_4 + result)
                            rcx_4 = &rcx_4[2]
                        while (j s< arg5[1].d)
                
                r11_1 = &r11_1[1]
                r10_1 += 0x20
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)

return result
