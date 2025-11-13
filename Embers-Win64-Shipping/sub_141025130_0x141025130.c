// 函数: sub_141025130
// 地址: 0x141025130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t var_20 = 0
int32_t rax = 1
*(arg1 + 0x60) = var_28.o
arg1[0xd].d = 1
arg1[0xc].d = arg3
*(arg1 + 0x64) = arg2

if (data_143f0f1d8 == 0)
    rax = arg1[2].d

*(arg1 + 0x6c) = rax
int64_t* r14 = *(*(arg1[1] + 0x20) + 0x18)
int64_t* rcx_1 = arg1[0xb]
arg1[0xb] = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int32_t rax_4 = (*(*r14 + 0x70))(r14, &arg1[0xc], &data_142efce18, &arg1[0xb])

if (rax_4 s< 0)
    var_28 = 0
    int64_t* var_30_1 = &var_28
    int64_t var_20_1 = 0
    sub_14106a020(rax_4, 
        "GetParentDevice()->GetDevice()->CreateDescriptorHeap(&Desc, IID_PPV_ARGS(Heap."
    "GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12DescriptorCache.cpp", 
        0x387, nullptr)

arg1[0xb]
arg1[0xc].d
int64_t* rcx_5 = arg1[0xb]
void arg_8
arg1[8] = *(*(*rcx_5 + 0x48))(rcx_5, &arg_8)
int64_t* rcx_7 = arg1[0xb]
int64_t* rax_8 = (*(*rcx_7 + 0x50))(rcx_7, &arg_8)
uint64_t rdx_5 = zx.q(arg1[0xc].d)
void* rax_9 = arg1[1]
arg1[9] = *rax_8
int64_t* rcx_10 = *(*(rax_9 + 0x20) + 0x18)
int32_t result = (*(*rcx_10 + 0x78))(rcx_10, rdx_5)
arg1[7].d = result

if (arg1[0xc].d != 0)
    return result

return sub_141033be0(arg1, arg2)
