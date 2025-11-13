// 函数: sub_142a41ee0
// 地址: 0x142a41ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
uint64_t rax

if (arg2 != 0 && arg1 != 0)
    int64_t rcx = data_143cc8280
    rax = rcx - 1 + arg1 + arg2
    int64_t lpAddress = divu.dp.q(0:arg1, rcx) * rcx
    int64_t rbx_3
    
    if (((rcx - 1) & rcx) != 0)
        rbx_3 = divu.dp.q(0:rax, rcx) * rcx
    else
        rbx_3 = not.q(rcx - 1) & rax
    
    uint64_t dwSize = rbx_3 - lpAddress
    
    if (dwSize s> 0 && (data_1440153a8 == 0 || arg1 u< data_1440153a8
            || arg1 u>= data_1440153b0 + data_1440153a8))
        j_sub_142a44ce0(arg4 + 0x60, dwSize)
        j_sub_142a44ce0(arg4 + 0x140, 1)
        
        if (VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, PAGE_READWRITE) == lpAddress)
            int64_t rax_6
            rax_6.b = true
            return rax_6
        
        enum WIN32_ERROR rax_7 = GetLastError()
        
        if (rax_7 != NO_ERROR)
            sub_142a43740("commit/decommit error: start: 0x%p, csize: 0x%x, err: %i\n", lpAddress)
        
        rax_7.b = rax_7 == NO_ERROR
        return rax_7

rax.b = 1
return rax
