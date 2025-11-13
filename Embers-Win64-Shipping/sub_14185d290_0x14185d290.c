// 函数: sub_14185d290
// 地址: 0x14185d290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9
char var_48 = r9
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r15 = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t r12_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rsi_1 = r15
        
        if (r12_1 s< arg2)
            do
                int32_t rdi_1 = rsi_1 * 2
                uint64_t rbx_1 = zx.q(rdi_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    int64_t rcx_1 = sx.q(rbx_1.d) * 2
                    int64_t rax_6 = (sx.q(rdi_1) + 2) * 2
                    int16_t* rdx_1
                    
                    if (*(arg1 + (rcx_1 << 3) + 8) == 0)
                        rdx_1 = &data_142d40450
                    else
                        rdx_1 = *(arg1 + (rcx_1 << 3))
                    
                    int16_t* const rcx_2
                    
                    if (*(arg1 + (rax_6 << 3) + 8) == 0)
                        rcx_2 = &data_142d40450
                    else
                        rcx_2 = *(arg1 + (rax_6 << 3))
                    
                    if (sub_140a54510(rcx_2, rdx_1) s< 0)
                        rbx_1 = zx.q(rdi_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                int128_t* rdi_4 = &arg1[sx.q(rsi_1)]
                int128_t* rsi_4 = &arg1[sx.q(rbx_1.d)]
                int16_t* rdx_2
                
                if (*(rsi_4 + 8) == 0)
                    rdx_2 = &data_142d40450
                else
                    rdx_2 = *rsi_4
                
                int16_t* const rcx_3
                
                if (*(rdi_4 + 8) == 0)
                    rcx_3 = &data_142d40450
                else
                    rcx_3 = *rdi_4
                
                result = sub_140a54510(rcx_3, rdx_2)
                
                if (result.d s>= 0)
                    break
                
                if (rdi_4 != rsi_4)
                    zmm1 = *rdi_4
                    *rdi_4 = *rsi_4
                    *rsi_4 = zmm1
                
                result = zx.q(((rbx_1 << 1) + 1).d)
                rsi_1 = rbx_1.d
            while (result.d s< arg2)
        
        r12_1 -= 2
        temp2_1 = r15
        r15 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* r15_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != r15_3)
            zmm1 = *arg1
            *arg1 = *r15_3
            *r15_3 = zmm1
        
        int32_t rsi_5 = 0
        
        if (i s> 1)
            uint64_t rbx_2
            
            do
                int32_t rdi_5 = rsi_5 * 2
                rbx_2 = zx.q(rdi_5 + 1)
                
                if ((rbx_2 + 1).d s< i)
                    int64_t rcx_5 = sx.q(rbx_2.d) * 2
                    int64_t rax_11 = (sx.q(rdi_5) + 2) * 2
                    int16_t* rdx_3
                    
                    if (*(arg1 + (rcx_5 << 3) + 8) == 0)
                        rdx_3 = &data_142d40450
                    else
                        rdx_3 = *(arg1 + (rcx_5 << 3))
                    
                    int16_t* const rcx_6
                    
                    if (*(arg1 + (rax_11 << 3) + 8) == 0)
                        rcx_6 = &data_142d40450
                    else
                        rcx_6 = *(arg1 + (rax_11 << 3))
                    
                    if (sub_140a54510(rcx_6, rdx_3) s< 0)
                        rbx_2 = zx.q(rdi_5)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                void* rdi_8 = &arg1[sx.q(rsi_5)]
                int16_t** rsi_8 = &arg1[sx.q(rbx_2.d)]
                int16_t* rdx_4
                
                if (rsi_8[1].d == 0)
                    rdx_4 = &data_142d40450
                else
                    rdx_4 = *rsi_8
                
                int16_t* const rcx_7
                
                if (*(rdi_8 + 8) == 0)
                    rcx_7 = &data_142d40450
                else
                    rcx_7 = *rdi_8
                
                result = sub_140a54510(rcx_7, rdx_4)
                
                if (result.d s>= 0)
                    break
                
                if (rdi_8 != rsi_8)
                    zmm1 = *rdi_8
                    *rdi_8 = *rsi_8
                    *rsi_8 = zmm1
                
                rsi_5 = rbx_2.d
            while (((rbx_2 << 1) + 1).d s< i)
        
        i -= 1
        r15_3 -= 0x10
    while (i s> 0)

return result
