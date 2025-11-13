// 函数: sub_14102ca50
// 地址: 0x14102ca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t result = *(arg1 + 0x138)
void* rdi = *(result + 0x20)

if (*(arg1 + 0x135) != 0)
    result = (*(*(rdi + 0x830) + 0x10))(rdi + 0x830)

if (*(rdi + 0x839) != 0)
    int32_t rax_3 = sub_14104bdf0(rdi + 0x830, arg2)
    int64_t rsi_1 = sx.q(*(arg1 + 0x248))
    int32_t rcx_2 = (rsi_1 + 1).d
    *(arg1 + 0x248) = rcx_2
    
    if (rcx_2 s> *(arg1 + 0x24c))
        sub_1405a4cf0(arg1 + 0x240)
    
    *(*(arg1 + 0x240) + (rsi_1 << 2)) = rax_3
    result = sub_141038170(arg1, 1)
    
    if (*(arg1 + 0x135) != 0 && data_143e2c7c8 != 0)
        result = GFSDK_Aftermath_SetEventMarker(*(*(arg1 + 0x1c8) + 0x50), *(arg1 + 0x240), 
            zx.q(*(arg1 + 0x248) << 2))

if (data_143e2c338 != 0)
    result = *(arg1 + 0x3500)
    void* rdi_2 = *(result + 0x38)
    
    if (rdi_2 != 0)
        void var_c8
        sub_1408f2b40(&var_c8, arg2)
        int64_t var_40
        result = agsDriverExtensionsDX12_PushMarker(rdi_2, *(*(arg1 + 0x1c8) + 0x30), var_40)
        int64_t var_48
        
        if (var_48 != 0)
            result = sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_e8)
return result
