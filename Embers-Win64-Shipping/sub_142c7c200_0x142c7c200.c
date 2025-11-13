// 函数: sub_142c7c200
// 地址: 0x142c7c200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
char* _String = arg2

if (arg3 u>= 4 && isdigit(zx.d(*arg2)) != 0 && isdigit(zx.d(_String[1])) != 0
        && isdigit(zx.d(_String[2])) != 0)
    char rax = _String[3]
    
    if (rax == 0x20 || arg3 == 5)
        rdi.b = 1
        int32_t rax_3 = sub_142c56200(strtol(_String, nullptr, 0xa))
        
        if (rax_3 == 1)
            rax_3 = 0
        
        *arg4 = rax_3
    else if (rax == 0x2d)
        int32_t rax_1 = *(arg1 + 0x708)
        
        if (rax_1 == 2 || rax_1 == 7)
            *arg4 = 1
            return 1
    
    return zx.d(rdi.b)

int32_t result
result.b = 0
return result
