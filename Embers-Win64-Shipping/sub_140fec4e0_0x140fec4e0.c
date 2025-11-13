// 函数: sub_140fec4e0
// 地址: 0x140fec4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x28)
*(arg1 + 0x18) = 1

if (rdx == 0)
    return 0

int64_t* rcx = *(arg1 + 0x20)
int64_t var_18
int32_t rax_1 = (*(*rcx + 0x70))(rcx, rdx, 0, 1, 0, &var_18)

if (rax_1 s< 0)
    sub_140fff020(rax_1, "Context->Map(StagedRead, 0, D3D11_MAP_READ, 0, &MappedSubresource)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11UAV.cpp", 0x227)

return zx.q(arg2) + var_18
