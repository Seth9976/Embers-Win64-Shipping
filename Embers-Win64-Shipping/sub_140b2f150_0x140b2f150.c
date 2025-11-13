// 函数: sub_140b2f150
// 地址: 0x140b2f150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143de8178 == 0
*arg1 = arg2

if (not(cond:0) && *(zx.q(data_143de7018) + &data_143de7240) != 0)
    void* rax_2 = TlsGetValue(data_143de7a5c)
    void* rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = sub_140b35c00()
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    char rax_4 = (*(rbx_1 + 0x10)).b
    void* const r8_1
    
    if (rax_4 != 0)
        r8_1 = *(rbx_1 + 8)
    else
        void* rax_5 = j_sub_140a82f30(0x1808)
        r8_1 = rax_5
        
        if (rax_5 == 0)
            r8_1 = nullptr
        else
            *(rax_5 + 0x1800) = 0
        
        void* rax_6 = *(rbx_1 + 8)
        
        if (rax_6 != 0)
            *(rax_6 + 0x1800) = r8_1
            *(rbx_1 + 8) = r8_1
        else
            *rbx_1 = r8_1
            *(rbx_1 + 8) = r8_1
    
    int32_t rdx = data_143de7018
    uint64_t rcx_3 = zx.q(rax_4) * 3
    *(r8_1 + (rcx_3 << 3)) = performanceCount
    *(r8_1 + (rcx_3 << 3) + 0x15) = 0x12
    *(r8_1 + (rcx_3 << 3) + 8) = arg2
    *(r8_1 + (rcx_3 << 3) + 0x10) = rdx
    *(rbx_1 + 0x10) += 1

return arg1
