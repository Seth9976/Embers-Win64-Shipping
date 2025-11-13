// 函数: sub_142c91160
// 地址: 0x142c91160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char var_a8[0x80]
char (* rsi)[0x80] = &var_a8
char* rbx = arg2
int32_t result

if ((arg3 & 0xfffffffffffffffe) u>= 0x100 || (arg3.b & 1) == 0)
    result = 0x2b
else
    int64_t i_1 = arg3 - 1
    result = sub_142c91030(arg1, &var_a8, i_1 u>> 1)
    
    if (result == 0)
        if (i_1 != 0)
            int64_t i
            
            do
                uint32_t rcx = zx.d(*rsi)
                rsi = &(*rsi)[1]
                *rbx = (*"0123456789abcdef")[zx.q(rcx) u>> 4]
                rbx[1] = *((zx.q(rcx) & 0xf) + "0123456789abcdef")
                rbx = &rbx[2]
                i = i_1
                i_1 -= 2
            while (i != 2)
        
        *rbx = 0
        result = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result
