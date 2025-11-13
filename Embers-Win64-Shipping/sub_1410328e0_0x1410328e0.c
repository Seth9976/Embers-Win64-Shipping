// 函数: sub_1410328e0
// 地址: 0x1410328e0
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
char* r14 = nullptr
int32_t r13 = 1 << ((not.d(rcx_1 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
uint64_t result = zx.q(r12 + 1)

if (r12 == 0)
    result = 0

if (r13 != result.d)
    uint64_t rflags_2
    int32_t temp0_5
    temp0_5, rflags_2 = _bit_scan_reverse(r13)
    int32_t rdx_1
    
    if (r13 == result.d)
        rdx_1 = 0x20
    else
        rdx_1 = 0x1f - temp0_5
    
    zmm0 = *arg1
    int32_t rsi_1 = sx.d(*(arg1 + 0x24))
    int32_t r15_1 = 0x20 - rdx_1
    
    if (r15_1 u<= 4)
        r15_1 = 4
    
    int128_t var_38_1 = arg1[1]
    int32_t rax_7 = r15_1 + r13
    uint64_t rdi_1 = zx.q(rax_7)
    int64_t rax_8 = sub_140a82f30(zx.q(rax_7), 0)
    int64_t var_60_1 = rax_8
    int64_t rax_9 = sub_140a82f30(rdi_1 << 3, 0)
    int64_t var_50_1 = sub_140a82f30(rdi_1 << 2, 0)
    memset(rax_8, 0xff, zx.q(rdi_1.d))
    int64_t rdi_2 = var_38_1:8.q
    result = zx.q(r13 - 1)
    int64_t rbx_2 = zmm0:8.q
    *(arg1 + 0x24) = r15_1.b
    int32_t i = r12 + rsi_1
    int64_t rsi_2 = var_38_1.q
    arg1[2].d = result.d
    *(arg1 + 0x28) = 0
    *arg1 = rax_7.o
    arg1[1] = rax_9.o
    
    if (i != 0)
        do
            if (r14[rbx_2] s>= 0)
                int64_t rcx_10 = *(rsi_2 + (r14 << 3))
                char j = 0
                int64_t r8_4 = *(arg1 + 8)
                uint64_t r9_3 = zx.q(arg1[2].d) & zx.q(rcx_10.d)
                
                if (r8_4 != 0)
                    result = zx.q(r9_3.d)
                    
                    if (*(r9_3 + r8_4) s>= 0)
                        do
                            if (rcx_10 == *(arg1[1].q + (result << 3)))
                                goto label_141032ae1
                            
                            r9_3 = zx.q(r9_3.d + 1)
                            j += 1
                            result = zx.q(r9_3.d)
                        while (*(r9_3 + r8_4) s>= j)
                
                result = sub_141012260(arg1, j, arg1, r9_3, rcx_10, rcx_10.d, *(rdi_2 + (r14 << 2)))
            
        label_141032ae1:
            r14 = zx.q(r14.d + 1)
        while (r14.d != i)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
        sub_140a74f90(rsi_2)
        return sub_140a74f90(rdi_2)

return result
