// 函数: sub_141027930
// 地址: 0x141027930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg2)
EnterCriticalSection(&arg1[1])
void* rdi_2 = &arg1[(rbp + 3) * 2]
int64_t rax_3
int64_t* result

if (**(rdi_2 + 8) != 0)
    result = *(**(rdi_2 + 8) + 8)
    int64_t* rcx_2 = result[3]
    rax_3 = (*(*rcx_2 + 0x40))(rcx_2)

if (**(rdi_2 + 8) == 0 || result[1] u> rax_3)
    if (arg1 != -8)
        LeaveCriticalSection(&arg1[1])
    
    int64_t* result_1 = j_sub_140a82f30(0x28)
    result = result_1
    
    if (result_1 == 0)
        return nullptr
    
    void* rbx_1 = *arg1
    *result_1 = rbx_1
    result_1[1] = 0
    result_1[2].d = rbp.d
    result_1[3] = 0
    result_1[4] = -1
    result[4] = CreateEventW(nullptr, 0, 0, nullptr)
    int64_t* rcx_6 = result_1[3]
    int64_t* rbx_2 = *(rbx_1 + 0x18)
    result_1[3] = 0
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x10))(rcx_6)
    
    int32_t rax_8 = (*(*rbx_2 + 0x120))(rbx_2, 0, 0, &data_142efcb18, &result_1[3])
    
    if (rax_8 s< 0)
        int64_t var_18 = 0
        int64_t* var_20_1 = &var_18
        int64_t var_10_1 = 0
        sub_14106a020(rax_8, 
            "Parent->GetD3DDevice()->CreateFence(InitialValue, D3D12_FENCE_FLAG_NONE, "
        "IID_PPV_ARGS(Fence.GetInitReference()))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DirectCommandListManager.cpp", 
            0x58, nullptr)
else
    void* rdx = **(rdi_2 + 8)
    
    if (rdx != 0)
        result = *(rdx + 8)
        int64_t rcx_3 = *(rdi_2 + 8)
        *(rdi_2 + 8) = rdx
        *(rdx + 8) = 0
        j_sub_140a74f90(rcx_3)
    
    if (arg1 != -8)
        LeaveCriticalSection(&arg1[1])

return result
