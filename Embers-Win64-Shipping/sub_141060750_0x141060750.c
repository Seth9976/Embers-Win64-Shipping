// 函数: sub_141060750
// 地址: 0x141060750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

switch (arg3)
    case 0, 1
        if (arg2 == 2)
            rbx = 0x11
    case 3, 4
        rbx = 0xc
    case 5, 6
        rbx = 1

if (*(arg1 + 0x6c) == rbx)
    return 

int64_t* rcx = *(arg1 + 0x70)
int32_t arg_10 = 0

if ((*(*rcx + 0x128))(rcx, zx.q(rbx), &arg_10).d s< 0 || (arg_10.b & 1) == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x70)
int64_t rax = (*(*rcx_1 + 0x130))(rcx_1, zx.q(rbx))

if (rax.d s< 0)
    int64_t var_18 = 0
    int64_t* var_20_1 = &var_18
    int64_t var_10_1 = 0
    sub_14106a020(rax.d, "SwapChain4->SetColorSpace1(NewColorSpace)", 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport.cpp", 
        0x233, nullptr)

*(arg1 + 0x6c) = rbx
