// 函数: sub_1403bfea0
// 地址: 0x1403bfea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
uint64_t result = __security_cookie ^ &var_68
uint64_t result_1 = result

if (arg3 u< 0xd)
    png_error(arg1, "ASCII conversion buffer too small")
    noreturn

void* rdx_1

if (arg4 s< 0)
    *arg2 = 0x2d
    arg2 = &arg2[1]
    arg4 = neg.d(arg4)
label_1403bfedb:
    int32_t i = 0x10
    arg1.b = 0x1c
    int32_t rdi_1 = 0
    uint64_t rbx_1 = 0
    char var_42[0xa]
    int32_t r10_1
    bool cond:1_1
    
    do
        int32_t i_2 = i
        r10_1 = arg1.d
        result = zx.q(arg4 u/ 0xa)
        int32_t rbp_2 = arg4 - (result * 2).d * 5
        uint64_t rcx_2 = zx.q(rbx_1.d)
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbp_2 != 0)
            i = rbx_1.d
        
        if (i_2 != 0x10)
            i = i_2
        
        var_42[rcx_2] = rbp_2.b + 0x30
        arg1 = zx.q(r10_1 + 1)
        rdi_1 -= 1
        cond:1_1 = arg4 u> 9
        arg4 = result.d
    while (cond:1_1)
    
    if (rdi_1 == 0)
        *arg2 = 0x30
        rdx_1 = &arg2[1]
    else
        char* r14_3
        
        if (rbx_1.d u< 6)
            r14_3 = arg2
            
            if (i u> 5)
                rdx_1 = r14_3
            else
            label_1403c00ae:
                *r14_3 = 0x2e
                rdx_1 = &r14_3[1]
                
                if (rbx_1.d u> 4)
                    while (rbx_1.d u>= i)
                    label_1403c0110:
                        rbx_1 = zx.q(rbx_1.d - 1)
                        result.b = var_42[rbx_1]
                        *rdx_1 = result.b
                        rdx_1 += 1
                else
                    void* rcx_12 = rdx_1
                    rdx_1.b = 0x30
                    result = memset(rcx_12, rdx_1.d, zx.q(4 - rbx_1.d) + 1)
                    void* r14_4
                    
                    if (rbx_1.d u>= 4)
                        r14_4 = &r14_3[2]
                    label_1403c0106:
                        rdx_1 = r14_4
                        
                        if (rbx_1.d u>= i)
                            goto label_1403c0110
                    else
                        if (rbx_1.d == 3)
                            r14_4 = &r14_3[3]
                            goto label_1403c0106
                        
                        if (rbx_1.d u> 1)
                            r14_4 = &r14_3[4]
                            goto label_1403c0106
                        
                        rdx_1 = &r14_3[5]
                        
                        if (rbx_1.d == 0)
                            rdx_1 = &r14_3[6]
                        
                        if (rbx_1.d u>= i)
                            goto label_1403c0110
        else
            result = zx.q(rbx_1.d)
            uint64_t rcx_3 = zx.q(0xfffffffa - rdi_1)
            
            if (rcx_3 + 1 u< 0x20)
                goto label_1403c0063
            
            int32_t rbx_3 = not.d(rdi_1)
            uint64_t r8 = zx.q(rbx_3)
            
            if (arg2 u< &var_68 + r8 + 0x27 && &var_68 + r8 - rcx_3 + 0x26 u< &arg2[rcx_3 + 1])
                goto label_1403c0063
            
            uint64_t r8_3 = zx.q(0x1b - rdi_1) & 0x1f
            void* r14_2 = rcx_3 + 1 - r8_3
            result -= r14_2
            r14_3 = r14_2 + arg2
            int64_t i_1 = 0
            
            do
                uint64_t rbp_8 = zx.q(rbx_3)
                void var_61
                int16_t zmm1[0x8] = *(&var_61 + rbp_8)
                void var_51
                int32_t zmm2[0x4] = *(&var_51 + rbp_8)
                int32_t zmm3[0x4] = _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi8(zmm2, 0), 0x4e), 0x1b), 
                    0x1b)
                zmm2 = _mm_packus_epi16(
                    _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpackhi_epi8(zmm2, 0), 0x4e), 
                            0x1b), 
                        0x1b), 
                    zmm3)
                zmm3 = _mm_shufflehi_epi16(
                    _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi8(zmm1, 0), 0x4e), 0x1b), 
                    0x1b)
                zmm1 = _mm_packus_epi16(
                    _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(_mm_shuffle_epi32(_mm_unpackhi_epi8(zmm1, 0), 0x4e), 
                            0x1b), 
                        0x1b), 
                    zmm3)
                *(arg2 + i_1) = zmm2
                *(arg2 + i_1 + 0x10) = zmm1
                i_1 += 0x20
                rbx_3 -= 0x20
            while (zx.q(0xfffffffa - rdi_1) + 1 - (zx.q(r10_1.b) & 0x1f) != i_1)
            
            if (r8_3.d != 0)
                arg2 = r14_3
            label_1403c0063:
                void* rcx_11 = zx.q((result - 1).d) + &var_68 + 0x26
                r14_3 = arg2
                
                do
                    *r14_3 = *rcx_11
                    r14_3 = &r14_3[1]
                    result = zx.q(result.d - 1)
                    rcx_11 -= 1
                while (result.d u> 5)
            
            rbx_1 = 5
            
            if (i u<= 5)
                goto label_1403c00ae
            
            rdx_1 = r14_3
else
    if (arg4 != 0)
        goto label_1403bfedb
    
    *arg2 = 0x30
    rdx_1 = &arg2[1]

*rdx_1 = 0
__security_check_cookie(result_1 ^ &var_68)
return result
