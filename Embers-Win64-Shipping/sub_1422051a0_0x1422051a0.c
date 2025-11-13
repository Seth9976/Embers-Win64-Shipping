// 函数: sub_1422051a0
// 地址: 0x1422051a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*(arg1 + 0x30), 0).b == 0
int64_t result
result.b = *(arg1 + 0x34) != 0
result.b |= r8

if (result.b != 0)
    void* r8_1 = *(arg2 + 0x18)
    result = sx.q(*(r8_1 + 0x608))
    
    if (result.d s> 0)
        int64_t* r8_2 = *(r8_1 + 0x600)
        int64_t result_2 = result
        int64_t rdx = 0
        int64_t* rsi_1
        
        while (true)
            rsi_1 = *r8_2
            
            if (rsi_1 != 0)
                result = *(arg1 + 0x30)
                
                if (*(rsi_1[2] + 0x28) == result)
                    break
            
            rdx += 1
            r8_2 = &r8_2[1]
            
            if (rdx s>= result_2)
                return result
        
        int64_t r14_1 = *(arg2 + 0xf0)
        int32_t r15_1 = *(arg2 + 0x114)
        int32_t rdi_1 = *(arg2 + 0x118)
        int32_t result_1 = rdi_1 - 1
        
        if (rdi_1 - 1 s>= 0)
            result = sx.q(result_1)
            int16_t* rbp_1 = *(arg2 + 0xf8) + (result << 1)
            int32_t result_3
            
            do
                int64_t* rbx_3 = zx.q(zx.d(*rbp_1) * r15_1) + r14_1
                
                if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
                    result = (*(*rsi_1 + 0x108))(rsi_1, zx.q(result_1))
                    
                    if (result != 0)
                        rbx_3[2] = *(result + 0x10)
                        rbx_3[3].d = *(result + 0x18)
                        *rbx_3 = *result
                        rbx_3[1].d = *(result + 8)
                        rbx_3[6] = *(result + 0x30)
                        rbx_3[7].d = *(result + 0x38)
                        *(rbx_3 + 0xc) = *(result + 0xc)
                        
                        if (_finite(_mm_cvtps_pd(rbx_3[2].d).q) != 0
                                && _finite(_mm_cvtps_pd(*(rbx_3 + 0x14)).q) != 0)
                            _finite(_mm_cvtps_pd(rbx_3[3].d).q)
                        
                        result = _finite(_mm_cvtps_pd(rbx_3[6].d).q)
                        
                        if (result.d != 0)
                            result = _finite(_mm_cvtps_pd(*(rbx_3 + 0x34)).q)
                            
                            if (result.d != 0)
                                result = _finite(_mm_cvtps_pd(rbx_3[7].d).q)
                
                rbp_1 -= 2
                result_3 = result_1
                result_1 -= 1
            while (result_3 - 1 s>= 0)

return result
