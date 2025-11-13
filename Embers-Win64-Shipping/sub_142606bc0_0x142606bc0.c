// 函数: sub_142606bc0
// 地址: 0x142606bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_898
int64_t rax_1 = __security_cookie ^ &var_898
int64_t i_6 = sx.q(*(arg2 + 0x200))
uint64_t result = arg6
uint64_t result_1 = result

if (i_6.d s> 0 || *(arg2 + 0x408) s> 0)
    void _Base
    result = memset(&_Base, 0, 0x800)
    int32_t i_4 = 0
    int64_t i_8 = i_6
    int32_t _NumOfElements_1 = 0
    void var_844
    
    if (i_6.d s> 0)
        int64_t r8 = sx.q(*(arg2 + 0x408))
        void* r10_1 = &var_844
        void* r9 = arg2 + 8
        int64_t i
        
        do
            uint32_t zmm0_1[0x4] = *(r9 + 4)
            
            if (r8 s>= 1 && not(zmm0_1[0] f< *(arg2 + 0x214))
                    && not(zmm0_1[0] f> *(arg2 + r8 * 0x10 + 0x204)))
                int32_t rdx = 1
                int64_t rcx_1 = 1
                
                if (1 s< r8)
                    result = arg2 + 0x224
                    
                    do
                        if (zmm0_1[0] f<= *result)
                            int64_t rcx_2
                            
                            if (rcx_1 s>= 2)
                                rcx_2 = rcx_1 * 2
                                result = zx.q(*(arg2 + (rcx_2 << 3) + 0x200))
                            
                            if (rcx_1 s< 2 || *(arg2 + (rcx_2 << 3) + 0x1f0) != result.d)
                                uint64_t rdx_1 = zx.q(rdx - 1)
                                
                                if (rdx_1.d != 0xffffffff)
                                    _NumOfElements_1 += 1
                                    *r10_1 = *r9
                                    *(r10_1 - 4) = zmm0_1[0]
                                    *(r10_1 + 4) = *(arg2 + (rdx_1 + 0x21) * 0x10)
                                    *(r10_1 + 0xc) = *(r9 - 8)
                                    result = *(arg2 + zx.q(rdx_1.d) * 0x10 + 0x208)
                                    *(r10_1 + 0x14) = result
                                    r10_1 += 0x20
                            
                            break
                        
                        rdx += 1
                        rcx_1 += 1
                        result += 0x10
                    while (rcx_1 s< r8)
            
            r9 += 0x10
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    if (i_8 s> 0)
        void* r8_1 = arg2 + 0x210
        result = sx.q(_NumOfElements_1) << 5
        void* r9_1 = &var_844 + result
        int64_t i_7 = i_8
        int64_t i_1
        
        do
            uint32_t zmm2[0x4] = *(r8_1 + 4)
            
            if (i_8 s>= 1 && not(zmm2[0] f< *(arg2 + 0xc))
                    && not(zmm2[0] f> *(arg2 + i_8 * 0x10 - 4)))
                int32_t rdx_2 = 1
                result = 1
                
                if (1 s< i_8)
                    void* rcx_5 = arg2 + 0x1c
                    
                    do
                        int32_t zmm1 = *rcx_5
                        
                        if (zmm2[0] f<= zmm1)
                            zmm2[0] = zmm2[0] f- zmm1
                            
                            if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f< 0.00100000005f))
                                uint64_t rcx_7 = result * 2
                                zmm2[0] = zmm2[0] f- *(arg2 + (rcx_7 << 3) - 4)
                                
                                if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f< 0.00100000005f))
                                    if (result s< 2)
                                    label_142606e01:
                                        
                                        if (rdx_2 != 0)
                                            _NumOfElements_1 += 1
                                            uint64_t rcx_9 = zx.q(rdx_2 - 1) * 2
                                            *(r9_1 - 4) = zmm2[0]
                                            *r9_1 = *(arg2 + (rcx_9 << 3) + 8)
                                            *(r9_1 + 4) = *r8_1
                                            *(r9_1 + 0xc) = *(arg2 + (rcx_9 << 3))
                                            result = *(r8_1 - 8)
                                            *(r9_1 + 0x14) = result
                                            r9_1 += 0x20
                                    else
                                        result = zx.q(*(arg2 + (rcx_7 << 3) - 8))
                                        
                                        if (*(arg2 + (rcx_7 << 3) - 0x18) != result.d)
                                            goto label_142606e01
                            
                            break
                        
                        rdx_2 += 1
                        result += 1
                        rcx_5 += 0x10
                    while (result s< i_8)
            
            r8_1 += 0x10
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    if (_NumOfElements_1 s>= 2)
        int64_t _NumOfElements = sx.q(_NumOfElements_1)
        qsort(&_Base, _NumOfElements, 0x20, sub_142616330)
        memset(arg3, 0, sx.q(arg4) * 0x28)
        *arg5 = 0
        int32_t rax_11 = 0
        
        if (_NumOfElements s> 1)
            void* r9_2 = &var_844
            int64_t i_5 = _NumOfElements - 1
            int64_t i_2
            
            do
                int64_t r10_2 = *(r9_2 + 0xc)
                
                if (r10_2 == arg1 || *(r9_2 + 0x14) == arg1)
                label_142606f16:
                    *(arg3 + sx.q(*arg5) * 0x28) = *(r9_2 - 4)
                    *(arg3 + sx.q(*arg5) * 0x28 + 4) = *(r9_2 + 0x1c)
                    *(arg3 + sx.q(*arg5) * 0x28 + 0x10) = *r9_2
                    *(arg3 + sx.q(*arg5) * 0x28 + 0x14) = *(r9_2 + 4)
                    *(arg3 + sx.q(*arg5) * 0x28 + 0x18) = *(r9_2 + 0xc)
                    *(arg3 + sx.q(*arg5) * 0x28 + 0x20) = *(r9_2 + 0x14)
                    *arg5 += 1
                else
                    int64_t rax_12 = *(r9_2 + 0x2c)
                    
                    if (rax_12 == arg1 || *(r9_2 + 0x34) == arg1)
                        goto label_142606f16
                    
                    int32_t rdi_2 = *r9_2
                    int64_t rdx_5 = sx.q(*(arg2 + 0x200))
                    
                    if ((rdi_2 == *(r9_2 + 0x20) && r10_2 == rax_12) || rdx_5.d s<= 1)
                        goto label_142606f16
                    
                    int64_t rcx_12 = 1
                    
                    if (1 s>= rdx_5)
                        goto label_142606f16
                    
                    void* rax_13 = arg2 + 0x18
                    
                    while (true)
                        int32_t rdx_6 = *rax_13
                        
                        if (*(rax_13 - 0x10) == rdx_6)
                            int64_t r8_5 = *(rax_13 - 8)
                            
                            if (*(rax_13 - 0x18) == r8_5 && rdi_2 == rdx_6 && r10_2 == r8_5)
                                break
                        
                        rcx_12 += 1
                        rax_13 += 0x10
                        
                        if (rcx_12 s>= rdx_5)
                            goto label_142606f16
                
                rax_11 = *arg5
                r9_2 += 0x20
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (rax_11 s> 4)
            qsort(arg3, sx.q(rax_11), 0x28, sub_142616370)
            rax_11 = 4
            *arg5 = 4
        
        int16_t rcx_20 = 0
        int32_t r9_3 = 0
        
        if (rax_11 s> 0)
            void* r8_6 = arg3 + 4
            int32_t rax_30
            
            do
                int32_t i_3 = *(r8_6 - 4)
                int16_t rdx_8 = 0
                int32_t var_868[0x8]
                
                if (0 u>= rcx_20)
                label_142606fe2:
                    uint64_t rax_27 = zx.q(rcx_20)
                    rdx_8 = rcx_20
                    rcx_20 += 1
                    var_868[rax_27] = i_3
                else
                    while (not(i_3 f== var_868[zx.q(rdx_8)]))
                        rdx_8 += 1
                        
                        if (rdx_8 u>= rcx_20)
                            goto label_142606fe2
                
                i_3 = *r8_6
                *(r8_6 + 4) = rdx_8
                int16_t rdx_9 = 0
                
                if (0 u>= rcx_20)
                label_142607015:
                    uint64_t rax_29 = zx.q(rcx_20)
                    rdx_9 = rcx_20
                    rcx_20 += 1
                    var_868[rax_29] = i_3
                else
                    while (not(i_3 f== var_868[zx.q(rdx_9)]))
                        rdx_9 += 1
                        
                        if (rdx_9 u>= rcx_20)
                            goto label_142607015
                
                *(r8_6 + 6) = rdx_9
                r9_3 += 1
                rax_30 = *arg5
                r8_6 += 0x28
            while (r9_3 s< rax_30)
            
            if (rax_30 s> 0)
                void* rdx_10 = arg3 + 0xc
                
                do
                    int16_t rax_31 = *(rdx_10 - 4)
                    rdx_10 += 0x28
                    i_4 += 1
                    *(rdx_10 - 0x28) = rax_31 + rcx_20
                    *(rdx_10 - 0x26) = *(rdx_10 - 0x2a) + rcx_20
                while (i_4 s< *arg5)
        
        result = result_1
        *result = rcx_20 * 2

__security_check_cookie(rax_1 ^ &var_898)
return result
