// 函数: sub_1425fed50
// 地址: 0x1425fed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0x78) & 1) != 0
float temp0[0x4] = _mm_shuffle_ps(arg3, arg3, 0)

if (cond:0)
    return 

if (sub_141e807c0(*(arg1 + 0x80)).b != 0)
    __builtin_memset(arg2, 0, 0x20)
    return 

int32_t rdx = *(*(arg1 + 0x18) + 0xc)
int128_t zmm7
int128_t var_48_1 = zmm7

if (rdx == 1)
    sub_1425feff0(arg1, arg2)
else if (rdx == 2)
    sub_1425ff3f0(arg1, arg2, temp0)
else if (rdx == 4)
    *arg2 = temp0[0]
    (*arg2)[1] = temp0[0]
    arg2[1][0] = temp0[0]
    (*arg2)[5] = temp0[0]
    
    if (data_143f70d9c == 6)
        temp0[0] = temp0[0] f* *(arg1 + 0x20)
        temp0[0] = temp0[0] * 0.25f
        (*arg2)[3] = temp0[0]
else if (rdx == 6)
    arg2[1][0] = temp0[0]
    (*arg2)[5] = temp0[0]
    *arg2 = temp0

uint32_t rcx_4 = zx.d(*(*(arg1 + 0x80) + 0xb8))

if (rcx_4 == 1)
    *(arg2 + 0x18) = 0.0
else if (rcx_4 == 2)
    __builtin_memset(arg2, 0, 0x18)

int64_t i = 0
float zmm6[0x4] = zx.o(0)

do
    if (_finite(_mm_cvtps_pd((*arg2)[i])) == 0)
        int32_t rax_3 = _isnan(_mm_cvtps_pd((*arg2)[i]))
        void* const r15_1 = &data_14344d1f8
        int64_t var_58 = 0
        int32_t rdx_6 = 0
        int32_t rcx_6 = 0
        int32_t var_50_1 = 0
        
        if (rax_3 != 0)
            r15_1 = &data_142e62550
        
        int32_t var_4c_1 = 0
        int64_t r14_1 = 0
        
        if (*r15_1 != 0)
            int64_t rdi_1 = -1
            
            do
                rdi_1 += 1
            while (*(r15_1 + (rdi_1 << 1)) != 0)
            
            if (rdi_1.d + 1 s> 0)
                sub_1405947f0(&var_58, rdi_1.d + 1)
                rcx_6 = var_4c_1
                rdx_6 = var_50_1
                r14_1 = var_58
            
            int32_t rax_4 = rdi_1.d + 1 + rdx_6
            int32_t var_50_2 = rax_4
            
            if (rax_4 s> rcx_6)
                sub_140594770(&var_58)
                r14_1 = var_58
            
            UnDecorator::getReferenceType(r14_1, r15_1, (rdi_1.d + 1) * 2)
        
        (*arg2)[i] = 0
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
    
    float zmm0[0x2] = *(*(arg1 + 0x80) + 0x2d0)
    zmm0[0] = zmm0[0] * (*arg2)[i]
    
    if (zmm0[0] >= zmm6[0])
        zmm0 = _mm_min_ss(zmm0[0], 0x40800000)
    else
        zmm0 = zmm6[0].q
    
    (*arg2)[i] = zmm0[0]
    i += 1
while (i s< 0x10)
