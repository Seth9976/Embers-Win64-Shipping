// 函数: sub_1403edae0
// 地址: 0x1403edae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
uint64_t result = __security_cookie ^ &var_b8
uint64_t result_1 = result
int64_t rbx = sx.q(arg3)
uint32_t r11 = 0
int64_t r9 = 0
int32_t r8 = (rbx + 1).d
var_bc
int128_t zmm0
int128_t zmm1

if (r8 s>= 4)
    int128_t* r10_1 = arg2 + 8
    result = zx.q(((r8 - 4) u>> 2) + 1)
    uint64_t i_3 = zx.q(result.d)
    r11 = (result << 2).d
    uint64_t i
    
    do
        zmm0 = *(r10_1 - 8)
        zmm1 = *r10_1
        r9 += 4
        r10_1 = &r10_1[1]
        var_d4
        *(&var_d4 + (r9 << 3)) = zmm0.d
        int32_t var_d8[0x2]
        (&var_d8)[r9][0] = zmm0.d
        zmm0 = *(r10_1 - 0x14)
        var_cc
        *(&var_cc + (r9 << 3)) = zmm0.d
        int32_t var_d0[0x2]
        (&var_d0)[r9][0] = zmm0.d
        zmm0 = *(r10_1 - 0xc)
        *(&var_bc + (r9 << 3)) = zmm0.d
        int32_t var_c0[0x2]
        (&var_c0)[r9][0] = zmm0.d
        var_c4
        *(&var_c4 + (r9 << 3)) = zmm1.d
        int32_t var_c8[0x2]
        (&var_c8)[r9][0] = zmm1.d
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r11 s< r8)
    void* rcx = arg2 + (r9 << 2)
    result = &var_b8 + (r9 << 3)
    uint64_t i_4 = zx.q(r8 - r11)
    uint64_t i_1
    
    do
        zmm0 = *rcx
        result += 8
        rcx += 4
        *(result - 4) = zmm0.d
        *(result - 8) = zmm0.d
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t var_b4
zmm0 = var_b4
int64_t r11_1 = 0
int64_t rdi = rbx

if (rbx.d s> 0)
    int64_t r10_2 = -4
    void var_b0
    void* rcx_1 = &var_b0
    
    do
        zmm1 = zmm0.d f<= 9.99999972e-10f ? 0x3089705f : zmm0
        
        int64_t r9_1 = sx.q(rbx.d)
        result = 0
        int128_t zmm4
        zmm4.d = (*rcx_1).d f/ zmm1.d
        zmm4 ^= 0x80000000
        *(arg1 + (r11_1 << 2)) = zmm4.d
        float zmm2
        
        if (r9_1 s>= 4)
            void* rdx = rcx_1 + 8
            int64_t i_5 = ((r9_1 - 4) u>> 2) + 1
            result = i_5 << 2
            int64_t i_2
            
            do
                zmm1 = *(r10_2 + rdx - 8)
                zmm2 = *(rdx - 8)
                rdx += 0x20
                zmm0.d = zmm1.d f* zmm4.d
                zmm0.d = zmm0.d f+ zmm2
                *(rdx - 0x28) = zmm0.d
                zmm2 = zmm2 f* zmm4.d f+ zmm1.d
                zmm1 = *(r10_2 + rdx - 0x20)
                zmm0.d = zmm1.d f* zmm4.d
                *(r10_2 + rdx - 0x28) = zmm2
                float zmm3 = *(rdx - 0x20)
                zmm0.d = zmm0.d f+ zmm3
                *(rdx - 0x20) = zmm0.d
                zmm3 = zmm3 f* zmm4.d f+ zmm1.d
                zmm1 = *(r10_2 + rdx - 0x18)
                zmm0.d = zmm1.d f* zmm4.d
                *(r10_2 + rdx - 0x20) = zmm3
                zmm2 = *(rdx - 0x18)
                zmm0.d = zmm0.d f+ zmm2
                *(rdx - 0x18) = zmm0.d
                zmm2 = zmm2 f* zmm4.d f+ zmm1.d
                zmm1 = *(r10_2 + rdx - 0x10)
                zmm0.d = zmm1.d f* zmm4.d
                *(r10_2 + rdx - 0x18) = zmm2
                zmm3 = *(rdx - 0x10)
                zmm0.d = zmm0.d f+ zmm3
                *(rdx - 0x10) = zmm0.d
                *(r10_2 + rdx - 0x10) = zmm3 f* zmm4.d f+ zmm1.d
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
            zmm0 = var_b4
        
        if (result s< r9_1)
            do
                zmm1 = (&var_b4)[result * 2]
                zmm2 = *(rcx_1 + (result << 3))
                result += 1
                zmm0.d = zmm1.d f* zmm4.d
                zmm0.d = zmm0.d f+ zmm2
                *(rcx_1 + (result << 3) - 8) = zmm0.d
                *(&var_bc + (result << 3)) = zmm2 f* zmm4.d f+ zmm1.d
            while (result s< r9_1)
            
            zmm0 = var_b4
        
        r11_1 += 1
        rbx = zx.q(rbx.d - 1)
        r10_2 -= 8
        rcx_1 += 8
    while (r11_1 s< rdi)

__security_check_cookie(result_1 ^ &var_b8)
return result
