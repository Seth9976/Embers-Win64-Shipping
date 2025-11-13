// 函数: sub_140a810f0
// 地址: 0x140a810f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int64_t* rdi_1

if (*(arg1 + 0x30) s> 1)
    if (*(arg1 + 0x40) s> 1)
        result.b = 1
        return result
    
    if (arg2 != 0)
        wchar16 const* const var_48_2 = u"ValidationError_NoNativeString"
        int64_t var_20
        sub_140aaba50(sub_140aae800(), &var_20, Polyglot data has no native string set", 
            PolyglotTextData")
        int64_t rcx_3 = *arg2
        *arg2 = var_20
        rdi_1 = arg2[1]
        int64_t var_18
        arg2[1] = var_18
        int32_t result_2
        result = result_2
        var_20 = rcx_3
        int64_t* var_18_1 = rdi_1
        goto label_140a811c5
else if (arg2 != 0)
    wchar16 const* const var_48_1 = u"ValidationError_NoKey"
    int64_t var_38
    sub_140aaba50(sub_140aae800(), &var_38, u"Polyglot data has no key set", u"PolyglotTextData")
    int64_t rcx_1 = *arg2
    *arg2 = var_38
    rdi_1 = arg2[1]
    int64_t var_30
    arg2[1] = var_30
    int32_t result_1
    result = result_1
    var_38 = rcx_1
    int64_t* var_30_1 = rdi_1
label_140a811c5:
    arg2[2].d = result
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_1))
result.b = 0
return result
