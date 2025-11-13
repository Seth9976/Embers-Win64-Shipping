// 函数: sub_142a42020
// 地址: 0x142a42020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && arg1 != 0)
    int64_t rcx = data_143cc8280
    int64_t rax_1 = rcx - 1 + arg1
    int64_t lpAddress
    
    if (((rcx - 1) & rcx) != 0)
        lpAddress = divu.dp.q(0:rax_1, rcx) * rcx
    else
        lpAddress = not.q(rcx - 1) & rax_1
    
    uint64_t dwSize = divu.dp.q(0:(arg1 + arg2), rcx) * rcx - lpAddress
    
    if (dwSize s> 0 && (data_1440153a8 == 0 || arg1 u< data_1440153a8
            || arg1 u>= data_1440153b0 + data_1440153a8))
        sub_142a43f80(arg3 + 0x60, dwSize)
        
        if (VirtualFree(lpAddress, dwSize, MEM_DECOMMIT) != 0)
            BOOL rax_6
            rax_6.b = true
            return rax_6
        
        enum WIN32_ERROR rax_7 = GetLastError()
        
        if (rax_7 != NO_ERROR)
            sub_142a43740("commit/decommit error: start: 0x%p, csize: 0x%x, err: %i\n", lpAddress)
        
        rax_7.b = rax_7 == NO_ERROR
        return rax_7

uint64_t rax
rax.b = 1
return rax
