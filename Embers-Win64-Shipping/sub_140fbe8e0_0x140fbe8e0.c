// 函数: sub_140fbe8e0
// 地址: 0x140fbe8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)
char rax_1

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140fb4180()
    rax_1 = (*(rbx_1 + 0x58))(r14, &data_143e2b7e0)

int64_t* rsi_1

if (r14 == 0 || rax_1 == 0)
    rsi_1 = nullptr
    *arg2 = 0
else
    void* r14_1 = *(arg4 + 0x70)
    rsi_1 = *(arg4 + 0x78)
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    if (r14_1 == 0)
        *arg2 = 0
    else
        int32_t rax_3 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        int128_t zmm6 = *(arg1 + 0x2f0)
        int64_t rax_5 = *(arg1 + 0x2a8)
        uint128_t zmm7
        zmm7.d = (*arg3).d f/ _mm_cvtepi32_ps(zx.o(rax_3 + 1)).d
        int32_t rax_6 = (*rax_5)(arg1 + 0x2a8)
        uint128_t zmm0_1
        zmm0_1.d = zmm7.d f* 0.5f
        zmm0_1.d = zmm0_1.d f+ zmm6.d
        zmm0_1.d = zmm0_1.d f/ zmm7.d
        int32_t rcx_3 = int.d(zmm0_1.d)
        
        if (rcx_3 s< 0)
            rax_6 = 0
        else if (rcx_3 s< rax_6)
            rax_6 = rcx_3
        
        uint128_t var_48 = *(r14_1 + 0x40)
        sub_140f9f6f0(arg1, &var_48, rax_6)
        *(r14_1 + 0x90) = 1
        *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (rsi_1 != 0)
    rsi_1[1].d -= 1
    
    if (rsi_1[1].d == 1)
        (**rsi_1)(rsi_1)
        int32_t temp1_1 = *(rsi_1 + 0xc)
        *(rsi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rsi_1 + 8))(rsi_1, 1)

return arg2
