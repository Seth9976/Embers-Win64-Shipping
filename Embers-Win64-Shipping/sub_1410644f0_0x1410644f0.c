// 函数: sub_1410644f0
// 地址: 0x1410644f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x30)
int32_t rsi_1

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    rsi_1 = temp0_1

if (i_1 == 0 || i_1 == 0)
    *(arg1 + 0x40) = arg3
    return 

int32_t i

do
    uint64_t rdi_1 = zx.q(rsi_1)
    int64_t* rcx_1 = *(sub_141022a70(*(*(arg1 + 0x28) + (rdi_1 << 3) + 0x9d8), arg2) + 0x28)
    int64_t r9_1 = *rcx_1
    int64_t var_38
    int64_t* var_30
    int32_t rax_3 =
        (*(r9_1 + 0x70))(rcx_1, *(*(arg1 + (rdi_1 << 3) + 0x98) + 0x18), arg3, r9_1, var_38, var_30)
    
    if (rax_3 s< 0)
        int64_t var_28 = 0
        var_30 = &var_28
        int64_t var_20_1 = 0
        var_38 = 0
        sub_14106a020(rax_3, "CommandQueue->Signal(FenceCore->GetFence(), FenceToSignal)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Fence.cpp", 
            0x16, nullptr)
    
    int32_t rax_4 = 1 << rsi_1.b
    rsi_1 = 0x20
    i = not.d(rax_4) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_2
        temp0_2, rflags_2 = _bit_scan_forward(i)
        rsi_1 = temp0_2
while (i != 0)
*(arg1 + 0x40) = arg3
