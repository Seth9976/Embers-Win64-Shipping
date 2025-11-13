// 函数: sub_14139b410
// 地址: 0x14139b410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* var_58[0x8]
int32_t rax_3 = sub_14139cd20(arg1, &var_58, arg4, arg5)
int64_t r10 = sx.q(rax_3)

if (rax_3 s> 0)
    int64_t r8_1 = 0
    void* rcx = arg3 + 0x10
    
    do
        int64_t* rax_4 = var_58[r8_1]
        r8_1 += 1
        *(rcx + 5) = arg2 << 2 | 1
        rcx += 0x18
        *(rcx - 0x28) = *(*rax_4 + 8)
        *(rcx - 0x18) = 0xffffffff
        *(rcx - 0x14) = 0
    while (r8_1 s< r10)

__security_check_cookie(rax_1 ^ &var_78)
return zx.q(r10.d)
