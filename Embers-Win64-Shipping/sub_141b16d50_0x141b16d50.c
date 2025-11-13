// 函数: sub_141b16d50
// 地址: 0x141b16d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t var_150_1
int64_t var_148
int32_t rdx_2
int32_t rdi_1

if (arg3[2].d == 0)
    rdi_1 = 0
    int64_t zmm1 = arg3[1].q
    int96_t var_138_1 = (*arg3).12
    var_148 = var_138_1:4.q
    int64_t zmm3
    zmm3.d = zmm1:4.d.d f- var_148:4.d
    int32_t rdx_1 = zmm1.d - var_138_1:4.d
    zmm1.d = zmm3.d f+ zmm3.d
    zmm1.d = zmm1.d f- 0.5f
    int32_t rcx_1 = int.d(zmm1.d) s>> 1
    rdx_2 = rdx_1 + rcx_1
    int64_t var_158_1
    var_158_1.d = rdx_2
    zmm3.d = zmm3.d f- _mm_cvtepi32_ps(zx.o(rcx_1)).d
    
    if (not(zmm3.d f>= 0f))
        var_158_1:4.d = 0
    else if (zmm3.d f>= 0.99999994f)
        var_158_1:4.d = 0x3f7fffff
    else
        var_158_1:4.d = zmm3.d
    
    var_150_1 = 0
    var_148 = var_158_1

uint64_t result
char var_e0
char result_1

if (arg3[2].d == 0 && (rdx_2 s> 0 || (rdx_2 == 0 && not(var_148:4.d.d f< var_150_1:4.d))))
    sub_141a6a710(&var_148, arg3)
    int32_t i = *(arg1 + 0x30)
    int64_t r11_1 = *(arg1 + 0x28)
    result = 0
    int64_t var_140
    
    if (var_140.b == 1)
        result = 4
    
    int32_t r10_3 = (var_140 u>> 0x20).d + *(result + &data_14302eb90)
    
    while (i s> 0)
        int32_t r8_1 = i & 0x80000001
        
        if (r8_1 s< 0)
            r8_1 = ((r8_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(i)
        int32_t i_1 = (temp2_1 - temp1_1) s>> 1
        i = i_1
        result = zx.q(i_1 + rdi_1)
        
        if (r10_3 s>= *(r11_1 + (sx.q(result.d) << 2)))
            rdi_1 = r8_1 + result.d
    
    int32_t result_2 = rdi_1 - 1
    
    if (rdi_1 s> 0)
        result = sx.q(result_2)
        
        if (*(r11_1 + (result << 2)) s>= r10_3)
            result_2 = rdi_1 - 2
        
        if (result_2 s>= 0)
            int64_t result_3 = sx.q(result_2)
            char rdx_6 = *(result_3 + *(arg1 + 0x40))
            
            if (rdx_6 != 2)
                result_1 = var_e0 | 3
                char var_118_2 = rdx_6
                goto label_141b16f7c
            
            char r8_5 = var_148.b
            result = zx.q(*(r11_1 + (result_3 << 2)))
            
            if (r8_5 == rdx_6)
            label_141b16f26:
                
                if (var_140.b == 2)
                label_141b16f4b:
                    result_1 = var_e0 | 3
                    char var_118_1 = 2
                    goto label_141b16f7c
                
                int32_t rdx_8 = var_140:4.d
                
                if (rdx_8 s> result.d || (rdx_8 s>= result.d && var_140.b == 1))
                    goto label_141b16f4b
                
                if (var_140.b == 1 && result.d == rdx_8)
                    goto label_141b16f4b
            else
                int32_t rdx_7 = var_148.d
                
                if (rdx_7 s< result.d || (rdx_7 s<= result.d && r8_5 == 1))
                    goto label_141b16f26
                
                if (r8_5 == 1 && result.d == rdx_7)
                    goto label_141b16f26
else
    result_1 = var_e0 | 3
    char var_118_3 = 1
label_141b16f7c:
    void** const var_120 = &data_143058188
    char var_110_1 = 0
    void var_d8
    int128_t* rax_8 = sub_1405ab790(&var_d8, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_120)
    int64_t rdi_2 = sx.q(arg4[1].d)
    int32_t rcx_5 = (rdi_2 + 1).d
    arg4[1].d = rcx_5
    
    if (rcx_5 s> *(arg4 + 0xc))
        sub_1405c5190(arg4)
    
    sub_1405ab620(rdi_2 * 0xc8 + *arg4, rax_8)
    char var_18
    
    if ((var_18 & 1) != 0)
        int64_t* var_58
        int64_t* rcx_9 = &var_58
        
        if ((var_18 & 2) == 0)
            rcx_9 = var_58
        
        (**rcx_9)(rcx_9, 0)
        
        if ((var_18 & 2) == 0)
            sub_140a74f90(var_58)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    result = zx.q(result_1)
    
    if ((result.b & 1) != 0)
        void** const rcx_12 = &var_120
        
        if ((result.b & 2) == 0)
            rcx_12 = var_120
        
        result.b &= 0xfe
        char var_e0_1 = result.b
        result = (**rcx_12)(rcx_12, 0)
        
        if ((var_e0_1 & 2) == 0)
            result = sub_140a74f90(var_120)
__security_check_cookie(rax_1 ^ &var_188)
return result
