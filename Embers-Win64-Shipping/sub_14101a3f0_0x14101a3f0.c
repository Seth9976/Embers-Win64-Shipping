// 函数: sub_14101a3f0
// 地址: 0x14101a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_2
rax_2.b = *(arg1 + 0x54) != 0
bool cond:1 = data_143f0f1d8 == 0
int32_t var_80 = rax_2
int32_t rax_3 = arg1[0xb].d

if (cond:1)
    int32_t var_78_1 = arg1[1].d
else
    int32_t var_78 = 1

int64_t* rcx_1 = *(*(*arg1 + 0x20) + 0x18)
int32_t rax_7 = (*(*rcx_1 + 0x138))(rcx_1, &var_80, &data_142eff778, &arg1[0xc])
int64_t var_d8
int64_t var_d0

if (rax_7 s< 0)
    var_d8 = 0
    int64_t* var_100_1 = &var_d8
    var_d0 = 0
    sub_14106a020(rax_7, 
        "GetParentDevice()->GetDevice()->CreateQueryHeap(&QueryHeapDesc, IID_PPV_ARGS(&QueryHeap))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Query.cpp", 0x1be, nullptr)

arg1[0xc]

if (data_1439b4ad4 != 0)
    arg1[0xe] = arg1[0xc]
    arg1[0xf] = zx.q(rax_3 << 3)
    
    if (data_1439b4ad4 != 0)
        sub_1410146b0(*arg1 + 0x910, &arg1[0xd])

void* r10 = *(*arg1 + 0x20)
int32_t rax_11
int32_t rcx_7

if (data_143f0f1d8 == 0)
    rcx_7 = *(arg1 + 0xc)
    rax_11 = arg1[1].d
else
    rcx_7 = 1
    rax_11 = 1

int32_t r8 = arg1[1].d
var_d0:4.d = rax_11
int32_t var_60 = rcx_7
char var_e8 = 1
int64_t var_9c = 0x10001
int64_t var_8c = 1
var_d8 = 3
wchar16 const* const var_f0 = u"Query Heap Result Buffer"
var_d0.d = 0
int32_t var_b8 = 1
int64_t var_b0 = 0
int128_t var_70 = var_d8.o
int32_t var_a0 = 1
int64_t var_94 = 1
int128_t* var_100_2 = nullptr
int128_t var_58 = var_b8.o
int32_t var_c0 = 0x400
uint128_t var_48 = zx.o(rax_3 << 3)
uint64_t var_28 = var_8c
int128_t var_38 = var_9c:4.o
int32_t result =
    sub_141048420(r10, &var_58, r8, &var_70, &var_c0, var_100_2, &arg1[0x18], var_f0, var_e8)

if (result s< 0)
    var_d8 = 0
    int64_t* var_100_3 = &var_d8
    int64_t var_d0_1 = 0
    result = sub_14106a020(result, 
        "Adapter->CreateCommittedResource( ResultBufferDesc, GetGPUMask(), ResultBufferHeapProperties, "
    "D3D12_RESOURCE_STATE_COPY_DEST, nullptr, &ResultBuffer, TEXT("Query Heap Result Buffer"))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Query.cpp", 0x1d3, nullptr)

__security_check_cookie(rax_1 ^ &var_128)
return result
