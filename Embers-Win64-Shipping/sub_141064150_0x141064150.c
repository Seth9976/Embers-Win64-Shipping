// 函数: sub_141064150
// 地址: 0x141064150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
int64_t arg_8 = 0
int64_t* rcx = *(rax + 0x198)
int32_t rax_2 = (**rcx)(rcx, &data_142efa7c8, &arg_8)
int64_t var_18

if (rax_2 s< 0)
    var_18 = 0
    int64_t* var_20_1 = &var_18
    int64_t var_10_1 = 0
    sub_14106a020(rax_2, 
        "GetParentAdapter()->GetAdapter()->QueryInterface(IID_PPV_ARGS(&DxgiAdapter3))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Device.cpp", 
        0x318, nullptr)

int32_t rdi = 0

if (data_143f0f1d8 == 0)
    rdi = *(arg1 + 0x18)

int64_t rsi = arg_8
int64_t rax_3 = sub_141022ce0(arg1)

if (data_1439b4ad4 != 0)
    int32_t rax_4 = sub_141064260(arg1 + 0x910, rax_3, rdi, rsi, 6)
    
    if (rax_4 s< 0)
        var_18 = 0
        int64_t* var_20_2 = &var_18
        int64_t var_10_2 = 0
        sub_14106a020(rax_4, "ResidencyManager.Initialize(Device, GPUIndex, Adapter, MaxLatency)", 
            "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12Residency.h", 0x61, 
            nullptr)

return sub_141035d10(arg1)
