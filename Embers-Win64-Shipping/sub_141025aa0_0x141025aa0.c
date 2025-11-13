// 函数: sub_141025aa0
// 地址: 0x141025aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* r14 = *(*arg1 + 0x20)
int32_t result
int32_t var_88

if (*(arg1 + 0x7c) != 0)
    int64_t* rcx_8 = arg1[0x11]
    arg1[0x11] = 0
    
    if (rcx_8 != 0)
        rcx_8[1].d -= 1
        
        if (rcx_8[1].d == 1)
            (**rcx_8)(rcx_8, 1)
    
    int32_t var_90_1 = *(arg1 + 0x14)
    int32_t rax_17 = sub_141048240(r14, *(arg1 + 0x2c), arg1[1].d, zx.q(*(arg1 + 0xc)), 
        zx.q(arg1[0xe].d), &arg1[0x11], 0x42efe6f0)
    
    if (rax_17 s< 0)
        var_88.q = 0
        int32_t* var_a0_3 = &var_88
        int64_t var_84 = 0
        sub_14106a020(rax_17, 
            "Adapter->CreateBuffer(HeapType, GetGPUMask(), GetVisibilityMask(), MaxBlockSize, "
        "BackingResource.GetInitReference(), TEXT("Resource Allocator Underlying Buffer"), "
        "ResourceFlags)", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 0xaa, 
            nullptr)
    
    result = *(arg1 + 0x2c)
    
    if (result == 2)
        result = sub_141027200(arg1[0x11], 0)
    else if (result == 4)
        result = *4 - 2
        
        if (result u<= 1)
            result = sub_141027200(arg1[0x11], 0)
else
    bool cond:0_1 = data_143f0f1d8 == 0
    var_88 = *(arg1 + 0x2c)
    int64_t var_84_1 = 0
    int32_t var_7c_1 = 1
    int32_t var_78_1 = 1
    var_88.o = var_88.o
    int32_t rcx
    void* rsi
    
    if (cond:0_1)
        rsi = arg1 + 0xc
        rcx = *(arg1 + 0xc)
        int32_t var_7c_3 = arg1[1].d
    else
        int32_t var_7c_2 = 1
        rcx = 1
        rsi = arg1 + 0xc
    
    int128_t zmm0 = var_88.o
    int32_t var_38_1 = rcx
    int64_t* rcx_1 = *(r14 + 0x18)
    uint64_t var_50 = zx.q(arg1[0xe].d)
    int32_t var_34_1 = 0
    int32_t var_24_1 = 0
    int128_t var_48_1 = zmm0
    int64_t var_30_1 = 0
    int32_t var_28_1 = arg1[0xf].d
    int64_t var_68 = 0
    int32_t rax_8 = (*(*rcx_1 + 0xe0))(rcx_1, &var_50, &data_142efe600, &var_68)
    
    if (rax_8 s< 0)
        int64_t var_60 = 0
        int64_t* var_a0_1 = &var_60
        int64_t var_58_1 = 0
        sub_14106a020(rax_8, "Adapter->GetD3DDevice()->CreateHeap(&Desc, IID_PPV_ARGS(&Heap))", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Allocation.cpp", 0x99, 
            nullptr)
    
    void*** rax_9 = j_sub_140a82f30(0x80)
    void*** rax_10
    
    if (rax_9 == 0)
        rax_10 = nullptr
    else
        rax_10 = sub_14103eed0(rax_9, *arg1, *rsi)
    
    int64_t* rcx_5 = arg1[0x12]
    arg1[0x12] = rax_10
    
    if (rax_10 != 0)
        rax_10[1].d += 1
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            (**rcx_5)(rcx_5, 1)
    
    void* rsi_1 = arg1[0x12]
    int64_t r14_1 = var_68
    int64_t* rcx_6 = *(rsi_1 + 0x20)
    *(rsi_1 + 0x20) = 0
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x10))(rcx_6)
    
    *(rsi_1 + 0x20) = r14_1
    result = *(arg1 + 0x2c)
    
    if (result == 1)
        result = sub_1410447b0(arg1[0x12], var_50)
    else if (result == 4 && *4 == 1)
        result = sub_1410447b0(arg1[0x12], var_50)
__security_check_cookie(rax_1 ^ &var_c8)
return result
