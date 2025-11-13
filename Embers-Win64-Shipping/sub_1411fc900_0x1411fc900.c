// 函数: sub_1411fc900
// 地址: 0x1411fc900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
uint64_t rsi = 0
int32_t rax = arg1[1].d
int128_t zmm8 = arg3
int64_t* rbx = arg1
int64_t var_c0 = 0
int32_t rdx_1 = rax * data_1439b623c
int64_t var_b8 = 0
uint128_t zmm6

if (rdx_1 != 0)
    zmm6 = sub_1411ecad0(&var_c0, rdx_1)
    rax = rbx[1].d
    rsi = zx.q(var_b8.d)
    rdi = var_c0

int32_t i = 0
int32_t i_1 = 0

if (rax s> 0)
    int128_t* r15_1 = nullptr
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int128_t zmm9 = arg2:4.d
    int128_t zmm10 = arg2.d
    
    do
        int64_t r12_1 = *rbx
        int32_t r13_1 = 0
        int32_t rcx_1 = *(r15_1 + r12_1 + 0x78)
        
        if (rcx_1 s> 0)
            int32_t rax_1
            
            do
                int32_t r14_1 = 0
                rax_1 = rcx_1
                
                if (rcx_1 s> 0)
                    zmm7 = _mm_cvtepi32_ps(zx.o(r13_1))
                    int64_t var_a0_1 = 0
                    int32_t var_a4_1 = zmm7.d
                    
                    do
                        int32_t rbx_1 = (rsi + 1).d
                        zmm6 = _mm_cvtepi32_ps(zx.o(r14_1))
                        var_b8.d = rbx_1
                        int32_t var_a8_1 = zmm6.d
                        
                        if (rbx_1 s> var_b8:4.d)
                            zmm6 = sub_1411ec960(&var_c0, rsi.d)
                            rbx_1 = var_b8.d
                            rdi = var_c0
                        
                        int32_t rsi_1 = rbx_1 + 1
                        var_b8.d = rsi_1
                        *(rdi + sx.q(rsi.d) * 0x10) = var_a8_1.o
                        
                        if (rsi_1 s> var_b8:4.d)
                            zmm6 = sub_1411ec960(&var_c0, rbx_1)
                            rsi_1 = var_b8.d
                            rdi = var_c0
                        
                        int32_t rbx_2 = rsi_1 + 1
                        var_b8.d = rbx_2
                        *(rdi + sx.q(rbx_1) * 0x10) = *(r15_1 + r12_1 + 0x80)
                        
                        if (rbx_2 s> var_b8:4.d)
                            zmm6 = sub_1411ec960(&var_c0, rsi_1)
                            rbx_2 = var_b8.d
                            rdi = var_c0
                        
                        rsi = zx.q(rbx_2 + 1)
                        var_b8.d = rsi.d
                        *(rdi + sx.q(rsi_1) * 0x10) = *(r15_1 + r12_1)
                        arg3 = *(r15_1 + r12_1 + 0x80)
                        float zmm1 = arg3.d
                        int128_t zmm3 = *(r15_1 + r12_1 + 0x84)
                        int128_t zmm0 = zmm3
                        arg3.d = arg3.d f* zmm6.d
                        zmm3.d = zmm3.d f* zmm7.d
                        arg3.d = arg3.d f* zmm8.d
                        zmm3.d = zmm3.d f* zmm8.d
                        arg3.d = arg3.d f+ *(r15_1 + r12_1 + 0x60)
                        zmm3.d = zmm3.d f+ *(r15_1 + r12_1 + 0x64)
                        zmm0.d = zmm0.d f* zmm9.d
                        arg3.d = arg3.d f* zmm10.d
                        zmm3.d = zmm3.d f* zmm9.d
                        zmm0.d = zmm0.d f* zmm8.d
                        int32_t var_90_1 = arg3.d
                        int32_t var_8c_1 = zmm3.d
                        int32_t var_94_1 = zmm0.d
                        
                        if (rsi.d s> var_b8:4.d)
                            sub_1411ec960(&var_c0, rbx_2)
                            rsi = zx.q(var_b8.d)
                            rdi = var_c0
                        
                        r14_1 += 1
                        *(rdi + sx.q(rbx_2) * 0x10) = (zmm1 f* zmm10.d f* zmm8.d).o
                        rax_1 = *(r15_1 + r12_1 + 0x78)
                    while (r14_1 s< rax_1)
                
                r13_1 += 1
                rcx_1 = rax_1
            while (r13_1 s< rax_1)
            i = i_1
            rbx = arg1
        
        i += 1
        r15_1 = &r15_1[0xa]
        i_1 = i
    while (i s< rbx[1].d)

if (rsi.d s> data_1439b6240)
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q((rsi * 5).d)
    data_1439b6240 = (temp9_1 + (temp8_1 & 3)) s>> 2
    sub_1411e8c70(&data_1439b6238)
    sub_141131d40(&data_1439b6238)

int64_t* rcx_6 = data_143f0f180
void* r8 = data_1439b6248
memcpy((*(*rcx_6 + 0x130))(rcx_6, &data_143f02b98, r8, 0, *(r8 + 0x18), 1, arg2), rdi, rsi.d << 4)
int64_t* rcx_8 = data_143f0f180
int64_t r9 = *rcx_8
(*(r9 + 0x138))(rcx_8, &data_143f02b98, data_1439b6248, r9)
data_1439b623c
return zx.q(divs.dp.d(sx.q(rsi.d), data_1439b623c))
