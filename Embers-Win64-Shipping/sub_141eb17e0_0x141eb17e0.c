// 函数: sub_141eb17e0
// 地址: 0x141eb17e0
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
uint32_t rdi = result.d
int128_t zmm10
int128_t var_68 = zmm10
uint128_t zmm0
int128_t zmm1
int64_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    uint32_t temp2_1
    
    do
        uint32_t r11_1 = rdi
        
        if (rsi_1 s< arg2)
            do
                uint32_t r10_1 = r11_1 * 2
                uint64_t rdx_1 = zx.q(r10_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    char* rcx = sx.q(rdx_1.d) * 0x88
                    uint64_t r9_2 = (sx.q(r10_1) + 2) * 0x88 + arg1
                    zmm1 = *(rcx + arg1 + 8)
                    zmm0 = *(r9_2 + 8)
                    
                    if (zmm0.d f!= zmm1.d)
                        r9_2.b = zmm1.d f> zmm0.d
                    else
                        uint32_t rcx_1 = zx.d(*(rcx + arg1)) & 1
                        char rax_8 = *r9_2
                        r9_2 = 1
                        
                        if ((rax_8 & 1) != rcx_1.b)
                            r9_2 = zx.q(rcx_1)
                    
                    if (r9_2.b != 0)
                        rdx_1 = zx.q(r10_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                result = sx.q(rdx_1.d)
                char* r10_3 = sx.q(r11_1) * 0x88 + arg1
                char* r9_4 = result * 0x88 + arg1
                zmm0 = *(r10_3 + 8)
                zmm1 = *(r9_4 + 8)
                
                if (zmm0.d f!= zmm1.d)
                    r11_1.b = zmm1.d f> zmm0.d
                else
                    r11_1 = 1
                    uint32_t rcx_2 = zx.d(*r9_4) & 1
                    result.b = *r10_3 & 1
                    
                    if (result.b != rcx_2.b)
                        r11_1 = rcx_2
                
                if (r11_1.b == 0)
                    break
                
                if (r10_3 != r9_4)
                    zmm3 = *r10_3
                    zmm4 = *(r10_3 + 0x10)
                    zmm5 = *(r10_3 + 0x20)
                    zmm6 = *(r10_3 + 0x30)
                    zmm7 = *(r10_3 + 0x40)
                    zmm8 = *(r10_3 + 0x50)
                    zmm9 = *(r10_3 + 0x60)
                    zmm10 = *(r10_3 + 0x70)
                    zmm2 = *(r10_3 + 0x80)
                    *r10_3 = *r9_4
                    *(r10_3 + 0x10) = *(r9_4 + 0x10)
                    *(r10_3 + 0x20) = *(r9_4 + 0x20)
                    *(r10_3 + 0x30) = *(r9_4 + 0x30)
                    *(r10_3 + 0x40) = *(r9_4 + 0x40)
                    *(r10_3 + 0x50) = *(r9_4 + 0x50)
                    *(r10_3 + 0x60) = *(r9_4 + 0x60)
                    *(r10_3 + 0x70) = *(r9_4 + 0x70)
                    *(r10_3 + 0x80) = *(r9_4 + 0x80)
                    *r9_4 = zmm3
                    *(r9_4 + 0x10) = zmm4
                    *(r9_4 + 0x20) = zmm5
                    *(r9_4 + 0x30) = zmm6
                    *(r9_4 + 0x40) = zmm7
                    *(r9_4 + 0x50) = zmm8
                    *(r9_4 + 0x60) = zmm9
                    *(r9_4 + 0x70) = zmm10
                    *(r9_4 + 0x80) = zmm2
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r11_1 = rdx_1.d
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    void* rdi_2 = result * 0x88 + arg1
    
    do
        if (arg1 != rdi_2)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm5 = arg1[2]
            zmm6 = arg1[3]
            zmm7 = arg1[4]
            zmm8 = arg1[5]
            zmm9 = arg1[6]
            zmm10 = arg1[7]
            zmm2 = arg1[8].q
            *arg1 = *rdi_2
            arg1[1] = *(rdi_2 + 0x10)
            arg1[2] = *(rdi_2 + 0x20)
            arg1[3] = *(rdi_2 + 0x30)
            arg1[4] = *(rdi_2 + 0x40)
            arg1[5] = *(rdi_2 + 0x50)
            arg1[6] = *(rdi_2 + 0x60)
            arg1[7] = *(rdi_2 + 0x70)
            arg1[8].q = *(rdi_2 + 0x80)
            *rdi_2 = zmm3
            *(rdi_2 + 0x10) = zmm4
            *(rdi_2 + 0x20) = zmm5
            *(rdi_2 + 0x30) = zmm6
            *(rdi_2 + 0x40) = zmm7
            *(rdi_2 + 0x50) = zmm8
            *(rdi_2 + 0x60) = zmm9
            *(rdi_2 + 0x70) = zmm10
            *(rdi_2 + 0x80) = zmm2
        
        uint32_t r11_2 = 0
        
        if (i s> 1)
            do
                uint32_t r10_4 = r11_2 * 2
                uint64_t rdx_2 = zx.q(r10_4 + 1)
                
                if ((rdx_2 + 1).d s< i)
                    char* rcx_3 = sx.q(rdx_2.d) * 0x88
                    void* r9_6 = (sx.q(r10_4) + 2) * 0x88 + arg1
                    zmm1 = *(rcx_3 + arg1 + 8)
                    zmm0 = *(r9_6 + 8)
                    
                    if (zmm0.d f!= zmm1.d)
                        r9_6.b = zmm1.d f> zmm0.d
                    else
                        uint32_t rcx_4 = zx.d(*(rcx_3 + arg1)) & 1
                        char rax_16 = *r9_6
                        r9_6 = 1
                        
                        if ((rax_16 & 1) != rcx_4.b)
                            r9_6 = zx.q(rcx_4)
                    
                    if (r9_6.b != 0)
                        rdx_2 = zx.q(r10_4)
                    
                    rdx_2 = zx.q(rdx_2.d + 1)
                
                result = sx.q(rdx_2.d)
                char* r10_6 = sx.q(r11_2) * 0x88 + arg1
                void* r9_8 = result * 0x88 + arg1
                zmm0 = *(r10_6 + 8)
                zmm1 = *(r9_8 + 8)
                
                if (zmm0.d f!= zmm1.d)
                    r11_2.b = zmm1.d f> zmm0.d
                else
                    r11_2 = 1
                    uint32_t rcx_5 = zx.d(*r9_8) & 1
                    result.b = *r10_6 & 1
                    
                    if (result.b != rcx_5.b)
                        r11_2 = rcx_5
                
                if (r11_2.b == 0)
                    break
                
                if (r10_6 != r9_8)
                    zmm3 = *r10_6
                    zmm4 = *(r10_6 + 0x10)
                    zmm5 = *(r10_6 + 0x20)
                    zmm6 = *(r10_6 + 0x30)
                    zmm7 = *(r10_6 + 0x40)
                    zmm8 = *(r10_6 + 0x50)
                    zmm9 = *(r10_6 + 0x60)
                    zmm10 = *(r10_6 + 0x70)
                    zmm2 = *(r10_6 + 0x80)
                    *r10_6 = *r9_8
                    *(r10_6 + 0x10) = *(r9_8 + 0x10)
                    *(r10_6 + 0x20) = *(r9_8 + 0x20)
                    *(r10_6 + 0x30) = *(r9_8 + 0x30)
                    *(r10_6 + 0x40) = *(r9_8 + 0x40)
                    *(r10_6 + 0x50) = *(r9_8 + 0x50)
                    *(r10_6 + 0x60) = *(r9_8 + 0x60)
                    *(r10_6 + 0x70) = *(r9_8 + 0x70)
                    *(r10_6 + 0x80) = *(r9_8 + 0x80)
                    *r9_8 = zmm3
                    *(r9_8 + 0x10) = zmm4
                    *(r9_8 + 0x20) = zmm5
                    *(r9_8 + 0x30) = zmm6
                    *(r9_8 + 0x40) = zmm7
                    *(r9_8 + 0x50) = zmm8
                    *(r9_8 + 0x60) = zmm9
                    *(r9_8 + 0x70) = zmm10
                    *(r9_8 + 0x80) = zmm2
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                r11_2 = rdx_2.d
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x88
    while (i s> 0)

return result
