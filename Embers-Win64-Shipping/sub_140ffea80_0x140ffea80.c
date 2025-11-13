// 函数: sub_140ffea80
// 地址: 0x140ffea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg5 u<= 0)
    return 

int32_t var_28_1 = 0
int64_t var_18
int32_t rax_2 = (*(*arg2 + 0x70))(arg2, *(arg3 + 0x28), 0, 4, 0, &var_18)

if (rax_2 s< 0)
    var_28_1.q = arg1
    sub_140fff020(rax_2, 
        "Context->Map(UniformBuffer->Resource.GetReference(), 0, D3D11_MAP_WRITE_DISCARD, 0, "
    "&MappedSubresource)", 
        "
        D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UniformBuffer.cpp", 
        0x11f)

memcpy(var_18, arg4, arg5)
(*(*arg2 + 0x78))(arg2, *(arg3 + 0x28), 0)
