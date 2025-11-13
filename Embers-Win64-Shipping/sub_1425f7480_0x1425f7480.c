// 函数: sub_1425f7480
// 地址: 0x1425f7480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = data_143f70ce8
sub_140b34200("HighlightRecorder_Stop", rsi)
sub_1425f43d0(sub_1425f2bf0(), arg1)
*(arg1 + 8)
*(arg1 + 8) = 0
int64_t* rcx_1 = *(arg1 + 0x80)

if (rcx_1 != 0)
    sub_140a81580(rcx_1)
    void* rdi_1 = *(arg1 + 0x80)
    
    if (rdi_1 != 0)
        *(arg1 + 0x80) = 0
        sub_1405970a0(rdi_1)
        j_sub_140a74f90(rdi_1)

return sub_140b38680("HighlightRecorder_Stop", rsi) __tailcall
