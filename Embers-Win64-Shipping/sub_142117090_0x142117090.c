// 函数: sub_142117090
// 地址: 0x142117090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rbx = arg3

if (arg2 != 0)
    if (((*(*arg2 + 0x308))(arg2) & 0x40) != 0)
        return 1
    
    int64_t arg_10 = *(arg2[2] + 0x18)
    int16_t* var_18
    sub_140b63b70(&arg_10, &var_18)
    int16_t* const r8 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        r8 = var_18
    
    uint64_t var_28
    sub_140a2e390(&var_28, u"Found %s, requires Texture2DArray", r8)
    
    if (rbx == &var_28)
        uint64_t rcx_8 = var_28
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    else
        uint64_t rcx_7 = *rbx
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        *rbx = var_28
        int32_t var_20
        rbx[1].d = var_20
        int32_t var_1c
        *(rbx + 0xc) = var_1c
        var_20.q = 0
        var_28 = 0
    
    int16_t* rcx_9 = var_18
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
else if (*arg3 != u"Found NULL, requires Texture2DArray")
    int32_t rcx = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0x24)
        sub_1405947f0(rbx, (arg2 + 0x24).d)
        rcx = rbx[1].d
    
    rbx[1].d = rcx + 0x24
    
    if (rcx + 0x24 s> *(rbx + 0xc))
        sub_140594770(rbx)
    
    uint64_t rax_2 = *rbx
    __builtin_memcpy(rax_2, u"Found NULL, requires Texture2DAr", 0x40)
    *(rax_2 + 0x40) = 0x7900610072
    rax_2.b = 0
    return rax_2

int32_t rax
rax.b = 0
return rax
