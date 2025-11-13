// 函数: sub_141de3fa0
// 地址: 0x141de3fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rdi = arg1
int64_t* r15 = arg4
int32_t i_9 = arg6[1].d
int64_t* r13 = arg6[2]
int32_t* var_c8 = nullptr
int32_t var_bc = 0

if (i_9 s> 0)
    sub_1405a4cf0(&var_c8)
    
    if (i_9 s> 0)
        void* rdi_1 = nullptr
        uint64_t i_7 = zx.q(i_9)
        int32_t* rsi_1 = var_c8
        uint64_t i
        
        do
            int64_t r9 = *arg3
            *rsi_1 = (*r9)(arg3, zx.q(*(rdi_1 + *r13)), arg6[2], r9, arg1)
            rsi_1 = &rsi_1[1]
            rdi_1 += 2
            i = i_7
            i_7 -= 1
        while (i != 1)
        rdi = arg1
        r15 = arg4

void* r13_1 = *r15
int32_t zmm4 = (zx.o(0)).d
int64_t* rsi_2 = *rdi
float zmm0[0x4] = *(r13_1 + 0x10)

if (not(zmm0[0] < 0f))
    zmm4 = __minss_xmmss_memss(zmm0[0], 0x3f800000)

int32_t i_10 = rsi_2[1].d
int32_t* r12_1 = var_c8

if (i_10 != 0)
    float (* rdx_2)[0x4] = nullptr
    int32_t* r8_1 = r12_1
    uint64_t i_6 = zx.q(i_10)
    uint64_t i_1
    
    do
        int64_t rax_5 = sx.q(*r8_1)
        int64_t rax_7
        float zmm2[0x4]
        float zmm3[0x4]
        int64_t* var_d8
        
        if (rax_5.d s< 0 || rax_5.d s>= *(r13_1 + 0x38))
            rax_7 = *rsi_2
            var_d8.d = zmm4
            zmm2 = var_d8.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = __mulps_xmmps_memps(zmm2, *(rdx_2 + rax_7))
        else
            rax_7 = *rsi_2
            var_d8.d = (*(*(r13_1 + 0x30) + (rax_5 << 2)))[0]
            zmm2 = var_d8.d
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = _mm_mul_ps(*(rdx_2 + rax_7), zmm2)
        r8_1 = &r8_1[1]
        arg5[0].o = *(rdx_2 + rax_7 + 0x10)
        int64_t rcx_4 = *arg6
        float temp0_6[0x4] = _mm_mul_ps(*(rdx_2 + rax_7 + 0x20), zmm2)
        arg5[0].o = _mm_mul_ps(arg5[0].o, zmm2)
        *(rdx_2 + rcx_4 + 0x20) = temp0_6
        *(rdx_2 + rcx_4 + 0x10) = arg5[0].o
        *(rdx_2 + rcx_4) = zmm3
        rdx_2 = &rdx_2[3]
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

int32_t rax_8 = rdi[1].d

if (rax_8 s> 1)
    void* rdi_2 = r13_1 + 0x40
    uint64_t* rsi_3 = &rsi_2[3]
    uint64_t i_8 = zx.q(rax_8 - 1)
    uint64_t i_2
    
    do
        arg5 = sub_141ddd210(&var_c8, rdi_2, arg6, rsi_3)
        rsi_3 = &rsi_3[3]
        rdi_2 += 0x40
        i_2 = i_8
        i_8 -= 1
    while (i_2 != 1)
    r15 = arg4

uint64_t result
int512_t zmm2_1
result, zmm2_1 = sub_141e451a0(arg6, arg5)

if (*(arg2 + 8) s> 0)
    int64_t rdi_3 = sx.q(r15[1].d)
    void* rdx_4 = nullptr
    void* var_68_1 = nullptr
    int32_t var_5c_1 = 0x10
    int32_t var_60_1 = rdi_3.d
    void var_a8
    
    if (rdi_3.d s> 0x10)
        result = sub_141deeff0(&var_a8, 0)
        rdx_4 = var_68_1
    
    int64_t i_3 = 0
    
    if (rdi_3 s>= 4)
        void* r9_2 = r13_1 + 0x50
        
        do
            int32_t rax_9 = *(r9_2 - 0x40)
            void* rcx_8 = &var_a8
            r9_2 += 0x100
            
            if (rdx_4 != 0)
                rcx_8 = rdx_4
            
            *(rcx_8 + (i_3 << 2)) = rax_9
            void* rcx_9 = &var_a8
            
            if (var_68_1 != 0)
                rcx_9 = var_68_1
            
            *(rcx_9 + (i_3 << 2) + 4) = *(r9_2 - 0x100)
            void* rcx_10 = &var_a8
            
            if (var_68_1 != 0)
                rcx_10 = var_68_1
            
            *(rcx_10 + (i_3 << 2) + 8) = *(r9_2 - 0xc0)
            void* rcx_11 = &var_a8
            
            if (var_68_1 != 0)
                rcx_11 = var_68_1
            
            result = zx.q(*(r9_2 - 0x80))
            *(rcx_11 + (i_3 << 2) + 0xc) = result.d
            i_3 += 4
            rdx_4 = var_68_1
        while (i_3 s< rdi_3 - 3)
    
    if (i_3 s< rdi_3)
        void* r9_4 = r13_1 + 0x10 + (i_3 << 6)
        
        do
            result = zx.q(*r9_4)
            void* rcx_12 = &var_a8
            r9_4 += 0x40
            
            if (rdx_4 != 0)
                rcx_12 = rdx_4
            
            *(rcx_12 + (i_3 << 2)) = result.d
            i_3 += 1
            rdx_4 = var_68_1
        while (i_3 s< rdi_3)
    
    uint128_t zmm0_1 = *arg2
    void* rdi_4 = &var_a8
    var_c8.o = zmm0_1
    
    if (rdx_4 != 0)
        rdi_4 = rdx_4
    
    int32_t rsi_5 = _mm_bsrli_si128(zmm0_1, 8).d
    
    if (rsi_5 s> 0)
        int32_t* r14_1 = var_c8
        zmm2_1.o = *rdi_4
        result = sub_141deeaf0(arg7, r14_1)
        
        if (rsi_5 s> 1)
            result = zx.q(rsi_5 - 1)
            void* r11_2 = rdi_4 + 4
            uint64_t i_5 = zx.q(result.d)
            void* r10_1 = &r14_1[8]
            uint64_t i_4
            
            do
                float zmm1 = *r11_2
                
                if (not(zmm1 <= 9.99999975e-06f))
                    int32_t j = 0
                    
                    if (arg7[1].d s> 0)
                        float* rdx_6 = *r10_1
                        int64_t rcx_14 = 0
                        
                        do
                            int64_t r8_3 = *arg7
                            
                            if (*(r8_3 + rcx_14 + 4) != 0 || *(rcx_14 + rdx_6 + 4) != 0)
                                result.b = 1
                            else
                                result.b = 0
                            
                            *(r8_3 + rcx_14 + 4) = result.b
                            result = *arg7
                            j += 1
                            rdx_6 = *r10_1
                            *(result + rcx_14) = zmm1 f* *(rdx_6 + rcx_14) f+ *(result + rcx_14)
                            rcx_14 += 8
                        while (j s< arg7[1].d)
                
                r11_2 += 4
                r10_1 += 0x20
                i_4 = i_5
                i_5 -= 1
            while (i_4 != 1)
        
        rdx_4 = var_68_1
    
    if (rdx_4 != 0)
        result = sub_140a74f90(rdx_4)

if (r12_1 != 0)
    result = sub_140a74f90(r12_1)

__security_check_cookie(rax_1 ^ &var_f8)
return result
