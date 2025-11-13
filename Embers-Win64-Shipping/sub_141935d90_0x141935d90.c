// 函数: sub_141935d90
// 地址: 0x141935d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg7 == 0)
    if (*arg8 u> 1)
        *arg7 = 1
    else
        int32_t rax_1 = arg3
        int32_t r10_1 = 1
        
        if (arg2 u> arg3)
            rax_1 = arg2
        
        for (uint32_t i = rax_1 u>> 1; i != 0; i u>>= 1)
            r10_1 += 1
        
        *arg7 = r10_1

int32_t rdi

if (arg4 == 0)
    rdi = 0xde1
    
    if (*arg8 u> 1)
        rdi = 0x9100
else
    rdi = 0x8513
    
    if (arg5 != 0)
        rdi = 0x9009

void*** rax_2 = j_sub_140a82f30(0xf0)
void*** result

if (arg4 == 0)
    result = nullptr
    
    if (rax_2 != 0)
        int64_t var_30_2 = arg11
        int64_t var_38_2 = 0
        result = sub_141928d30(rax_2, arg1, 0, rdi, 0xffffffff, arg2, arg3, 0, *arg7, *arg8, 1, 1, 
            *arg6, 0, 0, *arg10)
else
    result = nullptr
    
    if (rax_2 != 0)
        int64_t var_30_1 = arg11
        int64_t var_38_1 = 0
        int32_t var_40_1 = *arg10
        char var_48_1 = 0
        result = sub_141929410(rax_2, arg1, 0, rdi, 0xffffffff, arg2, arg3, 0, *arg7, 1, 1, arg9, 
            zx.d(*arg6), 1)

sub_141941370(result, *arg10)
return result
