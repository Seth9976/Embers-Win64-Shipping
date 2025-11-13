// 函数: sub_141025490
// 地址: 0x141025490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t var_20 = 0
int32_t rax = 1
*(arg1 + 0x60) = var_28.o
*(arg1 + 0x68) = 1
*(arg1 + 0x60) = arg3
*(arg1 + 0x64) = arg2

if (data_143f0f1d8 == 0)
    rax = *(arg1 + 0x10)

*(arg1 + 0x6c) = rax
int64_t* r14 = *(*(*(arg1 + 8) + 0x20) + 0x18)
int64_t* rcx_1 = *(arg1 + 0x58)
*(arg1 + 0x58) = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int32_t rax_4 = (*(*r14 + 0x70))(r14, arg1 + 0x60, &data_142efce18, arg1 + 0x58)

if (rax_4 s< 0)
    var_28 = 0
    int64_t* var_30_1 = &var_28
    int64_t var_20_1 = 0
    sub_14106a020(rax_4, 
        "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap."
    "GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DescriptorCache.cpp", 
        0x425, nullptr)

*(arg1 + 0x58)
*(arg1 + 0x60)
int64_t* rcx_5 = *(arg1 + 0x58)
int64_t* rsi = *(arg1 + 0x90)
*(arg1 + 0x90) = rcx_5

if (rcx_5 != 0)
    (*(*rcx_5 + 8))()

if (rsi != 0)
    (*(*rsi + 0x10))(rsi)

int64_t* rcx_7 = *(arg1 + 0x58)
void arg_8
*(arg1 + 0x40) = *(*(*rcx_7 + 0x48))(rcx_7, &arg_8)
int64_t* rcx_9 = *(arg1 + 0x58)
int64_t rcx_10 = *(*(*rcx_9 + 0x50))(rcx_9, &arg_8)
void* rax_11 = *(arg1 + 8)
*(arg1 + 0x48) = rcx_10
int64_t* rcx_12 = *(*(rax_11 + 0x20) + 0x18)
int32_t result = (*(*rcx_12 + 0x78))(rcx_12, zx.q(arg3))
*(arg1 + 0x38) = result
return result
