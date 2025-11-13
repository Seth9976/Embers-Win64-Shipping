// 函数: sub_142c60c30
// 地址: 0x142c60c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[0x9e]

if (rax == neg.q(arg1[0x9a]) && arg1[0xc].b == (rax.d + (arg1[0x9a]).d).b)
    int64_t r8_1 = *(arg1[0x87] + 0x70)
    char rcx
    
    if (r8_1 == 0)
        rcx = 1
        
        if (sub_142c64080(arg1[0x47], -1, -1, 0) == 0)
            rcx = 0
    else
        rcx = r8_1(arg1, 1).b & 1
    
    if (rcx != 0)
        uint64_t r8_2 = zx.q(*(arg1 + 0x64))
        *arg1 = arg2
        sub_142c5c970(arg1, 1, 
            sub_142c64850(arg2, "Connection %ld seems to be dead!\n", r8_2, arg3))
        int64_t rax_2
        rax_2.b = 1
        return 1

int32_t result
result.b = 0
return result
