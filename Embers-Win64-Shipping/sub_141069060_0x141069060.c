// 函数: sub_141069060
// 地址: 0x141069060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t var_18 = rax_1
int64_t var_48

if (arg2 == 0)
    if (*(arg1 + 0x68) != 0)
        int64_t* rcx_4 = *(arg1 + 0x70)
        rax_1 = (*(*rcx_4 + 0x140))(rcx_4, 0, 0, 0)
        
        if (rax_1.d s< 0)
            int64_t* var_50_2 = &var_48
            int64_t* var_58_2 = nullptr
            var_48 = 0
            int64_t var_40_2 = 0
            rax_1 = sub_14106a020(rax_1.d, 
                "SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_NONE, 0, nullptr)", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
            "cpp", 
                0x267, var_58_2)
        
        *(arg1 + 0x68) = 0
    
    __security_check_cookie(var_18 ^ &var_78)
    return rax_1

int64_t* rcx = *(arg1 + 0x70)
float zmm1 = *((sx.q(arg3) << 5) + 0x142f03f18) * 50000f
float zmm0 = *((sx.q(arg3) << 5) + 0x142f03f14)
int16_t var_38 = (int.d(*((sx.q(arg3) << 5) + &data_142f03f10) * 50000f)).w
int16_t var_36 = (int.d(zmm0 * 50000f)).w
int16_t var_34 = (int.d(zmm1)).w
int16_t var_32 = (int.d(*((sx.q(arg3) << 5) + 0x142f03f1c) * 50000f)).w
int16_t var_30 = (int.d(*((sx.q(arg3) << 5) + 0x142f03f20) * 50000f)).w
int16_t var_2e = (int.d(*((sx.q(arg3) << 5) + 0x142f03f24) * 50000f)).w
int16_t var_2c = (int.d(*((sx.q(arg3) << 5) + 0x142f03f28) * 50000f)).w
int16_t var_2a = (int.d(*((sx.q(arg3) << 5) + 0x142f03f2c) * 50000f)).w
int32_t var_28 = (int.q(arg4 * 10000f)).d
int32_t var_24 = (int.q(arg5 * 10000f)).d
int16_t var_20 = (int.d(fconvert.t(arg6))).w
int16_t var_1e = (int.d(fconvert.t(arg7))).w
int32_t rax_15 = (*(*rcx + 0x140))(rcx, 1, 0x1c, &var_38)

if (rax_15 s< 0)
    int64_t* var_50_1 = &var_48
    int64_t* var_58_1 = nullptr
    var_48 = 0
    int64_t var_40_1 = 0
    rax_15 = sub_14106a020(rax_15, 
        "SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_HDR10, sizeof(HDR10MetaData), &HDR10MetaData)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport.cpp", 
        0x25a, var_58_1)

*(arg1 + 0x68) = 1
__security_check_cookie(var_18 ^ &var_78)
return rax_15
