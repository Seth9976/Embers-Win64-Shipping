// 函数: sub_140cdd170
// 地址: 0x140cdd170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if (arg1 == 0)
    sub_1405947f0(arg2, 5)
    int32_t rax_6 = arg2[1].d + 5
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    __builtin_wcscpy(*arg2, u"None")
else
    int64_t var_18
    int64_t* rax_2 = (*(*arg1 + 0x38))(arg1, &var_18)
    
    if (arg2 != rax_2)
        int64_t rcx = *arg2
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *arg2 = *rax_2
        *rax_2 = 0
        arg2[1].d = rax_2[1].d
        *(arg2 + 0xc) = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int64_t rcx_2 = var_18
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

return arg2
