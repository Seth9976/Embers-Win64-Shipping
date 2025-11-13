// 函数: sub_141027760
// 地址: 0x141027760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = &data_142efcd90
arg2[1] = 0

if (sub_14101c1c0(arg1 + 0x30, arg2) == 0)
    void* rbp_1 = *(arg1 + 0x10)
    int32_t r14_1 = *(arg1 + 0xf0)
    int64_t* rax_1 = j_sub_140a82f30(0x130)
    int64_t* rdi_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1 = sub_14100a000(rax_1, rbp_1, r14_1, arg3, arg1)
    
    *(rdi_1 + 0x14) += 1
    void* rcx_2 = arg2[1]
    
    if (rcx_2 != rdi_1)
        if (rcx_2 != 0)
            int32_t rax_3 = *(rcx_2 + 0x14)
            *(rcx_2 + 0x14) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_3 = arg2[1]
                
                if (rcx_3 != 0)
                    sub_141011360(rcx_3, rax_3.b)
        
        arg2[1] = rdi_1
    else if (rdi_1 != 0)
        int32_t rax_4 = *(rdi_1 + 0x14)
        *(rdi_1 + 0x14) -= 1
        
        if (rax_4 == 1)
            sub_141011360(rdi_1, rax_4.b)

void* rdi_2 = arg2[1]
int64_t* rcx_5 = *(rdi_2 + 0x30)
int32_t rax_6 = (*(*rcx_5 + 0x50))(rcx_5, *arg3, 0)

if (rax_6 s< 0)
    int64_t var_38 = 0
    int64_t* var_40_1 = &var_38
    int64_t var_30_1 = 0
    sub_14106a020(rax_6, "CommandList->Reset(CommandAllocator, nullptr)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandList.cpp", 0x8f, 
        nullptr)

*(rdi_2 + 0x58) = arg3
*(rdi_2 + 0x70) = 0
arg3[3].d += 1
sub_141017270(rdi_2)
*(rdi_2 + 0xc0) = 0

if (*(rdi_2 + 0xc4) s<= 0xffffffff)
    sub_1405a5410(rdi_2 + 0xb8, 0)

sub_140ba26d0(rdi_2 + 0xc8, 0)

if (data_1439b4ad4 != 0)
    int32_t* rcx_10 = *(rdi_2 + 0x118)
    
    if (rcx_10 != 0)
        int32_t rax_7 = sub_141027ab0(rcx_10)
        
        if (rax_7 s< 0)
            int64_t var_28 = 0
            int64_t* var_40_2 = &var_28
            int64_t var_20_1 = 0
            sub_14106a020(rax_7, "pSet->Open()", 
                "d:\build\++ue4\sync\engine\source\runtime\d3d12rhi\private\D3D12Residency.h", 
                0x88, nullptr)

return arg2
