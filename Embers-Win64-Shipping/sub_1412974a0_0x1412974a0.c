// 函数: sub_1412974a0
// 地址: 0x1412974a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = sub_141080be0(arg1, arg2, *(arg2 + 0x188), *(arg3 + 0x10))

if (*(arg1 + 0x11c) u> 0)
    result = 8
    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(*arg4))
    uint64_t rbp_1 = zx.q(*(arg1 + 0x11c))
    
    if (rbp_1.d u>= 8)
        rbp_1 = 8
    
    float zmm0_1 = 1f f/ zmm1_1.d
    zmm1_1 = zx.o(arg4[1])
    float arg_8 = zmm0_1
    float arg_c = 1f f/ _mm_cvtepi32_ps(zmm1_1).d
    
    if (rbp_1.d != 0)
        uint32_t r12_1 = zx.d(*(arg1 + 0x118))
        int64_t r13_1 = *(arg2 + 0x188)
        uint32_t r15_1 = zx.d(*(arg1 + 0x11a))
        int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        int64_t rax = rbx_3 + rbp_1
        
        if (rax u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
            rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rax = rbx_3 + rbp_1
        
        *(arg2 + 0x30) = rax
        memcpy(rbx_3, &arg_8, rbp_1.d)
        void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_4[6]
        
        if (rax_1 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_4[6]
        
        *(arg2 + 0x30) = rax_1
        void** rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rcx_4
        *(arg2 + 8) = &rcx_4[1]
        rcx_4[1] = 0
        result = &data_142d549d8
        rcx_4[2] = r13_1
        rcx_4[4].d = r12_1
        *(rcx_4 + 0x24) = r15_1
        *rcx_4 = &data_142d549d8
        rcx_4[3] = rbx_3
        rcx_4[5].d = rbp_1.d

return result
