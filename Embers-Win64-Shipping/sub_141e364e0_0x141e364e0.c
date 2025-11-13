// 函数: sub_141e364e0
// 地址: 0x141e364e0
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
                    if (*(arg1 + sx.q(r11_1) * 0x14 + 0x30) * 2
                            s> *(arg1 + sx.q(r8_1.d) * 0x14 + 8) * 2)
                        r8_1 = zx.q(r11_1)
                    
                    r8_1 = zx.q(r8_1.d + 1)
                
                int128_t* rdx_3 = arg1 + sx.q(r8_1.d) * 0x14
                int128_t* r10_2 = arg1 + sx.q(r10_1) * 0x14
                result = zx.q(*(rdx_3 + 8) * 2)
                
                if (*(r10_2 + 8) * 2 s<= result.d)
                    break
                
                if (r10_2 != rdx_3)
                    int32_t rcx_6 = r10_2[1].d
                    zmm1 = *r10_2
                    *r10_2 = *rdx_3
                    r10_2[1].d = rdx_3[1].d
                    *rdx_3 = zmm1
                    rdx_3[1].d = rcx_6
                
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
    int128_t* rdi_1 = arg1 + result * 0x14
    
    do
        if (arg1 != rdi_1)
            int32_t rcx_8 = arg1[1].d
            zmm1 = *arg1
            *arg1 = *rdi_1
            result = zx.q(rdi_1[1].d)
            arg1[1].d = result.d
            *rdi_1 = zmm1
            rdi_1[1].d = rcx_8
        
        int32_t r10_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r10_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(arg1 + sx.q(result_1) * 0x14 + 0x30) * 2
                            s> *(arg1 + sx.q(result.d) * 0x14 + 8) * 2)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r8_4 = arg1 + sx.q(result.d) * 0x14
                void* r10_4 = arg1 + sx.q(r10_3) * 0x14
                
                if (*(r10_4 + 8) * 2 s<= *(r8_4 + 8) * 2)
                    break
                
                if (r10_4 != r8_4)
                    int32_t rdx_10 = *(r10_4 + 0x10)
                    zmm1 = *r10_4
                    *r10_4 = *r8_4
                    *(r10_4 + 0x10) = *(r8_4 + 0x10)
                    *r8_4 = zmm1
                    *(r8_4 + 0x10) = rdx_10
                
                r10_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 0x14
    while (i s> 0)

return result
