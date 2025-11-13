// 函数: sub_1425f7320
// 地址: 0x1425f7320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = data_143f70ce8
sub_140b34200("StartRecording", rbp)
int32_t rax = 0

if (0 == *(arg1 + 0x20))
    *(arg1 + 0x20) = 0
else
    rax = *(arg1 + 0x20)

if (rax == 4)
    void* rcx = *(arg1 + 0x70)
    bool z_1
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
        z_1 = true
    else
        *(rcx + 8)
        z_1 = false
    
    if (z_1)
        int64_t rax_2 = *(arg1 + 0x28)
        double zmm1_1[0x2] = zx.o(0)
        zmm1_1[0] = float.d(rax_2)
        
        if (rax_2 s< 0)
            zmm1_1[0] = zmm1_1[0] + 1.8446744073709552e+19
        
        sub_1425f70b0(*(arg1 + 0x70), zmm1_1)
    
    void* rcx_2 = *(arg1 + 0x70)
    int32_t rax_3 = 0
    
    if (0 == *(rcx_2 + 8))
        *(rcx_2 + 8) = 0
    else
        rax_3 = *(rcx_2 + 8)
    
    if (rax_3 == 2)
        int32_t rsi_1 = data_143f70ce8
        void* rdi_1 = *(arg1 + 0x70)
        sub_140b34200("HighlightRecorder_Pause", rsi_1)
        bool z_2
        
        if (0 == *(rdi_1 + 8))
            *(rdi_1 + 8) = 0
            z_2 = true
        else
            *(rdi_1 + 8)
            z_2 = false
        
        if (not(z_2) && *(rdi_1 + 0x70) != 0)
            void arg_18
            int64_t rax_7 = *sub_1425f5580(rdi_1, &arg_18) - *(rdi_1 + 0x70)
            *(rdi_1 + 0x78) += rax_7
            *(rdi_1 + 0x70) = 0
            *(rdi_1 + 8)
            *(rdi_1 + 8) = 1
        
        sub_140b38680("HighlightRecorder_Pause", rsi_1)
    
    *(arg1 + 0x20)
    *(arg1 + 0x20) = 2
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(arg1 + 0x60) = performanceCount

return sub_140b38680("StartRecording", rbp) __tailcall
