// 函数: sub_140d21830
// 地址: 0x140d21830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0x80)

if (arg1 == 0)
    sub_140a20ba0(arg2, u"None", 4)
else
    void* rax_1 = *(arg1 + 0x10)
    
    if ((arg4 & 1) == 0)
        int64_t arg_8 = *(rax_1 + 0x18)
        sub_140b5c770(&arg_8, arg2)
    else
        int64_t var_28 = 0
        int32_t var_20_1 = 0
        sub_140d21e40(rax_1, 0, &var_28)
        int32_t r8_2
        
        if (var_20_1 == 0)
            r8_2 = 0
        else
            r8_2 = var_20_1 - 1
        
        sub_140a20ba0(arg2, var_28, r8_2)
        int64_t rcx_3 = var_28
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
    
    int32_t rdx_2 = arg2[1].d
    int32_t rax_3
    rax_3.b = rdx_2 s<= 0
    int32_t rdi_1 = rdx_2 - 1
    
    if (rdx_2 s<= 0)
        rdi_1 = 0
    
    int32_t rax_5 = rax_3 + 1 + rdx_2
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    int64_t rcx_6 = sx.q(rdi_1)
    *(*arg2 + (rcx_6 << 1)) = 0x20
    *(*arg2 + (rcx_6 << 1) + 2) = 0
    sub_140d21e40(arg1, arg3, arg2)

return arg2
