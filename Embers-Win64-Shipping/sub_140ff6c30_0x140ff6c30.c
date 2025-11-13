// 函数: sub_140ff6c30
// 地址: 0x140ff6c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg2 + 0x28)
*(arg2 + 0x18) = 1

if (r10 == 0)
    return 0

int64_t* rcx = *(arg2 + 0x20)
int64_t var_18
int32_t rax_1 = (*(*rcx + 0x70))(rcx, r10, 0, 1, 0, &var_18)

if (rax_1 s< 0)
    sub_140fff020(rax_1, "Context->Map(StagedRead, 0, D3D11_MAP_READ, 0, &MappedSubresource)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp", 0x227)

return zx.q(arg4) + var_18
