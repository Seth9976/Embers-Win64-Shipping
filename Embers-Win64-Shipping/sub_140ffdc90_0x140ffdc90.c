// 函数: sub_140ffdc90
// 地址: 0x140ffdc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f0f180
int64_t entry_r9
int64_t rax

if (rcx != 0)
    rax, entry_r9 = (*(*rcx + 0x690))(rcx)

if (arg1 != 0x887a0005)
    return 

void arg_8

if (data_143e2b8b6 != 0)
    entry_r9 = GFSDK_Aftermath_GetDeviceStatus(&arg_8)
data_143dbb3e0 = 1

if (arg2 != 0)
    int32_t rax_3 = (*(*arg2 + 0x138))(arg2)
    void* const rcx_3 = &data_142e5f8f8
    
    if (rax_3 == 0x887a0020)
        rcx_3 = u"INTERNAL_ERROR"
    else if (rax_3 == 0)
        rcx_3 = u"S_OK"
    
    if (rax_3 == 0x887a0007)
        rcx_3 = u"RESET"
    else if (rax_3 == 0x887a0001)
        rcx_3 = u"INVALID_CALL"
    else if (rax_3 == 0x887a0005)
        rcx_3 = u"REMOVED"
    else if (rax_3 == 0x887a0006)
        rcx_3 = u"HUNG"
    
    void* const var_18 = rcx_3
    sub_140af98a0("Unknown", 0xc6, 
        Unreal Engine is exiting due to D3D device being lost. (Error: 0x%X - '%s')", zx.q(rax_3))
    return sub_140afbb40() __tailcall

sub_140af98a0("Unknown", 0xca, 
    Unreal Engine is exiting due to D3D device being lost. D3D device was not available to assertain "
"DXGI cause.", entry_r9)
sub_140afbb40()
