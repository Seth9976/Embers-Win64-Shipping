// 函数: sub_1421c7b70
// 地址: 0x1421c7b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0x28)
uint64_t r14 = zx.q(arg3)
uint64_t result = *(rbx + 0x30)
uint32_t rsi = zx.d(*(result + 0xa9))

if (rsi != 0)
    uint64_t rbp_1 = zx.q(*(arg2 + 0x38))
    
    if (rbp_1.d != 0)
        if (rsi == 1 || rsi.b == 2)
            int64_t* rcx_2 = *(rbx + 0x48)
            
            if (rcx_2 != 0)
                result = (*(*rcx_2 + 0x370))(rcx_2)
            
            if (rcx_2 == 0 || result.b != 0)
                void* rcx_3 = *(*(arg2 + 0x10) + 0x1b0)
                int32_t rbx_3
                
                if (rcx_3 == 0)
                    void* rax_4 = *(rbx + 0x30)
                    rbx_3 = *(rax_4 + 0xb4) * *(rax_4 + 0xb0)
                else
                    rbx_3 = *(rcx_3 + 0x34) * *(rcx_3 + 0x30)
                
                if (rbx_3 == 0)
                    rbx_3 = 1
                
                int512_t zmm1
                
                if ((arg1[0xe].b & 1) == 0)
                    zmm1.o = *(arg6 + 0xc)
                else
                    zmm1.o = *(arg2 + 0x12c)
                
                uint128_t zmm0 = sub_141fe5610(&arg1[0xf], zmm1, *(arg2 + 0x18), nullptr)
                *(r14 + arg6) = 0
                int32_t zmm6_1 = zmm0.d
                result = zx.q(arg1[0x15].d)
                zmm0 = zx.o(0)
                uint128_t zmm1_1
                
                if (result.d s> 1)
                    zmm1_1 = _mm_cvtepi32_ps(zx.o(result.d))
                    
                    if (not(zmm1_1.d f< 0f))
                        result = zx.q(rbx_3 - 1)
                        zmm0 = _mm_min_ss(_mm_cvtepi32_ps(zx.o(result.d)).d, zmm1_1.d)
                    
                    *(r14 + arg6) = zmm0.d
                else if (result.d == 0)
                    void* rax_5 = sub_1421b7cc0(arg2, arg1)
                    void* rcx_6 = rax_5
                    
                    if (rax_5 == 0)
                        rcx_6 = *(arg2 + 0x18) + 0x610
                    
                    int32_t rax_7 = *(rcx_6 + 4) * 0xbb38435 + 0x3619636b
                    *(rcx_6 + 4) = rax_7
                    zmm1_1.d = (rax_7 u>> 9 | 0x3f800000).d f- 1f
                    zmm0.d = _mm_cvtepi32_ps(zx.o(rbx_3 - 1)).d f* zmm1_1.d
                    result = truncf(zmm0.d)
                    *(r14 + arg6) = zmm0.d
                zmm0.d = zmm0.d f* zmm6_1
                *(rbp_1 + arg6) = zmm0.d
        else if (rsi != 0 && rbp_1.d != 0)
            int64_t* rcx = *(rbx + 0x48)
            
            if (rcx != 0)
                result = (*(*rcx + 0x370))(rcx)
            
            if (rcx == 0 || result.b != 0)
                int32_t var_38_1 = arg4.d
                int32_t* rbx_1 = arg6 + rbp_1
                int32_t* var_40_1 = rbx_1
                uint32_t var_48_1 = rsi
                result = (*(*arg1 + 0x348))(arg1, arg2, zx.q(r14.d))
                *rbx_1 = arg5

return result
