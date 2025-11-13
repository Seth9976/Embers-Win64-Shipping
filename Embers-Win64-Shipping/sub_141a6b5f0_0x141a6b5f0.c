// 函数: sub_141a6b5f0
// 地址: 0x141a6b5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg2
int128_t var_28 = *(arg1 + 0x90)
int64_t rdi = var_28.q
uint64_t result

if (rdi.b == 2)
label_141a6b653:
    int64_t rcx_1 = var_28:8.q
    
    if (rcx_1.b == 2)
    label_141a6b696:
        int32_t rsi_1 = *(arg1 + 0xe0)
        var_28 = *arg2
        result = sub_141a6b440(arg1, &var_28, arg3, arg4)
        
        if (arg3 != 0 && rdi.b != 2)
            result = sub_141a52670()
            
            if (result != arg1 && *(arg1 + 0x110) != 0)
                int64_t r14_1 = 0
                int64_t* rcx_3 = nullptr
                
                if (sub_141a52670() != arg1)
                    rcx_3 = *(arg1 + 0x110)
                
                void* rax_5 = (*(*rcx_3 + 0x280))(rcx_3)
                int64_t r8_1 = *(arg2 + 8)
                
                if (rdi.b == 0)
                    r14_1 = 4
                
                int32_t arg_c = 0
                int64_t r9 = *(rax_5 + 0x108)
                int32_t arg_8 = rbx - *(r14_1 + &data_14302eb88) - (rdi u>> 0x20).d
                sub_1408ec700(&arg_8, arg_8.q, r8_1, r9)
                double zmm1_1[0x2] = *(arg1 + 0xf0)
                int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(arg_8))
                zmm1_1 = _mm_cvtps_pd(zmm1_1[0])
                zmm1_1[0] = zmm1_1[0] f* temp0_1
                int64_t rcx_5 = int.q(zmm1_1[0])
                
                if (rcx_5 != -0x8000000000000000 && not(float.d(rcx_5) f== zmm1_1[0]))
                    uint32_t temp0_4 = _mm_movemask_pd(_mm_unpacklo_pd(zmm1_1, zmm1_1[0]))
                    zmm1_1 = zx.o(0)
                    zmm1_1[0] = float.d(rcx_5 - (zx.q(temp0_4) & 1))
                
                int32_t rax_8 = int.d(zmm1_1[0])
                result = zx.q(rax_8 + rsi_1)
                
                if (rax_8 + rsi_1 s>= 0)
                    *(arg1 + 0xe0) = result.d
    else
        result = rcx_1 u>> 0x20
        int32_t rdx
        
        if (result.d s> rbx || (result.d s>= rbx && rcx_1.b == 1))
            rdx = var_28:0xc.d
        label_141a6b680:
            
            if (rdx == result.d)
                goto label_141a6b696
        else
            rdx = rbx
            
            if (rcx_1.b == 1)
                goto label_141a6b680
else
    result = rdi u>> 0x20
    int32_t rcx
    
    if (result.d s< rbx || (result.d s<= rbx && rdi.b == 1))
        rcx = var_28:4.d
    label_141a6b64b:
        
        if (rcx == result.d)
            goto label_141a6b653
    else
        rcx = rbx
        
        if (rdi.b == 1)
            goto label_141a6b64b

return result
