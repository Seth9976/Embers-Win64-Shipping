// 函数: sub_141e40e70
// 地址: 0x141e40e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int64_t* rcx = *(arg1 + 0x230)

if (rcx == 0)
    sub_1405947f0(arg2, 0x19)
    int32_t rax_6 = arg2[1].d + 0x19
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    __builtin_wcscpy(*arg2, u"No_SkeletalMeshComponent")
else
    int64_t var_18
    int64_t* rax_2 = (*(*rcx + 0x38))(rcx, &var_18)
    
    if (arg2 != rax_2)
        int64_t rcx_1 = *arg2
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *arg2 = *rax_2
        *rax_2 = 0
        arg2[1].d = rax_2[1].d
        *(arg2 + 0xc) = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

return arg2
