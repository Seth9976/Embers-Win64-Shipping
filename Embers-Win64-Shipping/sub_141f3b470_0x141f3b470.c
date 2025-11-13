// 函数: sub_141f3b470
// 地址: 0x141f3b470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg2)
int64_t* rsi = arg4
int128_t zmm8 = arg3
int64_t* r14 = arg1
int64_t __saved_r15
int32_t r8

if (&__saved_r15 == 0x100)
    r8 = 0x20
else
    r8 = 0x1f - temp0

int32_t r8_2 = r8 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg2 - 1)
int32_t r11

if (r8_2 == 0)
    r11 = 0x20
else
    r11 = 0x1f - temp0_1

int32_t r15 = 0
int32_t rcx_1 = *(arg4 + 0xc)
uint32_t rbx_2 = (sx.q(r14[1].d) << 2 u>> 3).d
int32_t var_118 = 0
int32_t r12 = 0
int32_t var_114 = 0
int32_t rdi = 0
arg4[1].d = 0
int32_t rbp = ((0x20 - r11) & not.d(r8_2)) + 1
int32_t var_100 = rbp

if (rcx_1 != rbx_2)
    sub_1405c5510(rsi, rbx_2)
    rcx_1 = *(rsi + 0xc)
    rdi = rsi[1].d

int32_t rax_2 = rdi + rbx_2
rsi[1].d = rax_2

if (rax_2 s> rcx_1)
    sub_1405daba0(rsi)

uint64_t result = memset(sx.q(rdi) + *rsi, 0, sx.q(rbx_2))
int32_t rcx_6 = 0
int32_t var_110 = 0

if (rbp s> 0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    do
        int64_t r8_5 = sx.q(r15)
        int64_t var_f8_1 = r8_5
        int64_t i_1 = 6
        int64_t i_2 = 6
        int32_t rdx_2 = 1 << (rbp.b - rcx_6.b - 1)
        int64_t rcx_8 = sx.q(r12)
        uint64_t rax_6 = zx.q(rdx_2 * rdx_2)
        int32_t var_10c_1 = rdx_2
        int64_t var_f0_1 = rcx_8
        uint64_t r10_2 = zx.q((rax_6 << 3).d)
        uint64_t r11_1 = zx.q((rax_6 << 2).d)
        int32_t var_108_1 = r10_2.d
        int32_t var_104_1 = r11_1.d
        int64_t i
        
        do
            int16_t* rdi_2 = *r14 + r8_5
            int32_t* rsi_2 = *rsi + rcx_8
            
            if (rdx_2 s> 0)
                int64_t rax_7 = sx.q(rdx_2)
                uint64_t j_1 = zx.q(rdx_2)
                uint64_t j
                
                do
                    int32_t* r14_1 = rsi_2
                    int16_t* rbx_3 = rdi_2
                    uint64_t k_1 = zx.q(rdx_2)
                    uint64_t k
                    
                    do
                        int32_t var_d8[0x4]
                        int32_t* rax_9 = sub_140acc9b0(&var_d8, rbx_3)
                        float zmm4_1 = _mm_sqrt_ss(0, zmm8.d f* *rax_9) * 0.0625f
                        int128_t zmm5_1
                        zmm5_1.d = _mm_sqrt_ss(0, zmm8.d f* rax_9[1]).d f* 0.0625f
                        zmm6.d = _mm_sqrt_ss(zx.o(0).d, zmm8.d f* rax_9[2]).d f* 0.0625f
                        int128_t zmm1 = _mm_max_ss(_mm_max_ss(zmm5_1.d, zmm4_1).d, 
                            _mm_max_ss(zmm6.d, 0x3727c5ac))
                        
                        if (not(zmm1.d f<= 0.75f))
                            int128_t zmm3
                            zmm3.d = zmm1.d f- 0.5625f
                            zmm3.d = zmm3.d f/ (zmm1.d - 0.5f)
                            arg3.d = zmm3.d f/ zmm1.d
                            zmm1.d = arg3.d f* zmm5_1.d
                            float zmm0_1 = arg3.d * zmm4_1
                            arg3.d = arg3.d f* zmm6.d
                            zmm5_1 = zmm1
                            zmm1 = zmm3
                            zmm4_1 = zmm0_1
                            zmm6 = arg3
                        
                        char rcx_10 = -1
                        zmm5_1.d = zmm5_1.d f* 255f
                        zmm1.d = zmm1.d f* 255f
                        zmm6.d = zmm6.d f* 255f
                        zmm1.d = zmm1.d f+ zmm1.d
                        int32_t rdx_6 = neg.d(int.d(-0.5f f- zmm1.d) s>> 1)
                        
                        if (rdx_6 s<= 0xff)
                            rcx_10 = rdx_6.b
                        
                        rbx_3 = &rbx_3[4]
                        uint32_t rax_11 = zx.d(rcx_10)
                        char arg_13 = rax_11.b
                        zmm1.d = float.s(rax_11)
                        zmm5_1.d = zmm5_1.d f/ zmm1.d
                        zmm6.d = zmm6.d f/ zmm1.d
                        zmm4_1 = zmm4_1 * 255f f/ zmm1.d * 255f
                        zmm5_1.d = zmm5_1.d f* 255f
                        zmm6.d = zmm6.d f* 255f
                        zmm5_1.d = zmm5_1.d f+ zmm5_1.d
                        zmm6.d = zmm6.d f+ zmm6.d
                        zmm5_1.d = zmm5_1.d f+ 0.5f
                        zmm6.d = zmm6.d f+ 0.5f
                        char arg_12 = (int.d(zmm4_1 + zmm4_1 + 0.5f) s>> 1).b
                        char arg_11 = (int.d(zmm5_1.d) s>> 1).b
                        *r14_1 = (int.d(zmm6.d) s>> 1).b.d
                        r14_1 = &r14_1[1]
                        k = k_1
                        k_1 -= 1
                    while (k != 1)
                    rsi_2 = &rsi_2[rax_7]
                    rdi_2 = &rdi_2[rax_7 * 4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rdx_2 = var_10c_1
                rcx_8 = var_f0_1
                r8_5 = var_f8_1
                i_1 = i_2
                r14 = arg1
                r10_2 = zx.q(var_108_1)
                r11_1 = zx.q(var_104_1)
            
            rsi = arg4
            r8_5 += sx.q(r10_2.d)
            rcx_8 += sx.q(r11_1.d)
            var_f8_1 = r8_5
            i = i_1
            i_1 -= 1
            var_f0_1 = rcx_8
            i_2 = i_1
        while (i != 1)
        rbp = var_100
        rcx_6 = var_110 + 1
        var_110 = rcx_6
        r15 = var_118 + ((r10_2 * 3).d << 1)
        var_118 = r15
        result = zx.q((r11_1 * 3).d)
        r12 = var_114 + (result << 1).d
        var_114 = r12
    while (rcx_6 s< rbp)

return result
