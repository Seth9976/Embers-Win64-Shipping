// 函数: sub_1403d2660
// 地址: 0x1403d2660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm15[0x4]
int32_t var_58[0x4] = zmm15
int16_t zmm14[0x8]
int16_t var_68[0x8] = zmm14
int32_t zmm13[0x4]
int32_t var_78[0x4] = zmm13
uint128_t zmm12
uint128_t var_88 = zmm12
int32_t zmm11[0x4]
int32_t var_98[0x4] = zmm11
int32_t zmm10[0x4]
int32_t var_a8[0x4] = zmm10
int32_t var_b8[0x4] = arg9
int32_t var_c8[0x4] = arg8
uint128_t var_d8 = arg7
uint128_t var_e8 = arg6
uint32_t r9 = zx.d(*(arg1 + 0x25d))
uint64_t rax = zx.q(*(arg2 + 0x13))
uint64_t r11_1 = (rax + 7) u>> 3
void* r14 = *(arg2 + 8)
uint64_t result_4 = zx.q(*(arg1 + 0x3b1))
void* r12 = *(arg1 + 0x1f8)
void* r13 = *(arg1 + 0x200)
uint64_t r8 = 0x7fffffff
int16_t zmm1[0x8]
uint128_t zmm2
uint128_t zmm4
int32_t zmm5[0x4]

if (r9 != 8 && (r9 & 8) != 0)
    int32_t rcx
    
    if (r14 == 0)
        rcx = 0
        
        if (*(arg1 + 0x3b0) == 2)
        label_1403d29aa:
            uint32_t rax_6 = zx.d(rcx.w)
            uint32_t rcx_6 = rcx u>> 0xa & 0xffffffc0
            
            if (result_4.b != 0)
                char* rdx_2 = *(arg1 + 0x3b8)
                uint64_t rbx_3 = zx.q(result_4.d) & 1
                int64_t i
                
                if (result_4.b != 1)
                    i = 0
                    
                    do
                        if (rdx_2[i] == 0)
                            uint32_t rsi_2 = zx.d(*(*(arg1 + 0x3c0) + (i << 1)))
                            rax_6 = (rax_6 * rsi_2) u>> 8
                            rcx_6 = (rcx_6 * rsi_2) u>> 8
                            
                            if (rdx_2[i + 1] == 0)
                            label_1403d2a35:
                                uint32_t rsi_4 = zx.d(*(*(arg1 + 0x3c0) + (i << 1) + 2))
                                rax_6 = (rax_6 * rsi_4) u>> 8
                                rcx_6 = (rcx_6 * rsi_4) u>> 8
                        else if (rdx_2[i + 1] == 0)
                            goto label_1403d2a35
                        
                        i += 2
                    while (result_4 - rbx_3 != i)
                    
                    if (rbx_3 != 0)
                        goto label_1403d29da
                else
                    i = 0
                    
                    if (rbx_3 != 0)
                    label_1403d29da:
                        
                        if (rdx_2[i] == 0)
                            uint32_t rdx_4 = zx.d(*(*(arg1 + 0x3c0) + (i << 1)))
                            rax_6 = (rax_6 * rdx_4) u>> 8
                            rcx_6 = (rcx_6 * rdx_4) u>> 8
            
            arg2 = zx.q(**(arg1 + 0x3d0))
            int32_t rcx_10 = rcx_6 * arg2.d
            
            if (rcx_10 u<= 0x1fffe07)
                r8 = zx.q(((rax_6 * arg2.d) u>> 3) + ((rcx_10 & 0xfffffff8) << 7))
        else
            r8 = zx.q(rcx)
    else
        void* rax_4
        
        if (r14 u>= 8)
            rax_4 = r14 & 0xfffffffffffffff8
            uint64_t rbp_2 = zx.q((((rax_4 - 8) u>> 3) + 1).d) & 1
            int64_t rcx_4
            
            if (rax_4 == 8)
                arg5 = zx.o(0)
                rcx_4 = 0
                zmm1 = zx.o(0)
                
                if (rbp_2 != 0)
                label_1403d28d2:
                    zmm2 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rcx_4 + 1)), arg5[0].q), arg5[0].q)
                    arg4 = _mm_srai_epi32(_mm_slli_epi32(zmm2, 0x18), 0x18)
                    zmm4 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rcx_4 + 5)), arg5[0].q), arg5[0].q)
                    zmm5 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x18), 0x18)
                    arg6 = data_142ed6810
                    zmm2 &= arg6
                    zmm4 &= arg6
                    arg8 = _mm_cmpeq_epi32(arg8, arg8)
                    zmm5 = _mm_cmpgt_epi32(zmm5, arg8)
                    arg6 = data_14360a1d0
                    zmm1 = _mm_add_epi32(zmm1, 
                        (zmm5 & not.o(_mm_sub_epi32(arg6, zmm4))) | (zmm4 & zmm5))
                    arg4 = _mm_cmpgt_epi32(arg4, arg8)
                    arg4 = (arg4 & not.o(_mm_sub_epi32(arg6, zmm2))) | (zmm2 & arg4)
                    arg5 = _mm_add_epi32(arg5, arg4)
            else
                arg2 = 0 - ((rax_4 - 8) u>> 3) + rbp_2 - 1
                arg5 = zx.o(0)
                rcx_4 = 0
                arg8 = data_142ed6810
                arg9 = _mm_cmpeq_epi32(arg9, arg9)
                zmm10 = data_14360a1d0
                zmm1 = zx.o(0)
                void* i_1
                
                do
                    arg7 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rcx_4 + 1)), arg5[0].q), arg5[0].q)
                    zmm5 = _mm_srai_epi32(_mm_slli_epi32(arg7, 0x18), 0x18)
                    arg6 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rcx_4 + 5)), arg5[0].q), arg5[0].q)
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                    arg7 &= arg8
                    arg6 &= arg8
                    zmm5 = _mm_cmpgt_epi32(zmm5, arg9)
                    zmm2 = _mm_cmpgt_epi32(zmm2, arg9)
                    zmm4 = _mm_sub_epi32(zmm10, arg7)
                    arg4 = _mm_sub_epi32(zmm10, arg6)
                    zmm5 = _mm_add_epi32((zmm5 & not.o(zmm4)) | (arg7 & zmm5), arg5)
                    zmm2 = _mm_add_epi32((zmm2 & not.o(arg4)) | (arg6 & zmm2), zmm1)
                    arg7 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rcx_4 + 9)), arg5[0].q), arg5[0].q)
                    arg5 = _mm_srai_epi32(_mm_slli_epi32(arg7, 0x18), 0x18)
                    arg6 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rcx_4 + 0xd)), arg5[0].q), arg5[0].q)
                    zmm1 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                    arg7 &= arg8
                    arg6 &= arg8
                    arg5 = _mm_cmpgt_epi32(arg5, arg9)
                    zmm1 = _mm_cmpgt_epi32(zmm1, arg9)
                    arg4 = _mm_sub_epi32(zmm10, arg7)
                    zmm4 = _mm_sub_epi32(zmm10, arg6)
                    arg5 = _mm_add_epi32((arg5 & not.o(arg4)) | (arg7 & arg5), zmm5)
                    zmm1 = _mm_add_epi32((zmm1 & not.o(zmm4)) | (arg6 & zmm1), zmm2)
                    rcx_4 += 0x10
                    i_1 = arg2
                    arg2 += 2
                while (i_1 != -2)
                
                if (rbp_2 != 0)
                    goto label_1403d28d2
            arg5 = _mm_add_epi32(arg5, zmm1)
            zmm1 = _mm_add_epi32(_mm_shuffle_epi32(arg5, 0x4e), arg5)
            arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm1, 0xe5), zmm1)
            rcx = arg5[0]
            
            if (r14 != rax_4)
                arg2 = rax_4 + r13
                goto label_1403d297d
        else
            rcx = 0
            arg2 = r13
            rax_4 = nullptr
        label_1403d297d:
            int64_t i_2 = 0
            
            do
                uint32_t rbx_1 = zx.d(*(arg2 + i_2 + 1))
                uint32_t rdi_1 = 0x100 - rbx_1
                
                if (rbx_1.b s>= 0)
                    rdi_1 = rbx_1
                
                rcx += rdi_1
                i_2 += 1
            while (r14 - rax_4 != i_2)
        
        if (*(arg1 + 0x3b0) == 2)
            goto label_1403d29aa
        
        r8 = zx.q(rcx)

uint64_t var_148 = r11_1
uint64_t result_2 = result_4
uint32_t var_128 = r9
int32_t var_168
char* r14_1

if (r9.b == 0x10)
    void* rax_13 = r13 + 1
    int16_t (* rdx_6)[0x8] = *(arg1 + 0x208)
    char* rcx_13 = rdx_6 + 1
    var_168 = r8.d
    void* rdi_4
    
    if (r11_1.d == 0)
        rdi_4 = rax_13
    else if ((rax + 7).d u<= 0xff || (rcx_13 u< r11_1 + r13 + 1 && rax_13 u< rdx_6 + r11_1 + 1))
        r8 = 0
        rdi_4 = rax_13
    label_1403d2b0b:
        uint64_t rbp_11 = not.q(r8) + r11_1
        int64_t rbx_5 = r11_1 & 7
        
        if (rbx_5 != 0)
            int64_t i_3 = 0
            
            do
                *rcx_13 = *rdi_4
                rdi_4 += 1
                rcx_13 = &rcx_13[1]
                i_3 -= 1
            while (neg.q(rbx_5) != i_3)
            
            r8 -= i_3
        
        if (rbp_11 u>= 7)
            uint64_t i_35 = r11_1 - r8
            uint64_t i_4
            
            do
                *rcx_13 = *rdi_4
                rcx_13[1] = *(rdi_4 + 1)
                rcx_13[2] = *(rdi_4 + 2)
                rcx_13[3] = *(rdi_4 + 3)
                rcx_13[4] = *(rdi_4 + 4)
                rcx_13[5] = *(rdi_4 + 5)
                rcx_13[6] = *(rdi_4 + 6)
                rcx_13[7] = *(rdi_4 + 7)
                rdi_4 += 8
                rcx_13 = &rcx_13[8]
                i_4 = i_35
                i_35 -= 8
            while (i_4 != 8)
    else
        r8 = zx.q(r11_1.d) & 0xffffffe0
        uint64_t rbx_26 = zx.q((((r8 - 0x20) u>> 5) + 1).d) & 3
        int64_t rdi_12
        
        if (r8 - 0x20 u>= 0x60)
            int64_t i_44 = rbx_26 + 0 - ((r8 - 0x20) u>> 5) - 1
            rdi_12 = 0
            int64_t i_5
            
            do
                zmm1 = *(r13 + rdi_12 + 0x11)
                *(rdx_6 + rdi_12 + 1) = *(r13 + rdi_12 + 1)
                *(rdx_6 + rdi_12 + 0x11) = zmm1
                zmm1 = *(r13 + rdi_12 + 0x31)
                *(rdx_6 + rdi_12 + 0x21) = *(r13 + rdi_12 + 0x21)
                *(rdx_6 + rdi_12 + 0x31) = zmm1
                zmm1 = *(r13 + rdi_12 + 0x51)
                *(rdx_6 + rdi_12 + 0x41) = *(r13 + rdi_12 + 0x41)
                *(rdx_6 + rdi_12 + 0x51) = zmm1
                arg5 = *(r13 + rdi_12 + 0x61)
                zmm1 = *(r13 + rdi_12 + 0x71)
                *(rdx_6 + rdi_12 + 0x61) = arg5
                *(rdx_6 + rdi_12 + 0x71) = zmm1
                rdi_12 -= -0x80
                i_5 = i_44
                i_44 += 4
            while (i_5 != -4)
            
            if (rbx_26 != 0)
                goto label_1403d348b
        else
            rdi_12 = 0
            
            if (rbx_26 != 0)
            label_1403d348b:
                int64_t rdi_19 = rdi_12 + 0x11
                int64_t i_40 = neg.q(rbx_26)
                int64_t i_6
                
                do
                    arg5 = *(r13 + rdi_19 - 0x10)
                    zmm1 = *(r13 + rdi_19)
                    *(rdx_6 + rdi_19 - 0x10) = arg5
                    *(rdx_6 + rdi_19) = zmm1
                    rdi_19 += 0x20
                    i_6 = i_40
                    i_40 += 1
                while (i_6 != -1)
        rcx_13 = &rcx_13[r8]
        rdi_4 = rax_13 + r8
        
        if (r8 != r11_1)
            goto label_1403d2b0b
    
    arg2 = r14 - r11_1
    
    if (r14 u> r11_1)
        uint64_t r8_1
        
        if (arg2 u> 0x1f)
            uint64_t result_5 = result_4
            int64_t rbp_14 = rcx_13 + arg2
            r9.b = rcx_13 u< r14 + 1 - r11_1 + r13
            result_4.b = rax_13 u< rbp_14
            void* rbx_18
            rbx_18.b = rcx_13 u< rdi_4 + arg2
            r8.b = rdi_4 u< rbp_14
            
            if ((r9.b & result_4.b) == 0)
                rbx_18.b &= r8.b
            
            if ((r9.b & result_4.b) != 0 || rbx_18.b != 0)
                r8_1 = var_148
                result_4 = result_5
                r11_1 = var_148
                r9 = var_128
                goto label_1403d4222
            
            void* rbp_16 = arg2 & 0xffffffffffffffe0
            uint64_t r8_3 = zx.q((((rbp_16 - 0x20) u>> 5) + 1).d) & 1
            int64_t rbx_22
            
            if (rbp_16 == 0x20)
                rbx_22 = 0
                result_4 = result_5
                r9 = var_128
            else
                int64_t i_43 = 0 - ((rbp_16 - 0x20) u>> 5) + r8_3 - 1
                rbx_22 = 0
                result_4 = result_5
                r9 = var_128
                int64_t i_7
                
                do
                    zmm1 = *(rdi_4 + rbx_22 + 0x10)
                    arg5 = _mm_sub_epi8(*(rdi_4 + rbx_22), *(r13 + rbx_22 + 1))
                    zmm1 = _mm_sub_epi8(zmm1, *(r13 + rbx_22 + 0x11))
                    *(rcx_13 + rbx_22) = arg5
                    *(rcx_13 + rbx_22 + 0x10) = zmm1
                    zmm1 = *(rdi_4 + rbx_22 + 0x30)
                    arg5 = _mm_sub_epi8(*(rdi_4 + rbx_22 + 0x20), *(r13 + rbx_22 + 0x21))
                    zmm1 = _mm_sub_epi8(zmm1, *(r13 + rbx_22 + 0x31))
                    *(rcx_13 + rbx_22 + 0x20) = arg5
                    *(rcx_13 + rbx_22 + 0x30) = zmm1
                    rbx_22 += 0x40
                    i_7 = i_43
                    i_43 += 2
                while (i_7 != -2)
            
            r11_1 = var_148
            
            if (r8_3 != 0)
                zmm1 = *(rdi_4 + rbx_22 + 0x10)
                arg5 = _mm_sub_epi8(*(rdi_4 + rbx_22), *(rax_13 + rbx_22))
                zmm1 = _mm_sub_epi8(zmm1, *(rax_13 + rbx_22 + 0x10))
                *(rcx_13 + rbx_22) = arg5
                *(rcx_13 + rbx_22 + 0x10) = zmm1
            
            if (arg2 != rbp_16)
                rdi_4 += rbp_16
                rax_13 += rbp_16
                rcx_13 += rbp_16
                r8_1 = r11_1 + rbp_16
                goto label_1403d4222
        else
            r8_1 = r11_1
        label_1403d4222:
            arg2 = not.q(r8_1) + r14
            int64_t rbp_47 = zx.q(r14.d - r8_1.d) & 3
            
            if (rbp_47 != 0)
                int64_t i_8 = 0
                
                do
                    *rcx_13 = *rdi_4 - *rax_13
                    rdi_4 += 1
                    rax_13 += 1
                    rcx_13 = &rcx_13[1]
                    i_8 -= 1
                while (neg.q(rbp_47) != i_8)
                
                r8_1 -= i_8
            
            if (arg2 u>= 3)
                int64_t i_9 = 0
                
                do
                    rcx_13[i_9] = *(rdi_4 + i_9) - *(rax_13 + i_9)
                    rcx_13[i_9 + 1] = *(rdi_4 + i_9 + 1) - *(rax_13 + i_9 + 1)
                    rcx_13[i_9 + 2] = *(rdi_4 + i_9 + 2) - *(rax_13 + i_9 + 2)
                    rcx_13[i_9 + 3] = *(rdi_4 + i_9 + 3) - *(rax_13 + i_9 + 3)
                    i_9 += 4
                while (r14 - r8_1 != i_9)
    
    r14_1 = *(arg1 + 0x208)
    r8 = zx.q(var_168)
    
    if (r9.b == 0x20)
        goto label_1403d327e
    
    goto label_1403d42b4

if ((r9.b & 0x10) != 0)
    var_168 = r8.d
    void* r10 = r13 + 1
    arg2 = *(arg1 + 0x208)
    int32_t rax_14 = r11_1.d
    void* r11_2 = arg2 + 1
    uint64_t rcx_14 = zx.q(rax_14)
    void* rbx_15
    int32_t rbp_12
    
    if (rax_14 == 0)
        rbp_12 = 0
        rbx_15 = r10
    else
        uint64_t rdi_5
        
        if ((rax + 7).d u<= 0x3f || (r11_2 u< rcx_14 + r13 + 1 && r10 u< arg2 + rcx_14 + 1))
            rdi_5 = 0
            rbp_12 = 0
            rbx_15 = r10
        label_1403d2c08:
            int64_t rdx_10 = not.q(rdi_5)
            
            if ((rcx_14.b & 1) != 0)
                uint32_t rsi_5 = zx.d(*rbx_15)
                *r11_2 = rsi_5.b
                uint32_t rax_19 = 0x100 - rsi_5
                
                if (rsi_5.b s>= 0)
                    rax_19 = rsi_5
                
                rbp_12 += rax_19
                rdi_5 |= 1
                rbx_15 += 1
                r11_2 += 1
            
            if (rdx_10 != neg.q(rcx_14))
                arg2 = rcx_14 - rdi_5
                void* i_10
                
                do
                    uint32_t rax_20 = zx.d(*rbx_15)
                    *r11_2 = rax_20.b
                    uint32_t rdi_6 = 0x100 - rax_20
                    
                    if (rax_20.b s>= 0)
                        rdi_6 = rax_20
                    
                    uint32_t rax_21 = zx.d(*(rbx_15 + 1))
                    *(r11_2 + 1) = rax_21.b
                    uint32_t rbp_13 = 0x100 - rax_21
                    
                    if (rax_21.b s>= 0)
                        rbp_13 = rax_21
                    
                    rbp_12 = rbp_13 + rdi_6 + rbp_12
                    rbx_15 += 2
                    r11_2 += 2
                    i_10 = arg2
                    arg2 -= 2
                while (i_10 != 2)
        else
            rdi_5 = zx.q(rcx_14.d) & 0xfffffff8
            r11_2 += rdi_5
            rbx_15 = r10 + rdi_5
            int64_t rbp_20 = 0
            arg8 = data_142ed6810
            arg9 = _mm_cmpeq_epi32(arg9, arg9)
            zmm10 = data_14360a1d0
            zmm4 = zx.o(0)
            zmm1 = zx.o(0)
            
            do
                arg6 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r13 + rbp_20 + 1)), arg5[0].q), 
                    arg5[0].q)
                zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                arg7 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r13 + rbp_20 + 5)), arg5[0].q), 
                    arg5[0].q)
                arg4 = _mm_srai_epi32(_mm_slli_epi32(arg7, 0x18), 0x18)
                arg6 &= arg8
                arg6 = _mm_packus_epi16(arg6, arg6)
                arg6 = _mm_packus_epi16(arg6, arg6)
                *(arg2 + rbp_20 + 1) = arg6.d
                arg7 &= arg8
                arg7 = _mm_packus_epi16(arg7, arg7)
                arg7 = _mm_packus_epi16(arg7, arg7)
                *(arg2 + rbp_20 + 5) = arg7.d
                arg6 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg6, 0), 0)
                arg7 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg7, 0), 0)
                zmm2 = _mm_cmpgt_epi32(zmm2, arg9)
                arg4 = _mm_cmpgt_epi32(arg4, arg9)
                zmm5 = _mm_sub_epi32(zmm10, arg6)
                arg5 = _mm_sub_epi32(zmm10, arg7)
                zmm4 = _mm_add_epi32(zmm4, (zmm2 & not.o(zmm5)) | (arg6 & zmm2))
                arg4 = (arg4 & not.o(arg5)) | (arg7 & arg4)
                zmm1 = _mm_add_epi32(zmm1, arg4)
                rbp_20 += 8
            while (rdi_5 != rbp_20)
            
            zmm1 = _mm_add_epi32(zmm1, zmm4)
            arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm1, 0x4e), zmm1)
            rbp_12 = _mm_add_epi32(_mm_shuffle_epi32(arg5, 0xe5), arg5)[0].d
            
            if (rdi_5 != rcx_14)
                goto label_1403d2c08
    
    void* rsi_12 = r14 - rcx_14
    
    if (r14 u> rcx_14)
        if (rsi_12 u<= 3)
            goto label_1403d2f82
        
        void* r8_5 = rsi_12 & 0xfffffffffffffffc
        arg5 = zx.o(rbp_12)
        uint64_t r9_2 = zx.q((((r8_5 - 4) u>> 2) + 1).d) & 1
        int64_t rdi_8
        
        if (r8_5 == 4)
            rdi_8 = 0
            
            if (r9_2 != 0)
            label_1403d2ef8:
                zmm1 = _mm_sub_epi32(
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rbx_15 + rdi_8)), arg5[0].q), 
                        arg5[0].q), 
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r10 + rdi_8)), arg5[0].q), 
                    arg5[0].q))
                zmm2 = _mm_srai_epi32(_mm_slli_epi32(zmm1, 0x18), 0x18)
                zmm1 &= data_142ed6810
                zmm1 = _mm_packus_epi16(zmm1, zmm1)
                zmm1 = _mm_packus_epi16(zmm1, zmm1)
                *(r11_2 + rdi_8) = zmm1[0].d
                arg4 = zx.o(0)
                zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm1, arg4[0].q), arg4[0].q)
                zmm2 = _mm_cmpgt_epi32(zmm2, _mm_cmpeq_epi32(arg4, arg4))
                arg5 = _mm_add_epi32(arg5, 
                    (zmm2 & not.o(_mm_sub_epi32(data_14360a1d0, zmm1))) | (zmm1 & zmm2))
        else
            void* i_41 = r9_2 + 0 - ((r8_5 - 4) u>> 2) - 1
            rdi_8 = 0
            zmm1 = data_142ed6810
            zmm2 = zx.o(0)
            arg4 = _mm_cmpeq_epi32(arg4, arg4)
            zmm4 = data_14360a1d0
            void* i_11
            
            do
                arg6 = _mm_sub_epi32(
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rbx_15 + rdi_8)), arg5[0].q), 
                        arg5[0].q), 
                    _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r13 + rdi_8 + 1)), arg5[0].q), 
                    arg5[0].q))
                zmm5 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                arg6 &= zmm1
                arg6 = _mm_packus_epi16(arg6, arg6)
                arg6 = _mm_packus_epi16(arg6, arg6)
                *(r11_2 + rdi_8) = arg6.d
                arg6 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg6, zmm2.q), zmm2.q)
                zmm5 = _mm_cmpgt_epi32(zmm5, arg4)
                zmm5 =
                    _mm_add_epi32((zmm5 & not.o(_mm_sub_epi32(zmm4, arg6))) | (arg6 & zmm5), arg5)
                arg6 = _mm_unpacklo_epi16(
                    _mm_unpacklo_epi8(zx.o(*(rbx_15 + rdi_8 + 4)), arg5[0].q), arg5[0].q)
                arg5 = zx.o(*(r13 + rdi_8 + 5))
                arg5 = _mm_unpacklo_epi8(arg5, arg5[0].q)
                arg6 = _mm_sub_epi32(arg6, _mm_unpacklo_epi16(arg5, arg5[0].q))
                arg5 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                arg6 &= zmm1
                arg6 = _mm_packus_epi16(arg6, arg6)
                arg6 = _mm_packus_epi16(arg6, arg6)
                *(r11_2 + rdi_8 + 4) = arg6.d
                arg6 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg6, zmm2.q), zmm2.q)
                arg5 = _mm_cmpgt_epi32(arg5, arg4)
                arg5 =
                    _mm_add_epi32((arg5 & not.o(_mm_sub_epi32(zmm4, arg6))) | (arg6 & arg5), zmm5)
                rdi_8 += 8
                i_11 = i_41
                i_41 += 2
            while (i_11 != -2)
            
            if (r9_2 != 0)
                goto label_1403d2ef8
        zmm1 = _mm_add_epi32(_mm_shuffle_epi32(arg5, 0x4e), arg5)
        arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm1, 0xe5), zmm1)
        rbp_12 = arg5[0]
        r9 = var_128
        
        if (rsi_12 != r8_5)
            rcx_14 += r8_5
            r10 += r8_5
            r11_2 += r8_5
            rbx_15 += r8_5
        label_1403d2f82:
            int64_t i_12 = 0
            
            do
                char rax_24 = *(rbx_15 + i_12) - *(r10 + i_12)
                uint32_t rsi_13 = zx.d(rax_24)
                uint32_t rcx_15 = 0x100 - rsi_13
                
                if (rsi_13.b s>= 0)
                    rcx_15 = rsi_13
                
                *(r11_2 + i_12) = rax_24
                rbp_12 += rcx_15
                i_12 += 1
            while (r14 - rcx_14 != i_12)
    
    if (*(arg1 + 0x3b0) != 2)
        r8 = zx.q(var_168)
        result_4 = result_2
        r11_1 = var_148
    else
        uint32_t rax_25 = zx.d(rbp_12.w)
        uint32_t rcx_17 = rbp_12 u>> 0xa & 0xffffffc0
        result_4 = result_2
        
        if (result_4.b == 0)
            r8 = zx.q(var_168)
            r11_1 = var_148
        else
            char* rdx_16 = *(arg1 + 0x3b8)
            uint64_t rbx_24 = zx.q(result_4.d) & 1
            int64_t i_13
            
            if (result_4.b != 1)
                i_13 = 0
                r8 = zx.q(var_168)
                r11_1 = var_148
                
                do
                    if (rdx_16[i_13] == 1)
                        uint32_t rsi_15 = zx.d(*(*(arg1 + 0x3c8) + (i_13 << 1)))
                        rax_25 = (rax_25 * rsi_15) u>> 8
                        rcx_17 = (rcx_17 * rsi_15) u>> 8
                    
                    if (rdx_16[i_13 + 1] == 1)
                        uint32_t rsi_17 = zx.d(*(*(arg1 + 0x3c8) + (i_13 << 1) + 2))
                        rax_25 = (rax_25 * rsi_17) u>> 8
                        rcx_17 = (rcx_17 * rsi_17) u>> 8
                    
                    i_13 += 2
                while (result_4 - rbx_24 != i_13)
                
                if (rbx_24 != 0)
                    goto label_1403d321a
            else
                i_13 = 0
                r8 = zx.q(var_168)
                r11_1 = var_148
                
                if (rbx_24 != 0)
                label_1403d321a:
                    
                    if (rdx_16[i_13] == 1)
                        uint32_t rdx_19 = zx.d(*(*(arg1 + 0x3c8) + (i_13 << 1)))
                        rax_25 = (rax_25 * rdx_19) u>> 8
                        rcx_17 = (rcx_17 * rdx_19) u>> 8
        
        arg2 = zx.q(*(*(arg1 + 0x3d8) + 2))
        int32_t rcx_21 = rcx_17 * arg2.d
        rbp_12 = 0x7fffffff
        
        if (rcx_21 u<= 0x1fffe07)
            rbp_12 = ((rax_25 * arg2.d) u>> 3) + ((rcx_21 & 0xfffffff8) << 7)
    
    r14_1 = r13
    
    if (rbp_12 u< r8.d)
        r14_1 = *(arg1 + 0x208)
        r8 = zx.q(rbp_12)
    
    if (r9.b != 0x20)
        goto label_1403d42b4
    
    goto label_1403d327e

r14_1 = r13
uint64_t result_1

if (r9.b == 0x20)
label_1403d327e:
    r14_1 = *(arg1 + 0x210)
    
    if (r14 != 0)
        void* rcx_24
        void* rsi_18
        
        if (r14 u>= 0x20)
            int32_t r10_1 = r8.d
            r8.b = &r14_1[1] u< r14 + r13 + 1
            void* rdx_21
            rdx_21.b = r13 + 1 u< r14_1 + r14 + 1
            void* rax_32
            rax_32.b = &r14_1[1] u< r14 + r12 + 1
            void* rcx_26
            rcx_26.b = r12 + 1 u< r14_1 + r14 + 1
            rsi_18 = nullptr
            
            if ((r8.b & rdx_21.b) != 0)
                rcx_24 = r13
                arg2 = r12
                r8 = zx.q(r10_1)
            label_1403d34e8:
                result_4 = result_2
                goto label_1403d34f8
            
            rax_32.b &= rcx_26.b
            r8 = zx.q(r10_1)
            
            if (rax_32.b != 0)
                rcx_24 = r13
                arg2 = r12
                goto label_1403d34e8
            
            rsi_18 = r14 & 0xffffffffffffffe0
            arg2 = zx.q((((rsi_18 - 0x20) u>> 5) + 1).d) & 1
            result_4 = result_2
            int64_t rcx_29
            
            if (rsi_18 == 0x20)
                rcx_29 = 0
                
                if (arg2 != 0)
                label_1403d33ba:
                    zmm1 = *(r13 + rcx_29 + 0x11)
                    arg5 = _mm_sub_epi8(*(r13 + rcx_29 + 1), *(r12 + rcx_29 + 1))
                    zmm1 = _mm_sub_epi8(zmm1, *(r12 + rcx_29 + 0x11))
                    *(r14_1 + rcx_29 + 1) = arg5
                    *(r14_1 + rcx_29 + 0x11) = zmm1
            else
                void* i_33 = arg2 + 0 - ((rsi_18 - 0x20) u>> 5) - 1
                rcx_29 = 0
                void* i_14
                
                do
                    zmm1 = *(r13 + rcx_29 + 0x11)
                    arg5 = _mm_sub_epi8(*(r13 + rcx_29 + 1), *(r12 + rcx_29 + 1))
                    zmm1 = _mm_sub_epi8(zmm1, *(r12 + rcx_29 + 0x11))
                    *(r14_1 + rcx_29 + 1) = arg5
                    *(r14_1 + rcx_29 + 0x11) = zmm1
                    zmm1 = *(r13 + rcx_29 + 0x31)
                    arg5 = _mm_sub_epi8(*(r13 + rcx_29 + 0x21), *(r12 + rcx_29 + 0x21))
                    zmm1 = _mm_sub_epi8(zmm1, *(r12 + rcx_29 + 0x31))
                    *(r14_1 + rcx_29 + 0x21) = arg5
                    *(r14_1 + rcx_29 + 0x31) = zmm1
                    rcx_29 += 0x40
                    i_14 = i_33
                    i_33 += 2
                while (i_14 != -2)
                
                if (arg2 != 0)
                    goto label_1403d33ba
            
            if (r14 != rsi_18)
                rcx_24 = rsi_18 + r13
                arg2 = r12 + rsi_18
                r14_1 += rsi_18
                goto label_1403d34f8
        else
            rsi_18 = nullptr
            rcx_24 = r13
            arg2 = r12
        label_1403d34f8:
            void* rbp_26 = not.q(rsi_18) + r14
            void* rdi_21 = r14 & 3
            
            if (rdi_21 != 0)
                int64_t rbx_28 = 0
                
                do
                    r14_1[rbx_28 + 1] = *(rcx_24 + rbx_28 + 1) - *(arg2 + rbx_28 + 1)
                    rbx_28 += 1
                while (rdi_21 != rbx_28)
                
                rcx_24 += rbx_28
                arg2 += rbx_28
                r14_1 = &r14_1[rbx_28]
                rsi_18 += rbx_28
            
            if (rbp_26 u>= 3)
                int64_t i_15 = 0
                
                do
                    r14_1[i_15 + 1] = *(rcx_24 + i_15 + 1) - *(arg2 + i_15 + 1)
                    r14_1[i_15 + 2] = *(rcx_24 + i_15 + 2) - *(arg2 + i_15 + 2)
                    r14_1[i_15 + 3] = *(rcx_24 + i_15 + 3) - *(arg2 + i_15 + 3)
                    r14_1[i_15 + 4] = *(rcx_24 + i_15 + 4) - *(arg2 + i_15 + 4)
                    i_15 += 4
                while (r14 - rsi_18 != i_15)
        r14_1 = *(arg1 + 0x210)
        
        if (r9.b == 0x40)
            goto label_1403d459b
        
        goto label_1403d35a6
    
    result_1 = result_4
else
label_1403d42b4:
    
    if ((r9.b & 0x20) != 0)
        var_168 = r8.d
        
        if (r14 != 0)
            void* rdx_49 = *(arg1 + 0x210)
            void* rbx_58
            void* rbp_49
            void* r8_15
            void* r9_7
            
            if (r14 u>= 8)
                rbx_58 = r14 & 0xfffffffffffffff8
                r8_15 = rbx_58 + r13
                r9_7 = r12 + rbx_58
                rbp_49 = rdx_49 + rbx_58
                zmm11 = zx.o(0)
                int64_t rdi_36 = 0
                arg8 = data_142ed6810
                arg9 = _mm_cmpeq_epi32(arg9, arg9)
                zmm10 = data_14360a1d0
                zmm4 = zx.o(0)
                zmm1 = zx.o(0)
                
                do
                    arg7 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rdi_36 + 1)), arg5[0].q), arg5[0].q)
                    arg6 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + rdi_36 + 5)), arg5[0].q), arg5[0].q)
                    arg7 = _mm_sub_epi32(arg7, 
                        _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r12 + rdi_36 + 1)), arg5[0].q), 
                            arg5[0].q))
                    arg6 = _mm_sub_epi32(arg6, 
                        _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(r12 + rdi_36 + 5)), arg5[0].q), 
                            arg5[0].q))
                    arg4 = _mm_srai_epi32(_mm_slli_epi32(arg7, 0x18), 0x18)
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                    arg7 &= arg8
                    arg7 = _mm_packus_epi16(arg7, arg7)
                    arg7 = _mm_packus_epi16(arg7, arg7)
                    *(rdx_49 + rdi_36 + 1) = arg7.d
                    arg6 &= arg8
                    arg6 = _mm_packus_epi16(arg6, arg6)
                    arg6 = _mm_packus_epi16(arg6, arg6)
                    *(rdx_49 + rdi_36 + 5) = arg6.d
                    arg7 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg7, zmm11[0].q), zmm11[0].q)
                    arg6 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg6, zmm11[0].q), zmm11[0].q)
                    arg4 = _mm_cmpgt_epi32(arg4, arg9)
                    zmm2 = _mm_cmpgt_epi32(zmm2, arg9)
                    zmm5 = _mm_sub_epi32(zmm10, arg7)
                    arg5 = _mm_sub_epi32(zmm10, arg6)
                    zmm4 = _mm_add_epi32(zmm4, (arg4 & not.o(zmm5)) | (arg7 & arg4))
                    zmm1 = _mm_add_epi32(zmm1, (zmm2 & not.o(arg5)) | (arg6 & zmm2))
                    rdi_36 += 8
                while (rbx_58 != rdi_36)
                
                zmm1 = _mm_add_epi32(zmm1, zmm4)
                arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm1, 0x4e), zmm1)
                arg2 = zx.q(_mm_add_epi32(_mm_shuffle_epi32(arg5, 0xe5), arg5)[0].d)
                
                if (r14 != rbx_58)
                    goto label_1403d445c
            else
                rbx_58 = nullptr
                r8_15 = r13
                r9_7 = r12
                rbp_49 = rdx_49
                arg2 = nullptr
            label_1403d445c:
                int64_t i_16 = 0
                
                do
                    char rax_68 = *(r8_15 + i_16 + 1) - *(r9_7 + i_16 + 1)
                    uint32_t rsi_37 = zx.d(rax_68)
                    uint32_t rcx_50 = 0x100 - rsi_37
                    
                    if (rsi_37.b s>= 0)
                        rcx_50 = rsi_37
                    
                    *(rbp_49 + i_16 + 1) = rax_68
                    arg2 = zx.q(arg2.d + rcx_50)
                    i_16 += 1
                while (r14 - rbx_58 != i_16)
            
            if (*(arg1 + 0x3b0) != 2)
                goto label_1403d42f8
            
            goto label_1403d4498
        
        arg2 = nullptr
        
        if (*(arg1 + 0x3b0) == 2)
        label_1403d4498:
            uint32_t rax_69 = zx.d(arg2.w)
            uint32_t rcx_52 = arg2.d u>> 0xa & 0xffffffc0
            
            if (result_4.b == 0)
                r9 = var_128
                r8 = zx.q(var_168)
            else
                char* rdx_51 = *(arg1 + 0x3b8)
                uint64_t rbx_60 = zx.q(result_4.d) & 1
                r8 = zx.q(var_168)
                int64_t i_17
                
                if (result_4.b != 1)
                    i_17 = 0
                    r9 = var_128
                    
                    do
                        if (rdx_51[i_17] == 2)
                            uint32_t rsi_39 = zx.d(*(*(arg1 + 0x3c0) + (i_17 << 1)))
                            rax_69 = (rax_69 * rsi_39) u>> 8
                            rcx_52 = (rcx_52 * rsi_39) u>> 8
                        
                        if (rdx_51[i_17 + 1] == 2)
                            uint32_t rsi_41 = zx.d(*(*(arg1 + 0x3c0) + (i_17 << 1) + 2))
                            rax_69 = (rax_69 * rsi_41) u>> 8
                            rcx_52 = (rcx_52 * rsi_41) u>> 8
                        
                        i_17 += 2
                    while (result_4 - rbx_60 != i_17)
                    
                    if (rbx_60 != 0)
                        goto label_1403d453a
                else
                    i_17 = 0
                    r9 = var_128
                    
                    if (rbx_60 != 0)
                    label_1403d453a:
                        
                        if (rdx_51[i_17] == 2)
                            uint32_t rdx_53 = zx.d(*(*(arg1 + 0x3c0) + (i_17 << 1)))
                            rax_69 = (rax_69 * rdx_53) u>> 8
                            rcx_52 = (rcx_52 * rdx_53) u>> 8
            
            uint32_t rbp_50 = zx.d(*(*(arg1 + 0x3d0) + 4))
            int32_t rcx_56 = rcx_52 * rbp_50
            arg2 = 0x7fffffff
            
            if (rcx_56 u<= 0x1fffe07)
                arg2 = zx.q(((rax_69 * rbp_50) u>> 3) + ((rcx_56 & 0xfffffff8) << 7))
            
            if (arg2.d u< r8.d)
                r14_1 = *(arg1 + 0x210)
                r8 = zx.q(arg2.d)
        else
        label_1403d42f8:
            r9 = var_128
            r8 = zx.q(var_168)
            
            if (arg2.d u< r8.d)
                r14_1 = *(arg1 + 0x210)
                r8 = zx.q(arg2.d)
    
    if (r9.b == 0x40)
    label_1403d459b:
        void* r9_8 = r13 + 1
        void* rdx_55 = *(arg1 + 0x218)
        int32_t (* rbx_61)[0x4] = rdx_55 + 1
        void* rbp_51 = r12 + 1
        var_168 = r8.d
        void* rdi_41
        void* r14_4
        
        if (r11_1.d == 0)
            rdi_41 = r9_8
            r14_4 = r14
        else
            uint64_t rcx_59 = zx.q((r11_1 - 1).d)
            r14_4 = r14
            uint64_t r10_7
            
            if (rcx_59 + 1 u> 0x1f)
                r11_1.b = rbx_61 u< rcx_59 + r13 + 2
                void* rcx_61
                rcx_61.b = rbx_61 u< rcx_59 + r12 + 2
                r8.b = rbp_51 u< rdx_55 + rcx_59 + 2
                
                if ((r11_1.b & r9_8 u< rdx_55 + rcx_59 + 2) != 0)
                    r10_7 = 0
                    rdi_41 = r9_8
                    r11_1 = var_148
                    goto label_1403d46dd
                
                rcx_61.b &= r8.b
                r11_1 = var_148
                
                if (rcx_61.b != 0)
                    r10_7 = 0
                    rdi_41 = r9_8
                    goto label_1403d46dd
                
                uint64_t rsi_44 = zx.q(r11_1.d) & 0x1f
                r10_7 = rcx_59 + 1 - rsi_44
                rbp_51 += r10_7
                rbx_61 += r10_7
                rdi_41 = r9_8 + r10_7
                int64_t rcx_62 = 0
                arg5 = data_143600c60
                
                do
                    zmm2 = *(r13 + rcx_62 + 0x11)
                    zmm4 = *(r12 + rcx_62 + 0x11)
                    zmm1 = _mm_sub_epi8(*(r13 + rcx_62 + 1), 
                        _mm_srli_epi16(*(r12 + rcx_62 + 1), 1) & arg5)
                    zmm2 = _mm_sub_epi8(zmm2, _mm_srli_epi16(zmm4, 1) & arg5)
                    *(rdx_55 + rcx_62 + 1) = zmm1
                    *(rdx_55 + rcx_62 + 0x11) = zmm2
                    rcx_62 += 0x20
                while (r10_7 != rcx_62)
                
                if (rsi_44.d != 0)
                    goto label_1403d46dd
            else
                r10_7 = 0
                rdi_41 = r9_8
            label_1403d46dd:
                r8 = zx.q(not.d(r10_7.d) + r11_1.d)
                int32_t rsi_47 = (r11_1.d - r10_7.d) & 3
                
                if (rsi_47 != 0)
                    int32_t i_18 = 0
                    
                    do
                        char rdx_56 = *rdi_41
                        rdi_41 += 1
                        *rbx_61 = rdx_56 - (*rbp_51 u>> 1)
                        rbx_61 += 1
                        rbp_51 += 1
                        i_18 -= 1
                    while (neg.d(rsi_47) != i_18)
                    
                    r10_7 = zx.q(r10_7.d - i_18)
                
                if (r8.d u>= 3)
                    int32_t i_38 = r11_1.d - r10_7.d
                    int32_t i_19
                    
                    do
                        *rbx_61 = *rdi_41 - (*rbp_51 u>> 1)
                        *(rbx_61 + 1) = *(rdi_41 + 1) - (*(rbp_51 + 1) u>> 1)
                        *(rbx_61 + 2) = *(rdi_41 + 2) - (*(rbp_51 + 2) u>> 1)
                        char rax_82 = *(rdi_41 + 3)
                        rdi_41 += 4
                        *(rbx_61 + 3) = rax_82 - (*(rbp_51 + 3) u>> 1)
                        rbx_61 = &(*rbx_61)[1]
                        rbp_51 += 4
                        i_19 = i_38
                        i_38 -= 4
                    while (i_19 != 4)
        
        uint64_t rcx_67 = zx.q(r11_1.d)
        void* rsi_50 = r14_4 - rcx_67
        
        if (r14_4 u> rcx_67)
            int32_t r10_15
            
            if (rsi_50 u<= 0xf)
            label_1403d4991:
                r10_15 = r11_1.d
            label_1403d4998:
                int64_t rcx_72 = 0
                uint64_t rax_89
                
                do
                    *(rbx_61 + rcx_72) = *(rdi_41 + rcx_72)
                        - ((zx.d(*(r9_8 + rcx_72)) + zx.d(*(rbp_51 + rcx_72))) u>> 1).b
                    rax_89 = zx.q(r10_15 + 1 + rcx_72.d)
                    rcx_72 += 1
                while (r14_4 u> rax_89)
            else
                void* rdx_60 = not.q(rcx_67) + r14_4
                
                if (0xfffffffe - r11_1.d u< rdx_60.d || rdx_60 u>> 0x20 != 0)
                    goto label_1403d4991
                
                void* rax_84 = rbx_61 + rsi_50
                r11_1.b = rbx_61 u< r14_4 + 1 - rcx_67 + r13
                r14_4.b = r9_8 u< rax_84
                void* rcx_68
                rcx_68.b = rbx_61 u< rdi_41 + rsi_50
                r8.b = rdi_41 u< rax_84
                void* rdx_64
                rdx_64.b = rbx_61 u< rsi_50 + rbp_51
                void* r10_8
                r10_8.b = rbp_51 u< rax_84
                
                if ((r11_1.b & r14_4.b) != 0)
                    r10_15 = var_148.d
                    r14_4 = r14
                    goto label_1403d4998
                
                rcx_68.b &= r8.b
                r14_4 = r14
                r11_1 = var_148
                
                if (rcx_68.b != 0)
                    r10_15 = r11_1.d
                    goto label_1403d4998
                
                rdx_64.b &= r10_8.b
                
                if (rdx_64.b != 0)
                    goto label_1403d4991
                
                void* r8_19 = rsi_50 & 0xfffffffffffffff0
                uint64_t r10_10 = zx.q((((r8_19 - 0x10) u>> 4) + 1).d) & 1
                int64_t rax_87
                
                if (r8_19 == 0x10)
                    rax_87 = 0
                else
                    int64_t i_39 = r10_10 + 0 - ((r8_19 - 0x10) u>> 4) - 1
                    rax_87 = 0
                    arg5 = zx.o(0)
                    int64_t i_20
                    
                    do
                        arg8 = *(rdi_41 + rax_87)
                        zmm4 = *(rbp_51 + rax_87)
                        zmm5 = _mm_unpacklo_epi8(zmm4, arg5[0].q)
                        arg6 = _mm_unpackhi_epi16(zmm5, arg5[0].q)
                        zmm5 = _mm_unpacklo_epi16(zmm5, arg5[0].q)
                        zmm4 = _mm_unpackhi_epi8(zmm4, arg5[0].q)
                        arg7 = _mm_unpackhi_epi16(zmm4, arg5[0].q)
                        zmm4 = _mm_unpacklo_epi16(zmm4, arg5[0].q)
                        arg4 = *(r13 + rax_87 + 1)
                        zmm2 = _mm_unpacklo_epi8(arg4, arg5[0].q)
                        zmm1 = _mm_add_epi32(_mm_unpackhi_epi16(zmm2, arg5[0].q), arg6)
                        zmm2 = _mm_add_epi32(_mm_unpacklo_epi16(zmm2, arg5[0].q), zmm5)
                        arg4 = _mm_unpackhi_epi8(arg4, arg5[0].q)
                        zmm5 = _mm_add_epi32(_mm_unpackhi_epi16(arg4, arg5[0].q), arg7)
                        arg4 = _mm_add_epi32(_mm_unpacklo_epi16(arg4, arg5[0].q), zmm4)
                        zmm1 = _mm_srli_epi32(zmm1, 1)
                        zmm2 = _mm_packus_epi16(_mm_srli_epi32(zmm2, 1), zmm1)
                        zmm5 = _mm_srli_epi32(zmm5, 1)
                        *(rbx_61 + rax_87) = _mm_sub_epi8(arg8, 
                            _mm_packus_epi16(zmm2, _mm_packus_epi16(_mm_srli_epi32(arg4, 1), zmm5)))
                        arg8 = *(rdi_41 + rax_87 + 0x10)
                        zmm4 = *(rbp_51 + rax_87 + 0x10)
                        zmm5 = _mm_unpacklo_epi8(zmm4, arg5[0].q)
                        arg6 = _mm_unpackhi_epi16(zmm5, arg5[0].q)
                        zmm5 = _mm_unpacklo_epi16(zmm5, arg5[0].q)
                        zmm4 = _mm_unpackhi_epi8(zmm4, arg5[0].q)
                        arg7 = _mm_unpackhi_epi16(zmm4, arg5[0].q)
                        zmm4 = _mm_unpacklo_epi16(zmm4, arg5[0].q)
                        arg4 = *(r13 + rax_87 + 0x11)
                        zmm2 = _mm_unpacklo_epi8(arg4, arg5[0].q)
                        zmm1 = _mm_add_epi32(_mm_unpackhi_epi16(zmm2, arg5[0].q), arg6)
                        zmm2 = _mm_add_epi32(_mm_unpacklo_epi16(zmm2, arg5[0].q), zmm5)
                        arg4 = _mm_unpackhi_epi8(arg4, arg5[0].q)
                        zmm5 = _mm_add_epi32(_mm_unpackhi_epi16(arg4, arg5[0].q), arg7)
                        arg4 = _mm_add_epi32(_mm_unpacklo_epi16(arg4, arg5[0].q), zmm4)
                        zmm1 = _mm_srli_epi32(zmm1, 1)
                        zmm2 = _mm_packus_epi16(_mm_srli_epi32(zmm2, 1), zmm1)
                        zmm5 = _mm_srli_epi32(zmm5, 1)
                        arg8 = _mm_sub_epi8(arg8, 
                            _mm_packus_epi16(zmm2, _mm_packus_epi16(_mm_srli_epi32(arg4, 1), zmm5)))
                        *(rbx_61 + rax_87 + 0x10) = arg8
                        rax_87 += 0x20
                        i_20 = i_39
                        i_39 += 2
                    while (i_20 != -2)
                
                if (r10_10 != 0)
                    arg8 = *(rdi_41 + rax_87)
                    zmm2 = *(rbp_51 + rax_87)
                    zmm4 = zx.o(0)
                    zmm5 = _mm_unpacklo_epi8(zmm2, zmm4.q)
                    arg6 = _mm_unpackhi_epi16(zmm5, zmm4.q)
                    zmm5 = _mm_unpacklo_epi16(zmm5, zmm4.q)
                    zmm2 = _mm_unpackhi_epi8(zmm2, zmm4.q)
                    arg7 = _mm_unpackhi_epi16(zmm2, zmm4.q)
                    zmm2 = _mm_unpacklo_epi16(zmm2, zmm4.q)
                    arg4 = *(r9_8 + rax_87)
                    zmm1 = _mm_unpacklo_epi8(arg4, zmm4.q)
                    arg5 = _mm_add_epi32(_mm_unpackhi_epi16(zmm1, zmm4.q), arg6)
                    zmm1 = _mm_add_epi32(_mm_unpacklo_epi16(zmm1, zmm4.q), zmm5)
                    arg4 = _mm_unpackhi_epi8(arg4, zmm4.q)
                    zmm5 = _mm_add_epi32(_mm_unpackhi_epi16(arg4, zmm4.q), arg7)
                    arg4 = _mm_add_epi32(_mm_unpacklo_epi16(arg4, zmm4.q), zmm2)
                    arg5 = _mm_srli_epi32(arg5, 1)
                    zmm1 = _mm_packus_epi16(_mm_srli_epi32(zmm1, 1), arg5)
                    zmm5 = _mm_srli_epi32(zmm5, 1)
                    arg8 = _mm_sub_epi8(arg8, 
                        _mm_packus_epi16(zmm1, _mm_packus_epi16(_mm_srli_epi32(arg4, 1), zmm5)))
                    *(rbx_61 + rax_87) = arg8
                
                if (rsi_50 != r8_19)
                    r10_15 = (r11_1 + r8_19).d
                    r9_8 += r8_19
                    rbp_51 += r8_19
                    rbx_61 += r8_19
                    rdi_41 += r8_19
                    goto label_1403d4998
        
        r14_1 = *(arg1 + 0x218)
        result_4 = result_2
        r9 = var_128
        r8 = zx.q(var_168)
        
        if (r9.b == 0x80)
            goto label_1403d3afc
        
        goto label_1403d49e4
    
label_1403d35a6:
    
    if ((r9.b & 0x40) != 0)
        void* rbx_33 = r13 + 1
        void* rsi_21 = *(arg1 + 0x218)
        void* r9_3 = rsi_21 + 1
        void* rdi_22 = r12 + 1
        uint64_t rcx_30 = zx.q(r11_1.d)
        var_168 = r8.d
        void* rbp_27
        int32_t rsi_22
        
        if (r11_1.d == 0)
            rsi_22 = 0
            rbp_27 = rbx_33
        else
            void* var_110_1 = rbx_33
            uint64_t r10_2
            
            if ((rax + 7).d u> 0x3f)
                r11_1.b = r9_3 u< rcx_30 + r13 + 1
                uint64_t rax_40
                rax_40.b = rbx_33 u< rcx_30 + rsi_21 + 1
                arg2.b = r9_3 u< r12 + rcx_30 + 1
                r8.b = rdi_22 u< rcx_30 + rsi_21 + 1
                r10_2 = 0
                
                if ((r11_1.b & rax_40.b) == 0)
                    arg2.b &= r8.b
                
                if ((r11_1.b & rax_40.b) != 0 || arg2.b != 0)
                    rsi_22 = 0
                    rbp_27 = var_110_1
                    rbx_33 = var_110_1
                    goto label_1403d37c0
                
                r10_2 = zx.q(rcx_30.d) & 0xfffffff8
                rdi_22 += r10_2
                r9_3 += r10_2
                rbx_33 = var_110_1
                rbp_27 = rbx_33 + r10_2
                zmm11 = zx.o(0)
                arg2 = nullptr
                arg8 = data_142ed6810
                arg9 = _mm_cmpeq_epi32(arg9, arg9)
                zmm10 = data_14360a1d0
                zmm4 = zx.o(0)
                zmm1 = zx.o(0)
                
                do
                    arg7 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + arg2 + 1)), arg5[0].q), arg5[0].q)
                    arg6 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r13 + arg2 + 5)), arg5[0].q), arg5[0].q)
                    zmm2 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r12 + arg2 + 1)), zmm11[0].q), zmm11[0].q)
                    arg4 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(r12 + arg2 + 5)), zmm11[0].q), zmm11[0].q)
                    arg7 = _mm_sub_epi32(arg7, _mm_srli_epi32(zmm2, 1))
                    arg6 = _mm_sub_epi32(arg6, _mm_srli_epi32(arg4, 1))
                    arg4 = _mm_srai_epi32(_mm_slli_epi32(arg7, 0x18), 0x18)
                    zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                    arg7 &= arg8
                    arg7 = _mm_packus_epi16(arg7, arg7)
                    arg7 = _mm_packus_epi16(arg7, arg7)
                    *(rsi_21 + arg2 + 1) = arg7.d
                    arg6 &= arg8
                    arg6 = _mm_packus_epi16(arg6, arg6)
                    arg6 = _mm_packus_epi16(arg6, arg6)
                    *(rsi_21 + arg2 + 5) = arg6.d
                    arg7 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg7, zmm11[0].q), zmm11[0].q)
                    arg6 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg6, zmm11[0].q), zmm11[0].q)
                    arg4 = _mm_cmpgt_epi32(arg4, arg9)
                    zmm2 = _mm_cmpgt_epi32(zmm2, arg9)
                    zmm5 = _mm_sub_epi32(zmm10, arg7)
                    arg5 = _mm_sub_epi32(zmm10, arg6)
                    zmm4 = _mm_add_epi32(zmm4, (arg4 & not.o(zmm5)) | (arg7 & arg4))
                    zmm1 = _mm_add_epi32(zmm1, (zmm2 & not.o(arg5)) | (arg6 & zmm2))
                    arg2 += 8
                while (r10_2 != arg2)
                
                zmm1 = _mm_add_epi32(zmm1, zmm4)
                arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm1, 0x4e), zmm1)
                rsi_22 = _mm_add_epi32(_mm_shuffle_epi32(arg5, 0xe5), arg5)[0].d
                
                if (r10_2 != rcx_30)
                    goto label_1403d37c0
            else
                r10_2 = 0
                rsi_22 = 0
                rbp_27 = rbx_33
            label_1403d37c0:
                int64_t rax_43 = not.q(r10_2)
                
                if ((rcx_30.b & 1) != 0)
                    uint64_t rbx_34 = rcx_30
                    rcx_30.b = *rbp_27
                    rbp_27 += 1
                    arg2.b = *rdi_22
                    arg2.b u>>= 1
                    rcx_30.b -= arg2.b
                    *r9_3 = rcx_30.b
                    uint32_t rcx_33 = zx.d(rcx_30.b)
                    uint32_t rdx_24 = 0x100 - rcx_33
                    
                    if (rcx_33.b s>= 0)
                        rdx_24 = rcx_33
                    
                    rcx_30 = rbx_34
                    rsi_22 += rdx_24
                    r10_2 |= 1
                    r9_3 += 1
                    rdi_22 += 1
                
                if (rax_43 != neg.q(rcx_30))
                    void* i_36 = rcx_30 - r10_2
                    void* i_21
                    
                    do
                        char rcx_34 = *rbp_27 - (*rdi_22 u>> 1)
                        *r9_3 = rcx_34
                        uint32_t rcx_35 = zx.d(rcx_34)
                        uint32_t rbx_36 = 0x100 - rcx_35
                        
                        if (rcx_35.b s>= 0)
                            rbx_36 = rcx_35
                        
                        char rcx_36 = *(rbp_27 + 1)
                        rbp_27 += 2
                        rcx_36 -= *(rdi_22 + 1) u>> 1
                        *(r9_3 + 1) = rcx_36
                        uint32_t rax_46 = zx.d(rcx_36)
                        uint32_t rsi_23 = 0x100 - rax_46
                        
                        if (rax_46.b s>= 0)
                            rsi_23 = rax_46
                        
                        rsi_22 = rsi_23 + rbx_36 + rsi_22
                        r9_3 += 2
                        rdi_22 += 2
                        i_21 = i_36
                        i_36 -= 2
                    while (i_21 != 2)
                    rbx_33 = var_110_1
        
        void* rax_48 = r14 - rcx_30
        
        if (r14 u> rcx_30)
            void* rdx_26
            void* r10_4
            void* r11_5
            void* r12_1
            
            if (rax_48 u> 3)
                void* r8_8 = rax_48 & 0xfffffffffffffffc
                rcx_30 += r8_8
                r12_1 = rbx_33 + r8_8
                r11_5 = rdi_22 + r8_8
                rdx_26 = r9_3 + r8_8
                r10_4 = r8_8 + rbp_27
                arg5 = zx.o(rsi_22)
                int64_t rsi_24 = 0
                zmm1 = zx.o(0)
                zmm2 = data_142ed6810
                arg4 = data_1436ae7b0
                zmm4 = data_14360a1d0
                
                do
                    zmm5 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(rbp_27 + rsi_24)), zmm1[0].q), zmm1[0].q)
                    arg6 = _mm_unpacklo_epi16(
                        _mm_unpacklo_epi8(zx.o(*(rdi_22 + rsi_24)), zmm1[0].q), zmm1[0].q)
                    zmm5 = _mm_sub_epi32(zmm5, 
                        _mm_srli_epi32(
                            _mm_add_epi32(
                                _mm_unpacklo_epi16(
                                    _mm_unpacklo_epi8(zx.o(*(rbx_33 + rsi_24)), zmm1[0].q), 
                                    zmm1[0].q), 
                                arg6), 
                            1)) & zmm2
                    arg6 = _mm_packus_epi16(zmm5, zmm5)
                    *(r9_3 + rsi_24) = _mm_packus_epi16(arg6, arg6).d
                    arg6 = _mm_cmpgt_epi32(arg4, zmm5)
                    arg5 = _mm_add_epi32(arg5, 
                        (arg6 & not.o(_mm_sub_epi32(zmm4, zmm5))) | (zmm5 & arg6))
                    rsi_24 += 4
                while (r8_8 != rsi_24)
                
                zmm1 = _mm_add_epi32(_mm_shuffle_epi32(arg5, 0x4e), arg5)
                arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm1, 0xe5), zmm1)
                rsi_22 = arg5[0]
                
                if (rax_48 != r8_8)
                    goto label_1403d3977
            else
                r12_1 = rbx_33
                r11_5 = rdi_22
                rdx_26 = r9_3
                r10_4 = rbp_27
            label_1403d3977:
                int64_t i_22 = 0
                
                do
                    char rdi_24 =
                        *(r10_4 + i_22) - ((zx.d(*(r12_1 + i_22)) + zx.d(*(r11_5 + i_22))) u>> 1).b
                    uint32_t rcx_38 = zx.d(rdi_24)
                    uint32_t rbx_41 = 0x100 - rcx_38
                    
                    if (rcx_38 u< 0x80)
                        rbx_41 = rcx_38
                    
                    *(rdx_26 + i_22) = rdi_24
                    rsi_22 += rbx_41
                    i_22 += 1
                while (r14 - rcx_30 != i_22)
        
        r9 = var_128
        
        if (*(arg1 + 0x3b0) != 2)
            result_4 = result_2
            r8 = zx.q(var_168)
            
            if (rsi_22 u< r8.d)
                r14_1 = *(arg1 + 0x218)
                r8 = zx.q(rsi_22)
        else
            uint32_t rax_51 = zx.d(rsi_22.w)
            uint32_t rcx_40 = rsi_22 u>> 0xa & 0xffffffc0
            result_4 = result_2
            r8 = zx.q(var_168)
            
            if (result_4.b != 0)
                char* rdx_27 = *(arg1 + 0x3b8)
                uint64_t rbx_43 = zx.q(result_4.d) & 1
                int64_t i_23
                
                if (result_4.b != 1)
                    i_23 = 0
                    
                    do
                        if (rdx_27[i_23] == 0)
                            uint32_t rsi_27 = zx.d(*(*(arg1 + 0x3c0) + (i_23 << 1)))
                            rax_51 = (rax_51 * rsi_27) u>> 8
                            rcx_40 = (rcx_40 * rsi_27) u>> 8
                            
                            if (rdx_27[i_23 + 1] == 0)
                            label_1403d3a65:
                                uint32_t rsi_29 = zx.d(*(*(arg1 + 0x3c0) + (i_23 << 1) + 2))
                                rax_51 = (rax_51 * rsi_29) u>> 8
                                rcx_40 = (rcx_40 * rsi_29) u>> 8
                        else if (rdx_27[i_23 + 1] == 0)
                            goto label_1403d3a65
                        
                        i_23 += 2
                    while (result_4 - rbx_43 != i_23)
                    
                    if (rbx_43 != 0)
                        goto label_1403d3a9b
                else
                    i_23 = 0
                    
                    if (rbx_43 != 0)
                    label_1403d3a9b:
                        
                        if (rdx_27[i_23] == 0)
                            uint32_t rdx_29 = zx.d(*(*(arg1 + 0x3c0) + (i_23 << 1)))
                            rax_51 = (rax_51 * rdx_29) u>> 8
                            rcx_40 = (rcx_40 * rdx_29) u>> 8
            
            uint32_t rdx_31 = zx.d(*(*(arg1 + 0x3d0) + 6))
            int32_t rcx_44 = rcx_40 * rdx_31
            rsi_22 = 0x7fffffff
            
            if (rcx_44 u<= 0x1fffe07)
                rsi_22 = ((rax_51 * rdx_31) u>> 3) + ((rcx_44 & 0xfffffff8) << 7)
            
            if (rsi_22 u< r8.d)
                r14_1 = *(arg1 + 0x218)
                r8 = zx.q(rsi_22)
    
    if (r9.b != 0x80)
    label_1403d49e4:
        
        if (r9.b s< 0)
            void* rbx_67 = r13 + 1
            void* rbp_56 = *(arg1 + 0x220)
            char* r15_3 = rbp_56 + 1
            int32_t rax_92 = var_148.d
            uint64_t r11_7 = zx.q(rax_92)
            int32_t var_168_1 = r8.d
            char* rax_93
            void* rcx_75
            int32_t rdx_75
            void* rbp_57
            
            if (rax_92 == 0)
                rdx_75 = 0
                rcx_75 = rbx_67
                rax_93 = r12 + 1
                rbp_57 = r12 + 1
            else
                uint64_t r9_9
                
                if ((rax + 7).d u> 0x3f)
                    r8.b = r15_3 u< r11_7 + r13 + 1
                    var_128.q = rbx_67
                    result_4.b = rbx_67 u< r11_7 + rbp_56 + 1
                    void* rax_95
                    rax_95.b = r15_3 u< r12 + r11_7 + 1
                    void* rcx_77
                    rcx_77.b = r12 + 1 u< r11_7 + rbp_56 + 1
                    r9_9 = 0
                    
                    if ((r8.b & result_4.b) == 0)
                        rax_95.b &= rcx_77.b
                    
                    if ((r8.b & result_4.b) != 0 || rax_95.b != 0)
                        rdx_75 = 0
                        rbp_57 = r12 + 1
                        rax_93 = rbp_57
                        rbx_67 = var_128.q
                        goto label_1403d4d50
                    
                    r9_9 = zx.q(r11_7.d) & 0xfffffff8
                    r15_3 = &r15_3[r9_9]
                    rax_93 = r12 + 1 + r9_9
                    rcx_75 = var_128.q + r9_9
                    zmm11 = zx.o(0)
                    int64_t rdx_78 = 0
                    arg8 = data_142ed6810
                    arg9 = _mm_cmpeq_epi32(arg9, arg9)
                    zmm10 = data_14360a1d0
                    zmm4 = zx.o(0)
                    zmm1 = zx.o(0)
                    
                    do
                        arg7 = _mm_unpacklo_epi16(
                            _mm_unpacklo_epi8(zx.o(*(r13 + rdx_78 + 1)), arg5[0].q), arg5[0].q)
                        arg6 = _mm_unpacklo_epi16(
                            _mm_unpacklo_epi8(zx.o(*(r13 + rdx_78 + 5)), arg5[0].q), arg5[0].q)
                        arg7 = _mm_sub_epi32(arg7, 
                            _mm_unpacklo_epi16(
                                _mm_unpacklo_epi8(zx.o(*(r12 + rdx_78 + 1)), arg5[0].q), arg5[0].q))
                        arg6 = _mm_sub_epi32(arg6, 
                            _mm_unpacklo_epi16(
                                _mm_unpacklo_epi8(zx.o(*(r12 + rdx_78 + 5)), arg5[0].q), arg5[0].q))
                        arg4 = _mm_srai_epi32(_mm_slli_epi32(arg7, 0x18), 0x18)
                        zmm2 = _mm_srai_epi32(_mm_slli_epi32(arg6, 0x18), 0x18)
                        arg7 &= arg8
                        arg7 = _mm_packus_epi16(arg7, arg7)
                        arg7 = _mm_packus_epi16(arg7, arg7)
                        *(rbp_56 + rdx_78 + 1) = arg7.d
                        arg6 &= arg8
                        arg6 = _mm_packus_epi16(arg6, arg6)
                        arg6 = _mm_packus_epi16(arg6, arg6)
                        *(rbp_56 + rdx_78 + 5) = arg6.d
                        arg7 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg7, zmm11[0].q), zmm11[0].q)
                        arg6 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg6, zmm11[0].q), zmm11[0].q)
                        arg4 = _mm_cmpgt_epi32(arg4, arg9)
                        zmm2 = _mm_cmpgt_epi32(zmm2, arg9)
                        zmm5 = _mm_sub_epi32(zmm10, arg7)
                        arg5 = _mm_sub_epi32(zmm10, arg6)
                        zmm4 = _mm_add_epi32(zmm4, (arg4 & not.o(zmm5)) | (arg7 & arg4))
                        zmm1 = _mm_add_epi32(zmm1, (zmm2 & not.o(arg5)) | (arg6 & zmm2))
                        rdx_78 += 8
                    while (r9_9 != rdx_78)
                    
                    zmm1 = _mm_add_epi32(zmm1, zmm4)
                    arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm1, 0x4e), zmm1)
                    rdx_75 = _mm_add_epi32(_mm_shuffle_epi32(arg5, 0xe5), arg5)[0].d
                    rbx_67 = var_128.q
                    rbp_57 = r12 + 1
                    
                    if (r9_9 != r11_7)
                        goto label_1403d4d56
                else
                    r9_9 = 0
                    rdx_75 = 0
                    rbp_57 = r12 + 1
                    rax_93 = rbp_57
                label_1403d4d50:
                    rcx_75 = rbx_67
                label_1403d4d56:
                    int64_t rsi_53 = not.q(r9_9)
                    
                    if ((r11_7.b & 1) != 0)
                        r8.b = *rcx_75
                        r8.b -= *rax_93
                        rcx_75 += 1
                        rax_93 = &rax_93[1]
                        uint32_t rbp_58 = zx.d(r8.b)
                        uint32_t rdi_45 = 0x100 - rbp_58
                        
                        if (rbp_58.b s>= 0)
                            rdi_45 = rbp_58
                        
                        rbp_57 = r12 + 1
                        *r15_3 = r8.b
                        rdx_75 += rdi_45
                        r9_9 |= 1
                        r15_3 = &r15_3[1]
                    
                    if (rsi_53 != neg.q(r11_7))
                        uint64_t i_42 = r11_7 - r9_9
                        uint64_t i_24
                        
                        do
                            char rbx_68 = *rcx_75 - *rax_93
                            *r15_3 = rbx_68
                            uint32_t rbx_69 = zx.d(rbx_68)
                            uint32_t rdi_46 = 0x100 - rbx_69
                            
                            if (rbx_69.b s>= 0)
                                rdi_46 = rbx_69
                            
                            char rbx_70 = *(rcx_75 + 1) - rax_93[1]
                            rcx_75 += 2
                            rax_93 = &rax_93[2]
                            uint32_t rsi_55 = zx.d(rbx_70)
                            uint32_t rdx_79 = 0x100 - rsi_55
                            
                            if (rsi_55.b s>= 0)
                                rdx_79 = rsi_55
                            
                            r15_3[1] = rbx_70
                            rdx_75 = rdx_79 + rdi_46 + rdx_75
                            r15_3 = &r15_3[2]
                            i_24 = i_42
                            i_42 -= 2
                        while (i_24 != 2)
                        rbp_57 = r12 + 1
            
            void* rdi_49 = r14 - r11_7
            
            if (r14 u> r11_7)
                uint64_t rsi_56
                void* r8_21
                void* r9_11
                void* r11_8
                char* r12_4
                char* r13_4
                
                if (rdi_49 u> 3)
                    void* r10_13 = rdi_49 & 0xfffffffffffffffc
                    rsi_56 = r11_7 + r10_13
                    r9_11 = rbx_67 + r10_13
                    r11_8 = r10_13 + rbp_57
                    r12_4 = rax_93 + r10_13
                    r13_4 = r15_3 + r10_13
                    r8_21 = rcx_75 + r10_13
                    zmm12 = zx.o(rdx_75)
                    int64_t rdx_80 = 0
                    zmm11 = data_142ed6810
                    zmm10 = zx.o(0)
                    arg8 = _mm_cmpeq_epi32(arg8, arg8)
                    arg9 = data_14360a1d0
                    
                    do
                        zmm4 = _mm_unpacklo_epi16(
                            _mm_unpacklo_epi8(zx.o(*(rax_93 + rdx_80)), arg5[0].q), arg5[0].q)
                        arg6 = _mm_unpacklo_epi16(
                            _mm_unpacklo_epi8(zx.o(*(rbp_57 + rdx_80)), arg5[0].q), arg5[0].q)
                        arg4 = arg6 & zmm11
                        arg5 = zx.o(*(rbx_67 + rdx_80))
                        arg5 = _mm_unpacklo_epi8(arg5, arg5[0].q)
                        arg5 = _mm_unpacklo_epi16(arg5, arg5[0].q)
                        zmm5 = _mm_sub_epi32(zmm4 & zmm11, arg4)
                        zmm2 = _mm_sub_epi32(arg5 & zmm11, arg4)
                        arg4 = zmm5
                        zmm1 = zmm2
                        arg7 = zmm2
                        zmm2 = _mm_add_epi32(zmm2, zmm5)
                        zmm5 = _mm_srai_epi32(zmm5, 0x1f)
                        arg4 = _mm_add_epi32(arg4, zmm5) ^ zmm5
                        zmm1 = _mm_srai_epi32(zmm1, 0x1f)
                        arg7 = _mm_add_epi32(arg7, zmm1) ^ zmm1
                        zmm1 = _mm_srai_epi32(zmm2, 0x1f)
                        zmm2 = _mm_add_epi32(zmm2, zmm1) ^ zmm1
                        zmm1 = _mm_cmpgt_epi32(arg4, arg7)
                        arg4 = _mm_cmpgt_epi32(arg4, zmm2) | zmm1
                        arg7 = _mm_cmpgt_epi32(arg7, zmm2)
                        arg4 =
                            (arg4 & not.o(arg5)) | (((arg7 & not.o(zmm4)) | (arg6 & arg7)) & arg4)
                        arg5 = zx.o(*(rcx_75 + rdx_80))
                        arg5 = _mm_unpacklo_epi8(arg5, arg5[0].q)
                        arg5 = _mm_sub_epi32(_mm_unpacklo_epi16(arg5, arg5[0].q), arg4)
                        zmm1 =
                            _mm_cmpgt_epi32(_mm_srai_epi32(_mm_slli_epi32(arg5, 0x18), 0x18), arg8)
                        arg5 &= zmm11
                        arg5 = _mm_packus_epi16(arg5, arg5)
                        arg5 = _mm_packus_epi16(arg5, arg5)
                        *(r15_3 + rdx_80) = arg5[0]
                        arg5 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(arg5, zmm10[0].q), zmm10[0].q)
                        zmm2 = _mm_sub_epi32(arg9, arg5)
                        arg5 &= zmm1
                        zmm12 = _mm_add_epi32(zmm12, (zmm1 & not.o(zmm2)) | arg5)
                        rdx_80 += 4
                    while (r10_13 != rdx_80)
                    
                    arg5 = _mm_add_epi32(_mm_shuffle_epi32(zmm12, 0x4e), zmm12)
                    rdx_75 = _mm_add_epi32(_mm_shuffle_epi32(arg5, 0xe5), arg5)[0].d
                    
                    if (rdi_49 != r10_13)
                        goto label_1403d4f9c
                else
                    rsi_56 = r11_7
                    r9_11 = rbx_67
                    r11_8 = rbp_57
                    r12_4 = rax_93
                    r13_4 = r15_3
                    r8_21 = rcx_75
                label_1403d4f9c:
                    int64_t i_25 = 0
                    
                    do
                        uint32_t r15_4 = zx.d(r12_4[i_25])
                        uint32_t rcx_79 = zx.d(*(r11_8 + i_25))
                        uint32_t r10_14 = zx.d(*(r9_11 + i_25))
                        uint32_t rbx_72 = r15_4 - rcx_79
                        uint32_t rdi_51 = neg.d(rbx_72)
                        
                        if (neg.d(rbx_72) s< 0 != neg.d(rbx_72) == 0x80000000)
                            rdi_51 = rbx_72
                        
                        uint32_t rbp_61 = r10_14 - rcx_79
                        uint32_t rsi_58 = neg.d(rbp_61)
                        
                        if (neg.d(rbp_61) s< 0 != neg.d(rbp_61) == 0x80000000)
                            rsi_58 = rbp_61
                        
                        uint32_t rbp_62 = rbp_61 + rbx_72
                        uint32_t rbx_74 = neg.d(rbp_62)
                        
                        if (neg.d(rbp_62) s< 0 != neg.d(rbp_62) == 0x80000000)
                            rbx_74 = rbp_62
                        
                        if (rsi_58 s<= rbx_74)
                            rcx_79 = r15_4
                        
                        uint32_t rbp_63 = rcx_79
                        
                        if (rdi_51 s<= rbx_74)
                            rbp_63 = r10_14
                        
                        if (rdi_51 s<= rsi_58)
                            rcx_79 = rbp_63
                        
                        char rbx_75 = *(r8_21 + i_25) - rcx_79.b
                        uint32_t rcx_80 = zx.d(rbx_75)
                        uint32_t rbp_64 = 0x100 - rcx_80
                        
                        if (rcx_80.b s>= 0)
                            rbp_64 = rcx_80
                        
                        r13_4[i_25] = rbx_75
                        rdx_75 += rbp_64
                        i_25 += 1
                    while (r14 - rsi_56 != i_25)
            
            uint64_t result_3
            int32_t r8_22
            
            if (*(arg1 + 0x3b0) != 2)
                result_3 = result_2
                r8_22 = var_168_1
            else
                uint32_t rax_97 = zx.d(rdx_75.w)
                uint32_t rcx_82 = rdx_75 u>> 0xa & 0xffffffc0
                result_3 = result_2
                r8_22 = var_168_1
                
                if (result_3.b != 0)
                    char* rdx_82 = *(arg1 + 0x3b8)
                    uint64_t r9_13 = zx.q(result_3.d) & 1
                    int64_t i_26
                    
                    if (result_3.b != 1)
                        i_26 = 0
                        
                        do
                            if (rdx_82[i_26] == 4)
                                uint32_t rsi_60 = zx.d(*(*(arg1 + 0x3c0) + (i_26 << 1)))
                                rax_97 = (rax_97 * rsi_60) u>> 8
                                rcx_82 = (rcx_82 * rsi_60) u>> 8
                            
                            if (rdx_82[i_26 + 1] == 4)
                                uint32_t rsi_62 = zx.d(*(*(arg1 + 0x3c0) + (i_26 << 1) + 2))
                                rax_97 = (rax_97 * rsi_62) u>> 8
                                rcx_82 = (rcx_82 * rsi_62) u>> 8
                            
                            i_26 += 2
                        while (result_3 - r9_13 != i_26)
                        
                        if (r9_13 != 0)
                            goto label_1403d50ca
                    else
                        i_26 = 0
                        
                        if (r9_13 != 0)
                        label_1403d50ca:
                            
                            if (rdx_82[i_26] == 4)
                                uint32_t rdx_84 = zx.d(*(*(arg1 + 0x3c0) + (i_26 << 1)))
                                rax_97 = (rax_97 * rdx_84) u>> 8
                                rcx_82 = (rcx_82 * rdx_84) u>> 8
                
                uint32_t rbp_65 = zx.d(*(*(arg1 + 0x3d0) + 8))
                int32_t rcx_86 = rcx_82 * rbp_65
                rdx_75 = 0x7fffffff
                
                if (rcx_86 u<= 0x1fffe07)
                    rdx_75 = ((rax_97 * rbp_65) u>> 3) + ((rcx_86 & 0xfffffff8) << 7)
            
            result_1 = result_3
            
            if (rdx_75 u< r8_22)
                r14_1 = *(arg1 + 0x220)
        else
            result_1 = result_4
    else
    label_1403d3afc:
        uint64_t r9_4 = r13 + 1
        void* rcx_47 = *(arg1 + 0x220)
        uint128_t* rdi_27 = r12 + 1
        int32_t (* r11_6)[0x4] = rcx_47 + 1
        int32_t rax_58 = var_148.d
        void* rdx_32 = zx.q(rax_58)
        int32_t (* rcx_48)[0x4]
        int32_t (* rbx_44)[0x4]
        void* r14_2
        
        if (rax_58 == 0)
            rcx_48 = r9_4
            rbx_44 = rdi_27
            r14_2 = r14
        else
            r14_2 = r14
            uint64_t r8_9
            
            if ((rax + 7).d u> 0xff)
                var_168.q = rdx_32
                int32_t (* rdx_33)[0x4] = r9_4
                r9_4.b = r11_6 u< rdx_32 + r13 + 1
                int32_t (* rsi_32)[0x4] = rdx_33
                result_4.b = rdx_33 u< rcx_47 + rdx_32 + 1
                rdx_33.b = r11_6 u< r12 + rdx_32 + 1
                int64_t rbx_46
                rbx_46.b = rdi_27 u< rcx_47 + rdx_32 + 1
                r8_9 = 0
                
                if ((r9_4.b & result_4.b) == 0)
                    rdx_33.b &= rbx_46.b
                
                if ((r9_4.b & result_4.b) != 0 || rdx_33.b != 0)
                    rbx_44 = rdi_27
                    r9_4 = rsi_32
                    rcx_48 = rsi_32
                    rdx_32 = var_168.q
                    goto label_1403d3cc8
                
                r8_9 = zx.q(var_168) & 0xffffffe0
                uint64_t rbx_48 = zx.q((((r8_9 - 0x20) u>> 5) + 1).d) & 1
                int64_t rdx_37
                
                if (r8_9 == 0x20)
                    rdx_37 = 0
                else
                    int64_t i_45 = rbx_48 + 0 - ((r8_9 - 0x20) u>> 5) - 1
                    rdx_37 = 0
                    int64_t i_27
                    
                    do
                        zmm1 = *(r13 + rdx_37 + 0x11)
                        arg5 = _mm_sub_epi8(*(r13 + rdx_37 + 1), *(r12 + rdx_37 + 1))
                        zmm1 = _mm_sub_epi8(zmm1, *(r12 + rdx_37 + 0x11))
                        *(rcx_47 + rdx_37 + 1) = arg5
                        *(rcx_47 + rdx_37 + 0x11) = zmm1
                        zmm1 = *(r13 + rdx_37 + 0x31)
                        arg5 = _mm_sub_epi8(*(r13 + rdx_37 + 0x21), *(r12 + rdx_37 + 0x21))
                        zmm1 = _mm_sub_epi8(zmm1, *(r12 + rdx_37 + 0x31))
                        *(rcx_47 + rdx_37 + 0x21) = arg5
                        *(rcx_47 + rdx_37 + 0x31) = zmm1
                        rdx_37 += 0x40
                        i_27 = i_45
                        i_45 += 2
                    while (i_27 != -2)
                
                r9_4 = rsi_32
                
                if (rbx_48 != 0)
                    zmm1 = *(r9_4 + rdx_37 + 0x10)
                    arg5 = _mm_sub_epi8(*(r9_4 + rdx_37), *(rdi_27 + rdx_37))
                    zmm1 = _mm_sub_epi8(zmm1, *(rdi_27 + rdx_37 + 0x10))
                    *(r11_6 + rdx_37) = arg5
                    *(r11_6 + rdx_37 + 0x10) = zmm1
                
                r11_6 += r8_9
                rbx_44 = rdi_27 + r8_9
                rcx_48 = r9_4 + r8_9
                rdx_32 = var_168.q
                
                if (r8_9 != rdx_32)
                    goto label_1403d3cc8
            else
                r8_9 = 0
                rbx_44 = rdi_27
                rcx_48 = r9_4
            label_1403d3cc8:
                void* rbp_36 = not.q(r8_9) + rdx_32
                void* rdi_30 = rdx_32 & 3
                
                if (rdi_30 != 0)
                    int64_t i_28 = 0
                    
                    do
                        char rdx_38 = *rcx_48
                        rcx_48 += 1
                        rdx_38 -= *rbx_44
                        rbx_44 += 1
                        *r11_6 = rdx_38
                        r11_6 += 1
                        i_28 -= 1
                    while (neg.q(rdi_30) != i_28)
                    
                    r8_9 -= i_28
                
                if (rbp_36 u>= 3)
                    void* i_37 = rdx_32 - r8_9
                    void* i_29
                    
                    do
                        *r11_6 = *rcx_48 - *rbx_44
                        *(r11_6 + 1) = *(rcx_48 + 1) - *(rbx_44 + 1)
                        *(r11_6 + 2) = *(rcx_48 + 2) - *(rbx_44 + 2)
                        char rax_63 = *(rcx_48 + 3)
                        rcx_48 = &(*rcx_48)[1]
                        rax_63 -= *(rbx_44 + 3)
                        rbx_44 = &(*rbx_44)[1]
                        *(r11_6 + 3) = rax_63
                        r11_6 = &(*r11_6)[1]
                        i_29 = i_37
                        i_37 -= 4
                    while (i_29 != 4)
        
        void* rbp_39 = r14_2 - rdx_32
        
        if (r14_2 u> rdx_32)
            void* r10_5
            void* r12_2
            void* r13_1
            uint128_t* r15_1
            
            if (rbp_39 u> 0xf)
                uint64_t r15_2 = r9_4
                void* rdi_32 = r11_6 + rbp_39
                var_168.q = rdx_32
                void* rdx_40 = r14_2 + 1 - rdx_32
                int64_t r13_2 = r13 + rdx_40
                int64_t r12_3
                r12_3.b = r11_6 u< r12 + rdx_40
                r14_2.b = rdi_27 u< rdi_32
                rdx_40.b = r11_6 u< rbx_44 + rbp_39
                result_4.b = rbx_44 u< rdi_32
                void* r8_11
                r8_11.b = r11_6 u< rcx_48 + rbp_39
                uint128_t* rsi_33
                rsi_33.b = rcx_48 u< rdi_32
                r9_4.b = r11_6 u< r13_2
                rdi_32.b = r15_2 u< rdi_32
                
                if ((r12_3.b & r14_2.b) != 0)
                    r9_4 = r15_2
                    r15_1 = rdi_27
                    r10_5 = rbx_44
                    r12_2 = r11_6
                    r13_1 = rcx_48
                    r14_2 = r14
                label_1403d413d:
                    rdx_32 = var_168.q
                    goto label_1403d4145
                
                rdx_40.b &= result_4.b
                r14_2 = r14
                
                if (rdx_40.b != 0)
                label_1403d412e:
                    r9_4 = r15_2
                    r15_1 = rdi_27
                    r10_5 = rbx_44
                    r12_2 = r11_6
                    r13_1 = rcx_48
                    goto label_1403d413d
                
                r8_11.b &= rsi_33.b
                
                if (r8_11.b != 0)
                    goto label_1403d412e
                
                r9_4.b &= rdi_32.b
                
                if (r9_4.b != 0)
                    goto label_1403d412e
                
                void* rdx_42 = rbp_39 & 0xfffffffffffffff0
                void* rax_67 = var_168.q + rdx_42
                r9_4 = rdx_42 + r15_2
                r15_1 = rdx_42 + rdi_27
                r10_5 = rbx_44 + rdx_42
                r12_2 = r11_6 + rdx_42
                r13_1 = rcx_48 + rdx_42
                int64_t r8_12 = 0
                
                do
                    zmm15 = *(rbx_44 + r8_12)
                    var_168.o = zmm15
                    arg7 = zx.o(0)
                    zmm4 = _mm_unpackhi_epi8(zmm15, arg7.q)
                    zmm14 = _mm_unpackhi_epi16(zmm4, arg7.q)
                    zmm4 = _mm_unpacklo_epi16(zmm4, arg7.q)
                    zmm15 = _mm_unpacklo_epi8(zmm15, arg7.q)
                    zmm5 = _mm_unpackhi_epi16(zmm15, arg7.q)
                    zmm15 = _mm_unpacklo_epi16(zmm15, arg7.q)
                    arg4 = *(rdi_27 + r8_12)
                    var_148.o = arg4
                    zmm2 = _mm_unpackhi_epi8(arg4, arg7.q)
                    arg8 = _mm_unpackhi_epi16(zmm2, arg7.q)
                    zmm2 = _mm_unpacklo_epi16(zmm2, arg7.q)
                    arg4 = _mm_unpacklo_epi8(arg4, arg7.q)
                    arg5 = _mm_unpackhi_epi16(arg4, arg7.q)
                    arg4 = _mm_unpacklo_epi16(arg4, arg7.q)
                    zmm11 = *(r15_2 + r8_12)
                    var_128.o = zmm11
                    zmm1 = _mm_unpackhi_epi8(zmm11, arg7.q)
                    arg9 = _mm_unpackhi_epi16(zmm1, arg7.q)
                    zmm1 = _mm_unpacklo_epi16(zmm1, arg7.q)
                    zmm11 = _mm_unpacklo_epi8(zmm11, arg7.q)
                    zmm10 = _mm_unpackhi_epi16(zmm11, arg7.q)
                    zmm11 = _mm_unpacklo_epi16(zmm11, arg7.q)
                    zmm15 = _mm_sub_epi32(zmm15, arg4)
                    zmm5 = _mm_sub_epi32(zmm5, arg5)
                    zmm4 = _mm_sub_epi32(zmm4, zmm2)
                    zmm14 = _mm_sub_epi32(zmm14, arg8)
                    zmm11 = _mm_sub_epi32(zmm11, arg4)
                    zmm10 = _mm_sub_epi32(zmm10, arg5)
                    zmm1 = _mm_sub_epi32(zmm1, zmm2)
                    arg9 = _mm_sub_epi32(arg9, arg8)
                    arg5 = zmm14
                    int64_t var_108
                    var_108.o = arg9
                    arg4 = arg9
                    arg9 = _mm_add_epi32(arg9, zmm14)
                    zmm14 = _mm_srai_epi32(zmm14, 0x1f)
                    arg5 = _mm_add_epi32(arg5, zmm14) ^ zmm14
                    zmm12 = zmm4
                    arg6 = zmm1
                    zmm14 = zmm1
                    zmm1 = _mm_add_epi32(zmm1, zmm4)
                    zmm4 = _mm_srai_epi32(zmm4, 0x1f)
                    zmm12 = _mm_add_epi32(zmm12, zmm4) ^ zmm4
                    arg8 = zmm10
                    zmm2 = zmm10
                    zmm10 = _mm_add_epi32(zmm10, zmm5)
                    zmm13 = zmm5
                    zmm5 = _mm_srai_epi32(zmm5, 0x1f)
                    zmm13 = _mm_add_epi32(zmm13, zmm5) ^ zmm5
                    arg7 = zmm11
                    zmm5 = zmm11
                    zmm11 = _mm_add_epi32(zmm11, zmm15)
                    zmm4 = zmm15
                    zmm15 = _mm_srai_epi32(zmm15, 0x1f)
                    zmm4 = _mm_add_epi32(zmm4, zmm15) ^ zmm15
                    zmm15 = _mm_srai_epi32(var_108.o, 0x1f)
                    arg4 = _mm_add_epi32(arg4, zmm15) ^ zmm15
                    arg6 = _mm_srai_epi32(arg6, 0x1f)
                    zmm14 = _mm_add_epi32(zmm14, arg6) ^ arg6
                    arg8 = _mm_srai_epi32(arg8, 0x1f)
                    zmm2 = _mm_add_epi32(zmm2, arg8) ^ arg8
                    arg7 = _mm_srai_epi32(arg7, 0x1f)
                    zmm5 = _mm_add_epi32(zmm5, arg7) ^ arg7
                    arg6 = _mm_srai_epi32(arg9, 0x1f)
                    arg9 = _mm_add_epi32(arg9, arg6) ^ arg6
                    arg6 = _mm_srai_epi32(zmm1, 0x1f)
                    zmm1 = _mm_add_epi32(zmm1, arg6) ^ arg6
                    arg6 = _mm_srai_epi32(zmm10, 0x1f)
                    zmm10 = _mm_add_epi32(zmm10, arg6) ^ arg6
                    arg6 = _mm_srai_epi32(zmm11, 0x1f)
                    zmm11 = _mm_add_epi32(zmm11, arg6) ^ arg6
                    arg6 = _mm_cmpgt_epi32(zmm4, zmm5)
                    zmm4 = _mm_cmpgt_epi32(zmm4, zmm11) | arg6
                    arg6 = _mm_cmpgt_epi32(zmm13, zmm2)
                    zmm13 = _mm_cmpgt_epi32(zmm13, zmm10) | arg6
                    arg6 = _mm_cmpgt_epi32(zmm12, zmm14)
                    zmm12 = _mm_cmpgt_epi32(zmm12, zmm1) | arg6
                    arg6 = _mm_cmpgt_epi32(arg5, arg4)
                    arg5 = _mm_cmpgt_epi32(arg5, arg9) | arg6
                    arg6 = data_142ed6810
                    zmm12 = _mm_packus_epi16(zmm12 & arg6, arg5 & arg6)
                    zmm4 = _mm_packus_epi16(_mm_packus_epi16(zmm4 & arg6, zmm13 & arg6), zmm12)
                    arg4 = _mm_cmpgt_epi32(arg4, arg9)
                    zmm14 = _mm_packus_epi16(_mm_cmpgt_epi32(zmm14, zmm1) & arg6, arg4 & arg6)
                    zmm2 = _mm_cmpgt_epi32(zmm2, zmm10)
                    zmm5 = _mm_packus_epi16(
                        _mm_packus_epi16(_mm_cmpgt_epi32(zmm5, zmm11) & arg6, zmm2 & arg6), zmm14)
                    *(r11_6 + r8_12) = _mm_sub_epi8(*(rcx_48 + r8_12), 
                        (zmm4 & not.o(var_128.o))
                            | (((zmm5 & not.o(var_168.o)) | (var_148.o & zmm5)) & zmm4))
                    r8_12 += 0x10
                while (rdx_42 != r8_12)
                
                rdx_32 = rax_67
                
                if (rbp_39 != rdx_42)
                    goto label_1403d4145
            else
                r15_1 = rdi_27
                r10_5 = rbx_44
                r12_2 = r11_6
                r13_1 = rcx_48
            label_1403d4145:
                int64_t i_30 = 0
                
                do
                    uint32_t rcx_49 = zx.d(*(r10_5 + i_30))
                    uint32_t rdx_43 = zx.d(*(r15_1 + i_30))
                    uint32_t r8_13 = zx.d(*(r9_4 + i_30))
                    uint32_t rbp_42 = rcx_49 - rdx_43
                    int32_t rsi_36 = neg.d(rbp_42)
                    
                    if (neg.d(rbp_42) s< 0 != neg.d(rbp_42) == 0x80000000)
                        rsi_36 = rbp_42
                    
                    uint32_t rbx_50 = r8_13 - rdx_43
                    int32_t rdi_35 = neg.d(rbx_50)
                    
                    if (neg.d(rbx_50) s< 0 != neg.d(rbx_50) == 0x80000000)
                        rdi_35 = rbx_50
                    
                    uint32_t rbx_51 = rbx_50 + rbp_42
                    int32_t rbp_44 = neg.d(rbx_51)
                    
                    if (neg.d(rbx_51) s< 0 != neg.d(rbx_51) == 0x80000000)
                        rbp_44 = rbx_51
                    
                    if (rdi_35 s> rbp_44)
                        rcx_49 = rdx_43
                    
                    uint32_t rdx_44 = rcx_49
                    
                    if (rsi_36 s<= rbp_44)
                        rdx_44 = r8_13
                    
                    if (rsi_36 s<= rdi_35)
                        rcx_49 = rdx_44
                    
                    *(r12_2 + i_30) = *(r13_1 + i_30) - rcx_49.b
                    i_30 += 1
                while (r14_2 - rdx_32 != i_30)
        
        r14_1 = *(arg1 + 0x220)
        result_1 = result_2

uint64_t result
int64_t rcx_74
int512_t zmm6
int512_t zmm7
int512_t zmm8
int512_t zmm9
result, rcx_74, zmm6, zmm7, zmm8, zmm9 = sub_1403d2510(arg1, r14_1)

if (*(arg1 + 0x3b1) != 0)
    result = 1
    
    if (result_1.b u>= 2)
        uint64_t rax_91 = zx.q((result_1 - 1).b) & 3
        rcx_74 = 1
        
        if (result_1 - 2 u>= 3)
            int64_t i_31 = 0
            
            do
                char* rbp_52 = *(arg1 + 0x3b8)
                rbp_52[i_31 + 1] = rbp_52[i_31]
                int64_t rbp_53 = *(arg1 + 0x3b8)
                *(rbp_53 + i_31 + 2) = *(rbp_53 + i_31 + 1)
                int64_t rbp_54 = *(arg1 + 0x3b8)
                *(rbp_54 + i_31 + 3) = *(rbp_54 + i_31 + 2)
                int64_t rbp_55 = *(arg1 + 0x3b8)
                *(rbp_55 + i_31 + 4) = *(rbp_55 + i_31 + 3)
                i_31 += 4
            while (result_1 - 1 - rax_91 != i_31)
            
            rcx_74 = i_31 + 1
        
        if (rax_91.b != 0)
            int64_t i_34 = neg.q(rax_91)
            int64_t i_32
            
            do
                char* rdx_73 = *(arg1 + 0x3b8)
                rdx_73[rcx_74] = rdx_73[rcx_74 - 1]
                rcx_74 += 1
                i_32 = i_34
                i_34 += 1
            while (i_32 != -1)
        
        result = result_1
    
    rcx_74.b = *r14_1
    *(*(arg1 + 0x3b8) + result) = rcx_74.b

zmm6.o = var_e8
zmm7.o = var_d8
zmm8.o = var_c8
zmm9.o = var_b8
return result
