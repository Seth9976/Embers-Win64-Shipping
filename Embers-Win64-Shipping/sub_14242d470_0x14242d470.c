// 函数: sub_14242d470
// 地址: 0x14242d470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rdx = sx.q(arg6)
uint64_t i_36 = zx.q(arg4)
uint64_t result = zx.q(arg5 - 1)

if (result.d u<= 0x3c)
    int64_t r14_1 = sx.q(i_36.d)
    result = zx.q(lookup_table_14242e158[sx.q(result.d)])
    uint64_t result_1
    uint64_t result_8
    int128_t zmm0
    
    switch (result)
        case 0
            void* rcx_9 = *arg1
            int64_t r11_2 = sx.q(*(arg1 + 0xc))
            uint32_t rax_17 = zx.d(*(rdx * 3 + 0x143a30571))
            uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(*(rdx * 3 + &data_143a30570)))
            result = zx.q(*(rdx * 3 + 0x143a30572))
            zmm4.d = zmm4.d f* 0.00392156886f
            uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_17))
            _mm_shuffle_ps(zmm4, zmm4, 0xe1)
            zmm1.d = zmm1.d f* 0.00392156886f
            uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(result.d))
            zmm4.d = zmm1.d
            _mm_shuffle_ps(zmm4, zmm4, 0xc6)
            zmm2.d = zmm2.d f* 0.00392156886f
            zmm4.d = zmm2.d
            _mm_shuffle_ps(zmm4, zmm4, 0x27)
            zmm4.d = 0x3f800000
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0x39)
            result_8.o = zmm4
            
            if (i_36.d s> 0)
                uint128_t* rdx_12 = rcx_9
                uint64_t i_22 = i_36
                uint64_t result_12 = sx.q(neg.d(r11_2.d))
                result = zx.q((arg3 - 1) * r11_2.d)
                result_8 = result_12
                void* result_3 = sx.q(result.d) + rcx_9
                uint64_t i
                
                do
                    if (rdi s> 0)
                        *rdx_12 = zmm4
                        __builtin_memcpy(&rdx_12[1], rdx_12, ((rdi << 4) - 9) u>> 3 << 3)
                        result_12 = result_8
                    
                    int64_t rcx_14 = 0
                    
                    if (rdi s> 0)
                        result = result_3
                        
                        do
                            rcx_14 += 1
                            *result = zmm4
                            result += 0x10
                        while (rcx_14 s< rdi)
                    
                    rdx_12 += r11_2
                    result_3 += result_12
                    i = i_22
                    i_22 -= 1
                while (i != 1)
            
            int32_t r13_3 = arg3 - i_36.d
            
            if (i_36.d s< r13_3)
                void* rdx_14 = sx.q(r11_2.d * i_36.d) + rcx_9
                uint64_t i_19 = zx.q(r13_3 - i_36.d)
                uint64_t i_1
                
                do
                    if (i_36.d s> 0)
                        *rdx_14 = zmm4
                        __builtin_memcpy(rdx_14 + 0x10, rdx_14, ((r14_1 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_19 = 0
                    
                    if (i_36.d s> 0)
                        do
                            int64_t rax_21 = rcx_19
                            rcx_19 += 1
                            result = (rax_21 - r14_1 + rdi) * 2
                            *(rdx_14 + (result << 3)) = zmm4
                        while (rcx_19 s< r14_1)
                    
                    rdx_14 += r11_2
                    i_1 = i_19
                    i_19 -= 1
                while (i_1 != 1)
        case 1
            return sub_1424278c0(*arg1, 
                ((zx.d(*(rdx * 3 + 0x143a30573)) << 8 | zx.d(*(rdx * 3 + &data_143a30570))) << 8
                    | zx.d(*(rdx * 3 + 0x143a30571))) << 8 | zx.d(*(rdx * 3 + 0x143a30572)), 
                rdi.d, arg3, i_36.d, *(arg1 + 0xc))
        case 2
            char result_2 = *(rdx + 0x143a305a0)
            uint64_t result_11 = *arg1
            int64_t r11_1 = sx.q(*(arg1 + 0xc))
            result_8 = result_11
            
            if (i_36.d s> 0)
                uint64_t result_13 = result_11
                uint64_t i_21 = i_36
                int64_t rcx_3 = sx.q(neg.d(r11_1.d))
                int64_t var_48 = rcx_3
                int64_t rsi_3 = sx.q((arg3 - 1) * r11_1.d) + result_11
                uint64_t i_2
                
                do
                    if (rdi s> 0)
                        int64_t rcx_5
                        int64_t rdi_2
                        rdi_2, rcx_5 = __memfill_u8(result_13, result_2, rdi)
                        rcx_3 = var_48
                    
                    result = 0
                    
                    if (rdi s> 0)
                        do
                            *(rsi_3 + result) = result_2
                            result += 1
                        while (result s< rdi)
                    
                    result_13 += r11_1
                    rsi_3 += rcx_3
                    i_2 = i_21
                    i_21 -= 1
                while (i_2 != 1)
                result_11 = result_8
            
            int32_t r13_1 = arg3 - i_36.d
            
            if (i_36.d s< r13_1)
                result = zx.q(i_36.d * r11_1.d)
                int64_t rsi_5 = sx.q(result.d) + result_11
                uint64_t i_18 = zx.q(r13_1 - i_36.d)
                uint64_t i_3
                
                do
                    if (i_36.d s> 0)
                        result = zx.q(result_2)
                        int64_t rcx_7
                        int64_t rdi_4
                        rdi_4, rcx_7 = __memfill_u8(rsi_5, result.b, r14_1)
                    
                    int64_t rcx_8 = 0
                    
                    if (i_36.d s> 0)
                        do
                            int64_t rax_14 = rcx_8
                            rcx_8 += 1
                            result = rax_14 - r14_1 + rdi
                            *(result + rsi_5) = result_2
                        while (rcx_8 s< r14_1)
                    
                    rsi_5 += r11_1
                    i_3 = i_18
                    i_18 -= 1
                while (i_3 != 1)
        case 3
            int64_t r11_5 = sx.q(*(arg1 + 0xc))
            result_1:4.d = 0
            result_1:2.w = 0xffff
            uint16_t rdx_17 = (((zx.w(*(rdx * 3 + &data_143a30570)) & 0xfff8) << 5
                | zx.w(*(rdx * 3 + 0x143a30571))) & 0xfffc) << 3 | zx.w(*(rdx * 3 + 0x143a30572) u>> 3)
            result_1.w = rdx_17
            int32_t temp0_8
            int32_t temp1_1
            temp0_8:temp1_1 = sx.q((i_36 + 3).d)
            int64_t rbx_2 = sx.q((temp1_1 + (temp0_8 & 3)) s>> 2)
            void* r13_7 = *arg1
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(arg3 + 3)
            int32_t r14_3 = ((temp2_1 & 3) + temp3_1) s>> 2
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q((rdi + 3).d)
            int64_t r9_2 = sx.q((temp5_1 + (temp4_1 & 3)) s>> 2)
            result = result_1
            
            if (rbx_2.d s> 0)
                void* r10_3 = r13_7
                uint64_t i_24 = zx.q(rbx_2.d)
                uint64_t* rsi_13 = sx.q((r14_3 - 1) * r11_5.d) + r13_7
                uint64_t i_4
                
                do
                    int64_t rcx_39
                    int64_t rdi_14
                    
                    if (r9_2 s> 0)
                        rdi_14, rcx_39 = __memfill_u64(r10_3, result, r9_2)
                    int64_t rdx_24 = 0
                    
                    if (r9_2 s> 0)
                        uint64_t* rcx_40 = rsi_13
                        
                        do
                            rdx_24 += 1
                            *rcx_40 = result
                            rcx_40 = &rcx_40[1]
                        while (rdx_24 s< r9_2)
                    
                    r10_3 += r11_5
                    rsi_13 += sx.q(neg.d(r11_5.d))
                    i_4 = i_24
                    i_24 -= 1
                while (i_4 != 1)
                r11_5 = zx.q(r11_5.d)
            
            int32_t r14_4 = r14_3 - rbx_2.d
            
            if (rbx_2.d s< r14_4)
                void* r10_5 = sx.q(rbx_2.d * r11_5.d) + r13_7
                uint64_t i_25 = zx.q(r14_4 - rbx_2.d)
                uint64_t i_5
                
                do
                    int64_t rcx_44
                    int64_t rdi_16
                    
                    if (rbx_2.d s> 0)
                        rdi_16, rcx_44 = __memfill_u64(r10_5, result, rbx_2)
                    int64_t rdx_25 = 0
                    
                    if (rbx_2.d s> 0)
                        do
                            int64_t rcx_47 = r9_2 - rbx_2 + rdx_25
                            rdx_25 += 1
                            *(r10_5 + (rcx_47 << 3)) = result
                        while (rdx_25 s< rbx_2)
                    
                    r10_5 += sx.q(r11_5.d)
                    i_5 = i_25
                    i_25 -= 1
                while (i_5 != 1)
        case 4
            result_1:4.d = 0
            result_1:2.w = 0xffff
            uint16_t rdx_26 = (((zx.w(*(rdx * 3 + &data_143a30570)) & 0xfff8) << 5
                | zx.w(*(rdx * 3 + 0x143a30571))) & 0xfffc) << 3 | zx.w(*(rdx * 3 + 0x143a30572) u>> 3)
            int64_t rcx_49 = sx.q(*(arg1 + 0xc))
            result_1.w = rdx_26
            uint64_t result_9 = result_1
            char rax_39 = *(rdx * 3 + 0x143a30573)
            result_1.b = rax_39
            result_1:1.b = rax_39
            result_1:2.w = 0
            result_1:4.d = 0
            result_8 = result_1
            zmm0 = result_8.o
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q((i_36 + 3).d)
            int64_t r15_2 = sx.q((temp7_1 + (temp6_1 & 3)) s>> 2)
            void* r13_8 = *arg1
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(arg3 + 3)
            int32_t rbx_4 = ((temp8_1 & 3) + temp9_1) s>> 2
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q((rdi + 3).d)
            result = zx.q((temp11_1 + (temp10_1 & 3)) s>> 2)
            int64_t r9_3 = sx.q(result.d)
            
            if (r15_2.d s> 0)
                uint64_t i_26 = zx.q(r15_2.d)
                void* rdx_33 = r13_8
                result = zx.q((rbx_4 - 1) * rcx_49.d)
                void* result_4 = sx.q(result.d) + r13_8
                uint64_t i_6
                
                do
                    if (r9_3 s> 0)
                        *rdx_33 = zmm0
                        __builtin_memcpy(rdx_33 + 0x10, rdx_33, ((r9_3 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_54 = 0
                    
                    if (r9_3 s> 0)
                        result = result_4
                        
                        do
                            rcx_54 += 1
                            *result = zmm0
                            result += 0x10
                        while (rcx_54 s< r9_3)
                    
                    rdx_33 += rcx_49
                    result_4 += sx.q(neg.d(rcx_49.d))
                    i_6 = i_26
                    i_26 -= 1
                while (i_6 != 1)
                rcx_49 = zx.q(rcx_49.d)
            
            int32_t rbx_5 = rbx_4 - r15_2.d
            
            if (r15_2.d s< rbx_5)
                result = zx.q(r15_2.d * rcx_49.d)
                void* r10_8 = sx.q(result.d) + r13_8
                uint64_t i_27 = zx.q(rbx_5 - r15_2.d)
                uint64_t i_7
                
                do
                    if (r15_2.d s> 0)
                        *r10_8 = zmm0
                        __builtin_memcpy(r10_8 + 0x10, r10_8, ((r15_2 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_59 = 0
                    
                    if (r15_2.d s> 0)
                        do
                            int64_t rax_56 = r9_3 - r15_2 + rcx_59
                            rcx_59 += 1
                            result = rax_56 * 2
                            *(r10_8 + (result << 3)) = zmm0
                        while (rcx_59 s< r15_2)
                    
                    r10_8 += sx.q(rcx_49.d)
                    i_7 = i_27
                    i_27 -= 1
                while (i_7 != 1)
        case 5
            int64_t rdi_7 = sx.q(*(arg1 + 0xc))
            result = sub_14243c600(rdx * 3 + &data_143a30570)
            uint64_t result_10 = *arg1
            result_8 = result_10
            
            if (i_36.d s> 0)
                uint64_t result_14 = result_10
                uint64_t i_23 = i_36
                uint64_t* rsi_9 = sx.q((arg3 - 1) * rdi_7.d) + result_10
                uint64_t i_8
                
                do
                    int64_t rcx_26
                    int64_t rdi_9
                    
                    if (rdi s> 0)
                        rdi_9, rcx_26 = __memfill_u64(result_14, result, rdi)
                    int64_t rdx_15 = 0
                    
                    if (rdi s> 0)
                        uint64_t* rcx_27 = rsi_9
                        
                        do
                            rdx_15 += 1
                            *rcx_27 = result
                            rcx_27 = &rcx_27[1]
                        while (rdx_15 s< rdi)
                    
                    result_14 += rdi_7
                    rsi_9 += sx.q(neg.d(rdi_7.d))
                    i_8 = i_23
                    i_23 -= 1
                while (i_8 != 1)
                result_10 = result_8
                rdi_7 = zx.q(rdi_7.d)
            
            int32_t r13_5 = arg3 - i_36.d
            
            if (i_36.d s< r13_5)
                int64_t rsi_11 = sx.q(rdi_7.d * i_36.d) + result_10
                uint64_t i_20 = zx.q(r13_5 - i_36.d)
                uint64_t i_9
                
                do
                    int64_t rcx_29
                    int64_t rdi_12
                    
                    if (i_36.d s> 0)
                        rdi_12, rcx_29 = __memfill_u64(rsi_11, result, r14_1)
                    int64_t rdx_16 = 0
                    
                    if (i_36.d s> 0)
                        do
                            int64_t rcx_30 = rdx_16
                            rdx_16 += 1
                            *(rsi_11 + ((rcx_30 - r14_1 + rdi) << 3)) = result
                        while (rdx_16 s< r14_1)
                    
                    rsi_11 += sx.q(rdi_7.d)
                    i_9 = i_20
                    i_20 -= 1
                while (i_9 != 1)
        case 6
            char rax_68 = *(rdx * 3 + &data_143a30570)
            int64_t rcx_74 = sx.q(*(arg1 + 0xc))
            result_8.b = rax_68
            result_8:1.b = rax_68
            char rax_69 = *(rdx * 3 + 0x143a30571)
            int64_t var_30
            var_30.b = rax_69
            var_30:1.b = rax_69
            int32_t temp18_1
            int32_t temp19_1
            temp18_1:temp19_1 = sx.q((i_36 + 3).d)
            result_8:2.w = 0
            result_8:4.d = 0
            var_30:2.w = 0
            int64_t r14_12 = sx.q((temp19_1 + (temp18_1 & 3)) s>> 2)
            void* r13_10 = *arg1
            int32_t temp20_1
            int32_t temp21_1
            temp20_1:temp21_1 = sx.q(arg3 + 3)
            var_30:4.d = 0
            zmm0 = result_8.o
            int32_t rbx_9 = ((temp20_1 & 3) + temp21_1) s>> 2
            int32_t temp22_1
            int32_t temp23_1
            temp22_1:temp23_1 = sx.q((rdi + 3).d)
            result = zx.q((temp23_1 + (temp22_1 & 3)) s>> 2)
            int64_t r9_6 = sx.q(result.d)
            
            if (r14_12.d s> 0)
                uint64_t i_30 = zx.q(r14_12.d)
                void* rdx_49 = r13_10
                result = zx.q((rbx_9 - 1) * rcx_74.d)
                void* result_5 = sx.q(result.d) + r13_10
                uint64_t i_10
                
                do
                    if (r9_6 s> 0)
                        *rdx_49 = zmm0
                        __builtin_memcpy(rdx_49 + 0x10, rdx_49, ((r9_6 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_79 = 0
                    
                    if (r9_6 s> 0)
                        result = result_5
                        
                        do
                            rcx_79 += 1
                            *result = zmm0
                            result += 0x10
                        while (rcx_79 s< r9_6)
                    
                    rdx_49 += rcx_74
                    result_5 += sx.q(neg.d(rcx_74.d))
                    i_10 = i_30
                    i_30 -= 1
                while (i_10 != 1)
                rcx_74 = zx.q(rcx_74.d)
            
            int32_t rbx_10 = rbx_9 - r14_12.d
            
            if (r14_12.d s< rbx_10)
                result = zx.q(r14_12.d * rcx_74.d)
                void* r10_14 = sx.q(result.d) + r13_10
                uint64_t i_31 = zx.q(rbx_10 - r14_12.d)
                uint64_t i_11
                
                do
                    if (r14_12.d s> 0)
                        *r10_14 = zmm0
                        __builtin_memcpy(r10_14 + 0x10, r10_14, ((r14_12 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_84 = 0
                    
                    if (r14_12.d s> 0)
                        do
                            int64_t rax_85 = r9_6 - r14_12 + rcx_84
                            rcx_84 += 1
                            result = rax_85 * 2
                            *(r10_14 + (result << 3)) = zmm0
                        while (rcx_84 s< r14_12)
                    
                    r10_14 += sx.q(rcx_74.d)
                    i_11 = i_31
                    i_31 -= 1
                while (i_11 != 1)
        case 7
            return sub_1424278c0(*arg1, 
                ((zx.d(*(rdx * 3 + 0x143a30573)) << 8 | zx.d(*(rdx * 3 + 0x143a30572))) << 8
                    | zx.d(*(rdx * 3 + 0x143a30571))) << 8 | zx.d(*(rdx * 3 + &data_143a30570)), 
                rdi.d, arg3, i_36.d, *(arg1 + 0xc))
        case 8
            char rax_57 = *(rdx + 0x143a305a0)
            int64_t r11_6 = sx.q(*(arg1 + 0xc))
            result_1.b = rax_57
            result_1:1.b = rax_57
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q((i_36 + 3).d)
            result_1:2.w = 0
            result_1:4.d = 0
            int64_t rbx_7 = sx.q((temp13_1 + (temp12_1 & 3)) s>> 2)
            void* r13_9 = *arg1
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(arg3 + 3)
            int32_t r14_9 = ((temp14_1 & 3) + temp15_1) s>> 2
            int32_t temp16_1
            int32_t temp17_1
            temp16_1:temp17_1 = sx.q((rdi + 3).d)
            int64_t rsi_16 = sx.q((temp17_1 + (temp16_1 & 3)) s>> 2)
            result = result_1
            
            if (rbx_7.d s> 0)
                void* r10_9 = r13_9
                uint64_t i_28 = zx.q(rbx_7.d)
                uint64_t* r9_5 = sx.q((r14_9 - 1) * r11_6.d) + r13_9
                uint64_t i_12
                
                do
                    int64_t rcx_65
                    int64_t rdi_20
                    
                    if (rsi_16 s> 0)
                        rdi_20, rcx_65 = __memfill_u64(r10_9, result, rsi_16)
                    int64_t rdx_41 = 0
                    
                    if (rsi_16 s> 0)
                        uint64_t* rcx_66 = r9_5
                        
                        do
                            rdx_41 += 1
                            *rcx_66 = result
                            rcx_66 = &rcx_66[1]
                        while (rdx_41 s< rsi_16)
                    
                    r10_9 += r11_6
                    r9_5 += sx.q(neg.d(r11_6.d))
                    i_12 = i_28
                    i_28 -= 1
                while (i_12 != 1)
                r11_6 = zx.q(r11_6.d)
            
            int32_t r14_10 = r14_9 - rbx_7.d
            
            if (rbx_7.d s< r14_10)
                void* r10_11 = sx.q(rbx_7.d * r11_6.d) + r13_9
                uint64_t i_29 = zx.q(r14_10 - rbx_7.d)
                uint64_t i_13
                
                do
                    int64_t rcx_70
                    int64_t rdi_22
                    
                    if (rbx_7.d s> 0)
                        rdi_22, rcx_70 = __memfill_u64(r10_11, result, rbx_7)
                    int64_t rdx_42 = 0
                    
                    if (rbx_7.d s> 0)
                        do
                            int64_t rcx_73 = rsi_16 - rbx_7 + rdx_42
                            rdx_42 += 1
                            *(r10_11 + (rcx_73 << 3)) = result
                        while (rdx_42 s< rbx_7)
                    
                    r10_11 += sx.q(r11_6.d)
                    i_13 = i_29
                    i_29 -= 1
                while (i_13 != 1)
        case 9
            int32_t temp36_1
            int32_t temp37_1
            temp36_1:temp37_1 = sx.q((i_36 + 3).d)
            int32_t temp38_1
            int32_t temp39_1
            temp38_1:temp39_1 = sx.q(arg3 + 3)
            int32_t temp40_1
            int32_t temp41_1
            temp40_1:temp41_1 = sx.q(arg2 + 3)
            result_8.o = *sub_14243c4b0(&result_8, rdx * 3 + &data_143a30570, 0)
            return sub_1424279d0(*arg1, &result_8, ((temp40_1 & 3) + temp41_1) s>> 2, 
                ((temp38_1 & 3) + temp39_1) s>> 2, ((temp36_1 & 3) + temp37_1) s>> 2, *(arg1 + 0xc))
        case 0xa
            int32_t temp42_1
            int32_t temp43_1
            temp42_1:temp43_1 = sx.q((i_36 + 7).d)
            int32_t temp44_1
            int32_t temp45_1
            temp44_1:temp45_1 = sx.q(arg3 + 7)
            int32_t temp46_1
            int32_t temp47_1
            temp46_1:temp47_1 = sx.q(arg2 + 7)
            result_8.o = *sub_14243c4b0(&result_8, rdx * 3 + &data_143a30570, 0)
            return sub_1424279d0(*arg1, &result_8, ((temp46_1 & 7) + temp47_1) s>> 3, 
                ((temp44_1 & 7) + temp45_1) s>> 3, ((temp42_1 & 7) + temp43_1) s>> 3, *(arg1 + 0xc))
        case 0xb
            int64_t* rax_86 = sub_14243c530(&result_8, rdx * 3 + &data_143a30570)
            int64_t rcx_86 = sx.q(*(arg1 + 0xc))
            int128_t zmm0_1 = *rax_86
            int32_t temp24_1
            int32_t temp25_1
            temp24_1:temp25_1 = sx.q((i_36 + 3).d)
            int64_t r14_13 = sx.q((temp25_1 + (temp24_1 & 3)) s>> 2)
            void* r13_11 = *arg1
            int32_t temp26_1
            int32_t temp27_1
            temp26_1:temp27_1 = sx.q(arg3 + 3)
            int32_t rbx_13 = ((temp26_1 & 3) + temp27_1) s>> 2
            int32_t temp28_1
            int32_t temp29_1
            temp28_1:temp29_1 = sx.q((rdi + 3).d)
            result = zx.q((temp29_1 + (temp28_1 & 3)) s>> 2)
            int64_t r9_7 = sx.q(result.d)
            
            if (r14_13.d s> 0)
                uint64_t i_32 = zx.q(r14_13.d)
                void* rdx_58 = r13_11
                result = zx.q((rbx_13 - 1) * rcx_86.d)
                void* result_6 = sx.q(result.d) + r13_11
                uint64_t i_14
                
                do
                    if (r9_7 s> 0)
                        *rdx_58 = zmm0_1
                        __builtin_memcpy(rdx_58 + 0x10, rdx_58, ((r9_7 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_91 = 0
                    
                    if (r9_7 s> 0)
                        result = result_6
                        
                        do
                            rcx_91 += 1
                            *result = zmm0_1
                            result += 0x10
                        while (rcx_91 s< r9_7)
                    
                    rdx_58 += rcx_86
                    result_6 += sx.q(neg.d(rcx_86.d))
                    i_14 = i_32
                    i_32 -= 1
                while (i_14 != 1)
                rcx_86 = zx.q(rcx_86.d)
            
            int32_t rbx_14 = rbx_13 - r14_13.d
            
            if (r14_13.d s< rbx_14)
                result = zx.q(r14_13.d * rcx_86.d)
                void* r10_17 = sx.q(result.d) + r13_11
                uint64_t i_33 = zx.q(rbx_14 - r14_13.d)
                uint64_t i_15
                
                do
                    if (r14_13.d s> 0)
                        *r10_17 = zmm0_1
                        __builtin_memcpy(r10_17 + 0x10, r10_17, ((r14_13 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_96 = 0
                    
                    if (r14_13.d s> 0)
                        do
                            int64_t rax_102 = r9_7 - r14_13 + rcx_96
                            rcx_96 += 1
                            result = rax_102 * 2
                            *(r10_17 + (result << 3)) = zmm0_1
                        while (rcx_96 s< r14_13)
                    
                    r10_17 += sx.q(rcx_86.d)
                    i_15 = i_33
                    i_33 -= 1
                while (i_15 != 1)
        case 0xc
            uint32_t rdi_27 = zx.d(*(rdx * 3 + 0x143a30571))
            uint32_t rdx_60 = zx.d(*(rdx * 3 + &data_143a30570))
            int64_t var_30_1 = 0
            uint64_t rax_107 = zx.q(*(rdx * 3 + 0x143a30572))
            result_8.d = (((((rdi_27 << 0x1b & 0xf01fffff) | rdi_27 << 0x14) & 0xffe03fff)
                | rdx_60 << 0xd) & 0xffffc040) | (rdx_60 | 1) << 6
            int32_t temp30_1
            int32_t temp31_1
            temp30_1:temp31_1 = sx.q((i_36 + 3).d)
            int64_t r15_9 = sx.q((temp31_1 + (temp30_1 & 3)) s>> 2)
            void* r13_12 = *arg1
            int32_t temp32_1
            int32_t temp33_1
            temp32_1:temp33_1 = sx.q(arg3 + 3)
            result_8:4.d = (((rax_107.d << 9 & 0xfffffc07) | (rax_107 << 2).d) & 0xfffffff8)
                | rdi_27 u>> 5 | 0xfffe0000
            int64_t rcx_112 = sx.q(*(arg1 + 0xc))
            zmm0 = result_8.o
            int32_t rbx_17 = ((temp32_1 & 3) + temp33_1) s>> 2
            int32_t temp34_1
            int32_t temp35_1
            temp34_1:temp35_1 = sx.q(arg2 + 3)
            result = zx.q((temp35_1 + (temp34_1 & 3)) s>> 2)
            int64_t r9_8 = sx.q(result.d)
            
            if (r15_9.d s> 0)
                uint64_t i_34 = zx.q(r15_9.d)
                void* rdx_69 = r13_12
                result = zx.q((rbx_17 - 1) * rcx_112.d)
                void* result_7 = sx.q(result.d) + r13_12
                uint64_t i_16
                
                do
                    if (r9_8 s> 0)
                        *rdx_69 = zmm0
                        __builtin_memcpy(rdx_69 + 0x10, rdx_69, ((r9_8 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_117 = 0
                    
                    if (r9_8 s> 0)
                        result = result_7
                        
                        do
                            rcx_117 += 1
                            *result = zmm0
                            result += 0x10
                        while (rcx_117 s< r9_8)
                    
                    rdx_69 += rcx_112
                    result_7 += sx.q(neg.d(rcx_112.d))
                    i_16 = i_34
                    i_34 -= 1
                while (i_16 != 1)
                rcx_112 = zx.q(rcx_112.d)
            
            int32_t rbx_18 = rbx_17 - r15_9.d
            
            if (r15_9.d s< rbx_18)
                result = zx.q(r15_9.d * rcx_112.d)
                void* r10_20 = sx.q(result.d) + r13_12
                uint64_t i_35 = zx.q(rbx_18 - r15_9.d)
                uint64_t i_17
                
                do
                    if (r15_9.d s> 0)
                        *r10_20 = zmm0
                        __builtin_memcpy(r10_20 + 0x10, r10_20, ((r15_9 << 4) - 9) u>> 3 << 3)
                    
                    int64_t rcx_122 = 0
                    
                    if (r15_9.d s> 0)
                        do
                            int64_t rax_125 = r9_8 - r15_9 + rcx_122
                            rcx_122 += 1
                            result = rax_125 * 2
                            *(r10_20 + (result << 3)) = zmm0
                        while (rcx_122 s< r15_9)
                    
                    r10_20 += sx.q(rcx_112.d)
                    i_17 = i_35
                    i_35 -= 1
                while (i_17 != 1)

return result
