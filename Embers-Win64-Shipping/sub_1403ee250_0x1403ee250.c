// 函数: sub_1403ee250
// 地址: 0x1403ee250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rax_2 = sx.q(arg6)
int64_t r11 = sx.q(arg4)
uint64_t i_2 = zx.q(arg5)
int32_t var_f8 = r11.d
int32_t rdx
void* const rbx
int32_t r8
void* r14

if (i_2.d != 4)
    rdx = 0xc
    r14 = &data_1436fdd10
    rbx = &data_1436fdcf8
    r8 = 0xc
else
    rbx = &data_1436fdc50
    r8 = (i_2 + 0x1e).d
    rdx = sx.d(*(rax_2 + &data_1436fdc4c))
    r14 = &data_1436fdcd8 + (rax_2 << 3)

uint64_t result = zx.q((r11 << 2).d)
int64_t rsi = sx.q(rdx)
int64_t r13 = arg2 + (sx.q(result.d) << 2)

if (i_2.d s> 0)
    int64_t r15_1 = 0
    void* r12_1 = arg1 + 8
    uint64_t i_1 = i_2
    int64_t var_d8 = r11 << 2
    uint64_t i
    
    do
        void* rdi_2 = r13 - (sx.q(sx.d(*r14) + arg3) << 2)
        float zmm0_1[0x2] = sub_1403ed620(rdi_2, r11.d)
        int32_t r10_1 = sx.d(*r14)
        int64_t rcx_5 = 1
        double zmm3_1 = zmm0_1 - -0x3f50624dd2f1a9fc
        double zmm1_1
        zmm1_1.d = fconvert.s(zmm3_1)
        result = zx.q(sx.d(*(r14 + 1)) - r10_1 + 1)
        void* r11_1 = 1
        int64_t rdx_2 = sx.q(result.d)
        int32_t var_c8 = zmm1_1.d
        
        if (rdx_2 s> 1)
            result = rdx_2 - 1
            
            if (result s>= 4)
                void* r8_1 = rdi_2 - 0xc
                void* r9 = rdi_2 + ((sx.q(var_f8) - 3) << 2)
                result = ((rdx_2 - 5) u>> 2) + 1
                r11_1 = (result << 2) + 1
                uint64_t j
                
                do
                    zmm0_1 = *(r9 + 8)
                    zmm1_1 = *(r8_1 + 8)
                    float zmm2_1[0x2] = *(r8_1 + 4)
                    rcx_5 += 4
                    r8_1 -= 0x10
                    r9 -= 0x10
                    zmm1_1 = _mm_cvtps_pd(zmm1_1)
                    zmm0_1 = _mm_cvtps_pd(zmm0_1)
                    zmm2_1 = _mm_cvtps_pd(zmm2_1)
                    zmm3_1 = zmm3_1 f- zmm0_1 f* zmm0_1 + zmm1_1 * zmm1_1
                    zmm1_1 = *(r9 + 0x14)
                    zmm0_1 = (zx.o(0)).q
                    zmm0_1[0] = fconvert.s(zmm3_1)
                    zmm1_1 = _mm_cvtps_pd(zmm1_1)
                    zmm3_1 = zmm3_1 - zmm1_1 * zmm1_1
                    zmm1_1 = *(r9 + 0x10)
                    *(&var_d8 + (rcx_5 << 2)) = zmm0_1[0]
                    zmm0_1 = (zx.o(0)).q
                    zmm3_1 = zmm3_1 f+ zmm2_1 f* zmm2_1
                    zmm2_1 = *(r8_1 + 0x10)
                    zmm1_1 = _mm_cvtps_pd(zmm1_1)
                    zmm0_1[0] = fconvert.s(zmm3_1)
                    zmm3_1 = zmm3_1 - zmm1_1 * zmm1_1
                    zmm1_1 = *(r9 + 0xc)
                    *(&var_d8:4 + (rcx_5 << 2)) = zmm0_1[0]
                    zmm2_1 = _mm_cvtps_pd(zmm2_1)
                    zmm1_1 = _mm_cvtps_pd(zmm1_1)
                    zmm0_1 = (zx.o(0)).q
                    zmm3_1 = zmm3_1 f+ zmm2_1 f* zmm2_1
                    zmm2_1 = *(r8_1 + 0xc)
                    zmm0_1[0] = fconvert.s(zmm3_1)
                    zmm2_1 = _mm_cvtps_pd(zmm2_1)
                    void var_d0
                    *(&var_d0 + (rcx_5 << 2)) = zmm0_1[0]
                    zmm3_1 = zmm3_1 - zmm1_1 * zmm1_1 f+ zmm2_1 f* zmm2_1
                    zmm0_1 = (zx.o(0)).q
                    zmm0_1[0] = fconvert.s(zmm3_1)
                    void var_cc
                    *(&var_cc + (rcx_5 << 2)) = zmm0_1[0]
                    j = result
                    result -= 1
                while (j != 1)
            
            if (r11_1 s< rdx_2)
                void* r8_2 = &(&var_c8)[rcx_5]
                double* rcx_7 = rdi_2 - (r11_1 << 2)
                result = sx.q(var_f8) - r11_1
                void* j_3 = rdx_2 - r11_1
                void* r9_1 = rdi_2 + (result << 2)
                void* j_1
                
                do
                    zmm0_1 = *r9_1
                    zmm1_1 = *rcx_7
                    r8_2 += 4
                    r9_1 -= 4
                    rcx_7 -= 4
                    zmm0_1 = _mm_cvtps_pd(zmm0_1)
                    zmm1_1 = _mm_cvtps_pd(zmm1_1)
                    zmm3_1 = zmm3_1 f- zmm0_1 f* zmm0_1 + zmm1_1 * zmm1_1
                    zmm0_1 = (zx.o(0)).q
                    zmm0_1[0] = fconvert.s(zmm3_1)
                    *(r8_2 - 4) = zmm0_1[0]
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
        
        int64_t j_2 = 0
        void var_c4
        void var_c0
        void var_bc
        int32_t var_b8[0x14]
        
        if (rsi s>= 4)
            void* rdx_3 = r12_1
            
            do
                int32_t rax_14 = sx.d(*(rbx + j_2))
                j_2 += 4
                rdx_3 += 0x50
                int64_t rcx_8 = sx.q(rax_14 - r10_1)
                *(rdx_3 - 0x58) = (&var_c8)[rcx_8]
                *(rdx_3 - 0x54) = *(&var_c4 + (rcx_8 << 2))
                *(rdx_3 - 0x50) = *(&var_c0 + (rcx_8 << 2))
                *(rdx_3 - 0x4c) = *(&var_bc + (rcx_8 << 2))
                *(rdx_3 - 0x48) = var_b8[rcx_8]
                int64_t rcx_9 = sx.q(sx.d(*(rbx + j_2 - 3)) - r10_1)
                *(rdx_3 - 0x44) = (&var_c8)[rcx_9]
                *(rdx_3 - 0x40) = *(&var_c4 + (rcx_9 << 2))
                *(rdx_3 - 0x3c) = *(&var_c0 + (rcx_9 << 2))
                *(rdx_3 - 0x38) = *(&var_bc + (rcx_9 << 2))
                *(rdx_3 - 0x34) = var_b8[rcx_9]
                int64_t rcx_10 = sx.q(sx.d(*(rbx + j_2 - 2)) - r10_1)
                *(rdx_3 - 0x30) = (&var_c8)[rcx_10]
                *(rdx_3 - 0x2c) = *(&var_c4 + (rcx_10 << 2))
                *(rdx_3 - 0x28) = *(&var_c0 + (rcx_10 << 2))
                *(rdx_3 - 0x24) = *(&var_bc + (rcx_10 << 2))
                *(rdx_3 - 0x20) = var_b8[rcx_10]
                int64_t rcx_11 = sx.q(sx.d(*(rbx + j_2 - 1)) - r10_1)
                *(rdx_3 - 0x1c) = (&var_c8)[rcx_11]
                *(rdx_3 - 0x18) = *(&var_c4 + (rcx_11 << 2))
                *(rdx_3 - 0x14) = *(&var_c0 + (rcx_11 << 2))
                *(rdx_3 - 0x10) = *(&var_bc + (rcx_11 << 2))
                result = zx.q(var_b8[rcx_11])
                *(rdx_3 - 0xc) = result.d
            while (j_2 s< rsi - 3)
        
        if (j_2 s< rsi)
            void* rdx_6 = arg1 + (((r15_1 + j_2) * 5 + 2) << 2)
            
            do
                int32_t rax_43 = sx.d(*(rbx + j_2))
                j_2 += 1
                rdx_6 += 0x14
                int64_t rcx_12 = sx.q(rax_43 - r10_1)
                *(rdx_6 - 0x1c) = (&var_c8)[rcx_12]
                *(rdx_6 - 0x18) = *(&var_c4 + (rcx_12 << 2))
                *(rdx_6 - 0x14) = *(&var_c0 + (rcx_12 << 2))
                *(rdx_6 - 0x10) = *(&var_bc + (rcx_12 << 2))
                result = zx.q(var_b8[rcx_12])
                *(rdx_6 - 0xc) = result.d
            while (j_2 s< rsi)
        
        r13 += var_d8
        rbx += sx.q(r8)
        r11 = zx.q(var_f8)
        r14 += 2
        r12_1 += 0x2a8
        r15_1 += 0x22
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
