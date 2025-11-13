// 函数: sub_141032660
// 地址: 0x141032660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0
zmm0.q = _mm_cvtepi32_pd(zx.q(*(arg1 + 0x28))).q f* 1.1111111111111112
int128_t zmm1 = _mm_cvtpd_ps(zmm0)
zmm1.d = zmm1.d f+ zmm1.d
zmm0.d = -0.5f f- zmm1.d
int32_t rax_2 = neg.d(int.d(zmm0.d) s>> 1)

if (arg2 u>= rax_2)
    rax_2 = arg2

if (rax_2 == 0)
    return sub_14101edf0(arg1) __tailcall

uint64_t rflags
int32_t temp0_3
temp0_3, rflags = _bit_scan_reverse(rax_2)
int32_t rcx_1

if (rax_2 == 0)
    rcx_1 = 0x20
else
    rcx_1 = 0x1f - temp0_3

uint64_t rflags_1
char temp0_4
temp0_4, rflags_1 = _bit_scan_reverse(rax_2 - 1)
char r8_2

if (rax_2 == 1)
    r8_2 = 0x20
else
    r8_2 = 0x1f - temp0_4

int32_t r12 = arg1[2].d
int32_t r14 = 0
int32_t r13 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
int32_t result = r12 + 1

if (r12 == 0)
    result = 0

if (r13 != result)
    uint64_t rflags_2
    int32_t temp0_5
    temp0_5, rflags_2 = _bit_scan_reverse(r13)
    int32_t rdx_1
    
    if (r13 == result)
        rdx_1 = 0x20
    else
        rdx_1 = 0x1f - temp0_5
    
    zmm0 = *arg1
    int32_t rsi_1 = sx.d(*(arg1 + 0x24))
    int32_t r15_1 = 0x20 - rdx_1
    int64_t var_50_1 = 0
    
    if (r15_1 u<= 4)
        r15_1 = 4
    
    int128_t var_38_1 = arg1[1]
    int32_t rax_7 = r15_1 + r13
    uint64_t rdi_1 = zx.q(rax_7)
    int64_t rax_8 = sub_140a82f30(zx.q(rax_7), 0)
    int64_t var_60_1 = rax_8
    int64_t rax_9 = sub_140a82f30(rdi_1 << 3, 0)
    memset(rax_8, 0xff, zx.q(rdi_1.d))
    *(arg1 + 0x24) = r15_1.b
    int32_t r15_2 = r12 + rsi_1
    int64_t r12_1 = var_38_1.q
    result = r13 - 1
    int64_t rsi_2 = zmm0:8.q
    arg1[2].d = result
    *(arg1 + 0x28) = 0
    *arg1 = rax_7.o
    arg1[1] = rax_9.o
    
    if (r15_2 != 0)
        do
            uint64_t rdi_2 = zx.q(r14)
            
            if (*(rdi_2 + rsi_2) s>= 0)
                int64_t rdi_3 = *(r12_1 + (rdi_2 << 3))
                result = sub_141024bc0((rdi_3 u>> 4).d, 0)
                char i = 0
                int64_t r8_4 = *(arg1 + 8)
                uint64_t r9_3 = zx.q(arg1[2].d) & zx.q(result)
                
                if (r8_4 != 0)
                    uint64_t rcx_11 = zx.q(r9_3.d)
                    
                    if (*(r9_3 + r8_4) s>= 0)
                        do
                            if (rdi_3 == *(arg1[1].q + (rcx_11 << 3)))
                                goto label_14103286c
                            
                            r9_3 = zx.q(r9_3.d + 1)
                            i += 1
                            rcx_11 = zx.q(r9_3.d)
                        while (*(r9_3 + r8_4) s>= i)
                
                result = sub_141011ff0(arg1, i, arg1, r9_3.d, rdi_3, result, arg3)
            
        label_14103286c:
            r14 += 1
        while (r14 != r15_2)
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
        sub_140a74f90(r12_1)
        return sub_140a74f90(var_38_1:8.q)

return result
