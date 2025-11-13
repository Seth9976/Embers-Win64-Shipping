// 函数: sub_140b4b5f0
// 地址: 0x140b4b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rsi = result.d
int64_t zmm1

if (result.d s>= 0)
    int32_t rbp_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t r10_1 = rsi
        
        if (rbp_1 s< arg2)
            do
                int32_t r8_1 = r10_1 * 2
                uint64_t rdx_1 = zx.q(r8_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    int64_t rax_6 = (sx.q(r8_1) + 2) * 3
                    int64_t r9_1 = *(arg1 + (rax_6 << 2))
                    int64_t rcx = sx.q(rdx_1.d) * 3
                    int64_t rcx_1 = *(arg1 + (rcx << 2))
                    uint32_t rax_13
                    
                    if (r9_1 == rcx_1)
                        rax_13.b = *(arg1 + (rax_6 << 2) + 8) u< *(arg1 + (rcx << 2) + 8)
                    else
                        int32_t rax_9 = r9_1.d
                        uint32_t rax_10 = rax_9 - rcx_1.d
                        
                        if (rax_9 == rcx_1.d)
                            rax_10 = (r9_1 u>> 0x20).d - (rcx_1 u>> 0x20).d
                        
                        rax_13 = rax_10 u>> 0x1f
                    
                    if (rax_13.b != 0)
                        rdx_1 = zx.q(r8_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int64_t rcx_3 = sx.q(r10_1) * 3
                int64_t r10_2 = *(arg1 + (rcx_3 << 2))
                void* r9_2 = arg1 + (rcx_3 << 2)
                int64_t rcx_4 = sx.q(rdx_1.d) * 3
                void* r8_2 = arg1 + (rcx_4 << 2)
                int64_t rcx_5 = *(arg1 + (rcx_4 << 2))
                
                if (r10_2 == rcx_5)
                    result.b = *(r9_2 + 8) u< *(r8_2 + 8)
                else
                    int32_t rax_16 = r10_2.d
                    uint32_t rax_17 = rax_16 - rcx_5.d
                    
                    if (rax_16 == rcx_5.d)
                        rax_17 = (r10_2 u>> 0x20).d - (rcx_5 u>> 0x20).d
                    
                    result = zx.q(rax_17 u>> 0x1f)
                
                if (result.b == 0)
                    break
                
                if (r9_2 != r8_2)
                    zmm1 = *r9_2
                    int32_t rcx_7 = *(r9_2 + 8)
                    *r9_2 = *r8_2
                    *(r9_2 + 8) = *(r8_2 + 8)
                    *r8_2 = zmm1
                    *(r8_2 + 8) = rcx_7
                
                result = zx.q(((rdx_1 << 1) + 1).d)
                r10_1 = rdx_1.d
            while (result.d s< arg2)
        
        rbp_1 -= 2
        temp2_1 = rsi
        rsi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    void* rsi_1 = arg1 + result * 0xc
    
    do
        if (arg1 != rsi_1)
            zmm1 = *arg1
            int32_t rcx_9 = arg1[1].d
            *arg1 = *rsi_1
            result = zx.q(*(rsi_1 + 8))
            arg1[1].d = result.d
            *rsi_1 = zmm1
            *(rsi_1 + 8) = rcx_9
        
        int32_t r10_3 = 0
        
        if (i s> 1)
            do
                int32_t r8_3 = r10_3 * 2
                uint64_t rdx_2 = zx.q(r8_3 + 1)
                
                if ((rdx_2 + 1).d s< i)
                    int64_t rax_24 = (sx.q(r8_3) + 2) * 3
                    int64_t r9_3 = *(arg1 + (rax_24 << 2))
                    int64_t rcx_10 = sx.q(rdx_2.d) * 3
                    int64_t rcx_11 = *(arg1 + (rcx_10 << 2))
                    uint32_t rax_31
                    
                    if (r9_3 == rcx_11)
                        rax_31.b = *(arg1 + (rax_24 << 2) + 8) u< *(arg1 + (rcx_10 << 2) + 8)
                    else
                        int32_t rax_27 = r9_3.d
                        uint32_t rax_28 = rax_27 - rcx_11.d
                        
                        if (rax_27 == rcx_11.d)
                            rax_28 = (r9_3 u>> 0x20).d - (rcx_11 u>> 0x20).d
                        
                        rax_31 = rax_28 u>> 0x1f
                    
                    if (rax_31.b != 0)
                        rdx_2 = zx.q(r8_3)
                    
                    rdx_2 = zx.q(rdx_2.d + 1)
                
                int64_t rcx_13 = sx.q(r10_3) * 3
                int64_t r10_4 = *(arg1 + (rcx_13 << 2))
                void* r9_4 = arg1 + (rcx_13 << 2)
                int64_t rcx_14 = sx.q(rdx_2.d) * 3
                void* r8_4 = arg1 + (rcx_14 << 2)
                int64_t rcx_15 = *(arg1 + (rcx_14 << 2))
                
                if (r10_4 == rcx_15)
                    result.b = *(r9_4 + 8) u< *(r8_4 + 8)
                else
                    int32_t rax_34 = r10_4.d
                    uint32_t rax_35 = rax_34 - rcx_15.d
                    
                    if (rax_34 == rcx_15.d)
                        rax_35 = (r10_4 u>> 0x20).d - (rcx_15 u>> 0x20).d
                    
                    result = zx.q(rax_35 u>> 0x1f)
                
                if (result.b == 0)
                    break
                
                if (r9_4 != r8_4)
                    zmm1 = *r9_4
                    int32_t rcx_17 = *(r9_4 + 8)
                    *r9_4 = *r8_4
                    *(r9_4 + 8) = *(r8_4 + 8)
                    *r8_4 = zmm1
                    *(r8_4 + 8) = rcx_17
                
                result = zx.q(((rdx_2 << 1) + 1).d)
                r10_3 = rdx_2.d
            while (result.d s< i)
        
        i -= 1
        rsi_1 -= 0xc
    while (i s> 0)

return result
