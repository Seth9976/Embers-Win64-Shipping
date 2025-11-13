// 函数: sub_140b247f0
// 地址: 0x140b247f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
wchar16* _EndPtr = nullptr
int32_t r13 = 0
int32_t r12 = 0
uint64_t rdi = 0
int32_t r15 = 0
uint32_t r14 = 0
uint32_t arg_8 = wcstoul(arg1, &_EndPtr, 0xa)
wchar16* result = _EndPtr

if (result u<= arg1 || *result == 0)
    result.b = 0
else
    void* _String = &result[1]
    uint32_t rax_1 = wcstoul(_String, &_EndPtr, 0xa)
    result = _EndPtr
    
    if (result u<= _String || *result == 0)
        result.b = 0
    else
        void* _String_1 = &result[1]
        uint32_t rax_2 = wcstoul(_String_1, &_EndPtr, 0xa)
        result = _EndPtr
        
        if (result u<= _String_1)
            result.b = 0
        else
            wchar16 rcx_2 = *result
            
            if (rcx_2 != 0x54)
                if (rcx_2 == 0)
                    goto label_140b24a7e
                
                result.b = 0
            else
                void* _String_2 = &result[1]
                result = wcstoul(_String_2, &_EndPtr, 0xa)
                wchar16* _EndPtr_1 = _EndPtr
                rbp = result.d
                
                if (_EndPtr_1 u<= _String_2 || *_EndPtr_1 == 0)
                    result.b = 0
                else
                    result = wcstoul(&_EndPtr_1[1], &_EndPtr, 0xa)
                    wchar16* _EndPtr_2 = _EndPtr
                    r13 = result.d
                    
                    if (_EndPtr_2 u<= &_EndPtr_1[1] || *_EndPtr_2 == 0)
                        result.b = 0
                    else
                        result = wcstoul(&_EndPtr_2[1], &_EndPtr, 0xa)
                        wchar16* _String_4 = _EndPtr
                        r12 = result.d
                        
                        if (_String_4 u<= &_EndPtr_2[1])
                            result.b = 0
                        else if (*_String_4 != 0x2e)
                        label_140b2499b:
                            uint32_t rcx_11 = zx.d(*_String_4)
                            
                            if ((0xfffd & (rcx_11 - 0x2b).w) == 0)
                                result = wcstoul(_String_4, &_EndPtr, 0xa)
                                wchar16* _EndPtr_3 = _EndPtr
                                r15 = result.d
                                int64_t rcx_15 = (_EndPtr_3 - _String_4) s>> 1
                                
                                if (rcx_15 == 3)
                                    wchar16 rcx_16 = *_EndPtr_3
                                    
                                    if (rcx_16 == 0)
                                        goto label_140b24a7e
                                    
                                    if (rcx_16 == 0x3a)
                                        r14 = wcstoul(&_EndPtr_3[1], &_EndPtr, 0xa)
                                        goto label_140b24a7e
                                    
                                    result.b = 0
                                else if (rcx_15 != 5)
                                    result.b = 0
                                else
                                    int32_t r14_1 = r15
                                    int32_t rdx_11 = r15 s/ 0x64
                                    r15 = rdx_11
                                    r14 = r14_1 - rdx_11 * 0x64
                                label_140b24a7e:
                                    
                                    if (sub_140b29e10(arg_8, rax_1, rax_2, rbp, r13, r12, rdi.d).b
                                            == 0)
                                        result.b = 0
                                    else
                                        sub_140b0a2c0(&arg_8, arg_8, rax_1, rax_2, rbp, r13, r12, 
                                            rdi.d)
                                        int32_t rcx_20 = r15 * 0x3c
                                        int32_t rcx_21 = rcx_20 - r14
                                        
                                        if (r15 s>= 0)
                                            rcx_21 = rcx_20 + r14
                                        
                                        uint128_t zmm0_1
                                        zmm0_1.q = _mm_cvtepi32_pd(zx.q(rcx_21)).q f* 600000000.0
                                        zmm0_1.q = zmm0_1.q f+ 0.5
                                        int64_t rcx_22 = int.q(zmm0_1.q)
                                        
                                        if (rcx_22 != -0x8000000000000000
                                                && not(float.d(rcx_22) f== zmm0_1.q))
                                            zmm0_1.q = float.d(rcx_22 - (zx.q(_mm_movemask_pd(
                                                _mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
                                        
                                        *arg2 = arg_8.q - int.q(zmm0_1.q)
                                        result.b = 1
                            else
                                if (rcx_11.w == 0 || rcx_11.w == 0x5a)
                                    goto label_140b24a7e
                                
                                result.b = 0
                        else
                            void* _String_3 = &_String_4[1]
                            result = wcstoul(_String_3, &_EndPtr, 0xa)
                            _String_4 = _EndPtr
                            rdi = zx.q(result.d)
                            
                            if (_String_4 u> _String_3 && _String_4 u<= _String_3 + 6)
                                int32_t rcx_10 = ((_String_4 - _String_3) s>> 1).d
                                
                                if (rcx_10 s< 3)
                                    uint64_t i_1 = zx.q(3 - rcx_10)
                                    uint64_t i
                                    
                                    do
                                        rdi = zx.q((rdi * 5).d * 2)
                                        i = i_1
                                        i_1 -= 1
                                    while (i != 1)
                                
                                goto label_140b2499b
                            
                            result.b = 0

return result
