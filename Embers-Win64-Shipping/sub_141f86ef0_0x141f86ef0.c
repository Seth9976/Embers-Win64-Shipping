// 函数: sub_141f86ef0
// 地址: 0x141f86ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2.d
int64_t rdi = sx.q(*(arg1 + 0x78))
uint128_t zmm6 = arg2
uint128_t result = arg3
int128_t zmm8 = zx.o(0)
uint128_t result_1

if (rdi.d s>= 2)
    void* rsi_1 = *(arg1 + 0x70)
    uint128_t zmm9 = *(rsi_1 + 4)
    int32_t arg_8
    char rbp_1
    
    if (arg2.d f> zmm9.d)
        int64_t r14_2 = rdi * 0x1c
        result_1 = *(r14_2 + rsi_1 - 0x18)
        
        if (not(arg2.d f< result_1.d))
            rbp_1 = *(arg1 + 0x6d)
            
            if (rbp_1 - 3 u> 1)
                arg_8 = 0
                zmm6 = sub_141f84520(zmm9.d, result_1, &arg_10, &arg_8)
                
                if (rbp_1 != 1)
                    goto label_141f870c7
                
                zmm8.d = (*(r14_2 + rsi_1 - 0x14)).d f- *(rsi_1 + 8)
                zmm8.d = zmm8.d f* _mm_cvtepi32_ps(zx.o(arg_8)).d
                zmm6 = arg_10
    else
        rbp_1 = *(arg1 + 0x6c)
        
        if (rbp_1 - 3 u> 1)
            int64_t r14_1 = rdi * 0x1c
            arg_8 = 0
            zmm6 = sub_141f84520(zmm9.d, *(r14_1 + rsi_1 - 0x18), &arg_10, &arg_8)
            
            if (rbp_1 != 1)
            label_141f870c7:
                
                if (rbp_1 != 2)
                    zmm6 = arg_10
                else
                    int32_t rax_8 = arg_8 & 0x80000001
                    
                    if (rax_8 s< 0)
                        rax_8 = ((rax_8 - 1) | 0xfffffffe) + 1
                    
                    if (rax_8 != 1)
                        zmm6 = arg_10
                    else
                        zmm6.d = zmm6.d f- arg_10
                        zmm6.d = zmm6.d f+ zmm9.d
            else
                zmm8.d = (*(rsi_1 + 8)).d f- *(r14_1 + rsi_1 - 0x14)
                zmm8.d = zmm8.d f* _mm_cvtepi32_ps(zx.o(arg_8)).d
                zmm6 = arg_10

result_1 = *(arg1 + 0x68)

if (not(result_1.d f== 3.40282347e+38f))
    result = result_1

if (rdi.d != 0)
    void* r9_2
    
    if (rdi.d s>= 2)
        r9_2 = *(arg1 + 0x70)
    
    if (rdi.d s>= 2 && not(zmm6.d f<= *(r9_2 + 4)))
        int64_t rcx = rdi * 0x1c
        arg3 = *(rcx + r9_2 - 0x18)
        
        if (zmm6.d f>= arg3.d)
            result = *(rcx + r9_2 - 0x14)
            
            if (*(arg1 + 0x6d) == 3)
                int64_t rdx_5 = (rdi - 2) * 0x1c
                arg2.d = (*(rdx_5 + r9_2 + 4)).d f- arg3.d
                
                if (not(__andps_xmmxud_memxud(arg2, data_142d3f770).d f<= 9.99999994e-09f))
                    zmm6.d = zmm6.d f- arg3.d
                    result_1.d = (*(rdx_5 + r9_2 + 8)).d f- result.d
                    result_1.d = result_1.d f/ arg2.d
                    result_1.d = result_1.d f* zmm6.d
                    result_1.d = result_1.d f+ result.d
                    result = result_1
        else
            int32_t i = (rdi - 2).d
            int32_t r11_1 = 1
            
            while (i s> 0)
                int32_t temp0_2
                int32_t temp1_1
                temp0_2:temp1_1 = sx.q(i)
                int32_t i_1 = (temp1_1 - temp0_2) s>> 1
                int32_t r10_1 = i_1 + r11_1
                
                if (zmm6.d f< *(sx.q(r10_1) * 0x1c + r9_2 + 4))
                    i = i_1
                else
                    r11_1 = r10_1 + 1
                    i += 0xffffffff - i_1
            
            result_1, zmm8 =
                sub_141f87510(sx.q(r11_1 - 1) * 0x1c + r9_2, sx.q(r11_1) * 0x1c + r9_2, zmm6)
            result = result_1
    else if (*(arg1 + 0x6c) != 3 || rdi.d s<= 1)
        result = *(*(arg1 + 0x70) + 8)
    else
        void* rax_14 = *(arg1 + 0x70)
        arg3 = *(rax_14 + 4)
        result = *(rax_14 + 8)
        arg2.d = (*(rax_14 + 0x20)).d f- arg3.d
        
        if (not(__andps_xmmxud_memxud(arg2, data_142d3f770).d f<= 9.99999994e-09f))
            zmm6.d = zmm6.d f- arg3.d
            result_1.d = (*(rax_14 + 0x24)).d f- result.d
            result_1.d = result_1.d f/ arg2.d
            result_1.d = result_1.d f* zmm6.d
            result_1.d = result_1.d f+ result.d
            result = result_1

result.d = result.d f+ zmm8.d
return result
