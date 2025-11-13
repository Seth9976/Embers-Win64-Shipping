// 函数: sub_14195d040
// 地址: 0x14195d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
int128_t zmm7
int128_t var_38 = zmm7
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
        uint64_t r11_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                uint64_t r8_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r10_1 = (r8_1 + 1).d
                
                if (r10_1 s< arg2)
                    if ((*(&arg1[sx.q(r10_1) * 6] + 0x4c)).d f> *(&arg1[sx.q(r8_1.d) * 6] + 0x4c))
                        r10_1 = r8_1.d
                    
                    r8_1 = zx.q(r10_1)
                
                int128_t* rdx_5 = &arg1[sx.q(r8_1.d) * 6]
                result = &arg1[sx.q(r11_1.d) * 6]
                
                if ((*(result + 0x4c)).d f<= *(rdx_5 + 0x4c))
                    break
                
                if (result != rdx_5)
                    zmm2 = *result
                    zmm3 = *(result + 0x10)
                    zmm4 = *(result + 0x20)
                    zmm5 = *(result + 0x30)
                    zmm6 = *(result + 0x40)
                    zmm7 = *(result + 0x50)
                    *result = *rdx_5
                    *(result + 0x10) = rdx_5[1]
                    *(result + 0x20) = rdx_5[2]
                    *(result + 0x30) = rdx_5[3]
                    *(result + 0x40) = rdx_5[4]
                    *(result + 0x50) = rdx_5[5]
                    *rdx_5 = zmm2
                    rdx_5[1] = zmm3
                    rdx_5[2] = zmm4
                    rdx_5[3] = zmm5
                    rdx_5[4] = zmm6
                    rdx_5[5] = zmm7
                
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
    int128_t* rdi_3 = &arg1[result * 6]
    
    do
        if (arg1 != rdi_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            zmm6 = arg1[4]
            zmm7 = arg1[5]
            *arg1 = *rdi_3
            arg1[1] = rdi_3[1]
            arg1[2] = rdi_3[2]
            arg1[3] = rdi_3[3]
            arg1[4] = rdi_3[4]
            arg1[5] = rdi_3[5]
            *rdi_3 = zmm2
            rdi_3[1] = zmm3
            rdi_3[2] = zmm4
            rdi_3[3] = zmm5
            rdi_3[4] = zmm6
            rdi_3[5] = zmm7
        
        uint64_t r11_2 = 0
        
        if (i s> 1)
            do
                uint64_t r8_2 = zx.q(((r11_2 << 1) + 1).d)
                int32_t r10_2 = (r8_2 + 1).d
                
                if (r10_2 s< i)
                    if ((*(&arg1[sx.q(r10_2) * 6] + 0x4c)).d f> *(&arg1[sx.q(r8_2.d) * 6] + 0x4c))
                        r10_2 = r8_2.d
                    
                    r8_2 = zx.q(r10_2)
                
                void* rdx_10 = &arg1[sx.q(r8_2.d) * 6]
                result = &arg1[sx.q(r11_2.d) * 6]
                
                if ((*(result + 0x4c)).d f<= *(rdx_10 + 0x4c))
                    break
                
                if (result != rdx_10)
                    zmm2 = *result
                    zmm3 = *(result + 0x10)
                    zmm4 = *(result + 0x20)
                    zmm5 = *(result + 0x30)
                    zmm6 = *(result + 0x40)
                    zmm7 = *(result + 0x50)
                    *result = *rdx_10
                    *(result + 0x10) = *(rdx_10 + 0x10)
                    *(result + 0x20) = *(rdx_10 + 0x20)
                    *(result + 0x30) = *(rdx_10 + 0x30)
                    *(result + 0x40) = *(rdx_10 + 0x40)
                    *(result + 0x50) = *(rdx_10 + 0x50)
                    *rdx_10 = zmm2
                    *(rdx_10 + 0x10) = zmm3
                    *(rdx_10 + 0x20) = zmm4
                    *(rdx_10 + 0x30) = zmm5
                    *(rdx_10 + 0x40) = zmm6
                    *(rdx_10 + 0x50) = zmm7
                
                result = zx.q(((r8_2 << 1) + 1).d)
                r11_2 = zx.q(r8_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_3 -= 0x60
    while (i s> 0)

return result
