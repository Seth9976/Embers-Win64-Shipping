// 函数: sub_1423f8270
// 地址: 0x1423f8270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
int64_t var_30 = r14
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_1 = result.d
int32_t var_40
int128_t zmm1

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    var_40 = rcx
    
    do
        int32_t r15_1 = result.d
        
        if (rcx s< arg2)
            uint64_t rbx_1
            
            do
                int32_t rbp_1 = r15_1 * 2
                rbx_1 = zx.q(rbp_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    r14.b = 0
                    int64_t* rdi_4 = &arg1[sx.q(rbp_1) + 2]
                    int32_t* rsi_3 = &arg1[sx.q(rbx_1.d)]
                    
                    if (sub_140b5d160(rdi_4, rsi_3) s< 0)
                        r14.b = 1
                    else if (*rdi_4 == *rsi_3)
                        r14.b = sub_140b5d160(&rdi_4[1], &rsi_3[2]) s< 0
                    
                    if (r14.b != 0)
                        rbx_1 = zx.q(rbp_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t* rsi_6 = &arg1[sx.q(r15_1)]
                int32_t* rdi_7 = &arg1[sx.q(rbx_1.d)]
                
                if (sub_140b5d160(rsi_6, rdi_7) s>= 0)
                    if (*rsi_6 != *rdi_7)
                        break
                    
                    if (sub_140b5d160(&rsi_6[1], &rdi_7[2]) s>= 0)
                        break
                
                if (rsi_6 != rdi_7)
                    zmm1 = *rsi_6
                    *rsi_6 = *rdi_7
                    *rdi_7 = zmm1
                
                r15_1 = rbx_1.d
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
    result = &arg1[sx.q(i)]
    var_40.q = result
    
    do
        if (arg1 != result)
            zmm1 = *arg1
            *arg1 = *result
            *result = zmm1
        
        int32_t r12_1 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rbp_2 = r12_1 * 2
                rbx_2 = zx.q(rbp_2 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    r14.b = 0
                    int64_t* rdi_11 = &arg1[sx.q(rbp_2) + 2]
                    void* rsi_9 = &arg1[sx.q(rbx_2.d)]
                    
                    if (sub_140b5d160(rdi_11, rsi_9) s< 0)
                        r14.b = 1
                    else if (*rdi_11 == *rsi_9)
                        r14.b = sub_140b5d160(&rdi_11[1], rsi_9 + 8) s< 0
                    
                    if (r14.b != 0)
                        rbx_2 = zx.q(rbp_2)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int128_t* rsi_12 = &arg1[sx.q(r12_1)]
                void* rdi_14 = &arg1[sx.q(rbx_2.d)]
                
                if (sub_140b5d160(rsi_12, rdi_14) s>= 0)
                    if (*rsi_12 != *rdi_14)
                        break
                    
                    if (sub_140b5d160(rsi_12 + 8, rdi_14 + 8) s>= 0)
                        break
                
                if (rsi_12 != rdi_14)
                    zmm1 = *rsi_12
                    *rsi_12 = *rdi_14
                    *rdi_14 = zmm1
                
                r12_1 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
            result = var_40.q
        
        result -= 0x10
        i -= 1
        var_40.q = result
    while (i s> 0)

return result
