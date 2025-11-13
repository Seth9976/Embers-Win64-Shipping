// 函数: sub_1421c7130
// 地址: 0x1421c7130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r9 = sub_140b5b8a0(*(arg1 + 0x30), 0).b == 0
int64_t result
result.b = *(arg1 + 0x34) != 0
result.b |= r9

if (result.b != 0)
    void* rdx = *(arg2 + 0x18)
    result = sx.q(*(rdx + 0x608))
    
    if (result.d s> 0)
        int64_t* rdx_1 = *(rdx + 0x600)
        int64_t result_3 = result
        int32_t rdi_1 = 0
        int64_t r8 = 0
        
        do
            int64_t* rbx_1 = *rdx_1
            
            if (rbx_1 != 0)
                result = *(arg1 + 0x30)
                
                if (*(rbx_1[2] + 0x28) == result)
                    int32_t* r14_2 = zx.q(arg3) + arg4
                    int64_t result_4 = (*(*rbx_1 + 0x108))(rbx_1, zx.q(*(arg1 + 0xac)))
                    int64_t result_2 = result_4
                    
                    if (result_4 != 0)
                        result = zx.q(*(arg1 + 0xac))
                        *r14_2 = result.d
                        *(arg1 + 0xac) += 1
                    else
                        result = zx.q(*(arg1 + 0xa4))
                        
                        if (result.d == 0)
                            result = sub_1421b7cc0(arg2, arg1)
                            int64_t result_1 = result
                            
                            if (result == 0)
                                result_1 = *(arg2 + 0x18) + 0x610
                            
                            int32_t rdx_5 = rbx_1[0x23].d
                            
                            if (rdx_5 s> 0)
                                int32_t rax_2 = *(result_1 + 4) * 0xbb38435
                                uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rdx_5))
                                *(result_1 + 4) = rax_2 + 0x3619636b
                                result = zx.q((rax_2 + 0x3619636b) u>> 9) | 0x3f800000
                                rdi_1 = int.d((result.d - 1f) f* zmm0.d)
                            
                            *(arg1 + 0xac) = rdi_1
                            *r14_2 = rdi_1
                        else if (result.d == 1 && rbx_1[0x23].d s> 0)
                            while (true)
                                result = (*(*rbx_1 + 0x108))(rbx_1, zx.q(rdi_1))
                                result_2 = result
                                
                                if (result != 0)
                                    break
                                
                                rdi_1 += 1
                                
                                if (rdi_1 s>= rbx_1[0x23].d)
                                    goto label_1421c728d
                            
                            *(arg1 + 0xac) = rdi_1
                            *r14_2 = rdi_1
                        
                    label_1421c728d:
                        r14_2[1] = result_2.d
                        
                        if (result_2 != 0)
                            *(r14_2 + 8) = *(result_2 + 0x30)
                            result = zx.q(*(result_2 + 0x38))
                            r14_2[4] = result.d
                    
                    break
            
            r8 += 1
            rdx_1 = &rdx_1[1]
        while (r8 s< result_3)

return result
