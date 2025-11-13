// 函数: sub_142c6e650
// 地址: 0x142c6e650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 4)
char const* const rbp = nullptr
void* r14 = *arg1
int32_t result
char rdi_1

if (rax == 8)
    rdi_1 = arg7
    result, arg6 = sub_142c87f90(arg1, rdi_1, arg6, arg5)
    
    if (result == 0)
    label_142c6e72b:
        void* const rcx_1 = &data_1434cce10
        void* rax_3
        
        if (rdi_1 == 0)
            rax_3 = arg1[0x3e]
        else
            rax_3 = arg1[0x2d]
        
        char const* const r8 = "Server"
        
        if (rax_3 != 0)
            rcx_1 = rax_3
        
        void* const var_18_1 = rcx_1
        
        if (rdi_1 != 0)
            r8 = "Proxy"
        
        sub_142c64850(r14, "%s auth using %s with user '%s'\n", r8, arg6)
        *(arg2 + 0xd) = *(arg2 + 0xc) == 0
        return 0
else if (rax != 2)
    if (rax != 1)
        *(arg2 + 0xd) = 0
        return 0
    
    rdi_1 = arg7
    
    if (rdi_1 != 0)
        if (*(arg1 + 0x3f9) == 0)
            goto label_142c6e722
        
        if (sub_142c6c880(arg1, "Proxy-authorization:") == 0)
            goto label_142c6e70f
        
        goto label_142c6e722
    
    if (arg1[0x7f].b == 0)
    label_142c6e722:
        *(arg2 + 0xc) = 1
        
        if (rbp != 0)
            goto label_142c6e72b
        
        *(arg2 + 0xd) = 0
        return 0
    
    if (sub_142c6c910(arg1, "Authorization:") != 0)
        goto label_142c6e722
    
label_142c6e70f:
    rbp = "Basic"
    result, arg6 = sub_142c6e370(arg1, rdi_1, arg6)
    
    if (result == 0)
        goto label_142c6e722
else
    rdi_1 = arg7
    result, arg6 = sub_142c87c50(arg1, rdi_1, arg3, arg4, arg6)
    
    if (result == 0)
        goto label_142c6e72b
return result
