// 函数: sub_141fec070
// 地址: 0x141fec070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int64_t rbp = *(arg1 + 8)
uint128_t zmm6
uint128_t var_58 = zmm6
int128_t* r13 = arg2
uint128_t zmm7
uint128_t var_68 = zmm7
int32_t* rdi = arg1
uint128_t zmm8
uint128_t var_78 = zmm8
int128_t zmm11 = *arg1
int128_t zmm12 = *(arg1 + 4)
uint64_t var_e8 = 0
int32_t var_e0 = rbx.d

if (rbx.d != 0)
    sub_140638750(&var_e8, rbx.d, 0)
    memcpy(var_e8, rbp, (rbx << 2).d)
    zmm12 = zmm12.d
    zmm11 = zmm11.d

char rdx_2 = rdi[6].b
char r8_3 = *(rdi + 0x1b)
char arg_8 = rdx_2
int32_t zmm3

if (zmm11.d f!= 0f)
    zmm3 = 1f f/ zmm11.d
else
    zmm3 = (zx.o(0)).d

uint128_t zmm0 = *r13
int32_t zmm2

if (zmm0.d f!= 0f)
    zmm2 = 1f f/ zmm0.d
else
    zmm2 = (zx.o(0)).d

zmm0 = *(r13 + 4)
uint32_t rax = zx.d(*(r13 + 0x19))
uint32_t rcx_2 = zx.d(*(rdi + 0x1a))
float temp0[0x4] = _mm_min_ss(zmm0[0], zmm12.d)
uint32_t r12 = zx.d(*(rdi + 0x19))
uint128_t zmm10
zmm10.d = _mm_cvtepi32_ps(zx.o(rax - 1)).d f* zmm2
zmm10.d = zmm10.d f+ zmm0.d
zmm0 = _mm_cvtepi32_ps(zx.o(r12 - 1))
uint32_t rax_4 = zx.d(*(r13 + 0x1b))
zmm0.d = zmm0.d f* zmm3
zmm0.d = zmm0.d f+ zmm12.d
zmm10 = _mm_max_ss(zmm10.d, zmm0.d)
uint32_t rcx_4 = zx.d(*(r13 + 0x1a))
int32_t rbx_1 = int.d(_mm_cvtepi32_ps(zx.o(rcx_2 - zx.d(r8_3))).d)
int32_t r15 = int.d(_mm_cvtepi32_ps(zx.o(rcx_4 - rax_4)).d)

if (rdx_2 == 1)
    rdx_2 = *(r13 + 0x18)
    arg_8 = rdx_2

rdi[6].b = rdx_2
*(rdi + 0x19) = 0x80
zmm10.d = zmm10.d f- temp0[0]
int32_t rcx_6 = rbx_1

if (rdx_2 != 1)
    rcx_6 = rbx_1 * 2

char rax_6 = rbx_1.b

if (rdx_2 == 1)
    rax_6 = 0

*(rdi + 0x1a) = rcx_6.b
*(rdi + 0x1b) = rax_6
zmm10.d = zmm10.d f* 0.00787401572f
float zmm1

if (zmm10.d f<= 0f)
    zmm1 = (zx.o(0)).d
else
    zmm1 = 1f f/ zmm10.d

*rdi = zmm1
rdi[1] = temp0[0]
int32_t r14 = 0
int32_t rbp_2 = rcx_6 << 7
arg1[1].d = 0

if (*(arg1 + 0x14) != rbp_2)
    sub_1405dadb0(arg1 + 8, rbp_2)
    r14 = rdi[4]

int32_t rax_7 = r14 + rbp_2
arg1[1].d = rax_7

if (rax_7 s> *(arg1 + 0x14))
    sub_1406105e0(arg1 + 8)

memset(*(arg1 + 8) + (sx.q(r14) << 2), 0, sx.q(rbp_2) << 2)
int32_t rdi_1 = r12 - 1
int32_t i = 0
int32_t var_fc = rdi_1
int32_t* r12_1 = 8
int32_t i_1 = 0
int32_t arg_20 = 0
int32_t* var_108 = 8

do
    zmm6.d = _mm_cvtepi32_ps(zx.o(i)).d f* zmm10.d
    zmm6.d = zmm6.d f+ temp0[0]
    zmm7.d = zmm6.d f- zmm12.d
    zmm7.d = zmm7.d f* zmm11.d
    
    if (not(zmm7.d f>= 0f))
        zmm7 = zx.o(0)
    
    float _X = zmm7.d
    truncf(_X)
    zmm6.d = zmm6.d f- *(r13 + 4)
    int32_t rax_9 = int.d(zmm7.d)
    int32_t rcx_13 = rdi_1
    zmm6.d = zmm6.d f* *r13
    zmm8.d = zmm7.d f- _X
    
    if (rax_9 u<= rdi_1)
        rcx_13 = rax_9
    
    uint64_t rcx_15 = var_e8
    int64_t rbp_3 = rcx_15 + (sx.q(rcx_13 * rcx_2) << 2)
    int32_t rax_11 = rdi_1
    
    if (rax_9 + 1 u<= rdi_1)
        rax_11 = rax_9 + 1
    
    int64_t r14_1 = rcx_15 + (sx.q(rax_11 * rcx_2) << 2)
    
    if (not(zmm6.d f>= 0f))
        zmm6 = zx.o(0)
    
    _X = zmm6.d
    truncf(_X)
    uint32_t r8_6 = zx.d(*(r13 + 0x1a))
    int64_t r9_1 = *(r13 + 8)
    float zmm4_1 = zmm6.d - _X
    int32_t r10_2 = zx.d(*(r13 + 0x19)) - 1
    int32_t rcx_16 = int.d(zmm6.d)
    int32_t rax_14 = r10_2
    
    if (rcx_16 u<= r10_2)
        rax_14 = rcx_16
    
    if (rcx_16 + 1 u<= r10_2)
        r10_2 = rcx_16 + 1
    
    int32_t j = 0
    uint64_t r8_7 = 0
    int64_t r11_1 = r9_1 + (sx.q(rax_14 * r8_6) << 2)
    int64_t rdi_2 = r9_1 + (sx.q(r10_2 * r8_6) << 2)
    
    if (rbx_1 s>= 4)
        int32_t var_118_1 = 2
        void* r10_4 = r14_1 + 4
        int64_t r9_3 = rbp_3 - r14_1
        int32_t r14_2 = 2
        r8_7 = zx.q(((rbx_1 - 4) u>> 2) + 1) << 2
        
        do
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(j)
            j += 4
            int64_t rax_20 = sx.q(mods.dp.d(temp2_1:temp3_1, r15))
            zmm2 = ((*(rdi_2 + (rax_20 << 2)) f- *(r11_1 + (rax_20 << 2))) f* zmm4_1 f+
                *(r11_1 + (rax_20 << 2)))
                f* ((*(r10_4 - 4) f- *(r9_3 + r10_4 - 4)) f* zmm8.d f+ *(r9_3 + r10_4 - 4))
            *(*(arg1 + 8) + r12_1 - 8) = zmm2
            int64_t rax_24 = sx.q(mods.dp.d(sx.q(r14_2 - 1), r15))
            zmm2 = ((*(rdi_2 + (rax_24 << 2)) f- *(r11_1 + (rax_24 << 2))) f* zmm4_1 f+
                *(r11_1 + (rax_24 << 2))) f* ((*r10_4 f- *(r9_3 + r10_4)) f* zmm8.d f+ *(r9_3 + r10_4))
            *(*(arg1 + 8) + r12_1 - 4) = zmm2
            int64_t rax_28 = sx.q(mods.dp.d(sx.q(r14_2), r15))
            zmm2 = ((*(rdi_2 + (rax_28 << 2)) f- *(r11_1 + (rax_28 << 2))) f* zmm4_1 f+
                *(r11_1 + (rax_28 << 2)))
                f* ((*(r10_4 + 4) f- *(r9_3 + r10_4 + 4)) f* zmm8.d f+ *(r9_3 + r10_4 + 4))
            *(r12_1 + *(arg1 + 8)) = zmm2
            int32_t temp20_1
            int32_t temp21_1
            temp20_1:temp21_1 = sx.q(r14_2 + 1)
            r14_2 += 4
            int64_t rax_32 = sx.q(mods.dp.d(temp20_1:temp21_1, r15))
            zmm1 = (*(r10_4 + 8) f- *(r9_3 + r10_4 + 8)) f* zmm8.d f+ *(r9_3 + r10_4 + 8)
            r10_4 += 0x10
            *(r12_1 + *(arg1 + 8) + 4) = (
                (*(rdi_2 + (rax_32 << 2)) f- *(r11_1 + (rax_32 << 2))) f* zmm4_1 f+
                *(r11_1 + (rax_32 << 2))) f* zmm1
            r12_1 = &r12_1[4]
        while (j s< rbx_1 - 3)
        
        r13 = arg2
        r12_1 = var_108
    
    if (j s< rbx_1)
        int64_t r8_11 = r14_1 + (r8_7 << 2)
        int64_t r9_5 = sx.q(arg_20 + j) << 2
        int64_t r10_6 = rbp_3 - r14_1
        
        do
            int32_t temp26_1
            int32_t temp27_1
            temp26_1:temp27_1 = sx.q(j)
            j += 1
            int64_t rax_38 = sx.q(mods.dp.d(temp26_1:temp27_1, r15))
            zmm1 = (*r8_11 f- *(r10_6 + r8_11)) f* zmm8.d f+ *(r10_6 + r8_11)
            r8_11 += 4
            *(r9_5 + *(arg1 + 8)) = (
                (*(rdi_2 + (rax_38 << 2)) f- *(r11_1 + (rax_38 << 2))) f* zmm4_1 f+
                *(r11_1 + (rax_38 << 2))) f* zmm1
            r9_5 += 4
        while (j s< rbx_1)
    
    if (arg_8 != 1)
        int32_t j_1 = 0
        uint64_t rax_41 = zx.q(r8_3) << 2
        uint64_t rcx_17 = 0
        int64_t r14_3 = r14_1 + rax_41
        int64_t rbp_4 = rbp_3 + rax_41
        uint64_t rax_43 = zx.q(*(r13 + 0x1b)) << 2
        int64_t r11_2 = r11_1 + rax_43
        int64_t rdi_3 = rdi_2 + rax_43
        
        if (rbx_1 s>= 4)
            int32_t var_118_2 = 2
            int64_t r9_7 = rbp_4 - r14_3
            void* r10_7 = r14_3 + 4
            int32_t r14_4 = 2
            void* r12_2 = &r12_1[sx.q(rbx_1)]
            rcx_17 = zx.q(((rbx_1 - 4) u>> 2) + 1) << 2
            
            do
                int32_t temp32_1
                int32_t temp33_1
                temp32_1:temp33_1 = sx.q(j_1)
                j_1 += 4
                int64_t rax_47 = sx.q(mods.dp.d(temp32_1:temp33_1, r15))
                zmm2 = ((*(rdi_3 + (rax_47 << 2)) f- *(r11_2 + (rax_47 << 2))) f* zmm4_1 f+
                    *(r11_2 + (rax_47 << 2)))
                    f* ((*(r10_7 - 4) f- *(r9_7 + r10_7 - 4)) f* zmm8.d f+ *(r9_7 + r10_7 - 4))
                *(*(arg1 + 8) + r12_2 - 8) = zmm2
                int64_t rax_51 = sx.q(mods.dp.d(sx.q(r14_4 - 1), r15))
                zmm2 = ((*(rdi_3 + (rax_51 << 2)) f- *(r11_2 + (rax_51 << 2))) f* zmm4_1 f+
                    *(r11_2 + (rax_51 << 2)))
                    f* ((*r10_7 f- *(r9_7 + r10_7)) f* zmm8.d f+ *(r9_7 + r10_7))
                *(*(arg1 + 8) + r12_2 - 4) = zmm2
                int64_t rax_55 = sx.q(mods.dp.d(sx.q(r14_4), r15))
                zmm2 = ((*(rdi_3 + (rax_55 << 2)) f- *(r11_2 + (rax_55 << 2))) f* zmm4_1 f+
                    *(r11_2 + (rax_55 << 2)))
                    f* ((*(r10_7 + 4) f- *(r9_7 + r10_7 + 4)) f* zmm8.d f+ *(r9_7 + r10_7 + 4))
                *(r12_2 + *(arg1 + 8)) = zmm2
                int32_t temp50_1
                int32_t temp51_1
                temp50_1:temp51_1 = sx.q(r14_4 + 1)
                r14_4 += 4
                int64_t rax_59 = sx.q(mods.dp.d(temp50_1:temp51_1, r15))
                zmm1 = (*(r10_7 + 8) f- *(r10_7 + r9_7 + 8)) f* zmm8.d f+ *(r10_7 + r9_7 + 8)
                r10_7 += 0x10
                *(r12_2 + *(arg1 + 8) + 4) = (
                    (*(rdi_3 + (rax_59 << 2)) f- *(r11_2 + (rax_59 << 2))) f* zmm4_1 f+
                    *(r11_2 + (rax_59 << 2))) f* zmm1
                r12_2 += 0x10
            while (j_1 s< rbx_1 - 3)
            
            r13 = arg2
        
        if (j_1 s< rbx_1)
            float* r9_8 = r14_3 + (rcx_17 << 2)
            int32_t* r10_9 = sx.q(arg_20 + j_1 + rbx_1) << 2
            int64_t rbp_5 = rbp_4 - r14_3
            
            do
                int32_t temp56_1
                int32_t temp57_1
                temp56_1:temp57_1 = sx.q(j_1)
                j_1 += 1
                int64_t rax_66 = sx.q(mods.dp.d(temp56_1:temp57_1, r15))
                zmm1 = (*r9_8 f- *(r9_8 + rbp_5)) f* zmm8.d f+ *(r9_8 + rbp_5)
                r9_8 = &r9_8[1]
                *(r10_9 + *(arg1 + 8)) = (
                    (*(rdi_3 + (rax_66 << 2)) f- *(r11_2 + (rax_66 << 2))) f* zmm4_1 f+
                    *(r11_2 + (rax_66 << 2))) f* zmm1
                r10_9 = &r10_9[1]
            while (j_1 s< rbx_1)
        
        r12_1 = var_108
    
    r12_1 = &r12_1[sx.q(rcx_6)]
    i = i_1 + 1
    arg_20 += rcx_6
    rdi_1 = var_fc
    i_1 = i
    var_108 = r12_1
while (i s< 0x80)

uint64_t rcx_23 = var_e8

if (rcx_23 == 0)
    return i

return sub_140a74f90(rcx_23)
