// 函数: sub_142a424f0
// 地址: 0x142a424f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg5 = 0
char* rax

if (arg2 != 0 && arg1 != 0)
    void* r8 = data_143cc8280
    void* lpAddress
    
    if (arg4 == 0)
        lpAddress = divu.dp.q(0:arg1, r8) * r8
    else
        void* rax_1 = r8 - 1 + arg1
        
        if (((r8 - 1) & r8) != 0)
            lpAddress = divu.dp.q(0:rax_1, r8) * r8
        else
            lpAddress = not.q(r8 - 1) & rax_1
    
    rax = arg1 + arg2
    
    if (arg4 == 0)
        rax += r8 - 1
    
    void* rbx_3
    
    if (arg4 != 0 || ((r8 - 1) & r8) != 0)
        rbx_3 = divu.dp.q(0:rax, r8) * r8
    else
        rbx_3 = not.q(r8 - 1) & rax
    
    void* dwSize = rbx_3 - lpAddress
    
    if (dwSize s> 0 && (data_1440153a8 == 0 || arg1 u< data_1440153a8
            || arg1 u>= data_1440153b0 + data_1440153a8))
        int64_t rax_5
        bool cond:0_1
        
        if (arg3 == 0)
            sub_142a43f80(arg6 + 0x60, dwSize)
            
            if (VirtualFree(lpAddress, dwSize, MEM_DECOMMIT).d == 0)
            label_142a42603:
                rax_5 = GetLastError()
                int32_t temp3_1 = rax_5.d
                cond:0_1 = temp3_1 == 0
                
                if (temp3_1 != 0)
                    sub_142a43740("commit/decommit error: start: 0x%p, csize: 0x%x, err: %i\n", 
                        lpAddress)
                    cond:0_1 = rax_5.d == 0
            else
                cond:0_1 = 0 == 0
        else
            j_sub_142a44ce0(arg6 + 0x60, dwSize)
            j_sub_142a44ce0(arg6 + 0x140, 1)
            
            if (VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, PAGE_READWRITE) != lpAddress)
                goto label_142a42603
            
            cond:0_1 = 0 == 0
        
        rax_5.b = cond:0_1
        return rax_5

rax.b = 1
return rax
