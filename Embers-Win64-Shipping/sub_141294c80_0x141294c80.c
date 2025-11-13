// 函数: sub_141294c80
// 地址: 0x141294c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 3

if (sub_1422dd780(arg1 + 0x10) != 0)
    r12 = 0

void* result = sub_1414e0780(arg1, r12)

if (result.b != 0)
    int64_t r15_1 = sx.q(arg3[1].d)
    
    if (r15_1 s> 0)
        int64_t rdi_1 = 0
        int64_t r13_1 = *arg3
        uint128_t zmm6
        uint128_t var_38_1 = zmm6
        uint128_t zmm7
        uint128_t var_48_1 = zmm7
        uint128_t zmm8
        uint128_t var_58_1 = zmm8
        uint128_t zmm9
        uint128_t var_68_1 = zmm9
        
        do
            int64_t* rbx_1 = *(r13_1 + (rdi_1 << 3))
            
            if ((*(rbx_1 + 0x497c) & 2) == 0)
                if (*(rbx_1 + 0xd7a) != 0)
                    result = sub_142391c90(zx.q(rbx_1[0x15a].d))
                    
                    if (result.b == 0)
                    label_141294d72:
                        int64_t* rax_1
                        
                        if (*(rbx_1 + 0xd7c) == 0)
                            rax_1 = rbx_1
                        else
                            rax_1 = *(arg1 + 0xa0)
                        
                        zmm7 = zx.o(rax_1[0x2b4].d)
                        zmm8 = zx.o(*(rax_1 + 0x159c))
                        zmm9 = zx.o(rax_1[0x2b3].d)
                        void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_1 + 0x15a4)))
                        void* rax_2 = &rcx_6[5]
                        zmm7 = _mm_cvtepi32_ps(zmm7)
                        zmm8 = _mm_cvtepi32_ps(zmm8)
                        zmm9 = _mm_cvtepi32_ps(zmm9)
                        
                        if (rax_2 u> *(arg2 + 0x38))
                            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                            rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_2 = &rcx_6[5]
                        
                        *(arg2 + 0x30) = rax_2
                        void**** rax_3 = *(arg2 + 8)
                        *(arg2 + 0x14) += 1
                        *rax_3 = rcx_6
                        *(arg2 + 8) = &rcx_6[1]
                        rcx_6[1] = 0
                        *rcx_6 = &data_142d54998
                        rcx_6[2].d = zmm9.d
                        *(rcx_6 + 0x14) = zmm8.d
                        *(rcx_6 + 0x1c) = zmm7.d
                        rcx_6[4].d = zmm6.d
                        rcx_6[3].d = 0
                        *(rcx_6 + 0x24) = 0x3f800000
                        
                        if (sub_141405870(*(arg1 + 8) + 0x20, rbx_1, 1) != 0)
                            sub_1412e8960(arg1, arg2, rbx_1)
                            sub_1412e5450(arg1, arg2, rbx_1)
                        
                        result = sub_141267530(zx.q(sub_1414e7c40(r12)) * 0x1d0 + 0x2740 + rbx_1, 
                            nullptr, arg2)
                    else if (*(rbx_1 + 0xd7c) != 0)
                        goto label_141294d48
                else
                    if (*(rbx_1 + 0xd7c) == 0)
                        goto label_141294d72
                    
                label_141294d48:
                    result = sub_142391c90(zx.q(rbx_1[0x15a].d))
                    
                    if (result.b == 0)
                        result = *rbx_1
                        
                        if (result != 0 && *(result + 8) s> 1)
                            goto label_141294d72
            
            rdi_1 += 1
        while (rdi_1 s< r15_1)

return result
