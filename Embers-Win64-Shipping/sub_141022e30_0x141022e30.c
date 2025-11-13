// 函数: sub_141022e30
// 地址: 0x141022e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rcx = *(arg1 + 0x198)
int64_t* var_38 = nullptr
int32_t rax_3 = (**rcx)(rcx, &data_142efa7c8, &var_38)
int64_t* var_58
int64_t* var_50
int64_t var_48

if (rax_3 s< 0)
    var_48 = 0
    var_50 = &var_48
    int64_t var_40_1 = 0
    var_58 = nullptr
    sub_14106a020(rax_3, "GetAdapter()->QueryInterface(IID_PPV_ARGS(Adapter3.GetInitReference()))", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x3b0, 
        var_58)

int64_t* rcx_2 = var_38
int32_t result = (*(*rcx_2 + 0x70))(rcx_2, 0, 0, arg2, var_58, var_50)

if (result s< 0)
    var_48 = 0
    var_50 = &var_48
    int64_t var_40_2 = 0
    var_58 = nullptr
    result = sub_14106a020(result, 
        "Adapter3->QueryVideoMemoryInfo(0, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, LocalVideoMemoryInfo)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 0x3b2, 
        var_58)

if (data_143f0f1d8 == 0)
    int32_t i = 1
    
    if (data_1439c7a34 u> 1)
        do
            int64_t* rcx_4 = var_38
            void var_30
            result = (*(*rcx_4 + 0x70))(rcx_4, zx.q(i), 0, &var_30, var_58, var_50)
            
            if (result s< 0)
                var_48 = 0
                var_50 = &var_48
                int64_t var_40_3 = 0
                var_58 = nullptr
                result = sub_14106a020(result, 
                    "Adapter3->QueryVideoMemoryInfo(Index, DXGI_MEMORY_SEGMENT_GROUP_LOCAL, "
                "&TempVideoMemoryInfo)", 
                    "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Adapter.cpp", 
                    0x3b9, var_58)
            
            int64_t var_28
            int64_t rcx_6 = var_28
            
            if (arg2[1] u<= rcx_6)
                rcx_6 = arg2[1]
            
            i += 1
            *arg2 = rcx_6
        while (i u< data_1439c7a34)

int64_t* rcx_7 = var_38

if (rcx_7 != 0)
    result = (*(*rcx_7 + 0x10))(rcx_7)

__security_check_cookie(rax_1 ^ &var_78)
return result
