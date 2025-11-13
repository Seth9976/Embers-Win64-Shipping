// 函数: sub_142aebb00
// 地址: 0x142aebb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg4
*(arg1 + 0x120) = 0
int32_t* r14 = arg4
*(arg1 + 0x18) = arg3
*(arg1 + 0x58) = 0
int32_t* result = *(arg1 + 8)

if (*result s<= 0)
    arg4.b = 1
    *(*(arg1 + 0x10) + 8) = sub_142aea410(*(*(arg1 + 0x10) + 8), arg2, 0, arg4.b, arg5, result)
    result = *(arg1 + 8)
    
    if (*result s<= 0)
        *(*(arg1 + 0x10) + 0x90) = data_144016850
        *(*(arg1 + 0x10) + 0x98) = data_144016850 + 0x68
        int64_t rax_3
        int512_t zmm0_1
        rax_3, zmm0_1 = sub_142aea860(arg2)
        bool cond:0_1 = (*(arg1 + 0x124) & 0x10) == 0
        uint16_t rdi_1 = 1
        *(arg1 + 0x170) = rax_3
        
        if (not(cond:0_1))
            *(arg1 + 0x28) = 1
        
        int512_t zmm0_2 = sub_142af21f0(arg1, arg1 + 0x48, zmm0_1)
        
        while (**(arg1 + 8) s<= 0)
            void* rdi_2 = &data_14365b840 + (zx.q(rdi_1) << 3)
            
            while (true)
                char rcx_8 = *(rdi_2 + 4)
                
                if (rcx_8 u< 0x7f && *(arg1 + 0x4c) == 0 && zx.d(rcx_8) == *(arg1 + 0x48))
                    break
                
                if (rcx_8 == 0xff)
                    break
                
                if (rcx_8 == 0xfe && *(arg1 + 0x4c) != 0)
                    break
                
                if (rcx_8 == 0xfd && *(arg1 + 0x48) == 0xffffffff)
                    break
                
                if (rcx_8 - 0x80 u<= 0x6f && *(arg1 + 0x4c) == 0)
                    int32_t rdx_1 = *(arg1 + 0x48)
                    
                    if (rdx_1 != 0xffffffff)
                        char rax_13
                        rax_13, zmm0_2 = sub_142a9f280(
                            sx.q(zx.d(rcx_8) - 0x80) * 0xc8 + data_144016850 + 0x208, rdx_1)
                        
                        if (rax_13 != 0)
                            break
                
                rdi_2 += 8
            
            char rax_14
            rax_14, zmm0_2 = sub_142aed270(arg1, *rdi_2, zmm0_2)
            
            if (rax_14 == 0)
                break
            
            if (*(rdi_2 + 6) != 0)
                *(arg1 + 0x120) += 1
                
                if (*(arg1 + 0x120) s>= 0x64)
                    zmm0_2 = sub_142af0120(arg1, 0x10300)
                    *(arg1 + 0x120) -= 1
                
                *(arg1 + (sx.q(*(arg1 + 0x120)) << 1) + 0x58) = zx.w(*(rdi_2 + 6))
            
            if (*(rdi_2 + 7) != 0)
                zmm0_2 = sub_142af21f0(arg1, arg1 + 0x48, zmm0_2)
            
            char rax_16 = *(rdi_2 + 5)
            
            if (rax_16 == 0xff)
                int64_t rcx_15 = sx.q(*(arg1 + 0x120))
                rdi_1 = *(arg1 + (rcx_15 << 1) + 0x58)
                int32_t rax_17 = (rcx_15 - 1).d
                *(arg1 + 0x120) = rax_17
                
                if (rax_17 s< 0)
                    *(arg1 + 0x120) = rax_17 + 1
                    zmm0_2 = sub_142af0120(arg1, 0x10306)
            else
                rdi_1 = zx.w(rax_16)
        
        result = *(arg1 + 8)
        
        if (*result s<= 0)
            void* rcx_20 = *(arg1 + 0x10)
            int32_t rax_20 = *(rcx_20 + 0x80)
            
            if (rax_20 s>= 0)
                *(rcx_20 + 0x80) = rax_20 + 2
                
                if (*(*(arg1 + 0x10) + 0x80) s>= 0xfffff0)
                    sub_142af0120(arg1, 0x10314)
            else
                sub_142af0120(arg1, 0x10300)
            
            sub_142af2e70(arg1)
            *(*(arg1 + 0x10) + 0x7c) = sub_142af1df0(arg1, 3, *(*(*(arg1 + 0x10) + 0x20) + 8) - 1)
            sub_142af1050(arg1)
            int64_t i_1 = sx.q(*(*(*(arg1 + 0x10) + 0x68) + 8))
            uint64_t rax_26 = 0x20 * i_1
            
            if (mulu.dp.q(0x20, i_1) u>> 0x40 != zx.o(0))
                rax_26 = -1
            
            int64_t rax_27 = j_sub_142a7dd00(rax_26)
            int64_t arg_8 = rax_27
            int64_t rdi_4 = rax_27
            int64_t rsi_1
            
            if (rax_27 == 0)
                rsi_1 = 0
                rdi_4 = 0
            else
                if (i_1 != 0)
                    memset(rax_27, 0, i_1 << 5)
                
                rsi_1 = 0
            
            *(*(arg1 + 0x10) + 0x70) = rdi_4
            result = *(arg1 + 0x10)
            
            if (*(result + 0x70) != 0)
                int32_t r15_1 = 0
                
                if (i_1 s> 0)
                    int64_t r12_1 = 0
                    int64_t i
                    
                    do
                        result = sub_142ae72d0(*(*(arg1 + 0x10) + 0x68), r15_1)
                        int32_t* result_1 = result
                        int64_t r14_2 = *(*(arg1 + 0x10) + 0x70) + r12_1
                        
                        if (result != 0)
                            for (int32_t j = 0; j s<= 0xff; )
                                result = sub_142a9f280(result_1, zx.q(j))
                                
                                if (result.b != 0)
                                    int64_t rdx_8 = rsi_1 s>> 3
                                    result = zx.q(j) & 7
                                    *(rdx_8 + r14_2) |= (1 << (result.d u% 0x20)).b
                                
                                j += 1
                                rsi_1 += 1
                            
                            rsi_1 = 0
                        
                        r15_1 += 1
                        r12_1 += 0x20
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
            else
                result = *(arg1 + 8)
                *result = 7
                *r14 = 7
        else
            while (*(arg1 + 0x1b8) != 0)
                result = sub_142b102e0(arg1 + 0x1b0)
                
                if (result != 0)
                    sub_142a9dbc0(result)
                    result = sub_142a47920(result)

return result
