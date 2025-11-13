// 函数: sub_14073e2d0
// 地址: 0x14073e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i = 0
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
int32_t* r14 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rbp_1 = (rax_5 u>> 0xf).b
int32_t rcx_3 = rax_5 & 0x7fff
int32_t* rdi_1

if ((not.b(rbp_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * rcx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r9
    int32_t r8_2 = 0
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_2 = 0
        
        do
            rcx_3 -= rax_7
            rdx_2 += 1
            rax_7 = r9[rdx_2]
            r8_2 += 1
        while (rcx_3 s>= rax_7)
    
    rdi_1 = sx.q(rcx_3) + *(r11 + (sx.q(r8_2) << 3))

int32_t rdx_4 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_78 = rdx_4
int32_t var_70 = 0
int32_t rax_10
rax_10.b = rdx_4 != 0x7fff
void* result_1

if (rdx_4 == 0x7fff)
    result_1 = &var_70
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)

int32_t var_c
int32_t var_c_1 = var_c & 0xfffffff8
int32_t var_48 = 0xffffffff
int128_t var_58 = zx.o(0)
int128_t var_28
__builtin_memset(&var_28, 0, 0x18)
int32_t var_44
__builtin_memset(&var_44, 0, 0x14)
int32_t var_10 = 0xffffffff
void* result = sub_14077b510(&var_58, r14)

if (*(arg2 + 0x40) s> 0)
    void* result_2 = result_1
    
    do
        void* var_40
        int64_t var_38
        
        if (var_38 == 0 || *(var_40 + 0xec) s<= *rdi_1)
            result.b = 0
        else
            result.b = 1
        
        char temp0_1 = result.b
        result.b = neg.b(result.b)
        rdi_1 = &rdi_1[zx.q(rbp_1)]
        *result_2 = sbb.d(result.d, result.d, temp0_1 != 0)
        i += 1
        result = result_1
        result_2 = result + (sx.q(rax_10) << 2)
        result_1 = result_2
    while (i s< *(arg2 + 0x40))

return result
