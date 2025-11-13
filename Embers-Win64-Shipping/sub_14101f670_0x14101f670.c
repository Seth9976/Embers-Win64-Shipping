// 函数: sub_14101f670
// 地址: 0x14101f670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x120)
int64_t* r10 = *(arg1 + 0x28)

if (data_1439b4ad4 == 0)
    (*(*r10 + 0x50))(r10, zx.q(*(arg2 + 0x1000)), arg2)
else
    enum WIN32_ERROR rax_1 =
        sub_1410208f0(*(arg1 + 0x10) + 0x910, r10, arg2, arg2 + 0x800, *(arg2 + 0x1000))
    
    if (rax_1 s< NO_ERROR)
        int64_t var_18
        int64_t* var_20_1 = &var_18
        var_18 = 0
        int64_t var_10_1 = 0
        sub_14106a020(rax_1, 
            "GetParentDevice()->GetResidencyManager().ExecuteCommandLists(D3DCommandQueue, Payload."
        "CommandLists, Payload.ResidencySets, Payload.NumCommandLists)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DirectCommandListManager.cpp", 
            0x230, nullptr)

sub_1410644f0(arg3, *(arg1 + 0xf4), *(arg3 + 0x38))
sub_141037da0(arg3)
*(arg3 + 0x38) += 1
int64_t result = *(arg3 + 0x40)

if (arg1 != -0x120)
    LeaveCriticalSection(arg1 + 0x120)

return result
