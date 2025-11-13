// 函数: sub_1428e3da0
// 地址: 0x1428e3da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)

if (arg2 != 0)
    int32_t var_28 = arg1
    int32_t* rcx = data_143feceb8
    int32_t var_24_1 = arg2
    void* rax_2
    void* rcx_2
    
    if (rcx != 0)
        int32_t rax_1 = sub_1428989f0(rcx, &var_28)
        rax_2 = sub_142898ea0(data_143feceb8, rax_1)
        rcx_2 = rax_2
    
    void* rax_3
    
    if (rcx == 0 || rax_2 == 0)
        rax_3 = sub_1428a8f00(&var_28, &data_143513a60, 0x1d, 0x18, sub_1428e3ea0)
        rcx_2 = rax_3
    
    if ((rcx != 0 && rax_2 != 0) || rax_3 != 0)
        if (arg3 != 0)
            *arg3 = *(rcx_2 + 8)
        
        if (arg4 != 0)
            *arg4 = *(rcx_2 + 0xc)
        
        if (arg5 != 0)
            *arg5 = *(rcx_2 + 0x10)
        
        return 1

return 0
