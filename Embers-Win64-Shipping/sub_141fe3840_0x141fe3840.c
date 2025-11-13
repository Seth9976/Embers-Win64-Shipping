// 函数: sub_141fe3840
// 地址: 0x141fe3840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)
int64_t result
int32_t zmm1
int64_t result_1
int32_t zmm3
int32_t zmm4
int32_t zmm5

if (rdi != 0)
    void* rcx = *(arg1 + 0x10)
    int64_t var_38 = *(rcx + 4)
    int32_t rax_1 = *(rcx + 0xc)
    int64_t var_28 = *(rcx + 4)
    int32_t rax_2 = *(rcx + 0xc)
    
    if (rdi != 1)
        int32_t r14_1 = rdi - 1
        
        if (*(arg1 + 0x20) == 0)
            rdi = r14_1
        
        int32_t rcx_1 = 0
        
        if (rdi s> 0)
            int32_t rbx_1
            
            do
                int32_t rax_3 = 0
                rbx_1 = rcx_1 + 1
                
                if (rcx_1 != r14_1)
                    rax_3 = rbx_1
                
                sub_140ad3060(sx.q(rcx_1) * 0x2c + *(arg1 + 0x10), 
                    sx.q(rax_3) * 0x2c + *(arg1 + 0x10), &var_38, &var_28)
                rcx_1 = rbx_1
            while (rbx_1 s< rdi)
    
    zmm4 = rax_1
    result = var_38:4.d
    result_1 = var_38.d
    zmm5 = rax_2
    zmm1 = var_28:4.d
    zmm3 = var_28.d
else
    result_1 = data_143dbb1f8
    result = data_143dbb1fc
    zmm3 = result_1.d
    zmm4 = data_143dbb200
    zmm1 = result.d
    zmm5 = zmm4

uint32_t rcx_4 = zx.d(*(arg1 + 0x2c))

if (rcx_4 == 1)
    zmm1 = zmm3
    result = result_1
else if (rcx_4 == 2)
    zmm4 = result_1.d
    zmm5 = zmm3
else if (rcx_4 == 3)
    zmm4 = result.d
    zmm5 = zmm1
else if (rcx_4 == 4)
    zmm4 = result_1.d
    zmm5 = zmm3
    zmm1 = zmm3
    result = result_1

result = _mm_min_ss(result.d, result_1.d).q
int32_t temp0_2 = _mm_max_ss(zmm1, zmm3)
result = _mm_min_ss(result.d, zmm4).q
int32_t temp0_4 = _mm_max_ss(temp0_2, zmm5)
*arg2 = result.d
*arg3 = temp0_4
return result
