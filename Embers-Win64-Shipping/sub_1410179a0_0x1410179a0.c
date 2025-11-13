// 函数: sub_1410179a0
// 地址: 0x1410179a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x70) != 0)
    return 

int32_t rdx_1 = *(arg1 + 0x128)
int64_t* rcx = *(arg1 + 0x30)

if (rdx_1 != 0)
    (*(*rcx + 0xd0))(rcx, rdx_1, *(arg1 + 0x120))
    *(arg1 + 0x128) = 0
    rcx = *(arg1 + 0x30)

int32_t rax = (*(*rcx + 0x48))(rcx)
int64_t var_18

if (rax s< 0)
    var_18 = 0
    int64_t* var_20_1 = &var_18
    int64_t var_10_1 = 0
    sub_14106a020(rax, "CommandList->Close()", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandList.cpp", 0x86, 
        nullptr)

if (data_1439b4ad4 != 0)
    int32_t* rcx_2 = *(arg1 + 0x118)
    
    if (rcx_2 != 0)
        rax = sub_141017a90(rcx_2)
        
        if (rax s< 0)
            var_18 = 0
            int64_t* var_20_2 = &var_18
            int64_t var_10_2 = 0
            sub_14106a020(rax, "pSet->Close()", 
                "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12Residency.h", 
                0x92, nullptr)

*(arg1 + 0x70) = 1
