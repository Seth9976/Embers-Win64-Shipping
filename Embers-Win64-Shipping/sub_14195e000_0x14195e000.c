// 函数: sub_14195e000
// 地址: 0x14195e000
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
int32_t rsi = result.d
int128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rsi
        
        if (rbp_1 s< arg2)
            uint64_t rcx
            
            do
                int32_t r9_1 = r10_1 * 2
                rcx = zx.q(r9_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    void* rax_7 = &arg1[(sx.q(r9_1) + 2) * 8]
                    int64_t r11_1 = *(rax_7 + 0x68)
                    int64_t temp4_1 = *(&arg1[sx.q(rcx.d) * 8] + 0x68)
                    
                    if (r11_1 != temp4_1)
                        rax_7.b = r11_1 u> temp4_1
                    else
                        rax_7.b = arg1[sx.q(rcx.d) * 8 + 7].q u< *(rax_7 + 0x70)
                    
                    if (rax_7.b != 0)
                        rcx = zx.q(r9_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int128_t* r9_4 = &arg1[sx.q(r10_1) * 8]
                int128_t* rdx_5 = &arg1[sx.q(rcx.d) * 8]
                result = *(r9_4 + 0x68)
                int64_t temp3_1 = *(rdx_5 + 0x68)
                
                if (result != temp3_1)
                    result.b = result u> temp3_1
                else
                    result.b = rdx_5[7].q u< r9_4[7].q
                
                if (result.b == 0)
                    break
                
                if (r9_4 != rdx_5)
                    zmm2 = *r9_4
                    zmm3 = r9_4[1]
                    zmm4 = r9_4[2]
                    zmm5 = r9_4[3]
                    zmm6 = r9_4[4]
                    zmm7 = r9_4[5]
                    zmm8 = r9_4[6]
                    zmm9 = r9_4[7]
                    *r9_4 = *rdx_5
                    r9_4[1] = rdx_5[1]
                    r9_4[2] = rdx_5[2]
                    r9_4[3] = rdx_5[3]
                    r9_4[4] = rdx_5[4]
                    r9_4[5] = rdx_5[5]
                    r9_4[6] = rdx_5[6]
                    r9_4[7] = rdx_5[7]
                    *rdx_5 = zmm2
                    rdx_5[1] = zmm3
                    rdx_5[2] = zmm4
                    rdx_5[3] = zmm5
                    rdx_5[4] = zmm6
                    rdx_5[5] = zmm7
                    rdx_5[6] = zmm8
                    rdx_5[7] = zmm9
                
                r10_1 = rcx.d
            while (((rcx << 1) + 1).d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rsi_3 = &arg1[sx.q(i) * 8]
    
    do
        if (arg1 != rsi_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            zmm6 = arg1[4]
            zmm7 = arg1[5]
            zmm8 = arg1[6]
            zmm9 = arg1[7]
            *arg1 = *rsi_3
            arg1[1] = rsi_3[1]
            arg1[2] = rsi_3[2]
            arg1[3] = rsi_3[3]
            arg1[4] = rsi_3[4]
            arg1[5] = rsi_3[5]
            arg1[6] = rsi_3[6]
            arg1[7] = rsi_3[7]
            *rsi_3 = zmm2
            rsi_3[1] = zmm3
            rsi_3[2] = zmm4
            rsi_3[3] = zmm5
            rsi_3[4] = zmm6
            rsi_3[5] = zmm7
            rsi_3[6] = zmm8
            rsi_3[7] = zmm9
        
        int32_t r10_2 = 0
        
        if (i s> 1)
            do
                int32_t r9_5 = r10_2 * 2
                uint64_t rcx_2 = zx.q(r9_5 + 1)
                
                if ((rcx_2 + 1).d s< i)
                    void* rax_12 = &arg1[(sx.q(r9_5) + 2) * 8]
                    int64_t rbx_1 = *(rax_12 + 0x68)
                    int64_t temp8_1 = *(&arg1[sx.q(rcx_2.d) * 8] + 0x68)
                    
                    if (rbx_1 != temp8_1)
                        rax_12.b = rbx_1 u> temp8_1
                    else
                        rax_12.b = arg1[sx.q(rcx_2.d) * 8 + 7].q u< *(rax_12 + 0x70)
                    
                    if (rax_12.b != 0)
                        rcx_2 = zx.q(r9_5)
                    
                    rcx_2 = zx.q(rcx_2.d + 1)
                
                int128_t* r9_8 = &arg1[sx.q(r10_2) * 8]
                void* rdx_10 = &arg1[sx.q(rcx_2.d) * 8]
                result = *(r9_8 + 0x68)
                int64_t temp7_1 = *(rdx_10 + 0x68)
                
                if (result != temp7_1)
                    result.b = result u> temp7_1
                else
                    result.b = *(rdx_10 + 0x70) u< r9_8[7].q
                
                if (result.b == 0)
                    break
                
                if (r9_8 != rdx_10)
                    zmm2 = *r9_8
                    zmm3 = r9_8[1]
                    zmm4 = r9_8[2]
                    zmm5 = r9_8[3]
                    zmm6 = r9_8[4]
                    zmm7 = r9_8[5]
                    zmm8 = r9_8[6]
                    zmm9 = r9_8[7]
                    *r9_8 = *rdx_10
                    r9_8[1] = *(rdx_10 + 0x10)
                    r9_8[2] = *(rdx_10 + 0x20)
                    r9_8[3] = *(rdx_10 + 0x30)
                    r9_8[4] = *(rdx_10 + 0x40)
                    r9_8[5] = *(rdx_10 + 0x50)
                    r9_8[6] = *(rdx_10 + 0x60)
                    r9_8[7] = *(rdx_10 + 0x70)
                    *rdx_10 = zmm2
                    *(rdx_10 + 0x10) = zmm3
                    *(rdx_10 + 0x20) = zmm4
                    *(rdx_10 + 0x30) = zmm5
                    *(rdx_10 + 0x40) = zmm6
                    *(rdx_10 + 0x50) = zmm7
                    *(rdx_10 + 0x60) = zmm8
                    *(rdx_10 + 0x70) = zmm9
                
                result = zx.q(((rcx_2 << 1) + 1).d)
                r10_2 = rcx_2.d
            while (result.d s< i)
        
        i -= 1
        rsi_3 = &rsi_3[-8]
    while (i s> 0)

return result
