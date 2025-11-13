// 函数: sub_14098d210
// 地址: 0x14098d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int128_t zmm2
int128_t zmm3
int128_t zmm4
int128_t zmm5

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r14_1 = r12
        
        if (r13_1 s< arg2)
            do
                int32_t rsi_1 = r14_1 * 2
                uint64_t rbx_1 = zx.q(rsi_1 + 1)
                int32_t rcx = (rbx_1 + 1).d
                
                if (rcx s< arg2)
                    if (sub_140b5d160(&arg1[sx.q(rcx) * 5], &arg1[sx.q(rbx_1.d) * 5]) s< 0)
                        rbx_1 = zx.q(rsi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int32_t* rsi_4 = &arg1[sx.q(rbx_1.d) * 5]
                int128_t* rbp_3 = &arg1[sx.q(r14_1) * 5]
                result = sub_140b5d160(rbp_3, rsi_4)
                
                if (result.d s>= 0)
                    break
                
                if (rbp_3 != rsi_4)
                    zmm2 = *rbp_3
                    zmm3 = rbp_3[1]
                    zmm4 = rbp_3[2]
                    zmm5 = rbp_3[3]
                    zmm6 = rbp_3[4]
                    *rbp_3 = *rsi_4
                    rbp_3[1] = *(rsi_4 + 0x10)
                    rbp_3[2] = *(rsi_4 + 0x20)
                    rbp_3[3] = *(rsi_4 + 0x30)
                    rbp_3[4] = *(rsi_4 + 0x40)
                    *rsi_4 = zmm2
                    *(rsi_4 + 0x10) = zmm3
                    *(rsi_4 + 0x20) = zmm4
                    *(rsi_4 + 0x30) = zmm5
                    *(rsi_4 + 0x40) = zmm6
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                r14_1 = rbx_1.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* r12_3 = &arg1[result * 5]
    
    do
        if (arg1 != r12_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            zmm5 = arg1[3]
            zmm6 = arg1[4]
            *arg1 = *r12_3
            arg1[1] = r12_3[1]
            arg1[2] = r12_3[2]
            arg1[3] = r12_3[3]
            arg1[4] = r12_3[4]
            *r12_3 = zmm2
            r12_3[1] = zmm3
            r12_3[2] = zmm4
            r12_3[3] = zmm5
            r12_3[4] = zmm6
        
        int32_t r15_1 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rsi_5 = r15_1 * 2
                rbx_2 = zx.q(rsi_5 + 1)
                int32_t rcx_5 = (rbx_2 + 1).d
                
                if (rcx_5 s< i)
                    if (sub_140b5d160(&arg1[sx.q(rcx_5) * 5], &arg1[sx.q(rbx_2.d) * 5]) s< 0)
                        rbx_2 = zx.q(rsi_5)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int32_t* rsi_8 = &arg1[sx.q(rbx_2.d) * 5]
                int32_t* rbp_6 = &arg1[sx.q(r15_1) * 5]
                result = sub_140b5d160(rbp_6, rsi_8)
                
                if (result.d s>= 0)
                    break
                
                if (rbp_6 != rsi_8)
                    zmm2 = *rbp_6
                    zmm3 = *(rbp_6 + 0x10)
                    zmm4 = *(rbp_6 + 0x20)
                    zmm5 = *(rbp_6 + 0x30)
                    zmm6 = *(rbp_6 + 0x40)
                    *rbp_6 = *rsi_8
                    *(rbp_6 + 0x10) = *(rsi_8 + 0x10)
                    *(rbp_6 + 0x20) = *(rsi_8 + 0x20)
                    *(rbp_6 + 0x30) = *(rsi_8 + 0x30)
                    *(rbp_6 + 0x40) = *(rsi_8 + 0x40)
                    *rsi_8 = zmm2
                    *(rsi_8 + 0x10) = zmm3
                    *(rsi_8 + 0x20) = zmm4
                    *(rsi_8 + 0x30) = zmm5
                    *(rsi_8 + 0x40) = zmm6
                
                r15_1 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r12_3 -= 0x50
    while (i s> 0)

return result
