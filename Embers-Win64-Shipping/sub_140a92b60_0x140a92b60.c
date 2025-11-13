// 函数: sub_140a92b60
// 地址: 0x140a92b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d
int64_t zmm2
int128_t zmm3

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r15_1 = r12
        
        if (r13_1 s< arg2)
            do
                int32_t rdi_1 = r15_1 * 2
                uint64_t rbx_1 = zx.q(rdi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    int64_t rcx = sx.q(rbx_1.d) * 3
                    int64_t rax_7 = (sx.q(rdi_1) + 2) * 3
                    int16_t* rdx_1
                    
                    if (*(arg1 + (rcx << 3) + 8) == 0)
                        rdx_1 = &data_142d40450
                    else
                        rdx_1 = *(arg1 + (rcx << 3))
                    
                    int16_t* const rcx_1
                    
                    if (*(arg1 + (rax_7 << 3) + 8) == 0)
                        rcx_1 = &data_142d40450
                    else
                        rcx_1 = *(arg1 + (rax_7 << 3))
                    
                    if (sub_140a54510(rcx_1, rdx_1) s< 0)
                        rbx_1 = zx.q(rdi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int64_t rcx_2 = sx.q(rbx_1.d) * 3
                int64_t* rsi_1 = arg1 + (rcx_2 << 3)
                int64_t* rdi_2 = arg1 + sx.q(r15_1) * 0x18
                int16_t* rdx_2
                
                if (*(arg1 + (rcx_2 << 3) + 8) == 0)
                    rdx_2 = &data_142d40450
                else
                    rdx_2 = *rsi_1
                
                int16_t* const rcx_4
                
                if (rdi_2[1].d == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = *rdi_2
                
                result = sub_140a54510(rcx_4, rdx_2)
                
                if (result.d s>= 0)
                    break
                
                if (rdi_2 != rsi_1)
                    zmm3 = *rdi_2
                    zmm2 = rdi_2[2]
                    *rdi_2 = *rsi_1
                    rdi_2[2] = rsi_1[2]
                    *rsi_1 = zmm3
                    rsi_1[2] = zmm2
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                r15_1 = rbx_1.d
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int128_t* r12_1 = arg1 + result * 0x18
    
    do
        if (arg1 != r12_1)
            zmm3 = *arg1
            zmm2 = arg1[1].q
            *arg1 = *r12_1
            arg1[1].q = r12_1[1].q
            *r12_1 = zmm3
            r12_1[1].q = zmm2
        
        int32_t r15_2 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rdi_3 = r15_2 * 2
                rbx_2 = zx.q(rdi_3 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    int64_t rcx_6 = sx.q(rbx_2.d) * 3
                    int64_t rax_15 = (sx.q(rdi_3) + 2) * 3
                    int16_t* rdx_3
                    
                    if (*(arg1 + (rcx_6 << 3) + 8) == 0)
                        rdx_3 = &data_142d40450
                    else
                        rdx_3 = *(arg1 + (rcx_6 << 3))
                    
                    int16_t* const rcx_7
                    
                    if (*(arg1 + (rax_15 << 3) + 8) == 0)
                        rcx_7 = &data_142d40450
                    else
                        rcx_7 = *(arg1 + (rax_15 << 3))
                    
                    if (sub_140a54510(rcx_7, rdx_3) s< 0)
                        rbx_2 = zx.q(rdi_3)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                int64_t rcx_8 = sx.q(rbx_2.d) * 3
                int16_t** rsi_2 = arg1 + (rcx_8 << 3)
                void* rdi_4 = arg1 + sx.q(r15_2) * 0x18
                int16_t* rdx_4
                
                if (*(arg1 + (rcx_8 << 3) + 8) == 0)
                    rdx_4 = &data_142d40450
                else
                    rdx_4 = *rsi_2
                
                int16_t* const rcx_10
                
                if (*(rdi_4 + 8) == 0)
                    rcx_10 = &data_142d40450
                else
                    rcx_10 = *rdi_4
                
                result = sub_140a54510(rcx_10, rdx_4)
                
                if (result.d s>= 0)
                    break
                
                if (rdi_4 != rsi_2)
                    zmm3 = *rdi_4
                    zmm2 = *(rdi_4 + 0x10)
                    *rdi_4 = *rsi_2
                    *(rdi_4 + 0x10) = rsi_2[2]
                    *rsi_2 = zmm3
                    rsi_2[2] = zmm2
                
                r15_2 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r12_1 -= 0x18
    while (i s> 0)

return result
