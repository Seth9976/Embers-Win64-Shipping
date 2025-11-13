// 函数: sub_141015f40
// 地址: 0x141015f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f0f168 = 0
int64_t* rcx = *(*(*(arg1 + 0x9d8) + 0x38) + 0x28)
int32_t rax_2 = (*(*rcx + 0x80))(rcx, &data_143f0f168)
int64_t var_18

if (rax_2 s< 0)
    var_18 = 0
    int64_t* var_20_1 = &var_18
    int64_t var_10_1 = 0
    sub_14106a020(rax_2, 
        "ParentAdapter->GetDevice(GPUIndex)->GetCommandListManager()."
    "GetTimestampFrequency(&GTimingFrequency)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Query.cpp", 0x2e6, nullptr)

int64_t* result = sub_141022920(*(*(arg1 + 0x9d8) + 0x38), &var_18)
data_143f0f170.o = *result
return result
