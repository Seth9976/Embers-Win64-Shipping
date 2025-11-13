// 函数: ?add@StringCache@NMP@@QEAA_NKPEAGPEAPEBG@Z
// 地址: 0x140fbe410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)
char rax_1

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140fb4180()
    rax_1 = (*(rbx_1 + 0x58))(r14, &data_143e2b7e0)

int64_t* rbx_2

if (r14 == 0 || rax_1 == 0)
    rbx_2 = nullptr
    *arg2 = 0
else
    rbx_2 = *(arg4 + 0x78)
    int64_t* r14_1 = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (r14_1 == 0)
        *arg2 = 0
    else
        int32_t rax_3 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        float zmm5_1 = *(arg1 + 0x2f4)
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_3 + 1))
        
        if (not(zmm5_1 != 0f))
            zmm5_1 = *arg3 f/ zmm1.d * 0.5f
        
        uint128_t zmm3 = arg3[0xa]
        uint128_t zmm4_1 = arg3[9]
        zmm1.d = zmm3.d f* arg3[7]
        zmm1.d = zmm1.d f- zmm4_1.d f* arg3[8]
        float zmm2 = 1f f/ zmm1.d
        zmm4_1.d = zmm4_1.d f* zmm2
        zmm3.d = zmm3.d f* zmm2
        zmm4_1 ^= data_142d3f780
        zmm1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* *(arg4 + 0x1c)
        zmm1.d = zmm1.d f* arg3[0xc]
        int32_t zmm0_1 = zmm3.d f* arg3[0xb]
        zmm3.d = zmm3.d f* *(arg4 + 0x18)
        zmm1.d = (zmm1 ^ data_142d3f780).d f- zmm0_1
        zmm4_1.d = zmm4_1.d f+ zmm3.d
        zmm4_1.d = zmm4_1.d f+ zmm1.d
        zmm4_1.d = zmm4_1.d f- zmm5_1
        *(arg1 + 0x2f0) = zmm4_1.d
        (*(*r14_1 + 0x38))(r14_1, 0)
        *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
