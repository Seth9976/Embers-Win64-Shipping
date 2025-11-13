// 函数: sub_140a4a690
// 地址: 0x140a4a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d
int16_t* const rbp = &data_142d40450

if ((*(*arg1 + 0xe0))() == 0)
    int16_t* rdx = *arg2
    int64_t r8_1 = sx.q(arg2[1].d)
    int16_t* rcx = &rdx[r8_1]
    
    if (rcx == rdx)
    label_140a4a80b:
        enum WIN32_ERROR dwErrCode = GetLastError()
        
        if (arg2[1].d != 0)
            rbp = *arg2
        
        char rax_10 = (*(*arg1 + 0xd8))(arg1, rbp)
        
        if (rax_10 == 0)
            SetLastError(dwErrCode)
        
        return zx.q(rax_10)
    
    while (true)
        rcx -= 2
        
        if (*rcx == 0x2f)
            break
        
        if (rcx == rdx)
            goto label_140a4a80b
    
    int32_t rcx_2 = ((rcx - rdx) s>> 1).d
    
    if (rcx_2 + 1 u<= 1)
        goto label_140a4a80b
    
    int32_t rdi_1 = (r8_1 - 1).d
    int16_t* const r14_1 = &data_142d40450
    
    if (r8_1.d != 0)
        r14_1 = rdx
    
    if (r8_1.d == 0)
        rdi_1 = 0
    
    if (rcx_2 s< 0)
        rdi_1 = 0
    else if (rcx_2 s< rdi_1)
        rdi_1 = rcx_2
    
    int64_t var_28 = 0
    int32_t rdx_1 = 0
    int32_t var_20_1 = 0
    int32_t rcx_3 = 0
    int32_t var_1c_1 = 0
    
    if (r14_1 != 0 && *r14_1 != 0 && rdi_1 s> 0)
        if (rdi_1 + 1 s> 0)
            sub_1405947f0(&var_28, rdi_1 + 1)
            rcx_3 = var_1c_1
            rdx_1 = var_20_1
        
        int32_t rax_5 = rdx_1 + 1 + rdi_1
        
        if (rax_5 s> rcx_3)
            sub_140594770(&var_28)
        
        memcpy(var_28, r14_1, rdi_1 * 2)
        *(var_28 + (sx.q(rax_5) << 1) - 2) = 0
    
    char rax_7 = sub_140a4a690(arg1, &var_28)
    int64_t rcx_9 = var_28
    rdi_1.b = rax_7 == 0
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    if (rdi_1.b != 0)
        return 0
    
    int16_t* const rdx_5
    
    if (arg2[1].d == 0)
        rdx_5 = &data_142d40450
    else
        rdx_5 = *arg2
    
    if ((*(*arg1 + 0xe0))(arg1, rdx_5) == 0)
        goto label_140a4a80b

return 1
