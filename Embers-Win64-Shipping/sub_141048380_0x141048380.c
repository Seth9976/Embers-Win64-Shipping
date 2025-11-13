// 函数: sub_141048380
// 地址: 0x141048380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141022ce0(arg2)
int64_t* rcx_1 = *arg4
*arg4 = 0

if (rcx_1 != 0)
    int64_t rdx = *rcx_1
    (*(rdx + 0x10))(rcx_1, rdx)

int32_t result = (*(*rax + 0x40))(rax, arg3, &data_142f01868, arg4)

if (result s>= 0)
    return result

int64_t var_18 = 0
int64_t* var_20_1 = &var_18
int64_t var_10_1 = 0
return sub_14106a020(result, 
    "Device->GetDevice()->CreateCommandQueue(&Desc, IID_PPV_ARGS(OutCommandQueue.GetInitReference()))", 
    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12RHI.cpp", 0x108, nullptr)
