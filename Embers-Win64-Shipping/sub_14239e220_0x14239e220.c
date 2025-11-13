// 函数: sub_14239e220
// 地址: 0x14239e220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int128_t zmm2
int128_t zmm3
int128_t zmm4

if (result.d s>= 0)
    result = zx.q(((result << 1) + 1).d)
    int32_t result_1 = result.d
    int32_t temp2_1
    
    do
        int32_t r15_1 = r12
        
        if (result.d s< arg2)
            uint64_t rdi_1
            
            do
                int32_t rsi_1 = r15_1 * 2
                rdi_1 = zx.q(rsi_1 + 1)
                int32_t rcx = (rdi_1 + 1).d
                
                if (rcx s< arg2)
                    if (sub_1423a6810(arg4, &arg1[sx.q(rcx) * 3], &arg1[sx.q(rdi_1.d) * 3]) != 0)
                        rdi_1 = zx.q(rsi_1)
                    
                    rdi_1 = zx.q(rdi_1.d + 1)
                
                int64_t* rsi_4 = &arg1[sx.q(rdi_1.d) * 3]
                int128_t* rbp_3 = &arg1[sx.q(r15_1) * 3]
                
                if (sub_1423a6810(arg4, rbp_3, rsi_4) == 0)
                    break
                
                if (rbp_3 != rsi_4)
                    zmm2 = *rbp_3
                    zmm3 = rbp_3[1]
                    zmm4 = rbp_3[2]
                    *rbp_3 = *rsi_4
                    rbp_3[1] = *(rsi_4 + 0x10)
                    rbp_3[2] = *(rsi_4 + 0x20)
                    *rsi_4 = zmm2
                    *(rsi_4 + 0x10) = zmm3
                    *(rsi_4 + 0x20) = zmm4
                
                r15_1 = rdi_1.d
            while (((rdi_1 << 1) + 1).d s< arg2)
            result = zx.q(result_1)
        
        result = zx.q(result.d - 2)
        temp2_1 = r12
        r12 -= 1
        result_1 = result.d
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* r13_3 = &arg1[result * 3]
    
    do
        if (arg1 != r13_3)
            zmm2 = *arg1
            zmm3 = arg1[1]
            zmm4 = arg1[2]
            *arg1 = *r13_3
            arg1[1] = r13_3[1]
            arg1[2] = r13_3[2]
            *r13_3 = zmm2
            r13_3[1] = zmm3
            r13_3[2] = zmm4
        
        int32_t r12_1 = 0
        
        if (i s> 1)
            uint64_t rdi_2
            
            do
                int32_t rsi_5 = r12_1 * 2
                rdi_2 = zx.q(rsi_5 + 1)
                int32_t rcx_3 = (rdi_2 + 1).d
                
                if (rcx_3 s< i)
                    if (sub_1423a6810(arg4, &arg1[sx.q(rcx_3) * 3], &arg1[sx.q(rdi_2.d) * 3]) != 0)
                        rdi_2 = zx.q(rsi_5)
                    
                    rdi_2 = zx.q(rdi_2.d + 1)
                
                int64_t* rsi_8 = &arg1[sx.q(rdi_2.d) * 3]
                int64_t* rbp_6 = &arg1[sx.q(r12_1) * 3]
                result = sub_1423a6810(arg4, rbp_6, rsi_8)
                
                if (result.b == 0)
                    break
                
                if (rbp_6 != rsi_8)
                    zmm2 = *rbp_6
                    zmm3 = *(rbp_6 + 0x10)
                    zmm4 = *(rbp_6 + 0x20)
                    *rbp_6 = *rsi_8
                    *(rbp_6 + 0x10) = *(rsi_8 + 0x10)
                    *(rbp_6 + 0x20) = *(rsi_8 + 0x20)
                    *rsi_8 = zmm2
                    *(rsi_8 + 0x10) = zmm3
                    *(rsi_8 + 0x20) = zmm4
                
                r12_1 = rdi_2.d
            while (((rdi_2 << 1) + 1).d s< i)
        
        i -= 1
        r13_3 -= 0x30
    while (i s> 0)

return result
