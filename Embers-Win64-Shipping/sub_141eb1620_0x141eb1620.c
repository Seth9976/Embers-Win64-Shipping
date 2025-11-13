// 函数: sub_141eb1620
// 地址: 0x141eb1620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int64_t zmm1

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
                    if (*(arg1 + (sx.q(r11_1) + 2) * 0xc) u< *(arg1 + sx.q(r8_1.d) * 0xc))
                        r8_1 = zx.q(r11_1)
                    
                    r8_1 = zx.q(r8_1.d + 1)
                
                char* rdx_2 = arg1 + sx.q(r8_1.d) * 0xc
                int64_t rcx_2 = sx.q(r10_1) * 3
                result = zx.q(*rdx_2)
                int64_t* r10_2 = arg1 + (rcx_2 << 2)
                
                if (*(arg1 + (rcx_2 << 2)) u>= result.b)
                    break
                
                if (r10_2 != rdx_2)
                    zmm1 = *r10_2
                    int32_t rcx_3 = r10_2[1].d
                    *r10_2 = *rdx_2
                    r10_2[1].d = *(rdx_2 + 8)
                    *rdx_2 = zmm1
                    *(rdx_2 + 8) = rcx_3
                
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
    void* rdi_1 = arg1 + result * 0xc
    
    do
        if (arg1 != rdi_1)
            zmm1 = *arg1
            int32_t rcx_5 = arg1[1].d
            *arg1 = *rdi_1
            result = zx.q(*(rdi_1 + 8))
            arg1[1].d = result.d
            *rdi_1 = zmm1
            *(rdi_1 + 8) = rcx_5
        
        int32_t r10_3 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r10_3 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(arg1 + (sx.q(result_1) + 2) * 0xc) u< *(arg1 + sx.q(result.d) * 0xc))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r8_3 = arg1 + sx.q(result.d) * 0xc
                int64_t rdx_5 = sx.q(r10_3) * 3
                void* r10_4 = arg1 + (rdx_5 << 2)
                
                if (*(arg1 + (rdx_5 << 2)) u>= *r8_3)
                    break
                
                if (r10_4 != r8_3)
                    zmm1 = *r10_4
                    int32_t rdx_6 = *(r10_4 + 8)
                    *r10_4 = *r8_3
                    *(r10_4 + 8) = *(r8_3 + 8)
                    *r8_3 = zmm1
                    *(r8_3 + 8) = rdx_6
                
                r10_3 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 0xc
    while (i s> 0)

return result
