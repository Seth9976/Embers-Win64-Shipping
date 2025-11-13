// 函数: sub_140fd98b0
// 地址: 0x140fd98b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef5ad8
arg1[0xa].d = arg5
arg1[3] = arg2
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
__builtin_memset(&arg1[4], 0, 0x1d)
arg1[8] = arg3
arg1[9].d = 3
*(arg1 + 0x4c) = arg4
arg1[0xb].d = 0
*(arg1 + 0x5c) = 0
arg1[0xc].d = arg7
arg1[0xd].b = arg6
*(arg1 + 0x64) = 0x21
__builtin_memset(&arg1[0xe], 0, 0x18)
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 4
arg1[0x12] = &data_142ef5a98
arg1[0x14] = arg2
arg1[0x15] = 0
arg1[0x16] = 0
void* r14 = arg1[3]
int64_t r15 = sx.q(*(r14 + 0x2688))
int32_t rax_5 = (r15 + 1).d
*(r14 + 0x2688) = rax_5

if (rax_5 s> *(r14 + 0x268c))
    sub_1405a4d70(r14 + 0x2680)

*(*(r14 + 0x2680) + (r15 << 3)) = arg1
int64_t* rcx_1 = arg1[3]
(*(*rcx_1 + 0x710))(rcx_1)
void* rax_8 = arg1[3]
int64_t* var_128 = nullptr
int64_t* rcx_2 = *(rax_8 + 0x168)
int32_t rax_10 = (**rcx_2)(rcx_2, &data_1435fc2a0, &var_128)
int64_t* var_158

if (rax_10 s< 0)
    var_158 = arg1[3][0x2d]
    sub_140fff020(rax_10, 
        "D3DRHI->GetDevice()->QueryInterface(IID_IDXGIDevice, (void**)DXGIDevice.GetInitReference())", 
        "D:"
    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Viewport."
    "cpp", 0x43)

if (data_143e2c1ac == 0)
    bool cond:0_1 = data_1439b49bc == 0
    int64_t* rcx_5 = nullptr
    int64_t* r9 = arg1[3][0x28]
    int64_t* var_130 = nullptr
    
    if (not(cond:0_1))
        if ((**r9)(r9, &data_142ef6c70, &var_130) == 0)
            int64_t* rcx_7 = var_130
            int32_t var_138 = 0
            
            if ((*(*rcx_7 + 0xe0))(rcx_7, 0, &var_138, 4, var_158) == 0 && var_138 != 0)
                data_1439b4aa4 |= 0x800
                data_143e2c1b0 = 4
                data_1439b4aa8 = 2
        
        rcx_5 = var_130
    
    data_143e2c1ac = 1
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)

uint32_t var_134 = arg1[3][0x2fa0].d
sub_140af2b60()
char rax_19 = sub_140b2ab80(&data_143dbb3f0, u"FullscreenDisplay=", &var_134)
arg1[0x11].b = rax_19
int64_t* rcx_9

if (rax_19 != 0 || data_143f0f227 != 0)
    int64_t* rcx_10 = var_128
    int64_t* var_120 = nullptr
    (*(*rcx_10 + 0x38))(rcx_10, &var_120)
    int64_t* rcx_11 = arg1[0x10]
    int64_t* r14_1 = var_120
    arg1[0x10] = 0
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x10))(rcx_11)
    
    if ((*(*r14_1 + 0x38))(r14_1, zx.q(var_134), &arg1[0x10]) != 0)
        int64_t* rcx_13 = arg1[0x10]
        arg1[0x10] = 0
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x10))(rcx_13)
        
        arg1[0x11].b = 0
    
    rcx_9 = var_120
else
    rcx_9 = arg1[0x10]
    arg1[0x10] = 0

if (rcx_9 != 0)
    (*(*rcx_9 + 0x10))(rcx_9)

if (arg1[0xc].d == 0xa && arg1[0xd].b != 0)
    int64_t* rcx_14 = arg1[3]
    (*(*rcx_14 + 0x718))(rcx_14)

sub_140af2b60()
bool rax_27 = sub_140b21a10(&data_143dbb3f0, u"RenderOffScreen")
*(arg1 + 0x89) = rax_27 == 0

if (rax_27 == 0)
    int64_t var_150
    int64_t* var_148
    
    if (data_143e2c164 != 0)
        int64_t* rdi_1 = arg1[3][0x28]
        
        if ((*(*rdi_1 + 0x70))(rdi_1) == 0)
            data_143e2c164 = 0
        else
            int64_t r10_1 = *rdi_1
            int64_t r8_5 = arg1[8]
            int64_t* var_118
            var_148 = &var_118
            int32_t var_3c_1 = data_1439b4aa4
            void* rax_32 = arg1[3]
            int64_t var_68 = 0
            int64_t var_44_1 = 4
            int32_t var_5c_1 = 1
            int64_t var_58_1 = 1
            int32_t var_60_1 = 0x18
            int32_t var_50_1 = 0x30
            int32_t var_4c_1 = 2
            int32_t var_48_1 = 1
            var_118 = nullptr
            var_150 = 0
            var_158 = nullptr
            int32_t rax_33 = (*(r10_1 + 0x78))(rdi_1, *(rax_32 + 0x168), r8_5, &var_68, var_158, 
                var_150, var_148)
            
            if (rax_33 s< 0)
                var_158 = arg1[3][0x2d]
                sub_140fff020(rax_33, 
                    "(Factory2->CreateSwapChainForHwnd(D3DRHI->GetDevice(), WindowHandle, "
                "&SwapChainDesc1, nullptr, nullptr, &SwapChain1))", 
                    "D:"
                "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Viewport."
                "cpp", 0x93)
            
            int64_t* rcx_20 = var_118
            int64_t* rdi_2 = arg1[0xe]
            arg1[0xe] = rcx_20
            
            if (rcx_20 != 0)
                (*(*rcx_20 + 8))()
            
            if (rdi_2 != 0)
                (*(*rdi_2 + 0x10))(rdi_2)
    
    if (arg1[0xe] == 0)
        int64_t var_b8
        
        if (*(arg2 + 0x148) != 0)
            bool cond:2_1 = arg1[0xd].b == 0
            int64_t r8_6 = arg1[8]
            int32_t var_98 = *(arg1 + 0x4c)
            int32_t var_94_1 = arg1[0xa].d
            int64_t* var_110
            var_148 = &var_110
            int32_t rax_39
            rax_39.b = cond:2_1
            int32_t var_a8_1 = rax_39
            int32_t var_74_1 = data_143e2c1b0
            int32_t var_6c_1 = data_1439b4aa4
            void* rax_42 = arg1[3]
            int64_t var_90
            __builtin_memcpy(&var_90, 
                "\x18\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x30\x00\x00\x00\x02\x"
            "00\x00\x00\x01\x00\x00\x00", 
                0x1c)
            int32_t var_70_1 = 0
            var_b8 = 0
            int64_t var_b0_1 = 0
            *(arg1 + 0x54) = 2
            var_110 = nullptr
            int64_t* rcx_22 = *(rax_42 + 0x140)
            var_150 = 0
            var_158 = &var_b8
            
            if ((*(*rcx_22 + 0x78))(rcx_22, *(rax_42 + 0x168), r8_6, &var_98, var_158, var_150, 
                    var_148) s>= 0)
                int64_t* rcx_23 = arg1[0xe]
                arg1[0xe] = 0
                
                if (rcx_23 != 0)
                    (*(*rcx_23 + 0x10))(rcx_23)
                
                int64_t* rcx_24 = var_110
                (**rcx_24)(rcx_24, &data_142efaaf8, &arg1[0xe])
                *(arg1 + 0x64) = 0x21
        
        if (arg1[0xe] == 0)
            int32_t r9_3 = data_1439b4aa8
            int32_t rcx_25 = arg1[0xc].d
            var_b8.d = *(arg1 + 0x4c)
            var_b8:4.d = arg1[0xa].d
            *(arg1 + 0x54) = r9_3
            int32_t var_dc_1 = 0
            int32_t var_c4_1 = 0
            int64_t var_b0_2 = 0
            int32_t rax_48 = sub_140fe89c0(rcx_25)
            int64_t* rdx_5 = var_128
            int64_t var_d8_1 = arg1[8]
            int32_t rax_50
            rax_50.b = arg1[0xd].b == 0
            int32_t var_e0_1 = r9_3
            int32_t var_d0_1 = rax_50
            int32_t var_cc_1 = data_143e2c1b0
            int32_t var_c8_1 = data_1439b4aa4
            void* rax_53 = arg1[3]
            int128_t var_108 = var_b8.o
            int32_t var_f0_1 = 0
            int64_t var_ec_1 = 1
            int32_t var_e4_1 = 0x30
            int32_t var_a4_1 = 0
            int64_t var_f8_1 = rax_48.q
            int64_t* rcx_26 = *(rax_53 + 0x140)
            arg1[0xe] = 0
            int32_t rax_55 =
                (*(*rcx_26 + 0x50))(rcx_26, rdx_5, &var_108, &arg1[0xe], var_158, var_150, var_148)
            
            if (rax_55 s< 0)
                int64_t var_158_1 = arg1[3][0x2d]
                sub_140fff020(rax_55, 
                    "D3DRHI->GetFactory()->CreateSwapChain(DXGIDevice, &SwapChainDesc, SwapChain."
                "GetInitReference())", 
                    "D:"
                "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/D3D11RHI/Private/Windows/WindowsD3D11Viewport."
                "cpp", 0xd4)
    
    int64_t* rcx_29 = arg1[3][0x28]
    (*(*rcx_29 + 0x40))(rcx_29, arg1[8], 1)

int64_t var_158_2 = arg1[0xe]
void*** rax_60 = sub_140fe8d70(arg1[3], arg1[0xc].d, *(arg1 + 0x4c), zx.q(arg1[0xa].d))
void* rdi_3 = arg1[0xf]
arg1[0xf] = rax_60

if (rax_60 != 0)
    rax_60[0xd][1](&rax_60[0xd])

if (rdi_3 != 0)
    (*(*(rdi_3 + 0x68) + 0x10))(rdi_3 + 0x68)

PostMessageW(arg1[8], 0xf, 0, 0)
sub_141997e80(&arg1[0x12])
int64_t* rcx_35 = var_128

if (rcx_35 != 0)
    int64_t rdx_8 = *rcx_35
    (*(rdx_8 + 0x10))(rcx_35, rdx_8)

__security_check_cookie(rax_1 ^ &var_178)
return arg1
