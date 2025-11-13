// 函数: sub_141decb70
// 地址: 0x141decb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint32_t zmm6_1[0x4]
uint32_t zmm7_1[0x4]
uint32_t zmm8[0x4]
uint32_t zmm9[0x4]
zmm6_1, zmm7_1, zmm8, zmm9 = sub_141e43520(arg1, arg2, arg3.d, arg4.d, arg5, arg6)
int32_t rdi = 0
zmm7_1[0] = zmm7_1[0] f+ zmm6_1[0]
uint64_t* var_88 = nullptr
int32_t var_80 = 0
uint64_t result
int512_t zmm2_1
int512_t zmm3_1
uint32_t zmm10[0x4]
uint32_t zmm11[0x4]
int128_t zmm12
float zmm13[0x4]
int128_t zmm14
int128_t zmm15
result, zmm2_1, zmm3_1 = sub_141dec590(&arg1[0x15], &var_88, zmm7_1, zmm7_1, zmm6_1, zmm7_1, zmm8, 
    zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15)
int32_t rdx_1 = var_80
uint64_t* rcx_1 = var_88

if (rdx_1 s> 0)
    int64_t rbx_1 = 0
    
    do
        result = *(rcx_1 + rbx_1)
        
        if (*(result + 0x16d) != 0)
            zmm3_1.o = *(rcx_1 + rbx_1 + 0xc)
            zmm2_1.o = *(rcx_1 + rbx_1 + 8)
            void var_78
            sub_141e1f340(result, &var_78)
            result, zmm2_1, zmm3_1 = sub_141de06c0(arg2, &var_78)
            rdx_1 = var_80
            rcx_1 = var_88
        
        rdi += 1
        rbx_1 += 0x10
    while (rdi s< rdx_1)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
