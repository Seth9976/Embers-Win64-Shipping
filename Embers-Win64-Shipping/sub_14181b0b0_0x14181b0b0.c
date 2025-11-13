// 函数: sub_14181b0b0
// 地址: 0x14181b0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int64_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rsi
        
        if (rbp_1 s< arg2)
            uint64_t* rdi_1 = r15 + arg1
            
            do
                int32_t r11_1 = r10_1 * 2
                uint64_t r8 = zx.q(r11_1 + 1)
                
                if ((r8 + 1).d s< arg2)
                    if (*(r15 + (sx.q(r11_1) + 2) * 0x18 + arg1)
                            u< *(r15 + sx.q(r8.d) * 0x18 + arg1))
                        r8 = zx.q(r11_1)
                    
                    r8 = zx.q(r8.d + 1)
                
                int64_t rcx_2 = sx.q(r10_1) * 3
                result = rdi_1[sx.q(r8.d) * 3]
                
                if (rdi_1[rcx_2] u>= result)
                    break
                
                int128_t* rax_12 = sx.q(r8.d) * 0x18 + arg1
                int128_t* rcx_3 = arg1 + (rcx_2 << 3)
                
                if (rcx_3 != rax_12)
                    zmm3 = *rcx_3
                    zmm2 = rcx_3[1].q
                    *rcx_3 = *rax_12
                    rcx_3[1].q = rax_12[1].q
                    *rax_12 = zmm3
                    rax_12[1].q = zmm2
                
                result = zx.q(((r8 << 1) + 1).d)
                r10_1 = r8.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rsi_1 = arg1 + result * 0x18
    
    do
        if (arg1 != rsi_1)
            zmm3 = *arg1
            zmm2 = arg1[1].q
            *arg1 = *rsi_1
            arg1[1].q = rsi_1[1].q
            *rsi_1 = zmm3
            rsi_1[1].q = zmm2
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            int64_t* rdi_2 = r15 + arg1
            
            do
                int32_t result_1 = r11_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    if (*(r15 + (sx.q(result_1) + 2) * 0x18 + arg1)
                            u< *(r15 + sx.q(result.d) * 0x18 + arg1))
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int64_t rdx_5 = sx.q(r11_2) * 3
                
                if (rdi_2[rdx_5] u>= rdi_2[sx.q(result.d) * 3])
                    break
                
                void* rcx_15 = sx.q(result.d) * 0x18 + arg1
                void* rdx_6 = arg1 + (rdx_5 << 3)
                
                if (rdx_6 != rcx_15)
                    zmm3 = *rdx_6
                    zmm2 = *(rdx_6 + 0x10)
                    *rdx_6 = *rcx_15
                    *(rdx_6 + 0x10) = *(rcx_15 + 0x10)
                    *rcx_15 = zmm3
                    *(rcx_15 + 0x10) = zmm2
                
                r11_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 0x18
    while (i s> 0)

return result
