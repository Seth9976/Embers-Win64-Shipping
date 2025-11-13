// 函数: sub_14100a000
// 地址: 0x14100a000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int32_t rax = *(arg2 + 0x10)
arg1[1].d = rax
*(arg1 + 0xc) = rax
int32_t rax_1

if (rax != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax)
    rax_1 = temp0_1
    int32_t arg_8 = rax_1
else
    rax_1 = 0x20

arg1[2].d = rax_1
*(arg1 + 0x14) = 0
int32_t r13 = 1
arg1[3] = arg5
arg1[4] = 0
arg1[5].d = arg3
arg1[6] = 0
__builtin_memset(&arg1[7], 0, 0x18)
arg1[0xb] = arg4
arg1[0xc] = 1
arg1[0xd] = 0
arg1[0xe].w = 0
int64_t rax_3 = j_sub_140a82f30(0x20)

if (rax_3 == 0)
    rax_3 = 0
else
    __builtin_memset(rax_3, 0, 0x20)

arg1[0x11] = rax_3
arg1[0x10] = rax_3
InitializeCriticalSection(&arg1[0x12])
SetCriticalSectionSpinCount(&arg1[0x12], 0xfa0)
void* rcx_2 = &arg1[0x1b]
__builtin_memset(&arg1[0x17], 0, 0x20)
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_4 = *(rcx_2 + 0x10)

if (rax_4 != 0)
    rcx_2 = rax_4

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x1f].d = 0xffffffff
*(arg1 + 0xfc) = 0
arg1[0x21] = 0
arg1[0x22].d = 0
__builtin_memset(&arg1[0x23], 0, 0x18)
int64_t* rcx_3 = arg1[6]
int64_t* rbx = *(*(arg2 + 0x20) + 0x18)
arg1[6] = 0

if (rcx_3 != 0)
    (*(*rcx_3 + 0x10))(rcx_3, 0)

if (data_143f0f1d8 == 0)
    r13 = arg1[1].d

int32_t rax_9 =
    (*(*rbx + 0x60))(rbx, zx.q(r13), zx.q(arg1[5].d), *arg4, 0, &data_142efede0, &arg1[6])

if (rax_9 s< 0)
    int64_t var_58 = 0
    int64_t* var_70_1 = &var_58
    int64_t var_50_1 = 0
    sub_14106a020(rax_9, 
        "ParentDevice->GetDevice()->CreateCommandList(GetGPUMask().GetNative(), CommandListType, "
    "CommandAllocator, nullptr, IID_PPV_ARGS(CommandList.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandList.cpp", 0x3e, 
        nullptr)

int64_t* rcx_6 = arg1[7]
int64_t* rbx_1 = arg1[6]
arg1[7] = 0

if (rcx_6 != 0)
    (*(*rcx_6 + 0x10))(rcx_6)

(**rbx_1)(rbx_1, &data_142efedf0, &arg1[7])
int64_t* rcx_8 = arg1[8]
int64_t* rbx_2 = arg1[6]
arg1[8] = 0

if (rcx_8 != 0)
    (*(*rcx_8 + 0x10))(rcx_8)

(**rbx_2)(rbx_2, &data_142efee00, &arg1[8])

if (*(*(arg2 + 0x20) + 0x38) != 0 && (arg3 & 0xfffffffd) == 0)
    int64_t* rcx_10 = arg1[9]
    int64_t* rbx_3 = arg1[6]
    arg1[9] = 0
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x10))(rcx_10)
    
    int32_t rax_17 = (**rbx_3)(rbx_3, &data_142efee10, &arg1[9])
    
    if (rax_17 s< 0)
        int64_t var_48 = 0
        int64_t* var_70_2 = &var_48
        int64_t var_40_1 = 0
        sub_14106a020(rax_17, 
            "CommandList->QueryInterface(IID_PPV_ARGS(RayTracingCommandList.GetInitReference()))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12CommandList.cpp", 
            0x4b, nullptr)

arg1[0xa] = 0

if (data_143e2c7c8 != 0)
    GFSDK_Aftermath_DX12_CreateContextHandle(arg1[6], &arg1[0xa])
    sub_1410595d0(*(arg2 + 0x20) + 0x830, arg1[0xa])

sub_1410179a0(arg1)

if (*(arg1 + 0xc4) s< 0x100)
    sub_1405a5410(&arg1[0x17], 0x100)

if (data_1439b4ad4 == 0)
    arg1[0x23] = 0
else
    int32_t* rax_18 = j_sub_140a82f30(0x28)
    
    if (rax_18 == 0)
        arg1[0x23] = 0
    else
        *rax_18 = 0xffffffff
        *(rax_18 + 0x20) = arg2 + 0xa98
        __builtin_memset(&rax_18[2], 0, 0x12)
        arg1[0x23] = rax_18

return arg1
