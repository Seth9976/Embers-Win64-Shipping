// 函数: sub_1421fead0
// 地址: 0x1421fead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*(arg1 + 0x30), 0).b == 0
int64_t result
result.b = *(arg1 + 0x34) != 0
result.b |= r8

if (result.b != 0)
    void* r9_1 = *(arg2 + 0x18)
    result = sx.q(*(r9_1 + 0x608))
    
    if (result.d s> 0)
        int64_t* r9_2 = *(r9_1 + 0x600)
        int64_t result_1 = result
        int64_t rdx = 0
        int64_t* r8_1
        
        while (true)
            r8_1 = *r9_2
            
            if (r8_1 != 0)
                result = *(arg1 + 0x30)
                
                if (*(r8_1[2] + 0x28) == result)
                    break
            
            rdx += 1
            r9_2 = &r9_2[1]
            
            if (rdx s>= result_1)
                return result
        
        result = (*(*r8_1 + 0x108))(r8_1, zx.q(*(arg2 + 0x118)))
        
        if (result != 0)
            arg3[2] = *(result + 0x10)
            arg3[3].d = *(result + 0x18)
            *arg3 = *result
            arg3[1].d = *(result + 8)
            arg3[6] = *(result + 0x30)
            arg3[7].d = *(result + 0x38)
            *(arg3 + 0xc) = *(result + 0xc)
            
            if (_finite(_mm_cvtps_pd(arg3[2].d)) != 0 && _finite(_mm_cvtps_pd(*(arg3 + 0x14))) != 0)
                _finite(_mm_cvtps_pd(arg3[3].d))
            
            result = _finite(_mm_cvtps_pd(arg3[6].d))
            
            if (result.d != 0)
                result = _finite(_mm_cvtps_pd(*(arg3 + 0x34)))
                
                if (result.d != 0)
                    return _finite(_mm_cvtps_pd(arg3[7].d))

return result
