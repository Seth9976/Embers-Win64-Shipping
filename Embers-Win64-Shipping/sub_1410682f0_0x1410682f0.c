// 函数: sub_1410682f0
// 地址: 0x1410682f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t r14 = *(arg1 + 0x18)
sub_1419a21e0(0)
sub_141014780(r14)
int32_t i_2 = (1 << (data_1439c7a34).b) - 1

if (i_2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_2)
    int32_t rsi_1 = temp0_1
    int32_t i
    
    do
        void* rbp_1 = *(r14 + (zx.q(rsi_1) << 3) + 0x9d8)
        sub_1410177f0(**(rbp_1 + 0x6d8))
        
        if (data_1439c79e0 != 0)
            sub_1410177f0(**(rbp_1 + 0x720))
        
        int32_t rax_4 = 1 << rsi_1.b
        rsi_1 = 0x20
        i = not.d(rax_4) & i_2
        i_2 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            rsi_1 = temp0_2
    while (i != 0)

int64_t* rcx_7 = *(arg1 + 0x1b0)

if (rcx_7 != 0)
    (*(*rcx_7 + 8))(rcx_7)

int32_t i_1 = 0

if (*(arg1 + 0xa0) u> 0)
    do
        int64_t rax_9 = *(arg1 + 0x80)
        int64_t i_3 = sx.q(i_1)
        void* j = *(rax_9 + (i_3 << 3))
        
        if (j != 0)
            do
                *(j + 0x10) = 1
                *(*(j + 0xc0) + 0xfe) = 0
                void* rax_8 = *(j + 0x120)
                j = rax_8 - 0x68
                
                if (rax_8 == 0)
                    j = nullptr
            while (j != 0)
            
            rax_9 = *(arg1 + 0x80)
        
        void* rcx_8 = *(rax_9 + (i_3 << 3))
        *(rax_9 + (i_3 << 3)) = 0
        
        if (rcx_8 != 0)
            (*(*(rcx_8 + 0x68) + 0x10))(rcx_8 + 0x68)
        
        int64_t rax_13 = *(arg1 + 0xc8)
        void* j_1 = *(rax_13 + (i_3 << 3))
        
        if (j_1 != 0)
            do
                *(j_1 + 0x10) = 1
                *(*(j_1 + 0xc0) + 0xfe) = 0
                void* rax_12 = *(j_1 + 0x120)
                j_1 = rax_12 - 0x68
                
                if (rax_12 == 0)
                    j_1 = nullptr
            while (j_1 != 0)
            
            rax_13 = *(arg1 + 0xc8)
        
        void* rcx_10 = *(rax_13 + (i_3 << 3))
        *(rax_13 + (i_3 << 3)) = 0
        
        if (rcx_10 != 0)
            (*(*(rcx_10 + 0x68) + 0x10))(rcx_10 + 0x68)
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xa0))

int32_t rcx_12 = arg5

if (rcx_12 == 0)
    rcx_12 = *(arg1 + 0x58)

int32_t var_68
int32_t var_50

if (*(arg1 + 0x4c) != arg2 || *(arg1 + 0x50) != arg3 || *(arg1 + 0x58) != rcx_12)
    *(arg1 + 0x4c) = arg2
    *(arg1 + 0x50) = arg3
    *(arg1 + 0x58) = rcx_12
    
    if (data_1439b4b18 != 0 && arg4 != 0)
        var_50 = arg2
        int32_t var_4c_1 = arg3
        int64_t var_48_1 = 0
        int32_t rax_15 = sub_140fe89c0(rcx_12)
        int64_t* rcx_13 = *(arg1 + 0x60)
        int32_t var_40_1 = rax_15
        int64_t var_3c_1 = 0
        
        if ((*(*rcx_13 + 0x70))(rcx_13, &var_50) s< 0 && *(arg1 + 0x5c) == 0)
            if (*(arg1 + 0x55) == 0)
                GetFocus()
                IsIconic(*(arg1 + 0x40))
                sub_1419a21e0(0)
                int64_t* rcx_16 = *(arg1 + 0x60)
                int32_t rax_20 = (*(*rcx_16 + 0x50))(rcx_16, zx.q(*(arg1 + 0x54)), 0)
                
                if (rax_20 s>= 0)
                    *(arg1 + 0x5c) = 1
                else if (rax_20 != 0x887a0022 && *(arg1 + 0x54) != 0)
                    int64_t* rcx_17 = *(arg1 + 0x60)
                    
                    if ((*(*rcx_17 + 0x50))(rcx_17, 0, 0) s>= 0)
                        *(arg1 + 0x54) = 0
                        *(arg1 + 0x5c) = 1
            else
                sub_1419a21e0(0)
                uint64_t r8 = zx.q(*(arg1 + 0x50))
                uint64_t rdx_1 = zx.q(*(arg1 + 0x4c))
                var_68 = *(arg1 + 0x58)
                *(arg1 + 0x55) = 0
                sub_1410682f0(arg1, rdx_1, r8, 0, var_68)

if (*(arg1 + 0x54) != arg4)
    *(arg1 + 0x54) = arg4
    *(arg1 + 0x5c) = 0
    
    if (data_1439b4b18 != 0)
        if (*(arg1 + 0x55) == 0)
            GetFocus()
            IsIconic(*(arg1 + 0x40))
            sub_1419a21e0(0)
            int64_t* rcx_20 = *(arg1 + 0x60)
            int32_t rax_25 = (*(*rcx_20 + 0x50))(rcx_20, zx.q(*(arg1 + 0x54)), 0)
            
            if (rax_25 s>= 0)
                *(arg1 + 0x5c) = 1
            else if (rax_25 != 0x887a0022 && *(arg1 + 0x54) != 0)
                int64_t* rcx_21 = *(arg1 + 0x60)
                
                if ((*(*rcx_21 + 0x50))(rcx_21, 0, 0) s>= 0)
                    *(arg1 + 0x54) = 0
                    *(arg1 + 0x5c) = 1
        else
            sub_1419a21e0(0)
            uint64_t r8_1 = zx.q(*(arg1 + 0x50))
            uint64_t rdx_3 = zx.q(*(arg1 + 0x4c))
            var_68 = *(arg1 + 0x58)
            *(arg1 + 0x55) = 0
            sub_1410682f0(arg1, rdx_3, r8_1, 0, var_68)

sub_141068990(arg1)
uint32_t result = zx.d(data_143f0f227)

if (result.b != 0)
    if (sub_1419a4730() == 0)
        result = zx.d(data_143f0f227)
        
        if (result.b != 0)
            if (*(arg1 + 0x68) != 0)
                int64_t* rcx_24 = *(arg1 + 0x70)
                result = (*(*rcx_24 + 0x140))(rcx_24, 0, 0, 0, var_68)
                
                if (result s< 0)
                    var_50.q = 0
                    int32_t* var_60_1 = &var_50
                    int64_t var_48_2 = 0
                    var_68.q = 0
                    result = sub_14106a020(result, 
                        "SwapChain4->SetHDRMetaData(DXGI_HDR_METADATA_TYPE_NONE, 0, nullptr)", 
                        "D:"
                    "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
                    "cpp", 
                        0x267, var_68)
                
                *(arg1 + 0x68) = 0
            
            if (*(arg1 + 0x6c) != 0)
                int64_t* rcx_26 = *(arg1 + 0x70)
                int32_t var_58 = 0
                result = (*(*rcx_26 + 0x128))(rcx_26, 0, &var_58)
                
                if (result s>= 0 && (var_58.b & 1) != 0)
                    int64_t* rcx_27 = *(arg1 + 0x70)
                    result = (*(*rcx_27 + 0x130))(rcx_27, 0)
                    
                    if (result s< 0)
                        var_50.q = 0
                        int32_t* var_60_2 = &var_50
                        int64_t var_48_3 = 0
                        var_68.q = 0
                        result = sub_14106a020(result, "SwapChain4->SetColorSpace1(NewColorSpace)", 
                            "D:"
                        "/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport."
                        "cpp", 
                            0x233, var_68)
                    
                    *(arg1 + 0x6c) = 0
    else
        result = sub_141060540(arg1)

__security_check_cookie(rax_1 ^ &var_88)
return result
