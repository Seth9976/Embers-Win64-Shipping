// 函数: sub_141024a20
// 地址: 0x141024a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(*(arg1 + 0x28) + (zx.q(arg2) << 3) + 0x9d8)
void* rcx_1

if (arg3 == 0)
    rcx_1 = *(rcx + 0x38)
else if (arg3 == 1)
    rcx_1 = *(rcx + 0x40)
else if (arg3 == 2)
    rcx_1 = *(rcx + 0x48)
else
    rcx_1 = nullptr

int64_t* rcx_2 = *(rcx_1 + 0x28)
int32_t result = (*(*rcx_2 + 0x78))(rcx_2, *(*(arg1 + (zx.q(arg5) << 3) + 0x98) + 0x18), arg4)

if (result s>= 0)
    return result

int64_t var_18 = 0
int64_t* var_20_1 = &var_18
int64_t var_10_1 = 0
return sub_14106a020(result, "CommandQueue->Wait(FenceCore->GetFence(), FenceValue)", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DirectCommandListManager.cpp", 
    0xd1, nullptr)
