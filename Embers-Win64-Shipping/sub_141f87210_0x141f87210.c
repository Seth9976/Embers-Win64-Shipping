// 函数: sub_141f87210
// 地址: 0x141f87210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2.d
int64_t rdi = sx.q(*(arg1 + 0x80))
uint128_t zmm6 = arg2
uint128_t result = arg3
int128_t zmm8 = zx.o(0)
uint128_t result_1

if (rdi.d s>= 2)
    int128_t* rsi_1 = *(arg1 + 0x78)
    uint128_t zmm9 = *rsi_1
    int32_t arg_8
    char rbp_1
    
    if (arg2.d f> zmm9.d)
        result_1 = *(rsi_1 + (rdi << 3) - 8)
        
        if (not(arg2.d f< result_1.d))
            rbp_1 = *(arg1 + 0x6d)
            
            if (rbp_1 - 3 u> 1)
                arg_8 = 0
                zmm6 = sub_141f84520(zmm9.d, result_1, &arg_10, &arg_8)
                
                if (rbp_1 != 1)
                    goto label_141f873cd
                
                zmm8.d = (*(rsi_1 + (rdi << 3) - 4)).d f- *(rsi_1 + 4)
                zmm8.d = zmm8.d f* _mm_cvtepi32_ps(zx.o(arg_8)).d
                zmm6 = arg_10
    else
        rbp_1 = *(arg1 + 0x6c)
        
        if (rbp_1 - 3 u> 1)
            zmm6 = *(rsi_1 + (rdi << 3) - 8)
            arg_8 = 0
            zmm6 = sub_141f84520(zmm9.d, zmm6, &arg_10, &arg_8)
            
            if (rbp_1 != 1)
            label_141f873cd:
                
                if (rbp_1 != 2)
                    zmm6 = arg_10
                else
                    int32_t rax_7 = arg_8 & 0x80000001
                    
                    if (rax_7 s< 0)
                        rax_7 = ((rax_7 - 1) | 0xfffffffe) + 1
                    
                    if (rax_7 != 1)
                        zmm6 = arg_10
                    else
                        zmm6.d = zmm6.d f- arg_10
                        zmm6.d = zmm6.d f+ zmm9.d
            else
                zmm8.d = (*(rsi_1 + 4)).d f- *(rsi_1 + (rdi << 3) - 4)
                zmm8.d = zmm8.d f* _mm_cvtepi32_ps(zx.o(arg_8)).d
                zmm6 = arg_10

result_1 = *(arg1 + 0x68)

if (not(result_1.d f== 3.40282347e+38f))
    result = result_1

if (rdi.d != 0)
    int32_t* r9_2
    
    if (rdi.d s>= 2)
        r9_2 = *(arg1 + 0x78)
    
    if (rdi.d s>= 2 && not(zmm6.d f<= *r9_2))
        arg3 = r9_2[rdi * 2 - 2]
        
        if (zmm6.d f>= arg3.d)
            result = r9_2[rdi * 2 - 1]
            
            if (*(arg1 + 0x6d) == 3)
                arg2.d = r9_2[rdi * 2 - 4].d f- arg3.d
                
                if (not(__andps_xmmxud_memxud(arg2, data_142d3f770).d f<= 9.99999994e-09f))
                    zmm6.d = zmm6.d f- arg3.d
                    result_1.d = r9_2[rdi * 2 - 3].d f- result.d
                    result_1.d = result_1.d f/ arg2.d
                    result_1.d = result_1.d f* zmm6.d
                    result_1.d = result_1.d f+ result.d
                    result = result_1
        else
            int32_t i = (rdi - 2).d
            int32_t r10_1 = 1
            
            while (i s> 0)
                int32_t temp0_2
                int32_t temp1_1
                temp0_2:temp1_1 = sx.q(i)
                int32_t i_1 = (temp1_1 - temp0_2) s>> 1
                int32_t rdx_2 = i_1 + r10_1
                
                if (zmm6.d f< r9_2[sx.q(rdx_2) * 2])
                    i = i_1
                else
                    r10_1 = rdx_2 + 1
                    i += 0xffffffff - i_1
            
            result = sub_141f87650(arg1, &r9_2[sx.q(r10_1 - 1) * 2], &r9_2[sx.q(r10_1) * 2], zmm6.d)
    else if (*(arg1 + 0x6c) != 3 || rdi.d s<= 1)
        result = *(*(arg1 + 0x78) + 4)
    else
        int128_t* rax_12 = *(arg1 + 0x78)
        arg3 = *rax_12
        result = *(rax_12 + 4)
        arg2.d = (*(rax_12 + 8)).d f- arg3.d
        
        if (not(__andps_xmmxud_memxud(arg2, data_142d3f770).d f<= 9.99999994e-09f))
            zmm6.d = zmm6.d f- arg3.d
            result_1.d = (*(rax_12 + 0xc)).d f- result.d
            result_1.d = result_1.d f/ arg2.d
            result_1.d = result_1.d f* zmm6.d
            result_1.d = result_1.d f+ result.d
            result = result_1

result.d = result.d f+ zmm8.d
return result
