// 函数: sub_141fa2ff0
// 地址: 0x141fa2ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int128_t zmm1

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r9_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r8_1 = r9_1 * 2
                uint64_t rcx = zx.q(r8_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    int32_t* rax_6 = &arg1[sx.q(rcx.d)]
                    int64_t rdx_3 = (sx.q(r8_1) + 2) * 2
                    int32_t r10_1 = *rax_6
                    int32_t temp4_1 = *(arg1 + (rdx_3 << 3))
                    
                    if (r10_1 s< temp4_1
                            || (r10_1 == temp4_1 && *(arg1 + (rdx_3 << 3) + 0xc) s< rax_6[3]))
                        rax_6.b = 1
                    else
                        rax_6.b = 0
                    
                    if (rax_6.b != 0)
                        rcx = zx.q(r8_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int32_t* rdx_6 = &arg1[sx.q(rcx.d)]
                int128_t* r8_4 = &arg1[sx.q(r9_1)]
                result = zx.q(*rdx_6)
                int32_t temp3_1 = *r8_4
                
                if (result.d s>= temp3_1)
                    if (result.d != temp3_1)
                        break
                    
                    result = zx.q(rdx_6[3])
                    
                    if (*(r8_4 + 0xc) s>= result.d)
                        break
                
                if (r8_4 != rdx_6)
                    zmm1 = *r8_4
                    *r8_4 = *rdx_6
                    *rdx_6 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                r9_1 = rcx.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    int128_t* rsi_3 = &arg1[sx.q(i)]
    
    do
        if (arg1 != rsi_3)
            zmm1 = *arg1
            *arg1 = *rsi_3
            *rsi_3 = zmm1
        
        int32_t r10_2 = 0
        
        if (i s> 1)
            do
                int32_t result_1 = r10_2 * 2
                result = zx.q(result_1 + 1)
                
                if ((result + 1).d s< i)
                    void* rcx_4 = &arg1[sx.q(result.d)]
                    int64_t rdx_9 = (sx.q(result_1) + 2) * 2
                    int32_t rbx_1 = *rcx_4
                    int32_t temp6_1 = *(arg1 + (rdx_9 << 3))
                    
                    if (rbx_1 s< temp6_1 ||
                            (rbx_1 == temp6_1 && *(arg1 + (rdx_9 << 3) + 0xc) s< *(rcx_4 + 0xc)))
                        rcx_4.b = 1
                    else
                        rcx_4.b = 0
                    
                    if (rcx_4.b != 0)
                        result = zx.q(result_1)
                    
                    result = zx.q(result.d + 1)
                
                void* rdx_12 = &arg1[sx.q(result.d)]
                void* r8_7 = &arg1[sx.q(r10_2)]
                int32_t rcx_5 = *rdx_12
                int32_t temp5_1 = *r8_7
                
                if (rcx_5 s>= temp5_1)
                    if (rcx_5 != temp5_1)
                        break
                    
                    if (*(r8_7 + 0xc) s>= *(rdx_12 + 0xc))
                        break
                
                if (r8_7 != rdx_12)
                    zmm1 = *r8_7
                    *r8_7 = *rdx_12
                    *rdx_12 = zmm1
                
                r10_2 = result.d
                result = zx.q(((result << 1) + 1).d)
            while (result.d s< i)
        
        i -= 1
        rsi_3 -= 0x10
    while (i s> 0)

return result
