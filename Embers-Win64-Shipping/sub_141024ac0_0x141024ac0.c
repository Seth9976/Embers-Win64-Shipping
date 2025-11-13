// 函数: sub_141024ac0
// 地址: 0x141024ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x30)

if (i_1 == 0)
    return 

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_forward(i_1)
int32_t rdi_1 = temp0_1

if (i_1 == 0)
    return 

int32_t i

do
    uint64_t rdx = zx.q(rdi_1)
    void* rcx = *(*(arg1 + 0x28) + (rdx << 3) + 0x9d8)
    void* rcx_1
    
    if (arg2 == 0)
        rcx_1 = *(rcx + 0x38)
    else if (arg2 == 1)
        rcx_1 = *(rcx + 0x40)
    else if (arg2 == 2)
        rcx_1 = *(rcx + 0x48)
    else
        rcx_1 = nullptr
    
    int64_t* rcx_2 = *(rcx_1 + 0x28)
    int64_t r9_1 = *rcx_2
    int64_t var_38
    int64_t* var_30
    int32_t rax_4 =
        (*(r9_1 + 0x78))(rcx_2, *(*(arg1 + (rdx << 3) + 0x98) + 0x18), arg3, r9_1, var_38, var_30)
    
    if (rax_4 s< 0)
        int64_t var_28 = 0
        var_30 = &var_28
        int64_t var_20_1 = 0
        var_38 = 0
        sub_14106a020(rax_4, "CommandQueue->Wait(FenceCore->GetFence(), FenceValue)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DirectCommandListManager.cpp", 
            0xd1, nullptr)
    
    int32_t rax_5 = 1 << rdi_1.b
    rdi_1 = 0x20
    i = not.d(rax_5) & i_1
    i_1 = i
    
    if (i != 0)
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_forward(i)
        rdi_1 = temp0_3
while (i != 0)
