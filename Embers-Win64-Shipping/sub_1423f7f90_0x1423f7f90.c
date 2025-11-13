// 函数: sub_1423f7f90
// 地址: 0x1423f7f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi
int64_t* var_10 = rsi
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_1 = result.d
int32_t var_40
int64_t zmm2
int128_t zmm3
int128_t zmm4

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    var_40 = rcx
    
    do
        int32_t r12_1 = result.d
        
        if (rcx s< arg2)
            uint64_t rbx_1
            
            do
                int32_t rdi_1 = r12_1 * 2
                rbx_1 = zx.q(rdi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    rsi.b = 0
                    int64_t* rbp_1 = arg1 + (sx.q(rdi_1) + 2) * 0x28
                    int32_t* r15_1 = arg1 + sx.q(rbx_1.d) * 0x28
                    
                    if (sub_140b5d160(rbp_1, r15_1) s< 0)
                        rsi.b = 1
                    else if (*rbp_1 == *r15_1)
                        rsi.b = sub_140b5d160(&rbp_1[2], &r15_1[4]) s< 0
                    
                    if (rsi.b != 0)
                        rbx_1 = zx.q(rdi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                rsi = arg1 + sx.q(r12_1) * 0x28
                int32_t* rdi_2 = arg1 + sx.q(rbx_1.d) * 0x28
                
                if (sub_140b5d160(rsi, rdi_2) s>= 0)
                    if (*rsi != *rdi_2)
                        break
                    
                    if (sub_140b5d160(&rsi[2], &rdi_2[4]) s>= 0)
                        break
                
                if (rsi != rdi_2)
                    zmm3 = *rsi
                    zmm4 = *(rsi + 0x10)
                    zmm2 = rsi[4]
                    *rsi = *rdi_2
                    *(rsi + 0x10) = *(rdi_2 + 0x10)
                    rsi[4] = *(rdi_2 + 0x20)
                    *rdi_2 = zmm3
                    *(rdi_2 + 0x10) = zmm4
                    *(rdi_2 + 0x20) = zmm2
                
                r12_1 = rbx_1.d
            while (((rbx_1 << 1) + 1).d s< arg2)
            result = zx.q(result_1)
            rcx = var_40
        
        result = zx.q(result.d - 1)
        rcx -= 2
        result_1 = result.d
        var_40 = rcx
    while (result.d s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = arg1 + sx.q(i) * 0x28
    var_40.q = result
    
    do
        if (arg1 != result)
            zmm3 = *arg1
            zmm4 = arg1[1]
            zmm2 = arg1[2].q
            *arg1 = *result
            arg1[1] = *(result + 0x10)
            arg1[2].q = *(result + 0x20)
            *result = zmm3
            *(result + 0x10) = zmm4
            *(result + 0x20) = zmm2
        
        uint64_t r13_1 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rdi_3 = (r13_1 << 1).d
                rbx_2 = zx.q(rdi_3 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    rsi.b = 0
                    int64_t* r15_2 = arg1 + (sx.q(rdi_3) + 2) * 0x28
                    void* r12_2 = arg1 + sx.q(rbx_2.d) * 0x28
                    
                    if (sub_140b5d160(r15_2, r12_2) s< 0)
                        rsi.b = 1
                    else if (*r15_2 == *r12_2)
                        rsi.b = sub_140b5d160(&r15_2[2], r12_2 + 0x10) s< 0
                    
                    if (rsi.b != 0)
                        rbx_2 = zx.q(rdi_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                rsi = arg1 + sx.q(r13_1.d) * 0x28
                int32_t* rdi_4 = arg1 + sx.q(rbx_2.d) * 0x28
                
                if (sub_140b5d160(rsi, rdi_4) s>= 0)
                    if (*rsi != *rdi_4)
                        break
                    
                    if (sub_140b5d160(&rsi[2], &rdi_4[4]) s>= 0)
                        break
                
                if (rsi != rdi_4)
                    zmm3 = *rsi
                    zmm4 = *(rsi + 0x10)
                    zmm2 = rsi[4]
                    *rsi = *rdi_4
                    *(rsi + 0x10) = *(rdi_4 + 0x10)
                    rsi[4] = *(rdi_4 + 0x20)
                    *rdi_4 = zmm3
                    *(rdi_4 + 0x10) = zmm4
                    *(rdi_4 + 0x20) = zmm2
                
                r13_1 = zx.q(rbx_2.d)
            while (((rbx_2 << 1) + 1).d s< i)
            result = var_40.q
        
        result -= 0x28
        i -= 1
        var_40.q = result
    while (i s> 0)

return result
