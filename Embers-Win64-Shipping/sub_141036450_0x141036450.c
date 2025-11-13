// 函数: sub_141036450
// 地址: 0x141036450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[2]
void* r9_2 = &rax[sx.q(arg1[3].d) * 8]

if (rax == r9_2)
label_141036480:
    rax = nullptr
else
    while (not(test_bit(*rax, arg2)))
        rax = &rax[8]
        
        if (rax == r9_2)
            goto label_141036480

void* r9_3 = *(*arg1 + (zx.q(arg2) << 3) + 0x9d8)
void* rcx_2

if (arg3 == 0)
    rcx_2 = *(r9_3 + 0x38)
else if (arg3 == 1)
    rcx_2 = *(r9_3 + 0x40)
else if (arg3 == 2)
    rcx_2 = *(r9_3 + 0x48)
else
    rcx_2 = nullptr

int64_t* rcx_3 = *(rcx_2 + 0x28)
*(rax + 8) += 1
int64_t r9_4 = *rcx_3
int32_t result = (*(r9_4 + 0x70))(rcx_3, *(*(rax + 0x18) + 0x18), *(rax + 8), r9_4)

if (result s>= 0)
    return result

int64_t var_18 = 0
int64_t* var_20_1 = &var_18
int64_t var_10_1 = 0
return sub_14106a020(result, 
    "CommandQueue->Signal(CrossGPUFence->FenceCore->GetFence(), ++CrossGPUFence->LastSignaledFence)", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandContext.cpp", 0x33f, 
    nullptr)
