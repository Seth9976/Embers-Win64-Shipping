// 函数: sub_142448b30
// 地址: 0x142448b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_18 = zx.q(arg3)
int64_t r13 = sx.q(arg2)
void* result
int32_t var_38
int32_t var_30
int64_t var_28
uint128_t zmm0

if (arg4 - 1 u> 0x3c)
    result.b = 0
else
    switch (arg4)
        case 1
            uint32_t rax_8 = zx.d(arg5[1])
            uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(*arg5))
            uint32_t rax_9 = zx.d(arg5[2])
            zmm3.d = zmm3.d f* 0.00392156886f
            uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_8))
            result = *arg1
            zmm1.d = zmm1.d f* 0.00392156886f
            int32_t var_34_1 = zmm1.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_9)).d f* 0.00392156886f
            int32_t var_30_1 = zmm0.d
            int32_t var_2c_1 = 0x3f800000
            
            if (i_18.d s<= 0)
                result.b = 1
            else
                int64_t r8 = sx.q(*(arg1 + 0xc))
                uint64_t i_12 = i_18
                uint64_t i
                
                do
                    if (r13.d s> 0)
                        *result = zmm3.d.o
                        __builtin_memcpy(result + 0x10, result, ((r13 << 4) - 9) u>> 3 << 3)
                    
                    result += r8
                    i = i_12
                    i_12 -= 1
                while (i != 1)
                result.b = 1
        case 2
            int64_t rdx = *arg1
            int32_t rsi_7 =
                ((zx.d(arg5[3]) << 8 | zx.d(*arg5)) << 8 | zx.d(arg5[1])) << 8 | zx.d(arg5[2])
            
            if (i_18.d s<= 0)
                result.b = 1
            else
                int64_t r9_1 = sx.q(*(arg1 + 0xc))
                uint64_t i_16 = i_18
                uint64_t i_1
                
                do
                    int64_t rcx_2
                    int64_t rdi_2
                    
                    if (r13.d s> 0)
                        rdi_2, rcx_2 = __memfill_u32(rdx, rsi_7, r13)
                    rdx += r9_1
                    i_1 = i_16
                    i_16 -= 1
                while (i_1 != 1)
                result.b = 1
        case 3, 4, 6, 8, 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x14, 0x15, 0x16, 0x18, 
                0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x26, 0x28, 
                0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x33, 0x35, 0x36, 0x39, 0x3a, 
                0x3b
            result.b = 0
        case 5
            int64_t rsi_16 = *arg1
            var_38:2.w = 0xffff
            var_38.w =
                (((zx.w(*arg5) & 0xfff8) << 5 | zx.w(arg5[1])) & 0xfffc) << 3 | zx.w(arg5[2] u>> 3)
            int32_t var_34_2 = 0
            int32_t temp0_4
            int32_t temp1_1
            temp0_4:temp1_1 = sx.q((i_18 + 3).d)
            result = zx.q((temp1_1 + (temp0_4 & 3)) s>> 2)
            
            if (result.d s<= 0)
                result.b = 1
            else
                int64_t r9_3 = sx.q(*(arg1 + 0xc))
                int32_t temp16_1
                int32_t temp17_1
                temp16_1:temp17_1 = sx.q((r13 + 3).d)
                uint64_t i_13 = zx.q(result.d)
                int64_t r8_2 = sx.q((temp17_1 + (temp16_1 & 3)) s>> 2)
                uint64_t i_2
                
                do
                    int64_t rcx_18
                    int64_t rdi_9
                    
                    if (r8_2 s> 0)
                        rdi_9, rcx_18 = __memfill_u64(rsi_16, var_38.q, r8_2)
                    rsi_16 += r9_3
                    i_2 = i_13
                    i_13 -= 1
                while (i_2 != 1)
                result.b = 1
        case 7
            uint128_t* r8_3 = *arg1
            var_38:2.w = 0xffff
            var_38.w =
                (((zx.w(*arg5) & 0xfff8) << 5 | zx.w(arg5[1])) & 0xfffc) << 3 | zx.w(arg5[2] u>> 3)
            int32_t var_34_3 = 0
            int64_t var_20_1 = var_38.q
            char rax_22 = arg5[3]
            var_38.b = rax_22
            var_38:1.b = rax_22
            var_38:2.w = 0
            int32_t var_34_4 = 0
            var_28 = var_38.q
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q((i_18 + 3).d)
            result = zx.q((temp3_1 + (temp2_1 & 3)) s>> 2)
            
            if (result.d s<= 0)
                result.b = 1
            else
                int64_t r9_4 = sx.q(*(arg1 + 0xc))
                zmm0 = var_28.o
                int32_t temp18_1
                int32_t temp19_1
                temp18_1:temp19_1 = sx.q((r13 + 3).d)
                int64_t rdx_13 = sx.q((temp19_1 + (temp18_1 & 3)) s>> 2)
                result = zx.q(result.d)
                void* i_3
                
                do
                    if (rdx_13 s> 0)
                        *r8_3 = zmm0
                        __builtin_memcpy(&r8_3[1], r8_3, ((rdx_13 << 4) - 9) u>> 3 << 3)
                    
                    r8_3 += r9_4
                    i_3 = result
                    result -= 1
                while (i_3 != 1)
                result.b = 1
        case 0x13
            result = sub_14243c600(arg5)
            int64_t rdx_2 = *arg1
            
            if (i_18.d s<= 0)
                result.b = 1
            else
                int64_t r8_1 = sx.q(*(arg1 + 0xc))
                uint64_t i_15 = i_18
                uint64_t i_4
                
                do
                    int64_t rcx_13
                    int64_t rdi_7
                    
                    if (r13.d s> 0)
                        rdi_7, rcx_13 = __memfill_u64(rdx_2, result, r13)
                    rdx_2 += r8_1
                    i_4 = i_15
                    i_15 -= 1
                while (i_4 != 1)
                result.b = 1
        case 0x17
            uint128_t* r8_5 = *arg1
            var_38:2.w = 0
            int32_t var_34_6 = 0
            char rax_39 = *arg5
            var_38.b = rax_39
            var_38:1.b = rax_39
            char rax_40 = arg5[1]
            var_30.b = rax_40
            var_30:1.b = rax_40
            var_30:2.w = 0
            int32_t var_2c_2 = 0
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q((i_18 + 3).d)
            result = zx.q((temp7_1 + (temp6_1 & 3)) s>> 2)
            
            if (result.d s<= 0)
                result.b = 1
            else
                int64_t r9_6 = sx.q(*(arg1 + 0xc))
                int32_t temp22_1
                int32_t temp23_1
                temp22_1:temp23_1 = sx.q((r13 + 3).d)
                int64_t rdx_22 = sx.q((temp23_1 + (temp22_1 & 3)) s>> 2)
                result = zx.q(result.d)
                void* i_5
                
                do
                    if (rdx_22 s> 0)
                        *r8_5 = var_38.o
                        __builtin_memcpy(&r8_5[1], r8_5, ((rdx_22 << 4) - 9) u>> 3 << 3)
                    
                    r8_5 += r9_6
                    i_5 = result
                    result -= 1
                while (i_5 != 1)
                result.b = 1
        case 0x25, 0x3c, 0x3d
            int64_t rdx_1 = *arg1
            int32_t rsi_14 =
                ((zx.d(arg5[3]) << 8 | zx.d(arg5[2])) << 8 | zx.d(arg5[1])) << 8 | zx.d(*arg5)
            
            if (i_18.d s<= 0)
                result.b = 1
            else
                int64_t r9_2 = sx.q(*(arg1 + 0xc))
                uint64_t i_17 = i_18
                uint64_t i_6
                
                do
                    int64_t rcx_5
                    int64_t rdi_4
                    
                    if (r13.d s> 0)
                        rdi_4, rcx_5 = __memfill_u32(rdx_1, rsi_14, r13)
                    rdx_1 += r9_2
                    i_6 = i_17
                    i_17 -= 1
                while (i_6 != 1)
                result.b = 1
        case 0x27
            int64_t rsi_18 = *arg1
            var_38:2.w = 0
            int32_t var_34_5 = 0
            char rcx_25 = *arg5
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q((i_18 + 3).d)
            var_38.b = rcx_25
            var_38:1.b = rcx_25
            result = zx.q((temp5_1 + (temp4_1 & 3)) s>> 2)
            
            if (result.d s<= 0)
                result.b = 1
            else
                int64_t r9_5 = sx.q(*(arg1 + 0xc))
                int32_t temp20_1
                int32_t temp21_1
                temp20_1:temp21_1 = sx.q((r13 + 3).d)
                uint64_t i_14 = zx.q(result.d)
                int64_t r8_4 = sx.q((temp21_1 + (temp20_1 & 3)) s>> 2)
                uint64_t i_7
                
                do
                    int64_t rcx_28
                    int64_t rdi_13
                    
                    if (r8_4 s> 0)
                        rdi_13, rcx_28 = __memfill_u64(rsi_18, var_38.q, r8_4)
                    rsi_18 += r9_5
                    i_7 = i_14
                    i_14 -= 1
                while (i_7 != 1)
                result.b = 1
        case 0x32
            int64_t* rax_69 = sub_14243c4b0(&var_28, arg5, 0)
            int128_t* r8_8 = *arg1
            zmm0 = *rax_69
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q((i_18 + 3).d)
            result = zx.q((temp13_1 + (temp12_1 & 3)) s>> 2)
            
            if (result.d s<= 0)
                result.b = 1
            else
                int64_t r9_9 = sx.q(*(arg1 + 0xc))
                int32_t temp28_1
                int32_t temp29_1
                temp28_1:temp29_1 = sx.q((r13 + 3).d)
                int64_t rdx_42 = sx.q((temp29_1 + (temp28_1 & 3)) s>> 2)
                result = zx.q(result.d)
                void* i_8
                
                do
                    if (rdx_42 s> 0)
                        *r8_8 = zmm0
                        __builtin_memcpy(&r8_8[1], r8_8, ((rdx_42 << 4) - 9) u>> 3 << 3)
                    
                    r8_8 += r9_9
                    i_8 = result
                    result -= 1
                while (i_8 != 1)
                result.b = 1
        case 0x34
            int64_t* rax_77 = sub_14243c4b0(&var_28, arg5, 0)
            int128_t* r8_9 = *arg1
            zmm0 = *rax_77
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q((i_18 + 7).d)
            result = zx.q((temp15_1 + (temp14_1 & 7)) s>> 3)
            
            if (result.d s> 0)
                int64_t r9_10 = sx.q(*(arg1 + 0xc))
                int32_t temp30_1
                int32_t temp31_1
                temp30_1:temp31_1 = sx.q((r13 + 7).d)
                int64_t rdx_48 = sx.q((temp31_1 + (temp30_1 & 7)) s>> 3)
                result = zx.q(result.d)
                void* i_9
                
                do
                    if (rdx_48 s> 0)
                        *r8_9 = zmm0
                        __builtin_memcpy(&r8_9[1], r8_9, ((rdx_48 << 4) - 9) u>> 3 << 3)
                    
                    r8_9 += r9_10
                    i_9 = result
                    result -= 1
                while (i_9 != 1)
            
            result.b = 1
        case 0x37
            int64_t* rax_48 = sub_14243c530(&var_28, arg5)
            int128_t* r8_6 = *arg1
            int128_t zmm0_1 = *rax_48
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q((i_18 + 3).d)
            result = zx.q((temp9_1 + (temp8_1 & 3)) s>> 2)
            
            if (result.d s<= 0)
                result.b = 1
            else
                int64_t r9_7 = sx.q(*(arg1 + 0xc))
                int32_t temp24_1
                int32_t temp25_1
                temp24_1:temp25_1 = sx.q((r13 + 3).d)
                int64_t rdx_28 = sx.q((temp25_1 + (temp24_1 & 3)) s>> 2)
                result = zx.q(result.d)
                void* i_10
                
                do
                    if (rdx_28 s> 0)
                        *r8_6 = zmm0_1
                        __builtin_memcpy(&r8_6[1], r8_6, ((rdx_28 << 4) - 9) u>> 3 << 3)
                    
                    r8_6 += r9_7
                    i_10 = result
                    result -= 1
                while (i_10 != 1)
                result.b = 1
        case 0x38
            uint128_t* r8_7 = *arg1
            uint32_t rsi_21 = zx.d(arg5[1])
            uint32_t rdx_29 = zx.d(*arg5)
            uint64_t rax_60 = zx.q(arg5[2])
            var_30.q = 0
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q((i_18 + 3).d)
            result = zx.q((temp11_1 + (temp10_1 & 3)) s>> 2)
            int32_t var_34_7 = (((rax_60.d << 9 & 0xfffffc07) | (rax_60 << 2).d) & 0xfffffff8)
                | rsi_21 u>> 5 | 0xfffe0000
            
            if (result.d s<= 0)
                result.b = 1
            else
                int64_t r9_8 = sx.q(*(arg1 + 0xc))
                int32_t temp26_1
                int32_t temp27_1
                temp26_1:temp27_1 = sx.q((r13 + 3).d)
                int64_t rdx_36 = sx.q((temp27_1 + (temp26_1 & 3)) s>> 2)
                result = zx.q(result.d)
                void* i_11
                
                do
                    if (rdx_36 s> 0)
                        *r8_7 = ((((((rsi_21 << 0x1b & 0xf01fffff) | rsi_21 << 0x14) & 0xffe03fff)
                            | rdx_29 << 0xd) & 0xffffc040) | (rdx_29 | 1) << 6).o
                        __builtin_memcpy(&r8_7[1], r8_7, ((rdx_36 << 4) - 9) u>> 3 << 3)
                    
                    r8_7 += r9_8
                    i_11 = result
                    result -= 1
                while (i_11 != 1)
                result.b = 1
return result
