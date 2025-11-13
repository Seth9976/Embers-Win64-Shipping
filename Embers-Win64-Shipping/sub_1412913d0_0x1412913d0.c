// 函数: sub_1412913d0
// 地址: 0x1412913d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("RenderBasePass")
int64_t r15 = sx.q(arg3[1].d)

if (r15 s> 0)
    int64_t r12_1 = *arg3
    int64_t rdi_1 = 0
    uint128_t zmm6
    uint128_t var_38_1 = zmm6
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    uint128_t zmm8
    uint128_t var_58_1 = zmm8
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    
    do
        uint64_t rbx_1 = *(r12_1 + (rdi_1 << 3))
        
        if ((*(rbx_1 + 0x497c) & 2) == 0)
            if (*(rbx_1 + 0xd7a) != 0)
                if (sub_142391c90(zx.q(*(rbx_1 + 0xad0))) == 0)
                label_1412914bd:
                    
                    if (sub_141405870(*(arg1 + 8) + 0x20, rbx_1, 1) != 0)
                        sub_1412e5bc0(arg1, arg2, rbx_1)
                        sub_1412e5450(arg1, arg2, rbx_1)
                    
                    zmm7 = zx.o(*(rbx_1 + 0x15a0))
                    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    zmm8 = zx.o(*(rbx_1 + 0x159c))
                    zmm9 = zx.o(*(rbx_1 + 0x1598))
                    zmm6 = _mm_cvtepi32_ps(zx.o(*(rbx_1 + 0x15a4)))
                    void* rax_5 = &rcx_8[5]
                    zmm7 = _mm_cvtepi32_ps(zmm7)
                    zmm8 = _mm_cvtepi32_ps(zmm8)
                    zmm9 = _mm_cvtepi32_ps(zmm9)
                    
                    if (rax_5 u> *(arg2 + 0x38))
                        zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_5 = &rcx_8[5]
                    
                    *(arg2 + 0x30) = rax_5
                    void** rax_6 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_6 = rcx_8
                    *(arg2 + 8) = &rcx_8[1]
                    rcx_8[1] = 0
                    *rcx_8 = &data_142d54998
                    rcx_8[2].d = zmm9.d
                    *(rcx_8 + 0x14) = zmm8.d
                    *(rcx_8 + 0x1c) = zmm7.d
                    rcx_8[4].d = zmm6.d
                    rcx_8[3].d = 0
                    *(rcx_8 + 0x24) = 0x3f800000
                    sub_141267530(rbx_1 + 0x2910, nullptr, arg2)
                    void* rdx_3 = *(arg1 + 8)
                    int64_t rcx_13 = *(rdx_3 + 0xd0)
                    int64_t var_90_1 = *(rbx_1 + 0x10)
                    int64_t var_a8 = data_14395da00
                    int64_t var_a0_1 = 0
                    int32_t var_98_1 = 0x11
                    int64_t var_78_1 = rcx_13
                    int128_t var_88_1 = zx.o(0)
                    int32_t var_70_1 = 0
                    int32_t var_98_2 = *(rdx_3 + 0xf70)
                    int64_t var_a0_2 = data_1439b5400
                    sub_141291670(arg1, arg2, rbx_1, &var_a8)
                else if (*(rbx_1 + 0xd7c) != 0)
                    goto label_14129148c
            else
                if (*(rbx_1 + 0xd7c) == 0)
                    goto label_1412914bd
                
            label_14129148c:
                
                if (sub_142391c90(zx.q(*(rbx_1 + 0xad0))) == 0)
                    void* rax_3 = *rbx_1
                    
                    if (rax_3 != 0 && *(rax_3 + 8) s> 1)
                        goto label_1412914bd
        
        rdi_1 += 1
    while (rdi_1 s< r15)

return sub_140b37f60("RenderBasePass") __tailcall
