// 函数: sub_1403ca780
// 地址: 0x1403ca780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t zmm8[0x2]
uint64_t var_28[0x2] = zmm8
uint64_t zmm7[0x2]
uint64_t var_38[0x2] = zmm7
uint64_t zmm6[0x2]
uint64_t var_48[0x2] = zmm6
uint64_t rdi = arg2
void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result
arg2.b = arg1[4].b

if (arg2.b != 3)
    int32_t r10_1 = *arg1
    result = zx.q(*(arg1 + 0x11))
    int32_t var_64
    int32_t var_60
    int32_t r9_1
    char r11
    
    if ((arg2.b & 2) != 0)
        r11 = *arg3
        var_64 = result.d - zx.d(arg3[1])
        var_60 = result.d - zx.d(arg3[2])
        r9_1 = 3
    else
        r11 = arg3[3]
        r9_1 = 1
    
    int32_t var_68 = result.d - zx.d(r11)
    
    if ((arg2.b & 4) != 0)
        arg2 = zx.q(r9_1)
        r9_1 += 1
        (&var_68)[arg2] = result.d - zx.d(arg3[4])
    
    arg2.w = 1
    
    if (var_68 s> 0)
        if (r9_1 != 1)
            goto label_1403ca83e
        
        goto label_1403ca8b1
    
    var_68 = 0
    arg2 = 0
    
    if (r9_1 == 1)
    label_1403ca8b1:
        
        if (arg2.w != 0)
        label_1403ca8bd:
            result = zx.q(ror.d(result.d - 2, 1))
            
            if (result.d u<= 7)
                result = sx.q(jump_table_1403cacdc[result]) + &jump_table_1403cacdc
                uint64_t zmm0[0x2]
                int32_t zmm1[0x4]
                int32_t zmm3[0x4]
                int32_t zmm4[0x4]
                
                switch (result)
                    case 0x1403ca8d8
                        result = *(arg1 + 8)
                        
                        if (result != 0)
                            int64_t rcx
                            
                            if (result u>= 0x20)
                                rcx = result & 0xffffffffffffffe0
                                uint64_t r8_6 = zx.q((((rcx - 0x20) u>> 5) + 1).d) & 1
                                int64_t rdx_13
                                uint16_t zmm2[0x8]
                                
                                if (rcx == 0x20)
                                    rdx_13 = 0
                                else
                                    int64_t i_3 = r8_6 + 0 - ((rcx - 0x20) u>> 5) - 1
                                    rdx_13 = 0
                                    zmm0 = (*
                                        "UUUUUUUUUUUUUUUUCan't discard critical data on CRC error")[0].o
                                    int64_t i
                                    
                                    do
                                        zmm2 = *(rdi + rdx_13 + 0x10)
                                        zmm3 = *(rdi + rdx_13 + 0x20)
                                        zmm4 = *(rdi + rdx_13 + 0x30)
                                        zmm1 = _mm_srli_epi16(*(rdi + rdx_13), 1)
                                        zmm2 = _mm_srli_epi16(zmm2, 1) & zmm0
                                        *(rdi + rdx_13) = zmm1 & zmm0
                                        *(rdi + rdx_13 + 0x10) = zmm2
                                        zmm3 = _mm_srli_epi16(zmm3, 1)
                                        zmm4 = _mm_srli_epi16(zmm4, 1) & zmm0
                                        *(rdi + rdx_13 + 0x20) = zmm3 & zmm0
                                        *(rdi + rdx_13 + 0x30) = zmm4
                                        rdx_13 += 0x40
                                        i = i_3
                                        i_3 += 2
                                    while (i != -2)
                                
                                if (r8_6 != 0)
                                    zmm1 = *(rdi + rdx_13 + 0x10)
                                    zmm0 = _mm_srli_epi16(*(rdi + rdx_13), 1)
                                    zmm1 = _mm_srli_epi16(zmm1, 1)
                                    zmm2 = (*
                                        "UUUUUUUUUUUUUUUUCan't discard critical data on CRC error")[0].o
                                    *(rdi + rdx_13) = zmm0 & zmm2
                                    *(rdi + rdx_13 + 0x10) = zmm1 & zmm2
                                
                                if (result != rcx)
                                    rdi += rcx
                                    goto label_1403cabad
                            else
                                rcx = 0
                            label_1403cabad:
                                result -= rcx
                                int64_t rcx_10 = 0
                                
                                do
                                    *(rdi + rcx_10) = *(rdi + rcx_10) u>> 1 & 0x55
                                    rcx_10 += 1
                                while (result != rcx_10)
                    case 0x1403ca8f6
                        int64_t r8 = *(arg1 + 8)
                        
                        if (r8 != 0)
                            char rcx_1 = var_68.b
                            result = zx.q(0xf u>> rcx_1)
                            int32_t rdx_5 = (0xf0 u>> rcx_1 & 0xf0) | result.d
                            *rdi = (zx.d(*rdi) u>> rcx_1).b & rdx_5.b
                            
                            if (r8 != 1)
                                result = 1
                                uint64_t rsi_7
                                
                                if (r8 - 1 u< 4 || (&var_68 u> rdi && rdi + r8 u> &var_68))
                                    rsi_7 = rdi
                                label_1403ca968:
                                    int64_t r9_5 = not.q(result) + r8
                                    int64_t rdi_3 = zx.q(r8.d - result.d) & 3
                                    
                                    if (rdi_3 != 0)
                                        int64_t i_4 = neg.q(rdi_3)
                                        int64_t i_1
                                        
                                        do
                                            *(rsi_7 + 1) =
                                                (zx.d(*(rsi_7 + 1)) u>> var_68.b).b & rdx_5.b
                                            rsi_7 += 1
                                            result += 1
                                            i_1 = i_4
                                            i_4 += 1
                                        while (i_1 != -1)
                                    
                                    if (r9_5 u>= 3)
                                        int64_t r8_1 = r8 - result
                                        result = 0
                                        
                                        do
                                            *(rsi_7 + result + 1) =
                                                (zx.d(*(rsi_7 + result + 1)) u>> var_68.b).b
                                                & rdx_5.b
                                            *(rsi_7 + result + 2) =
                                                (zx.d(*(rsi_7 + result + 2)) u>> var_68.b).b
                                                & rdx_5.b
                                            *(rsi_7 + result + 3) =
                                                (zx.d(*(rsi_7 + result + 3)) u>> var_68.b).b
                                                & rdx_5.b
                                            *(rsi_7 + result + 4) =
                                                (zx.d(*(rsi_7 + result + 4)) u>> var_68.b).b
                                                & rdx_5.b
                                            result += 4
                                        while (r8_1 != result)
                                else
                                    int64_t r10_5 = (r8 - 1) & 0xfffffffffffffffc
                                    result = r10_5 + 1
                                    rsi_7 = rdi + r10_5
                                    zmm0 = _mm_shuffle_epi32(zx.o(rdx_5), 0x44)
                                    zmm1 = _mm_shuffle_epi32(zx.o(var_68), 0x44) & data_1430219f0
                                    int64_t rcx_13 = 0
                                    zmm3 = _mm_shuffle_epi32(zmm1, 0x4e)
                                    zmm8 = data_1436adda0
                                    
                                    do
                                        uint128_t zmm5 = zx.o(*(rdi + rcx_13 + 3))
                                        zmm6 = _mm_unpacklo_epi32(
                                            _mm_unpacklo_epi16(
                                                _mm_unpacklo_epi8(zx.o(*(rdi + rcx_13 + 1)), 0), 
                                                0), 
                                            0)
                                        zmm5 = _mm_unpacklo_epi32(
                                            _mm_unpacklo_epi16(_mm_unpacklo_epi8(zmm5, 0), 0), 0)
                                        zmm7 = _mm_srl_epi64(zmm6, zmm1)
                                        zmm6 = _mm_srl_epi64(zmm6, zmm3)
                                        zmm4 = _mm_srl_epi64(zmm5, zmm1)
                                        zmm6[0] = zmm7.q
                                        _mm_srl_epi64(zmm5, zmm3)
                                        zmm5.q = zmm4.q
                                        zmm6 = _mm_and_pd(zmm6, zmm0)
                                        zmm5 = _mm_and_pd(zmm5, zmm0)
                                        zmm6 = _mm_and_pd(zmm6, zmm8)
                                        zmm6 = _mm_packus_epi16(zmm6, zmm6)
                                        zmm6 = _mm_packus_epi16(zmm6, zmm6)
                                        *(rdi + rcx_13 + 1) = _mm_packus_epi16(zmm6, zmm6)[0].w
                                        zmm5 = _mm_and_pd(zmm5, zmm8)
                                        zmm5 = _mm_packus_epi16(zmm5, zmm5)
                                        zmm5 = _mm_packus_epi16(zmm5, zmm5)
                                        *(rdi + rcx_13 + 3) = _mm_packus_epi16(zmm5, zmm5).w
                                        rcx_13 += 4
                                    while (r10_5 != rcx_13)
                                    
                                    if (r8 - 1 != r10_5)
                                        goto label_1403ca968
                    case 0x1403caa06
                        int32_t r10_2 = r10_1 * r9_1
                        
                        if (r10_2 != 0)
                            int32_t r8_3 = r10_2 & 1
                            int64_t rsi_8 = 0
                            
                            if (r10_2 != 1)
                                rsi_8 = 0
                                
                                do
                                    *(rdi + rsi_8) = (zx.d(*(rdi + rsi_8))
                                        u>> (&var_68)[zx.q(modu.dp.d(0:(rsi_8.d), r9_1))].b).b
                                    result = zx.q(zx.d(*(rdi + rsi_8 + 1))
                                        u>> (&var_68)[zx.q(modu.dp.d(0:((rsi_8 + 1).d), r9_1))].b)
                                    *(rdi + rsi_8 + 1) = result.b
                                    rsi_8 += 2
                                while (r10_2 - r8_3 != rsi_8.d)
                                
                                rdi += rsi_8
                            
                            if (r8_3 != 0)
                                arg1.b = (&var_68)[zx.q(modu.dp.d(0:(rsi_8.d), r9_1))].b
                                result = zx.q(zx.d(*rdi) u>> arg1.b)
                                *rdi = result.b
                    case 0x1403caa89
                        int32_t i_2 = r10_1 * r9_1
                        
                        if (i_2 != 0)
                            int64_t rsi_9 = 0
                            
                            do
                                int32_t rax_12 = rsi_9.d
                                result = zx.q(divu.dp.d(0:rax_12, r9_1))
                                uint16_t rbx_27 = ((zx.d(*(rdi + (rsi_9 << 1) + 1))
                                    | zx.d(*(rdi + (rsi_9 << 1))) << 8)
                                    u>> (&var_68)[zx.q(modu.dp.d(0:rax_12, r9_1))].b).w
                                *(rdi + (rsi_9 << 1)) = rbx_27:1.b
                                *(rdi + (rsi_9 << 1) + 1) = rbx_27.b
                                rsi_9 += 1
                            while (i_2 != rsi_9.d)
    else
    label_1403ca83e:
        int32_t rsi_6
        rsi_6.w = 1
        
        if (var_64 s> 0)
            if (r9_1 != 2)
                goto label_1403ca86b
            
            goto label_1403ca851
        
        int32_t var_64_1 = 0
        rsi_6 = arg2.d
        
        if (r9_1 == 2)
        label_1403ca851:
            
            if (rsi_6.w != 0)
                goto label_1403ca8bd
        else
        label_1403ca86b:
            arg3.w = 1
            
            if (var_60 s> 0)
                if (r9_1 != 3)
                    goto label_1403ca89b
                
                goto label_1403ca880
            
            int32_t var_60_1 = 0
            arg3 = zx.q(rsi_6)
            
            if (r9_1 != 3)
            label_1403ca89b:
                arg2.w = 1
                int32_t var_5c
                
                if (var_5c s<= 0)
                    int32_t var_5c_1 = 0
                    arg2 = zx.q(arg3.d)
                
                goto label_1403ca8b1
            
        label_1403ca880:
            
            if (arg3.w != 0)
                goto label_1403ca8bd

__security_check_cookie(result_1 ^ &var_88)
return result
