// 函数: sub_141068990
// 地址: 0x141068990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x18)
sub_14105e8b0(arg1, 3)
int32_t rsi = 0x802

if (*(arg1 + 0x5d) == 0)
    rsi = 2

int32_t var_88
int32_t var_78
int64_t var_48
int32_t arg_8

if (data_1439c7a34 u<= 1)
    int64_t* r11_2 = *(arg1 + 0x60)
    
    if (r11_2 != 0)
        int64_t r10_2 = *r11_2
        int32_t rax_23 = sub_140fe89c0(*(arg1 + 0x58))
        int32_t rax_24 = (*(r10_2 + 0x68))(r11_2, zx.q(*(arg1 + 0xa0)), zx.q(*(arg1 + 0x4c)), 
            zx.q(*(arg1 + 0x50)), rax_23, rsi)
        
        if (rax_24 s< 0)
            int32_t r9_4 = *(arg1 + 0x58)
            int32_t var_70_1 = rsi
            var_78 = sub_140fe89c0(r9_4)
            int32_t var_80_4 = r9_4
            *(arg1 + 0x4c)
            var_88 = *(arg1 + 0x50)
            sub_140a2e390(&var_48, Num=%d, Size=(%d,%d), PF=%d, DXGIFormat=0x%x, Flags=0x%x", 
                zx.q(*(arg1 + 0xa0)))
            var_80_4.q = &var_48
            var_88.q = *(r14 + 0x18)
            sub_14106a020(rax_24, 
                "SwapChain1->ResizeBuffers(NumBackBuffers, SizeX, SizeY, "
            "GetRenderTargetFormat(PixelFormat), SwapChainFlags)", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
            "cpp", 0x174, var_88)
    
    void* r12_1 = *(r14 + 0x9d8)
    int32_t i = 0
    
    if (*(arg1 + 0xa0) u> 0)
        do
            int64_t rdi_7 = *(arg1 + 0x80)
            var_78.q = &arg_8
            var_88.q = *(arg1 + 0x60)
            arg_8.q = 0
            void*** rax_28 = sub_141062720(r12_1, *(arg1 + 0x58), *(arg1 + 0x4c), *(arg1 + 0x50), 
                var_88, i, var_78)
            int64_t i_3 = sx.q(i)
            void* r15_2 = *(rdi_7 + (i_3 << 3))
            *(rdi_7 + (i_3 << 3)) = rax_28
            
            if (rax_28 != 0)
                rax_28[0xd][1](&rax_28[0xd])
            
            if (r15_2 != 0)
                (*(*(r15_2 + 0x68) + 0x10))(r15_2 + 0x68)
            
            i += 1
        while (i u< *(arg1 + 0xa0))
else
    int32_t rdx_1 = *(arg1 + 0xa0)
    int64_t rdi_1 = 0
    int64_t var_58 = 0
    int32_t r13_1 = 0
    arg_8 = 0
    int32_t var_4c_1 = 0
    int64_t var_68 = 0
    int32_t var_5c_1 = 0
    *(arg1 + 0x98) = 0
    
    if (*(arg1 + 0x9c) != rdx_1)
        sub_1405dadb0(arg1 + 0x90, rdx_1)
    
    int32_t rax_5 = *(arg1 + 0xa0)
    int32_t r15_1 = 0
    
    if (rax_5 != 0)
        do
            uint32_t rsi_1 = *(arg1 + 0xa4)
            
            if (rsi_1 s< 0)
                rsi_1 = modu.dp.d(0:r15_1, data_1439c7a34)
            
            int64_t rdi_2 = sx.q(*(arg1 + 0x98))
            int32_t rax_3 = (rdi_2 + 1).d
            *(arg1 + 0x98) = rax_3
            
            if (rax_3 s> *(arg1 + 0x9c))
                sub_1405a4cf0(arg1 + 0x90)
            
            r15_1 += 1
            *(*(arg1 + 0x90) + (rdi_2 << 2)) = rsi_1
            rax_5 = *(arg1 + 0xa0)
        while (r15_1 u< rax_5)
        
        rdi_1 = var_68
    
    int32_t i_1 = 0
    
    if (rax_5 != 0)
        int32_t r14_1 = arg_8
        
        do
            void* rsi_2 = *(r14 + (zx.q(*(*(arg1 + 0x90) + (sx.q(i_1) << 2))) << 3) + 0x9d8)
            int64_t rdi_3 = sx.q(r14_1)
            r14_1 = (rdi_3 + 1).d
            arg_8.q = *(sub_141022a70(rsi_2, 0) + 0x28)
            
            if (r14_1 s> var_4c_1)
                sub_1405a4d70(&var_58)
            
            *(var_58 + (rdi_3 << 3)) = arg_8.q
            int32_t rsi_3
            
            if (data_143f0f1d8 == 0)
                rsi_3 = *(rsi_2 + 0x10)
            else
                rsi_3 = 1
            
            int64_t rdi_4 = sx.q(r13_1)
            r13_1 = (rdi_4 + 1).d
            
            if (r13_1 s> var_5c_1)
                sub_1405a4cf0(&var_68)
            
            i_1 += 1
            rdi_1 = var_68
            *(rdi_1 + (rdi_4 << 2)) = rsi_3
        while (i_1 u< *(arg1 + 0xa0))
    
    int64_t* rcx_8 = *(arg1 + 0x60)
    
    if (rcx_8 != 0)
        arg_8.q = 0
        int32_t rax_12 = (**rcx_8)(rcx_8, &data_142f03cd8, &arg_8)
        
        if (rax_12 s< 0)
            var_48 = 0
            int32_t var_80
            var_80.q = &var_48
            int64_t var_40_1 = 0
            sub_14106a020(rax_12, 
                "SwapChain1->QueryInterface(IID_PPV_ARGS(SwapChain3.GetInitReference()))", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
            "cpp", 
                0x15d, nullptr)
        
        int64_t* r10_1 = arg_8.q
        int64_t r11_1 = *r10_1
        int32_t rax_13 = sub_140fe89c0(*(arg1 + 0x58))
        int32_t var_70
        var_70.q = var_58
        var_78.q = rdi_1
        int32_t rax_14 = (*(r11_1 + 0x138))(r10_1, zx.q(*(arg1 + 0xa0)), zx.q(*(arg1 + 0x4c)), 
            zx.q(*(arg1 + 0x50)), rax_13, rsi, var_78, var_70)
        
        if (rax_14 s< 0)
            var_48 = 0
            int32_t var_80_1
            var_80_1.q = &var_48
            int64_t var_40_2 = 0
            var_88.q = *(r14 + 0x18)
            sub_14106a020(rax_14, 
                "SwapChain3->ResizeBuffers1(NumBackBuffers, SizeX, SizeY, "
            "GetRenderTargetFormat(PixelFormat), SwapChainFlags, NodeMasks.GetData(), "
            "(IUnknown**)CommandQueues.GetData())", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
            "cpp", 0x15e, var_88)
        
        int64_t* rcx_17 = arg_8.q
        
        if (rcx_17 != 0)
            (*(*rcx_17 + 0x10))(rcx_17)
    
    int32_t i_2 = 0
    
    if (*(arg1 + 0xa0) u> 0)
        do
            int64_t rdi_5 = *(arg1 + 0x80)
            var_78.q = &arg_8
            int64_t i_4 = sx.q(i_2)
            arg_8.q = 0
            var_88.q = *(arg1 + 0x60)
            void*** rax_19 = sub_141062720(
                *(r14 + (zx.q(*(*(arg1 + 0x90) + (i_4 << 2))) << 3) + 0x9d8), *(arg1 + 0x58), 
                *(arg1 + 0x4c), *(arg1 + 0x50), var_88, i_2, var_78)
            void* r13_2 = *(rdi_5 + (i_4 << 3))
            *(rdi_5 + (i_4 << 3)) = rax_19
            
            if (rax_19 != 0)
                rax_19[0xd][1](&rax_19[0xd])
            
            if (r13_2 != 0)
                (*(*(r13_2 + 0x68) + 0x10))(r13_2 + 0x68)
            
            i_2 += 1
        while (i_2 u< *(arg1 + 0xa0))
        
        rdi_1 = var_68
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    int64_t rax_22 = var_58
    
    if (rax_22 != 0)
        sub_140a74f90(rax_22)
int64_t* rcx_33 = *(arg1 + 0x80)
*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = *rcx_33
*(arg1 + 0xb8) = 0
int64_t* rcx_34 = *(arg1 + 0xc8)
*(arg1 + 0xc0) = *rcx_33
*(arg1 + 0xd8) = *rcx_34
int64_t result = *rcx_34
*(arg1 + 0xe0) = result
return result
