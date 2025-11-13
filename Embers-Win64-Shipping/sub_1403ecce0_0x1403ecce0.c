// 函数: sub_1403ecce0
// 地址: 0x1403ecce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* rdi = arg2
void var_68
sub_140410270(arg1, &var_68, arg3, arg4)
int32_t result = *(arg1 + 0x1238)
void* r9 = &var_68
int64_t i_1 = 2
int64_t i

do
    int32_t r8 = 0
    
    if (result s> 0)
        void* rcx = rdi
        void* rdx_1 = r9
        
        do
            int32_t rax_2 = sx.d(*rdx_1)
            r8 += 1
            rdx_1 += 2
            rcx += 4
            uint128_t zmm0_1
            zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_2)).d f* 0.000244140625f
            *(rcx - 4) = zmm0_1.d
            result = *(arg1 + 0x1238)
        while (r8 s< result)
    
    rdi += 0x40
    r9 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_1 ^ &var_88)
return result
