// 函数: sub_141f78ba0
// 地址: 0x141f78ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm2
int128_t zmm3

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
                    if (*(arg1 + sx.q(r11_1) * 0x18 + 0x38) s< *(arg1 + sx.q(r8_1.d) * 0x18 + 8))
                        r8_1 = zx.q(r11_1)
                    
                    r8_1 = zx.q(r8_1.d + 1)
                
                int128_t* rdx_2 = arg1 + sx.q(r8_1.d) * 0x18
                int64_t rcx_2 = sx.q(r10_1) * 3
                result = zx.q(*(rdx_2 + 8))
                int128_t* r10_2 = arg1 + (rcx_2 << 3)
                
                if (*(arg1 + (rcx_2 << 3) + 8) s>= result.d)
                    break
                
                if (r10_2 != rdx_2)
                    zmm3 = *r10_2
                    zmm2 = r10_2[1].q
                    *r10_2 = *rdx_2
                    r10_2[1].q = rdx_2[1].q
                    *rdx_2 = zmm3
                    rdx_2[1].q = zmm2
                
                result = zx.q(((r8_1 << 1) + 1).d)
                r10_1 = r8_1.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rdi_1 = arg1 + result * 0x18
    
    do
        if (arg1 != rdi_1)
            zmm3 = *arg1
            zmm2 = arg1[1].q
            *arg1 = *rdi_1
            arg1[1].q = rdi_1[1].q
            *rdi_1 = zmm3
            rdi_1[1].q = zmm2
        
        int32_t r10_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r10_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(arg1 + sx.q(result_1) * 0x18 + 0x38)
                            s< *(arg1 + sx.q(result.d) * 0x18 + 8))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r8_3 = arg1 + sx.q(result.d) * 0x18
                int64_t rdx_5 = sx.q(r10_3) * 3
                void* r10_4 = arg1 + (rdx_5 << 3)
                
                if (*(arg1 + (rdx_5 << 3) + 8) s>= *(r8_3 + 8))
                    break
                
                if (r10_4 != r8_3)
                    zmm3 = *r10_4
                    zmm2 = *(r10_4 + 0x10)
                    *r10_4 = *r8_3
                    *(r10_4 + 0x10) = *(r8_3 + 0x10)
                    *r8_3 = zmm3
                    *(r8_3 + 0x10) = zmm2
                
                r10_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 0x18
    while (i s> 0)

return result
