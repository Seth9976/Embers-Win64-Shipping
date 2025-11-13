// 函数: sub_142074240
// 地址: 0x142074240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i_2 = 0
uint32_t zmm7[0x4] = zx.o(0)
uint32_t zmm6[0x4] = zx.o(0)
int32_t i = 0
int64_t rbx = sx.q(arg4)
int64_t r12 = sx.q(arg3)
int128_t var_120
__builtin_memset(&var_120, 0, 0x30)
uint32_t var_110
uint32_t var_10c
int128_t var_108
void* var_f8

if (arg3 s> 0)
    do
        int32_t* rax
        
        if (i == 0)
            rax = &var_120
        else if (i == 1)
            rax = &var_120:0xc
        else if (i == 2)
            rax = &var_120:4
        else if (i == 3)
            rax = &var_110
        else if (i == 4)
            rax = &var_120:8
        else
            rax = &var_10c
        
        *rax = 0x7f7fc99e
        
        if (i == 0)
            result = &var_108
        else if (i == 1)
            result = &var_108:0xc
        else if (i == 2)
            result = &var_108:4
        else if (i == 3)
            result = &var_f8
        else if (i == 4)
            result = &var_108:8
        else
            result = &var_f8:4
        
        i += 1
        *result = 0xff7fc99e
    while (i s< r12.d)
    
    zmm7 = var_10c
    zmm6 = var_110

int64_t rcx_8 = sx.q(arg2[1].d)
int32_t result_2 = 0

if (rcx_8.d s> 0)
    int64_t rcx_9 = 0
    result = *arg2
    
    while (not((**(arg1 + 0x18))[0] f<= *result))
        result_2 += 1
        rcx_9 += 1
        result += 0x2c
        
        if (rcx_9 s>= rcx_8)
            break

int32_t i_1 = 0
int64_t r10 = r12
uint32_t zmm8[0x4] = var_120:0xc.d
uint32_t zmm9[0x4] = var_120:8.d
uint32_t zmm10[0x4] = var_120:4.d
uint32_t zmm11[0x4] = var_120.d
int32_t i_3 = 0
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]

if (*(arg1 + 0x20) s> 0)
    int32_t* rdx_1 = nullptr
    int64_t r15_1 = rbx
    result = sx.q(result_2)
    void* const* result_1 = result
    int64_t var_148_1 = rbx
    int32_t* arg_10 = nullptr
    
    do
        if (result_2 s>= arg2[1].d)
            goto label_142074865
        
        int64_t rcx_10 = *(arg1 + 0x18)
        int128_t* r11_1 = result * 0x2c
        int64_t rbx_1 = rdx_1 * 0x24
        zmm0 = *(r11_1 + *arg2)
        zmm0[0] = zmm0[0] f- *(rbx_1 + rcx_10)
        
        if (zmm0[0] f<= -0.00999999978f || zmm0[0] f>= 0.00999999978f)
            rbx = zx.q(arg4)
        label_142074865:
            uint32_t var_140[0x4]
            void var_130
            zmm6, zmm7, zmm8, zmm9 =
                sub_141a1d730(arg2, &var_140, *(*(arg1 + 0x18) + rdx_1 * 0x24), &var_130)
            int32_t j = 0
            
            if (r12.d s> 0)
                uint32_t (* r9_3)[0x4] = &var_140
                
                do
                    int32_t rcx_33 = j + rbx.d
                    zmm1 = *r9_3
                    uint32_t* rdx_6 = *(arg1 + 0x18) + ((sx.q(i_3) * 9 + 1) << 2)
                    
                    if (rcx_33 != 0)
                        if (rcx_33 == 1)
                            rdx_6 = &rdx_6[3]
                        else if (rcx_33 == 2)
                            rdx_6 = &rdx_6[1]
                        else if (rcx_33 == 3)
                            rdx_6 = &rdx_6[4]
                        else if (rcx_33 == 4)
                            rdx_6 = &rdx_6[2]
                        else
                            rdx_6 = &rdx_6[5]
                    
                    *rdx_6 = zmm1[0]
                    
                    if (j == 0)
                        zmm0 = zmm11
                    else if (j == 1)
                        zmm0 = zmm8
                    else if (j == 2)
                        zmm0 = zmm10
                    else if (j == 3)
                        zmm0 = zmm6
                    else if (j == 4)
                        zmm0 = zmm9
                    else
                        zmm0 = zmm7
                    
                    if (not(zmm1[0] f>= zmm0[0]))
                        uint32_t* rax_34
                        
                        if (j == 0)
                            rax_34 = &var_120
                        else if (j == 1)
                            rax_34 = &var_120:0xc
                        else if (j == 2)
                            rax_34 = &var_120:4
                        else if (j == 3)
                            rax_34 = &var_110
                        else if (j == 4)
                            rax_34 = &var_120:8
                        else
                            rax_34 = &var_10c
                        
                        *rax_34 = zmm1[0]
                        zmm7 = var_10c
                        zmm6 = var_110
                        zmm8 = var_120:0xc.d
                        zmm9 = var_120:8.d
                        zmm10 = var_120:4.d
                        zmm11 = var_120.d
                    
                    if (j == 0)
                        zmm0 = var_108.d
                    else if (j == 1)
                        zmm0 = var_108:0xc.d
                    else if (j == 2)
                        zmm0 = var_108:4.d
                    else if (j == 3)
                        zmm0 = var_f8.d
                    else if (j == 4)
                        zmm0 = var_108:8.d
                    else
                        zmm0 = var_f8:4.d
                    
                    if (not(zmm1[0] f<= zmm0[0]))
                        void* rax_35
                        
                        if (j == 0)
                            rax_35 = &var_108
                        else if (j == 1)
                            rax_35 = &var_108:0xc
                        else if (j == 2)
                            rax_35 = &var_108:4
                        else if (j == 3)
                            rax_35 = &var_f8
                        else if (j == 4)
                            rax_35 = &var_108:8
                        else
                            rax_35 = &var_f8:4
                        
                        *rax_35 = zmm1[0]
                    
                    j += 1
                    r9_3 = &(*r9_3)[1]
                while (j s< r12.d)
            
            result = result_1
        else
            int32_t j_1 = 0
            
            if (r12.d s> 0)
                int128_t* r9 = r11_1
                
                do
                    int32_t rcx_11 = j_1 + arg4
                    zmm1 = *(r9 + *arg2 + 4)
                    rdx_1 = *(arg1 + 0x18) + 4 + sx.q(i_1) * 0x24
                    
                    if (rcx_11 != 0)
                        if (rcx_11 == 1)
                            rdx_1 = &rdx_1[3]
                        else if (rcx_11 == 2)
                            rdx_1 = &rdx_1[1]
                        else if (rcx_11 == 3)
                            rdx_1 = &rdx_1[4]
                        else if (rcx_11 == 4)
                            rdx_1 = &rdx_1[2]
                        else
                            rdx_1 = &rdx_1[5]
                    
                    *rdx_1 = zmm1[0]
                    
                    if (j_1 == 0)
                        zmm0 = zmm11
                    else if (j_1 == 1)
                        zmm0 = zmm8
                    else if (j_1 == 2)
                        zmm0 = zmm10
                    else if (j_1 == 3)
                        zmm0 = zmm6
                    else if (j_1 == 4)
                        zmm0 = zmm9
                    else
                        zmm0 = zmm7
                    
                    if (not(zmm1[0] f>= zmm0[0]))
                        int32_t* rax_6
                        
                        if (j_1 == 0)
                            rax_6 = &var_120
                        else if (j_1 == 1)
                            rax_6 = &var_120:0xc
                        else if (j_1 == 2)
                            rax_6 = &var_120:4
                        else if (j_1 == 3)
                            rax_6 = &var_110
                        else if (j_1 == 4)
                            rax_6 = &var_120:8
                        else
                            rax_6 = &var_10c
                        
                        *rax_6 = zmm1[0]
                        zmm7 = var_10c
                        zmm6 = var_110
                        zmm8 = var_120:0xc.d
                        zmm9 = var_120:8.d
                        zmm10 = var_120:4.d
                        zmm11 = var_120.d
                    
                    if (j_1 == 0)
                        zmm0 = var_108.d
                    else if (j_1 == 1)
                        zmm0 = var_108:0xc.d
                    else if (j_1 == 2)
                        zmm0 = var_108:4.d
                    else if (j_1 == 3)
                        zmm0 = var_f8.d
                    else if (j_1 == 4)
                        zmm0 = var_108:8.d
                    else
                        zmm0 = var_f8:4.d
                    
                    if (not(zmm1[0] f<= zmm0[0]))
                        void* rax_7
                        
                        if (j_1 == 0)
                            rax_7 = &var_108
                        else if (j_1 == 1)
                            rax_7 = &var_108:0xc
                        else if (j_1 == 2)
                            rax_7 = &var_108:4
                        else if (j_1 == 3)
                            rax_7 = &var_f8
                        else if (j_1 == 4)
                            rax_7 = &var_108:8
                        else
                            rax_7 = &var_f8:4
                        
                        *rax_7 = zmm1[0]
                    
                    j_1 += 1
                    r9 += 4
                while (j_1 s< r12.d)
                
                rcx_10 = *(arg1 + 0x18)
                r10 = r12
                r15_1 = var_148_1
            
            if (*(rcx_10 + rbx_1 + 0x1c) == 4)
                int64_t j_2 = 0
                uint128_t zmm2
                
                if (r10 s>= 4)
                    void* r8 = r11_1 + 0x14
                    
                    do
                        int64_t rax_8 = *arg2
                        zmm0 = *(r8 + rax_8 - 4)
                        zmm2 = *(r8 + rax_8 + 8)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x50)
                        zmm2.d = zmm2.d f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2.d f<= (zmm1 ^ 0x80000000)[0] || zmm2.d f>= zmm1[0])
                            rdx_1.b = 0
                        else
                            rdx_1.b = 1
                        
                        *(*(arg1 + 0x18) + j_2 + rbx_1 + r15_1 + 0x1d) = rdx_1.b
                        int64_t rax_12 = *arg2
                        zmm0 = *(r8 + rax_12)
                        zmm2 = *(r8 + rax_12 + 0xc)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x50)
                        zmm2.d = zmm2.d f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2.d f<= (zmm1 ^ 0x80000000)[0] || zmm2.d f>= zmm1[0])
                            rdx_1.b = 0
                        else
                            rdx_1.b = 1
                        
                        *(*(arg1 + 0x18) + j_2 + rbx_1 + r15_1 + 0x1e) = rdx_1.b
                        int64_t rax_16 = *arg2
                        zmm0 = *(r8 + rax_16 + 4)
                        zmm2 = *(r8 + rax_16 + 0x10)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x50)
                        zmm2.d = zmm2.d f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2.d f<= (zmm1 ^ 0x80000000)[0] || zmm2.d f>= zmm1[0])
                            rdx_1.b = 0
                        else
                            rdx_1.b = 1
                        
                        *(*(arg1 + 0x18) + j_2 + rbx_1 + r15_1 + 0x1f) = rdx_1.b
                        int64_t rax_20 = *arg2
                        zmm0 = *(r8 + rax_20 + 8)
                        zmm2 = *(r8 + rax_20 + 0x14)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x50)
                        zmm2.d = zmm2.d f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2.d f<= (zmm1 ^ 0x80000000)[0] || zmm2.d f>= zmm1[0])
                            rdx_1.b = 0
                        else
                            rdx_1.b = 1
                        
                        r8 += 0x10
                        int64_t rax_22 = *(arg1 + 0x18) + j_2
                        j_2 += 4
                        *(rax_22 + rbx_1 + r15_1 + 0x20) = rdx_1.b
                    while (j_2 s< r10 - 3)
                
                if (j_2 s< r10)
                    uint128_t* r8_1 = ((result_1 * 0xb + j_2) << 2) + 0x1c
                    
                    do
                        int64_t rax_26 = *arg2
                        zmm0 = *(r8_1 + rax_26 - 0xc)
                        zmm2 = *(r8_1 + rax_26)
                        zmm0[0] = zmm0[0] f* *(arg1 + 0x50)
                        zmm2.d = zmm2.d f- zmm0[0]
                        zmm1 = _mm_max_ss(_mm_and_ps(zmm0, 0x7fffffff)[0], 0x322bcc77)
                        
                        if (zmm2.d f<= (zmm1 ^ 0x80000000)[0] || zmm2.d f>= zmm1[0])
                            rdx_1.b = 0
                        else
                            rdx_1.b = 1
                        
                        r8_1 += 4
                        int64_t rax_28 = *(arg1 + 0x18) + j_2
                        j_2 += 1
                        *(rax_28 + rbx_1 + r15_1 + 0x1d) = rdx_1.b
                    while (j_2 s< r10)
            
            result_2 += 1
            result = result_1 + 1
            result_1 = result
        
        r10 = r12
        i_1 = i_3 + 1
        rbx = zx.q(arg4)
        rdx_1 = arg_10 + 1
        i_3 = i_1
        arg_10 = rdx_1
    while (i_1 s< *(arg1 + 0x20))

if (r12.d s> 0)
    do
        void* rdx_8
        
        if (i_2 == 0)
            rdx_8 = &var_108
        else if (i_2 == 1)
            rdx_8 = &var_108:0xc
        else if (i_2 == 2)
            rdx_8 = &var_108:4
        else if (i_2 == 3)
            rdx_8 = &var_f8
        else if (i_2 == 4)
            rdx_8 = &var_108:8
        else
            rdx_8 = &var_f8:4
        
        if (i_2 == 0)
            zmm0 = zmm11
        else if (i_2 == 1)
            zmm0 = zmm8
        else if (i_2 == 2)
            zmm0 = zmm10
        else if (i_2 == 3)
            zmm0 = zmm6
        else if (i_2 == 4)
            zmm0 = zmm9
        else
            zmm0 = zmm7
        
        zmm1 = *rdx_8
        int32_t rcx_61 = i_2 + rbx.d
        zmm1[0] = zmm1[0] f- zmm0[0]
        zmm1[0] = zmm1[0] f* *(arg1 + 0x50)
        zmm1 = _mm_max_ss(zmm1[0], 0x38d1b717)
        
        if (rcx_61 == 0)
            result = arg1 + 0x38
        else if (rcx_61 == 1)
            result = arg1 + 0x44
        else if (rcx_61 == 2)
            result = arg1 + 0x3c
        else if (rcx_61 == 3)
            result = arg1 + 0x48
        else if (rcx_61 == 4)
            result = arg1 + 0x40
        else
            result = arg1 + 0x4c
        
        i_2 += 1
        *result = zmm1[0]
    while (i_2 s< r12.d)

return result
