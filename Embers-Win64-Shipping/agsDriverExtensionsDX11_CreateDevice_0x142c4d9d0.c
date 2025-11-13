// 函数: agsDriverExtensionsDX11_CreateDevice
// 地址: 0x142c4d9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg4 == 0)
    return 2

int64_t* rbp = nullptr
arg4[1] = 0
*arg4 = 0
arg4[3].d = 0x9100
arg4[2] = 0
*(arg4 + 0x1c) = 0
arg4[4].d = 1
arg4[5] = 0

if (*(arg1 + 0x3f8) s> 0 && *(*(arg1 + 0x3f0) + 0x10) == 0x1002)
    int32_t rax_2 = arg3[4].d
    *(arg1 + 0x100) = rax_2
    
    if (rax_2 == 1 || rax_2 == 2)
        HMODULE hModule = sub_142c516a0("aticfx64.dll", "aticfx32.dll")
        *(arg1 + 0x108) = hModule
        
        if (hModule != 0)
            int64_t rax_3 = GetProcAddress(hModule, "AmdExtRequestMgpuAppControl")
            
            if (rax_3 != 0)
                int32_t rcx_1 = *(arg1 + 0x100)
                
                if (rcx_1 == 2)
                    rax_3(rcx_1)
                else if (rcx_1 == 1)
                    rax_3(3)

int32_t result = sub_142c4d8e0(arg1)

if (result != 0)
    return result

HMODULE hModule_1 = LoadLibraryA("d3d11.dll")
*(arg1 + 0x110) = hModule_1

if (hModule_1 == 0)
    return 4

int64_t rax_4 = GetProcAddress(hModule_1, "D3D11CreateDeviceAndSwapChain")
int64_t rax_5 = GetProcAddress(*(arg1 + 0x110), "D3D11CreateDevice")

if (rax_5 == 0 || rax_4 == 0)
    return 5

int64_t rax_6 = GetProcAddress(*(arg1 + 0x118), "AmdD3D11CreateDeviceExt")
int64_t rax_7 = GetProcAddress(*(arg1 + 0x118), "AmdD3D11CreateDeviceAndSwapChainExt")
int32_t r9_1
bool cond:1_1

if (rax_6 == 0 || rax_7 == 0)
    int64_t rax_14 = arg2[6]
    int32_t r10_2 = *(arg2 + 0x2c)
    int32_t r11_2 = arg2[5].d
    int64_t rbp_1 = arg2[4]
    uint64_t r9_2 = zx.q(arg2[3].d)
    int64_t r8_2 = arg2[2]
    uint64_t rdx_3 = zx.q(arg2[1].d)
    int64_t rcx_10 = *arg2
    int32_t rax_15
    
    if (rax_14 == 0)
        rax_15, r9_1 =
            rax_5(rcx_10, rdx_3, r8_2, r9_2, rbp_1, r11_2, r10_2, arg4, &arg4[3], &arg4[1])
    else
        rax_15, r9_1 = rax_4(rcx_10, rdx_3, r8_2, r9_2, rbp_1, r11_2, r10_2, rax_14, &arg4[2], 
            arg4, &arg4[3], &arg4[1])
    
    cond:1_1 = rax_15 s>= 0
    goto label_142c4dd5f

int64_t var_58
__builtin_memset(&var_58, 0, 0x30)

if (arg3 != 0)
    int16_t* rdx = *arg3
    
    if (rdx != 0 || arg3[1] != 0)
        int16_t* const rcx_7 = &data_142d40450
        var_58.d = 2
        rbp = &var_58
        int16_t* const rax_8 = &data_142d40450
        
        if (rdx != 0)
            rax_8 = rdx
        
        int16_t* const var_48_1 = rax_8
        int64_t var_40
        var_40.d = arg3[2].d
        int16_t* rax_10 = arg3[1]
        
        if (rax_10 != 0)
            rcx_7 = rax_10
        
        int16_t* const var_38_1 = rcx_7
        int64_t var_30
        var_30.d = *(arg3 + 0x14)

int64_t rax_12 = arg2[6]
int32_t r10_1 = *(arg2 + 0x2c)
int32_t r11_1 = arg2[5].d
int64_t r15_2 = arg2[4]
uint64_t r9 = zx.q(arg2[3].d)
int64_t r8 = arg2[2]
uint64_t rdx_1 = zx.q(arg2[1].d)
int64_t rcx_8 = *arg2
int32_t rax_13

if (rax_12 == 0)
    rax_13, r9_1 = rax_6(rcx_8, rdx_1, r8, r9, r15_2, r11_1, r10_1, arg4, &arg4[3], &arg4[1], rbp)
else
    rax_13, r9_1 = rax_7(rcx_8, rdx_1, r8, r9, r15_2, r11_1, r10_1, rax_12, &arg4[2], arg4, 
        &arg4[3], &arg4[1], rbp)

cond:1_1 = rax_13 s>= 0

if (rax_13 != 0)
label_142c4dd5f:
    
    if (not(cond:1_1))
        return 1
else
    *(arg4 + 0x1c) |= 0x80000

sub_142c4d380(arg1, arg3, arg4, r9_1)
return 0
