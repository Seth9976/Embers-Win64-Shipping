// 函数: sub_140acc600
// 地址: 0x140acc600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
__builtin_memset(arg1, 0, 0x19)

if (arg2[1].d s> 0)
    char r10_1 = 0
    int64_t* rdx = nullptr
    
    do
        int64_t rax_1 = *arg2
        
        if (r10_1 == 0)
            r10_1 = 1
            *(arg1 + 0xc) = *(rdx + rax_1)
            float rax_2 = *(rdx + rax_1 + 8)
            (*arg1)[5] = rax_2
            *arg1 = *(arg1 + 0xc)
            (*arg1)[2] = rax_2
            (*arg1)[6].b = 1
        else
            *arg1 = __minss_xmmss_memss((*(rdx + rax_1)).d, *arg1).d
            (*arg1)[1] = __minss_xmmss_memss(*(rdx + rax_1 + 4), (*arg1)[1])
            (*arg1)[2] = __minss_xmmss_memss((*(rdx + rax_1 + 8)).d, (*arg1)[2]).d
            (*arg1)[3] = __maxss_xmmss_memss(*(rdx + rax_1), (*arg1)[3])
            arg1[1][0] = __maxss_xmmss_memss((*(rdx + rax_1 + 4)).d, arg1[1][0]).d
            (*arg1)[5] = __maxss_xmmss_memss(*(rdx + rax_1 + 8), (*arg1)[5])
        
        i += 1
        rdx += 0xc
    while (i s< arg2[1].d)

return arg1
