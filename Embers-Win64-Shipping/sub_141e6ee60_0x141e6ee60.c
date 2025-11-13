// 函数: sub_141e6ee60
// 地址: 0x141e6ee60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
int128_t zmm7
int128_t var_38 = zmm7
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
int128_t zmm8
int128_t var_48 = zmm8
int128_t zmm9
int128_t var_58 = zmm9
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int128_t zmm10
int128_t var_68 = zmm10
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
                int32_t result_1 = r11_1 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< arg2)
                    if (arg1[(sx.q(result_1) + 2) * 9].d s< arg1[sx.q(result.d) * 9].d)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                int32_t* r8_5 = &arg1[sx.q(result.d) * 9]
                int32_t* r10_3 = &arg1[sx.q(r11_1) * 9]
                
                if (*r10_3 s>= *r8_5)
                    break
                
                if (r10_3 != r8_5)
                    zmm2 = *r10_3
                    zmm3 = *(r10_3 + 0x10)
                    zmm4 = *(r10_3 + 0x20)
                    zmm5 = *(r10_3 + 0x30)
                    zmm6 = *(r10_3 + 0x40)
                    zmm7 = *(r10_3 + 0x50)
                    zmm8 = *(r10_3 + 0x60)
                    zmm9 = *(r10_3 + 0x70)
                    zmm10 = *(r10_3 + 0x80)
                    *r10_3 = *r8_5
                    *(r10_3 + 0x10) = *(r8_5 + 0x10)
                    *(r10_3 + 0x20) = *(r8_5 + 0x20)
                    *(r10_3 + 0x30) = *(r8_5 + 0x30)
                    *(r10_3 + 0x40) = *(r8_5 + 0x40)
                    *(r10_3 + 0x50) = *(r8_5 + 0x50)
                    *(r10_3 + 0x60) = *(r8_5 + 0x60)
                    *(r10_3 + 0x70) = *(r8_5 + 0x70)
                    *(r10_3 + 0x80) = *(r8_5 + 0x80)
                    *r8_5 = zmm2
                    *(r8_5 + 0x10) = zmm3
                    *(r8_5 + 0x20) = zmm4
                    *(r8_5 + 0x30) = zmm5
                    *(r8_5 + 0x40) = zmm6
                    *(r8_5 + 0x50) = zmm7
                    *(r8_5 + 0x60) = zmm8
                    *(r8_5 + 0x70) = zmm9
                    *(r8_5 + 0x80) = zmm10
                
                r11_1 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rdi_3 = &arg1[result * 9]
    
    do
        if (arg1 != rdi_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            zmm6 = arg1[4]
            zmm7 = arg1[5]
            zmm8 = arg1[6]
            zmm9 = arg1[7]
            zmm10 = arg1[8]
            *arg1 = *rdi_3
            arg1[1] = rdi_3[1]
            arg1[2] = rdi_3[2]
            arg1[3] = rdi_3[3]
            arg1[4] = rdi_3[4]
            arg1[5] = rdi_3[5]
            arg1[6] = rdi_3[6]
            arg1[7] = rdi_3[7]
            arg1[8] = rdi_3[8]
            *rdi_3 = zmm2
            rdi_3[1] = zmm3
            rdi_3[2] = zmm4
            rdi_3[3] = zmm5
            rdi_3[4] = zmm6
            rdi_3[5] = zmm7
            rdi_3[6] = zmm8
            rdi_3[7] = zmm9
            rdi_3[8] = zmm10
        
        int32_t r11_2 = 0
        
        if (i s> 1)
            do
                int32_t r10_4 = r11_2 * 2
                uint64_t r8_6 = zx.q(r10_4 + 1)
                
                if ((r8_6 + 1).d s< i)
                    if (arg1[(sx.q(r10_4) + 2) * 9].d s< arg1[sx.q(r8_6.d) * 9].d)
                        r8_6 = zx.q(r10_4)
                    
                    r8_6 = zx.q(r8_6.d + 1)
                
                int32_t* rdx_7 = &arg1[sx.q(r8_6.d) * 9]
                result = zx.q(*rdx_7)
                int32_t* r10_7 = &arg1[sx.q(r11_2) * 9]
                
                if (*r10_7 s>= result.d)
                    break
                
                if (r10_7 != rdx_7)
                    zmm2 = *r10_7
                    zmm3 = *(r10_7 + 0x10)
                    zmm4 = *(r10_7 + 0x20)
                    zmm5 = *(r10_7 + 0x30)
                    zmm6 = *(r10_7 + 0x40)
                    zmm7 = *(r10_7 + 0x50)
                    zmm8 = *(r10_7 + 0x60)
                    zmm9 = *(r10_7 + 0x70)
                    zmm10 = *(r10_7 + 0x80)
                    *r10_7 = *rdx_7
                    *(r10_7 + 0x10) = *(rdx_7 + 0x10)
                    *(r10_7 + 0x20) = *(rdx_7 + 0x20)
                    *(r10_7 + 0x30) = *(rdx_7 + 0x30)
                    *(r10_7 + 0x40) = *(rdx_7 + 0x40)
                    *(r10_7 + 0x50) = *(rdx_7 + 0x50)
                    *(r10_7 + 0x60) = *(rdx_7 + 0x60)
                    *(r10_7 + 0x70) = *(rdx_7 + 0x70)
                    *(r10_7 + 0x80) = *(rdx_7 + 0x80)
                    *rdx_7 = zmm2
                    *(rdx_7 + 0x10) = zmm3
                    *(rdx_7 + 0x20) = zmm4
                    *(rdx_7 + 0x30) = zmm5
                    *(rdx_7 + 0x40) = zmm6
                    *(rdx_7 + 0x50) = zmm7
                    *(rdx_7 + 0x60) = zmm8
                    *(rdx_7 + 0x70) = zmm9
                    *(rdx_7 + 0x80) = zmm10
                
                result = zx.q(((r8_6 << 1) + 1).d)
                r11_2 = r8_6.d
            while (result.d s< i)
        
        i -= 1
        rdi_3 -= 0x90
    while (i s> 0)

return result
