// 函数: sub_1426138a0
// 地址: 0x1426138a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* r14 = arg4
int64_t result
float zmm1

if ((*(arg3 + 0x1f) & 0xc0) != 0x40)
    uint64_t rbp_1 = zx.q(*(arg3 + 0x1e))
    uint64_t rbx_1 = zx.q(rbp_1.d)
    int64_t rdi_1 = 0
    void var_a0
    int64_t r11_1
    
    if (rbp_1.d u< 4)
        r11_1 = 0
    else
        int64_t r8 = *(arg2 + 0x18)
        void* r9 = arg3 + 6
        int64_t i_6 = ((rbp_1 - 4) u>> 2) + 1
        void* rdx_1 = &var_a0
        r11_1 = i_6 << 2
        int64_t i
        
        do
            uint64_t rax_5 = zx.q(*(r9 - 2))
            rdx_1 += 0x30
            r9 += 8
            uint64_t rcx_1 = rax_5 * 3
            *(rdx_1 - 0x38) = *(r8 + (rcx_1 << 2))
            *(rdx_1 - 0x34) = *(r8 + (rcx_1 << 2) + 4)
            *(rdx_1 - 0x30) = *(r8 + (rcx_1 << 2) + 8)
            uint64_t rcx_2 = zx.q(*(r9 - 8)) * 3
            *(rdx_1 - 0x2c) = *(r8 + (rcx_2 << 2))
            *(rdx_1 - 0x28) = *(r8 + (rcx_2 << 2) + 4)
            *(rdx_1 - 0x24) = *(r8 + (rcx_2 << 2) + 8)
            uint64_t rcx_3 = zx.q(*(r9 - 6)) * 3
            *(rdx_1 - 0x20) = *(r8 + (rcx_3 << 2))
            *(rdx_1 - 0x1c) = *(r8 + (rcx_3 << 2) + 4)
            *(rdx_1 - 0x18) = *(r8 + (rcx_3 << 2) + 8)
            uint64_t rcx_4 = zx.q(*(r9 - 4)) * 3
            *(rdx_1 - 0x14) = *(r8 + (rcx_4 << 2))
            *(rdx_1 - 0x10) = *(r8 + (rcx_4 << 2) + 4)
            *(rdx_1 - 0xc) = *(r8 + (rcx_4 << 2) + 8)
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    if (r11_1 s< rbx_1)
        int64_t r8_1 = *(arg2 + 0x18)
        int64_t i_7 = rbx_1 - r11_1
        void* rdx_2 = &var_a0 + r11_1 * 0xc
        void* r9_2 = arg3 + 4 + (r11_1 << 1)
        int64_t i_1
        
        do
            uint64_t rax_22 = zx.q(*r9_2)
            rdx_2 += 0xc
            r9_2 += 2
            uint64_t rcx_5 = rax_22 * 3
            *(rdx_2 - 0x14) = *(r8_1 + (rcx_5 << 2))
            *(rdx_2 - 0x10) = *(r8_1 + (rcx_5 << 2) + 4)
            *(rdx_2 - 0xc) = *(r8_1 + (rcx_5 << 2) + 8)
            i_1 = i_7
            i_7 -= 1
        while (i_1 != 1)
    
    *arg5 = *r14
    arg5[1] = r14[1]
    arg5[2] = r14[2]
    void var_a8
    
    if (sub_142609450(r14, &var_a8, rbp_1.d) == 0)
        result = 0x80000000
    else
        zmm1 = (zx.o(0)).d
        
        if (rbx_1 u>= 4)
            void var_98
            void* rax_30 = &var_98
            int64_t i_4 = ((rbp_1 - 4) u>> 2) + 1
            rdi_1 = i_4 << 2
            int64_t i_2
            
            do
                zmm1 = zmm1 f+ *(rax_30 - 0xc) f+ *rax_30 f+ *(rax_30 + 0xc) f+ *(rax_30 + 0x18)
                rax_30 += 0x30
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
        
        if (rdi_1 s< rbx_1)
            int64_t i_5 = rbx_1 - rdi_1
            void var_a4
            float* rcx_9 = &var_a4 + rdi_1 * 0xc
            int64_t i_3
            
            do
                zmm1 = zmm1 + *rcx_9
                rcx_9 = &rcx_9[3]
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        result = 0x40000000
        arg5[1] = zmm1 f/ _mm_cvtepi32_ps(zx.o(rbp_1.d)).d
else
    int64_t r10_1 = *(arg2 + 0x18)
    uint64_t rdx = zx.q(*(arg3 + 4)) * 3
    zmm1 = *(r10_1 + (rdx << 2)) - *arg4
    float zmm2 = *(r10_1 + (rdx << 2) + 4) - arg4[1]
    uint64_t rcx = zx.q(*(arg3 + 6)) * 3
    float zmm0 = *(r10_1 + (rdx << 2) + 8) - arg4[2]
    int128_t zmm6 = *(r10_1 + (rcx << 2))
    result = 0x40000000
    zmm2 = zmm2 * zmm2 + zmm1 * zmm1
    zmm1 = zmm6.d - *arg4
    zmm6.d = zmm6.d f- *(r10_1 + (rdx << 2))
    zmm2 = zmm2 + zmm0 * zmm0
    zmm0 = *(r10_1 + (rcx << 2) + 8) - arg4[2]
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2)
    zmm2 = *(r10_1 + (rcx << 2) + 4) - arg4[1]
    zmm0 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0) + temp0_1[0]
    temp0_1[0] = temp0_1[0] / zmm0
    zmm6.d = zmm6.d f* temp0_1[0]
    zmm6.d = zmm6.d f+ *(r10_1 + (rdx << 2))
    *arg5 = zmm6.d
    arg5[1] = (*(r10_1 + (rcx << 2) + 4) f- *(r10_1 + (rdx << 2) + 4)) * temp0_1[0] f+
        *(r10_1 + (rdx << 2) + 4)
    arg5[2] = (*(r10_1 + (rcx << 2) + 8) f- *(r10_1 + (rdx << 2) + 8)) * temp0_1[0] f+
        *(r10_1 + (rdx << 2) + 8)
__security_check_cookie(rax_1 ^ &var_c8)
return result
