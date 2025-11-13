// 函数: sub_14219f590
// 地址: 0x14219f590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((*(arg1 + 0x30) & 1) != 0 && arg2 != 0 && *(arg1 + 0x34) != 0 && (*(arg2 + 0xe0) & 0x100) != 0)
    int64_t* rbx_1 = *(arg2 + 0x1d0)
    void* rax = sub_1421b85d0(arg1, arg2)
    int32_t i = 0
    int32_t arg_8 = *(arg2 + 0x30)
    void* var_b0
    __builtin_memset(&var_b0, 0, 0x50)
    int64_t var_a8
    int64_t var_a0
    int64_t var_98
    int64_t var_90
    int64_t var_88
    int64_t var_80
    int64_t var_78
    int64_t var_70
    int64_t var_68
    (*(*rbx_1 + 0x388))(rbx_1, arg2, arg4, &arg_8, &var_b0, &var_68, &var_70, &var_78, &var_a8, 
        &var_a0, &var_80, &var_88, &var_90, &var_98)
    int32_t r12_1 = *(arg1 + 0x34)
    
    if (*(arg1 + 0x38) s> 0)
        int32_t rax_2 = *(rax + 4) * 0xbb38435 + 0x3619636b
        *(rax + 4) = rax_2
        int32_t rcx_2 = *(arg1 + 0x38)
        int32_t rax_6 = *(arg1 + 0x34) - rcx_2
        uint128_t zmm0
        zmm0.d = (rax_2 u>> 9 | 0x3f800000).d f- 1f
        arg3 = _mm_cvtepi32_ps(zx.o(rcx_2))
        uint128_t zmm2
        zmm2.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* zmm0.d
        zmm2.d = zmm2.d f+ arg3.d
        r12_1 = int.d(zmm2.d)
    
    void* rdx_1 = var_b0
    result = zx.q(r12_1 << 0xc)
    int32_t rbx_2 = -1
    *(rdx_1 + 0x38) = (*(rdx_1 + 0x38) & 0xff000fff) | result.d
    char r13_1 = *(arg1 + 0x5b)
    int128_t zmm7
    zmm7.d = 1f f/ _mm_cvtepi32_ps(zx.o(r12_1 + 1)).d
    
    if (r12_1 + 1 s> 0)
        uint128_t zmm6
        uint128_t var_38_1 = zmm6
        result = arg1 + 0x40
        int64_t* rdi_2 = nullptr
        
        do
            if (r13_1 == 0 || (*(arg1 + 0x110) & 2) == 0)
                rbx_2 = 0
            else
                rbx_2 = neg.d(rbx_2)
            
            int32_t r9_2 = (*(arg2 + 0x18)).d
            int64_t var_100_2 = 0
            int64_t* var_108_1
            var_108_1.d = rbx_2
            zmm6.d = _mm_cvtepi32_ps(zx.o(i)).d f* zmm7.d
            void var_60
            int64_t* rax_8
            rax_8, arg3, zmm6, zmm7 = sub_141fe56b0(result, &var_60, zmm6, arg3, r9_2, var_108_1)
            int64_t rcx_7 = var_a8
            *(rdi_2 + rcx_7) = *rax_8
            *(rdi_2 + rcx_7 + 8) = rax_8[1].d
            
            if ((*(arg1 + 0x108) & 1) != 0)
                rbx_2 = neg.d(rbx_2)
                int64_t var_100_3 = 0
                var_108_1.d = rbx_2
                void var_54
                int64_t* rax_10
                rax_10, arg3, zmm7 =
                    sub_141fe56b0(arg1 + 0x40, &var_54, zmm6, arg3, (*(arg2 + 0x18)).d, var_108_1)
                int64_t rcx_9 = var_a0
                *(rdi_2 + rcx_9) = *rax_10
                *(rdi_2 + rcx_9 + 8) = rax_10[1].d
            
            i += 1
            result = arg1 + 0x40
            rdi_2 += 0xc
        while (i s< r12_1 + 1)

return result
