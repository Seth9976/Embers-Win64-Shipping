// 函数: sub_140385a20
// 地址: 0x140385a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d28
int64_t rax_1 = __security_cookie ^ &var_d28
int32_t var_d00 = arg4
int32_t var_d04 = arg3
int64_t rax_2 = arg2

if (arg5 s>= 0x50 && arg5 s<= 0xa0)
    uint128_t zmm7
    zmm7.d = _mm_cvtepi32_ps(zx.o(arg5)).d f- 80f
    zmm7.d = zmm7.d f/ 80f

int64_t var_6b8
__builtin_memset(&var_6b8, 0xff, 0x40)
int64_t var_cb8
__builtin_memcpy(&var_cb8, 
    "\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\x"
"f9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9"
"02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50\xf9\x02\x15\x50", 
    0x40)
int32_t i = 0
int32_t rdi = 1
uint128_t zmm0_1
uint128_t zmm6_1

do
    int64_t rbx_1 = sx.q(rdi)
    int32_t zmm7_1
    zmm0_1, zmm6_1, zmm7_1 = sub_1403858f0(arg1, rax_2, i.b, arg3 + 1)
    int32_t rax_3 = rdi
    *(&var_6b8 + (rbx_1 << 2)) = i
    rdi = rol.d(rdi, 1)
    zmm0_1.d = zmm0_1.d f* zmm7_1
    i += 1
    zmm0_1.d = zmm0_1.d f+ 1f
    rax_2 = arg2
    zmm0_1.d = zmm0_1.d f* _mm_cvtepi32_ps(zx.o(rax_3 * arg5 + arg4)).d
    *(&var_cb8 + (rbx_1 << 2)) = zmm0_1.d
while (i s< 4)

int64_t r8_1 = sx.q(var_d04)
int32_t i_4 = 1
int32_t rdx_1 = 1
int64_t rcx_1 = r8_1
int32_t i_2 = 2
int32_t var_d08 = 1
void* var_cf8
uint128_t zmm1_1

if (r8_1 s> 1)
    uint128_t var_48_1 = zmm6_1
    int32_t zmm9[0x4] = data_142e11d00
    int64_t rdi_1 = 0x10
    var_cf8 = &var_cb8:4
    int32_t r13_1 = (r8_1 - 1).d
    int32_t zmm10[0x4] = data_142d3f5b0
    int64_t var_ca0
    void* r9_1 = 0x68 - &var_ca0:4
    void* r15_1 = &var_ca0:4
    uint128_t zmm11 = data_1434422d0
    uint128_t zmm12 = data_143442ad0
    int64_t i_3 = rcx_1 - 1
    void* var_cc0 = r9_1
    int64_t i_1
    
    do
        int32_t rdx_2 = 0xb
        zmm1_1 = _mm_sub_epi32(_mm_add_epi32(zmm11, zmm9), zmm10)
        int64_t rcx_4 = sx.q(rdx_1 - 1) << 4
        int64_t rax_8 = sx.q(rdx_1) << 4
        int32_t r8_2 = 0xa
        zmm0_1 = *(&var_cb8:4 + (rcx_4 << 2))
        int64_t var_6b0
        *(&var_6b0 + (rax_8 << 2)) = zmm1_1
        int64_t var_cb0
        *(&var_cb0 + (rax_8 << 2)) = zmm0_1
        int64_t var_ca8
        zmm0_1 = *(&var_ca8:4 + (rcx_4 << 2))
        void* rcx_5 = r9_1 + r15_1
        int64_t j_4 = 1
        zmm1_1 = _mm_sub_epi32(_mm_add_epi32(zmm12, zmm9), zmm10)
        *(&var_ca0 + (rax_8 << 2)) = zmm0_1
        int64_t var_6a0
        *(&var_6a0 + (rax_8 << 2)) = zmm1_1
        int64_t var_cc8
        int64_t j
        
        do
            void var_cfc
            int32_t rax_9 = *(&var_cfc + rcx_5)
            *(&var_6b8:4 + rcx_5) = r8_2
            *(&var_6b0 + rcx_5) = rdx_2
            *(&var_cb8 + rcx_5) = rax_9
            r8_2 += 4
            *(&var_6b8 + rcx_5) = rdx_2 - 2
            int32_t rax_11 = *(&var_cf8 + rcx_5)
            rcx_5 += 0x10
            *(&var_cc8:4 + rcx_5) = rax_11
            *(&var_cc0 + rcx_5) = *(&var_d04 + rcx_5)
            *(&var_cc0:4 + rcx_5) = *(&var_d00 + rcx_5)
            int32_t rax_14 = rdx_2 + 1
            rdx_2 += 4
            void var_6bc
            *(&var_6bc + rcx_5) = rax_14
            j = j_4
            j_4 -= 1
        while (j != 1)
        void* rcx_6 = (rdi_1 << 2) + 0x38
        int32_t rdx_3 = r8_2 - 1
        *(&var_cb8 + rcx_6) = *(&var_cc8:4 + (rdi_1 << 2))
        int64_t j_3 = 2
        *(&var_cb8:4 + rcx_6) = *(&var_cc0 + (rdi_1 << 2))
        int64_t j_1
        
        do
            *(&var_6b8 + rcx_6) = rdx_3
            rdx_3 += 1
            rcx_6 += 4
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
        int64_t rcx_7 = sx.q(var_d08)
        void* r12_1 = var_cf8
        int64_t rdx_5 = arg2 + (rcx_7 << 2)
        void* r10_1 = arg1 + (rcx_7 << 2)
        int32_t j_2 = 0
        int32_t rbx_2 = 1
        void* var_cd8_1 = r10_1
        var_cc8 = rdx_5
        
        do
            zmm6_1 = *r12_1
            zmm0_1 = *(r15_1 - 0x10)
            int32_t rbx_3 = rol.d(1, j_2.b)
            *(&var_6b8 + ((sx.q(rbx_2) + rdi_1) << 2)) = 1
            
            if (not(zmm6_1.d f<= zmm0_1.d))
                zmm6_1 = zmm0_1
                *(&var_6b8 + ((sx.q(rbx_3) + rdi_1) << 2)) = 3
            
            zmm0_1 = *r15_1
            
            if (not(zmm6_1.d f<= zmm0_1.d))
                zmm6_1 = zmm0_1
                *(&var_6b8 + ((sx.q(rbx_3) + rdi_1) << 2)) = 7
            
            if (not(zmm6_1.d f<= (*(r15_1 + 0x20)).d))
                *(&var_6b8 + ((sx.q(rbx_3) + rdi_1) << 2)) = 0xf
            
            int32_t zmm7_2
            zmm0_1, zmm6_1, zmm7_2 = sub_1403858f0(r10_1, rdx_5, j_2.b, r13_1 + 1)
            zmm0_1.d = zmm0_1.d f* zmm7_2
            zmm0_1.d = zmm0_1.d f+ 1f
            zmm1_1 = zx.o(rbx_3 * arg5 + var_d00)
            int64_t rax_30 = sx.q(rbx_3) + rdi_1
            *(&var_cb8 + (rax_30 << 2)) = zmm6_1.d
            zmm0_1.d = zmm0_1.d f* _mm_cvtepi32_ps(zmm1_1).d
            
            if (r13_1 s>= rbx_3)
                zmm0_1.d = zmm0_1.d f+ zmm6_1.d
                *(&var_cb8 + (rax_30 << 2)) = zmm0_1.d
            else
                zmm1_1.d = _mm_cvtepi32_ps(zx.o(r13_1)).d f* zmm0_1.d
                zmm1_1.d = zmm1_1.d f/ _mm_cvtepi32_ps(zx.o(rbx_3)).d
                zmm1_1.d = zmm1_1.d f+ zmm6_1.d
                *(&var_cb8 + (rax_30 << 2)) = zmm1_1.d
            
            rbx_2 = rol.d(rbx_3, 1)
            rdx_5 = var_cc8
            r10_1 = var_cd8_1
            j_2 += 1
        while (j_2 s< 4)
        
        var_cf8 += 0x40
        r9_1 = var_cc0
        rdx_1 = var_d08 + 1
        r13_1 -= 1
        rdi_1 += 0x10
        r15_1 += 0x40
        i_1 = i_3
        i_3 -= 1
        i_2 = 2
        var_d08 = rdx_1
    while (i_1 != 1)
    r8_1 = zx.q(var_d04)

int64_t rcx_11 = rcx_1 << 6
void* rax_31 = &var_d28 + rcx_11 + 0x3c
zmm0_1 = *(&var_cf8:4 + rcx_11)

do
    zmm1_1 = *(rax_31 - 4)
    
    if (not(zmm0_1.d f<= zmm1_1.d))
        zmm0_1 = zmm1_1
        i_4 = i_2
    
    zmm1_1 = *rax_31
    
    if (not(zmm0_1.d f<= zmm1_1.d))
        zmm0_1 = zmm1_1
        i_4 = i_2 + 1
    
    i_2 += 2
    rax_31 += 8
while (i_2 s< 0x10)

int32_t rax_32 = (r8_1 - 1).d
int64_t rcx_12 = sx.q(rax_32)

if (rax_32 s>= 0)
    int64_t rdx_8 = rcx_12 << 4
    int64_t temp2_1
    
    do
        int64_t rax_34 = sx.q(i_4) + rdx_8
        rdx_8 -= 0x10
        temp2_1 = rcx_12
        rcx_12 -= 1
        i_4 = *(&var_6b8 + (rax_34 << 2))
    while (temp2_1 - 1 s>= 0)

__security_check_cookie(rax_1 ^ &var_d28)
return zx.q(i_4)
