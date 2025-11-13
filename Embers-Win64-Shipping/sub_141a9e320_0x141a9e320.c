// 函数: sub_141a9e320
// 地址: 0x141a9e320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t result = __security_cookie ^ &var_148
int64_t result_1 = result

if (*(arg1 + 0xe8) != 0 || *(arg1 + 0xe9) != 0 || *(arg1 + 0xea) != 0)
    int32_t rax_1 = *(arg1 + 0xd0)
    void* rdx = arg2[3]
    int32_t rbx_1 = -1
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    int32_t rdi_1
    
    if (rax_1 s>= 0)
        rdi_1 = *(arg1 + 0xd4)
    else
        int32_t rcx = rax_1 * 2
        
        if ((rcx & 0xfffffffe) == 0xfffffffe)
            rdi_1 = -1
        else
            rdi_1 = *(*(rdx + 0x80) + (sx.q(rcx) s>> 1 << 2))
    
    int32_t rax_5 = *(arg1 + 0xe0)
    
    if (rax_5 s>= 0)
        rbx_1 = *(arg1 + 0xe4)
    else
        int32_t rcx_3 = rax_5 * 2
        
        if ((rcx_3 & 0xfffffffe) != 0xfffffffe)
            rbx_1 = *(*(rdx + 0x80) + (sx.q(rcx_3) s>> 1 << 2))
    
    int64_t rdx_1 = arg2[4]
    int64_t r12_1 = sx.q(rdi_1)
    
    if (*(r12_1 + rdx_1) == 0)
        sub_141a98300(&arg2[1], rdi_1)
        rdx_1 = arg2[4]
    
    int64_t rcx_8 = arg2[1]
    int64_t rax_10 = r12_1 * 6
    int64_t r12_2 = sx.q(rbx_1)
    float var_a8[0x4] = *(rcx_8 + (rax_10 << 3))
    float var_98_1[0x4] = *(rcx_8 + (rax_10 << 3) + 0x10)
    float var_88_1[0x4] = *(rcx_8 + (rax_10 << 3) + 0x20)
    
    if (*(r12_2 + rdx_1) == 0)
        sub_141a98300(&arg2[1], rbx_1)
        rcx_8 = arg2[1]
    
    int64_t rax_12 = r12_2 * 0x30
    float var_d8[0x4] = *(rax_12 + rcx_8)
    float var_c8_1[0x4] = *(rax_12 + rcx_8 + 0x10)
    char rax_13 = *(arg1 + 0xeb)
    float var_b8_1[0x4] = *(rax_12 + rcx_8 + 0x20)
    
    if (rax_13 != 1)
        uint32_t var_128_1 = zx.d(rax_13)
        sub_141de6760(*arg2 + 0x10, &arg2[1], &var_a8, rdi_1)
        uint32_t var_128_2 = zx.d(*(arg1 + 0xeb))
        sub_141de6760(*arg2 + 0x10, &arg2[1], &var_d8, rbx_1)
        rax_13 = *(arg1 + 0xeb)
    
    if (*(arg1 + 0xe8) != 0)
        float temp0_1[0x4] = _mm_shuffle_ps(var_98_1, var_98_1, 0xaa)
        float temp0_2[0x4] = _mm_shuffle_ps(var_98_1, var_98_1, 0x55)
        var_c8_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_98_1, temp0_1[0].q), 
            _mm_unpacklo_ps(temp0_2, (zx.o(0)).q)[0].q)
    
    if (*(arg1 + 0xe9) != 0)
        var_d8 = var_a8
    
    if (*(arg1 + 0xea) != 0)
        float temp0_6[0x4] = _mm_shuffle_ps(var_88_1, var_88_1, 0xaa)
        float temp0_7[0x4] = _mm_shuffle_ps(var_88_1, var_88_1, 0x55)
        var_b8_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_88_1, temp0_6[0].q), 
            _mm_unpacklo_ps(temp0_7, 0)[0].q)
    
    if (rax_13 != 1)
        uint32_t var_128_3 = zx.d(rax_13)
        sub_141de5f60(*arg2 + 0x10, &arg2[1], &var_d8, rbx_1)
    
    zmm6 = var_d8
    int64_t rbx_2 = sx.q(arg3[1].d)
    int32_t rax_17 = (rbx_2 + 1).d
    arg3[1].d = rax_17
    
    if (rax_17 s> *(arg3 + 0xc))
        sub_1405c4fe0(arg3)
    
    result = *arg3
    float (* rcx_17)[0x4] = rbx_2 << 6
    *(rcx_17 + result) = rbx_1.o
    *(rcx_17 + result + 0x10) = zmm6
    *(rcx_17 + result + 0x20) = var_c8_1
    *(rcx_17 + result + 0x30) = var_b8_1

__security_check_cookie(result_1 ^ &var_148)
return result
