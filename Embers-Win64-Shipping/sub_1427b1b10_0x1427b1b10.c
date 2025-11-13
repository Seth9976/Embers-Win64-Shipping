// 函数: sub_1427b1b10
// 地址: 0x1427b1b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[7]
int32_t result = (*(*rcx + 0x260))(rcx)

if (result.b == 0)
    int32_t rcx_1 = *arg2
    
    if (((rcx_1 u>> 1).b & 1) != 0)
        jump(*(*arg1 + 0x2b8))
    
    if ((rcx_1.b & 1) != 0)
        jump(*(*arg1 + 0x2b0))
    
    int64_t rbx_1 = *arg1[6]
    void var_28
    int64_t* rax_6 = _vfprintf_p_l(&var_28, 
        UInteractiveToolManager::PostInputEvent - input device is not currently supported.", 
        UInputRouter")
    result = (*(rbx_1 + 8))(arg1[6], rax_6, 0)
    int64_t* var_20
    
    if (var_20 != 0)
        result = var_20[1].d
        var_20[1].d -= 1
        
        if (result == 1)
            result = (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
