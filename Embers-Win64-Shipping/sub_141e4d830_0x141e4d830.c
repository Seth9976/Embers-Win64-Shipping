// 函数: sub_141e4d830
// 地址: 0x141e4d830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int128_t zmm10
int128_t var_88 = zmm10
int64_t zmm2
uint128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r12
        
        if (r13_1 s< arg2)
            uint64_t rbx_1
            
            do
                int32_t rsi_1 = r14_1 * 2
                rbx_1 = zx.q(rsi_1 + 1)
                int32_t rcx = (rbx_1 + 1).d
                
                if (rcx s< arg2)
                    if (sub_140b5d160(sx.q(rcx) * 0x88 + arg1, sx.q(rbx_1.d) * 0x88 + arg1) s< 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int32_t* rsi_3 = sx.q(rbx_1.d) * 0x88 + arg1
                int128_t* rbp_2 = sx.q(r14_1) * 0x88 + arg1
                result = sub_140b5d160(rbp_2, rsi_3)
                
                if (result.d s>= 0)
                    break
                
                if (rbp_2 != rsi_3)
                    zmm3 = *rbp_2
                    zmm4 = rbp_2[1]
                    zmm5 = rbp_2[2]
                    zmm6 = rbp_2[3]
                    zmm7 = rbp_2[4]
                    zmm8 = rbp_2[5]
                    zmm9 = rbp_2[6]
                    zmm10 = rbp_2[7]
                    zmm2 = rbp_2[8].q
                    *rbp_2 = *rsi_3
                    rbp_2[1] = *(rsi_3 + 0x10)
                    rbp_2[2] = *(rsi_3 + 0x20)
                    rbp_2[3] = *(rsi_3 + 0x30)
                    rbp_2[4] = *(rsi_3 + 0x40)
                    rbp_2[5] = *(rsi_3 + 0x50)
                    rbp_2[6] = *(rsi_3 + 0x60)
                    rbp_2[7] = *(rsi_3 + 0x70)
                    rbp_2[8].q = *(rsi_3 + 0x80)
                    *rsi_3 = zmm3
                    *(rsi_3 + 0x10) = zmm4
                    *(rsi_3 + 0x20) = zmm5
                    *(rsi_3 + 0x30) = zmm6
                    *(rsi_3 + 0x40) = zmm7
                    *(rsi_3 + 0x50) = zmm8
                    *(rsi_3 + 0x60) = zmm9
                    *(rsi_3 + 0x70) = zmm10
                    *(rsi_3 + 0x80) = zmm2
                
                r14_1 = rbx_1.d
            while (((rbx_1 << 1) + 1).d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    uint128_t* r12_2 = result * 0x88 + arg1
    
    do
        if (arg1 != r12_2)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm5 = arg1[2]
            zmm6 = arg1[3]
            zmm7 = arg1[4]
            zmm8 = arg1[5]
            zmm9 = arg1[6]
            zmm10 = arg1[7]
            zmm2 = arg1[8].q
            *arg1 = *r12_2
            arg1[1] = r12_2[1]
            arg1[2] = r12_2[2]
            arg1[3] = r12_2[3]
            arg1[4] = r12_2[4]
            arg1[5] = r12_2[5]
            arg1[6] = r12_2[6]
            arg1[7] = r12_2[7]
            arg1[8].q = r12_2[8].q
            *r12_2 = zmm3
            r12_2[1] = zmm4
            r12_2[2] = zmm5
            r12_2[3] = zmm6
            r12_2[4] = zmm7
            r12_2[5] = zmm8
            r12_2[6] = zmm9
            r12_2[7] = zmm10
            r12_2[8].q = zmm2
        
        int32_t r14_2 = 0
        
        if (i s> 1)
            do
                int32_t rsi_4 = r14_2 * 2
                uint64_t rbx_3 = zx.q(rsi_4 + 1)
                int32_t rcx_4 = (rbx_3 + 1).d
                
                if (rcx_4 s< i)
                    if (sub_140b5d160(sx.q(rcx_4) * 0x88 + arg1, sx.q(rbx_3.d) * 0x88 + arg1) s< 0)
                        rbx_3 = zx.q(rsi_4)
                    
                    rbx_3 = zx.q(rbx_3.d + 1)
                
                int32_t* rsi_6 = sx.q(rbx_3.d) * 0x88 + arg1
                uint128_t* rbp_4 = sx.q(r14_2) * 0x88 + arg1
                result = sub_140b5d160(rbp_4, rsi_6)
                
                if (result.d s>= 0)
                    break
                
                if (rbp_4 != rsi_6)
                    zmm3 = *rbp_4
                    zmm4 = rbp_4[1]
                    zmm5 = rbp_4[2]
                    zmm6 = rbp_4[3]
                    zmm7 = rbp_4[4]
                    zmm8 = rbp_4[5]
                    zmm9 = rbp_4[6]
                    zmm10 = rbp_4[7]
                    zmm2 = rbp_4[8].q
                    *rbp_4 = *rsi_6
                    rbp_4[1] = *(rsi_6 + 0x10)
                    rbp_4[2] = *(rsi_6 + 0x20)
                    rbp_4[3] = *(rsi_6 + 0x30)
                    rbp_4[4] = *(rsi_6 + 0x40)
                    rbp_4[5] = *(rsi_6 + 0x50)
                    rbp_4[6] = *(rsi_6 + 0x60)
                    rbp_4[7] = *(rsi_6 + 0x70)
                    rbp_4[8].q = *(rsi_6 + 0x80)
                    *rsi_6 = zmm3
                    *(rsi_6 + 0x10) = zmm4
                    *(rsi_6 + 0x20) = zmm5
                    *(rsi_6 + 0x30) = zmm6
                    *(rsi_6 + 0x40) = zmm7
                    *(rsi_6 + 0x50) = zmm8
                    *(rsi_6 + 0x60) = zmm9
                    *(rsi_6 + 0x70) = zmm10
                    *(rsi_6 + 0x80) = zmm2
                
                result = zx.q(((rbx_3 << 1) + 1).d)
                r14_2 = rbx_3.d
            while (result.d s< i)
        
        i -= 1
        r12_2 -= 0x88
    while (i s> 0)

return result
