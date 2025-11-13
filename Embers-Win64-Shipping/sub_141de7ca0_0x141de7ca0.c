// 函数: sub_141de7ca0
// 地址: 0x141de7ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rdi = 0
uint64_t* var_68 = nullptr
int32_t var_60 = 0
uint64_t result
int512_t zmm2
int512_t zmm3
result, zmm2, zmm3 = sub_141dec590(arg2, &var_68, arg3, arg4)
int32_t rdx_1 = var_60
uint64_t* rcx_1 = var_68

if (rdx_1 s> 0)
    int64_t rbx_1 = 0
    
    do
        result = *(rcx_1 + rbx_1)
        
        if (*(result + 0x16d) != 0)
            zmm3.o = *(rcx_1 + rbx_1 + 0xc)
            zmm2.o = *(rcx_1 + rbx_1 + 8)
            void var_58
            sub_141e1f340(result, &var_58)
            result, zmm2, zmm3 = sub_141de06c0(arg5, &var_58)
            rdx_1 = var_60
            rcx_1 = var_68
        
        rdi += 1
        rbx_1 += 0x10
    while (rdi s< rdx_1)

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

__security_check_cookie(rax_1 ^ &var_88)
return result
