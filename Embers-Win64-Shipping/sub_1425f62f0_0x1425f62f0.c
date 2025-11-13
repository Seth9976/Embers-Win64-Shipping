// 函数: sub_1425f62f0
// 地址: 0x1425f62f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = data_143f70ce8
sub_140b34200("PauseRecording", rsi)
int32_t rax = 0

if (0 == *(arg1 + 0x20))
    *(arg1 + 0x20) = 0
else
    rax = *(arg1 + 0x20)

if (rax == 2)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(arg1 + 0x68) += performanceCount - *(arg1 + 0x60)
    int32_t rbp_1 = data_143f70ce8
    void* rdi_1 = *(arg1 + 0x70)
    sub_140b34200("HighlightRecorder_Pause", rbp_1)
    bool z_1
    
    if (0 == *(rdi_1 + 8))
        *(rdi_1 + 8) = 0
        z_1 = true
    else
        *(rdi_1 + 8)
        z_1 = false
    
    if (not(z_1) && *(rdi_1 + 0x70) == 0)
        void arg_18
        *(rdi_1 + 0x70) = *sub_1425f5580(rdi_1, &arg_18)
        *(rdi_1 + 8)
        *(rdi_1 + 8) = 2
    
    sub_140b38680("HighlightRecorder_Pause", rbp_1)
    *(arg1 + 0x20)
    *(arg1 + 0x20) = 4

return sub_140b38680("PauseRecording", rsi) __tailcall
