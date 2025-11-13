// 函数: sub_140f18220
// 地址: 0x140f18220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*arg2).d f!= *(arg1 + 0xbc) || not((*(arg2 + 4)).d f== *(arg1 + 0xc0)))
    *(arg1 + 0xbc) = *arg2
    
    if (*(arg1 + 0x40) - *(arg1 + 0x6c) s> 0)
        *(arg1 + 0x88) |= 1

uint128_t zmm6 = *(arg1 + 0xc4)
uint128_t result

if (not(zmm6.d f!= *arg3))
    result = arg3[1]

if (zmm6.d f!= *arg3 || not(result.d f== *(arg1 + 0xc8)))
    uint128_t zmm1 = zx.o(*arg3)
    zmm6.d = zmm6.d f- zmm1.d
    uint128_t zmm7 = *(arg1 + 0xc8)
    *(arg1 + 0xc4) = zmm1.q
    void* i = *(arg1 + 0x28)
    void* r14_1 = sx.q(*(arg1 + 0x30)) * 0x58
    result = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    zmm7.d = zmm7.d f- result.d
    
    for (void* r14_2 = r14_1 + i; i != r14_2; i += 0x58)
        result.d = zmm6.d f+ *(i + 0x30)
        zmm1.d = zmm7.d f+ *(i + 0x34)
        *(i + 0x30) = result.d
        *(i + 0x34) = zmm1.d
        int64_t* j = *i
        
        for (void* rbp_3 = &j[sx.q(*(i + 8)) * 2]; j != rbp_3; j = &j[2])
            int64_t* rbx_1 = *j
            void arg_10
            int32_t* rax_5 = (*(*rbx_1 + 0x38))(rbx_1, &arg_10)
            zmm1.d = zmm7.d f+ rax_5[1]
            result.d = zmm6.d f+ *rax_5
            int32_t arg_c = zmm1.d
            int32_t arg_8 = result.d
            (*(*rbx_1 + 0x30))(rbx_1, &arg_8)

return result
