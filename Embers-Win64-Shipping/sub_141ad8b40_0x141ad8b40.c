// 函数: sub_141ad8b40
// 地址: 0x141ad8b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_228
void* rsp_1 = &var_228
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int128_t zmm6
int128_t var_38 = zmm6
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t rdi = arg1
int64_t r12 = arg4
int64_t i_9 = arg7[4]
int64_t r14 = arg2
int64_t i_13 = arg1

if (arg7[2] s< arg1)
    rdi = arg7[2]

int64_t rdi_1 = rdi * i_9
int64_t rsi_1 = arg2 * i_9

if (rdi_1 u> 0x3fffffffffffffff)
    j_sub_140a82f30(-1)

void* rax_6 = *arg7
int64_t _Size = rdi_1 << 2
void* var_1c0 = rax_6

if (rax_6 == 0)
    if (_Size u> 0x20000)
        rax_6 = malloc(_Size)
        var_1c0 = rax_6
        
        if (rax_6 == 0 && _Size != 0)
            j_sub_140a82f30(rax_6 - 1)
            rax_6 = var_1c0
    else
        int64_t rcx = _Size + 0x1e
        
        if (rcx u<= _Size + 0xf)
            rcx = 0xffffffffffffff0
        
        int64_t rcx_1 = rcx & 0xfffffffffffffff0
        __chkstk(rcx_1)
        rsp_1 = &var_228 - rcx_1
        rax_6 = (rsp_1 + 0x6f) & 0xfffffffffffffff0
        var_1c0 = rax_6

void* rdx = nullptr

if (*arg7 == 0)
    rdx = rax_6

if (rsi_1 u> 0x3fffffffffffffff)
    j_sub_140a82f30(-1)

void* rax_9 = arg7[1]
int64_t _Size_1 = rsi_1 << 2
void* var_1a0 = rax_9
void* rsi_2 = rax_9

if (rax_9 == 0)
    if (_Size_1 u> 0x20000)
        void* rax_10 = malloc(_Size_1)
        var_1a0 = rax_10
        rsi_2 = rax_10
        
        if (rax_10 == 0 && _Size_1 != 0)
            j_sub_140a82f30(rax_10 - 1)
        
        rax_9 = arg7[1]
    else
        int64_t rcx_4 = _Size_1 + 0x1e
        
        if (rcx_4 u<= _Size_1 + 0xf)
            rcx_4 = 0xffffffffffffff0
        
        int64_t rcx_5 = rcx_4 & 0xfffffffffffffff0
        __chkstk(rcx_5)
        rsp_1 -= rcx_5
        rsi_2 = (rsp_1 + 0x6f) & 0xfffffffffffffff0
        var_1a0 = rsi_2
        rax_9 = nullptr

void* rcx_8 = nullptr

if (rax_9 == 0)
    rcx_8 = rsi_2

TEB* gsbase

if (data_143cecb88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecb88)
    
    if (data_143cecb88 == 0xffffffff)
        sub_14090c820(&data_143cecb70)
        _Init_thread_footer(&data_143cecb88)

int64_t i_16 = arg6
uint64_t rax_14

if (r14 s<= 0)
    rax_14 = 0
else
    int64_t i_14 = i_16
    
    if (i_16 s< i_13)
        i_14 = i_13
    
    rax_14 = divu.dp.q(0:data_143cecb78, i_14 << 4)

int64_t rax_15
int32_t rdx_3
rdx_3:rax_15 = sx.o(rax_14)
int64_t result_1 = 4
int64_t result = (rax_15 + (zx.q(rdx_3) & 3)) & 0xfffffffffffffffc

if (result s>= 4)
    result_1 = result

int64_t result_2 = result_1

if (i_13 s> 0)
    int64_t rdi_2 = arg5
    int64_t rdx_5 = 0
    zmm6 = 0xbf800000
    int64_t rax_18 = r12 * i_9
    int64_t var_1a8_1 = 0
    int64_t rcx_13 = neg.q(i_9)
    int64_t rax_19 = i_9 << 2
    int64_t i_10 = i_9
    int64_t i_12 = i_9
    int64_t var_150_1 = rcx_13
    int64_t var_180_1 = rdi_2
    int64_t r10_1 = rdi_2
    int64_t i_8 = i_13
    int64_t i_11 = i_13
    
    do
        int64_t i_6 = i_8
        
        if (i_9 s< i_8)
            i_6 = i_9
        
        int64_t rax_21 = 0
        int64_t i_7 = i_6
        int64_t var_198_1 = 0
        
        if (r14 s> 0)
            int64_t r10_2 = 0
            int64_t rdx_7 = result_1 * i_16
            int64_t var_1b8_1 = 0
            int64_t r8 = r14
            int64_t r14_1 = var_180_1
            int64_t rcx_16 = (result_1 * i_6) << 2
            void* rdx_8 = rsi_2
            void* var_190_1 = rdx_8
            int64_t var_120_1 = r14_1
            
            do
                int64_t rcx_18 = result_1
                
                if (result_1 s>= r8)
                    rcx_18 = r8
                
                int64_t r15 = 0
                int64_t var_160_1 = rcx_18
                int64_t var_130_1 = 0
                
                if (i_6 s> 0)
                    int64_t r8_1 = var_1a8_1
                    int64_t rdx_9 = r14_1
                    int64_t var_168_1 = r8_1
                    int64_t i_4 = i_6
                    int64_t var_170_1 = rdx_9
                    int64_t i_17 = i_16
                    int64_t i_5 = i_6
                    
                    do
                        int64_t i_2
                        int64_t i_3
                        
                        if (i_4 s<= 8)
                            i_3 = i_4
                            i_2 = i_4
                            
                            if (i_4 s> 0)
                                goto label_141ad8eff
                        else
                            i_2 = 8
                            i_3 = 8
                        label_141ad8eff:
                            int64_t rdx_10 = rcx_18 + rax_21
                            int64_t var_f0_1 = rdx_10
                            int64_t r12_1 = r8_1
                            int64_t r9 = i_2 - 1
                            int64_t r8_2 = arg4
                            int64_t rsi_7 = 1 - i_9 + i_12 + r15
                            int64_t i_1 = i_2
                            int64_t i
                            
                            do
                                if (rax_21 s< rdx_10)
                                    int64_t j_1 = rcx_18
                                    int64_t r11 = arg3 + ((rsi_7 + r12_1) << 2)
                                    int64_t r10_3 = rdi_2 + ((rsi_7 + r10_2) << 2)
                                    int64_t j
                                    
                                    do
                                        float zmm3[0x4] = *(r10_3 + (-1 << 2))
                                        int64_t k = 0
                                        float zmm2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                                        
                                        if (r9 s> 0)
                                            float zmm0[0x4]
                                            
                                            if (r9 u>= 0x10 && (r10_3 u> r11 + ((r9 - 1) << 2)
                                                    || r10_3 + ((r9 - 1) << 2) u< r11))
                                                int32_t rax_27
                                                int32_t rdx_14
                                                rdx_14:rax_27 = sx.o(r9)
                                                uint64_t rdx_15 = zx.q(rdx_14) & 0xf
                                                void* rcx_21 =
                                                    r10_3 + (-1 << 2) + ((0 + 1) << 2) + 0x10
                                                int64_t rax_32 = r11 - r10_3
                                                
                                                do
                                                    k += 0x10
                                                    zmm0 = _mm_sub_ps(*(rcx_21 - 0x10), 
                                                        _mm_mul_ps(*(rcx_21 + rax_32 - 0x10), zmm2))
                                                    float zmm1[0x4] =
                                                        _mm_mul_ps(*(rcx_21 + rax_32), zmm2)
                                                    *(rcx_21 - 0x10) = zmm0
                                                    zmm0 = _mm_sub_ps(*rcx_21, zmm1)
                                                    zmm1 =
                                                        _mm_mul_ps(*(rcx_21 + rax_32 + 0x10), zmm2)
                                                    *rcx_21 = zmm0
                                                    zmm0 = _mm_sub_ps(*(rcx_21 + 0x10), zmm1)
                                                    zmm1 =
                                                        _mm_mul_ps(*(rcx_21 + rax_32 + 0x20), zmm2)
                                                    *(rcx_21 + 0x10) = zmm0
                                                    *(rcx_21 + 0x20) =
                                                        _mm_sub_ps(*(rcx_21 + 0x20), zmm1)
                                                    rcx_21 += 0x40
                                                while (k s< r9
                                                    - ((zx.q(rax_27 + rdx_15.d) & 0xf) - rdx_15))
                                            
                                            if (k s< r9)
                                                if (r9 - k s>= 4)
                                                    void* rax_36 = r10_3 + ((k + 1) << 2)
                                                    int32_t* rdx_19 = r11 - r10_3
                                                    int64_t k_3 = ((r9 - k - 4) u>> 2) + 1
                                                    k += k_3 << 2
                                                    int64_t k_1
                                                    
                                                    do
                                                        zmm0 = *(rax_36 - 4)
                                                        zmm3[0] = zmm3[0] f* *(rdx_19 + rax_36 - 4)
                                                        zmm0[0] = zmm0[0] - zmm3[0]
                                                        *(rax_36 - 4) = zmm0[0]
                                                        zmm3[0] = zmm3[0] f* *(rdx_19 + rax_36)
                                                        zmm0 = *rax_36
                                                        zmm0[0] = zmm0[0] - zmm3[0]
                                                        *rax_36 = zmm0[0]
                                                        zmm3[0] = zmm3[0] f* *(rdx_19 + rax_36 + 4)
                                                        zmm0 = *(rax_36 + 4)
                                                        zmm0[0] = zmm0[0] - zmm3[0]
                                                        *(rax_36 + 4) = zmm0[0]
                                                        zmm3[0] = zmm3[0] f* *(rdx_19 + rax_36 + 8)
                                                        zmm0 = *(rax_36 + 8)
                                                        zmm0[0] = zmm0[0] - zmm3[0]
                                                        *(rax_36 + 8) = zmm0[0]
                                                        rax_36 += 0x10
                                                        k_1 = k_3
                                                        k_3 -= 1
                                                    while (k_1 != 1)
                                                
                                                if (k s< r9)
                                                    float* rax_37 = r10_3 + (k << 2)
                                                    int64_t k_4 = r9 - k
                                                    int64_t k_2
                                                    
                                                    do
                                                        zmm0 = *rax_37
                                                        zmm3[0] = zmm3[0] f* *(r11 - r10_3 + rax_37)
                                                        zmm0[0] = zmm0[0] - zmm3[0]
                                                        *rax_37 = zmm0[0]
                                                        rax_37 = &rax_37[1]
                                                        k_2 = k_4
                                                        k_4 -= 1
                                                    while (k_2 != 1)
                                        
                                        r10_3 += i_16 << 2
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                                    rcx_18 = var_160_1
                                    rax_21 = var_198_1
                                    rdx_10 = var_f0_1
                                    r8_2 = arg4
                                    r10_2 = var_1b8_1
                                    i_16 = arg6
                                    rdi_2 = arg5
                                
                                rsi_7 += 1
                                r12_1 += r8_2
                                r9 -= 1
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                            i_2 = i_3
                            r15 = var_130_1
                            i_4 = i_5
                            r12 = arg4
                            i_6 = i_7
                            rdx_9 = var_170_1
                        *(rsp_1 + 0x30) = r15
                        int64_t var_98 = rdx_9
                        *(rsp_1 + 0x28) = i_6
                        *(rsp_1 + 0x20) = rcx_18
                        int64_t rdi_7 = i_6 - i_2 - r15
                        sub_141a93660(&var_1c8, var_190_1, &var_98, i_2)
                        
                        if (rdi_7 s> 0)
                            int64_t rbx_4 = var_150_1 + i_10 + i_2 + r15
                            int64_t var_80_1 = r12
                            *(rsp_1 + 0x30) = 0
                            int64_t var_88 = arg3 + ((var_168_1 + rbx_4) << 2)
                            *(rsp_1 + 0x28) = 0
                            *(rsp_1 + 0x20) = rdi_7
                            sub_141a93490(&var_1c8, var_1c0, &var_88, i_2)
                            i_16 = arg6
                            *(rsp_1 + 0x58) = r15
                            *(rsp_1 + 0x50) = 0
                            *(rsp_1 + 0x48) = i_6
                            *(rsp_1 + 0x40) = i_2
                            *(rsp_1 + 0x38) = zmm6.d
                            *(rsp_1 + 0x30) = var_160_1
                            int64_t var_78 = arg5 + ((var_1b8_1 + rbx_4) << 2)
                            *(rsp_1 + 0x28) = i_2
                            *(rsp_1 + 0x20) = rdi_7
                            int64_t i_18 = i_16
                            zmm6 = sub_141a92050(&var_1c8, &var_78, var_1c0, var_190_1)
                        
                        rdx_9 = var_170_1 + 0x20
                        rcx_18 = var_160_1
                        r8_1 = var_168_1 + (r12 << 3)
                        rax_21 = var_198_1
                        r15 += 8
                        r10_2 = var_1b8_1
                        i_4 -= 8
                        rdi_2 = arg5
                        i_12 = i_10
                        var_130_1 = r15
                        i_5 = i_4
                        var_170_1 = rdx_9
                        var_168_1 = r8_1
                    while (r15 s< i_6)
                    
                    rdx_8 = var_190_1
                    result_1 = result_2
                    r14_1 = var_120_1
                
                r10_2 += rdx_7
                rax_21 += result_1
                r14_1 += rdx_7 << 2
                r8 -= result_1
                rdx_8 += rcx_16
                var_198_1 = rax_21
                var_1b8_1 = r10_2
                var_120_1 = r14_1
                var_190_1 = rdx_8
            while (rax_21 s< arg2)
            
            rcx_13 = var_150_1
            rdx_5 = var_1a8_1
            i_13 = arg1
            i_8 = i_11
            r10_1 = var_180_1
        
        int64_t i_15 = i_12
        
        if (i_12 s< i_13)
            int64_t rax_44 = rdi
            int64_t rbx_5 = rcx_13 + i_8
            int64_t rcx_34 = arg1
            int64_t r14_5 = rax_19 + r10_1
            int64_t r15_2 = rax_44 << 2
            
            do
                int64_t rdi_8 = rbx_5
                
                if (rbx_5 s>= rax_44)
                    rdi_8 = rax_44
                
                if (rdi_8 s> 0)
                    int64_t var_60_1 = r12
                    *(rsp_1 + 0x30) = 0
                    int64_t var_68 = arg3 + ((rdx_5 + i_15) << 2)
                    *(rsp_1 + 0x28) = 0
                    *(rsp_1 + 0x20) = rdi_8
                    sub_141a93490(&var_1c8, var_1c0, &var_68, i_6)
                    int64_t var_50_1 = arg6
                    *(rsp_1 + 0x58) = 0
                    *(rsp_1 + 0x50) = 0
                    *(rsp_1 + 0x48) = -1
                    *(rsp_1 + 0x40) = -1
                    *(rsp_1 + 0x38) = zmm6.d
                    *(rsp_1 + 0x30) = arg2
                    *(rsp_1 + 0x28) = i_6
                    *(rsp_1 + 0x20) = rdi_8
                    int64_t var_58 = r14_5
                    zmm6 = sub_141a92050(&var_1c8, &var_58, var_1c0, var_1a0)
                    rax_44 = rdi
                    rcx_34 = arg1
                
                rdx_5 = var_1a8_1
                i_15 += rax_44
                rbx_5 -= rax_44
                r14_5 += r15_2
            while (i_15 s< rcx_34)
            
            i_12 = i_10
            result_1 = result_2
            rcx_13 = var_150_1
            i_13 = arg1
            i_8 = i_11
            r10_1 = var_180_1
        
        i_12 += i_9
        i_8 += rcx_13
        r10_1 += rax_19
        rdx_5 += rax_18
        i_16 = arg6
        rdi_2 = arg5
        result = rcx_13 + i_12
        r14 = arg2
        rsi_2 = var_1a0
        i_11 = i_8
        var_180_1 = r10_1
        i_10 = i_12
        var_1a8_1 = rdx_5
    while (result s< i_13)

if (_Size_1 u> 0x20000)
    result = free(rcx_8)

if (_Size u> 0x20000)
    result = free(rdx)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
