// 函数: sub_141ad8080
// 地址: 0x141ad8080
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
void var_248
void* rsp_1 = &var_248
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
float zmm6[0x4]
float var_38[0x4] = zmm6
int128_t zmm7
int128_t var_48 = zmm7
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t rdi = arg1
int64_t r15 = arg4
int64_t r14 = arg2
int64_t i_7 = arg7[4]
int64_t i_1 = arg1

if (arg7[2] s< arg1)
    rdi = arg7[2]

int64_t rdi_1 = rdi * i_7
int64_t rsi_1 = i_7 * arg2
int64_t i_9 = i_7

if (rdi_1 u> 0x3fffffffffffffff)
    j_sub_140a82f30(-1)

void* rax_6 = *arg7
int64_t _Size_1 = rdi_1 << 2
void* var_1d0 = rax_6

if (rax_6 == 0)
    if (_Size_1 u> 0x20000)
        rax_6 = malloc(_Size_1)
        var_1d0 = rax_6
        
        if (rax_6 == 0 && _Size_1 != 0)
            j_sub_140a82f30(rax_6 - 1)
            rax_6 = var_1d0
    else
        int64_t rcx = _Size_1 + 0x1e
        
        if (rcx u<= _Size_1 + 0xf)
            rcx = 0xffffffffffffff0
        
        int64_t rcx_1 = rcx & 0xfffffffffffffff0
        __chkstk(rcx_1)
        rsp_1 = &var_248 - rcx_1
        rax_6 = (rsp_1 + 0x6f) & 0xfffffffffffffff0
        var_1d0 = rax_6

void* rdx = nullptr

if (*arg7 == 0)
    rdx = rax_6

if (rsi_1 u> 0x3fffffffffffffff)
    j_sub_140a82f30(-1)

void* r11_2 = arg7[1]
int64_t _Size = rsi_1 << 2
void* var_1d8 = r11_2
void* rax_7
int64_t r10

if (r11_2 != 0)
    rax_7 = r11_2
    r10 = 0
else if (_Size u> 0x20000)
    void* rax_10 = malloc(_Size)
    var_1d8 = rax_10
    r11_2 = rax_10
    
    if (rax_10 == 0 && _Size != 0)
        j_sub_140a82f30(rax_10 - 1)
        r11_2 = var_1d8
    
    rax_7 = arg7[1]
    r10 = 0
else
    int64_t rcx_4 = _Size + 0x1e
    
    if (rcx_4 u<= _Size + 0xf)
        rcx_4 = 0xffffffffffffff0
    
    int64_t rcx_5 = rcx_4 & 0xfffffffffffffff0
    __chkstk(rcx_5)
    rsp_1 -= rcx_5
    r11_2 = (rsp_1 + 0x6f) & 0xfffffffffffffff0
    r10 = 0
    var_1d8 = r11_2
    rax_7 = nullptr

void* rbx_1 = nullptr

if (rax_7 == 0)
    rbx_1 = r11_2

TEB* gsbase

if (data_143cecb88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecb88)
    
    if (data_143cecb88 == 0xffffffff)
        sub_14090c820(&data_143cecb70)
        _Init_thread_footer(&data_143cecb88)
    
    r11_2 = var_1d8
    r10 = 0

int64_t i_6 = arg6
int64_t i = i_1
uint64_t rax_14

if (r14 s<= 0)
    rax_14 = 0
else
    int64_t i_2 = i_6
    
    if (i_6 s< i)
        i_2 = i
    
    rax_14 = divu.dp.q(0:data_143cecb78, i_2 << 4)

int64_t rax_15
int32_t rdx_3
rdx_3:rax_15 = sx.o(rax_14)
int64_t result_2 = 4
int64_t result = (rax_15 + (zx.q(rdx_3) & 3)) & 0xfffffffffffffffc

if (result s>= 4)
    result_2 = result

int64_t result_3 = result_2

if (i s> 0)
    zmm6 = 0x3f800000
    void* rsi_2 = (i << 2) + -fffffffffffffffc
    zmm7 = 0xbf800000
    int64_t rax_18 = i_7 * r15
    void* var_188_1 = rsi_2
    int64_t rax_20 = i - i_7
    int64_t rcx_14 = (i - rax_20 - 1) * r15
    int64_t r9_1 = rax_20 * r15
    result = neg.q(i_7)
    int64_t result_1 = result
    int64_t var_1a8_1 = r9_1
    
    do
        int64_t i_3 = i
        int64_t rbx_2 = 0
        
        if (i_7 s< i)
            i_3 = i_7
        
        int64_t var_1c0_1 = 0
        int64_t i_4 = i_3
        
        if (r14 s> 0)
            int64_t var_1c8_1 = 0
            int64_t rax_23 = result_2 * i_6
            int64_t rcx_15 = r14
            int64_t rax_26 = (result_2 * i_3) << 2
            void* rax_27 = r11_2
            void* var_1b8_1 = rax_27
            
            do
                int64_t r11_3 = result_2
                
                if (result_2 s>= rcx_15)
                    r11_3 = rcx_15
                
                int64_t r12 = 0
                int64_t var_1a0_1 = r11_3
                int64_t var_150_1 = 0
                
                if (i_3 s> 0)
                    int64_t i_10 = i_6
                    int64_t i_5 = i_3
                    int64_t rcx_18 = neg.q(r15) << 3
                    void* rdx_5 = rsi_2
                    int64_t rcx_20 = rcx_14 + r9_1
                    int64_t i_8 = i_5
                    int64_t var_148_1 = rcx_20
                    void* var_140_1 = rdx_5
                    
                    do
                        int64_t j_3
                        int64_t var_158_1
                        
                        if (i_5 s<= 8)
                            var_158_1 = i_5
                            j_3 = i_5
                            
                            if (i_5 s> 0)
                                goto label_141ad844d
                        else
                            j_3 = 8
                            var_158_1 = 8
                        label_141ad844d:
                            int64_t r13 = rcx_20
                            int64_t var_168_1 = rcx_20
                            int64_t rax_28 = r11_3 + rbx_2
                            int64_t r9_2 = j_3 - 1
                            void* rsi_3 = (r9_2 << 2) + -fffffffffffffffc
                            int32_t* rcx_23 = (r15 + 1) * rdx_5 + arg3
                            int32_t* var_170_1 = rcx_23
                            int64_t rax_30 = (-1 - r15) << 2
                            int64_t r8_2 = i - j_3 - r12
                            int64_t rdx_10 = rax_30
                            int64_t j_1 = j_3
                            int64_t var_100_1 = r8_2
                            int64_t r14_1 = r11_3 + rbx_2
                            int64_t j_2 = j_1
                            int64_t j
                            
                            do
                                int64_t r15_1 = r8_2 + r9_2
                                zmm6[0] = zmm6[0] f/ *rcx_23
                                int64_t rdi_3 = r15_1 - r9_2
                                
                                if (rbx_2 s< r14_1)
                                    int64_t k_1 = r11_3
                                    int64_t rbx_3 = arg3 + ((rdi_3 + r13) << 2)
                                    void* r10_1 = arg5 + ((r10 + rdi_3) << 2)
                                    int64_t k
                                    
                                    do
                                        void* rcx_26 = r10_1 + (r9_2 << 2)
                                        zmm6[0] = zmm6[0] f* *rcx_26
                                        int64_t r8_3 = 0
                                        *rcx_26 = zmm6[0]
                                        float zmm2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                                        
                                        if (r9_2 s> 0)
                                            float zmm0[0x4]
                                            
                                            if (r9_2 u>= 0x10 && (r10_1 u> rsi_3 + rbx_3
                                                    || r10_1 + rsi_3 u< rbx_3))
                                                int32_t rax_36
                                                int32_t rdx_12
                                                rdx_12:rax_36 = sx.o(r9_2)
                                                uint64_t rdx_13 = zx.q(rdx_12) & 0xf
                                                void* r11_5 = rcx_26 + ((rdi_3 - r15_1 + 4) << 2)
                                                void* rax_41 = rbx_3 - r10_1
                                                
                                                do
                                                    r8_3 += 0x10
                                                    zmm0 = _mm_sub_ps(*(r11_5 - 0x10), 
                                                        _mm_mul_ps(*(rax_41 + r11_5 - 0x10), zmm2))
                                                    float zmm1[0x4] =
                                                        _mm_mul_ps(*(rax_41 + r11_5), zmm2)
                                                    *(r11_5 - 0x10) = zmm0
                                                    zmm0 = _mm_sub_ps(*r11_5, zmm1)
                                                    zmm1 =
                                                        _mm_mul_ps(*(rax_41 + r11_5 + 0x10), zmm2)
                                                    *r11_5 = zmm0
                                                    zmm0 = _mm_sub_ps(*(r11_5 + 0x10), zmm1)
                                                    zmm1 =
                                                        _mm_mul_ps(*(rax_41 + r11_5 + 0x20), zmm2)
                                                    *(r11_5 + 0x10) = zmm0
                                                    *(r11_5 + 0x20) =
                                                        _mm_sub_ps(*(r11_5 + 0x20), zmm1)
                                                    r11_5 += 0x40
                                                while (r8_3 s< r9_2
                                                    - ((zx.q(rax_36 + rdx_13.d) & 0xf) - rdx_13))
                                            
                                            if (r8_3 s< r9_2)
                                                if (r9_2 - r8_3 s>= 4)
                                                    void* rcx_28 = r10_1 + ((r8_3 + 1) << 2)
                                                    void* r11_7 = rbx_3 - r10_1
                                                    int64_t rdx_19 = ((j_3 - i - 3 + r12 - 1 + r15_1
                                                        - r8_3) u>> 2) + 1
                                                    r8_3 += rdx_19 << 2
                                                    int64_t temp5_1
                                                    
                                                    do
                                                        zmm0 = *(rcx_28 - 4)
                                                        zmm6[0] = zmm6[0] f* *(r11_7 + rcx_28 - 4)
                                                        zmm0[0] = zmm0[0] - zmm6[0]
                                                        *(rcx_28 - 4) = zmm0[0]
                                                        zmm6[0] = zmm6[0] f* *(r11_7 + rcx_28)
                                                        zmm0 = *rcx_28
                                                        zmm0[0] = zmm0[0] - zmm6[0]
                                                        *rcx_28 = zmm0[0]
                                                        zmm6[0] = zmm6[0] f* *(r11_7 + rcx_28 + 4)
                                                        zmm0 = *(rcx_28 + 4)
                                                        zmm0[0] = zmm0[0] - zmm6[0]
                                                        *(rcx_28 + 4) = zmm0[0]
                                                        zmm6[0] = zmm6[0] f* *(r11_7 + rcx_28 + 8)
                                                        zmm0 = *(rcx_28 + 8)
                                                        zmm0[0] = zmm0[0] - zmm6[0]
                                                        *(rcx_28 + 8) = zmm0[0]
                                                        rcx_28 += 0x10
                                                        temp5_1 = rdx_19
                                                        rdx_19 -= 1
                                                    while (temp5_1 != 1)
                                                
                                                if (r8_3 s< r9_2)
                                                    void* rax_46 = r10_1 + (r8_3 << 2)
                                                    int64_t rcx_30 = r9_2 - r8_3
                                                    int64_t temp6_1
                                                    
                                                    do
                                                        zmm0 = *rax_46
                                                        zmm6[0] =
                                                            zmm6[0] f* *(rbx_3 - r10_1 + rax_46)
                                                        zmm0[0] = zmm0[0] - zmm6[0]
                                                        *rax_46 = zmm0[0]
                                                        rax_46 += 4
                                                        temp6_1 = rcx_30
                                                        rcx_30 -= 1
                                                    while (temp6_1 != 1)
                                        
                                        r10_1 += arg6 << 2
                                        k = k_1
                                        k_1 -= 1
                                    while (k != 1)
                                    r13 = var_168_1
                                    rcx_23 = var_170_1
                                    j_1 = j_2
                                    rdx_10 = rax_30
                                    r8_2 = var_100_1
                                    r11_3 = var_1a0_1
                                    r10 = var_1c8_1
                                    rbx_2 = var_1c0_1
                                    r14_1 = rax_28
                                
                                r15 = arg4
                                rcx_23 += rdx_10
                                r13 -= r15
                                var_170_1 = rcx_23
                                r9_2 -= 1
                                var_168_1 = r13
                                rsi_3 -= 4
                                j = j_1
                                j_1 -= 1
                                j_2 = j_1
                            while (j != 1)
                            j_3 = var_158_1
                            r12 = var_150_1
                            i_3 = i_4
                        int64_t rdi_6 = neg.q(j_3)
                        int64_t rdi_8 = rdi_6 - r12 + i_1
                        int64_t rsi_6 = rdi_6 - r12 + i_3
                        *(rsp_1 + 0x30) = rsi_6
                        *(rsp_1 + 0x28) = i_3
                        *(rsp_1 + 0x20) = r11_3
                        int64_t var_a8 = arg5 + ((r10 + rdi_8) << 2)
                        sub_141a93660(&var_1e8, var_1b8_1, &var_a8, j_3)
                        
                        if (rsi_6 s> 0)
                            int64_t rbx_5 = i_1 - i_3
                            int64_t var_90_1 = r15
                            int64_t var_98 = arg3 + ((rdi_8 * r15 + rbx_5) << 2)
                            *(rsp_1 + 0x30) = 0
                            *(rsp_1 + 0x28) = 0
                            *(rsp_1 + 0x20) = rsi_6
                            sub_141a93490(&var_1e8, var_1d0, &var_98, j_3)
                            *(rsp_1 + 0x58) = rsi_6
                            *(rsp_1 + 0x50) = 0
                            *(rsp_1 + 0x48) = i_3
                            *(rsp_1 + 0x40) = j_3
                            *(rsp_1 + 0x38) = zmm7.d
                            int64_t var_80_1 = arg6
                            *(rsp_1 + 0x30) = var_1a0_1
                            int64_t var_88 = arg5 + ((var_1c8_1 + rbx_5) << 2)
                            *(rsp_1 + 0x28) = j_3
                            *(rsp_1 + 0x20) = rsi_6
                            zmm6, zmm7 = sub_141a92050(&var_1e8, &var_88, var_1d0, var_1b8_1)
                        
                        r12 += 8
                        rdx_5 = var_140_1 - 0x20
                        rcx_20 = var_148_1 + rcx_18
                        i_5 = i_8 - 8
                        r11_3 = var_1a0_1
                        r10 = var_1c8_1
                        rbx_2 = var_1c0_1
                        i = i_1
                        var_150_1 = r12
                        var_148_1 = rcx_20
                        var_140_1 = rdx_5
                        i_8 = i_5
                    while (r12 s< i_3)
                    
                    i_6 = arg6
                    rax_27 = var_1b8_1
                    result_2 = result_3
                    r14 = arg2
                    r9_1 = var_1a8_1
                    rsi_2 = var_188_1
                
                r10 += rax_23
                rbx_2 += result_2
                rax_27 += rax_26
                rcx_15 -= result_2
                var_1c0_1 = rbx_2
                var_1c8_1 = r10
                var_1b8_1 = rax_27
            while (rbx_2 s< r14)
            
            i_7 = i_9
            r10 = 0
            result = result_1
        
        int64_t r15_2 = result + i
        int64_t rsi_7 = 0
        
        if (r15_2 s> 0)
            int64_t rax_55 = rdi
            int64_t rbx_6 = r15_2
            int64_t r14_2 = arg5
            int64_t r12_2 = rax_55 << 2
            
            do
                int64_t rdi_11 = rbx_6
                
                if (rbx_6 s>= rax_55)
                    rdi_11 = rax_55
                
                if (rdi_11 s> 0)
                    *(rsp_1 + 0x30) = 0
                    *(rsp_1 + 0x28) = 0
                    int64_t var_78 = arg3 + ((r9_1 + rsi_7) << 2)
                    int64_t var_70_1 = arg4
                    *(rsp_1 + 0x20) = rdi_11
                    sub_141a93490(&var_1e8, var_1d0, &var_78, i_4)
                    int64_t var_60_1 = arg6
                    *(rsp_1 + 0x58) = 0
                    *(rsp_1 + 0x50) = 0
                    *(rsp_1 + 0x48) = -1
                    *(rsp_1 + 0x40) = -1
                    *(rsp_1 + 0x38) = zmm7.d
                    *(rsp_1 + 0x30) = arg2
                    *(rsp_1 + 0x28) = i_4
                    *(rsp_1 + 0x20) = rdi_11
                    int64_t var_68 = r14_2
                    zmm6, zmm7 = sub_141a92050(&var_1e8, &var_68, var_1d0, var_1d8)
                    rax_55 = rdi
                    r10 = 0
                
                r9_1 = var_1a8_1
                rsi_7 += rax_55
                rbx_6 -= rax_55
                r14_2 += r12_2
            while (rsi_7 s< r15_2)
            
            i = i_1
            result_2 = result_3
            r14 = arg2
            i_7 = i_9
            result = result_1
        
        r9_1 -= rax_18
        rsi_2 = var_188_1 - (i_7 << 2)
        r15 = arg4
        i -= i_7
        i_6 = arg6
        r11_2 = var_1d8
        i_1 = i
        var_1a8_1 = r9_1
        var_188_1 = rsi_2
    while (i s> 0)

if (_Size u> 0x20000)
    result = free(rbx_1)

if (_Size_1 u> 0x20000)
    result = free(rdx)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
