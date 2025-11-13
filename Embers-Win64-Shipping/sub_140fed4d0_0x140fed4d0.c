// 函数: sub_140fed4d0
// 地址: 0x140fed4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
bool z

if (0 == *(arg1 + 0x5c))
    *(arg1 + 0x5c) = 0
    z = true
else
    *(arg1 + 0x5c)
    z = false

if (not(z))
    int64_t* rcx = *(arg1 + 0x70)
    
    if (rcx != 0)
        int64_t* var_20 = nullptr
        int32_t arg_18
        int32_t rax_3 = (*(*rcx + 0x58))(rcx, &arg_18, &var_20)
        
        if (rax_3 s< 0)
            int64_t var_38_1 = *(*(arg1 + 0x18) + 0x168)
            sub_140fff020(rax_3, 
                "SwapChain->GetFullscreenState(&bSwapChainFullscreenState,SwapChainOutput."
            "GetInitReference())", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
                0x249)
        
        int32_t rcx_3
        rcx_3.b = arg_18 != 0
        
        if (rcx_3 != zx.d(*(arg1 + 0x68)))
            *(arg1 + 0x5c)
            *(arg1 + 0x5c) = 1
        
        int64_t* rcx_4 = var_20
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x10))(rcx_4)

int32_t rax_8 = data_1439b49d4

if (*(arg1 + 0x48) != rax_8)
    *(arg1 + 0x48) = rax_8
    void* rax_9 = *(arg1 + 0x18)
    int64_t* var_28 = nullptr
    int64_t* rcx_5 = *(rax_9 + 0x168)
    int32_t rax_11 = (**rcx_5)(rcx_5, &data_1435fc2a0, &var_28)
    
    if (rax_11 s< 0)
        int64_t var_38_2 = *(*(arg1 + 0x18) + 0x168)
        sub_140fff020(rax_11, 
            "D3DRHI->GetDevice()->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
            0x255)
    
    int64_t* rcx_8 = var_28
    (*(*rcx_8 + 0x60))(rcx_8, zx.q(*(arg1 + 0x48)))
    int64_t* rcx_9 = var_28
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x10))(rcx_9)

char rax_15 = 0

if (0 == *(arg1 + 0x5c))
    *(arg1 + 0x5c) = 0
else
    rax_15 = (*(arg1 + 0x5c)).b

if ((rax_15 & 1) != 0)
    return 0

if (arg2 != 0)
    if (*(arg1 + 0x68) == 0 && data_143e2b8f0 != 0)
        BOOL pfEnabled = 0
        DwmIsCompositionEnabled(&pfEnabled)
        
        if (pfEnabled != 0)
            sub_140fed7c0(arg1)
            return 1
    
    rdi = sub_14197f080()

return sub_140fed670(arg1, rdi) __tailcall
