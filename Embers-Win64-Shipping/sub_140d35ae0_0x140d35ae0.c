// 函数: sub_140d35ae0
// 地址: 0x140d35ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg2 + 0x20)
int64_t* rcx = *rax
void* result = &rax[1]
*(arg2 + 0x20) = result
*(arg2 + 0x30) = rcx

if (rcx != 0)
    *(arg2 + 0x38) = sx.q(*(rcx + 0x4c)) + *(arg2 + 0x28)
    
    if (arg3 != 0)
        jump(*(*rcx + 0xc8))
else
    void var_48
    int64_t* rax_1 = _vfprintf_p_l(&var_48, 
        Attempted to access missing local variable. If this is a packaged/cooke", ScriptCore")
    int32_t var_30 = 3
    int64_t var_28_1 = *rax_1
    int64_t* rcx_3 = rax_1[1]
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    int32_t var_18_1 = rax_1[2].d
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rax_5 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*var_40 + 8))(var_40, 1)
    
    result = sub_140d30680(arg1, arg2, &var_30)
    *(arg2 + 0x38) = 0
    
    if (rcx_3 != 0)
        result = zx.q(rcx_3[1].d)
        rcx_3[1].d -= 1
        
        if (result.d == 1)
            result = (**rcx_3)(rcx_3)
            int32_t rdi_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*rcx_3 + 8))(rcx_3, zx.q(rdi_1))

return result
