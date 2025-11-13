// 函数: sub_14209e440
// 地址: 0x14209e440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)
int64_t r13 = sx.q(arg2)
uint64_t result = zx.q(rbp.d - r13.d)

if (result.d s>= 2)
    int32_t i = (r13 + 1).d
    int32_t i_1 = 0
    
    if (i s< rbp.d)
        int64_t r15_1 = arg1[3]
        int64_t result_1 = rbp * 3
        int64_t result_2 = result_1
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm9 = arg1[7].d
        int128_t* rsi_1 = r15_1 + sx.q(i) * 0xc
        float zmm6_1
        int128_t zmm8_1
        
        do
            int32_t arg_18
            result, zmm6_1, zmm7, zmm8_1 = sub_1420885b0(arg1, &arg_18, *rsi_1, &result_1)
            int128_t zmm1_1
            zmm1_1.d = (*(rsi_1 + 4)).d f- arg_18
            int128_t zmm2 = zmm8_1
            zmm1_1.d = zmm1_1.d f* zmm1_1.d
            
            if (not(zmm1_1.d f<= zmm9.d f* zmm9.d))
                zmm2 = zmm1_1
            
            float temp0_1 = _mm_sqrt_ss(0, zmm2.d)
            
            if (not(temp0_1 f<= zmm8_1.d))
                zmm1_1.d = zmm7.d f- *(r15_1 + r13 * 0xc)
                zmm2.d = (*(r15_1 + (result_2 << 2))).d f- zmm7.d
                
                if (not(zmm2.d f>= zmm1_1.d))
                    zmm1_1 = zmm2
                
                float zmm0_1 = temp0_1 f* zmm1_1.d
                
                if (not(zmm0_1 <= zmm6_1))
                    i_1 = i
                    zmm6_1 = zmm0_1
            
            i += 1
            rsi_1 += 0xc
        while (i s< rbp.d)
        
        if (not(zmm6_1 f<= zmm8_1.d))
            int64_t rcx_1 = sx.q(i_1) * 3
            int64_t rbx_1 =
                sx.q(sub_141fda760(arg1, *(r15_1 + (rcx_1 << 2)), r15_1 + 4 + (rcx_1 << 2)))
            *(*arg1 + rbx_1 * 0x14 + 0x10) = 3
            sub_14209d410(arg1, rbx_1.d)
            
            if (rbx_1.d s> 0)
                sub_14209d410(arg1, (rbx_1 - 1).d)
            
            if (rbx_1.d s< arg1[1].d - 1)
                sub_14209d410(arg1, (rbx_1 + 1).d)
            
            if (i_1 - arg2 s>= 2)
                int64_t rsi_2 = sx.q(arg1[6].d)
                result_1.d = arg2
                result_1:4.d = i_1
                int32_t rax_11 = (rsi_2 + 1).d
                arg1[6].d = rax_11
                
                if (rax_11 s> *(arg1 + 0x34))
                    sub_1405a4d70(&arg1[5])
                
                *(arg1[5] + (rsi_2 << 3)) = result_1
            
            result = zx.q(rbp.d - i_1)
            
            if (result.d s>= 2)
                int64_t rbx_2 = sx.q(arg1[6].d)
                result_1.d = i_1
                result_1:4.d = rbp.d
                int32_t rax_14 = (rbx_2 + 1).d
                arg1[6].d = rax_14
                
                if (rax_14 s> *(arg1 + 0x34))
                    sub_1405a4d70(&arg1[5])
                
                result = result_1
                *(arg1[5] + (rbx_2 << 3)) = result

return result
