// 函数: sub_141de4340
// 地址: 0x141de4340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rdi = arg1
int64_t* r13 = arg7[2]
int32_t i_10 = arg7[1].d
int32_t* result_1 = nullptr
int32_t var_d4 = 0

if (i_10 s> 0)
    sub_1405a4cf0(&result_1)
    
    if (i_10 s> 0)
        void* rdi_1 = nullptr
        uint64_t i_9 = zx.q(i_10)
        int32_t* result_2 = result_1
        uint64_t i
        
        do
            int64_t r9 = *arg3
            *result_2 = (*r9)(arg3, zx.q(*(rdi_1 + *r13)), arg7[2], r9, arg1)
            result_2 = &result_2[1]
            rdi_1 += 2
            i = i_9
            i_9 -= 1
        while (i != 1)
        rdi = arg1

int64_t* r12_1 = arg6
int32_t zmm4 = (zx.o(0)).d
int64_t* rsi_1 = *rdi
int32_t* r13_1 = *r12_1
int64_t r15_2 = *arg4
int64_t r9_2 = sx.q(*r13_1) << 6
float zmm0[0x4] = *(r9_2 + r15_2 + 0x10)

if (not(zmm0[0] < 0f))
    zmm4 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

int32_t i_11 = rsi_1[1].d

if (i_11 != 0)
    int32_t* result_3 = result_1
    float (* rdx_2)[0x4] = nullptr
    uint64_t i_7 = zx.q(i_11)
    uint64_t i_1
    
    do
        int64_t rax_6 = sx.q(*result_3)
        int64_t* var_e8
        
        if (rax_6.d s< 0 || rax_6.d s>= *(r9_2 + r15_2 + 0x38))
            var_e8.d = zmm4
        else
            var_e8.d = (*(*(r9_2 + r15_2 + 0x30) + (rax_6 << 2)))[0]
        
        int64_t rax_8 = *rsi_1
        result_3 = &result_3[1]
        int64_t rcx_4 = *arg7
        float zmm2[0x4] = var_e8.d
        float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = *(rdx_2 + rax_8 + 0x20)
        arg5[0].o = *(rdx_2 + rax_8 + 0x10)
        float temp0_3[0x4] = __mulps_xmmps_memps(temp0_2, *(rdx_2 + rax_8))
        float temp0_4[0x4] = _mm_mul_ps(zmm0, temp0_2)
        arg5[0].o = _mm_mul_ps(arg5[0].o, temp0_2)
        *(rdx_2 + rcx_4 + 0x20) = temp0_4
        *(rdx_2 + rcx_4 + 0x10) = arg5[0].o
        *(rdx_2 + rcx_4) = temp0_3
        rdx_2 = &rdx_2[3]
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)

int32_t rax_9 = rdi[1].d

if (rax_9 s> 1)
    void* rdi_2 = &r13_1[1]
    uint64_t* rsi_2 = &rsi_1[3]
    uint64_t i_8 = zx.q(rax_9 - 1)
    uint64_t i_2
    
    do
        arg5 = sub_141ddd210(&result_1, (sx.q(*rdi_2) << 6) + r15_2, arg7, rsi_2)
        rsi_2 = &rsi_2[3]
        rdi_2 += 4
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)
    r12_1 = arg6

sub_141e451a0(arg7, arg5)
int128_t* rsi_3 = arg2

if (*(rsi_3 + 8) s> 0)
    int64_t rdi_3 = sx.q(r12_1[1].d)
    void* rdx_6 = nullptr
    void* var_68_1 = nullptr
    int32_t var_5c_1 = 0x10
    int32_t var_60_1 = rdi_3.d
    void var_a8
    
    if (rdi_3.d s> 0x10)
        sub_141deeff0(&var_a8, 0)
        rdx_6 = var_68_1
    
    int64_t r9_4 = 0
    
    if (rdi_3 s>= 4)
        void* r10_1 = &r13_1[2]
        int64_t i_5 = ((rdi_3 - 4) u>> 2) + 1
        r9_4 = i_5 << 2
        int64_t i_3
        
        do
            int64_t r8_2 = -8 - r13_1 + r10_1
            int64_t rax_11 = sx.q(*(r10_1 - 8)) << 6
            void* rcx_8 = &var_a8
            r10_1 += 0x10
            
            if (rdx_6 != 0)
                rcx_8 = rdx_6
            
            *(rcx_8 + r8_2) = *(rax_11 + r15_2 + 0x10)
            void* rcx_9 = &var_a8
            
            if (var_68_1 != 0)
                rcx_9 = var_68_1
            
            *(rcx_9 + r8_2 + 4) = *((sx.q(*(r10_1 - 0x14)) << 6) + r15_2 + 0x10)
            void* rcx_10 = &var_a8
            
            if (var_68_1 != 0)
                rcx_10 = var_68_1
            
            *(rcx_10 - r13_1 + r10_1 - 0x10) = *((sx.q(*(r10_1 - 0x10)) << 6) + r15_2 + 0x10)
            void* rcx_12 = &var_a8
            
            if (var_68_1 != 0)
                rcx_12 = var_68_1
            
            *(rcx_12 + 4 - r13_1 + r10_1 - 0x10) = *((sx.q(*(r10_1 - 0xc)) << 6) + r15_2 + 0x10)
            rdx_6 = var_68_1
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
        rsi_3 = arg2
    
    while (r9_4 s< rdi_3)
        void* rcx_14 = &var_a8
        
        if (rdx_6 != 0)
            rcx_14 = rdx_6
        
        *(rcx_14 + (r9_4 << 2)) = *((sx.q(r13_1[r9_4]) << 6) + r15_2 + 0x10)
        r9_4 += 1
        rdx_6 = var_68_1
    
    uint128_t zmm0_1 = *rsi_3
    void* rdi_6 = &var_a8
    int64_t* var_b8
    var_b8.o = zmm0_1
    
    if (rdx_6 != 0)
        rdi_6 = rdx_6
    
    int32_t rsi_5 = _mm_bsrli_si128(zmm0_1, 8).d
    
    if (rsi_5 s> 0)
        int512_t zmm2_1
        zmm2_1.o = *rdi_6
        sub_141deeaf0(arg8, var_b8)
        
        if (rsi_5 s> 1)
            void* r11_2 = rdi_6 + 4
            uint64_t i_6 = zx.q(rsi_5 - 1)
            void* r10_2 = &var_b8[4]
            uint64_t i_4
            
            do
                float zmm1 = *r11_2
                
                if (not(zmm1 <= 9.99999975e-06f))
                    int32_t j = 0
                    
                    if (arg8[1].d s> 0)
                        int64_t rdx_14 = *r10_2
                        float* rcx_16 = nullptr
                        
                        do
                            uint64_t r8_3 = *arg8
                            uint64_t rax_22
                            
                            if (*(rcx_16 + r8_3 + 4) != 0 || *(rcx_16 + rdx_14 + 4) != 0)
                                rax_22.b = 1
                            else
                                rax_22.b = 0
                            
                            *(rcx_16 + r8_3 + 4) = rax_22.b
                            rax_22 = *arg8
                            j += 1
                            rdx_14 = *r10_2
                            *(rcx_16 + rax_22) = zmm1 f* *(rcx_16 + rdx_14) f+ *(rcx_16 + rax_22)
                            rcx_16 = &rcx_16[2]
                        while (j s< arg8[1].d)
                
                r11_2 += 4
                r10_2 += 0x20
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)
        
        rdx_6 = var_68_1
    
    if (rdx_6 != 0)
        sub_140a74f90(rdx_6)

int32_t* result = result_1

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_108)
return result
