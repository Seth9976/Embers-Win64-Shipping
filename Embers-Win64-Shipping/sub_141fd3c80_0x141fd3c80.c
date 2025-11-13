// 函数: sub_141fd3c80
// 地址: 0x141fd3c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r11_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                int32_t r10_1 = r11_1 * 2
                uint64_t r8_1 = zx.q(r10_1 + 1)
                
                if ((r8_1 + 1).d s< arg2)
                    if (*((sx.q(r10_1) + 2) * 0x54 + arg1) u< *(sx.q(r8_1.d) * 0x54 + arg1))
                        r8_1 = zx.q(r10_1)
                    
                    r8_1 = zx.q(r8_1.d + 1)
                
                char* rdx_3 = sx.q(r8_1.d) * 0x54 + arg1
                char* r10_3 = sx.q(r11_1) * 0x54 + arg1
                result = zx.q(*rdx_3)
                
                if (*r10_3 u>= result.b)
                    break
                
                if (r10_3 != rdx_3)
                    int32_t rcx_1 = *(r10_3 + 0x50)
                    zmm2 = *r10_3
                    zmm3 = *(r10_3 + 0x10)
                    zmm4 = *(r10_3 + 0x20)
                    zmm5 = *(r10_3 + 0x30)
                    zmm6 = *(r10_3 + 0x40)
                    *r10_3 = *rdx_3
                    *(r10_3 + 0x10) = *(rdx_3 + 0x10)
                    *(r10_3 + 0x20) = *(rdx_3 + 0x20)
                    *(r10_3 + 0x30) = *(rdx_3 + 0x30)
                    *(r10_3 + 0x40) = *(rdx_3 + 0x40)
                    *(r10_3 + 0x50) = *(rdx_3 + 0x50)
                    *rdx_3 = zmm2
                    *(rdx_3 + 0x10) = zmm3
                    *(rdx_3 + 0x20) = zmm4
                    *(rdx_3 + 0x30) = zmm5
                    *(rdx_3 + 0x40) = zmm6
                    *(rdx_3 + 0x50) = rcx_1
                
                result = zx.q(((r8_1 << 1) + 1).d)
                r11_1 = r8_1.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    void* rdi_2 = result * 0x54 + arg1
    
    do
        if (arg1 != rdi_2)
            int32_t rcx_2 = arg1[5].d
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            zmm6 = arg1[4]
            *arg1 = *rdi_2
            arg1[1] = *(rdi_2 + 0x10)
            arg1[2] = *(rdi_2 + 0x20)
            arg1[3] = *(rdi_2 + 0x30)
            arg1[4] = *(rdi_2 + 0x40)
            result = zx.q(*(rdi_2 + 0x50))
            arg1[5].d = result.d
            *rdi_2 = zmm2
            *(rdi_2 + 0x10) = zmm3
            *(rdi_2 + 0x20) = zmm4
            *(rdi_2 + 0x30) = zmm5
            *(rdi_2 + 0x40) = zmm6
            *(rdi_2 + 0x50) = rcx_2
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r11_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*((sx.q(result_1) + 2) * 0x54 + arg1) u< *(sx.q(result.d) * 0x54 + arg1))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* r8_4 = sx.q(result.d) * 0x54 + arg1
                void* r10_5 = sx.q(r11_2) * 0x54 + arg1
                
                if (*r10_5 u>= *r8_4)
                    break
                
                if (r10_5 != r8_4)
                    int32_t rdx_5 = *(r10_5 + 0x50)
                    zmm2 = *r10_5
                    zmm3 = *(r10_5 + 0x10)
                    zmm4 = *(r10_5 + 0x20)
                    zmm5 = *(r10_5 + 0x30)
                    zmm6 = *(r10_5 + 0x40)
                    *r10_5 = *r8_4
                    *(r10_5 + 0x10) = *(r8_4 + 0x10)
                    *(r10_5 + 0x20) = *(r8_4 + 0x20)
                    *(r10_5 + 0x30) = *(r8_4 + 0x30)
                    *(r10_5 + 0x40) = *(r8_4 + 0x40)
                    *(r10_5 + 0x50) = *(r8_4 + 0x50)
                    *r8_4 = zmm2
                    *(r8_4 + 0x10) = zmm3
                    *(r8_4 + 0x20) = zmm4
                    *(r8_4 + 0x30) = zmm5
                    *(r8_4 + 0x40) = zmm6
                    *(r8_4 + 0x50) = rdx_5
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x54
    while (i s> 0)

return result
