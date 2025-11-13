// 函数: sub_1426d3320
// 地址: 0x1426d3320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1426ae370(arg1, arg2, arg3, arg4, arg5)

if (arg4 == 1)
    wchar16 const* const r8 = u"not active"
    
    if ((arg3[9] & arg4.b) != 0)
        r8 = u"active"
    
    int64_t var_18
    sub_140a2e390(&var_18, u"main task: %s", r8)
    int64_t rbx_1 = sx.q(arg5[1].d)
    int32_t rax = (rbx_1 + 1).d
    arg5[1].d = rax
    
    if (rax s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    int64_t* rcx_4 = (rbx_1 << 4) + *arg5
    *rcx_4 = 0
    *rcx_4 = var_18
    var_18 = 0
    int32_t var_10
    rcx_4[1].d = var_10
    int32_t result_1
    result = zx.q(result_1)
    *(rcx_4 + 0xc) = result.d
    int64_t rcx_5 = var_18
    var_10.q = 0
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
    
    if ((arg3[9] & 2) != 0)
        var_18 = 0
        var_10.q = 0
        sub_1405947f0(&var_18, 0x16)
        int32_t result_2 = result_1
        int32_t rbx_2 = var_10 + 0x16
        
        if (rbx_2 s> result_2)
            sub_140594770(&var_18)
            result_2 = result_1
        
        int64_t r14_1 = var_18
        UnDecorator::getReferenceType(r14_1, u"force background tree", 0x2c)
        int64_t rbp_1 = sx.q(arg5[1].d)
        int32_t rax_3 = (rbp_1 + 1).d
        arg5[1].d = rax_3
        
        if (rax_3 s> *(arg5 + 0xc))
            sub_1405a4f90(arg5)
        
        result = (rbp_1 << 4) + *arg5
        *result = r14_1
        *(result + 8) = rbx_2
        *(result + 0xc) = result_2

return result
