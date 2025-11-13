// 函数: sub_140b361f0
// 地址: 0x140b361f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b3cdd0()
char result = data_143de8178

if (result != 0)
    uint64_t rbx_2 = zx.q((data_143de7158).d) & 0xf
    void* const rcx_1
    
    if (rbx_2.d != 0)
        rcx_1 = data_143de7150
    else
        void* rax = j_sub_140a82f30(0x88)
        rcx_1 = rax
        
        if (rax == 0)
            rcx_1 = nullptr
        else
            *(rax + 0x80) = 0
        
        void* rax_1 = data_143de7150
        
        if (rax_1 != 0)
            *(rax_1 + 0x80) = rcx_1
            data_143de7150 = rcx_1
        else
            data_143de7148 = rcx_1
            data_143de7150 = rcx_1
    
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(rcx_1 + (rbx_2 << 3)) = performanceCount
    data_143de7158 += 1
    result = data_143de8178

data_143de8179 = result
return result
