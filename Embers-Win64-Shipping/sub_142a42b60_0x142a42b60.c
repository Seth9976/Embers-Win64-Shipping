// 函数: sub_142a42b60
// 地址: 0x142a42b60
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
        if (arg3 != 0)
            j_sub_142a44ce0(arg4 + 0x80, dwSize)
            
            if (VirtualAlloc(lpAddress, dwSize, MEM_RESET, PAGE_READWRITE) != lpAddress)
                int64_t rax_6
                rax_6.b = 0
                return rax_6
            
            VirtualUnlock(lpAddress, dwSize)
            int64_t rax_7
            rax_7.b = 1
            return rax_7
        
        sub_142a43f80(arg4 + 0x80, dwSize)

uint64_t rax
rax.b = 1
return rax
