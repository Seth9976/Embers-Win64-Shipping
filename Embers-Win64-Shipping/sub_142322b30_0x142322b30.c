// 函数: sub_142322b30
// 地址: 0x142322b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
int32_t var_28
sub_14093d370(arg1, &var_28)
void* var_20
*(var_20 + 0x10) = 0
*(var_20 + 0x18) = 0

if (var_20 != rdi)
    sub_14059a8e0(var_20, *(rdi + 0x18))
    int32_t rax_1 = *(rdi + 0x18)
    *(var_20 + 0x18) = rax_1
    
    if (rax_1 != 0)
        void* rcx_1 = *(rdi + 0x10)
        void* rdx_2 = *(var_20 + 0x10)
        
        if (rcx_1 != 0)
            rdi = rcx_1
        
        void* rcx_2 = var_20
        
        if (rdx_2 != 0)
            rcx_2 = rdx_2
        
        memcpy(rcx_2, rdi, (zx.q(rax_1 + 0x1f) u>> 5 << 2).d)

void* r10 = var_20
*(var_20 + 0x20) = *arg3
uint64_t rdx_4 = 0
*(var_20 + 0x28) = 0xffffffff
void* rax_3 = *(var_20 + 0x10)
uint32_t r9_2 = (*(var_20 + 0x18) + 0x1f) u>> 5
uint32_t r8_3 = r9_2

if (rax_3 != 0)
    r10 = rax_3

if (r9_2 != 0)
    if (r9_2 u>= 8)
        uint128_t zmm1 = zx.o(0)
        uint128_t zmm2 = zx.o(0)
        uint128_t zmm0_1
        
        do
            zmm0_1 = *(r10 + (rdx_4 << 2))
            uint64_t rax_4 = zx.q((rdx_4 + 4).d)
            rdx_4 = zx.q(rdx_4.d + 8)
            zmm1 ^= zmm0_1
            zmm0_1 = *(r10 + (rax_4 << 2)) ^ zmm2
            zmm2 = zmm0_1
        while (rdx_4.d u< (r8_3 & 0xfffffff8))
        
        zmm1 ^= zmm0_1
        zmm1 ^= _mm_bsrli_si128(zmm1, 8)
        r8_3 = (zmm1 ^ _mm_bsrli_si128(zmm1, 4)).d ^ r9_2
    
    if (rdx_4.d u< r9_2)
        void* rcx_3 = r10 + (zx.q(rdx_4.d) << 2)
        uint64_t i_1 = zx.q(r9_2 - rdx_4.d)
        uint64_t i
        
        do
            r8_3 ^= *rcx_3
            rcx_3 += 4
            i = i_1
            i_1 -= 1
        while (i != 1)

int32_t arg_8
sub_142334800(arg1, &arg_8, r8_3, var_20, var_28, nullptr)
return *arg1 + 0x20 + sx.q(arg_8) * 0x30
