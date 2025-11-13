// 函数: sub_1409d14d0
// 地址: 0x1409d14d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)

if (rbx == 0)
    return 

void* r11_1 = *(rbx + 0xc0)
int64_t* rbx_1 = *(rbx + 0xc8)

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (r11_1 != 0 && *arg4 == data_143f35cc8)
    uint128_t zmm1 = zx.o(arg4[6])
    int32_t rdi_1 = arg4[7].d
    uint64_t var_58_1 = zmm1.q
    
    if (*(arg2 + 0x520) s<= 0)
        int64_t r8 = 0
        int64_t* rcx_2 = (sx.q(arg3) << 5) + **(arg2 + 0x28)
        int32_t* rdx = *rcx_2
        uint64_t r9_1 = sx.q(rcx_2[1].d) << 2 u>> 2
        
        if (rdx u> &rdx[rcx_2[1]])
            r9_1 = 0
        
        if (r9_1 != 0)
            do
                int64_t rax_3 = sx.q(*rdx)
                rdx = &rdx[1]
                r8 += 1
                int64_t rcx_3 = rax_3 * 3
                void* rax = *(r11_1 + 0x178)
                *(rax + (rcx_3 << 2)) = zmm1.q
                *(rax + (rcx_3 << 2) + 8) = rdi_1
            while (r8 != r9_1)
    
    uint128_t zmm8
    zmm8.d = rdi_1.d f- *(arg1 + 0xc0)
    uint128_t zmm9 = *(arg1 + 0xd0)
    uint128_t zmm2 = var_58_1.d
    uint32_t zmm3[0x4] = var_58_1:4.d
    float zmm5 = *(arg1 + 0xb8)
    zmm3[0] = zmm3[0] f- *(arg1 + 0xbc)
    uint128_t zmm6
    zmm6.d = zmm2.d f- zmm5
    zmm1.d = zmm8.d f* zmm8.d
    uint128_t zmm0
    zmm0.d = zmm6.d f* zmm6.d
    float zmm4 = zmm3[0] f* zmm3[0] f+ zmm0.d
    zmm0.d = zmm9.d f* zmm9.d
    zmm4 = zmm4 f+ zmm1.d
    
    if (not(zmm4 f<= zmm0.d))
        zmm0 = _mm_sqrt_ss(0, zmm4)
        zmm1.d = zmm0.d f- zmm9.d
        zmm1.d = zmm1.d f* 0.5f
        zmm9.d = zmm9.d f+ zmm1.d
        zmm1.d = zmm1.d f/ zmm0.d
        *(arg1 + 0xd0) = zmm9.d
        zmm0.d = zmm1.d f* zmm3[0]
        zmm5 = zmm1.d f* zmm6.d f+ *(arg1 + 0xb8)
        zmm1.d = zmm1.d f* zmm8.d
        zmm0.d = zmm0.d f+ *(arg1 + 0xbc)
        zmm1.d = zmm1.d f+ *(arg1 + 0xc0)
        *(arg1 + 0xb8) = zmm5
        *(arg1 + 0xbc) = zmm0.d
        *(arg1 + 0xc0) = zmm1.d
    
    zmm0 = zmm2
    zmm3[0] = zmm3[0] f- *(arg1 + 0xbc)
    zmm2.d = zmm2.d f- *(arg1 + 0xc0)
    zmm0.d = zmm0.d f- zmm5
    zmm3 = __maxss_xmmss_memss(_mm_and_ps(zmm3, 0x7fffffff)[0], *(arg1 + 0xc8))
    zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
    zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
    zmm0 = __maxss_xmmss_memss(zmm0.d, *(arg1 + 0xc4))
    zmm2 = __maxss_xmmss_memss(zmm2.d, *(arg1 + 0xcc))
    *(arg1 + 0xc8) = zmm3[0]
    *(arg1 + 0xc4) = zmm0.d
    *(arg1 + 0xcc) = zmm2.d

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t rdi_2 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_2 == 1)
    (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_2))
