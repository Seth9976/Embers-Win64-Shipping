// 函数: sub_141a2b670
// 地址: 0x141a2b670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t r11_1 = r10_1 * 2
                uint64_t r8_1 = zx.q(r11_1 + 1)
                
                if ((r8_1 + 1).d s< arg2)
                    if (*(arg1[sx.q(r11_1) + 2].q + 0xa8) s< *(arg1[sx.q(r8_1.d)].q + 0xa8))
                        r8_1 = zx.q(r11_1)
                    
                    r8_1 = zx.q(r8_1.d + 1)
                
                void** r10_4 = &arg1[sx.q(r10_1)]
                int64_t* rdx_4 = &arg1[sx.q(r8_1.d)]
                result = zx.q(*(*rdx_4 + 0xa8))
                
                if (*(*r10_4 + 0xa8) s>= result.d)
                    break
                
                if (r10_4 != rdx_4)
                    zmm1 = *r10_4
                    *r10_4 = *rdx_4
                    *rdx_4 = zmm1
                
                result = zx.q(((r8_1 << 1) + 1).d)
                r10_1 = r8_1.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rdi_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rdi_3)
            zmm1 = *arg1
            *arg1 = *rdi_3
            *rdi_3 = zmm1
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(arg1[sx.q(result_1) + 2].q + 0xa8) s< *(arg1[sx.q(result.d)].q + 0xa8))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r11_5 = &arg1[sx.q(r11_2)]
                void* r10_7 = &arg1[sx.q(result.d)]
                
                if (*(*r11_5 + 0xa8) s>= *(*r10_7 + 0xa8))
                    break
                
                if (r11_5 != r10_7)
                    zmm1 = *r11_5
                    *r11_5 = *r10_7
                    *r10_7 = zmm1
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_3 -= 0x10
    while (i s> 0)

return result
