// 函数: sub_142a6f7b0
// 地址: 0x142a6f7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void* rbx = &data_143cc8408
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg1, data_142d57d00)
int32_t result_1 = 0
uint64_t result

while (true)
    zmm6 = _mm_cvtepi32_pd(zx.o(*rbx)[0].q)
    zmm6[0].q = zmm6[0].q f* temp0[0].q
    arg1 = floor(zmm6[0].q)
    zmm6[0].q f- arg1[0].q
    
    if (not(is_unordered.q(zmm6[0].q, arg1[0].q)) && zmm6[0].q f== arg1[0].q)
        result = zx.q(result_1)
        break
    
    result_1 += 1
    rbx += 4
    
    if (rbx s> &data_143cc8414)
        char var_58 = 0
        int64_t zmm2 = temp0[0].q
        int64_t var_57
        __builtin_memset(&var_57, 0, 0x1d)
        sub_1425f2950(&var_58, "%1.15e", zmm2)
        int64_t var_47
        int32_t rax_2 = atoi(&var_47:1)
        int32_t rax_3 = 0xf
        int64_t var_4f
        
        if (var_4f:7.b == 0x30)
            void* rcx_3 = &var_4f:7
            
            do
                rax_3 -= 1
                rcx_3 -= 1
            while (*rcx_3 == 0x30)
        
        result = zx.q(rax_3 - rax_2)
        break

__security_check_cookie(rax_1 ^ &var_78)
return result
