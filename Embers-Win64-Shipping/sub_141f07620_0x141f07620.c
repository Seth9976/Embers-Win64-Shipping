// 函数: sub_141f07620
// 地址: 0x141f07620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141f54910(arg1) == 0)
    arg1[0xc8].d = 0
    
    if (*(arg1 + 0x644) != 0)
        sub_1405a5220(&arg1[0xc7], 0)
    
    return 0

void* rdx = arg1[0x86]

if (arg1[0xc8].d != *(rdx + 0x1b0))
    sub_140780b40(&arg1[0xc7], rdx + 0x1b8)
    int32_t rax_2 = arg1[0xc8].d
    int64_t var_38 = 0
    int32_t var_2c_1 = 0
    int32_t var_30_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_38)
        rax_2 = arg1[0xc8].d
    
    int32_t i = 0
    
    if (rax_2 s> 0)
        do
            *(var_38 + (sx.q(i) << 1)) = i.w
            i += 1
        while (i s< arg1[0xc8].d)
    
    void* r9_1 = arg1[0x86]
    char var_28 = 0
    int64_t var_20_1 = 0
    int32_t var_18_1 = 0
    sub_141ea5d80(&arg1[0xc9], &var_38, &var_28, r9_1)
    int64_t rcx_4 = var_38
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)

sub_141f11c40(arg1)
(*(*arg1 + 0x908))(arg1)
int64_t result
result.b = 1
return result
