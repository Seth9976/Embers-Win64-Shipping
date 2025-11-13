// 函数: sub_1403f3300
// 地址: 0x1403f3300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rdi = (rbx - 1).d
int32_t arg_18 = rdi
void* r15_1 = (sx.q(rdi) << 2) + arg1
void* var_50 = r15_1
float zmm0[0x2] = sub_1403ed620(r15_1, rbp.d)
int32_t r12 = 1
void* r14 = 1
int64_t zmm1
zmm1.d = fconvert.s(zmm0)
double zmm3 = zmm0
*arg4 = zmm1.d

if (rbx.d s> 1 && rdi s>= 4)
    int64_t rdi_1 = rbx << 2
    void* r8 = &arg4[(rbx + 1) * 3]
    int64_t r9_1 = (rbx + 1) << 4
    void* r10_2 = &arg4[1 + rbx]
    uint64_t rax_5 = zx.q(((rbx - 5).d u>> 2) + 1)
    void* rcx_1 = r15_1 - 0xc
    r12 = ((rax_5 << 2) + 1).d
    r14 = (rax_5 << 2) + 1
    void* rdx_2 = r15_1 + ((rbp - 3) << 2)
    uint64_t i_4 = zx.q(rax_5.d)
    uint64_t i
    
    do
        zmm1 = *(rcx_1 + 8)
        zmm0 = *(rdx_2 + 8)
        rcx_1 -= 0x10
        rdx_2 -= 0x10
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm1.d = zmm1.d f* zmm1.d
        zmm1.d = zmm1.d f- zmm0[0]
        zmm3 = zmm3 f+ _mm_cvtps_pd(zmm1)
        zmm1.d = fconvert.s(zmm3)
        *r10_2 = zmm1.d
        float zmm2_1[0x2] = *(rcx_1 + 0x14)
        zmm0 = *(rdx_2 + 0x14)
        r10_2 += r9_1
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm2_1[0] = zmm2_1[0] - zmm0[0]
        zmm3 = zmm3 f+ _mm_cvtps_pd(zmm2_1)
        zmm1.d = fconvert.s(zmm3)
        *(r8 + -4 - rdi_1) = zmm1.d
        zmm2_1 = *(rcx_1 + 0x10)
        zmm0 = *(rdx_2 + 0x10)
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm2_1[0] = zmm2_1[0] - zmm0[0]
        zmm3 = zmm3 f+ _mm_cvtps_pd(zmm2_1)
        zmm1.d = fconvert.s(zmm3)
        *r8 = zmm1.d
        zmm0 = *(rdx_2 + 0xc)
        zmm2_1 = *(rcx_1 + 0xc)
        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm2_1[0] = zmm2_1[0] - zmm0[0]
        zmm3 = zmm3 f+ _mm_cvtps_pd(zmm2_1)
        zmm1.d = fconvert.s(zmm3)
        *(r8 + rdi_1 + 4) = zmm1.d
        r8 += r9_1
        i = i_4
        i_4 -= 1
    while (i != 1)

int64_t r11_1

if (rbx.d s<= 1 || r12 s>= rbx.d)
    r11_1 = zx.q(arg2)
else
    r11_1 = sx.q(arg2)
    int32_t* rdx_3 = &arg4[(rbx + 1) * r14]
    void* rcx_3 = r15_1 - (r14 << 2)
    uint64_t i_3 = zx.q(rbx.d - r12)
    void* r8_1 = r15_1 + ((r11_1 - r14) << 2)
    uint64_t i_1
    
    do
        zmm1 = *rcx_3
        zmm0 = *r8_1
        r8_1 -= 4
        rcx_3 -= 4
        zmm1.d = zmm1.d f* zmm1.d
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm1.d = zmm1.d f- zmm0[0]
        zmm3 = zmm3 f+ _mm_cvtps_pd(zmm1)
        zmm1.d = fconvert.s(zmm3)
        *rdx_3 = zmm1.d
        rdx_3 += (rbx << 2) + 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

int64_t r14_1 = 1
uint64_t result = zx.q((rbx - 2).d)
int64_t rdi_2 = rbx
int64_t var_98 = 1
void* r12_2 = (sx.q(result.d) << 2) + arg1
void* var_a0 = r12_2

if (1 s< rbx)
    void* r13_1 = &arg4[1]
    int64_t var_a8_1 = rdi_2 * 3
    int64_t rax_12 = rdi_2 << 2
    void* rbx_3 = r12_2 - r15_1 - 8
    void* var_90_1 = r13_1
    void* arg_20 = &arg4[rdi_2]
    
    do
        float zmm0_1[0x2] = sub_1403f1cf0(r15_1, r12_2, r11_1.d)
        int64_t r11_2 = sx.q(arg_18)
        int64_t zmm1_1
        zmm1_1.d = fconvert.s(zmm0_1)
        double zmm3_1 = zmm0_1
        int64_t i_2 = 1
        *arg_20 = zmm1_1.d
        *r13_1 = zmm1_1.d
        
        if (r11_2 s> 1)
            if (r11_2 - 1 s>= 4)
                int64_t r9_3 = var_a8_1
                int64_t r14_3 = rdi_2 << 2
                void* r10_4 = &arg4[rdi_2 * 3 + r14_1 + 3]
                int64_t r12_4 = (rdi_2 + 1) << 4
                void* rdx_5 = r15_1 - 8
                void* arg_8 = r13_1 + rax_12 + 4
                void* r8_3 = r15_1 + ((sx.q(arg2) - 2) << 2)
                
                do
                    zmm1_1 = *(rdx_5 + rbx_3 + 0xc)
                    zmm0_1 = *(r8_3 + rbx_3 + 0xc)
                    rdx_5 -= 0x10
                    r8_3 -= 0x10
                    zmm0_1[0] = zmm0_1[0] f* *(r8_3 + 0x14)
                    zmm1_1.d = zmm1_1.d f* *(rdx_5 + 0x14)
                    zmm1_1.d = zmm1_1.d f- zmm0_1[0]
                    zmm3_1 = zmm3_1 f+ _mm_cvtps_pd(zmm1_1)
                    zmm1_1.d = fconvert.s(zmm3_1)
                    arg4[i_2 - rdi_2 + r9_3] = zmm1_1.d
                    void* rax_28 = arg_8
                    arg_8 += r12_4
                    *rax_28 = zmm1_1.d
                    float zmm2_2[0x2] = *(rdx_5 + rbx_3 + 0x18)
                    zmm0_1 = *(r8_3 + rbx_3 + 0x18)
                    zmm2_2[0] = zmm2_2[0] f* *(rdx_5 + 0x10)
                    zmm0_1[0] = zmm0_1[0] f* *(r8_3 + 0x10)
                    zmm2_2[0] = zmm2_2[0] - zmm0_1[0]
                    zmm3_1 = zmm3_1 f+ _mm_cvtps_pd(zmm2_2)
                    zmm1_1.d = fconvert.s(zmm3_1)
                    arg4[i_2 + r9_3 + 1] = zmm1_1.d
                    *(r10_4 + -4 - r14_3) = zmm1_1.d
                    zmm2_2 = *(rdx_5 + rbx_3 + 0x14)
                    zmm2_2[0] = zmm2_2[0] f* *(rdx_5 + 0xc)
                    zmm0_1 = *(r8_3 + rbx_3 + 0x14)
                    zmm0_1[0] = zmm0_1[0] f* *(r8_3 + 0xc)
                    zmm2_2[0] = zmm2_2[0] - zmm0_1[0]
                    zmm3_1 = zmm3_1 f+ _mm_cvtps_pd(zmm2_2)
                    zmm1_1.d = fconvert.s(zmm3_1)
                    arg4[rdi_2 + i_2 + r9_3 + 2] = zmm1_1.d
                    *r10_4 = zmm1_1.d
                    zmm2_2 = *(rdx_5 + rbx_3 + 0x10)
                    int64_t rax_32 = i_2 + 2 * rdi_2
                    i_2 += 4
                    zmm2_2[0] = zmm2_2[0] f* *(rdx_5 + 8)
                    int64_t rax_33 = rax_32 + r9_3
                    r9_3 += r14_3
                    zmm0_1 = *(r8_3 + rbx_3 + 0x10)
                    zmm0_1[0] = zmm0_1[0] f* *(r8_3 + 8)
                    zmm2_2[0] = zmm2_2[0] - zmm0_1[0]
                    zmm3_1 = zmm3_1 f+ _mm_cvtps_pd(zmm2_2)
                    zmm1_1.d = fconvert.s(zmm3_1)
                    arg4[rax_33 + 3] = zmm1_1.d
                    *(r10_4 + rax_12 + 4) = zmm1_1.d
                    r10_4 += r12_4
                while (i_2 s< r11_2 - 3)
                
                rdi_2 = rbx
                r14_1 = var_98
                r15_1 = var_50
                r13_1 = var_90_1
                r12_2 = var_a0
            
            if (i_2 s< r11_2)
                void* rdx_7 = r15_1 - (i_2 << 2)
                int64_t r9_5 = (r14_1 + i_2) * rdi_2
                int32_t* r10_5 = &arg4[(rdi_2 + 1) * i_2 + r14_1]
                void* r8_4 = r15_1 + ((sx.q(arg2) - i_2) << 2)
                
                do
                    zmm1_1 = *(rdx_7 + rbx_3 + 8)
                    zmm0_1 = *(rbx_3 + r8_4 + 8)
                    int64_t rax_40 = r9_5 + i_2
                    i_2 += 1
                    r9_5 += rdi_2
                    rdx_7 -= 4
                    r8_4 -= 4
                    zmm1_1.d = zmm1_1.d f* *(rdx_7 + 4)
                    zmm0_1[0] = zmm0_1[0] f* *(r8_4 + 4)
                    zmm1_1.d = zmm1_1.d f- zmm0_1[0]
                    zmm3_1 = zmm3_1 f+ _mm_cvtps_pd(zmm1_1)
                    zmm1_1.d = fconvert.s(zmm3_1)
                    arg4[rax_40] = zmm1_1.d
                    *r10_5 = zmm1_1.d
                    r10_5 += rax_12 + 4
                while (i_2 s< r11_2)
        
        arg_18 -= 1
        var_a8_1 += rdi_2
        r11_1 = zx.q(arg2)
        r14_1 += 1
        r12_2 -= 4
        r13_1 += 4
        result = rdi_2 << 2
        rbx_3 -= 4
        var_a0 = r12_2
        arg_20 += result
        var_98 = r14_1
        var_90_1 = r13_1
    while (r14_1 s< rdi_2)

return result
