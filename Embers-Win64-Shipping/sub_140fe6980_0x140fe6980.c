// 函数: sub_140fe6980
// 地址: 0x140fe6980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
int32_t result

if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
label_140fe69d0:
    int64_t* arg_8 = nullptr
    void* rbx_1 = data_143f0f180
    int64_t* rcx_1 = *(rbx_1 + 0x168)
    result = (**rcx_1)(rcx_1, &data_142ef42b0, &arg_8)
    
    if (result s< 0)
        int64_t var_18_1 = *(rbx_1 + 0x168)
        result = sub_140fff020(result, 
            "D3DRHI->GetDevice()->QueryInterface(__uuidof(ID3D11Debug), (void**)DebugDevice."
        "GetInitReference())", 
            "D:"
        "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Device."
        "cpp", 0x94)
    
    int64_t* rcx_4 = arg_8
    
    if (rcx_4 != 0)
        result = (*(*rcx_4 + 0x50))(rcx_4, 3)
        int64_t* rcx_5 = arg_8
        
        if (rcx_5 != 0)
            return (*(*rcx_5 + 0x10))(rcx_5)
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
        goto label_140fe69d0
    
    sub_140af2b60()
    result = sub_140b21a10(&data_143dbb3f0, u"dxdebug")
    
    if (result.b != 0)
        goto label_140fe69d0

return result
