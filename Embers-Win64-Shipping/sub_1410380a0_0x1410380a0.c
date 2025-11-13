// 函数: sub_1410380a0
// 地址: 0x1410380a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1[2]
void* r9_2 = &rbx[sx.q(arg1[3].d) * 8]

if (rbx == r9_2)
label_1410380d3:
    rbx = nullptr
else
    while (not(test_bit(*rbx, arg2)))
        rbx = &rbx[8]
        
        if (rbx == r9_2)
            goto label_1410380d3

void* rcx_1 = *(*arg1 + (zx.q(arg2) << 3) + 0x9d8)
void* rcx_2

if (arg3 == 0)
    rcx_2 = *(rcx_1 + 0x38)
else if (arg3 == 1)
    rcx_2 = *(rcx_1 + 0x40)
else if (arg3 == 2)
    rcx_2 = *(rcx_1 + 0x48)
else
    rcx_2 = nullptr

int64_t* rcx_3 = *(rcx_2 + 0x28)
int64_t r9_3 = *rcx_3
int32_t rax_4 = (*(r9_3 + 0x78))(rcx_3, *(*(rbx + 0x18) + 0x18), *(rbx + 8), r9_3)

if (rax_4 s< 0)
    int64_t var_18 = 0
    int64_t* var_20_1 = &var_18
    int64_t var_10_1 = 0
    sub_14106a020(rax_4, 
        "CommandQueue->Wait(CrossGPUFence->FenceCore->GetFence(), CrossGPUFence->LastSignaledFence)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandContext.cpp", 
        0x332, nullptr)

int64_t result = *(rbx + 8)
*(rbx + 0x10) = result
return result
