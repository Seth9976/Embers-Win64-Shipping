// 函数: sub_141790ff0
// 地址: 0x141790ff0
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
        uint64_t r11_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                uint64_t r8_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r10_1 = (r8_1 + 1).d
                
                if (r10_1 s< arg2)
                    if ((*(arg1 + sx.q(r8_1.d) * 0x18 + 0x10)).d f>
                            *(arg1 + sx.q(r10_1) * 0x18 + 0x10))
                        r10_1 = r8_1.d
                    
                    r8_1 = zx.q(r10_1)
                
                int128_t* rdx_2 = arg1 + sx.q(r11_1.d) * 0x18
                int64_t rcx_2 = sx.q(r8_1.d) * 3
                result = arg1 + (rcx_2 << 3)
                
                if ((*(arg1 + (rcx_2 << 3) + 0x10)).d f<= rdx_2[1].d)
                    break
                
                if (rdx_2 != result)
                    zmm3 = *rdx_2
                    zmm2 = rdx_2[1].q
                    *rdx_2 = *result
                    rdx_2[1].q = *(result + 0x10)
                    *result = zmm3
                    *(result + 0x10) = zmm2
                
                result = zx.q(((r8_1 << 1) + 1).d)
                r11_1 = zx.q(r8_1.d)
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
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t r8_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r10_2 = (r8_2 + 1).d
                
                if (r10_2 s< i)
                    if ((*(arg1 + sx.q(r8_2.d) * 0x18 + 0x10)).d f>
                            *(arg1 + sx.q(r10_2) * 0x18 + 0x10))
                        r10_2 = r8_2.d
                    
                    r8_2 = zx.q(r10_2)
                
                void* rdx_4 = arg1 + sx.q(rbx_1.d) * 0x18
                int64_t rcx_6 = sx.q(r8_2.d) * 3
                result = arg1 + (rcx_6 << 3)
                
                if ((*(arg1 + (rcx_6 << 3) + 0x10)).d f<= *(rdx_4 + 0x10))
                    break
                
                if (rdx_4 != result)
                    zmm3 = *rdx_4
                    zmm2 = *(rdx_4 + 0x10)
                    *rdx_4 = *result
                    *(rdx_4 + 0x10) = *(result + 0x10)
                    *result = zmm3
                    *(result + 0x10) = zmm2
                
                result = zx.q(((r8_2 << 1) + 1).d)
                rbx_1 = zx.q(r8_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_1 -= 0x18
    while (i s> 0)

return result
