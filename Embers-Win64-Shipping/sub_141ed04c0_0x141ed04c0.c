// 函数: sub_141ed04c0
// 地址: 0x141ed04c0
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
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
uint128_t zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r11_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                uint64_t rdx_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r10_1 = (rdx_1 + 1).d
                
                if (r10_1 s< arg2)
                    int64_t rcx = sx.q(r10_1) * 0x88
                    int128_t* rax_4 = *arg4
                    zmm3 = *rax_4
                    zmm5 = *(rax_4 + 4)
                    zmm2 = *(rax_4 + 8)
                    zmm4.d = zmm5.d f- *(rcx + arg1 + 0x20)
                    zmm1.d = zmm3.d f- *(rcx + arg1 + 0x1c)
                    zmm0.d = zmm2.d f- *(rcx + arg1 + 0x24)
                    int64_t rcx_1 = sx.q(rdx_1.d) * 0x88
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm4.d = zmm4.d f+ zmm1.d
                    zmm5.d = zmm5.d f- *(rcx_1 + arg1 + 0x20)
                    zmm3.d = zmm3.d f- *(rcx_1 + arg1 + 0x1c)
                    zmm2.d = zmm2.d f- *(rcx_1 + arg1 + 0x24)
                    zmm4.d = zmm4.d f+ zmm0.d
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm5.d = zmm5.d f+ zmm3.d
                    zmm5.d = zmm5.d f+ zmm2.d
                    
                    if (zmm4.d f< zmm5.d)
                        r10_1 = rdx_1.d
                    
                    rdx_1 = zx.q(r10_1)
                
                int128_t* rax_7 = *arg4
                uint128_t* r10_3 = sx.q(r11_1.d) * 0x88 + arg1
                zmm4 = *rax_7
                zmm5 = *(rax_7 + 4)
                zmm2 = *(rax_7 + 8)
                zmm3.d = zmm5.d f- r10_3[2].d
                zmm1.d = zmm4.d f- *(r10_3 + 0x1c)
                zmm0.d = zmm2.d f- *(r10_3 + 0x24)
                zmm3.d = zmm3.d f* zmm3.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                result = sx.q(rdx_1.d) * 0x88 + arg1
                zmm3.d = zmm3.d f+ zmm1.d
                zmm5.d = zmm5.d f- *(result + 0x20)
                zmm4.d = zmm4.d f- *(result + 0x1c)
                zmm2.d = zmm2.d f- *(result + 0x24)
                zmm3.d = zmm3.d f+ zmm0.d
                zmm5.d = zmm5.d f* zmm5.d
                zmm4.d = zmm4.d f* zmm4.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm4.d
                zmm5.d = zmm5.d f+ zmm2.d
                
                if (zmm3.d f>= zmm5.d)
                    break
                
                if (r10_3 != result)
                    zmm3 = *r10_3
                    zmm4 = r10_3[1]
                    zmm5 = r10_3[2]
                    zmm6 = r10_3[3]
                    zmm7 = r10_3[4]
                    zmm8 = r10_3[5]
                    zmm9 = r10_3[6]
                    zmm10 = r10_3[7]
                    zmm2 = zx.o(r10_3[8].q)
                    *r10_3 = *result
                    r10_3[1] = *(result + 0x10)
                    r10_3[2] = *(result + 0x20)
                    r10_3[3] = *(result + 0x30)
                    r10_3[4] = *(result + 0x40)
                    r10_3[5] = *(result + 0x50)
                    r10_3[6] = *(result + 0x60)
                    r10_3[7] = *(result + 0x70)
                    r10_3[8].q = *(result + 0x80)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm8
                    *(result + 0x60) = zmm9
                    *(result + 0x70) = zmm10
                    *(result + 0x80) = zmm2.q
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r11_1 = zx.q(rdx_1.d)
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
            zmm2 = zx.o(arg1[8].q)
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
            *(rdi_2 + 0x80) = zmm2.q
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t rdx_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r10_4 = (rdx_2 + 1).d
                
                if (r10_4 s< i)
                    int64_t rcx_2 = sx.q(r10_4) * 0x88
                    uint128_t* rax_11 = *arg4
                    zmm3 = *rax_11
                    zmm5 = *(rax_11 + 4)
                    zmm2 = *(rax_11 + 8)
                    zmm4.d = zmm5.d f- *(rcx_2 + arg1 + 0x20)
                    zmm1.d = zmm3.d f- *(rcx_2 + arg1 + 0x1c)
                    zmm0.d = zmm2.d f- *(rcx_2 + arg1 + 0x24)
                    int64_t rcx_3 = sx.q(rdx_2.d) * 0x88
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm4.d = zmm4.d f+ zmm1.d
                    zmm5.d = zmm5.d f- *(rcx_3 + arg1 + 0x20)
                    zmm3.d = zmm3.d f- *(rcx_3 + arg1 + 0x1c)
                    zmm2.d = zmm2.d f- *(rcx_3 + arg1 + 0x24)
                    zmm4.d = zmm4.d f+ zmm0.d
                    zmm5.d = zmm5.d f* zmm5.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm5.d = zmm5.d f+ zmm3.d
                    zmm5.d = zmm5.d f+ zmm2.d
                    
                    if (zmm4.d f< zmm5.d)
                        r10_4 = rdx_2.d
                    
                    rdx_2 = zx.q(r10_4)
                
                uint128_t* rax_14 = *arg4
                uint128_t* r10_6 = sx.q(rbx_1.d) * 0x88 + arg1
                zmm4 = *rax_14
                zmm5 = *(rax_14 + 4)
                zmm2 = *(rax_14 + 8)
                zmm3.d = zmm5.d f- r10_6[2].d
                zmm1.d = zmm4.d f- *(r10_6 + 0x1c)
                zmm0.d = zmm2.d f- *(r10_6 + 0x24)
                zmm3.d = zmm3.d f* zmm3.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                result = sx.q(rdx_2.d) * 0x88 + arg1
                zmm3.d = zmm3.d f+ zmm1.d
                zmm5.d = zmm5.d f- *(result + 0x20)
                zmm4.d = zmm4.d f- *(result + 0x1c)
                zmm2.d = zmm2.d f- *(result + 0x24)
                zmm3.d = zmm3.d f+ zmm0.d
                zmm5.d = zmm5.d f* zmm5.d
                zmm4.d = zmm4.d f* zmm4.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm5.d = zmm5.d f+ zmm4.d
                zmm5.d = zmm5.d f+ zmm2.d
                
                if (zmm3.d f>= zmm5.d)
                    break
                
                if (r10_6 != result)
                    zmm3 = *r10_6
                    zmm4 = r10_6[1]
                    zmm5 = r10_6[2]
                    zmm6 = r10_6[3]
                    zmm7 = r10_6[4]
                    zmm8 = r10_6[5]
                    zmm9 = r10_6[6]
                    zmm10 = r10_6[7]
                    zmm2 = zx.o(r10_6[8].q)
                    *r10_6 = *result
                    r10_6[1] = *(result + 0x10)
                    r10_6[2] = *(result + 0x20)
                    r10_6[3] = *(result + 0x30)
                    r10_6[4] = *(result + 0x40)
                    r10_6[5] = *(result + 0x50)
                    r10_6[6] = *(result + 0x60)
                    r10_6[7] = *(result + 0x70)
                    r10_6[8].q = *(result + 0x80)
                    *result = zmm3
                    *(result + 0x10) = zmm4
                    *(result + 0x20) = zmm5
                    *(result + 0x30) = zmm6
                    *(result + 0x40) = zmm7
                    *(result + 0x50) = zmm8
                    *(result + 0x60) = zmm9
                    *(result + 0x70) = zmm10
                    *(result + 0x80) = zmm2.q
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                rbx_1 = zx.q(rdx_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x88
    while (i s> 0)

return result
