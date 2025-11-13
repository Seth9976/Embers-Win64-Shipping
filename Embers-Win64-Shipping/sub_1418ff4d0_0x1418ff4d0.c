// 函数: sub_1418ff4d0
// 地址: 0x1418ff4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg3 + 0x18))
void*** rdx_3

if (rdx == 0)
    uint128_t zmm1 = *arg3
    void* r14_3 = zmm1.q
    int64_t r15_2 = sx.q((arg3[1].q).d)
    uint128_t temp0_2 = _mm_bsrli_si128(zmm1, 8)
    int32_t r12_2 = _mm_bsrli_si128(zmm1, 8).d
    int32_t rdi_5 = (&data_1439c85f4)[r15_2 * 0xa] * (temp0_2.q u>> 0x20).d
    int32_t rbp_3 = *(r14_3 + 0x18) - r12_2
    void*** rax_9 = j_sub_140a82f30(0xa0)
    
    if (rax_9 != 0)
        if (rbp_3 u<= rdi_5)
            rdi_5 = rbp_3
        
        rdx_3 = sub_1418f1fd0(rax_9, *(arg1 + 0x58), r14_3, r14_3 + 0x20, rdi_5, r15_2.d, r12_2)
        goto label_1418ff6e8
    
label_1418ff6e6:
    rdx_3 = nullptr
label_1418ff6e8:
    *arg2 = rdx_3
    
    if (rdx_3 != 0)
        rdx_3[1].d += 1
else if (rdx == 1)
    int96_t var_38_1 = (*arg3).12
    void*** rax_3 = j_sub_140a82f30(0xa0)
    void*** r8_1 = rax_3
    
    if (rax_3 == 0)
        r8_1 = nullptr
    else
        int64_t rcx_2 = *(arg1 + 0x58)
        *r8_1 = &data_142d3ff08
        r8_1[1].d = 0
        *(r8_1 + 0xc) = 0
        r8_1[2].w = 0x100
        r8_1[3] = rcx_2
        int32_t rcx_3 = var_38_1:8.d
        *r8_1 = &data_142ff1c18
        void* rax_4 = var_38_1.q
        __builtin_memset(&r8_1[4], 0, 0x24)
        r8_1[9] = rax_4
        __builtin_memset(&r8_1[0xa], 0, 0x24)
        r8_1[0xf].d = rcx_3
        *(r8_1 + 0x74) = *(rax_4 + 0x1c) - rcx_3
        __builtin_memset(&r8_1[0x10], 0, 0x18)
        r8_1[0x13].d = 0xffffffff
    
    *arg2 = r8_1
    
    if (r8_1 != 0)
        r8_1[1].d += 1
else
    if (rdx == 2)
        uint128_t zmm0 = *arg3
        void* rbp_1 = zmm0.q
        int64_t r15_1 = _mm_bsrli_si128(zmm0, 8).q
        int32_t r12_1 = *(rbp_1 + 0x18)
        int32_t r14_2 = *(rbp_1 + 0x1c) - r15_1.d
        int32_t rdi_3 = (r15_1 u>> 0x20).d * r12_1
        void*** rax_1 = j_sub_140a82f30(0xa0)
        
        if (rax_1 == 0)
            goto label_1418ff6e6
        
        int32_t rcx = 0x20
        
        if (r12_1 == 4)
            rcx = 0x1c
        
        if (r14_2 u<= rdi_3)
            rdi_3 = r14_2
        
        rdx_3 = sub_1418f1fd0(rax_1, *(arg1 + 0x58), rbp_1, rbp_1 + 0x28, rdi_3, rcx, r15_1.d)
        goto label_1418ff6e8
    
    *arg2 = 0
return arg2
