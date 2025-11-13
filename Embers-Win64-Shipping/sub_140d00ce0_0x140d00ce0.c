// 函数: sub_140d00ce0
// 地址: 0x140d00ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    void* rax_1 = *(arg1 + 0x78)
    
    if ((arg4 & 0x80) == 0 && rax_1 != 0)
        while (((*(rax_1 + 0xcc) u>> 7).b & 1) == 0)
            rax_1 = *(rax_1 + 0x40)
            
            if (rax_1 == 0)
                break
    
    int64_t arg_10 = *(rax_1 + 0x18)
    int16_t* var_18
    sub_140b63b70(&arg_10, &var_18)
    int16_t* const r8 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r8 = var_18
    
    int64_t var_28
    sub_140a2e390(&var_28, u"<I%s>", r8)
    
    if (arg3 == &var_28)
        int64_t rcx_6 = var_28
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    else
        int64_t rcx_5 = *arg3
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        *arg3 = var_28
        int32_t var_20
        arg3[1].d = var_20
        int32_t var_1c
        *(arg3 + 0xc) = var_1c
        var_20.q = 0
        var_28 = 0
    
    int16_t* rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0x11)
int32_t rax_5 = arg2[1].d + 0x11
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"TScriptInterface", 0x22)
return arg2
