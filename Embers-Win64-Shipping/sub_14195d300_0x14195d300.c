// 函数: sub_14195d300
// 地址: 0x14195d300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbx = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t rdi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rbx
        
        if (rdi_1 s< arg2)
            do
                int32_t result_2 = r10_1 * 2
                result = zx.q(result_2 + 1)
                
                if ((result + 1).d s< arg2)
                    if (*(sx.q(result_2) * 0xb8 + arg1 + 0x1b0)
                            s> *(sx.q(result.d) * 0xb8 + arg1 + 0x40))
                        result = zx.q(result_2)
                    
                    result = zx.q(result.d + 1)
                
                int128_t* r9_2 = sx.q(result.d) * 0xb8 + arg1
                int128_t* r10_3 = sx.q(r10_1) * 0xb8 + arg1
                
                if (r10_3[4].q s<= r9_2[4].q)
                    break
                
                if (r10_3 != r9_2)
                    int64_t rcx_8 = r10_3[0xb].q
                    zmm1 = r10_3[1]
                    var_188 = *r10_3
                    int128_t var_168_1 = r10_3[2]
                    int128_t var_158_1 = r10_3[3]
                    int128_t var_148_1 = r10_3[4]
                    int128_t var_138_1 = r10_3[5]
                    int128_t var_128_1 = r10_3[6]
                    int128_t var_118_1 = r10_3[7]
                    int128_t var_108_1 = r10_3[8]
                    int128_t var_f8_1 = r10_3[9]
                    int128_t var_e8_1 = r10_3[0xa]
                    *r10_3 = *r9_2
                    r10_3[1] = r9_2[1]
                    r10_3[2] = r9_2[2]
                    r10_3[3] = r9_2[3]
                    r10_3[4] = r9_2[4]
                    r10_3[5] = r9_2[5]
                    r10_3[6] = r9_2[6]
                    r10_3[7] = r9_2[7]
                    r10_3[8] = r9_2[8]
                    r10_3[9] = r9_2[9]
                    r10_3[0xa] = r9_2[0xa]
                    r10_3[0xb].q = r9_2[0xb].q
                    *r9_2 = var_188
                    r9_2[1] = zmm1
                    r9_2[2] = var_168_1
                    r9_2[3] = var_158_1
                    r9_2[4] = var_148_1
                    r9_2[5] = var_138_1
                    r9_2[6] = var_128_1
                    r9_2[7] = var_118_1
                    r9_2[8] = var_108_1
                    r9_2[9] = var_f8_1
                    r9_2[0xa] = var_e8_1
                    r9_2[0xb].q = rcx_8
                
                r10_1 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< arg2)
        
        rdi_1 -= 2
        temp2_1 = rbx
        rbx -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    void* rbx_2 = result * 0xb8 + arg1
    
    do
        if (arg1 != rbx_2)
            uint64_t result_1 = arg1[0xb].q
            zmm1 = arg1[1]
            var_188 = *arg1
            int128_t var_168_2 = arg1[2]
            int128_t var_158_2 = arg1[3]
            int128_t var_148_2 = arg1[4]
            int128_t var_138_2 = arg1[5]
            int128_t var_128_2 = arg1[6]
            int128_t var_118_2 = arg1[7]
            int128_t var_108_2 = arg1[8]
            int128_t var_f8_2 = arg1[9]
            int128_t var_e8_2 = arg1[0xa]
            *arg1 = *rbx_2
            arg1[1] = *(rbx_2 + 0x10)
            arg1[2] = *(rbx_2 + 0x20)
            arg1[3] = *(rbx_2 + 0x30)
            arg1[4] = *(rbx_2 + 0x40)
            arg1[5] = *(rbx_2 + 0x50)
            arg1[6] = *(rbx_2 + 0x60)
            arg1[7] = *(rbx_2 + 0x70)
            arg1[8] = *(rbx_2 + 0x80)
            arg1[9] = *(rbx_2 + 0x90)
            arg1[0xa] = *(rbx_2 + 0xa0)
            arg1[0xb].q = *(rbx_2 + 0xb0)
            *rbx_2 = var_188
            *(rbx_2 + 0x10) = zmm1
            *(rbx_2 + 0x20) = var_168_2
            *(rbx_2 + 0x30) = var_158_2
            *(rbx_2 + 0x40) = var_148_2
            *(rbx_2 + 0x50) = var_138_2
            *(rbx_2 + 0x60) = var_128_2
            *(rbx_2 + 0x70) = var_118_2
            *(rbx_2 + 0x80) = var_108_2
            result = result_1
            *(rbx_2 + 0x90) = var_f8_2
            *(rbx_2 + 0xa0) = var_e8_2
            *(rbx_2 + 0xb0) = result
        
        int32_t r10_4 = 0
        
        if (i s> 1)
            do
                int32_t r9_3 = r10_4 * 2
                uint64_t rdx_2 = zx.q(r9_3 + 1)
                
                if ((rdx_2 + 1).d s< i)
                    if (*(sx.q(r9_3) * 0xb8 + arg1 + 0x1b0)
                            s> *(sx.q(rdx_2.d) * 0xb8 + arg1 + 0x40))
                        rdx_2 = zx.q(r9_3)
                    
                    rdx_2 = zx.q(rdx_2.d + 1)
                
                void* r9_5 = sx.q(rdx_2.d) * 0xb8 + arg1
                int128_t* r10_6 = sx.q(r10_4) * 0xb8 + arg1
                result = *(r9_5 + 0x40)
                
                if (r10_6[4].q s<= result)
                    break
                
                if (r10_6 != r9_5)
                    int64_t rax_13 = r10_6[0xb].q
                    int128_t var_d0_1 = *r10_6
                    int128_t var_c0_1 = r10_6[1]
                    int128_t var_b0_1 = r10_6[2]
                    int128_t var_a0_1 = r10_6[3]
                    int128_t var_90_1 = r10_6[4]
                    int128_t var_80_1 = r10_6[5]
                    int128_t var_70_1 = r10_6[6]
                    int128_t var_60_1 = r10_6[7]
                    int128_t var_50_1 = r10_6[8]
                    int128_t var_40_1 = r10_6[9]
                    int128_t var_30_1 = r10_6[0xa]
                    *r10_6 = *r9_5
                    r10_6[1] = *(r9_5 + 0x10)
                    r10_6[2] = *(r9_5 + 0x20)
                    r10_6[3] = *(r9_5 + 0x30)
                    r10_6[4] = *(r9_5 + 0x40)
                    r10_6[5] = *(r9_5 + 0x50)
                    r10_6[6] = *(r9_5 + 0x60)
                    r10_6[7] = *(r9_5 + 0x70)
                    r10_6[8] = *(r9_5 + 0x80)
                    r10_6[9] = *(r9_5 + 0x90)
                    r10_6[0xa] = *(r9_5 + 0xa0)
                    r10_6[0xb].q = *(r9_5 + 0xb0)
                    *r9_5 = var_d0_1
                    *(r9_5 + 0x10) = var_c0_1
                    *(r9_5 + 0x20) = var_b0_1
                    *(r9_5 + 0x30) = var_a0_1
                    *(r9_5 + 0x40) = var_90_1
                    *(r9_5 + 0x50) = var_80_1
                    *(r9_5 + 0x60) = var_70_1
                    *(r9_5 + 0x70) = var_60_1
                    *(r9_5 + 0x80) = var_50_1
                    *(r9_5 + 0x90) = var_40_1
                    *(r9_5 + 0xa0) = var_30_1
                    *(r9_5 + 0xb0) = rax_13
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                r10_4 = rdx_2.d
            while (result.d s< i)
        
        i -= 1
        rbx_2 -= 0xb8
    while (i s> 0)

__security_check_cookie(rax_1 ^ &var_188)
return result
