// 函数: sub_141e8df10
// 地址: 0x141e8df10
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
                uint64_t r9_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r10_1 = (r9_1 + 1).d
                
                if (r10_1 s< arg2)
                    if (arg1[sx.q(r10_1) * 7 + 1].d.d f> arg1[sx.q(r9_1.d) * 7 + 1].d)
                        r10_1 = r9_1.d
                    
                    r9_1 = zx.q(r10_1)
                
                int128_t* rdx_3 = sx.q(r11_1.d) * 0x70 + arg1
                result = &arg1[sx.q(r9_1.d) * 7]
                
                if ((*(result + 0x10)).d f>= rdx_3[1].d)
                    break
                
                if (rdx_3 != result)
                    zmm2 = *rdx_3
                    zmm3 = rdx_3[1]
                    zmm4 = rdx_3[2]
                    zmm5 = rdx_3[3]
                    zmm6 = rdx_3[4]
                    zmm7 = rdx_3[5]
                    zmm8 = rdx_3[6]
                    *rdx_3 = *result
                    rdx_3[1] = *(result + 0x10)
                    rdx_3[2] = *(result + 0x20)
                    rdx_3[3] = *(result + 0x30)
                    rdx_3[4] = *(result + 0x40)
                    rdx_3[5] = *(result + 0x50)
                    rdx_3[6] = *(result + 0x60)
                    *result = zmm2
                    *(result + 0x10) = zmm3
                    *(result + 0x20) = zmm4
                    *(result + 0x30) = zmm5
                    *(result + 0x40) = zmm6
                    *(result + 0x50) = zmm7
                    *(result + 0x60) = zmm8
                
                result = zx.q(((r9_1 << 1) + 1).d)
                r11_1 = zx.q(r9_1.d)
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* rdi_2 = result * 0x70 + arg1
    
    do
        if (arg1 != rdi_2)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            zmm6 = arg1[4]
            zmm7 = arg1[5]
            zmm8 = arg1[6]
            *arg1 = *rdi_2
            arg1[1] = rdi_2[1]
            arg1[2] = rdi_2[2]
            arg1[3] = rdi_2[3]
            arg1[4] = rdi_2[4]
            arg1[5] = rdi_2[5]
            arg1[6] = rdi_2[6]
            *rdi_2 = zmm2
            rdi_2[1] = zmm3
            rdi_2[2] = zmm4
            rdi_2[3] = zmm5
            rdi_2[4] = zmm6
            rdi_2[5] = zmm7
            rdi_2[6] = zmm8
        
        uint64_t r11_2 = 0
        
        if (i s> 1)
            do
                uint64_t r9_2 = zx.q(((r11_2 << 1) + 1).d)
                int32_t r10_2 = (r9_2 + 1).d
                
                if (r10_2 s< i)
                    if (arg1[sx.q(r10_2) * 7 + 1].d.d f> arg1[sx.q(r9_2.d) * 7 + 1].d)
                        r10_2 = r9_2.d
                    
                    r9_2 = zx.q(r10_2)
                
                void* rdx_6 = sx.q(r11_2.d) * 0x70 + arg1
                result = &arg1[sx.q(r9_2.d) * 7]
                
                if ((*(result + 0x10)).d f>= *(rdx_6 + 0x10))
                    break
                
                if (rdx_6 != result)
                    zmm2 = *rdx_6
                    zmm3 = *(rdx_6 + 0x10)
                    zmm4 = *(rdx_6 + 0x20)
                    zmm5 = *(rdx_6 + 0x30)
                    zmm6 = *(rdx_6 + 0x40)
                    zmm7 = *(rdx_6 + 0x50)
                    zmm8 = *(rdx_6 + 0x60)
                    *rdx_6 = *result
                    *(rdx_6 + 0x10) = *(result + 0x10)
                    *(rdx_6 + 0x20) = *(result + 0x20)
                    *(rdx_6 + 0x30) = *(result + 0x30)
                    *(rdx_6 + 0x40) = *(result + 0x40)
                    *(rdx_6 + 0x50) = *(result + 0x50)
                    *(rdx_6 + 0x60) = *(result + 0x60)
                    *result = zmm2
                    *(result + 0x10) = zmm3
                    *(result + 0x20) = zmm4
                    *(result + 0x30) = zmm5
                    *(result + 0x40) = zmm6
                    *(result + 0x50) = zmm7
                    *(result + 0x60) = zmm8
                
                result = zx.q(((r9_2 << 1) + 1).d)
                r11_2 = zx.q(r9_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x70
    while (i s> 0)

return result
