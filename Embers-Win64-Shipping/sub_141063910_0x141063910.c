// 函数: sub_141063910
// 地址: 0x141063910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* r14 = *(arg1 + 0x18)
*(arg1 + 0x5d) = 0
int64_t* rdi = *(r14 + 0x4e0)
int64_t* var_c8
int32_t var_c0

if (data_1439b4b1c != 0 && rdi != 0)
    int64_t rax_2 = *rdi
    var_c8 = nullptr
    (*rax_2)(rdi, &data_142ef6c70, &var_c8)
    int64_t* rcx_1 = var_c8
    
    if (rcx_1 != 0)
        if ((*(*rcx_1 + 0xe0))(rcx_1, 0, &var_c0, 4) s>= 0 && var_c0 != 0)
            *(arg1 + 0x5d) = 1
        
        int64_t* rcx_2 = var_c8
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x10))(rcx_2)

sub_141019f60(arg1 + 0xf0)
sub_14105e8b0(arg1, 3)
int32_t r15 = *(arg1 + 0x50)
int32_t r12 = 0x802
int32_t r13 = *(arg1 + 0x4c)
int32_t rcx_5 = *(arg1 + 0x58)

if (*(arg1 + 0x5d) == 0)
    r12 = 2

var_c0 = r15
int32_t var_a4 = r15
int64_t var_a0 = 0
int32_t rax_6 = sub_140fe89c0(rcx_5)
int32_t var_94 = 0
sub_140af2b60()
char rax_7 = sub_140b21a10(&data_143dbb3f0, u"RenderOffScreen")
data_1439b4b18 = rax_7 == 0

if (rax_7 == 0)
    int32_t var_e8
    int64_t* var_e0
    void* var_d8
    int64_t var_b8
    int128_t var_88
    
    if (data_143e2c99c != 0)
        int64_t rax_8 = *rdi
        var_c8 = nullptr
        (*rax_8)(rdi, &data_142efa1e8, &var_c8)
        int64_t* rcx_7 = var_c8
        
        if ((*(*rcx_7 + 0x70))(rcx_7) == 0)
            data_143e2c99c = 0
        else
            int32_t var_64
            var_64.q = 4
            var_88:0xc.d = 1
            int64_t var_78_1 = 1
            var_88:8.d = sub_140fe89c0(*(arg1 + 0x58))
            int64_t var_6c
            var_6c.d = *(arg1 + 0xa0)
            var_88.d = *(arg1 + 0x4c)
            var_88:4.d = *(arg1 + 0x50)
            int32_t var_70_1 = 0x30
            var_6c:4.d = 1
            int32_t var_5c_1 = r12
            void* rax_15 = sub_141022a70(*(r14 + 0x9d8), 0)
            int64_t* rcx_10 = *(arg1 + 0x60)
            int64_t* rsi_1 = var_c8
            int64_t r15_1 = *(rax_15 + 0x28)
            *(arg1 + 0x60) = 0
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x10))(rcx_10)
            
            var_d8 = arg1 + 0x60
            var_e0 = nullptr
            var_e8.q = 0
            int32_t rax_18 =
                (*(*rsi_1 + 0x78))(rsi_1, r15_1, *(arg1 + 0x40), &var_88, var_e8, var_e0, var_d8)
            
            if (rax_18 s< 0)
                var_e0 = &var_b8
                var_e8.q = 0
                var_b8 = 0
                int64_t var_b0_1 = 0
                sub_14106a020(rax_18, 
                    "(Factory2->CreateSwapChainForHwnd(pCommandQueue, WindowHandle, &SwapChainDesc1, "
                "nullptr, nullptr, SwapChain1.GetInitReference()))", 
                    "D:"
                "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
                "cpp", 0xad, var_e8)
            
            int64_t* rcx_13 = *(arg1 + 0x70)
            int64_t* rsi_2 = *(arg1 + 0x60)
            *(arg1 + 0x70) = 0
            
            if (rcx_13 != 0)
                (*(*rcx_13 + 0x10))(rcx_13)
            
            int32_t rax_21 = (**rsi_2)(rsi_2, "Z]X=J", arg1 + 0x70)
            
            if (rax_21 s< 0)
                var_b8 = 0
                var_e0 = &var_b8
                int64_t var_b0_2 = 0
                var_e8.q = 0
                sub_14106a020(rax_21, 
                    "SwapChain1->QueryInterface(IID_PPV_ARGS(SwapChain4.GetInitReference()))", 
                    "D:"
                "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
                "cpp", 
                    0xae, var_e8)
            
            int64_t* rcx_16 = *(r14 + 0x4e0)
            (*(*rcx_16 + 0x40))(rcx_16, *(arg1 + 0x40), 1)
            var_e8 = *(arg1 + 0x58)
            sub_1410682f0(arg1, var_88.d, var_88:4.d, *(arg1 + 0x54), var_e8)
            r15 = var_c0
        
        int64_t* rcx_18 = var_c8
        
        if (rcx_18 != 0)
            (*(*rcx_18 + 0x10))(rcx_18)
    
    if (*(arg1 + 0x60) == 0)
        void* rcx_19 = *(r14 + 0x9d8)
        int32_t var_60_1 = *(arg1 + 0xa0)
        int64_t var_58_1 = *(arg1 + 0x40)
        int32_t rax_27
        rax_27.b = *(arg1 + 0x54) == 0
        int32_t var_5c_2 = 0
        int32_t var_50_1 = rax_27
        int32_t var_44_1 = 0
        var_88 = r13.o
        int64_t var_78_2 = rax_6.q
        int32_t var_70_2 = 0
        int64_t var_6c_1 = 1
        int32_t var_64_1 = 0x30
        int32_t var_4c_1 = 4
        int32_t var_48_1 = r12
        void* rax_28 = sub_141022a70(rcx_19, 0)
        int64_t* rcx_20 = *(r14 + 0x4e0)
        int64_t rdx_4 = *(rax_28 + 0x28)
        var_c8 = nullptr
        int32_t rax_30 =
            (*(*rcx_20 + 0x50))(rcx_20, rdx_4, &var_88, &var_c8, var_e8, var_e0, var_d8)
        
        if (rax_30 s< 0)
            var_b8 = 0
            int64_t* var_e0_1 = &var_b8
            int64_t var_b0_3 = 0
            var_e8.q = 0
            sub_14106a020(rax_30, "hr", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
            "cpp", 
                0xde, var_e8)
        
        int64_t* rcx_22 = *(arg1 + 0x60)
        int64_t* rsi_3 = var_c8
        *(arg1 + 0x60) = 0
        
        if (rcx_22 != 0)
            (*(*rcx_22 + 0x10))(rcx_22)
        
        int32_t rax_33 = (**rsi_3)(rsi_3, &data_142efaaf8, arg1 + 0x60)
        
        if (rax_33 s< 0)
            var_b8 = 0
            int64_t* var_e0_2 = &var_b8
            int64_t var_b0_4 = 0
            var_e8.q = 0
            sub_14106a020(rax_33, 
                "SwapChain->QueryInterface(IID_PPV_ARGS(SwapChain1.GetInitReference()))", 
                "D:"
            "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
            "cpp", 
                0xe1, var_e8)
        
        int64_t* rcx_25 = *(arg1 + 0x70)
        int64_t* rsi_4 = var_c8
        *(arg1 + 0x70) = 0
        
        if (rcx_25 != 0)
            (*(*rcx_25 + 0x10))(rcx_25)
        
        (**rsi_4)(rsi_4, "Z]X=J", arg1 + 0x70)
        int64_t* rcx_27 = var_c8
        
        if (rcx_27 != 0)
            (*(*rcx_27 + 0x10))(rcx_27)

int64_t* rcx_28 = *(r14 + 0x4e0)
(*(*rcx_28 + 0x40))(rcx_28, *(arg1 + 0x40), 1)
sub_1410682f0(arg1, r13, r15, *(arg1 + 0x54), *(arg1 + 0x58))
int64_t result = PostMessageW(*(arg1 + 0x40), 0xf, 0, 0)
__security_check_cookie(rax_1 ^ &var_108)
return result
