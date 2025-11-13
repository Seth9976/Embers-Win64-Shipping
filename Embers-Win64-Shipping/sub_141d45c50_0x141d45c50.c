// 函数: sub_141d45c50
// 地址: 0x141d45c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
bool z

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
    z = true
else
    result = zx.q(*(arg1 + 8))
    z = false

if (not(z) && arg3[1].d != 0)
    uint64_t zmm1 = zx.q(*(arg1 + 0x2c))
    uint64_t zmm0 = zx.q(*(arg1 + 0x28))
    void*** rsi_1 = nullptr
    void*** r13_1 = nullptr
    int64_t r15_1 = *arg3
    uint128_t zmm6 = zx.o(*(arg1 + 0xc))
    *arg3 = 0
    int32_t arg_20 = arg3[1].d
    int32_t rax_1 = *(arg3 + 0xc)
    int64_t temp0_1 = _mm_cvtepi32_pd(zmm1)
    arg3[1] = 0
    int32_t var_98_1 = rax_1
    int32_t rax_2 = *(arg1 + 0xc)
    void*** var_90_1 = nullptr
    zmm1 = temp0_1 f/ _mm_cvtepi32_pd(zmm0)
    zmm6.q = _mm_cvtepi32_pd(zmm6.q).q f* zmm1
    uint128_t zmm7
    zmm7.q = zmm6.q f+ zmm1
    
    if (*(arg1 + 0x48) != 0)
        void*** rax_3
        rax_3, zmm6 = sub_140a491d0(0)
        rsi_1 = rax_3
        var_90_1 = rax_3
        r13_1 = rax_3
    
    int64_t* rbp_1 = *(arg1 + 0x10)
    EnterCriticalSection(&rbp_1[2])
    int32_t r12_1 = rbp_1[8].d
    bool arg_8 = r12_1 != 0
    
    if (rbp_1 != -0x10)
        LeaveCriticalSection(&rbp_1[2])
    
    int32_t r12_3
    
    if (r12_1 != 0)
        r12_3 = rax_2
    else
        EnterCriticalSection(&rbp_1[0xb])
        
        if (rbp_1[0x11].d s>= rbp_1[0x12].d)
            r12_3 = rax_2
            arg_8 = true
        else
            int64_t r12_2 = sx.q(rbp_1[0x11].d)
            int32_t rax_5 = (r12_2 + 1).d
            rbp_1[0x11].d = rax_5
            
            if (rax_5 s> *(rbp_1 + 0x8c))
                sub_1405c4f50(&rbp_1[0x10])
            
            int32_t rax_6 = arg_20
            r12_3 = rax_2
            r13_1 = var_90_1
            uint64_t* rcx_6 = r12_2 * 0x30 + rbp_1[0x10]
            arg_20 = 0
            *rcx_6 = zmm6.q
            rcx_6[1] = zmm7.q
            rcx_6[2].d = r12_3
            rcx_6[3] = r15_1
            r15_1 = 0
            rcx_6[4].d = rax_6
            *(rcx_6 + 0x24) = var_98_1
            rcx_6[5] = r13_1
            var_98_1 = 0
        
        if (rbp_1 != -0x58)
            LeaveCriticalSection(&rbp_1[0xb])
    
    if (arg_8 == 0)
        int64_t* rcx_9 = rbp_1[0xa]
        result = (*(*rcx_9 + 0x10))(rcx_9)
        
        if (r15_1 != 0)
            result = sub_140a74f90(r15_1)
    else
        int32_t var_68_1 = arg_20
        int32_t var_64_1 = var_98_1
        uint64_t var_88 = zmm6.q
        uint64_t var_80_1 = zmm7.q
        int32_t var_78_1 = r12_3
        int64_t var_70_1 = r15_1
        void*** var_60_1 = r13_1
        result = sub_141d45a70(rbp_1, &var_88)
    
    *(arg1 + 0xc) += 1
    
    if (rsi_1 != 0)
        (*rsi_1)[4](rsi_1, 0xffffffff, 0)
        result = sub_140a4fc50(rsi_1)

int64_t rcx_13 = *arg3

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
