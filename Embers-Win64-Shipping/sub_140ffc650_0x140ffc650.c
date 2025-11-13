// 函数: sub_140ffc650
// 地址: 0x140ffc650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
sub_140ff8b80(*(arg1 + 0x18) + 0x18, 0, nullptr, nullptr)
sub_140fddf90(*(arg1 + 0x18))
int64_t* rcx_3 = *(*(arg1 + 0x18) + 0x150)
int64_t* r8 = (*(*rcx_3 + 0x378))(rcx_3)
int64_t* rcx_4 = *(arg1 + 0xb0)

if (rcx_4 != 0)
    rcx_4, r8 = (*(*rcx_4 + 8))(rcx_4)

void* rdx = *(arg1 + 0x78)

if (rdx != 0)
    int64_t* rdi_1 = *(rdx + 0xa0)
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 8))(rdi_1, rdx)
        rcx_4, r8 = (*(*rdi_1 + 0x10))(rdi_1)
        rdx = *(arg1 + 0x78)
    
    int32_t rcx_7 = sbb.d(rcx_4.d, rcx_4.d, *(rdx + 0xc0) != 0)
    int64_t* rdi_2
    
    if (rcx_7 u>= *(rdx + 0xb8))
        rdi_2 = nullptr
    else
        rdi_2 = *(*(rdx + 0xb0) + (sx.q(rcx_7) << 3))
    
    if (rdi_2 != 0)
        (*(*rdi_2 + 8))(rdi_2)
        r8 = (*(*rdi_2 + 0x10))(rdi_2)
        rdx = *(arg1 + 0x78)
    
    int64_t* rdi_3 = *(rdx + 0xa8)
    
    if (rdi_3 != 0)
        (*(*rdi_3 + 8))(rdi_3)
        rdx, r8 = (*(*rdi_3 + 0x10))(rdi_3)

void* rcx_13 = *(arg1 + 0x78)
*(arg1 + 0x78) = 0

if (rcx_13 != 0)
    rdx, r8 = (*(*(rcx_13 + 0x68) + 0x10))(rcx_13 + 0x68)

char var_a8
int64_t var_a0

if (*(arg1 + 0x4c) != arg2 || *(arg1 + 0x50) != arg3 || *(arg1 + 0x60) != arg5)
    *(arg1 + 0x4c) = arg2
    *(arg1 + 0x50) = arg3
    *(arg1 + 0x60) = arg5
    
    if (*(arg1 + 0x89) != 0)
        int64_t* rcx_15 = *(arg1 + 0x70)
        int32_t rdi_4 = data_1439b4aa4
        void var_78
        int32_t var_38
        
        if ((*(*rcx_15 + 0x60))(rcx_15, &var_78) s>= 0 && test_bit(var_38 ^ rdi_4, 0xb))
            rdi_4 ^= 0x800
        
        int32_t rax_19 = sub_140fe89c0(*(arg1 + 0x60))
        int64_t* rcx_17 = *(arg1 + 0x70)
        int32_t rax_20
        rax_20, rdx, r8 = (*(*rcx_17 + 0x68))(rcx_17, 0, zx.q(*(arg1 + 0x4c)), 
            zx.q(*(arg1 + 0x50)), rax_19, rdi_4)
        
        if (rax_20 s< 0)
            var_a0 = *(*(arg1 + 0x18) + 0x168)
            var_a8 = rax_19.b
            rdx, r8 = sub_140ffee30(rax_20, 
                "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, SwapChainFlags)", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
                0x122, *(arg1 + 0x4c), (*(arg1 + 0x50)).b, var_a8)
        
        if (arg4 != 0)
            int32_t rcx_22 = *(arg1 + 0x60)
            int32_t var_98 = *(arg1 + 0x4c)
            int32_t var_94_1 = *(arg1 + 0x50)
            int64_t var_90_1 = 0
            int32_t rax_23 = sub_140fe89c0(rcx_22)
            int64_t* rcx_23 = *(arg1 + 0x70)
            int32_t var_88_1 = rax_23
            int64_t var_84_1 = 0
            int32_t rax_25
            rax_25, rdx, r8 = (*(*rcx_23 + 0x70))(rcx_23, &var_98)
            
            if (rax_25 s< 0)
                rdx.b = 1
                sub_140ffc530(arg1, rdx.b, r8)
                int64_t* rcx_25 = *(arg1 + 0x70)
                int32_t rax_27
                rax_27, rdx, r8 = (*(*rcx_25 + 0x68))(rcx_25, 0, zx.q(*(arg1 + 0x4c)), 
                    zx.q(*(arg1 + 0x50)), rax_19, rdi_4, var_a8, var_a0)
                
                if (rax_27 s< 0)
                    var_a0 = *(*(arg1 + 0x18) + 0x168)
                    var_a8 = rax_19.b
                    rdx, r8 = sub_140ffee30(rax_27, 
                        "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, SwapChainFlags)", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport."
                    "cpp", 0x12b, *(arg1 + 0x4c), (*(arg1 + 0x50)).b, var_a8)

if (*(arg1 + 0x68) != arg4)
    *(arg1 + 0x68) = arg4
    *(arg1 + 0x5c)
    *(arg1 + 0x5c) = 1
    
    if (*(arg1 + 0x89) != 0)
        rdx.b = 1
        sub_140ffc530(arg1, rdx.b, r8)
        int32_t rax_29 = sub_140fe89c0(*(arg1 + 0x60))
        int64_t* rcx_32 = *(arg1 + 0x70)
        int32_t rax_30 = (*(*rcx_32 + 0x68))(rcx_32, 0, zx.q(*(arg1 + 0x4c)), zx.q(*(arg1 + 0x50)), 
            rax_29, data_1439b4aa4, var_a8, var_a0)
        
        if (rax_30 s< 0)
            int64_t var_a0_1 = *(*(arg1 + 0x18) + 0x168)
            sub_140ffee30(rax_30, 
                "SwapChain->ResizeBuffers(0, SizeX, SizeY, RenderTargetFormat, D3D11GetSwapChainFlags())", 
                "D:/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/D3D11Viewport.cpp", 
                0x13c, *(arg1 + 0x4c), (*(arg1 + 0x50)).b, rax_29.b)

if (*(arg1 + 0x60) != data_1439c7a4c || *(arg1 + 0x68) == 0)
    int64_t* rcx_38 = *(arg1 + 0x18)
    (*(*rcx_38 + 0x720))(rcx_38)
else
    int64_t* rcx_37 = *(arg1 + 0x18)
    (*(*rcx_37 + 0x718))(rcx_37)

uint64_t r9_3 = zx.q(*(arg1 + 0x50))
int32_t r8_5 = *(arg1 + 0x4c)
int32_t rdx_6 = *(arg1 + 0x60)
void* rcx_39 = *(arg1 + 0x18)
int32_t var_b8
var_b8.q = *(arg1 + 0x70)
*(arg1 + 0x64) = 0x21
void*** result = sub_140fe8d70(rcx_39, rdx_6, r8_5, r9_3)
void* rdi_6 = *(arg1 + 0x78)
*(arg1 + 0x78) = result

if (result != 0)
    result = result[0xd][1](&result[0xd])

if (rdi_6 != 0)
    result = (*(*(rdi_6 + 0x68) + 0x10))(rdi_6 + 0x68)

__security_check_cookie(rax_1 ^ &var_d8)
return result
