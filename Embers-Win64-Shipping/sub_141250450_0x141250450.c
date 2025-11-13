// 函数: sub_141250450
// 地址: 0x141250450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t* rax_2 = *arg1
int128_t var_28
int128_t* rbx = &var_28
int128_t var_58
__builtin_memset(&var_58, 0, 0x40)
int64_t i = 3
*arg2 = *rax_2
__builtin_memset(&arg2[2], 0, 0x38)
arg2[0x10] = _mm_bsrli_si128(zx.o(0), 8)

do
    int64_t* rcx_1 = *(rbx - 8)
    rbx -= 0x10
    i -= 1
    
    if (rcx_1 != 0 && *rbx != 0)
        int64_t r8_1 = *rcx_1
        (*(r8_1 + 0x10))(rcx_1, rbx, r8_1)
        *(rbx + 8) = 0
    
    sub_14081c9d0(rbx)
while (i != 0)

__security_check_cookie(rax_1 ^ &var_78)
return arg2
