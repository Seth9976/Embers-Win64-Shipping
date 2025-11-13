// 函数: sub_141a56880
// 地址: 0x141a56880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_18
sub_141a5aa70(arg1, &var_18, arg2)
char rcx = var_18
int32_t var_14
int64_t rdi = sx.q(var_14)
char result
int32_t var_c

if (rcx != 2 && result != 2)
    if (rdi.d s> var_c)
        return result
    
    if (rdi.d == var_c && (rcx == 0 || result == 0))
        return result

int32_t rbx_1 = var_c - rdi.d

if (var_c != rdi.d)
    int32_t rax_2 = arg1[1].d
    int32_t rcx_2 = rax_2 - rdi.d
    
    if (rcx_2 != rbx_1)
        memmove((rdi << 4) + *arg1, (sx.q(rdi.d + rbx_1) << 4) + *arg1, (rcx_2 - rbx_1) << 4)
        rax_2 = arg1[1].d
    
    arg1[1].d = rax_2 - rbx_1

sub_140858a10(&arg1[2], rdi.d, rbx_1, 0)
return sub_141a61c00(&arg1[4], rdi.d, rbx_1, 0)
