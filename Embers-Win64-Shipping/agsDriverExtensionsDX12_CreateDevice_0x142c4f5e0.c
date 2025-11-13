// 函数: agsDriverExtensionsDX12_CreateDevice
// 地址: 0x142c4f5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2

if (arg1 == 0 || arg4 == 0 || arg2 == 0 || *arg2 == 0)
    return 2

int64_t* r15 = nullptr
*arg4 = 0
arg4[1].d = 0
int32_t result = sub_142c4f010(arg1, *arg2)

if (result != 0)
    return result

int32_t rbp_1 = -0x7fffbffb
int64_t rax = GetProcAddress(*(arg1 + 0x1a8), "AmdExtD3DCreateInterface")
void* var_58
int64_t* var_50

if (rax == 0)
label_142c4f75f:
    int64_t rax_7 = GetProcAddress(*(arg1 + 0x1a0), "D3D12CreateDevice")
    
    if (rax_7 != 0)
        rbp_1 = rax_7(*rsi, zx.q(rsi[3].d), &rsi[1], arg1 + 0x1b0, var_58, var_50)
    
    if (rbp_1 != 0)
        return 1
else
    int64_t* arg_8 = nullptr
    rax(0, &data_1436b0db0, &arg_8)
    int64_t* r11_1 = arg_8
    
    if (r11_1 == 0)
        goto label_142c4f75f
    
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x30)
    
    if (arg3 != 0)
        int16_t* rcx_1 = *arg3
        
        if (rcx_1 != 0 || arg3[1] != 0)
            int16_t* const rdx_1 = &data_142d40450
            var_48.d = 1
            r15 = &var_48
            int16_t* const rax_1 = &data_142d40450
            
            if (rcx_1 != 0)
                rax_1 = rcx_1
            
            int16_t* const var_38_1 = rax_1
            int64_t var_30
            var_30.d = arg3[2].d
            int16_t* rax_3 = arg3[1]
            
            if (rax_3 != 0)
                rdx_1 = rax_3
            
            int16_t* const var_28_1 = rdx_1
            int64_t var_20
            var_20.d = *(arg3 + 0x14)
    
    var_50 = r15
    var_58 = arg1 + 0x1b0
    int32_t rax_6 = (*(*r11_1 + 0x18))(r11_1, *rsi, zx.q(rsi[3].d), &rsi[1], var_58, var_50)
    rbp_1 = rax_6
    
    if (rax_6 == 0)
        arg4[1].d |= 0x800
    
    int64_t* rcx_3 = arg_8
    int64_t rdx_3 = *rcx_3
    (*(rdx_3 + 0x10))(rcx_3, rdx_3)
    
    if (rbp_1 != 0)
        goto label_142c4f75f
*arg4 = *(arg1 + 0x1b0)
sub_142c4eda0(arg1, arg3[3].d, arg4)
return 0
