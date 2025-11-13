// 函数: sub_1417b0640
// 地址: 0x1417b0640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d
arg2[1].d = 0

if (rdx s> *(arg2 + 0xc))
    sub_14083ad30(arg2, rdx)

int64_t result = sx.q(arg1[1].d)
void* rdi = *arg1
int128_t zmm6
int128_t var_28 = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm9[0x4]
float var_58[0x4] = zmm9
void* rbp = rdi + result * 0xc
int128_t zmm10
int128_t var_68 = zmm10
int128_t zmm11
int128_t var_78 = zmm11
float zmm1
float zmm3
float zmm4[0x4]
float zmm5[0x4]

if (arg4 == 0)
    while (rdi != rbp)
        int64_t r8_1 = *arg3
        int64_t rdx_4 = sx.q(*rdi) * 3
        int64_t rcx_7 = sx.q(*(rdi + 4)) * 3
        int64_t rax_5 = sx.q(*(rdi + 8))
        zmm6 = *(r8_1 + (rcx_7 << 2))
        zmm5 = *(r8_1 + (rcx_7 << 2) + 4)
        zmm3 = *(r8_1 + (rcx_7 << 2) + 8)
        zmm5[0] = zmm5[0] f- *(r8_1 + (rdx_4 << 2) + 4)
        zmm3 = zmm3 f- *(r8_1 + (rdx_4 << 2) + 8)
        zmm6.d = zmm6.d f- *(r8_1 + (rdx_4 << 2))
        int64_t rcx_8 = rax_5 * 3
        zmm7 = *(r8_1 + (rcx_8 << 2) + 8)
        zmm7[0] = zmm7[0] f- *(r8_1 + (rdx_4 << 2) + 8)
        zmm8 = *(r8_1 + (rcx_8 << 2))
        zmm8[0] = zmm8[0] f- *(r8_1 + (rdx_4 << 2))
        zmm4 = *(r8_1 + (rcx_8 << 2) + 4)
        zmm4[0] = zmm4[0] f- *(r8_1 + (rdx_4 << 2) + 4)
        zmm7[0] = zmm7[0] f* zmm6.d
        zmm7[0] = zmm7[0] * zmm5[0]
        zmm9 = zmm4
        zmm4[0] = zmm4[0] f* zmm6.d
        zmm9[0] = zmm9[0] * zmm3
        zmm9[0] = zmm9[0] - zmm7[0]
        zmm8[0] = zmm8[0] * zmm3
        zmm8[0] = zmm8[0] * zmm5[0]
        zmm7[0] = zmm7[0] - zmm8[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm8[0] = zmm8[0] - zmm4[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm1 = zmm8[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm9[0]
        zmm7[0] = zmm7[0] + zmm1
        
        if (zmm7[0] == 1f)
            goto label_1417b0a1e
        
        float var_98_2
        float result_2
        
        if (zmm7[0] >= 9.99999994e-09f)
            zmm4 = zx.o(0)
            zmm4[0] = 0x3f000000
            zmm3 = zmm7[0]
            float temp0_2[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3)
            zmm3 = zmm3 * 0.5f
            temp0_2[0] = temp0_2[0] * temp0_2[0]
            zmm4[0] = zmm4[0] - zmm3 * temp0_2[0]
            temp0_2[0] = temp0_2[0] * zmm4[0]
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            zmm4[0] = 0.5f - zmm3 * temp0_2[0] * temp0_2[0]
            temp0_2[0] = temp0_2[0] * zmm4[0]
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            zmm9[0] = zmm9[0] * temp0_2[0]
            zmm7[0] = zmm7[0] * temp0_2[0]
            zmm8[0] = zmm8[0] * temp0_2[0]
        label_1417b0a1e:
            result_2 = zmm8[0]
            float var_94_3 = zmm7[0]
            var_98_2 = zmm9[0]
        else
            var_98_2 = data_143dbb1f8[0]
            result_2 = data_143dbb200[0]
            float var_94_2 = data_143dbb1fc
        
        int64_t rsi_2 = sx.q(arg2[1].d)
        int32_t rax_6 = (rsi_2 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_14083a7e0(arg2)
        
        int64_t rcx_10 = *arg2
        int64_t rdx_6 = rsi_2 * 3
        rdi += 0xc
        result = zx.q(result_2)
        *(rcx_10 + (rdx_6 << 2)) = var_98_2.q
        *(rcx_10 + (rdx_6 << 2) + 8) = result.d
else
    while (rdi != rbp)
        int64_t r8 = *arg3
        int64_t rdx_1 = sx.q(*rdi) * 3
        int64_t rcx_2 = sx.q(*(rdi + 4)) * 3
        result = sx.q(*(rdi + 8))
        zmm6 = *(r8 + (rcx_2 << 2))
        zmm5 = *(r8 + (rcx_2 << 2) + 4)
        zmm3 = *(r8 + (rcx_2 << 2) + 8)
        zmm5[0] = zmm5[0] f- *(r8 + (rdx_1 << 2) + 4)
        zmm3 = zmm3 f- *(r8 + (rdx_1 << 2) + 8)
        zmm6.d = zmm6.d f- *(r8 + (rdx_1 << 2))
        int64_t rcx_3 = result * 3
        zmm7 = *(r8 + (rcx_3 << 2) + 8)
        zmm7[0] = zmm7[0] f- *(r8 + (rdx_1 << 2) + 8)
        zmm8 = *(r8 + (rcx_3 << 2))
        zmm8[0] = zmm8[0] f- *(r8 + (rdx_1 << 2))
        zmm4 = *(r8 + (rcx_3 << 2) + 4)
        zmm4[0] = zmm4[0] f- *(r8 + (rdx_1 << 2) + 4)
        zmm7[0] = zmm7[0] f* zmm6.d
        zmm7[0] = zmm7[0] * zmm5[0]
        zmm9 = zmm4
        zmm4[0] = zmm4[0] f* zmm6.d
        zmm9[0] = zmm9[0] * zmm3
        zmm9[0] = zmm9[0] - zmm7[0]
        zmm8[0] = zmm8[0] * zmm3
        zmm8[0] = zmm8[0] * zmm5[0]
        zmm7[0] = zmm7[0] - zmm8[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm8[0] = zmm8[0] - zmm4[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm1 = zmm8[0] * zmm8[0]
        zmm7[0] = zmm7[0] + zmm9[0]
        zmm7[0] = zmm7[0] + zmm1
        
        if (zmm7[0] < 9.99999994e-09f)
            arg2[1].d = 0
            
            if (*(arg2 + 0xc) != 0)
                return sub_14083ad30(arg2, 0)
            
            break
        
        int64_t rsi_1 = sx.q(arg2[1].d)
        zmm4 = zx.o(0)
        zmm4[0] = 0x3f000000
        zmm3 = zmm7[0]
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3)
        int32_t rax_2 = (rsi_1 + 1).d
        arg2[1].d = rax_2
        zmm3 = zmm3 * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm4[0] = zmm4[0] - zmm3 * temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm4[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm4[0] = 0.5f - zmm3 * temp0_1[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm4[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm9[0] = zmm9[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        float var_98_1 = zmm9[0]
        float var_94_1 = zmm7[0]
        float result_1 = zmm8[0]
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_14083a7e0(arg2)
        
        int64_t rcx_5 = *arg2
        int64_t rdx_3 = rsi_1 * 3
        rdi += 0xc
        result = zx.q(result_1)
        *(rcx_5 + (rdx_3 << 2)) = var_98_1.q
        *(rcx_5 + (rdx_3 << 2) + 8) = result.d
return result
