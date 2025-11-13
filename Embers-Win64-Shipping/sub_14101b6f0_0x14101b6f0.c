// 函数: sub_14101b6f0
// 地址: 0x14101b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x18)
int32_t var_14 = 0
int32_t var_24 = 1

if (data_143f0f1d8 == 0)
    int32_t var_18_1 = (1 << (data_1439c7a34).b) - 1
else
    int32_t var_18 = 1

int32_t var_28 = 0x10
int64_t var_48 = 0
int64_t* rcx_1 = *(arg1 + 0x418)
int64_t var_40 = 0
int64_t* var_20 = &var_48
*(arg1 + 0x418) = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int32_t rax_5 = (*(*rsi + 0x148))(rsi, &var_28, 0, &data_142efe278, arg1 + 0x418)
int64_t* var_50
int64_t var_38

if (rax_5 s< 0)
    var_38 = 0
    var_50 = &var_38
    int64_t var_30_1 = 0
    sub_14106a020(rax_5, 
        "Device->CreateCommandSignature(&commandSignatureDesc, nullptr, "
    "IID_PPV_ARGS(DrawIndirectCommandSignature.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x307, 
        nullptr)

var_48.d = 1
int64_t* rcx_4 = *(arg1 + 0x420)
var_28 = 0x14
*(arg1 + 0x420) = 0

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4)

int32_t rax_8 = (*(*rsi + 0x148))(rsi, &var_28, 0, &data_142efe278, arg1 + 0x420, var_50)

if (rax_8 s< 0)
    var_38 = 0
    var_50 = &var_38
    int64_t var_30_2 = 0
    sub_14106a020(rax_8, 
        "Device->CreateCommandSignature(&commandSignatureDesc, nullptr, "
    "IID_PPV_ARGS(DrawIndexedIndirectCommandSignature.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x30b, 
        nullptr)

var_48.d = 2
var_28 = 0xc
int64_t* rcx_7 = *(arg1 + 0x428)
*(arg1 + 0x428) = 0

if (rcx_7 != 0)
    (*(*rcx_7 + 0x10))(rcx_7)

int32_t result = (*(*rsi + 0x148))(rsi, &var_28, 0, &data_142efe278, arg1 + 0x428, var_50)

if (result s>= 0)
    return result

var_38 = 0
int64_t* var_50_1 = &var_38
int64_t var_30_3 = 0
return sub_14106a020(result, 
    "Device->CreateCommandSignature(&commandSignatureDesc, nullptr, "
"IID_PPV_ARGS(DispatchIndirectCommandSignature.GetInitReference()))", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x30f, nullptr)
