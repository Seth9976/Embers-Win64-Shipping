// 函数: sub_1409a4790
// 地址: 0x1409a4790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t i = 0
void* rbp = *(*(*arg1 + 0x40) + (sx.q(arg2) << 3) - 8)
void* rsi = *(rbp + 8)
int32_t rdi = *(rsi + 0x10)
void var_58
void* var_68 = &var_58
int64_t rax_3 = 0
int32_t var_60 = rdi
int32_t var_5c = 8
int64_t var_38 = 0

if (rdi u> 8)
    rax_3 = j_sub_140a82f30(zx.q(rdi) << 2)
    var_38 = rax_3
    int64_t var_68_1 = rax_3
    int32_t var_5c_1 = rdi

if (*(rsi + 4) s> 0)
    int32_t rdi_1 = 0
    void* r11_1 = nullptr
    float zmm4[0x4] = zx.o(0)
    
    do
        int64_t rcx_3 = sx.q(*(r11_1 + *(rbp + 0xd8)))
        
        if (rcx_3.d != 0xffffffff)
            int64_t r8 = *(rsi + 0x78)
            int64_t r10_1 = rcx_3 * 3
            int64_t rcx_4 = *arg4
            int64_t r9 = sx.q(rdi_1)
            int32_t var_70_1 = 0
            *(rcx_4 + (r10_1 << 2)) = (_mm_unpacklo_ps(zmm4, zmm4[0].q)).q
            *(rcx_4 + (r10_1 << 2) + 8) = 0
            int64_t rdx_1 = *arg4
            int64_t rcx_5 = sx.q(*(r8 + (r9 << 2))) * 3
            int64_t rax_6 = *arg3
            float zmm1 = *(rax_6 + (rcx_5 << 2) + 4)
            float zmm2 = *(rax_6 + (rcx_5 << 2) + 8)
            float zmm0[0x4] = *(rax_6 + (rcx_5 << 2))
            zmm0[0] = zmm0[0] * 0.5f
            zmm0[0] = zmm0[0] f+ *(rdx_1 + (r10_1 << 2))
            zmm1 = zmm1 * 0.5f f+ *(rdx_1 + (r10_1 << 2) + 4)
            zmm2 = zmm2 * 0.5f f+ *(rdx_1 + (r10_1 << 2) + 8)
            *(rdx_1 + (r10_1 << 2)) = zmm0[0]
            *(rdx_1 + (r10_1 << 2) + 4) = zmm1
            *(rdx_1 + (r10_1 << 2) + 8) = zmm2
            int64_t rdx_2 = *arg4
            int64_t rcx_6 = sx.q(*(r8 + (r9 << 2) + 4)) * 3
            int64_t rax_8 = *arg3
            zmm1 = *(rax_8 + (rcx_6 << 2) + 4)
            zmm2 = *(rax_8 + (rcx_6 << 2) + 8)
            zmm0 = *(rax_8 + (rcx_6 << 2))
            zmm0[0] = zmm0[0] * 0.5f
            zmm0[0] = zmm0[0] f+ *(rdx_2 + (r10_1 << 2))
            zmm1 = zmm1 * 0.5f f+ *(rdx_2 + (r10_1 << 2) + 4)
            zmm2 = zmm2 * 0.5f f+ *(rdx_2 + (r10_1 << 2) + 8)
            *(rdx_2 + (r10_1 << 2)) = zmm0[0]
            *(rdx_2 + (r10_1 << 2) + 4) = zmm1
            *(rdx_2 + (r10_1 << 2) + 8) = zmm2
        
        i += 1
        rdi_1 += 2
        r11_1 += 4
    while (i s< *(rsi + 4))
    
    rax_3 = var_38

int64_t result = j_sub_140a74f90(rax_3)
__security_check_cookie(rax_1 ^ &var_98)
return result
