// 函数: sub_1428312b8
// 地址: 0x1428312b8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char const* const rdx
int64_t r8

if (strlen(arg1) u<= 0x100)
    strcpy(arg2, arg1)
    char* arg_20 = arg2
    char* rax_2 = sub_142833b5c(&arg_20, U".")
    
    if (rax_2 == 0)
        return zx.q(rdi)
    
    int64_t i = 0
    
    while (i s<= 8)
        *(arg3 + (i << 3)) = rax_2
        i += 1
        rdi += 1
        rax_2 = sub_142833b5c(&arg_20, U".")
        
        if (rax_2 == 0)
            return zx.q(rdi)
    
    r8 = 8
    rdx = "Setting variable name exceeded max token count of %d"
else
    r8 = 0x100
    rdx = "Setting variable name exceeded max length of %d chars"

sub_142833a04(1, rdx, r8)
return 0
