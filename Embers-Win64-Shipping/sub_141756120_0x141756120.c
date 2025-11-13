// 函数: sub_141756120
// 地址: 0x141756120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r14 = sx.q(arg2)
int64_t rdx = *(arg1 + 0x140)
int64_t r9 = r14 * 3
*(rdx + (r9 << 3)) = *arg3
*(rdx + (r9 << 3) + 8) = arg3[1].d
*(rdx + (r9 << 3) + 0xc) = *(arg3 + 0xc)
*(rdx + (r9 << 3) + 0x14) = *(arg3 + 0x14)
int64_t rax_4 = *(arg1 + 0xf8)
void* i_2 = rax_4 + (r9 << 3)
void* i_1 = *(rax_4 + (r9 << 3) + 8)
void* i = i_2

if (i_1 != 0)
    i = i_1

int64_t result = sx.q(*(i_2 + 0x10))

for (void* rsi = i + (result << 3); i != rsi; i += 8)
    void* rdi_1 = *i
    int64_t* r8 = *(rdi_1 + 0x28)
    char r9_1 = *(r8 + 0xc)
    
    if (r9_1 != 0)
        int64_t rcx = *(arg1 + 0x28)
        int64_t rdx_1 = r14 * 3
        result = (r14 << 4) + *(arg1 + 0x68)
        uint128_t var_58 = *result
        uint128_t zmm0 = *(rcx + (rdx_1 << 2) + 4)
        float temp0_1[0x4] = _mm_unpacklo_ps(*(rcx + (rdx_1 << 2)), *(rcx + (rdx_1 << 2) + 8))
        zmm0 = _mm_unpacklo_ps(zmm0, zx.o(0)[0].q)
        float zmm2[0x4] = data_14399f66c
        float var_48_1[0x4] = _mm_unpacklo_ps(temp0_1, zmm0.q)
        float var_38_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
            _mm_unpacklo_ps(zmm2, 0)[0].q)
        
        if (r8 != 0 && r9_1 != 0)
            void var_78
            int32_t* rax_8 = (*(*r8 + 0x28))(r8, &var_78)
            int64_t var_98
            int64_t var_88
            sub_14003bce0(&var_58, rax_8, &rax_8[3], &var_98, &var_88)
            *(rdi_1 + 0x30) = var_98
            zmm0 = zx.o(var_88)
            int32_t var_90
            *(rdi_1 + 0x38) = var_90
            int32_t result_1
            result = zx.q(result_1)
            *(rdi_1 + 0x3c) = zmm0.q
            *(rdi_1 + 0x44) = result.d

__security_check_cookie(rax_1 ^ &var_c8)
return result
